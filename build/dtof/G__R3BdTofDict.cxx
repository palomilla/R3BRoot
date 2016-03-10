// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIdtofdIG__R3BdTofDict

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
#include "R3BdTof.h"
#include "R3BGeodTof.h"
#include "R3BGeodTofPar.h"
#include "R3BdTofContFact.h"
#include "R3BdTofDigiPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeodTof(void *p = 0);
   static void *newArray_R3BGeodTof(Long_t size, void *p);
   static void delete_R3BGeodTof(void *p);
   static void deleteArray_R3BGeodTof(void *p);
   static void destruct_R3BGeodTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeodTof*)
   {
      ::R3BGeodTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeodTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeodTof", ::R3BGeodTof::Class_Version(), "invalid", 161,
                  typeid(::R3BGeodTof), DefineBehavior(ptr, ptr),
                  &::R3BGeodTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeodTof) );
      instance.SetNew(&new_R3BGeodTof);
      instance.SetNewArray(&newArray_R3BGeodTof);
      instance.SetDelete(&delete_R3BGeodTof);
      instance.SetDeleteArray(&deleteArray_R3BGeodTof);
      instance.SetDestructor(&destruct_R3BGeodTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeodTof*)
   {
      return GenerateInitInstanceLocal((::R3BGeodTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeodTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeodTofPar(void *p = 0);
   static void *newArray_R3BGeodTofPar(Long_t size, void *p);
   static void delete_R3BGeodTofPar(void *p);
   static void deleteArray_R3BGeodTofPar(void *p);
   static void destruct_R3BGeodTofPar(void *p);
   static void streamer_R3BGeodTofPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeodTofPar*)
   {
      ::R3BGeodTofPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeodTofPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeodTofPar", ::R3BGeodTofPar::Class_Version(), "invalid", 188,
                  typeid(::R3BGeodTofPar), DefineBehavior(ptr, ptr),
                  &::R3BGeodTofPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeodTofPar) );
      instance.SetNew(&new_R3BGeodTofPar);
      instance.SetNewArray(&newArray_R3BGeodTofPar);
      instance.SetDelete(&delete_R3BGeodTofPar);
      instance.SetDeleteArray(&deleteArray_R3BGeodTofPar);
      instance.SetDestructor(&destruct_R3BGeodTofPar);
      instance.SetStreamerFunc(&streamer_R3BGeodTofPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeodTofPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeodTofPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeodTofPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BdTof(void *p = 0);
   static void *newArray_R3BdTof(Long_t size, void *p);
   static void delete_R3BdTof(void *p);
   static void deleteArray_R3BdTof(void *p);
   static void destruct_R3BdTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BdTof*)
   {
      ::R3BdTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BdTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BdTof", ::R3BdTof::Class_Version(), "invalid", 25,
                  typeid(::R3BdTof), DefineBehavior(ptr, ptr),
                  &::R3BdTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BdTof) );
      instance.SetNew(&new_R3BdTof);
      instance.SetNewArray(&newArray_R3BdTof);
      instance.SetDelete(&delete_R3BdTof);
      instance.SetDeleteArray(&deleteArray_R3BdTof);
      instance.SetDestructor(&destruct_R3BdTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BdTof*)
   {
      return GenerateInitInstanceLocal((::R3BdTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BdTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BdTofDigiPar(void *p = 0);
   static void *newArray_R3BdTofDigiPar(Long_t size, void *p);
   static void delete_R3BdTofDigiPar(void *p);
   static void deleteArray_R3BdTofDigiPar(void *p);
   static void destruct_R3BdTofDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BdTofDigiPar*)
   {
      ::R3BdTofDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BdTofDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BdTofDigiPar", ::R3BdTofDigiPar::Class_Version(), "invalid", 238,
                  typeid(::R3BdTofDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BdTofDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BdTofDigiPar) );
      instance.SetNew(&new_R3BdTofDigiPar);
      instance.SetNewArray(&newArray_R3BdTofDigiPar);
      instance.SetDelete(&delete_R3BdTofDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BdTofDigiPar);
      instance.SetDestructor(&destruct_R3BdTofDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BdTofDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BdTofDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BdTofDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BdTofContFact(void *p = 0);
   static void *newArray_R3BdTofContFact(Long_t size, void *p);
   static void delete_R3BdTofContFact(void *p);
   static void deleteArray_R3BdTofContFact(void *p);
   static void destruct_R3BdTofContFact(void *p);
   static void streamer_R3BdTofContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BdTofContFact*)
   {
      ::R3BdTofContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BdTofContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BdTofContFact", ::R3BdTofContFact::Class_Version(), "invalid", 215,
                  typeid(::R3BdTofContFact), DefineBehavior(ptr, ptr),
                  &::R3BdTofContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BdTofContFact) );
      instance.SetNew(&new_R3BdTofContFact);
      instance.SetNewArray(&newArray_R3BdTofContFact);
      instance.SetDelete(&delete_R3BdTofContFact);
      instance.SetDeleteArray(&deleteArray_R3BdTofContFact);
      instance.SetDestructor(&destruct_R3BdTofContFact);
      instance.SetStreamerFunc(&streamer_R3BdTofContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BdTofContFact*)
   {
      return GenerateInitInstanceLocal((::R3BdTofContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BdTofContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeodTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeodTof::Class_Name()
{
   return "R3BGeodTof";
}

//______________________________________________________________________________
const char *R3BGeodTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeodTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeodTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeodTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeodTofPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeodTofPar::Class_Name()
{
   return "R3BGeodTofPar";
}

//______________________________________________________________________________
const char *R3BGeodTofPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTofPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeodTofPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTofPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeodTofPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTofPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeodTofPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeodTofPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BdTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BdTof::Class_Name()
{
   return "R3BdTof";
}

//______________________________________________________________________________
const char *R3BdTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BdTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BdTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BdTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BdTofDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BdTofDigiPar::Class_Name()
{
   return "R3BdTofDigiPar";
}

//______________________________________________________________________________
const char *R3BdTofDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BdTofDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BdTofDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BdTofDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BdTofContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BdTofContFact::Class_Name()
{
   return "R3BdTofContFact";
}

//______________________________________________________________________________
const char *R3BdTofContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BdTofContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BdTofContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BdTofContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeodTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeodTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeodTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeodTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeodTof(void *p) {
      return  p ? new(p) ::R3BGeodTof : new ::R3BGeodTof;
   }
   static void *newArray_R3BGeodTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeodTof[nElements] : new ::R3BGeodTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeodTof(void *p) {
      delete ((::R3BGeodTof*)p);
   }
   static void deleteArray_R3BGeodTof(void *p) {
      delete [] ((::R3BGeodTof*)p);
   }
   static void destruct_R3BGeodTof(void *p) {
      typedef ::R3BGeodTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeodTof

//______________________________________________________________________________
void R3BGeodTofPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeodTofPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeodTofPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeodTofPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeodTofPar(void *p) {
      return  p ? new(p) ::R3BGeodTofPar : new ::R3BGeodTofPar;
   }
   static void *newArray_R3BGeodTofPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeodTofPar[nElements] : new ::R3BGeodTofPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeodTofPar(void *p) {
      delete ((::R3BGeodTofPar*)p);
   }
   static void deleteArray_R3BGeodTofPar(void *p) {
      delete [] ((::R3BGeodTofPar*)p);
   }
   static void destruct_R3BGeodTofPar(void *p) {
      typedef ::R3BGeodTofPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeodTofPar(TBuffer &buf, void *obj) {
      ((::R3BGeodTofPar*)obj)->::R3BGeodTofPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeodTofPar

//______________________________________________________________________________
void R3BdTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BdTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BdTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BdTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BdTof(void *p) {
      return  p ? new(p) ::R3BdTof : new ::R3BdTof;
   }
   static void *newArray_R3BdTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BdTof[nElements] : new ::R3BdTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BdTof(void *p) {
      delete ((::R3BdTof*)p);
   }
   static void deleteArray_R3BdTof(void *p) {
      delete [] ((::R3BdTof*)p);
   }
   static void destruct_R3BdTof(void *p) {
      typedef ::R3BdTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BdTof

//______________________________________________________________________________
void R3BdTofDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BdTofDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BdTofDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BdTofDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BdTofDigiPar(void *p) {
      return  p ? new(p) ::R3BdTofDigiPar : new ::R3BdTofDigiPar;
   }
   static void *newArray_R3BdTofDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BdTofDigiPar[nElements] : new ::R3BdTofDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BdTofDigiPar(void *p) {
      delete ((::R3BdTofDigiPar*)p);
   }
   static void deleteArray_R3BdTofDigiPar(void *p) {
      delete [] ((::R3BdTofDigiPar*)p);
   }
   static void destruct_R3BdTofDigiPar(void *p) {
      typedef ::R3BdTofDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BdTofDigiPar

//______________________________________________________________________________
void R3BdTofContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BdTofContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BdTofContFact(void *p) {
      return  p ? new(p) ::R3BdTofContFact : new ::R3BdTofContFact;
   }
   static void *newArray_R3BdTofContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BdTofContFact[nElements] : new ::R3BdTofContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BdTofContFact(void *p) {
      delete ((::R3BdTofContFact*)p);
   }
   static void deleteArray_R3BdTofContFact(void *p) {
      delete [] ((::R3BdTofContFact*)p);
   }
   static void destruct_R3BdTofContFact(void *p) {
      typedef ::R3BdTofContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BdTofContFact(TBuffer &buf, void *obj) {
      ((::R3BdTofContFact*)obj)->::R3BdTofContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BdTofContFact

namespace {
  void TriggerDictionaryInitialization_G__R3BdTofDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dtof",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dtof/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeodTof;
class R3BGeodTofPar;
class R3BdTof;
class R3BdTofDigiPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all DTOF parameter containers)ATTRDUMP"))) R3BdTofContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BdTof header file                    -----
// -----                  Created 18/05/15  by D. Kresan               -----
// -------------------------------------------------------------------------

/**  R3BdTof.h
 **/

#ifndef R3BDTOF_H
#define R3BDTOF_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BdTofPoint;
class FairVolume;

class R3BdTof : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BdTof();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BdTof(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BdTof();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BdTofPoint and adds it to the
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

    /** Virtaul method Construct geometry
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
    Double32_t fTime;               //!  time average in detector
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length average in detector
    Double32_t fELoss;              //!  energy loss

    Int_t fPosIndex;               //!
    TClonesArray* fdTofCollection; //!  The hit collection
    Bool_t kGeoSaved;              //!
    TList* flGeoPar;               //!

    /** Private method AddHit
     **
     ** Adds a mTofPoint to the HitCollection
     **/
    R3BdTofPoint*
        AddHit(Int_t trackID, Int_t detID, TVector3 posIn, TVector3 pos_out, TVector3 momIn, TVector3 momOut, Double_t time, Double_t length, Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BdTof, 1);
};

inline void R3BdTof::ResetParameters()
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
#ifndef R3BGEODTOF_H
#define R3BGEODTOF_H

#include "FairGeoSet.h"

class  R3BGeodTof : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeodTof();
  ~R3BGeodTof() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeodTof,0) // Class for STS
};

inline Int_t R3BGeodTof::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEODTOF_H */
#ifndef R3BGEODTOFPAR_H
#define R3BGEODTOFPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeodTofPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeodTofPar(const char* name="R3BGeodTofPar",
             const char* title="mTof Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeodTofPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeodTofPar,1)
};

#endif /* !R3BGEODTOFPAR_H */
#ifndef R3BDTOFCONTFACT_H
#define R3BDTOFCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BdTofContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BdTofContFact();
  ~R3BdTofContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BdTofContFact,0) // Factory for all DTOF parameter containers
};

#endif  /* !R3BDTOFCONTFACT_H */
#ifndef R3BDTOFDIGIPAR_H
#define R3BDTOFDIGIPAR_H 1


#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BdTofDigiPar : public FairParGenericSet
{
    public :
	R3BdTofDigiPar (const char* name="R3BdTofDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BdTofDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BdTofDigiPar,1); //
};

#endif /* !R3BDTOFDIGIPAR_H*/


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeodTof", payloadCode, "@",
"R3BGeodTofPar", payloadCode, "@",
"R3BdTof", payloadCode, "@",
"R3BdTofContFact", payloadCode, "@",
"R3BdTofDigiPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BdTofDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BdTofDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BdTofDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BdTofDict() {
  TriggerDictionaryInitialization_G__R3BdTofDict_Impl();
}
