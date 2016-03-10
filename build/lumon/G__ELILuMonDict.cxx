// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIlumondIG__ELILuMonDict

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
#include "ELILuMon.h"
#include "ELIGeoLuMon.h"
#include "ELIGeoLuMonPar.h"
#include "ELILuMonContFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ELIGeoLuMon(void *p = 0);
   static void *newArray_ELIGeoLuMon(Long_t size, void *p);
   static void delete_ELIGeoLuMon(void *p);
   static void deleteArray_ELIGeoLuMon(void *p);
   static void destruct_ELIGeoLuMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELIGeoLuMon*)
   {
      ::ELIGeoLuMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELIGeoLuMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELIGeoLuMon", ::ELIGeoLuMon::Class_Version(), "invalid", 181,
                  typeid(::ELIGeoLuMon), DefineBehavior(ptr, ptr),
                  &::ELIGeoLuMon::Dictionary, isa_proxy, 4,
                  sizeof(::ELIGeoLuMon) );
      instance.SetNew(&new_ELIGeoLuMon);
      instance.SetNewArray(&newArray_ELIGeoLuMon);
      instance.SetDelete(&delete_ELIGeoLuMon);
      instance.SetDeleteArray(&deleteArray_ELIGeoLuMon);
      instance.SetDestructor(&destruct_ELIGeoLuMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELIGeoLuMon*)
   {
      return GenerateInitInstanceLocal((::ELIGeoLuMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ELIGeoLuMon*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ELIGeoLuMonPar(void *p = 0);
   static void *newArray_ELIGeoLuMonPar(Long_t size, void *p);
   static void delete_ELIGeoLuMonPar(void *p);
   static void deleteArray_ELIGeoLuMonPar(void *p);
   static void destruct_ELIGeoLuMonPar(void *p);
   static void streamer_ELIGeoLuMonPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELIGeoLuMonPar*)
   {
      ::ELIGeoLuMonPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELIGeoLuMonPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELIGeoLuMonPar", ::ELIGeoLuMonPar::Class_Version(), "invalid", 208,
                  typeid(::ELIGeoLuMonPar), DefineBehavior(ptr, ptr),
                  &::ELIGeoLuMonPar::Dictionary, isa_proxy, 16,
                  sizeof(::ELIGeoLuMonPar) );
      instance.SetNew(&new_ELIGeoLuMonPar);
      instance.SetNewArray(&newArray_ELIGeoLuMonPar);
      instance.SetDelete(&delete_ELIGeoLuMonPar);
      instance.SetDeleteArray(&deleteArray_ELIGeoLuMonPar);
      instance.SetDestructor(&destruct_ELIGeoLuMonPar);
      instance.SetStreamerFunc(&streamer_ELIGeoLuMonPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELIGeoLuMonPar*)
   {
      return GenerateInitInstanceLocal((::ELIGeoLuMonPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ELIGeoLuMonPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ELILuMon(void *p = 0);
   static void *newArray_ELILuMon(Long_t size, void *p);
   static void delete_ELILuMon(void *p);
   static void deleteArray_ELILuMon(void *p);
   static void destruct_ELILuMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELILuMon*)
   {
      ::ELILuMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELILuMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELILuMon", ::ELILuMon::Class_Version(), "invalid", 28,
                  typeid(::ELILuMon), DefineBehavior(ptr, ptr),
                  &::ELILuMon::Dictionary, isa_proxy, 4,
                  sizeof(::ELILuMon) );
      instance.SetNew(&new_ELILuMon);
      instance.SetNewArray(&newArray_ELILuMon);
      instance.SetDelete(&delete_ELILuMon);
      instance.SetDeleteArray(&deleteArray_ELILuMon);
      instance.SetDestructor(&destruct_ELILuMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELILuMon*)
   {
      return GenerateInitInstanceLocal((::ELILuMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ELILuMon*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ELILuMonContFact(void *p = 0);
   static void *newArray_ELILuMonContFact(Long_t size, void *p);
   static void delete_ELILuMonContFact(void *p);
   static void deleteArray_ELILuMonContFact(void *p);
   static void destruct_ELILuMonContFact(void *p);
   static void streamer_ELILuMonContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELILuMonContFact*)
   {
      ::ELILuMonContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELILuMonContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELILuMonContFact", ::ELILuMonContFact::Class_Version(), "invalid", 235,
                  typeid(::ELILuMonContFact), DefineBehavior(ptr, ptr),
                  &::ELILuMonContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ELILuMonContFact) );
      instance.SetNew(&new_ELILuMonContFact);
      instance.SetNewArray(&newArray_ELILuMonContFact);
      instance.SetDelete(&delete_ELILuMonContFact);
      instance.SetDeleteArray(&deleteArray_ELILuMonContFact);
      instance.SetDestructor(&destruct_ELILuMonContFact);
      instance.SetStreamerFunc(&streamer_ELILuMonContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELILuMonContFact*)
   {
      return GenerateInitInstanceLocal((::ELILuMonContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ELILuMonContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ELIGeoLuMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELIGeoLuMon::Class_Name()
{
   return "ELIGeoLuMon";
}

//______________________________________________________________________________
const char *ELIGeoLuMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELIGeoLuMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELIGeoLuMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELIGeoLuMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELIGeoLuMonPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELIGeoLuMonPar::Class_Name()
{
   return "ELIGeoLuMonPar";
}

//______________________________________________________________________________
const char *ELIGeoLuMonPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMonPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELIGeoLuMonPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMonPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELIGeoLuMonPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMonPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELIGeoLuMonPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELIGeoLuMonPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELILuMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELILuMon::Class_Name()
{
   return "ELILuMon";
}

//______________________________________________________________________________
const char *ELILuMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELILuMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELILuMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELILuMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELILuMonContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELILuMonContFact::Class_Name()
{
   return "ELILuMonContFact";
}

//______________________________________________________________________________
const char *ELILuMonContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELILuMonContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELILuMonContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELILuMonContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ELIGeoLuMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELIGeoLuMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ELIGeoLuMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(ELIGeoLuMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELIGeoLuMon(void *p) {
      return  p ? new(p) ::ELIGeoLuMon : new ::ELIGeoLuMon;
   }
   static void *newArray_ELIGeoLuMon(Long_t nElements, void *p) {
      return p ? new(p) ::ELIGeoLuMon[nElements] : new ::ELIGeoLuMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELIGeoLuMon(void *p) {
      delete ((::ELIGeoLuMon*)p);
   }
   static void deleteArray_ELIGeoLuMon(void *p) {
      delete [] ((::ELIGeoLuMon*)p);
   }
   static void destruct_ELIGeoLuMon(void *p) {
      typedef ::ELIGeoLuMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ELIGeoLuMon

//______________________________________________________________________________
void ELIGeoLuMonPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELIGeoLuMonPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ELIGeoLuMonPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ELIGeoLuMonPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELIGeoLuMonPar(void *p) {
      return  p ? new(p) ::ELIGeoLuMonPar : new ::ELIGeoLuMonPar;
   }
   static void *newArray_ELIGeoLuMonPar(Long_t nElements, void *p) {
      return p ? new(p) ::ELIGeoLuMonPar[nElements] : new ::ELIGeoLuMonPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELIGeoLuMonPar(void *p) {
      delete ((::ELIGeoLuMonPar*)p);
   }
   static void deleteArray_ELIGeoLuMonPar(void *p) {
      delete [] ((::ELIGeoLuMonPar*)p);
   }
   static void destruct_ELIGeoLuMonPar(void *p) {
      typedef ::ELIGeoLuMonPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ELIGeoLuMonPar(TBuffer &buf, void *obj) {
      ((::ELIGeoLuMonPar*)obj)->::ELIGeoLuMonPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ELIGeoLuMonPar

//______________________________________________________________________________
void ELILuMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELILuMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ELILuMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(ELILuMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELILuMon(void *p) {
      return  p ? new(p) ::ELILuMon : new ::ELILuMon;
   }
   static void *newArray_ELILuMon(Long_t nElements, void *p) {
      return p ? new(p) ::ELILuMon[nElements] : new ::ELILuMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELILuMon(void *p) {
      delete ((::ELILuMon*)p);
   }
   static void deleteArray_ELILuMon(void *p) {
      delete [] ((::ELILuMon*)p);
   }
   static void destruct_ELILuMon(void *p) {
      typedef ::ELILuMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ELILuMon

//______________________________________________________________________________
void ELILuMonContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELILuMonContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELILuMonContFact(void *p) {
      return  p ? new(p) ::ELILuMonContFact : new ::ELILuMonContFact;
   }
   static void *newArray_ELILuMonContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ELILuMonContFact[nElements] : new ::ELILuMonContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELILuMonContFact(void *p) {
      delete ((::ELILuMonContFact*)p);
   }
   static void deleteArray_ELILuMonContFact(void *p) {
      delete [] ((::ELILuMonContFact*)p);
   }
   static void destruct_ELILuMonContFact(void *p) {
      typedef ::ELILuMonContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ELILuMonContFact(TBuffer &buf, void *obj) {
      ((::ELILuMonContFact*)obj)->::ELILuMonContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ELILuMonContFact

namespace {
  void TriggerDictionaryInitialization_G__ELILuMonDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/tof",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/lumon",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/lumonData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/lumon/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) ELIGeoLuMon;
class ELIGeoLuMonPar;
class ELILuMon;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TOF parameter containers)ATTRDUMP"))) ELILuMonContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        ELILuMon header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  ELILuMon.h
 **/


#ifndef ELITOF_H
#define ELITOF_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class ELILuMonPoint;
class FairVolume;



class ELILuMon : public R3BDetector
{

 public:

  /** Default constructor **/
  ELILuMon();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  ELILuMon(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~ELILuMon();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a ELILuMonPoint and adds it to the
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
  virtual void Print(Option_t *option="") const;


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


  /** Virtaul method Construct geometry
   **
   ** Constructs the STS geometry
   **/
  virtual void ConstructGeometry();
  virtual Bool_t CheckIfSensitive(std::string name);

  virtual void Initialize();
  virtual void SetSpecialPhysicsCuts() {}

//  void SaveGeoParams();

  private:

    /** Track information to be stored until the track leaves the
	active volume. **/
    Int_t          fTrackID;           //!  track index
    Int_t          fVolumeID;          //!  volume id
    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss

    Int_t          fPosIndex;          //!
    TClonesArray*  fLuMonCollection;     //!  The hit collection
    Bool_t         kGeoSaved;          //!
    TList *flGeoPar; //!

    /** Private method AddHit
     **
     ** Adds a LuMonPoint to the HitCollection
     **/
    ELILuMonPoint* AddHit(Int_t trackID, Int_t detID, Int_t copy, TVector3 posIn,
			TVector3 pos_out, TVector3 momIn, 
			TVector3 momOut, Double_t time, 
			Double_t length, Double_t eLoss);


    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();


    ClassDef(ELILuMon,1);

};


inline void ELILuMon::ResetParameters() {
  fTrackID = fVolumeID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = 0;
  fPosIndex = 0;
};


#endif 
#ifndef ELIGEOLUMON_H
#define ELIGEOLUMON_H

#include "FairGeoSet.h"

class  ELIGeoLuMon : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  ELIGeoLuMon();
  ~ELIGeoLuMon() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(ELIGeoLuMon,0) // Class for STS
};

inline Int_t ELIGeoLuMon::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !ELIGEOLUMON_H */
#ifndef ELIGEOLUMONPAR_H
#define ELIGEOLUMONPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class ELIGeoLuMonPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  ELIGeoLuMonPar(const char* name="ELIGeoLuMonPar",
             const char* title="LuMon Geometry Parameters",
             const char* context="TestDefaultContext");
  ~ELIGeoLuMonPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(ELIGeoLuMonPar,1)
};

#endif /* !ELIGEOLUMONPAR_H */
#ifndef ELILUMONCONTFACT_H
#define ELILUMONCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ELILuMonContFact : public FairContFact {
private:
  void setAllContainers();
public:
  ELILuMonContFact();
  ~ELILuMonContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( ELILuMonContFact,0) // Factory for all TOF parameter containers
};

#endif  /* !ELILUMONCONTFACT_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ELIGeoLuMon", payloadCode, "@",
"ELIGeoLuMonPar", payloadCode, "@",
"ELILuMon", payloadCode, "@",
"ELILuMonContFact", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ELILuMonDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ELILuMonDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ELILuMonDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ELILuMonDict() {
  TriggerDictionaryInitialization_G__ELILuMonDict_Impl();
}
