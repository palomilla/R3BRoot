// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIxballdIG__R3BXBallDict

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
#include "R3BXBall.h"
#include "R3BGeoXBall.h"
#include "R3BGeoXBallPar.h"
#include "R3BXBallContFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoXBall(void *p = 0);
   static void *newArray_R3BGeoXBall(Long_t size, void *p);
   static void delete_R3BGeoXBall(void *p);
   static void deleteArray_R3BGeoXBall(void *p);
   static void destruct_R3BGeoXBall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoXBall*)
   {
      ::R3BGeoXBall *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoXBall >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoXBall", ::R3BGeoXBall::Class_Version(), "invalid", 288,
                  typeid(::R3BGeoXBall), DefineBehavior(ptr, ptr),
                  &::R3BGeoXBall::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoXBall) );
      instance.SetNew(&new_R3BGeoXBall);
      instance.SetNewArray(&newArray_R3BGeoXBall);
      instance.SetDelete(&delete_R3BGeoXBall);
      instance.SetDeleteArray(&deleteArray_R3BGeoXBall);
      instance.SetDestructor(&destruct_R3BGeoXBall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoXBall*)
   {
      return GenerateInitInstanceLocal((::R3BGeoXBall*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoXBall*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoXBallPar(void *p = 0);
   static void *newArray_R3BGeoXBallPar(Long_t size, void *p);
   static void delete_R3BGeoXBallPar(void *p);
   static void deleteArray_R3BGeoXBallPar(void *p);
   static void destruct_R3BGeoXBallPar(void *p);
   static void streamer_R3BGeoXBallPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoXBallPar*)
   {
      ::R3BGeoXBallPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoXBallPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoXBallPar", ::R3BGeoXBallPar::Class_Version(), "invalid", 315,
                  typeid(::R3BGeoXBallPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoXBallPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoXBallPar) );
      instance.SetNew(&new_R3BGeoXBallPar);
      instance.SetNewArray(&newArray_R3BGeoXBallPar);
      instance.SetDelete(&delete_R3BGeoXBallPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoXBallPar);
      instance.SetDestructor(&destruct_R3BGeoXBallPar);
      instance.SetStreamerFunc(&streamer_R3BGeoXBallPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoXBallPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoXBallPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoXBallPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBall(void *p = 0);
   static void *newArray_R3BXBall(Long_t size, void *p);
   static void delete_R3BXBall(void *p);
   static void deleteArray_R3BXBall(void *p);
   static void destruct_R3BXBall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBall*)
   {
      ::R3BXBall *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBall >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBall", ::R3BXBall::Class_Version(), "invalid", 57,
                  typeid(::R3BXBall), DefineBehavior(ptr, ptr),
                  &::R3BXBall::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBall) );
      instance.SetNew(&new_R3BXBall);
      instance.SetNewArray(&newArray_R3BXBall);
      instance.SetDelete(&delete_R3BXBall);
      instance.SetDeleteArray(&deleteArray_R3BXBall);
      instance.SetDestructor(&destruct_R3BXBall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBall*)
   {
      return GenerateInitInstanceLocal((::R3BXBall*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BXBall*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallContFact(void *p = 0);
   static void *newArray_R3BXBallContFact(Long_t size, void *p);
   static void delete_R3BXBallContFact(void *p);
   static void deleteArray_R3BXBallContFact(void *p);
   static void destruct_R3BXBallContFact(void *p);
   static void streamer_R3BXBallContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallContFact*)
   {
      ::R3BXBallContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallContFact", ::R3BXBallContFact::Class_Version(), "invalid", 342,
                  typeid(::R3BXBallContFact), DefineBehavior(ptr, ptr),
                  &::R3BXBallContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BXBallContFact) );
      instance.SetNew(&new_R3BXBallContFact);
      instance.SetNewArray(&newArray_R3BXBallContFact);
      instance.SetDelete(&delete_R3BXBallContFact);
      instance.SetDeleteArray(&deleteArray_R3BXBallContFact);
      instance.SetDestructor(&destruct_R3BXBallContFact);
      instance.SetStreamerFunc(&streamer_R3BXBallContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallContFact*)
   {
      return GenerateInitInstanceLocal((::R3BXBallContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BXBallContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoXBall::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoXBall::Class_Name()
{
   return "R3BGeoXBall";
}

//______________________________________________________________________________
const char *R3BGeoXBall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBall*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoXBall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBall*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoXBall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBall*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoXBall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBall*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoXBallPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoXBallPar::Class_Name()
{
   return "R3BGeoXBallPar";
}

//______________________________________________________________________________
const char *R3BGeoXBallPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBallPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoXBallPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBallPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoXBallPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBallPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoXBallPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoXBallPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBall::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBall::Class_Name()
{
   return "R3BXBall";
}

//______________________________________________________________________________
const char *R3BXBall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBall*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBall*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBall*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBall*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallContFact::Class_Name()
{
   return "R3BXBallContFact";
}

//______________________________________________________________________________
const char *R3BXBallContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoXBall::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoXBall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoXBall::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoXBall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoXBall(void *p) {
      return  p ? new(p) ::R3BGeoXBall : new ::R3BGeoXBall;
   }
   static void *newArray_R3BGeoXBall(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoXBall[nElements] : new ::R3BGeoXBall[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoXBall(void *p) {
      delete ((::R3BGeoXBall*)p);
   }
   static void deleteArray_R3BGeoXBall(void *p) {
      delete [] ((::R3BGeoXBall*)p);
   }
   static void destruct_R3BGeoXBall(void *p) {
      typedef ::R3BGeoXBall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoXBall

//______________________________________________________________________________
void R3BGeoXBallPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoXBallPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoXBallPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoXBallPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoXBallPar(void *p) {
      return  p ? new(p) ::R3BGeoXBallPar : new ::R3BGeoXBallPar;
   }
   static void *newArray_R3BGeoXBallPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoXBallPar[nElements] : new ::R3BGeoXBallPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoXBallPar(void *p) {
      delete ((::R3BGeoXBallPar*)p);
   }
   static void deleteArray_R3BGeoXBallPar(void *p) {
      delete [] ((::R3BGeoXBallPar*)p);
   }
   static void destruct_R3BGeoXBallPar(void *p) {
      typedef ::R3BGeoXBallPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoXBallPar(TBuffer &buf, void *obj) {
      ((::R3BGeoXBallPar*)obj)->::R3BGeoXBallPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoXBallPar

//______________________________________________________________________________
void R3BXBall::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBall::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBall(void *p) {
      return  p ? new(p) ::R3BXBall : new ::R3BXBall;
   }
   static void *newArray_R3BXBall(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBall[nElements] : new ::R3BXBall[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBall(void *p) {
      delete ((::R3BXBall*)p);
   }
   static void deleteArray_R3BXBall(void *p) {
      delete [] ((::R3BXBall*)p);
   }
   static void destruct_R3BXBall(void *p) {
      typedef ::R3BXBall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBall

//______________________________________________________________________________
void R3BXBallContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallContFact(void *p) {
      return  p ? new(p) ::R3BXBallContFact : new ::R3BXBallContFact;
   }
   static void *newArray_R3BXBallContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallContFact[nElements] : new ::R3BXBallContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallContFact(void *p) {
      delete ((::R3BXBallContFact*)p);
   }
   static void deleteArray_R3BXBallContFact(void *p) {
      delete [] ((::R3BXBallContFact*)p);
   }
   static void destruct_R3BXBallContFact(void *p) {
      typedef ::R3BXBallContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BXBallContFact(TBuffer &buf, void *obj) {
      ((::R3BXBallContFact*)obj)->::R3BXBallContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BXBallContFact

namespace {
  void TriggerDictionaryInitialization_G__R3BXBallDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/xball",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/xballData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/xball/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoXBall;
class R3BGeoXBallPar;
class R3BXBall;
class __attribute__((annotate(R"ATTRDUMP(Factory for all CALO parameter containers)ATTRDUMP"))) R3BXBallContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BXBall header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -----        new Version: 08/04/10 <wranne@student.chalmers.se>     -----
// -----        new Version: 08/06/12 <pablo.cabanelas@usc.es>         -----
// -------------------------------------------------------------------------

/**  R3BXBall.h
 **/

#ifndef R3BXBALL_H
#define R3BXBALL_H

#include <string>

#include "R3BDetector.h"
#include "TGeoSphere.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BXBallPoint;
class R3BXBallCrystalHit;
class R3BXBallCrystalHitSim;
class FairVolume;
class TGeoRotation;

struct xb_wrapping
{
  int no;
  int type;
  double theta, phi, psi;
  bool active;
};

struct xb_wrapping_mod
{
  int no;
  int mod;
  double delta;
};

struct xb_crystal
{
  int no;
  int type;
  double theta, phi, psi;
  bool active;
};


class R3BXBall : public R3BDetector
{

 public:

  /** Default constructor **/
  R3BXBall();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  R3BXBall(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~R3BXBall();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a R3BXBallPoint and adds it to the
   ** collection.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t ProcessHits(FairVolume* vol = 0);


  /** Virtual method BeginEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/

  virtual void BeginEvent();

  /** Virtual method EndOfEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/

  virtual void EndOfEvent();



  /** Virtual method Register
   **
   ** Registers the hit collection in the ROOT manager.
   **/
  virtual void Register();


  /** Accessor to the hit collection **/
  virtual TClonesArray* GetCollection(Int_t iColl) const;


  /** Virtual method Print
   **
   ** Screen output of hit collection.
   **/
  virtual void Print(Option_t* option="") const;


  /** Virtual method Reset
   **
   ** Clears the hit collection
   **/
  virtual void Reset();


  /** Virtual method CopyClones
   **
   ** Copies the hit collection with a given track index offset
   *@param cl1     Origin
   *@param cl2     Target
   *@param offset  Index offset
   **/
  virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2,
        Int_t offset);


  /** Virtual method Construct geometry
   **
   ** Constructs the CAL CRYSTAL geometry
   **/
  virtual void ConstructGeometry();

  virtual Bool_t CheckIfSensitive(std::string name);

  virtual void Initialize();
  virtual void SetSpecialPhysicsCuts();


  /** Public method DrawCrystals
   **
   ** Selects whether to draw crystals or wrappings in the R3BRoot evtviewer
   **/
  void DrawCrystals( Bool_t drawCrystals ) {kDrawCrystals = drawCrystals;}


  /** Public method SelectCollectionOption
   **
   ** Selects the TObjectArray collection to be stored
   ** Syntaxis:
   **     fCollectionOption = 0  -- CrystalPoint only
   **     fCollectionOption = 1  -- CrystalHit only
   **     fCollectionOption = 2  -- Both
   ** By default, only CrystalPoint collection is stored
   **/
  void SelectCollectionOption(Int_t option) {fCollectionOption = option;}

  /** Public method SetNonUniformity
  **
  ** Defines the fNonUniformity parameter in % deviation from the central value 
  *@param nonU  Double parameter setting the maximum non-uniformity allowed 
  **/	
  void SetNonUniformity(Double_t nonU);


  private:

    /** Track information to be stored until the track leaves the
  active volume. **/

    Int_t          fTrackID;           //!  track index
    Int_t          fTrackPID;          //!  particle identification
    Int_t          fVolumeID;          //!  volume id
    Int_t          fParentTrackID;     //!  parent track index
    Int_t          fUniqueID;          //!  particle unique id (e.g. if Delta electron, fUniqueID=9)

    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum

    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Double32_t     fEinc;              //!  Total incident energy
    Int_t          fNSteps;            //!  Number of steps in the active volume

    Int_t          fPosIndex;          //!
    Bool_t         kGeoSaved;          //!
    TList*         flGeoPar;           //!
    Int_t          fGeoVersion;        //!
    Bool_t         kDrawCrystals;      //! flag indicating whether draw either crystals or wrappings
    Int_t          fCollectionOption;  //! object collection option
    Double_t       fNonUniformity;     //! Adding some non-uniformity preliminary description


    Int_t fTypeA;                      //!
    Int_t fTypeB;                      //!
    Int_t fTypeC;                      //!
    Int_t fTypeD;                      //!
    
    TClonesArray*  fXBallCollection;               //!  The hit collection
    TClonesArray*  fXBallCrystalHitCollection;     //!  The CB crystal hit collection

    /** Private method AddHit
     **
     ** Adds a XBallPoint to the HitCollection
     **/
    R3BXBallPoint* AddHit(Int_t trackID, Int_t detID, Int_t type, Int_t cp, TVector3 posIn,
      TVector3 pos_out, TVector3 momIn, 
      TVector3 momOut, Double_t time, 
      Double_t length, Double_t eLoss);

    /** Private method AddCrystalHit
     **
     ** Adds a XBallCrystalhit to the HitCollection
     **/
    R3BXBallCrystalHitSim* AddCrystalHit(Int_t type, Int_t copy,
	Double_t energy, Double_t tof,
	Int_t steps, Double_t einc,
	Int_t trackid, Int_t volid, Int_t partrackid,
	Int_t pdgid, Int_t uniqueid);
	
    /** Private method NUSmearing
     **
     ** Smears the energy according to some non-uniformity distribution	
     ** Very simple preliminary scheme where the NU is introduced as a flat random
     ** distribution with limits fNonUniformity (%) of the energy value.
     **/
    Double_t NUSmearing(Double_t inputEnergy);
	

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    Int_t  GetCrystalType(Int_t volID);


    ClassDef(R3BXBall,1);

};

inline Int_t R3BXBall::GetCrystalType(Int_t volID) {
Int_t type=-1;

if (volID==fTypeA) { type=1;return (type);}
if (volID==fTypeB) { type=2;return (type);}
if (volID==fTypeC) { type=3;return (type);}
if (volID==fTypeD) { type=4;return (type);}

return type;
}


inline void R3BXBall::ResetParameters() {
  fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = fEinc = 0;
  fPosIndex = 0;
  fNSteps = 0;
};


#endif 
#ifndef R3BGEOXBALL_H
#define R3BGEOXBALL_H

#include "FairGeoSet.h"

class  R3BGeoXBall : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoXBall();
  ~R3BGeoXBall() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoXBall,0) // Class for STS
};

inline Int_t R3BGeoXBall::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOXBALL_H */
#ifndef R3BGEOXBALLPAR_H
#define R3BGEOXBALLPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoXBallPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoXBallPar(const char* name="R3BGeoXBallPar",
             const char* title="XBall Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoXBallPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoXBallPar,1)
};

#endif /* !R3BGEOXBALLPAR_H */
#ifndef R3BXBALLCONTFACT_H
#define R3BXBALLCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BXBallContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BXBallContFact();
  ~R3BXBallContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BXBallContFact,0) // Factory for all CALO parameter containers
};

#endif  /* !R3BXBALLCONTFACT_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoXBall", payloadCode, "@",
"R3BGeoXBallPar", payloadCode, "@",
"R3BXBall", payloadCode, "@",
"R3BXBallContFact", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BXBallDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BXBallDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BXBallDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BXBallDict() {
  TriggerDictionaryInitialization_G__R3BXBallDict_Impl();
}
