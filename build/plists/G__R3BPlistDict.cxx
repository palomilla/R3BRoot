// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIplistsdIG__R3BPlistDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "G4EmHadronBuilder.h"
#include "G4EmMuonBuilder.h"
#include "G4EmQEDBuilder.h"
#include "G4LowEnergyQEDBuilder.h"
#include "G4StepLimiterMessenger.h"
#include "G4StepLimiterPerRegion.h"
#include "R3BDecaysBuilder.h"
#include "R3BParticlesBuilder.h"
#include "R3BPhysicsList.h"
#include "R3BPhysicsListMessenger.h"
#include "R3BRunConfiguration.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BRunConfiguration(void *p);
   static void deleteArray_R3BRunConfiguration(void *p);
   static void destruct_R3BRunConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRunConfiguration*)
   {
      ::R3BRunConfiguration *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRunConfiguration >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRunConfiguration", ::R3BRunConfiguration::Class_Version(), "invalid", 629,
                  typeid(::R3BRunConfiguration), DefineBehavior(ptr, ptr),
                  &::R3BRunConfiguration::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRunConfiguration) );
      instance.SetDelete(&delete_R3BRunConfiguration);
      instance.SetDeleteArray(&deleteArray_R3BRunConfiguration);
      instance.SetDestructor(&destruct_R3BRunConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRunConfiguration*)
   {
      return GenerateInitInstanceLocal((::R3BRunConfiguration*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BRunConfiguration*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BRunConfiguration::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRunConfiguration::Class_Name()
{
   return "R3BRunConfiguration";
}

//______________________________________________________________________________
const char *R3BRunConfiguration::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRunConfiguration*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRunConfiguration::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRunConfiguration*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRunConfiguration::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRunConfiguration*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRunConfiguration::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRunConfiguration*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BRunConfiguration::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRunConfiguration.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRunConfiguration::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRunConfiguration::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BRunConfiguration(void *p) {
      delete ((::R3BRunConfiguration*)p);
   }
   static void deleteArray_R3BRunConfiguration(void *p) {
      delete [] ((::R3BRunConfiguration*)p);
   }
   static void destruct_R3BRunConfiguration(void *p) {
      typedef ::R3BRunConfiguration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRunConfiguration

namespace {
  void TriggerDictionaryInitialization_G__R3BPlistDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/tof",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/plists",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/Geant4",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/transport/geant4/source/interfaces/common/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/transport/geant4/physics_lists/hadronic/Packaging/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/transport/geant4/physics_lists/hadronic/QGSP/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/geant4vmc",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/Geant4",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/plists/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BRunConfiguration;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4EmHadronBuilder.hh,v 1.1 2004/12/02 10:34:19 vnivanch Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef G4EmHadronBuilder_h
#define G4EmHadronBuilder_h 1


#include "G4VPhysicsConstructor.hh"
//#include "globals.hh"
//#include "R3BRunConfiguration.h"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4EmHadronBuilder : public G4VPhysicsConstructor
{
public:
  G4EmHadronBuilder(const G4String& name = "EM_stand_had");
  virtual ~G4EmHadronBuilder();

public:
  // This method is dummy for physics
  virtual void ConstructParticle();

  // This method will be invoked in the Construct() method.
  // each physics process will be instantiated and
  // registered to the process manager of each particle type
  virtual void ConstructProcess();

private:

   // hide assignment operator
  G4EmHadronBuilder & operator=(const G4EmHadronBuilder &right);
  G4EmHadronBuilder(const G4EmHadronBuilder&);

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4EmMuonBuilder.hh,v 1.1 2004/12/02 10:34:19 vnivanch Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef G4EmMuonBuilder_h
#define G4EmMuonBuilder_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4EmMuonBuilder : public G4VPhysicsConstructor
{
public:
  G4EmMuonBuilder(const G4String& name = "EM_stan_muons");
  virtual ~G4EmMuonBuilder();

public:
  // This method is dummy for physics
  virtual void ConstructParticle();

  // This method will be invoked in the Construct() method.
  // each physics process will be instantiated and
  // registered to the process manager of each particle type
  virtual void ConstructProcess();

private:

   // hide assignment operator
  G4EmMuonBuilder & operator=(const G4EmMuonBuilder &right);
  G4EmMuonBuilder(const G4EmMuonBuilder&);

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4EmQEDBuilder.hh,v 1.1 2004/12/02 10:34:19 vnivanch Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef G4EmQEDBuilder_h
#define G4EmQEDBuilder_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4EmQEDBuilder : public G4VPhysicsConstructor
{
public:
  G4EmQEDBuilder(const G4String& name = "EM_stan_QED");
  virtual ~G4EmQEDBuilder();

public:
  // This method is dummy for physics
  virtual void ConstructParticle();

  // This method will be invoked in the Construct() method.
  // each physics process will be instantiated and
  // registered to the process manager of each particle type
  virtual void ConstructProcess();

private:

   // hide assignment operator
  G4EmQEDBuilder & operator=(const G4EmQEDBuilder &right);
  G4EmQEDBuilder(const G4EmQEDBuilder&);

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4LowEnergyQEDBuilder.hh,v 1.1 2004/12/02 10:34:19 vnivanch Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef G4LowEnergyQEDBuilder_h
#define G4LowEnergyQEDBuilder_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4LowEnergyQEDBuilder : public G4VPhysicsConstructor
{
public:
  G4LowEnergyQEDBuilder(const G4String& name = "LowEnergy_QED");
  virtual ~G4LowEnergyQEDBuilder();

public:
  // This method is dummy for physics
  virtual void ConstructParticle();

  // This method will be invoked in the Construct() method.
  // each physics process will be instantiated and
  // registered to the process manager of each particle type
  virtual void ConstructProcess();

private:

   // hide assignment operator
  G4LowEnergyQEDBuilder & operator=(const G4LowEnergyQEDBuilder &right);
  G4LowEnergyQEDBuilder(const G4LowEnergyQEDBuilder&);

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// $Id: G4StepLimiterMessenger.hh,v 1.1 2004/12/02 10:34:19 vnivanch Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef G4StepLimiterMessenger_h
#define G4StepLimiterMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class G4StepLimiterPerRegion;
class G4UIcmdWithADoubleAndUnit;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4StepLimiterMessenger: public G4UImessenger
{
public:
  G4StepLimiterMessenger(G4StepLimiterPerRegion*);
  ~G4StepLimiterMessenger();

  void SetNewValue(G4UIcommand*, G4String);

private:
  const G4StepLimiterMessenger& operator=(const G4StepLimiterMessenger&);
  G4StepLimiterMessenger(const G4StepLimiterMessenger&);
    
  G4StepLimiterPerRegion* stepLimiter;
  G4UIcmdWithADoubleAndUnit* stepMaxCmd;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// $Id: G4StepLimiterPerRegion.hh,v 1.1 2004/12/13 16:38:56 gcosmo Exp $
// GEANT4 tag $Name: geant4-08-00-patch-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef StepMax_h
#define StepMax_h 1

#include "globals.hh"
#include "G4VDiscreteProcess.hh"
#include "G4ParticleDefinition.hh"
#include "G4Step.hh"

class G4StepLimiterMessenger;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4StepLimiterPerRegion : public G4VDiscreteProcess
{
public:

  G4StepLimiterPerRegion(const G4String& processName = "UserMaxStep");
  ~G4StepLimiterPerRegion();

  G4bool IsApplicable(const G4ParticleDefinition&);

  void SetMaxStep(G4double);

  G4double GetMaxStep() {return MaxChargedStep;};

  G4double PostStepGetPhysicalInteractionLength( const G4Track& track,
			                       G4double previousStepSize,
			                       G4ForceCondition* condition);

  G4VParticleChange* PostStepDoIt(const G4Track&, const G4Step&);

  G4double GetMeanFreePath(const G4Track&, G4double, G4ForceCondition*)
  {return 0.;};    // it is not needed here !

private:

  G4StepLimiterPerRegion & operator=(const G4StepLimiterPerRegion &right);
  G4StepLimiterPerRegion(const G4StepLimiterPerRegion&);

  G4double MaxChargedStep;
  G4double ProposedStep;

  G4StepLimiterMessenger*  pMess;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es
//*-- Date: 03/2006
//*-- Last Update: 06/03/06 by Hector Alvarez Pol
// --------------------------------------------------------------
// Description:
//   Physics List -- Decays builder
//
// --------------------------------------------------------------
// Comments:
//
//  06/03/06 Included after full physics revision. Migrated to geant4.8
//           Based on examples/extended/medical/GammaTherapy
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BDecaysBuilder_h
#define R3BDecaysBuilder_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"


class R3BDecaysBuilder : public G4VPhysicsConstructor {
private:

   // hide assignment operator
  R3BDecaysBuilder & operator=(const R3BDecaysBuilder &right);
  R3BDecaysBuilder(const R3BDecaysBuilder&);

public:

  R3BDecaysBuilder(const G4String& name = "decays");
  virtual ~R3BDecaysBuilder();

  // This method is dummy for physics
  virtual void ConstructParticle();

  // This method will be invoked in the Construct() method.
  // each physics process will be instantiated and
  // registered to the process manager of each particle type
  virtual void ConstructProcess();

};
#endif








/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es
//*-- Date: 03/2006
//*-- Last Update: 06/03/06 by Hector Alvarez Pol
// --------------------------------------------------------------
// Description:
//   Physics List -- Particle builder
//
// --------------------------------------------------------------
// Comments:
//
//  06/03/06 Included after full physics revision. Migrated to geant4.8
//           Based on examples/extended/medical/GammaTherapy
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BParticlesBuilder_h
#define R3BParticlesBuilder_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"


class R3BParticlesBuilder : public G4VPhysicsConstructor {
public:
  R3BParticlesBuilder(const G4String& name = "particles");
  virtual ~R3BParticlesBuilder();

  // This method will be invoked in the Construct() method.
  // each particle type will be instantiated
  virtual void ConstructParticle();

  // This method is dummy.
  virtual void ConstructProcess() {};

};
#endif








/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es
//*-- Date: 11/2004
//*-- Last Update: 04/03/06 by Hector Alvarez Pol
// --------------------------------------------------------------
// Description:
//   Physics List
//
// --------------------------------------------------------------
// Comments:
//
//  04/03/06 Full physics revision. Migrated to geant4.8
//           Based on examples/extended/medical/GammaTherapy
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BPhysicsList_h
#define R3BPhysicsList_h 1

#include "G4VModularPhysicsList.hh"
#include "globals.hh"

class R3BPhysicsListMessenger;
class G4StepLimiterPhysics;

class R3BPhysicsList: public G4VModularPhysicsList {
private:
  G4double cutForGamma;
  G4double cutForElectron;
  G4double cutForPositron;
  G4int    verbose;
  G4bool   emBuilderIsRegisted;
  G4bool   decayIsRegisted;
  G4bool   stepLimiterIsRegisted;
  G4bool   helIsRegisted;
  G4bool   bicIsRegisted;
  G4bool   ionIsRegisted;
  G4bool   gnucIsRegisted;
  
  R3BPhysicsListMessenger* pMessenger;
  G4StepLimiterPhysics* steplimiter;
  
public:
  R3BPhysicsList();
  ~R3BPhysicsList();
  
  // SetCuts()   
  void ConstructParticle();
  void ConstructProcess();
  void SetCuts();

  void SetCutForGamma(G4double);
  void SetCutForElectron(G4double);
  void SetCutForPositron(G4double);

  void AddPhysicsList(const G4String&);
  void SetVerbose(G4int val);
};
#endif



/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es
//*-- Date: 03/2006
//*-- Last Update: 06/03/06 by Hector Alvarez Pol
// --------------------------------------------------------------
// Description:
//   Physics List Messenger
//
// --------------------------------------------------------------
// Comments:
//
//  06/03/06 Included after full physics revision. Migrated to geant4.8
//           Based on examples/extended/medical/GammaTherapy
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BPhysicsListMessenger_h
#define R3BPhysicsListMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class R3BPhysicsList;
class G4UIdirectory;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;


class R3BPhysicsListMessenger: public G4UImessenger {
private:
  
  R3BPhysicsList*               pPhysicsList;
    
  G4UIdirectory*             physDir;    
  G4UIcmdWithADoubleAndUnit* gammaCutCmd;
  G4UIcmdWithADoubleAndUnit* electCutCmd;
  G4UIcmdWithADoubleAndUnit* protoCutCmd;    
  G4UIcmdWithADoubleAndUnit* allCutCmd;    
  G4UIcmdWithAnInteger*      verbCmd;
  G4UIcmdWithAString*        pListCmd;
   
public:
  
  R3BPhysicsListMessenger(R3BPhysicsList* );
  ~R3BPhysicsListMessenger();
    
  void SetNewValue(G4UIcommand*, G4String);
};
#endif

#ifndef R3BRUNCONFIGURATION_H
#define R3BRUNCONFIGURATION_H


#include "TG4RunConfiguration.h"


class R3BRunConfiguration : public TG4RunConfiguration
{
  public:
    R3BRunConfiguration(const TString& userGeometry,
                          const TString& specialProcess = "stepLimiter" );
    virtual ~R3BRunConfiguration();

    // methods
    virtual G4VUserPhysicsList*  CreatePhysicsList();

  ClassDef(R3BRunConfiguration, 1)

};

#endif //R3BRUNCONFIGURATION_H


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BRunConfiguration", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BPlistDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BPlistDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BPlistDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BPlistDict() {
  TriggerDictionaryInitialization_G__R3BPlistDict_Impl();
}
