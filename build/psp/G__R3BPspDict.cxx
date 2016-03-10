// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIpspdIG__R3BPspDict

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
#include "R3BPsp.h"
#include "R3BGeoPsp.h"
#include "R3BPspDigiPar.h"
#include "R3BPspDigitizer.h"
#include "R3BPspxCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoPsp(void *p = 0);
   static void *newArray_R3BGeoPsp(Long_t size, void *p);
   static void delete_R3BGeoPsp(void *p);
   static void deleteArray_R3BGeoPsp(void *p);
   static void destruct_R3BGeoPsp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoPsp*)
   {
      ::R3BGeoPsp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoPsp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoPsp", ::R3BGeoPsp::Class_Version(), "invalid", 168,
                  typeid(::R3BGeoPsp), DefineBehavior(ptr, ptr),
                  &::R3BGeoPsp::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoPsp) );
      instance.SetNew(&new_R3BGeoPsp);
      instance.SetNewArray(&newArray_R3BGeoPsp);
      instance.SetDelete(&delete_R3BGeoPsp);
      instance.SetDeleteArray(&deleteArray_R3BGeoPsp);
      instance.SetDestructor(&destruct_R3BGeoPsp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoPsp*)
   {
      return GenerateInitInstanceLocal((::R3BGeoPsp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPsp(void *p = 0);
   static void *newArray_R3BPsp(Long_t size, void *p);
   static void delete_R3BPsp(void *p);
   static void deleteArray_R3BPsp(void *p);
   static void destruct_R3BPsp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPsp*)
   {
      ::R3BPsp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPsp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPsp", ::R3BPsp::Class_Version(), "invalid", 25,
                  typeid(::R3BPsp), DefineBehavior(ptr, ptr),
                  &::R3BPsp::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPsp) );
      instance.SetNew(&new_R3BPsp);
      instance.SetNewArray(&newArray_R3BPsp);
      instance.SetDelete(&delete_R3BPsp);
      instance.SetDeleteArray(&deleteArray_R3BPsp);
      instance.SetDestructor(&destruct_R3BPsp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPsp*)
   {
      return GenerateInitInstanceLocal((::R3BPsp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPsp*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigiPar(void *p = 0);
   static void *newArray_R3BPspDigiPar(Long_t size, void *p);
   static void delete_R3BPspDigiPar(void *p);
   static void deleteArray_R3BPspDigiPar(void *p);
   static void destruct_R3BPspDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigiPar*)
   {
      ::R3BPspDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigiPar", ::R3BPspDigiPar::Class_Version(), "invalid", 198,
                  typeid(::R3BPspDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BPspDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigiPar) );
      instance.SetNew(&new_R3BPspDigiPar);
      instance.SetNewArray(&newArray_R3BPspDigiPar);
      instance.SetDelete(&delete_R3BPspDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BPspDigiPar);
      instance.SetDestructor(&destruct_R3BPspDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigitizer(void *p = 0);
   static void *newArray_R3BPspDigitizer(Long_t size, void *p);
   static void delete_R3BPspDigitizer(void *p);
   static void deleteArray_R3BPspDigitizer(void *p);
   static void destruct_R3BPspDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigitizer*)
   {
      ::R3BPspDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigitizer", ::R3BPspDigitizer::Class_Version(), "invalid", 239,
                  typeid(::R3BPspDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BPspDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigitizer) );
      instance.SetNew(&new_R3BPspDigitizer);
      instance.SetNewArray(&newArray_R3BPspDigitizer);
      instance.SetDelete(&delete_R3BPspDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BPspDigitizer);
      instance.SetDestructor(&destruct_R3BPspDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxCal(void *p = 0);
   static void *newArray_R3BPspxCal(Long_t size, void *p);
   static void delete_R3BPspxCal(void *p);
   static void deleteArray_R3BPspxCal(void *p);
   static void destruct_R3BPspxCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxCal*)
   {
      ::R3BPspxCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxCal", ::R3BPspxCal::Class_Version(), "invalid", 310,
                  typeid(::R3BPspxCal), DefineBehavior(ptr, ptr),
                  &::R3BPspxCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxCal) );
      instance.SetNew(&new_R3BPspxCal);
      instance.SetNewArray(&newArray_R3BPspxCal);
      instance.SetDelete(&delete_R3BPspxCal);
      instance.SetDeleteArray(&deleteArray_R3BPspxCal);
      instance.SetDestructor(&destruct_R3BPspxCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxCal*)
   {
      return GenerateInitInstanceLocal((::R3BPspxCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspxCal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoPsp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoPsp::Class_Name()
{
   return "R3BGeoPsp";
}

//______________________________________________________________________________
const char *R3BGeoPsp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoPsp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoPsp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoPsp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPsp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPsp::Class_Name()
{
   return "R3BPsp";
}

//______________________________________________________________________________
const char *R3BPsp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPsp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPsp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPsp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigiPar::Class_Name()
{
   return "R3BPspDigiPar";
}

//______________________________________________________________________________
const char *R3BPspDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigitizer::Class_Name()
{
   return "R3BPspDigitizer";
}

//______________________________________________________________________________
const char *R3BPspDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxCal::Class_Name()
{
   return "R3BPspxCal";
}

//______________________________________________________________________________
const char *R3BPspxCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoPsp::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoPsp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoPsp::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoPsp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoPsp(void *p) {
      return  p ? new(p) ::R3BGeoPsp : new ::R3BGeoPsp;
   }
   static void *newArray_R3BGeoPsp(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoPsp[nElements] : new ::R3BGeoPsp[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoPsp(void *p) {
      delete ((::R3BGeoPsp*)p);
   }
   static void deleteArray_R3BGeoPsp(void *p) {
      delete [] ((::R3BGeoPsp*)p);
   }
   static void destruct_R3BGeoPsp(void *p) {
      typedef ::R3BGeoPsp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoPsp

//______________________________________________________________________________
void R3BPsp::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPsp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPsp::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPsp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPsp(void *p) {
      return  p ? new(p) ::R3BPsp : new ::R3BPsp;
   }
   static void *newArray_R3BPsp(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPsp[nElements] : new ::R3BPsp[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPsp(void *p) {
      delete ((::R3BPsp*)p);
   }
   static void deleteArray_R3BPsp(void *p) {
      delete [] ((::R3BPsp*)p);
   }
   static void destruct_R3BPsp(void *p) {
      typedef ::R3BPsp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPsp

//______________________________________________________________________________
void R3BPspDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigiPar(void *p) {
      return  p ? new(p) ::R3BPspDigiPar : new ::R3BPspDigiPar;
   }
   static void *newArray_R3BPspDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigiPar[nElements] : new ::R3BPspDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigiPar(void *p) {
      delete ((::R3BPspDigiPar*)p);
   }
   static void deleteArray_R3BPspDigiPar(void *p) {
      delete [] ((::R3BPspDigiPar*)p);
   }
   static void destruct_R3BPspDigiPar(void *p) {
      typedef ::R3BPspDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigiPar

//______________________________________________________________________________
void R3BPspDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigitizer(void *p) {
      return  p ? new(p) ::R3BPspDigitizer : new ::R3BPspDigitizer;
   }
   static void *newArray_R3BPspDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigitizer[nElements] : new ::R3BPspDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigitizer(void *p) {
      delete ((::R3BPspDigitizer*)p);
   }
   static void deleteArray_R3BPspDigitizer(void *p) {
      delete [] ((::R3BPspDigitizer*)p);
   }
   static void destruct_R3BPspDigitizer(void *p) {
      typedef ::R3BPspDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigitizer

//______________________________________________________________________________
void R3BPspxCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxCal(void *p) {
      return  p ? new(p) ::R3BPspxCal : new ::R3BPspxCal;
   }
   static void *newArray_R3BPspxCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxCal[nElements] : new ::R3BPspxCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxCal(void *p) {
      delete ((::R3BPspxCal*)p);
   }
   static void deleteArray_R3BPspxCal(void *p) {
      delete [] ((::R3BPspxCal*)p);
   }
   static void destruct_R3BPspxCal(void *p) {
      typedef ::R3BPspxCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxCal

namespace {
  void TriggerDictionaryInitialization_G__R3BPspDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/psp",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/psp/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoPsp;
class R3BPsp;
class R3BPspDigiPar;
class R3BPspDigitizer;
class R3BPspxCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BPsp header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BPsp.h
 **/

#ifndef R3BPSP_H
#define R3BPSP_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BPspPoint;
class FairVolume;

class R3BPsp : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BPsp();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BPsp(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BPsp();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BPspPoint and adds it to the
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
    virtual void Print(Option_t* option = "") const;

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
    virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);

    /** Virtual method Construct geometry
     **
     ** Constructs the STS geometry
     **/
    virtual void ConstructGeometry();
    virtual Bool_t CheckIfSensitive(std::string name);
    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts();

    //  void SaveGeoParams();

  private:
    /** Track information to be stored until the track leaves the
    active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fVolumeID;                //!  volume id
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime_in;            //!  time when entering active volume
    Double32_t fTime_out;           //!  time when exiting active volume
    Double32_t fTime;               //!  time
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    TClonesArray* fPspCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    /** Private method AddHit
     **
     ** Adds a PspPoint to the HitCollection
     **/
    R3BPspPoint* AddHit(Int_t trackID,
                        Int_t detID,
                        Int_t plane,
                        TVector3 posIn,
                        TVector3 pos_out,
                        TVector3 momIn,
                        TVector3 momOut,
                        Double_t time,
                        Double_t length,
                        Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BPsp, 1);
};

inline void R3BPsp::ResetParameters()
{
    fTrackID = fVolumeID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = 0;
    fPosIndex = 0;
};

#endif
#ifndef R3BGEOPSP_H
#define R3BGEOPSP_H

#include "FairGeoSet.h"

class  R3BGeoPsp : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoPsp();
  ~R3BGeoPsp() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoPsp,0) // Class for STS
};

inline Int_t R3BGeoPsp::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOGFI_H */
#ifndef R3BPSPDIGIPAR_H
#define R3BPSPDIGIPAR_H 1


#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BPspDigiPar : public FairParGenericSet
{
    public :
	R3BPspDigiPar (const char* name="R3BPspDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BPspDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BPspDigiPar,1); //
};

#endif /* !R3BMTOFDIGIPAR_H*/

#ifndef R3BPSPDIGITIZER_H
#define R3BPSPDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BPspDigiPar.h"
#include "R3BPspDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BPspDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BPspDigitizer();


  /** Destructor **/
  ~R3BPspDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  
  R3BPspDigi* AddHit(Int_t psp3mul,Double_t psp3x,Double_t psp3y,Double_t psp3e);


  protected:
  TClonesArray* fPspPoints;
  TClonesArray* fPspMCTrack; 
  TClonesArray* fPspDigi;


  // Parameter class
  R3BPspDigiPar* fPspDigiPar;

  //- Control Hitograms
  
//   TH1F* PSPXhis;
  
  Int_t eventNoPsp;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BPspDigitizer,1);
  
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BPspxCal                              -----
// -----                    Created  21-01-2016 by R. Plag                 -----
// -----                                                                   -----
// -----------------------------------------------------------------------------
/* Convert Mapped data to Cal data
 */

#ifndef R3BPSPXCAL_H
#define R3BPSPXCAL_H

#include "FairTask.h"

class TClonesArray;
class R3BEventHeader;

class R3BPspxCal : public FairTask
{
  public:
    R3BPspxCal();
    R3BPspxCal(const char* name, Int_t iVerbose);
    virtual ~R3BPspxCal();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:

    R3BEventHeader *fHeader;    // do we need that?
    TClonesArray* fMappedItems; // holding input data
    TClonesArray* fCalItems;    // holding output data
	TClonesArray* fCalibration; // holding slopes and offsets

    // void CreateHistos();
    // void WriteHistos();

  public:
    ClassDef(R3BPspxCal, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoPsp", payloadCode, "@",
"R3BPsp", payloadCode, "@",
"R3BPspDigiPar", payloadCode, "@",
"R3BPspDigitizer", payloadCode, "@",
"R3BPspxCal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BPspDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BPspDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BPspDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BPspDict() {
  TriggerDictionaryInitialization_G__R3BPspDict_Impl();
}
