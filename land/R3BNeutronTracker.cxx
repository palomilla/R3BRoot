#include "R3BNeutronTracker.h"
#include "TClonesArray.h"
#include "FairRootManager.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"


// includes for modeling
#include "TGeoManager.h"
#include "TParticle.h"
#include "TVirtualMC.h"
#include "TGeoMatrix.h"
#include "TGeoMaterial.h"
#include "TGeoMedium.h"
#include "TGeoBBox.h"
#include "TGeoCompositeShape.h"
#include "TGeoShapeAssembly.h"


#include "TVector3.h"
#include "TMath.h"
#include "TRandom.h"
#include "TH1F.h"
#include "TH2F.h"
#include <string>
#include <iostream>


#include "R3BLandPoint.h"
#include "R3BLandDigi.h"
#include "R3BMCTrack.h"		
#include "R3BNeutronTrack.h"

using std::cout;
using std::endl;

		

R3BNeutronTracker::R3BNeutronTracker() :
  FairTask("R3B Land Digitization scheme ") { 
}


R3BNeutronTracker::~R3BNeutronTracker() {
}


void R3BNeutronTracker::SetParContainers() {

  // Get run and runtime database
  FairRunAna* run = FairRunAna::Instance();
  if ( ! run ) Fatal("SetParContainers", "No analysis run");

  FairRuntimeDb* rtdb = run->GetRuntimeDb();
  if ( ! rtdb ) Fatal("SetParContainers", "No runtime database");

  fLandDigiPar = (R3BLandDigiPar*)(rtdb->getContainer("R3BLandDigiPar"));

  if ( fLandDigiPar ) {
      cout << "-I- R3BLandDigitizer::SetParContainers() "<< endl;
      cout << "-I- Container R3BLandDigiPar  loaded " << endl;
  }

}




InitStatus R3BNeutronTracker::Init() {

  // Get input array 
  FairRootManager* ioman = FairRootManager::Instance();
  if ( ! ioman ) Fatal("Init", "No FairRootManager");
  fLandPoints = (TClonesArray*) ioman->GetObject("LandPoint");
  fLandMCTrack = (TClonesArray*) ioman->GetObject("MCTrack");
  fLandDigi = (TClonesArray*) ioman->GetObject("LandDigi");

  // New structure created by the Neutron Tracker
  fNeutronTracks = new TClonesArray("R3BNeutronTrack");
  ioman->Register("LandNeTracks", "Neutron Tracks", fNeutronTracks, kTRUE);

  npaddles = fLandDigiPar->GetMaxPaddle()+1;
  nplanes = fLandDigiPar->GetMaxPlane();
  cout<<"# paddles: "<<npaddles<<"  # planes: "<<nplanes<<endl;
  amu = 931.494028; //atomic mass unit in MeV/c**2
  mNeutron=1.0086649*amu;
  c = 2.99792458E8;
  cMedia = 20.;// speed of light in material in [cm/ns]
  eventNo=0;
  
  PM_hit=new PM_HIT[npaddles];
  PRIM_part=new PRIM_PART[11];
  PRIM_frag=new PRIM_PART[1];
  NEUT1_hit=new NEUT1_HIT[100];
  NEUT2_hit=new NEUT2_HIT[100];
  Cluster=new CLUSTER[100];

  hNeutmult1 = new TH1F("Neutmult1","Neutron multiplicity from beta beam considerations",20,-0.5,19.5);
  hNeutmult1->GetXaxis()->SetTitle("Multiplicity");
  hNeutmult1->GetYaxis()->SetTitle("Counts");
     
  hNeutmult2 = new TH1F("Neutmult2","Neutron multiplicity from speed of light considerations",20,-0.5,19.5);
  hNeutmult2->GetXaxis()->SetTitle("Multiplicity");
  hNeutmult2->GetYaxis()->SetTitle("Counts");

  hNeutmult3 = new TH1F("Neutmult3","Neutron multiplicity from cluster size considerations",20,-0.5,19.5);
  hNeutmult3->GetXaxis()->SetTitle("Multiplicity");
  hNeutmult3->GetYaxis()->SetTitle("Counts");

  hNeutmult4 = new TH1F("Neutmult4","Neutron multiplicity from multiplicity considerations",20,-0.5,19.5);
  hNeutmult4->GetXaxis()->SetTitle("Multiplicity");
  hNeutmult4->GetYaxis()->SetTitle("Counts");

  hNeutmult5 = new TH1F("Neutmult5","Neutron multiplicity from energy considerations",10,-0.5,9.5);
  hNeutmult5->GetXaxis()->SetTitle("Number of Neutrons");
  hNeutmult5->GetYaxis()->SetTitle("Counts");

  hNeutmult6 = new TH1F("Neutmult6","Neutron multiplicity from multiplicity and energy considerations",20,-0.5,19.5);
  hNeutmult6->GetXaxis()->SetTitle("Multiplicity");
  hNeutmult6->GetYaxis()->SetTitle("Counts");

  hMinv = new TH1F("Minv","Minv",1000,0.,10.);
  hMinv->GetXaxis()->SetTitle("Erel (MeV)");
  hMinv->GetYaxis()->SetTitle("Counts");

  hMinv0 = new TH1F("Minv0","Minv0",1000,0.,10.);
  hMinv0->GetXaxis()->SetTitle("Erel (MeV)");
  hMinv0->GetYaxis()->SetTitle("Counts");

  hDeltaPx1 = new TH1F("DeltaPx1","difference in reconstucted momenta px (ideal case)",1000,-50.,50.);
  hDeltaPx1->GetXaxis()->SetTitle("Delta Px (MeV/c)");
  hDeltaPx1->GetYaxis()->SetTitle("Counts");

  hDeltaPy1 = new TH1F("DeltaPy1","difference in reconstucted momenta py (ideal case)",1000,-50.,50.);
  hDeltaPy1->GetXaxis()->SetTitle("Delta Py (MeV/c)");
  hDeltaPy1->GetYaxis()->SetTitle("Counts");

  hDeltaPz1 = new TH1F("DeltaPz1","difference in reconstucted momenta pz (ideal case)",1000,-150.,50.);
  hDeltaPz1->GetXaxis()->SetTitle("Delta Pz (MeV/c)");
  hDeltaPz1->GetYaxis()->SetTitle("Counts");

  hDeltaPx2 = new TH1F("DeltaPx2","difference in reconstucted momenta px (exp case)",1000,-50.,50.);
  hDeltaPx2->GetXaxis()->SetTitle("Delta Px (MeV/c)");
  hDeltaPx2->GetYaxis()->SetTitle("Counts");

  hDeltaPy2 = new TH1F("DeltaPy2","difference in reconstucted momenta py (exp case)",1000,-50.,50.);
  hDeltaPy2->GetXaxis()->SetTitle("Delta Py (MeV/c)");
  hDeltaPy2->GetYaxis()->SetTitle("Counts");
 
  hDeltaPz2 = new TH1F("DeltaPz2","difference in reconstucted momenta pz (exp case)",1000,-150.,50.);
  hDeltaPz2->GetXaxis()->SetTitle("Delta Pz (MeV/c)");
  hDeltaPz2->GetYaxis()->SetTitle("Counts");

  hClusterSize = new TH1F("ClusterSize","number of paddles in a cluster",500,0.,500);
  hClusterSize->GetXaxis()->SetTitle("Cluster Size");
  hClusterSize->GetYaxis()->SetTitle("Counts");

  hClusterEnergy = new TH1F("ClusterEnergy","Cluster energy",5000,0.,500);
  hClusterEnergy->GetXaxis()->SetTitle("Energy (MeV)");
  hClusterEnergy->GetYaxis()->SetTitle("Counts");

  hClusters = new TH1F("Cluster","Number of clusters in one event",20,0.,20);
  hClusters->GetXaxis()->SetTitle("number of clusters");
  hClusters->GetYaxis()->SetTitle("Counts");

  hHits = new TH1F("Hits","Number of hits in one event",50,0.,50);
  hHits->GetXaxis()->SetTitle("number of hits");
  hHits->GetYaxis()->SetTitle("Counts");

  hClusterNo_vs_Size = new TH2F("hClusterNo_vs_Size","Cluster length vs. Size",100,0.,100,100,0.,100);
  hClusterNo_vs_Size->GetXaxis()->SetTitle("Total cluster length");
  hClusterNo_vs_Size->GetYaxis()->SetTitle("No of clusters");

  return kSUCCESS;

}


// -------------------------------------------------------------------------

// -----   Public method Exec   --------------------------------------------
void R3BNeutronTracker::Exec(Option_t* opt) {
 
//-Reset entries in output arrays
//-Reset local arrays 
   Reset();
   eventNo+=1;
   cout<<"Neutron #: "<<eventNo-1<<endl;

//   cout<<"beam energy: "<<beamEnergy<<" AMeV"<<endl;
//   cout<<"beam velocity: "<<beamBeta<<endl;
   Int_t nentries = fLandDigi->GetEntries();
   Double_t temp[npaddles][14];
   Int_t nPrim=0;
   Double_t momentumT[10],momentumX[10],momentumY[10],momentumZ[10],energy[10];
   Double_t beta[10], gamma[10],rr,s;  
   Double_t sum_momentumX,sum_momentumY,sum_momentumZ,sum_masses,sum_energy;
   Double_t betaNeutron,E_lab,pnzcm;
   
   // Get parameter from original neutrons and fragment
   // Access to Monte Carlo Info
   //  get object from the TclonesArray at index=TrackID
   R3BMCTrack *aTrack1 = (R3BMCTrack*) fLandMCTrack->At(0);
   Int_t prim = aTrack1->GetMotherId();

   while (prim < 0 ) {
      
      Int_t particleID = aTrack1->GetPdgCode();
	 
/*
      cout << "primary particle " << PRIM_part[nPrim].pdg<<"  "<< endl;
      cout << "mass " << PRIM_part[nPrim].M<< endl;
      cout << "px, py, pz " << PRIM_part[nPrim].px << "  " << 
          PRIM_part[nPrim].py << "  " << PRIM_part[nPrim].pz << endl;
      cout << "Ptransversal, P total " << PRIM_part[nPrim].pt <<
      	  "  " << PRIM_part[nPrim].p << endl;
*/

      if(particleID==2112){
         //neutron
         PRIM_part[nPrim].M = aTrack1->GetMass();
	 PRIM_part[nPrim].A=1.0086649;
	 PRIM_part[nPrim].M=PRIM_part[nPrim].A*amu;
         PRIM_part[nPrim].pdg = aTrack1->GetPdgCode();
         PRIM_part[nPrim].px = aTrack1->GetPx()*1000.;  
         PRIM_part[nPrim].py = aTrack1->GetPy()*1000.;  
         PRIM_part[nPrim].pz = aTrack1->GetPz()*1000.;  
         PRIM_part[nPrim].pt = aTrack1->GetPt()*1000.;  
         PRIM_part[nPrim].p = aTrack1->GetP()*1000.;  
         PRIM_part[nPrim].x = aTrack1->GetStartX();  
         PRIM_part[nPrim].y = aTrack1->GetStartY();  
         PRIM_part[nPrim].z = aTrack1->GetStartZ();  
         PRIM_part[nPrim].t = aTrack1->GetStartT();
      }
      else if(particleID==2212){
         //proton
         PRIM_part[nPrim].M = aTrack1->GetMass();
	 PRIM_part[nPrim].A=1.0072765;
	 PRIM_part[nPrim].M=PRIM_part[nPrim].A*amu;
         PRIM_part[nPrim].pdg = aTrack1->GetPdgCode();
         PRIM_part[nPrim].px = aTrack1->GetPx()*1000.;  
         PRIM_part[nPrim].py = aTrack1->GetPy()*1000.;  
         PRIM_part[nPrim].pz = aTrack1->GetPz()*1000.;  
         PRIM_part[nPrim].pt = aTrack1->GetPt()*1000.;  
         PRIM_part[nPrim].p = aTrack1->GetP()*1000.;  
         PRIM_part[nPrim].x = aTrack1->GetStartX();  
         PRIM_part[nPrim].y = aTrack1->GetStartY();  
         PRIM_part[nPrim].z = aTrack1->GetStartZ();  
         PRIM_part[nPrim].t = aTrack1->GetStartT();
      }
      else{
	 //fragment
         PRIM_frag[0].M = aTrack1->GetMass();
         PRIM_frag[0].A=131.;
         PRIM_frag[0].M=PRIM_frag[0].A*amu;
         PRIM_frag[0].pdg = aTrack1->GetPdgCode();
         PRIM_frag[0].px = aTrack1->GetPx()*1000.;  
         PRIM_frag[0].py = aTrack1->GetPy()*1000.;  
         PRIM_frag[0].pz = aTrack1->GetPz()*1000.;  
         PRIM_frag[0].pt = aTrack1->GetPt()*1000.;  
         PRIM_frag[0].p = aTrack1->GetP()*1000.;  
         PRIM_frag[0].x = aTrack1->GetStartX();  
         PRIM_frag[0].y = aTrack1->GetStartY();  
         PRIM_frag[0].z = aTrack1->GetStartZ();  
         PRIM_frag[0].t = aTrack1->GetStartT();
      }

      nPrim=nPrim+1;
      aTrack1 = (R3BMCTrack*) fLandMCTrack->At(nPrim);
      if (aTrack1!=0) prim = aTrack1->GetMotherId();
      else prim= 1;
   }
   
   Double_t sumTotalEnergy=0;   
   for (Int_t l=0;l<nentries;l++){
      //cout<<"loop over entries "<<l<<endl;
      // Get the Land Object in array
      R3BLandDigi *land_obj = (R3BLandDigi*) fLandDigi->At(l);


      temp[l][0] = int(land_obj->GetPaddleNr())-1; //note that paddle starts at 1 
      temp[l][1] = land_obj->GetTdcL();  
      temp[l][2] = land_obj->GetTdcR();  
      temp[l][3] = land_obj->GetTdc();  
      temp[l][4] = land_obj->GetQdcL();  
      temp[l][5] = land_obj->GetQdcR();  
      temp[l][6] = land_obj->GetQdc();  
      temp[l][7] = land_obj->GetXX();  
      temp[l][8] = land_obj->GetYY();  
      temp[l][9] = land_obj->GetZZ();  
      temp[l][10] = land_obj->GetX0();  
      temp[l][11] = land_obj->GetY0();  
      temp[l][12] = land_obj->GetZ0();  
      temp[l][13] = land_obj->GetT0();  

      sumTotalEnergy += temp[l][6];
      
   }//loop over entries

   //cout<<"sort hits"<<endl;
   // sort hits for time
   for (Int_t i=0;i<nentries;i++){
      Double_t min = 100000.;
      Int_t index = 0;
      for (Int_t j=0;j<nentries;j++){
         if(temp[j][3] < min){
	    min = temp[j][3];
	    index = j;
	 }
      }

      PM_hit[i].paddle = temp[index][0];
      PM_hit[i].tdcL = temp[index][1];  
      PM_hit[i].tdcR = temp[index][2];  
      PM_hit[i].tdc = temp[index][3];  
      PM_hit[i].qdcL = temp[index][4];  
      PM_hit[i].qdcR = temp[index][5];  
      PM_hit[i].qdc = temp[index][6];  
      PM_hit[i].x = temp[index][7];  
      PM_hit[i].y = temp[index][8];  
      PM_hit[i].z = temp[index][9];  
      PM_hit[i].x0 = temp[index][10];  
      PM_hit[i].y0 = temp[index][11];  
      PM_hit[i].z0 = temp[index][12];  
      PM_hit[i].t0 = temp[index][13];  
      temp[index][3] = 100000.;

/*
      cout<<"hit # "<<i<<endl;
      cout<<"paddle # "<<PM_hit[i].paddle<<endl;
      cout<<"tdc "<<PM_hit[i].tdcL<<"  "<<PM_hit[i].tdcR<<"  "<<PM_hit[i].tdc<<endl;
      cout<<"qdc "<<PM_hit[i].qdcL<<"  "<<PM_hit[i].qdcR<<"  "<<PM_hit[i].qdc<<endl;
      cout<<"pos "<<PM_hit[i].x<<"  "<<PM_hit[i].y<<"  "<<PM_hit[i].z<<endl;
*/           
   }	  

   // find clusters and mark the position of the cluster by 
   // time of first hit, position of first hit, and total energy 
   Double_t dio=10.61; //2 times the diogonal of one paddle
   Double_t distance, posx, posy, posz, post, delt,delz;
   Int_t hits=0;
   Int_t Nclusters=0;
//   cout<<"nentries: "<<nentries<<endl;
   hHits->Fill(nentries);
   if (nentries>0) {

      Nclusters=1;
      Cluster[0].xStart = PM_hit[0].x;
      Cluster[0].yStart = PM_hit[0].y;
      Cluster[0].zStart = PM_hit[0].z;
      Cluster[0].tStart = PM_hit[0].tdc;
      Cluster[0].e = PM_hit[0].qdc;
      Cluster[0].size = 1;
      Cluster[0].tStop = PM_hit[0].tdc;
      Cluster[0].xEnd = PM_hit[0].x;
      Cluster[0].yEnd = PM_hit[0].y;
      Cluster[0].zEnd = PM_hit[0].z;

      for (Int_t l=1;l<nentries;l++){
         temp[l-1][0] = PM_hit[l].x;
         temp[l-1][1] = PM_hit[l].y;  
         temp[l-1][2] = PM_hit[l].z;       
         temp[l-1][3] = PM_hit[l].tdc;       
         temp[l-1][4] = PM_hit[l].qdc;
         temp[l-1][5] = PM_hit[l].paddle;
      }
   
      posx = PM_hit[0].x;
      posy = PM_hit[0].y;
      posz = PM_hit[0].z;
      
      post= PM_hit[0].tdc;
      hits=nentries-1;
//      cout<<"reference pos "<<posx<<"  "<<posy<<"  "<<posz<<endl;
//      cout<<"reference paddle "<< PM_hit[0].paddle<<endl;	 

      for (Int_t l=0;l<nentries-1;l++){
         Double_t min=1000.;
	 Double_t mindt=0.;
	 Double_t maxz=-10.;
         Int_t index = 0;
	 Int_t neighbor=0;
         // find next neighbor with smallest time difference
	 Int_t i=0;
         while (i<hits){
            distance = sqrt((temp[i][0]-posx)*(temp[i][0]-posx)+
    	                   (temp[i][1]-posy)*(temp[i][1]-posy)+
     		           (temp[i][2]-posz)*(temp[i][2]-posz));
	    delt = temp[i][3] - post;
	    delz = temp[i][2] - posz;
/*
            cout<<"current pos "<<temp[i][0]<<"  "<<temp[i][1]<<"  "<<temp[i][2]<<endl;
            cout<<"current paddle "<< temp[i][5]<<endl;	 
            cout<<"distance x "<<temp[i][0]-posx<<endl;
            cout<<"distance y "<<temp[i][1]-posy<<endl;
            cout<<"distance z "<<temp[i][2]-posz<<endl;
*/	    
            
	    // sometimes two hits are close together but one is earlier although it is slightly further away.
	    // in this case one has to take the earlier one:
            if(distance < dio && delt>0.0 && delt<1.){
               if (delz>maxz){
	          maxz=delz;
	          neighbor +=1;
                  min = distance;
	          mindt = delt;
//                  index = i;
	       }
            }
	    i+=1;
         }
	 if (neighbor>0) {  
	    // inside cluster
            Cluster[Nclusters-1].e = Cluster[Nclusters-1].e + temp[index][4];
            Cluster[Nclusters-1].size = Cluster[Nclusters-1].size + 1;
            Cluster[Nclusters-1].tStop = temp[index][3];
            Cluster[Nclusters-1].xEnd = temp[index][0];
            Cluster[Nclusters-1].yEnd = temp[index][1];
            Cluster[Nclusters-1].zEnd = temp[index][2];
         }
         else {
            // new cluster
            Nclusters+=1;     
            Cluster[Nclusters-1].xStart = temp[index][0];
            Cluster[Nclusters-1].yStart = temp[index][1];
            Cluster[Nclusters-1].zStart = temp[index][2];
            Cluster[Nclusters-1].tStart = temp[index][3];
            Cluster[Nclusters-1].e = temp[index][4];
            Cluster[Nclusters-1].size = 1;
            Cluster[Nclusters-1].tStop = temp[index][3];
            Cluster[Nclusters-1].xEnd = temp[index][0];
            Cluster[Nclusters-1].yEnd = temp[index][1];
            Cluster[Nclusters-1].zEnd = temp[index][2];
	 }
         posx = temp[index][0];
         posy = temp[index][1];
         posz = temp[index][2];
         post = temp[index][3];

         hits=hits-1;
//         cout<<"reference pos "<<posx<<"  "<<posy<<"  "<<posz<<endl;
//         cout<<"reference paddle "<< temp[index][5]<<endl;	 

         for (i=index;i<hits;i++){
            temp[i][0] = temp[i+1][0];
            temp[i][1] = temp[i+1][1];
            temp[i][2] = temp[i+1][2];
            temp[i][3] = temp[i+1][3];
            temp[i][4] = temp[i+1][4];
         }

      }

//      cout<< "number of clusters: " << Nclusters  <<  endl;
      hClusters->Fill(Nclusters);
      Double_t MaxSize=0;
      Double_t MaxEnergy=0;

      for (Int_t i=0;i<Nclusters;i++){
/*         
         cout<< "cluster start: " << Cluster[i].xStart<<"  "<<Cluster[i].yStart<<"  "<<Cluster[i].zStart << endl;
         cout<< "cluster end  : " << Cluster[i].xEnd<<"  "<<Cluster[i].yEnd<<"  "<<Cluster[i].zEnd << endl;
         cout<< "cluster energy: " << Cluster[i].e << endl;
         cout<< "cluster time start: " << Cluster[i].tStart << endl;
         cout<< "cluster time stop: " << Cluster[i].tStop << endl;
         cout<< "cluster size: " << Cluster[i].size << endl;
*/
         if(Cluster[i].size>MaxSize) MaxSize=Cluster[i].size;
         if(Cluster[i].e>MaxEnergy) MaxEnergy=Cluster[i].e;
//         hClusterSize->Fill(Cluster[i].size);	
         hClusterEnergy->Fill(Cluster[i].e);	

      }
      
      hClusterSize->Fill(Nclusters/MaxSize);	
//      hClusterEnergy->Fill(MaxEnergy);	

      Double_t x0=0.;
      Double_t y0=0.;
      Double_t z0=0.;
      Double_t t0=0.;

      Double_t v1xmin,v1ymin,v1zmin,v1xmax,v1ymax,v1zmax;
      Double_t v4xmin,v4ymin,v4zmin,v4xmax,v4ymax,v4zmax;
      Double_t v3xmin,v3ymin,v3zmin,v3xmax,v3ymax,v3zmax;
      Double_t v6xmin,v6ymin,v6zmin,v6xmax,v6ymax,v6zmax;
      Int_t elastic[100],origin[100];
      Int_t elasticCount=0;

      for(Int_t i=0;i<100;i++){
         elastic[i]=0;
	 origin[i]=-1;
      }
//    search for scattering
//    elastic scattering of particle 1 (neutron) on a particle 2 (proton) at rest.
//    Outgoing particles are 3 (scattered neutron) and 4 (recoil proton).
//    angle of particles after scattering is theta3 and theta4
//    K is kinetic energy, p is momentum


      for (Int_t i=0;i<Nclusters;i++){
//    incoming particle
      // vector from previous interaction to present interaction      
      Double_t v1x=Cluster[i].xStart-x0;
      Double_t v1y=Cluster[i].yStart-y0;
      Double_t v1z=Cluster[i].zStart-z0;
      // time difference and distance between previous interaction to present interaction
      Double_t dt=Cluster[i].tStart-t0;	 
      Double_t dr=sqrt(v1x*v1x + v1y*v1y + v1z*v1z);

      Double_t beta1=dr/dt*1.E7/c;
      Double_t beta1max=(dr+dio)/dt*1.E7/c;
      Double_t beta1min=(dr-dio)/dt*1.E7/c;
      if (beta1max>0.99) beta1max=0.99;
      if (beta1min<0.) beta1min=0.;
	 
      Double_t gamma1=1./sqrt(1.-beta1*beta1);  
      Double_t gamma1min=1./sqrt(1.-beta1min*beta1min);  
      Double_t gamma1max=1./sqrt(1.-beta1max*beta1max);  
      Double_t p1=beta1*gamma1*1.*amu;
      Double_t p1min=beta1min*gamma1min*1.*amu;
      Double_t p1max=beta1max*gamma1max*1.*amu;
      Double_t En1=sqrt(p1*p1+amu*amu);
      Double_t En1min=sqrt(p1min*p1min+amu*amu);
      Double_t En1max=sqrt(p1max*p1max+amu*amu);
      Double_t K1=En1-amu;	    
      Double_t K1min=En1min-amu;	    
      Double_t K1max=En1max-amu;	    

/*
      cout<<"incoming particle:"<<endl;
      cout<<"beta1: "<<beta1<<endl;
      cout<<"p1: "<<p1<<" "<<p1min<<"  "<<p1max<<endl;
      cout<<"K1: "<<K1<<" "<<K1min<<"  "<<K1max<<endl;
*/	    
      // particle 4 is proton
      Double_t v4x=Cluster[i].xEnd-Cluster[i].xStart;
      Double_t v4y=Cluster[i].yEnd-Cluster[i].yStart;
      Double_t v4z=Cluster[i].zEnd-Cluster[i].zStart;
      //vector perpendicular to scattering plane   
      Double_t v5x=v1y*v4z-v1z*v4y;
      Double_t v5y=v1z*v4x-v1x*v4z;
      Double_t v5z=v1x*v4y-v1y*v4x;
	 
      Double_t tempAngle;
      dt=Cluster[i].tStop-Cluster[i].tStart;
      dr=sqrt(v4x*v4x + v4y*v4y + v4z*v4z);
      	    
      Double_t theta4Measured=acos((v1x*v4x + v1y*v4y + v1z*v4z )
	       /sqrt(v1x*v1x + v1y*v1y + v1z*v1z)/sqrt(v4x*v4x + v4y*v4y + v4z*v4z));		
      Double_t theta4Measuredmin=theta4Measured;
      Double_t theta4Measuredmax=theta4Measured;
      if((v4x*v4x + v4y*v4y + v4z*v4z)==0.){
	 theta4Measured=1.55;
	 theta4Measuredmin=0.;
	 theta4Measuredmax=1.55;
      }
      for(Int_t k=1;k<3;k++){
	 if (k==1){
	    v4xmin=v4x-dio;
	 } 
  	 else{
	    v4xmin=v4x+dio;
	 }
	 for(Int_t l=1;l<3;l++){
	    if(l==1){
	       v4ymin=v4y-dio;
	    }
	    else{
	       v4ymin=v4y+dio;
	    }
	    for(Int_t m=1;m<3;m++){
               if(m==1){
	          v4zmin=v4z-dio;
	       }
	       else{
	          v4zmin=v4z+dio;
	       }
               tempAngle=acos((v1x*v4xmin + v1y*v4ymin + v1z*v4zmin) 
	          /sqrt(v1x*v1x + v1y*v1y + v1z*v1z)
		  /sqrt(v4xmin*v4xmin + v4ymin*v4ymin + v4zmin*v4zmin));
	       if (tempAngle>theta4Measuredmax) theta4Measuredmax=tempAngle;		     
	       if (tempAngle<theta4Measuredmin) theta4Measuredmin=tempAngle;		     
            }
	 }
      }
      if (theta4Measuredmax>1.55) theta4Measuredmax=1.55;

/*
      cout<<"Angle of proton measured: "<<theta4Measured*180./3.14<<"  "
      <<theta4Measuredmin*180./3.14<<"  "<<theta4Measuredmax*180./3.14<<endl;
      cout<<"Energy of proton measured: "<<Cluster[i].e*4.<<endl;
*/

//       calculate velocity of neutron after scattering
         Int_t j=i+1;
         while (j<Nclusters){
	 
//            cout<< "check between "<<i<<" and "<<j<<endl;	    
/*
            cout<< "cluster start: " << Cluster[j].xStart<<"  "<<Cluster[j].yStart<<"  "<<Cluster[j].zStart << endl;
            cout<< "cluster end  : " << Cluster[j].xEnd<<"  "<<Cluster[j].yEnd<<"  "<<Cluster[j].zEnd << endl;
            cout<< "cluster energy: " << Cluster[j].e << endl;
            cout<< "cluster time start: " << Cluster[j].tStart << endl;
            cout<< "cluster time stop: " << Cluster[j].tStop << endl;
            cout<< "cluster size: " << Cluster[j].size << endl;
*/	    
	    // Vector of scattered neutron    
	    Double_t v3x=Cluster[j].xStart-Cluster[i].xStart;
	    Double_t v3y=Cluster[j].yStart-Cluster[i].yStart;
	    Double_t v3z=Cluster[j].zStart-Cluster[i].zStart;
         
	    Double_t v6x=v1y*v3z-v1z*v3y;
	    Double_t v6y=v1z*v3x-v1x*v3z;
	    Double_t v6z=v1x*v3y-v1y*v3x;
	 
	    Double_t theta56=acos((v5x*v6x + v5y*v6y + v5z*v6z )
	             /sqrt(v5x*v5x + v5y*v5y + v5z*v5z)/sqrt(v6x*v6x + v6y*v6y + v6z*v6z));		     
	    if((v5x*v5x + v5y*v5y + v5z*v5z)==0. || (v6x*v6x + v6y*v6y + v6z*v6z)==0.){
	       theta56=3.14;
	    }
	    
	    Double_t theta3=acos((v1x*v3x + v1y*v3y + v1z*v3z )
	             /sqrt(v1x*v1x + v1y*v1y + v1z*v1z)/sqrt(v3x*v3x + v3y*v3y + v3z*v3z));		     
            Double_t theta3min=theta3;
            Double_t theta3max=theta3;

            for(Int_t k=1;k<3;k++){
	       if (k==1){
	          v3xmin=v3x-dio;
	       } 
  	       else{
	          v3xmin=v3x+dio;
	       }
	       for(Int_t l=1;l<3;l++){
	          if(l==1){
	             v3ymin=v3y-dio;
	          }
	          else{
	             v3ymin=v3y+dio;
	          }
	          for(Int_t m=1;m<3;m++){
                     if(m==1){
	                v3zmin=v3z-dio;
	             }
	             else{
	                v3zmin=v3z+dio;
	             }
                     tempAngle=acos((v1x*v3xmin + v1y*v3ymin + v1z*v3zmin) 
	                /sqrt(v1x*v1x + v1y*v1y + v1z*v1z)
		        /sqrt(v3xmin*v3xmin + v3ymin*v3ymin + v3zmin*v3zmin));
		     if (tempAngle>theta3max) theta3max=tempAngle;		     
		     if (tempAngle<theta3min) theta3min=tempAngle;		     
                  }

	       }
	    }

            if (theta3max>1.55) theta3max=1.55;

            dt=Cluster[j].tStart-Cluster[i].tStart;
            dr=sqrt(v3x*v3x + v3y*v3y + v3z*v3z);

	    Double_t beta3=dr/dt*1.E7/c;
	    Double_t beta3max=(dr+dio)/dt*1.E7/c;
	    Double_t beta3min=(dr-dio)/dt*1.E7/c;
  	    if (beta3>1.){
//	       cout<<"faster than speed of light!!!"<<endl;
	    }

//	    if (beta3max>0.8) beta3max=0.8;
  	    if (beta3max>0.99) beta3max=0.99;
	    if (beta3min<0.) beta3min=0.;

	    Double_t gamma3=1./sqrt(1.-beta3*beta3);  
	    Double_t gamma3min=1./sqrt(1.-beta3min*beta3min);  
	    Double_t gamma3max=1./sqrt(1.-beta3max*beta3max);  
            Double_t p3=beta3*gamma3*1.*amu;
            Double_t p3min=beta3min*gamma3min*1.*amu;
            Double_t p3max=beta3max*gamma3max*1.*amu;
	    if (p3>p1) p3=p1;
	    Double_t En3=sqrt(p3*p3+amu*amu);
	    Double_t En3min=sqrt(p3min*p3min+amu*amu);
   	    Double_t En3max=sqrt(p3max*p3max+amu*amu);
	    Double_t K3=En3-amu;
	    Double_t K3min=En3min-amu;	    
  	    Double_t K3max=En3max-amu;	    
	    
            Double_t Ma,Mb,Mc,Md,Ka,Thc,Ei,Pa,AA,BB,a,b,cc,Pc1,Pc2;
            Double_t Pd1,Thd1,Ec1,Ed1,Kc1,Kd1,Qsqr1;
	    Double_t Pd2,Thd2,Ec2,Ed2,Kc2,Kd2,Qsqr2;
	    Ma = 1.0087*amu;
	    Mb = 1.0073*amu;
	    Mc = Ma;
	    Md = Mb;
// calculate momentum of scattered proton and neutron
	    Ka = K1;
	    Thc = theta3;
	    Ei=Ma +Mb +Ka;
	    Pa = sqrt( Ka * Ka +2. * Ka * Ma );
	    AA = Ei * Ei - Md * Md +Mc * Mc - Pa * Pa;
	    BB = AA * AA - 4. * Ei * Ei * Mc * Mc;	
	    a = 4. * Pa * Pa * cos(Thc) * cos(Thc) - 4. * Ei * Ei;
	    b = 4. * AA * Pa * cos(Thc);
	    cc = BB;	
	    Pc1 = -b/(2. * a)+sqrt( (b * b)/( 4. * a * a) - ( cc / a ) );
	    if(Pc1<0.) Pc1=0.;
	    Pc2 = -b/(2. * a)-sqrt( (b * b)/( 4. * a * a) - ( cc / a ) );	
  	    Pd1 = sqrt( Pc1 * Pc1 +Pa * Pa - 2. * Pc1 * Pa * cos(Thc) );
	    Thd1 = acos( ( Pc1 * Pc1 - Pd1 * Pd1 - Pa * Pa) / ( -2. * Pd1 * Pa ) ) ;
	    Ec1 = sqrt( Pc1 * Pc1 - -Ma * Ma );
	    Ed1 = sqrt( Pd1 * Pd1 - -Mb * Mb );
	    Kc1 = Ec1 - Ma;
	    Kd1 = Ed1 - Mb;
	    Qsqr1 = (- ( Ka - Kc1 ) * (Ka - Kc1 ) +  ( Pa * Pa + Pc1 * Pc1 - 2. * Pa * Pc1 * cos(Thc) ))/197.327/197.327;
            Double_t p3b=Pc1;
	    Double_t K3b=Kc1;
	    Double_t E3b=Ec1;	    
	    Double_t theta4=Thd1;
            Double_t p4b=Pd1;
	    Double_t K4b=Kd1;
	    Double_t E4b=Ed1;

            Double_t p3bmin=p3b;
            Double_t p3bmax=p3b;
            Double_t p4bmin=p4b;
            Double_t p4bmax=p4b;
	    Double_t theta4min=theta4;
	    Double_t theta4max=theta4;
	    
// calculate minimum and maximum(within errors) momentum of scattered proton and neutron
            for (Int_t m=1;m<5;m++){
	       if(m==1){
	          Ka = K1min;
	          Thc = theta3min;
	       }
	       if(m==2){
	          Ka = K1min;
	          Thc = theta3max;
	       }
	       if(m==3){
	          Ka = K1max;
	          Thc = theta3min;
	       }
	       if(m==4){
	          Ka = K1max;
	          Thc = theta3max;
	       }

	       Ei=Ma +Mb +Ka;
	       Pa = sqrt( Ka * Ka +2. * Ka * Ma );
	       AA = Ei * Ei - Md * Md +Mc * Mc - Pa * Pa;
	       BB = AA * AA - 4. * Ei * Ei * Mc * Mc;	
	       a = 4. * Pa * Pa * cos(Thc) * cos(Thc) - 4. * Ei * Ei;
	       b = 4. * AA * Pa * cos(Thc);
	       cc = BB;	
	       Pc1 = -b/(2. * a)+sqrt( (b * b)/( 4. * a * a) - ( cc / a ) );
	       if (((b * b)/( 4. * a * a) - ( cc / a ))<0.) Pc1=0.;
	       if(Pc1<0.) Pc1=0.;
	       Pc2 = -b/(2. * a)-sqrt( (b * b)/( 4. * a * a) - ( cc / a ) );	
  	       Pd1 = sqrt( Pc1 * Pc1 +Pa * Pa - 2. * Pc1 * Pa * cos(Thc) );
	       Thd1 = acos( ( Pc1 * Pc1 - Pd1 * Pd1 - Pa * Pa) / ( -2. * Pd1 * Pa ) ) ;
      
               if(Pc1<p3bmin) p3bmin=Pc1;
               if(Pc1>p3bmax) p3bmax=Pc1;
               if(Pd1<p4bmin) p4bmin=Pd1;
               if(Pd1>p4bmax) p4bmax=Pd1;
               if(Thd1<theta4min) theta4min=Thd1;
               if(Thd1>theta4max) theta4max=Thd1;
            }

	    Ec1 = sqrt( p3bmin * p3bmin - -Ma * Ma );
	    Kc1 = Ec1 - Ma;
	    Ed1 = sqrt( p4bmin * p4bmin - -Mb * Mb );
	    Kd1 = Ed1 - Mb;
	    Qsqr1 = (- ( Ka - Kc1 ) * (Ka - Kc1 ) +  ( Pa * Pa + Pc1 * Pc1 - 2. * Pa * Pc1 * cos(Thc) ))/197.327/197.327;
	    Double_t K3bmin=Kc1;
	    Double_t E3bmin=Ec1;	    
	    Double_t K4bmin=Kd1;
	    Double_t E4bmin=Ed1;
	    Ec1 = sqrt( p3bmax * p3bmax - -Ma * Ma );
	    Kc1 = Ec1 - Ma;
	    Ed1 = sqrt( p4bmax * p4bmax - -Mb * Mb );
	    Kd1 = Ed1 - Mb;
	    Qsqr1 = (- ( Ka - Kc1 ) * (Ka - Kc1 ) +  ( Pa * Pa + Pc1 * Pc1 - 2. * Pa * Pc1 * cos(Thc) ))/197.327/197.327;

	    Double_t K3bmax=Kc1;
	    Double_t E3bmax=Ec1;	    
	    Double_t K4bmax=Kd1;
	    Double_t E4bmax=Ed1;

/*	
	    cout<<"angle of proton calculated: "<<theta4*180./3.14<<"  "
	    <<theta4min*180./3.14<<"  "<<theta4max*180./3.14<<endl;
	    cout<<"Energy of proton calculated: "<<K4b<<" "<<K4bmin<<"  "<<K4bmax<<endl;
            cout<<endl;
            cout<<"outgoing particle:";
	    cout<<"beta3 measured: "<<beta3<<" "<<beta3min<<"  "<<beta3max<<endl;
   	    cout<<"p3 measured: "<<p3<<" "<<p3min<<"  "<<p3max<<endl;
	    cout<<"p3 calculated: "<<p3b<<" "<<p3bmin<<"  "<<p3bmax<<endl;
	    cout<<"theta3 measured: "<<theta3*180./3.14<<"  "
	    <<theta3min*180./3.14<<"  "<<theta3max*180./3.14<<endl;
	    cout<<"winkel: "<<theta56*180./3.14<<endl;
*/            
	    
// decide if Cluster comes from scattered neutron or another neutron is needed!
            Double_t protonEnergy=8.76839+4.13858*Cluster[i].e-0.00337368*Cluster[i].e*Cluster[i].e;
	    if(p3bmax>p3min && p3bmin<p3max && theta4max>theta4Measuredmin && theta4min<theta4Measuredmax &&
	       K4bmax>protonEnergy && K4bmin<protonEnergy && theta56*180./3.14>120.){

//               cout<<"!!!! elastic scattering !!!!"<<endl;
	       //remember which hit was elastic scattering
	       elastic[elasticCount]=j;
	       origin[elasticCount]=i;
	       elasticCount=elasticCount+1;
	       
	       j=Nclusters;
               x0=Cluster[i].xStart;
               y0=Cluster[i].yStart;
               z0=Cluster[i].zStart;
               t0=Cluster[i].tStart;
	    }
	    else{
//               cout<<"!!!! No elastic scattering !!!!"<<endl;
/*
	       if(p3bmax<=p3min || p3bmin>=p3max) {

	          cout<<"because of p3"<<endl;
   	          cout<<"p3 measured: "<<p3<<" "<<p3min<<"  "<<p3max<<endl;
	          cout<<"p3 calculated: "<<p3b<<" "<<p3bmin<<"  "<<p3bmax<<endl;		  

	       }
	       if(theta4max<=theta4Measuredmin || theta4min>=theta4Measuredmax) {
	          cout<<"because of theta4"<<endl;
	          cout<<"Angle of proton measured: "<<theta4Measured*180./3.14<<"  "
	              <<theta4Measuredmin*180./3.14<<"  "<<theta4Measuredmax*180./3.14<<endl;
	          cout<<"angle of proton calculated: "<<theta4*180./3.14<<"  "
	              <<theta4min*180./3.14<<"  "<<theta4max*180./3.14<<endl;
	       }
	       if(K4bmax<=protonEnergy || K4bmin>=protonEnergy) {
	          cout<<"because of K4"<<endl;
	          cout<<"Energy of proton measured: "<<protonEnergy<<endl;
	          cout<<"Energy of proton calculated: "<<K4b<<" "<<K4bmin<<"  "<<K4bmax<<endl;
	       }
	       if(theta56*180./3.14<=120.) {
	          cout<<"because of theta56"<<endl;
	          cout<<"theta56: "<<theta56*180./3.14<<endl;
	       }
*/
	       j=j+1;
	    }
	 } // end of while j

      } // end of while i

      for (Int_t i=elasticCount-1;i>=0;i--){
//         cout<<"elastic scattering: "<<elastic[i]<<endl;
//         cout<<"origin: "<<origin[i]<<endl;
	 Nclusters=Nclusters-1;
         //Cluster size of elastic scattering event is added to the original one
//         cout<<"adding "<<Cluster[origin[i]].size<<" and "<<Cluster[elastic[i]].size<<endl;
	 Cluster[origin[i]].size += Cluster[elastic[i]].size;
	 
         for (Int_t k=elastic[i];k<Nclusters;k++){         
	    // delete Cluster 	    
            Cluster[k].xStart = Cluster[k+1].xStart;
            Cluster[k].yStart = Cluster[k+1].yStart;
            Cluster[k].zStart = Cluster[k+1].zStart;
            Cluster[k].tStart = Cluster[k+1].tStart;
            Cluster[k].e = Cluster[k+1].e;
            Cluster[k].size = Cluster[k+1].size;
            Cluster[k].tStop = Cluster[k+1].tStop;
            Cluster[k].xEnd = Cluster[k+1].xEnd;
            Cluster[k].yEnd = Cluster[k+1].yEnd;
            Cluster[k].zEnd = Cluster[k+1].zEnd;

         }
	 
      }
//      cout<< "number of clusters: " << Nclusters  <<  endl;

      // determine how many neutrons from sum energy considerations

      Double_t neutmult4=0.116*nentries/beamEnergy*400.;
//      cout<< "neutmult from multiplicity: " << neutmult4  <<  endl;
      hNeutmult4->Fill(neutmult4);

      Double_t neutmult5=0.009756*sumTotalEnergy/beamEnergy*600.;
//      cout<< "neutmult from energy: " << neutmult5  <<  endl;
      if(neutmult5<0.5) neutmult5=0.5;
      hNeutmult5->Fill(neutmult5);
      Int_t numneut=(int)(neutmult5+0.5);

      hNeutmult6->Fill((neutmult4+neutmult5)/2.);

      for (Int_t i=0;i<Nclusters;i++){
/*
         cout<< "Vor sortieren !!!!!!"<<endl;
         cout<< "cluster start: " << Cluster[i].xStart<<"  "<<Cluster[i].yStart<<"  "<<Cluster[i].zStart << endl;
         cout<< "cluster end  : " << Cluster[i].xEnd<<"  "<<Cluster[i].yEnd<<"  "<<Cluster[i].zEnd << endl;
         cout<< "cluster energy: " << Cluster[i].e << endl;
         cout<< "cluster time start: " << Cluster[i].tStart << endl;
         cout<< "cluster time stop: " << Cluster[i].tStop << endl;
         cout<< "cluster size: " << Cluster[i].size << endl;
*/
         Double_t dt=Cluster[i].tStart;
         Double_t dr=sqrt(Cluster[i].xStart*Cluster[i].xStart + Cluster[i].yStart*Cluster[i].yStart +
	 Cluster[i].zStart*Cluster[i].zStart);
         Double_t betaCluster=dr/dt*1.E7/c;
//	 cout<<"cluster beta: "<<betaCluster<<endl;
      }

      // From the sum energy we know best how many neutrons there are. 
      // Now we have to find the correct position and time for them
      // we sort according to closest beta compared to beam
      for (Int_t k=0;k<Nclusters;k++){ 
         temp[k][0] = Cluster[k].xStart;
         temp[k][1] = Cluster[k].yStart;
         temp[k][2] = Cluster[k].zStart;
         temp[k][3] = Cluster[k].tStart;
         temp[k][4] = Cluster[k].e;
         temp[k][5] = Cluster[k].size;
         temp[k][6] = Cluster[k].tStop;
         temp[k][7] = Cluster[k].xEnd;
         temp[k][8] = Cluster[k].yEnd;
         temp[k][9] = Cluster[k].zEnd;
      }

      for (Int_t i=0;i<Nclusters;i++){ 
         Double_t maxEnergy=0;
         Double_t betaMin=1.;
	 Int_t index=0;
         for (Int_t k=0;k<Nclusters;k++){ 

            Double_t dt=temp[k][3];
            Double_t dr=sqrt(temp[k][0]*temp[k][0] + temp[k][1]*temp[k][1] +
	                     temp[k][2]*temp[k][2]);
            Double_t betaCluster=dr/dt*1.E7/c;
	    Double_t deltaBeta = TMath:: Abs(betaCluster-beamBeta);
            if(deltaBeta<betaMin){
	       betaMin=deltaBeta;
	       index=k;
	    }
/*
            if(temp[k][4]>maxEnergy){
	       maxEnergy=temp[k][4];
	       index=k;
	    }
*/	    
         }
         Cluster[i].xStart = temp[index][0];
         Cluster[i].yStart = temp[index][1];
         Cluster[i].zStart = temp[index][2];
         Cluster[i].tStart = temp[index][3];
         Cluster[i].e = temp[index][4];
         Cluster[i].size = temp[index][5];
         Cluster[i].tStop = temp[index][6];
         Cluster[i].xEnd = temp[index][7];
         Cluster[i].yEnd = temp[index][8];
         Cluster[i].zEnd = temp[index][9];
         temp[index][3] = 10000.;
         temp[index][4] = 10000.;

      }
      for (Int_t i=0;i<Nclusters;i++){
/*
         cout<< "Nach sortieren !!!!!!"<<endl;
         cout<< "cluster start: " << Cluster[i].xStart<<"  "<<Cluster[i].yStart<<"  "<<Cluster[i].zStart << endl;
         cout<< "cluster end  : " << Cluster[i].xEnd<<"  "<<Cluster[i].yEnd<<"  "<<Cluster[i].zEnd << endl;
         cout<< "cluster energy: " << Cluster[i].e << endl;
         cout<< "cluster time start: " << Cluster[i].tStart << endl;
         cout<< "cluster time stop: " << Cluster[i].tStop << endl;
         cout<< "cluster size: " << Cluster[i].size << endl;
*/
         Double_t dt=Cluster[i].tStart;
         Double_t dr=sqrt(Cluster[i].xStart*Cluster[i].xStart + Cluster[i].yStart*Cluster[i].yStart +
	 Cluster[i].zStart*Cluster[i].zStart);
         Double_t betaCluster=dr/dt*1.E7/c;
//	 cout<<"cluster beta: "<<betaCluster<<endl;
      }


      for (Int_t i=0;i<numneut;i++){
         NEUT1_hit[i].x = Cluster[i].xStart;
         NEUT1_hit[i].y = Cluster[i].yStart;
         NEUT1_hit[i].z = Cluster[i].zStart;
         NEUT1_hit[i].t = Cluster[i].tStart;
      }	 




      Int_t deleteMe[100];
      
      for (Int_t k=0;k<100;k++){
         deleteMe[k]=0;
      }
      for (Int_t k=0;k<Nclusters;k++){ 
         // check if the time is reonable by beta calculations 
         Double_t dt=Cluster[k].tStart;
         Double_t dr=sqrt(Cluster[k].xStart*Cluster[k].xStart + Cluster[k].yStart*Cluster[k].yStart +
	 Cluster[k].zStart*Cluster[k].zStart);
         Double_t betaCluster=dr/dt*1.E7/c;
//	 cout<<"betaCluster: "<<betaCluster<<endl;
         if( TMath:: Abs(betaCluster-beamBeta)/beamBeta>0.01){
            // delete this cluster because it is not inside beta window
	      deleteMe[k]=1;
//	      cout<<"delete cluster"<<endl;
	 }
      }

      Double_t totalLength=0.;
      for (Int_t i=0;i<Nclusters;i++){         
         totalLength += Cluster[i].size;
      }
      for (Int_t i=Nclusters;i>0;i--){         
         if (deleteMe[i]){
	    Nclusters -=1;
            for (Int_t k=i;k<Nclusters;k++){         
	       // delete Cluster 	    
               Cluster[k].xStart = Cluster[k+1].xStart;
               Cluster[k].yStart = Cluster[k+1].yStart;
               Cluster[k].zStart = Cluster[k+1].zStart;
               Cluster[k].tStart = Cluster[k+1].tStart;
               Cluster[k].e = Cluster[k+1].e;
               Cluster[k].size = Cluster[k+1].size;
               Cluster[k].tStop = Cluster[k+1].tStop;
               Cluster[k].xEnd = Cluster[k+1].xEnd;
               Cluster[k].yEnd = Cluster[k+1].yEnd;
               Cluster[k].zEnd = Cluster[k+1].zEnd;
            }
	 }
      }
      Int_t neutmult3=Nclusters;
//      cout<< "neutmult from number of cluster: " << neutmult3  <<  endl;
      hNeutmult3->Fill(neutmult3);
    
      for (Int_t i=0;i<Nclusters;i++){
/*         
         cout<< "cluster start: " << Cluster[i].xStart<<"  "<<Cluster[i].yStart<<"  "<<Cluster[i].zStart << endl;
         cout<< "cluster end  : " << Cluster[i].xEnd<<"  "<<Cluster[i].yEnd<<"  "<<Cluster[i].zEnd << endl;
         cout<< "cluster energy: " << Cluster[i].e << endl;
         cout<< "cluster time start: " << Cluster[i].tStart << endl;
         cout<< "cluster time stop: " << Cluster[i].tStop << endl;
         cout<< "cluster size: " << Cluster[i].size << endl;
*/
         Double_t dt=Cluster[i].tStart;
         Double_t dr=sqrt(Cluster[i].xStart*Cluster[i].xStart + Cluster[i].yStart*Cluster[i].yStart +
	 Cluster[i].zStart*Cluster[i].zStart);
         Double_t betaCluster=dr/dt*1.E7/c;
//	 cout<<"cluster beta: "<<betaCluster<<endl;
      }
    
      hClusterNo_vs_Size->Fill(nentries,totalLength);      



      // Reconstruct neutron momentum with first hit.

      // First with the ideal values from simulations.
      sum_energy=0.;
      sum_momentumX=0.;
      sum_momentumY=0.;
      sum_momentumZ=0.;
      sum_masses=0.;

      for (Int_t i=0;i<nPrim;i++){
      
         if(PRIM_part[i].pdg==2112){
            beta[i]=PRIM_part[i].p/sqrt(PRIM_part[i].p*PRIM_part[i].p+
                    PRIM_part[i].M*PRIM_part[i].M); // beta
            gamma[i]=1./sqrt(1.-beta[i]*beta[i]); // gamma         
            momentumT[i]=PRIM_part[i].p;
            momentumZ[i]=PRIM_part[i].pz;
            momentumX[i]=PRIM_part[i].px;
            momentumY[i]=PRIM_part[i].py;
            energy[i] = gamma[i]*PRIM_part[i].A*amu; //total energy
/*
            cout<<" beta gamma "<<beta[i]<<"  "<<gamma[i]<<endl;
            cout<<" energy "<<energy[i]<<endl;
            cout<<" momentum "<<PRIM_part[i].px<<"  "<<PRIM_part[i].py<<"  "<<PRIM_part[i].pz<<endl;
*/	 
	 
	    sum_energy+=energy[i];
	    sum_momentumX+=momentumX[i];
	    sum_momentumY+=momentumY[i];
	    sum_momentumZ+=momentumZ[i];
	    sum_masses+=PRIM_part[i].M;
      	 }
      }
      // fragment: This information have to come later from the Tracker
      Double_t beta_frag=PRIM_frag[0].p/sqrt(PRIM_frag[0].p*PRIM_frag[0].p+
                         PRIM_frag[0].M*PRIM_frag[0].M); // beta
      Double_t gamma_frag=1./sqrt(1.-beta_frag*beta_frag); // gamma         
      Double_t energy_frag = gamma_frag*PRIM_frag[0].A*amu; //total energy

      sum_energy+=energy_frag;
      sum_momentumX+=PRIM_frag[0].px;
      sum_momentumY+=PRIM_frag[0].py;
      sum_momentumZ+=PRIM_frag[0].pz;
      sum_masses+=PRIM_frag[0].M;
/*      
      cout<<" frag beta gamma "<<beta_frag<<"  "<<gamma_frag<<endl;
      cout<<" frag energy "<<energy_frag<<endl;
      cout<<" frag momentum "<<PRIM_frag[0].px<<"  "<<PRIM_frag[0].py<<"  "<<PRIM_frag[0].pz<<endl;
*/	 
      
      // calculate invariant mass with ideal quantities for a check
      Double_t xinv0;
      xinv0=(sqrt(sum_energy*sum_energy-
           (sum_momentumX*sum_momentumX + sum_momentumY*sum_momentumY +
	   sum_momentumZ*sum_momentumZ))
           - sum_masses );
      hMinv0->Fill(xinv0);
//      cout<<"xinv0 "<<xinv0<<endl;
              

      // Now reconstruction of momenta with real measured quantities

      sum_energy=0.;
      sum_momentumX=0.;
      sum_momentumY=0.;
      sum_momentumZ=0.;
      sum_masses=0.;


      for (Int_t i=0;i<numneut;i++){
         // add up momentum of neutrons
	 // neutron: beta is calculated with position and time of first hit
         s = sqrt(NEUT1_hit[i].x*NEUT1_hit[i].x+
                  NEUT1_hit[i].y*NEUT1_hit[i].y+
                  NEUT1_hit[i].z*NEUT1_hit[i].z);

         rr = sqrt(NEUT1_hit[i].x*NEUT1_hit[i].x+
                   NEUT1_hit[i].y*NEUT1_hit[i].y);
	    
	    
	 beta[i]=s/NEUT1_hit[i].t*1.E7/c;
	 gamma[i]=1./sqrt(1.-beta[i]*beta[i]); // gamma 
         momentumT[i]=beta[i]*gamma[i]*mNeutron;
         momentumZ[i]=cos(atan(rr/NEUT1_hit[i].z))*momentumT[i];
         momentumX[i]=momentumZ[i]*NEUT1_hit[i].x/NEUT1_hit[i].z;
         momentumY[i]=momentumZ[i]*NEUT1_hit[i].y/NEUT1_hit[i].z;
         energy[i] = gamma[i]*1.0086649*amu; //total energy neutron

/*
	 cout<<" beta gamma "<<beta[i]<<"  "<<gamma[i]<<endl;
	 cout<<" momentum T "<<momentumT[i]<<endl;
	 cout<<" momentum "<<momentumX[i]<<"  "<<momentumY[i]<<"  "<<momentumZ[i]<<endl;
*/

/*
         // Lorentz Transformation in z
         E_lab=sqrt(PRIM_part[i].pz*PRIM_part[i].pz+PRIM_part[i].M*PRIM_part[i].M);
         beta[i]=PRIM_part[i].pz/sqrt(PRIM_part[i].pz*PRIM_part[i].pz+
                 PRIM_part[i].M*PRIM_part[i].M); // beta
         gamma[i]=1./sqrt(1.-beta[i]*beta[i]); // gamma 
         pnzcm=-1.*beta[i]*gamma[i]*E_lab+gamma[i]*momentumZ[i];

         hDeltaPx2 ->Fill(momentumX[i]-PRIM_part[i].px,1.);
         hDeltaPy2 ->Fill(momentumY[i]-PRIM_part[i].py,1.);
         hDeltaPz2 ->Fill(pnzcm,1.);
*/     

	 sum_energy+=energy[i];
	 sum_momentumX+=momentumX[i];
	 sum_momentumY+=momentumY[i];
	 sum_momentumZ+=momentumZ[i];
	 sum_masses+=mNeutron;
/*
	 cout<<"Sum energy " <<sum_energy<<endl;
	 cout<<"sum momentumX " <<sum_momentumX<<endl;
	 cout<<"sum momentumY " <<sum_momentumY<<endl;
	 cout<<"sum momentumZ " <<sum_momentumZ<<endl;
	 cout<<"sum masses " <<sum_masses<<endl;
*/
      }
      	
      // fragment: This information have to come later from the Tracker
/*
      Double_t beta_frag=PRIM_frag[0].p/sqrt(PRIM_frag[0].p*PRIM_frag[0].p+
                         PRIM_frag[0].M*PRIM_frag[0].M); // beta
      Double_t gamma_frag=1./sqrt(1.-beta_frag*beta_frag); // gamma         
      Double_t energy_frag = gamma_frag*PRIM_frag[0].A; //total energy
*/
      sum_energy+=energy_frag;
      sum_momentumX+=PRIM_frag[0].px;
      sum_momentumY+=PRIM_frag[0].py;
      sum_momentumZ+=PRIM_frag[0].pz;
      sum_masses+=PRIM_frag[0].M;
/*      
      cout<<" frag beta gamma "<<beta_frag<<"  "<<gamma_frag<<endl;
      cout<<" frag energy "<<energy_frag<<endl;
      cout<<" frag momentum "<<PRIM_frag[0].px<<"  "<<PRIM_frag[0].py<<"  "<<PRIM_frag[0].pz<<endl;
*/
      // calculate invariant mass
      Double_t xinv;
      xinv=(sqrt(sum_energy*sum_energy-
           (sum_momentumX*sum_momentumX + sum_momentumY*sum_momentumY +
	   sum_momentumZ*sum_momentumZ))
           - sum_masses );
      if(numneut==(nPrim-1)) hMinv->Fill(xinv);
//      cout<<"xinv "<<xinv<<endl;


   }  
/*
//      TrackId = land_obj->GetTrackID();
      Int_t TrackId=0;
      Int_t VolumeID=0;
      for (Int_t i=0;i<Nclusters;i++){         

         fPosOut.SetX(10.);
         fPosOut.SetY(10.);
         fPosOut.SetZ(1000.);

         fPosIn.SetX(-10.);
         fPosIn.SetY(-10.);
         fPosIn.SetZ(1100.);

         fMomOut.SetX(100.);
         fMomOut.SetY(100.);
         fMomOut.SetZ(100.);

         AddHit( TVector3(fPosIn.X(),  fPosIn.Y(),  fPosIn.Z()),  
         TVector3(fPosOut.X(),  fPosOut.Y(),  fPosOut.Z()),
         TVector3(fMomOut.Px(), fMomOut.Py(), fMomOut.Pz()),
         fTime);

//         AddHit( 0,1,Cluster[i].size, Cluster[i].tStart, Cluster[i].xStart,
//	         Cluster[i].yStart, Cluster[i].zStart);

         cout<< "cluster start: " << Cluster[i].xStart<<"  "<<Cluster[i].yStart<<"  "<<Cluster[i].zStart << endl;
         cout<< "cluster end  : " << Cluster[i].xEnd<<"  "<<Cluster[i].yEnd<<"  "<<Cluster[i].zEnd << endl;
         cout<< "cluster energy: " << Cluster[i].e << endl;
         cout<< "cluster time start: " << Cluster[i].tStart << endl;
         cout<< "cluster time stop: " << Cluster[i].tStop << endl;
         cout<< "cluster size: " << Cluster[i].size << endl;
	 
      }

*/
   

}
// -------------------------------------------------------------------------

void R3BNeutronTracker::Reset(){
// Clear the structure
//   cout << " -I- Digit Reset() called " << endl;
// if (fDigis ) fDigis->Clear();
}   

void R3BNeutronTracker::Finish()
{
// here event. write histos
//   cout << " -I- Digit Finish() called " << endl;
// Write control histograms
   hNeutmult1->Write();
   hNeutmult2->Write();
   hNeutmult3->Write();
   hNeutmult4->Write();
   hNeutmult5->Write();
   hNeutmult6->Write();

   hMinv->Write();
   hMinv0->Write();

   hDeltaPx1->Write();
   hDeltaPy1->Write();
   hDeltaPz1->Write();
   hDeltaPx2->Write();
   hDeltaPy2->Write();
   hDeltaPz2->Write();

   hClusterSize->Write();	
   hClusterEnergy->Write();	
   hClusters->Write();	
   hHits->Write();	
   hClusterNo_vs_Size->Write();
    
}

R3BNeutronTrack* R3BNeutronTracker::AddHit(TVector3 posIn,
			TVector3 posOut, TVector3 momOut, Double_t time){
  // It fills the R3BLandDigi array
  TClonesArray& clref = *fNeutronTracks;
  Int_t size = clref.GetEntriesFast();
  return new(clref[size]) R3BNeutronTrack(posIn, posOut, momOut, time);
}

// -----  Public method UseBeam  ----------------------------------
void R3BNeutronTracker::UseBeam(Double_t beam_energy, Double_t beam_beta)
{
   beamEnergy   = beam_energy;
   beamBeta   = beam_beta;
}

ClassImp(R3BNeutronTracker)
