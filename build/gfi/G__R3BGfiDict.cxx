// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIgfidIG__R3BGfiDict

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
#include "R3BGfi.h"
#include "R3BGeoGfi.h"
#include "R3BGeoGfiPar.h"
#include "R3BGfiContFact.h"
#include "R3BGfiDigiPar.h"
#include "R3BGfiDigitizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoGfi(void *p = 0);
   static void *newArray_R3BGeoGfi(Long_t size, void *p);
   static void delete_R3BGeoGfi(void *p);
   static void deleteArray_R3BGeoGfi(void *p);
   static void destruct_R3BGeoGfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoGfi*)
   {
      ::R3BGeoGfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoGfi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoGfi", ::R3BGeoGfi::Class_Version(), "invalid", 168,
                  typeid(::R3BGeoGfi), DefineBehavior(ptr, ptr),
                  &::R3BGeoGfi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoGfi) );
      instance.SetNew(&new_R3BGeoGfi);
      instance.SetNewArray(&newArray_R3BGeoGfi);
      instance.SetDelete(&delete_R3BGeoGfi);
      instance.SetDeleteArray(&deleteArray_R3BGeoGfi);
      instance.SetDestructor(&destruct_R3BGeoGfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoGfi*)
   {
      return GenerateInitInstanceLocal((::R3BGeoGfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoGfi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoGfiPar(void *p = 0);
   static void *newArray_R3BGeoGfiPar(Long_t size, void *p);
   static void delete_R3BGeoGfiPar(void *p);
   static void deleteArray_R3BGeoGfiPar(void *p);
   static void destruct_R3BGeoGfiPar(void *p);
   static void streamer_R3BGeoGfiPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoGfiPar*)
   {
      ::R3BGeoGfiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoGfiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoGfiPar", ::R3BGeoGfiPar::Class_Version(), "invalid", 195,
                  typeid(::R3BGeoGfiPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoGfiPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoGfiPar) );
      instance.SetNew(&new_R3BGeoGfiPar);
      instance.SetNewArray(&newArray_R3BGeoGfiPar);
      instance.SetDelete(&delete_R3BGeoGfiPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoGfiPar);
      instance.SetDestructor(&destruct_R3BGeoGfiPar);
      instance.SetStreamerFunc(&streamer_R3BGeoGfiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoGfiPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoGfiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoGfiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfi(void *p = 0);
   static void *newArray_R3BGfi(Long_t size, void *p);
   static void delete_R3BGfi(void *p);
   static void deleteArray_R3BGfi(void *p);
   static void destruct_R3BGfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfi*)
   {
      ::R3BGfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfi", ::R3BGfi::Class_Version(), "invalid", 25,
                  typeid(::R3BGfi), DefineBehavior(ptr, ptr),
                  &::R3BGfi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfi) );
      instance.SetNew(&new_R3BGfi);
      instance.SetNewArray(&newArray_R3BGfi);
      instance.SetDelete(&delete_R3BGfi);
      instance.SetDeleteArray(&deleteArray_R3BGfi);
      instance.SetDestructor(&destruct_R3BGfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfi*)
   {
      return GenerateInitInstanceLocal((::R3BGfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiContFact(void *p = 0);
   static void *newArray_R3BGfiContFact(Long_t size, void *p);
   static void delete_R3BGfiContFact(void *p);
   static void deleteArray_R3BGfiContFact(void *p);
   static void destruct_R3BGfiContFact(void *p);
   static void streamer_R3BGfiContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiContFact*)
   {
      ::R3BGfiContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiContFact", ::R3BGfiContFact::Class_Version(), "invalid", 222,
                  typeid(::R3BGfiContFact), DefineBehavior(ptr, ptr),
                  &::R3BGfiContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGfiContFact) );
      instance.SetNew(&new_R3BGfiContFact);
      instance.SetNewArray(&newArray_R3BGfiContFact);
      instance.SetDelete(&delete_R3BGfiContFact);
      instance.SetDeleteArray(&deleteArray_R3BGfiContFact);
      instance.SetDestructor(&destruct_R3BGfiContFact);
      instance.SetStreamerFunc(&streamer_R3BGfiContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiContFact*)
   {
      return GenerateInitInstanceLocal((::R3BGfiContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfiContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiDigiPar(void *p = 0);
   static void *newArray_R3BGfiDigiPar(Long_t size, void *p);
   static void delete_R3BGfiDigiPar(void *p);
   static void deleteArray_R3BGfiDigiPar(void *p);
   static void destruct_R3BGfiDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiDigiPar*)
   {
      ::R3BGfiDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiDigiPar", ::R3BGfiDigiPar::Class_Version(), "invalid", 244,
                  typeid(::R3BGfiDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BGfiDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiDigiPar) );
      instance.SetNew(&new_R3BGfiDigiPar);
      instance.SetNewArray(&newArray_R3BGfiDigiPar);
      instance.SetDelete(&delete_R3BGfiDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BGfiDigiPar);
      instance.SetDestructor(&destruct_R3BGfiDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BGfiDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfiDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiDigitizer(void *p = 0);
   static void *newArray_R3BGfiDigitizer(Long_t size, void *p);
   static void delete_R3BGfiDigitizer(void *p);
   static void deleteArray_R3BGfiDigitizer(void *p);
   static void destruct_R3BGfiDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiDigitizer*)
   {
      ::R3BGfiDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiDigitizer", ::R3BGfiDigitizer::Class_Version(), "invalid", 285,
                  typeid(::R3BGfiDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BGfiDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiDigitizer) );
      instance.SetNew(&new_R3BGfiDigitizer);
      instance.SetNewArray(&newArray_R3BGfiDigitizer);
      instance.SetDelete(&delete_R3BGfiDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BGfiDigitizer);
      instance.SetDestructor(&destruct_R3BGfiDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BGfiDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfiDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoGfi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoGfi::Class_Name()
{
   return "R3BGeoGfi";
}

//______________________________________________________________________________
const char *R3BGeoGfi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoGfi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoGfi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoGfi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoGfiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoGfiPar::Class_Name()
{
   return "R3BGeoGfiPar";
}

//______________________________________________________________________________
const char *R3BGeoGfiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoGfiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoGfiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoGfiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoGfiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfi::Class_Name()
{
   return "R3BGfi";
}

//______________________________________________________________________________
const char *R3BGfi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiContFact::Class_Name()
{
   return "R3BGfiContFact";
}

//______________________________________________________________________________
const char *R3BGfiContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiDigiPar::Class_Name()
{
   return "R3BGfiDigiPar";
}

//______________________________________________________________________________
const char *R3BGfiDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiDigitizer::Class_Name()
{
   return "R3BGfiDigitizer";
}

//______________________________________________________________________________
const char *R3BGfiDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoGfi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoGfi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoGfi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoGfi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoGfi(void *p) {
      return  p ? new(p) ::R3BGeoGfi : new ::R3BGeoGfi;
   }
   static void *newArray_R3BGeoGfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoGfi[nElements] : new ::R3BGeoGfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoGfi(void *p) {
      delete ((::R3BGeoGfi*)p);
   }
   static void deleteArray_R3BGeoGfi(void *p) {
      delete [] ((::R3BGeoGfi*)p);
   }
   static void destruct_R3BGeoGfi(void *p) {
      typedef ::R3BGeoGfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoGfi

//______________________________________________________________________________
void R3BGeoGfiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoGfiPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoGfiPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoGfiPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoGfiPar(void *p) {
      return  p ? new(p) ::R3BGeoGfiPar : new ::R3BGeoGfiPar;
   }
   static void *newArray_R3BGeoGfiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoGfiPar[nElements] : new ::R3BGeoGfiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoGfiPar(void *p) {
      delete ((::R3BGeoGfiPar*)p);
   }
   static void deleteArray_R3BGeoGfiPar(void *p) {
      delete [] ((::R3BGeoGfiPar*)p);
   }
   static void destruct_R3BGeoGfiPar(void *p) {
      typedef ::R3BGeoGfiPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoGfiPar(TBuffer &buf, void *obj) {
      ((::R3BGeoGfiPar*)obj)->::R3BGeoGfiPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoGfiPar

//______________________________________________________________________________
void R3BGfi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfi(void *p) {
      return  p ? new(p) ::R3BGfi : new ::R3BGfi;
   }
   static void *newArray_R3BGfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfi[nElements] : new ::R3BGfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfi(void *p) {
      delete ((::R3BGfi*)p);
   }
   static void deleteArray_R3BGfi(void *p) {
      delete [] ((::R3BGfi*)p);
   }
   static void destruct_R3BGfi(void *p) {
      typedef ::R3BGfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfi

//______________________________________________________________________________
void R3BGfiContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiContFact(void *p) {
      return  p ? new(p) ::R3BGfiContFact : new ::R3BGfiContFact;
   }
   static void *newArray_R3BGfiContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiContFact[nElements] : new ::R3BGfiContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiContFact(void *p) {
      delete ((::R3BGfiContFact*)p);
   }
   static void deleteArray_R3BGfiContFact(void *p) {
      delete [] ((::R3BGfiContFact*)p);
   }
   static void destruct_R3BGfiContFact(void *p) {
      typedef ::R3BGfiContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGfiContFact(TBuffer &buf, void *obj) {
      ((::R3BGfiContFact*)obj)->::R3BGfiContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGfiContFact

//______________________________________________________________________________
void R3BGfiDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiDigiPar(void *p) {
      return  p ? new(p) ::R3BGfiDigiPar : new ::R3BGfiDigiPar;
   }
   static void *newArray_R3BGfiDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiDigiPar[nElements] : new ::R3BGfiDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiDigiPar(void *p) {
      delete ((::R3BGfiDigiPar*)p);
   }
   static void deleteArray_R3BGfiDigiPar(void *p) {
      delete [] ((::R3BGfiDigiPar*)p);
   }
   static void destruct_R3BGfiDigiPar(void *p) {
      typedef ::R3BGfiDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiDigiPar

//______________________________________________________________________________
void R3BGfiDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiDigitizer(void *p) {
      return  p ? new(p) ::R3BGfiDigitizer : new ::R3BGfiDigitizer;
   }
   static void *newArray_R3BGfiDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiDigitizer[nElements] : new ::R3BGfiDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiDigitizer(void *p) {
      delete ((::R3BGfiDigitizer*)p);
   }
   static void deleteArray_R3BGfiDigitizer(void *p) {
      delete [] ((::R3BGfiDigitizer*)p);
   }
   static void destruct_R3BGfiDigitizer(void *p) {
      typedef ::R3BGfiDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiDigitizer

namespace {
  void TriggerDictionaryInitialization_G__R3BGfiDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/gfi",
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
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/gfi/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoGfi;
class R3BGeoGfiPar;
class R3BGfi;
class __attribute__((annotate(R"ATTRDUMP(Factory for all GFI parameter containers)ATTRDUMP"))) R3BGfiContFact;
class R3BGfiDigiPar;
class R3BGfiDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BGfi header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BGfi.h
 **/

#ifndef R3BGFI_H
#define R3BGFI_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BGfiPoint;
class FairVolume;

class R3BGfi : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BGfi();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BGfi(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BGfi();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BGfiPoint and adds it to the
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
    TClonesArray* fGfiCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    /** Private method AddHit
     **
     ** Adds a GfiPoint to the HitCollection
     **/
    R3BGfiPoint* AddHit(Int_t trackID,
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

    ClassDef(R3BGfi, 1);
};

inline void R3BGfi::ResetParameters()
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
#ifndef R3BGEOGFI_H
#define R3BGEOGFI_H

#include "FairGeoSet.h"

class  R3BGeoGfi : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoGfi();
  ~R3BGeoGfi() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoGfi,0) // Class for STS
};

inline Int_t R3BGeoGfi::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOGFI_H */
#ifndef R3BGEOGFIPAR_H
#define R3BGEOGFIPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoGfiPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoGfiPar(const char* name="R3BGeoGfiPar",
             const char* title="Gfi Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoGfiPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoGfiPar,1)
};

#endif /* !R3BGEOGFIPAR_H */
#ifndef R3BGFICONTFACT_H
#define R3BGFICONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BGfiContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BGfiContFact();
  ~R3BGfiContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BGfiContFact,0) // Factory for all GFI parameter containers
};

#endif  /* !R3BGFICONTFACT_H */
#ifndef R3BGFIDIGIPAR_H
#define R3BGFIDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BGfiDigiPar : public FairParGenericSet
{
    public :
	R3BGfiDigiPar (const char* name="R3BGfiDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BGfiDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BGfiDigiPar,1); //
};

#endif /* !R3BGFIDIGIPAR_H*/

#ifndef R3BGFIDIGITIZER_H
#define R3BGFIDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BGfiDigiPar.h"
#include "R3BGfiDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BGfiDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BGfiDigitizer();


  /** Destructor **/
  ~R3BGfiDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BGfiDigi* AddHit(Int_t gf1mul,Double_t gf1_01x,Int_t gf2mul,Double_t gf2_01x);


  protected:
  TClonesArray* fGfiPoints;
  TClonesArray* fGfiMCTrack; 
  TClonesArray* fGfiDigi;

  // Parameter class
  R3BGfiDigiPar* fGfiDigiPar;

  //- Control Hitograms

  
  Int_t eventNoGfi;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BGfiDigitizer,1);
  
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoGfi", payloadCode, "@",
"R3BGeoGfiPar", payloadCode, "@",
"R3BGfi", payloadCode, "@",
"R3BGfiContFact", payloadCode, "@",
"R3BGfiDigiPar", payloadCode, "@",
"R3BGfiDigitizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BGfiDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BGfiDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BGfiDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BGfiDict() {
  TriggerDictionaryInitialization_G__R3BGfiDict_Impl();
}
