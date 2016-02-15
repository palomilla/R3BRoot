// Paloma Díaz Fernández 2013
// Objective:

#include "LibPerso.C"

void protonNeutronInfoSimu() {
	
	gROOT->SetStyle("Default");
	//gStyle->SetOptTitle(0);
	gStyle->SetOptStat(111111);
	gStyle->SetOptFit(0);

	TFile *file = TFile::Open("sim_out.root");
	TTree* TCrystal = (TTree*)file->Get("cbmsim");

	// Crystal Hits (input)
	TClonesArray* crystalHitCA;  
	R3BXBallCrystalHitSim** crystalHit;
	crystalHitCA = new TClonesArray( "R3BXBallCrystalHitSim" , 5 );
	TBranch *branchCrystalHit = TCrystal->GetBranch( "XBCrystalHitSim" );
	branchCrystalHit->SetAddress(&crystalHitCA);

	// MCTrack (input)
	TClonesArray* MCTrackCA;  
	R3BMCTrack** track;
	MCTrackCA = new TClonesArray( "R3BMCTrack" , 5 );
	TBranch *branchMCTrack = TCrystal->GetBranch( "MCTrack" );
	branchMCTrack->SetAddress(&MCTrackCA);

	Long64_t nevents = TCrystal->GetEntries();
	Int_t crystalHitsPerEvent = 0;
	Int_t MCtracksPerEvent = 0;

	/////neighbours
	ifstream vec("cb_geometry_2.dat");	
	double n[163];
	int stop = 162; //last crystal	
	string str;
	getline(vec, str, '\n');
	double polarA[163],phi[163],cosTheta[163]; 
	double vec1[162],vec2[162],vec3[162],vec4[162],vec5[162],vec6[162];
	for (int jj=1; jj<=stop; jj++){
		vec >> n[jj] >> polarA[jj] >> phi[jj] >> cosTheta[jj] >> vec1[jj] >> vec2[jj] >> vec3[jj] >> vec4[jj] >> vec5[jj] >> vec6[jj] ;
	}

	double energyMax[2] = {0.0};
	int crystalMax[2] = {0}, energyDepositedNeutrons = 0, energyDepositedProtons = 0, energyDepositedBoth = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
	double energy[162] = {0.0};
	int crystal[162] = {0};
	int hmax[2] = {0};
	Int_t i, j, w;


//+++++++++++++++++++++++
	for( i=0; i<nevents; i++ ){
	  //if( i % 1000 ) printf( "*************Event:%i*************\n", i );
	  
	  crystalHitCA->Clear();
	  MCTrackCA->Clear();
	  
	  TCrystal->GetEvent(i);
	  
	  crystalHitsPerEvent = crystalHitCA->GetEntries();
	  MCtracksPerEvent = MCTrackCA->GetEntries();

	  if( MCtracksPerEvent ){
	    track = new R3BMCTrack*[MCtracksPerEvent];
	    for( j = 0; j < MCtracksPerEvent; j++ ){
	      track[j] = new R3BMCTrack;
	      track[j] = (R3BMCTrack*) MCTrackCA->At(j);
	    }
	  }
	  
	  if( crystalHitsPerEvent ){
	    crystalHit = new R3BXBallCrystalHitSim*[crystalHitsPerEvent];
	    for( j = 0; j < crystalHitsPerEvent; j++ ){
	      crystalHit[j] = new R3BXBallCrystalHitSim;
	      crystalHit[j] = (R3BXBallCrystalHitSim*) crystalHitCA->At(j);
	    }
	  }
	    
	  // Reset energiesMax, crystalMax, energy[],
	  energyMax[0] = energyMax[1] = 0.0;
	  crystalMax[0] = crystalMax[1] = 0.0; 
	  for( j = 0; j < 162; j++ ) energy[j] = 0.0;
	  
	  // Hits Max per event
	  for( j = 0; j < crystalHitsPerEvent; j++ ){
	    if( ( crystalHit[j]->GetEnergy() * 1000 ) > 10.0  ){
	      if( ( crystalHit[j]->GetTrackPID() == 2212 ) && ( (crystalHit[j]->GetEnergy() * 1000 ) > energyMax[0] ) ){
		energyMax[0] = crystalHit[j]->GetEnergy() * 1000;
		crystalMax[0] = crystalHit[j]->GetCrystalNumber();
		hmax[0] = j;
	      }else if ( ( crystalHit[j]->GetTrackPID() == 2112 ) && ( (crystalHit[j]->GetEnergy() * 1000 ) > energyMax[1] ) ){
		energyMax[1] = crystalHit[j]->GetEnergy() * 1000;
		crystalMax[1] = crystalHit[j]->GetCrystalNumber();
		hmax[1] = j;
	      }
	    }
	  }
	  
	  // Checking neighbours
	  for( j = 0; j < 2; j++ ){
	    if( energyMax[j] ){//cout << energyMax[j] << endl;
	      n1 = vec1[ crystalMax[j] ];
	      n2 = vec2[ crystalMax[j] ];
	      n3 = vec3[ crystalMax[j] ];
	      n4 = vec4[ crystalMax[j] ];
	      n5 = vec5[ crystalMax[j] ];
	      n6 = vec6[ crystalMax[j] ];
	      
	      for( w = 0; w < crystalHitsPerEvent; w++ ){
		crystal[w] = crystalHit[w]->GetCrystalNumber();
		energy[w] = ( crystalHit[w]->GetEnergy() * 1000 );
		if( energy[w] > 4.0 ){

                  if( crystal[w] == n1) {
                    energyMax[j] += energy[w];
                    energy[w] = 0.0;
                    break;
                  }
                  if( crystal[w] == n2) {
                    energyMax[j] += energy[w];
                    energy[w] = 0.0;
                    break;
                  }
                  if( crystal[w] == n3) {
                    energyMax[j] += energy[w];
                    energy[w] = 0.0;
                    break;
                  }
                  if( crystal[w] == n4) {
                    energyMax[j] += energy[w];
                    energy[w] = 0.0;
                    break;
                  }
                  if( crystal[w] == n5) {
                    energyMax[j] += energy[w];
                    energy[w] = 0.0;
                    break;
                  }
                  if( crystal[w] == n6) {
                    if( ( crystalMax[j] !=  9 ) || ( crystalMax[j] != 15 ) || ( crystalMax[j] !=  42 ) || ( crystalMax[j] !=  50 ) || ( crystalMax[j] !=  75 ) || ( crystalMax[j] !=  79 ) || 
                        ( crystalMax[j] != 84 ) || ( crystalMax[j] != 88 ) || ( crystalMax[j] != 113 ) || ( crystalMax[j] != 121 ) || ( crystalMax[j] != 148 ) || ( crystalMax[j] != 154 ) ){
                      energyMax[j] += energy[w];
                      energy[w] = 0.0;
                    }
                    break;
                  }
                  /*
                  // ------------------------------------------
		  switch( crystal[w] ){
		    case n1:
		      energyMax[j] += energy[w];
		      energy[w] = 0.0;
		      break;
		    case n2:
		      energyMax[j] += energy[w];
		      energy[w] = 0.0;
		      break;
		    case n3:
		      energyMax[j] += energy[w];
		      energy[w] = 0.0;
		      break;
		    case n4:
		      energyMax[j] += energy[w];
		      energy[w] = 0.0;
		      break;
		    case n5:
		      energyMax[j] += energy[w];
		      energy[w] = 0.0;
		      break;
		    case n6:
		      if( ( crystalMax[j] !=  9 ) || ( crystalMax[j] != 15 ) || ( crystalMax[j] !=  42 ) || ( crystalMax[j] !=  50 ) || ( crystalMax[j] !=  75 ) || ( crystalMax[j] !=  79 ) || 
			  ( crystalMax[j] != 84 ) || ( crystalMax[j] != 88 ) || ( crystalMax[j] != 113 ) || ( crystalMax[j] != 121 ) || ( crystalMax[j] != 148 ) || ( crystalMax[j] != 154 ) ){
			    energyMax[j] += energy[w];
			    energy[w] = 0.0;
			  }
		      break;
		    default:
		      break;
		  }
                  //---------------------------------------
                  */
		}
	      } 
	    }
	    energy[ hmax[j] ] = 0.0;
	  }
	  
	  // Final counting
	    if( energyMax[0] ) energyDepositedProtons++;
	    if( energyMax[1] ) energyDepositedNeutrons++;
	    if( energyMax[0] && energyMax[1] ) energyDepositedBoth ++;
	}
//+++++++++++++++++++++++
	
	// Ending the loop over the events
	cout << " energyDepositedNeutrons " << energyDepositedNeutrons << endl;
	cout << " Percentage of neutrons leaving energy " << ( ( energyDepositedNeutrons ) * 100 / nevents ) << " %"<< endl;
	cout << " energyDepositedProtons " << energyDepositedProtons << endl;
	cout << " Percentage of protons leaving energy " << ( ( energyDepositedProtons ) * 100 / nevents ) << " %"<< endl;
	cout << " energyDepositedBoth " << energyDepositedBoth << endl;
	cout << " Percentage of both leaving energy " << ( ( energyDepositedBoth ) * 100 / nevents ) << " %"<< endl;
	
}
