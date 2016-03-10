// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddImtofdIG__R3BmTofDict

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
#include "R3BmTof.h"
#include "R3BGeomTof.h"
#include "R3BGeomTofPar.h"
#include "R3BmTofContFact.h"
#include "R3BmTofDigiPar.h"
#include "R3BmTofDigitizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeomTof(void *p = 0);
   static void *newArray_R3BGeomTof(Long_t size, void *p);
   static void delete_R3BGeomTof(void *p);
   static void deleteArray_R3BGeomTof(void *p);
   static void destruct_R3BGeomTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeomTof*)
   {
      ::R3BGeomTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeomTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeomTof", ::R3BGeomTof::Class_Version(), "invalid", 161,
                  typeid(::R3BGeomTof), DefineBehavior(ptr, ptr),
                  &::R3BGeomTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeomTof) );
      instance.SetNew(&new_R3BGeomTof);
      instance.SetNewArray(&newArray_R3BGeomTof);
      instance.SetDelete(&delete_R3BGeomTof);
      instance.SetDeleteArray(&deleteArray_R3BGeomTof);
      instance.SetDestructor(&destruct_R3BGeomTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeomTof*)
   {
      return GenerateInitInstanceLocal((::R3BGeomTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeomTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeomTofPar(void *p = 0);
   static void *newArray_R3BGeomTofPar(Long_t size, void *p);
   static void delete_R3BGeomTofPar(void *p);
   static void deleteArray_R3BGeomTofPar(void *p);
   static void destruct_R3BGeomTofPar(void *p);
   static void streamer_R3BGeomTofPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeomTofPar*)
   {
      ::R3BGeomTofPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeomTofPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeomTofPar", ::R3BGeomTofPar::Class_Version(), "invalid", 188,
                  typeid(::R3BGeomTofPar), DefineBehavior(ptr, ptr),
                  &::R3BGeomTofPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeomTofPar) );
      instance.SetNew(&new_R3BGeomTofPar);
      instance.SetNewArray(&newArray_R3BGeomTofPar);
      instance.SetDelete(&delete_R3BGeomTofPar);
      instance.SetDeleteArray(&deleteArray_R3BGeomTofPar);
      instance.SetDestructor(&destruct_R3BGeomTofPar);
      instance.SetStreamerFunc(&streamer_R3BGeomTofPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeomTofPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeomTofPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeomTofPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTof(void *p = 0);
   static void *newArray_R3BmTof(Long_t size, void *p);
   static void delete_R3BmTof(void *p);
   static void deleteArray_R3BmTof(void *p);
   static void destruct_R3BmTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTof*)
   {
      ::R3BmTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTof", ::R3BmTof::Class_Version(), "invalid", 25,
                  typeid(::R3BmTof), DefineBehavior(ptr, ptr),
                  &::R3BmTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTof) );
      instance.SetNew(&new_R3BmTof);
      instance.SetNewArray(&newArray_R3BmTof);
      instance.SetDelete(&delete_R3BmTof);
      instance.SetDeleteArray(&deleteArray_R3BmTof);
      instance.SetDestructor(&destruct_R3BmTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTof*)
   {
      return GenerateInitInstanceLocal((::R3BmTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofDigitizer(void *p = 0);
   static void *newArray_R3BmTofDigitizer(Long_t size, void *p);
   static void delete_R3BmTofDigitizer(void *p);
   static void deleteArray_R3BmTofDigitizer(void *p);
   static void destruct_R3BmTofDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofDigitizer*)
   {
      ::R3BmTofDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofDigitizer", ::R3BmTofDigitizer::Class_Version(), "invalid", 279,
                  typeid(::R3BmTofDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BmTofDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofDigitizer) );
      instance.SetNew(&new_R3BmTofDigitizer);
      instance.SetNewArray(&newArray_R3BmTofDigitizer);
      instance.SetDelete(&delete_R3BmTofDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BmTofDigitizer);
      instance.SetDestructor(&destruct_R3BmTofDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BmTofDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTofDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofDigiPar(void *p = 0);
   static void *newArray_R3BmTofDigiPar(Long_t size, void *p);
   static void delete_R3BmTofDigiPar(void *p);
   static void deleteArray_R3BmTofDigiPar(void *p);
   static void destruct_R3BmTofDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofDigiPar*)
   {
      ::R3BmTofDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofDigiPar", ::R3BmTofDigiPar::Class_Version(), "invalid", 238,
                  typeid(::R3BmTofDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BmTofDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofDigiPar) );
      instance.SetNew(&new_R3BmTofDigiPar);
      instance.SetNewArray(&newArray_R3BmTofDigiPar);
      instance.SetDelete(&delete_R3BmTofDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BmTofDigiPar);
      instance.SetDestructor(&destruct_R3BmTofDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BmTofDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTofDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofContFact(void *p = 0);
   static void *newArray_R3BmTofContFact(Long_t size, void *p);
   static void delete_R3BmTofContFact(void *p);
   static void deleteArray_R3BmTofContFact(void *p);
   static void destruct_R3BmTofContFact(void *p);
   static void streamer_R3BmTofContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofContFact*)
   {
      ::R3BmTofContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofContFact", ::R3BmTofContFact::Class_Version(), "invalid", 215,
                  typeid(::R3BmTofContFact), DefineBehavior(ptr, ptr),
                  &::R3BmTofContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BmTofContFact) );
      instance.SetNew(&new_R3BmTofContFact);
      instance.SetNewArray(&newArray_R3BmTofContFact);
      instance.SetDelete(&delete_R3BmTofContFact);
      instance.SetDeleteArray(&deleteArray_R3BmTofContFact);
      instance.SetDestructor(&destruct_R3BmTofContFact);
      instance.SetStreamerFunc(&streamer_R3BmTofContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofContFact*)
   {
      return GenerateInitInstanceLocal((::R3BmTofContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTofContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeomTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeomTof::Class_Name()
{
   return "R3BGeomTof";
}

//______________________________________________________________________________
const char *R3BGeomTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeomTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeomTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeomTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeomTofPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeomTofPar::Class_Name()
{
   return "R3BGeomTofPar";
}

//______________________________________________________________________________
const char *R3BGeomTofPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTofPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeomTofPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTofPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeomTofPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTofPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeomTofPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeomTofPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTof::Class_Name()
{
   return "R3BmTof";
}

//______________________________________________________________________________
const char *R3BmTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofDigitizer::Class_Name()
{
   return "R3BmTofDigitizer";
}

//______________________________________________________________________________
const char *R3BmTofDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofDigiPar::Class_Name()
{
   return "R3BmTofDigiPar";
}

//______________________________________________________________________________
const char *R3BmTofDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofContFact::Class_Name()
{
   return "R3BmTofContFact";
}

//______________________________________________________________________________
const char *R3BmTofContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeomTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeomTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeomTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeomTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeomTof(void *p) {
      return  p ? new(p) ::R3BGeomTof : new ::R3BGeomTof;
   }
   static void *newArray_R3BGeomTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeomTof[nElements] : new ::R3BGeomTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeomTof(void *p) {
      delete ((::R3BGeomTof*)p);
   }
   static void deleteArray_R3BGeomTof(void *p) {
      delete [] ((::R3BGeomTof*)p);
   }
   static void destruct_R3BGeomTof(void *p) {
      typedef ::R3BGeomTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeomTof

//______________________________________________________________________________
void R3BGeomTofPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeomTofPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeomTofPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeomTofPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeomTofPar(void *p) {
      return  p ? new(p) ::R3BGeomTofPar : new ::R3BGeomTofPar;
   }
   static void *newArray_R3BGeomTofPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeomTofPar[nElements] : new ::R3BGeomTofPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeomTofPar(void *p) {
      delete ((::R3BGeomTofPar*)p);
   }
   static void deleteArray_R3BGeomTofPar(void *p) {
      delete [] ((::R3BGeomTofPar*)p);
   }
   static void destruct_R3BGeomTofPar(void *p) {
      typedef ::R3BGeomTofPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeomTofPar(TBuffer &buf, void *obj) {
      ((::R3BGeomTofPar*)obj)->::R3BGeomTofPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeomTofPar

//______________________________________________________________________________
void R3BmTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTof(void *p) {
      return  p ? new(p) ::R3BmTof : new ::R3BmTof;
   }
   static void *newArray_R3BmTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTof[nElements] : new ::R3BmTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTof(void *p) {
      delete ((::R3BmTof*)p);
   }
   static void deleteArray_R3BmTof(void *p) {
      delete [] ((::R3BmTof*)p);
   }
   static void destruct_R3BmTof(void *p) {
      typedef ::R3BmTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTof

//______________________________________________________________________________
void R3BmTofDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofDigitizer(void *p) {
      return  p ? new(p) ::R3BmTofDigitizer : new ::R3BmTofDigitizer;
   }
   static void *newArray_R3BmTofDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofDigitizer[nElements] : new ::R3BmTofDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofDigitizer(void *p) {
      delete ((::R3BmTofDigitizer*)p);
   }
   static void deleteArray_R3BmTofDigitizer(void *p) {
      delete [] ((::R3BmTofDigitizer*)p);
   }
   static void destruct_R3BmTofDigitizer(void *p) {
      typedef ::R3BmTofDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofDigitizer

//______________________________________________________________________________
void R3BmTofDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofDigiPar(void *p) {
      return  p ? new(p) ::R3BmTofDigiPar : new ::R3BmTofDigiPar;
   }
   static void *newArray_R3BmTofDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofDigiPar[nElements] : new ::R3BmTofDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofDigiPar(void *p) {
      delete ((::R3BmTofDigiPar*)p);
   }
   static void deleteArray_R3BmTofDigiPar(void *p) {
      delete [] ((::R3BmTofDigiPar*)p);
   }
   static void destruct_R3BmTofDigiPar(void *p) {
      typedef ::R3BmTofDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofDigiPar

//______________________________________________________________________________
void R3BmTofContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofContFact(void *p) {
      return  p ? new(p) ::R3BmTofContFact : new ::R3BmTofContFact;
   }
   static void *newArray_R3BmTofContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofContFact[nElements] : new ::R3BmTofContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofContFact(void *p) {
      delete ((::R3BmTofContFact*)p);
   }
   static void deleteArray_R3BmTofContFact(void *p) {
      delete [] ((::R3BmTofContFact*)p);
   }
   static void destruct_R3BmTofContFact(void *p) {
      typedef ::R3BmTofContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BmTofContFact(TBuffer &buf, void *obj) {
      ((::R3BmTofContFact*)obj)->::R3BmTofContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BmTofContFact

namespace {
  void TriggerDictionaryInitialization_G__R3BmTofDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/mtof",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
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
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/mtof/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeomTof;
class R3BGeomTofPar;
class R3BmTof;
class R3BmTofDigitizer;
class R3BmTofDigiPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all MTOF parameter containers)ATTRDUMP"))) R3BmTofContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BmTof header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BmTof.h
 **/

#ifndef R3BMTOF_H
#define R3BMTOF_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BmTofPoint;
class FairVolume;

class R3BmTof : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BmTof();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BmTof(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BmTof();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BmTofPoint and adds it to the
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
    TClonesArray* fmTofCollection; //!  The hit collection
    Bool_t kGeoSaved;              //!
    TList* flGeoPar;               //!

    /** Private method AddHit
     **
     ** Adds a mTofPoint to the HitCollection
     **/
    R3BmTofPoint*
        AddHit(Int_t trackID, Int_t detID, TVector3 posIn, TVector3 pos_out, TVector3 momIn, TVector3 momOut, Double_t time, Double_t length, Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BmTof, 1);
};

inline void R3BmTof::ResetParameters()
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
#ifndef R3BGEOMTOF_H
#define R3BGEOMTOF_H

#include "FairGeoSet.h"

class  R3BGeomTof : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeomTof();
  ~R3BGeomTof() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeomTof,0) // Class for STS
};

inline Int_t R3BGeomTof::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOMTOF_H */
#ifndef R3BGEOMTOFPAR_H
#define R3BGEOMTOFPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeomTofPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeomTofPar(const char* name="R3BGeomTofPar",
             const char* title="mTof Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeomTofPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeomTofPar,1)
};

#endif /* !R3BGEOMTOFPAR_H */
#ifndef R3BMTOFCONTFACT_H
#define R3BMTOFCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BmTofContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BmTofContFact();
  ~R3BmTofContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BmTofContFact,0) // Factory for all MTOF parameter containers
};

#endif  /* !R3BMTOFCONTFACT_H */
#ifndef R3BMTOFDIGIPAR_H
#define R3BMTOFDIGIPAR_H 1


#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BmTofDigiPar : public FairParGenericSet
{
    public :
	R3BmTofDigiPar (const char* name="R3BmTofDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BmTofDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BmTofDigiPar,1); //
};

#endif /* !R3BMTOFDIGIPAR_H*/

#ifndef R3BMTOFDIGITIZER_H
#define R3BMTOFDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BmTofDigiPar.h"
#include "R3BmTofDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BmTofDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BmTofDigitizer();


  /** Destructor **/
  ~R3BmTofDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  //R3BmTofDigi* AddHit(Int_t ntmul,Double_t ntfx,Double_t ntfy,Double_t ntft,Double_t ntfpath,Double_t ntfpx,Double_t ntfpy,
  //Double_t ntfpz);
  R3BmTofDigi* AddHit(Int_t ntmul,Double_t ntfx,Double_t ntfy,Double_t ntft,Double_t ntfpath,Double_t ntfpx,Double_t ntfpy,
  Double_t ntfpz, Double_t ntfe);


  protected:
  TClonesArray* fmTofPoints;
  TClonesArray* fmTofMCTrack; 
  TClonesArray* fmTofDigi;


  // Parameter class
  R3BmTofDigiPar* fmTofDigiPar;

  //- Control Hitograms
  
  TH1F * NtfXhis;
  
  Int_t eventNomTof;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BmTofDigitizer,1);
  
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeomTof", payloadCode, "@",
"R3BGeomTofPar", payloadCode, "@",
"R3BmTof", payloadCode, "@",
"R3BmTofContFact", payloadCode, "@",
"R3BmTofDigiPar", payloadCode, "@",
"R3BmTofDigitizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BmTofDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BmTofDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BmTofDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BmTofDict() {
  TriggerDictionaryInitialization_G__R3BmTofDict_Impl();
}
