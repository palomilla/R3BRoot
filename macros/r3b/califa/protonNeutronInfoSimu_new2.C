// Paloma Díaz Fernández 2013
// Objective:

#include "LibPerso.C"

void protonNeutronInfoSimu_new2() {
	
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

	double energyMax[4] = {0.0};
	int crystalMax[4] = {0}, energyDepositedNeutrons = 0, energyDepositedProtons = 0, energyDepositedBoth = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
	double energy[162] = {0.0};
	int crystal[162] = {0};
	int hmax[4] = {0};
	Int_t i, j, w;
        int count = 0;
	int multiplicity;
        int a = 0;
//+++++++++++++++++++++++
	for( i=0; i<nevents; i++ ){
          multiplicity = 0;
          a=0;
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
	  for( j = 0; j < 162; j++ ) energy[j] = 0.0;
	  
	  // Hits Max per event
          for( w = 0; w < crystalHitsPerEvent; w++ ){
                crystal[w] = crystalHit[w]->GetCrystalNumber();
                energy[w] = ( crystalHit[w]->GetEnergy() * 1000 );
                //cout << energy[w] << endl;
	  }
	  do{
	  energyMax[multiplicity]  = 0.0;
          crystalMax[multiplicity] =  0.0;
	  for( w = 0; w < crystalHitsPerEvent; w++ ){
	      if( ( energy[w] > energyMax[multiplicity] ) ){
		energyMax[multiplicity] = energy[w];
		crystalMax[multiplicity] = crystal[w];
		hmax[multiplicity] = w;
	    }
	  }
	  
	  // Checking neighbours
	  //cout << "max energy " << energyMax[multiplicity] << endl;
	    if( energyMax[multiplicity] ){//cout << energyMax[j] << endl;
	      n1 = vec1[ crystalMax[multiplicity] ];
	      n2 = vec2[ crystalMax[multiplicity] ];
	      n3 = vec3[ crystalMax[multiplicity] ];
	      n4 = vec4[ crystalMax[multiplicity] ];
	      n5 = vec5[ crystalMax[multiplicity] ];
	      n6 = vec6[ crystalMax[multiplicity] ];
	      
	      for( w = 0; w < crystalHitsPerEvent; w++ ){
	
		if( energy[w] > 0.0 ){

                  if( crystal[w] == n1) {
                    energyMax[multiplicity] += energy[w];
                    energy[w] = 0.0;
                    
                  }
                  if( crystal[w] == n2) {
                    energyMax[multiplicity] += energy[w];
                    energy[w] = 0.0;
                    
                  }
                  if( crystal[w] == n3) {
                    energyMax[multiplicity] += energy[w];
                    energy[w] = 0.0;
                    
                  }
                  if( crystal[w] == n4) {
                    energyMax[multiplicity] += energy[w];
                    energy[w] = 0.0;
                    
                  }
                  if( crystal[w] == n5) {
                    energyMax[multiplicity] += energy[w];
                    energy[w] = 0.0;
                    
                  }
                  if( crystal[w] == n6) {
                    if( ( crystalMax[multiplicity] !=  9 ) || ( crystalMax[multiplicity] != 15 ) || ( crystalMax[multiplicity] !=  42 ) || ( crystalMax[multiplicity] !=  50 ) || ( crystalMax[multiplicity] !=  75 ) || ( crystalMax[multiplicity] !=  79 ) || 
                        ( crystalMax[multiplicity] != 84 ) || ( crystalMax[multiplicity] != 88 ) || ( crystalMax[multiplicity] != 113 ) || ( crystalMax[multiplicity] != 121 ) || ( crystalMax[multiplicity] != 148 ) || ( crystalMax[multiplicity] != 154 ) ){
                      energyMax[multiplicity] += energy[w];
                      energy[w] = 0.0;
                    }
                  
                  }
		}
	      } 
	    }//cout << "energy after adding the neighbours for multiplicity = " << multiplicity << " : "  << energyMax[multiplicity] << endl;
	    energy[ hmax[multiplicity] ] = 0.0;
            multiplicity++;
            for(int k = 0; k < crystalHitsPerEvent; k++){
		if(energy[k]>0) count++;
                else count = 0;
	    }
	}while(count>0);
	  
	  // Final counting
	   // if( energyMax[0] ) energyDepositedProtons++;
	   // if( energyMax[1] ) energyDepositedNeutrons++;
           for(int h = 0; h < multiplicity; h++){
	    if( energyMax[j]>20 )a++;
           } 
            if (a==2)   energyDepositedBoth ++;
            
	}
//+++++++++++++++++++++++
	
	// Ending the loop over the events
	//cout << " energyDepositedNeutrons " << energyDepositedNeutrons << endl;
	//cout << " Percentage of neutrons leaving energy " << ( ( energyDepositedNeutrons ) * 100 / nevents ) << " %"<< endl;
	//cout << " energyDepositedProtons " << energyDepositedProtons << endl;
	//cout << " Percentage of protons leaving energy " << ( ( energyDepositedProtons ) * 100 / nevents ) << " %"<< endl;
	cout << " energyDepositedBoth " << energyDepositedBoth << endl;
	cout << " Percentage of both leaving energy " << ( ( energyDepositedBoth ) * 100. / nevents ) << " %"<< endl;
	
}
