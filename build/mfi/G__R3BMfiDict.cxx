// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddImfidIG__R3BMfiDict

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
#include "R3BMfi.h"
#include "R3BGeoMfi.h"
#include "R3BMfiDigiPar.h"
#include "R3BMfiDigitizer.h"
#include "R3BKeepEventProbabilityMfi.h"
#include "unpack/R3BMfiRawHit.h"
#include "unpack/R3BMfiUnpack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoMfi(void *p = 0);
   static void *newArray_R3BGeoMfi(Long_t size, void *p);
   static void delete_R3BGeoMfi(void *p);
   static void deleteArray_R3BGeoMfi(void *p);
   static void destruct_R3BGeoMfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoMfi*)
   {
      ::R3BGeoMfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoMfi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoMfi", ::R3BGeoMfi::Class_Version(), "invalid", 184,
                  typeid(::R3BGeoMfi), DefineBehavior(ptr, ptr),
                  &::R3BGeoMfi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoMfi) );
      instance.SetNew(&new_R3BGeoMfi);
      instance.SetNewArray(&newArray_R3BGeoMfi);
      instance.SetDelete(&delete_R3BGeoMfi);
      instance.SetDeleteArray(&deleteArray_R3BGeoMfi);
      instance.SetDestructor(&destruct_R3BGeoMfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoMfi*)
   {
      return GenerateInitInstanceLocal((::R3BGeoMfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoMfi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfi(void *p = 0);
   static void *newArray_R3BMfi(Long_t size, void *p);
   static void delete_R3BMfi(void *p);
   static void deleteArray_R3BMfi(void *p);
   static void destruct_R3BMfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfi*)
   {
      ::R3BMfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfi", ::R3BMfi::Class_Version(), "invalid", 28,
                  typeid(::R3BMfi), DefineBehavior(ptr, ptr),
                  &::R3BMfi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfi) );
      instance.SetNew(&new_R3BMfi);
      instance.SetNewArray(&newArray_R3BMfi);
      instance.SetDelete(&delete_R3BMfi);
      instance.SetDeleteArray(&deleteArray_R3BMfi);
      instance.SetDestructor(&destruct_R3BMfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfi*)
   {
      return GenerateInitInstanceLocal((::R3BMfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiDigiPar(void *p = 0);
   static void *newArray_R3BMfiDigiPar(Long_t size, void *p);
   static void delete_R3BMfiDigiPar(void *p);
   static void deleteArray_R3BMfiDigiPar(void *p);
   static void destruct_R3BMfiDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiDigiPar*)
   {
      ::R3BMfiDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiDigiPar", ::R3BMfiDigiPar::Class_Version(), "invalid", 213,
                  typeid(::R3BMfiDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BMfiDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiDigiPar) );
      instance.SetNew(&new_R3BMfiDigiPar);
      instance.SetNewArray(&newArray_R3BMfiDigiPar);
      instance.SetDelete(&delete_R3BMfiDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BMfiDigiPar);
      instance.SetDestructor(&destruct_R3BMfiDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BMfiDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiDigitizer(void *p = 0);
   static void *newArray_R3BMfiDigitizer(Long_t size, void *p);
   static void delete_R3BMfiDigitizer(void *p);
   static void deleteArray_R3BMfiDigitizer(void *p);
   static void destruct_R3BMfiDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiDigitizer*)
   {
      ::R3BMfiDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiDigitizer", ::R3BMfiDigitizer::Class_Version(), "invalid", 259,
                  typeid(::R3BMfiDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BMfiDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiDigitizer) );
      instance.SetNew(&new_R3BMfiDigitizer);
      instance.SetNewArray(&newArray_R3BMfiDigitizer);
      instance.SetDelete(&delete_R3BMfiDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BMfiDigitizer);
      instance.SetDestructor(&destruct_R3BMfiDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BMfiDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BKeepEventProbabilityMfi_Dictionary();
   static void R3BKeepEventProbabilityMfi_TClassManip(TClass*);
   static void *new_R3BKeepEventProbabilityMfi(void *p = 0);
   static void *newArray_R3BKeepEventProbabilityMfi(Long_t size, void *p);
   static void delete_R3BKeepEventProbabilityMfi(void *p);
   static void deleteArray_R3BKeepEventProbabilityMfi(void *p);
   static void destruct_R3BKeepEventProbabilityMfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BKeepEventProbabilityMfi*)
   {
      ::R3BKeepEventProbabilityMfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BKeepEventProbabilityMfi));
      static ::ROOT::TGenericClassInfo 
         instance("R3BKeepEventProbabilityMfi", "R3BKeepEventProbabilityMfi.h", 21,
                  typeid(::R3BKeepEventProbabilityMfi), DefineBehavior(ptr, ptr),
                  &R3BKeepEventProbabilityMfi_Dictionary, isa_proxy, 4,
                  sizeof(::R3BKeepEventProbabilityMfi) );
      instance.SetNew(&new_R3BKeepEventProbabilityMfi);
      instance.SetNewArray(&newArray_R3BKeepEventProbabilityMfi);
      instance.SetDelete(&delete_R3BKeepEventProbabilityMfi);
      instance.SetDeleteArray(&deleteArray_R3BKeepEventProbabilityMfi);
      instance.SetDestructor(&destruct_R3BKeepEventProbabilityMfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BKeepEventProbabilityMfi*)
   {
      return GenerateInitInstanceLocal((::R3BKeepEventProbabilityMfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BKeepEventProbabilityMfi*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BKeepEventProbabilityMfi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BKeepEventProbabilityMfi*)0x0)->GetClass();
      R3BKeepEventProbabilityMfi_TClassManip(theClass);
   return theClass;
   }

   static void R3BKeepEventProbabilityMfi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiRawHit(void *p = 0);
   static void *newArray_R3BMfiRawHit(Long_t size, void *p);
   static void delete_R3BMfiRawHit(void *p);
   static void deleteArray_R3BMfiRawHit(void *p);
   static void destruct_R3BMfiRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiRawHit*)
   {
      ::R3BMfiRawHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiRawHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiRawHit", ::R3BMfiRawHit::Class_Version(), "invalid", 425,
                  typeid(::R3BMfiRawHit), DefineBehavior(ptr, ptr),
                  &::R3BMfiRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiRawHit) );
      instance.SetNew(&new_R3BMfiRawHit);
      instance.SetNewArray(&newArray_R3BMfiRawHit);
      instance.SetDelete(&delete_R3BMfiRawHit);
      instance.SetDeleteArray(&deleteArray_R3BMfiRawHit);
      instance.SetDestructor(&destruct_R3BMfiRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiRawHit*)
   {
      return GenerateInitInstanceLocal((::R3BMfiRawHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiRawHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiUnpack(void *p = 0);
   static void *newArray_R3BMfiUnpack(Long_t size, void *p);
   static void delete_R3BMfiUnpack(void *p);
   static void deleteArray_R3BMfiUnpack(void *p);
   static void destruct_R3BMfiUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiUnpack*)
   {
      ::R3BMfiUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiUnpack", ::R3BMfiUnpack::Class_Version(), "invalid", 505,
                  typeid(::R3BMfiUnpack), DefineBehavior(ptr, ptr),
                  &::R3BMfiUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiUnpack) );
      instance.SetNew(&new_R3BMfiUnpack);
      instance.SetNewArray(&newArray_R3BMfiUnpack);
      instance.SetDelete(&delete_R3BMfiUnpack);
      instance.SetDeleteArray(&deleteArray_R3BMfiUnpack);
      instance.SetDestructor(&destruct_R3BMfiUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BMfiUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoMfi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoMfi::Class_Name()
{
   return "R3BGeoMfi";
}

//______________________________________________________________________________
const char *R3BGeoMfi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMfi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoMfi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMfi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoMfi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMfi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoMfi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMfi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfi::Class_Name()
{
   return "R3BMfi";
}

//______________________________________________________________________________
const char *R3BMfi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiDigiPar::Class_Name()
{
   return "R3BMfiDigiPar";
}

//______________________________________________________________________________
const char *R3BMfiDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiDigitizer::Class_Name()
{
   return "R3BMfiDigitizer";
}

//______________________________________________________________________________
const char *R3BMfiDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiRawHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiRawHit::Class_Name()
{
   return "R3BMfiRawHit";
}

//______________________________________________________________________________
const char *R3BMfiRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiRawHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiRawHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiRawHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiRawHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiUnpack::Class_Name()
{
   return "R3BMfiUnpack";
}

//______________________________________________________________________________
const char *R3BMfiUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoMfi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoMfi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoMfi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoMfi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoMfi(void *p) {
      return  p ? new(p) ::R3BGeoMfi : new ::R3BGeoMfi;
   }
   static void *newArray_R3BGeoMfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoMfi[nElements] : new ::R3BGeoMfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoMfi(void *p) {
      delete ((::R3BGeoMfi*)p);
   }
   static void deleteArray_R3BGeoMfi(void *p) {
      delete [] ((::R3BGeoMfi*)p);
   }
   static void destruct_R3BGeoMfi(void *p) {
      typedef ::R3BGeoMfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoMfi

//______________________________________________________________________________
void R3BMfi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfi(void *p) {
      return  p ? new(p) ::R3BMfi : new ::R3BMfi;
   }
   static void *newArray_R3BMfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfi[nElements] : new ::R3BMfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfi(void *p) {
      delete ((::R3BMfi*)p);
   }
   static void deleteArray_R3BMfi(void *p) {
      delete [] ((::R3BMfi*)p);
   }
   static void destruct_R3BMfi(void *p) {
      typedef ::R3BMfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfi

//______________________________________________________________________________
void R3BMfiDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiDigiPar(void *p) {
      return  p ? new(p) ::R3BMfiDigiPar : new ::R3BMfiDigiPar;
   }
   static void *newArray_R3BMfiDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiDigiPar[nElements] : new ::R3BMfiDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiDigiPar(void *p) {
      delete ((::R3BMfiDigiPar*)p);
   }
   static void deleteArray_R3BMfiDigiPar(void *p) {
      delete [] ((::R3BMfiDigiPar*)p);
   }
   static void destruct_R3BMfiDigiPar(void *p) {
      typedef ::R3BMfiDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiDigiPar

//______________________________________________________________________________
void R3BMfiDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiDigitizer(void *p) {
      return  p ? new(p) ::R3BMfiDigitizer : new ::R3BMfiDigitizer;
   }
   static void *newArray_R3BMfiDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiDigitizer[nElements] : new ::R3BMfiDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiDigitizer(void *p) {
      delete ((::R3BMfiDigitizer*)p);
   }
   static void deleteArray_R3BMfiDigitizer(void *p) {
      delete [] ((::R3BMfiDigitizer*)p);
   }
   static void destruct_R3BMfiDigitizer(void *p) {
      typedef ::R3BMfiDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiDigitizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BKeepEventProbabilityMfi(void *p) {
      return  p ? new(p) ::R3BKeepEventProbabilityMfi : new ::R3BKeepEventProbabilityMfi;
   }
   static void *newArray_R3BKeepEventProbabilityMfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BKeepEventProbabilityMfi[nElements] : new ::R3BKeepEventProbabilityMfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BKeepEventProbabilityMfi(void *p) {
      delete ((::R3BKeepEventProbabilityMfi*)p);
   }
   static void deleteArray_R3BKeepEventProbabilityMfi(void *p) {
      delete [] ((::R3BKeepEventProbabilityMfi*)p);
   }
   static void destruct_R3BKeepEventProbabilityMfi(void *p) {
      typedef ::R3BKeepEventProbabilityMfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BKeepEventProbabilityMfi

//______________________________________________________________________________
void R3BMfiRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiRawHit(void *p) {
      return  p ? new(p) ::R3BMfiRawHit : new ::R3BMfiRawHit;
   }
   static void *newArray_R3BMfiRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiRawHit[nElements] : new ::R3BMfiRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiRawHit(void *p) {
      delete ((::R3BMfiRawHit*)p);
   }
   static void deleteArray_R3BMfiRawHit(void *p) {
      delete [] ((::R3BMfiRawHit*)p);
   }
   static void destruct_R3BMfiRawHit(void *p) {
      typedef ::R3BMfiRawHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiRawHit

//______________________________________________________________________________
void R3BMfiUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiUnpack(void *p) {
      return  p ? new(p) ::R3BMfiUnpack : new ::R3BMfiUnpack;
   }
   static void *newArray_R3BMfiUnpack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiUnpack[nElements] : new ::R3BMfiUnpack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiUnpack(void *p) {
      delete ((::R3BMfiUnpack*)p);
   }
   static void deleteArray_R3BMfiUnpack(void *p) {
      delete [] ((::R3BMfiUnpack*)p);
   }
   static void destruct_R3BMfiUnpack(void *p) {
      typedef ::R3BMfiUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiUnpack

namespace {
  void TriggerDictionaryInitialization_G__R3BMfiDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/gfi",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/mfi",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/mfi/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/mfi/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoMfi;
class R3BMfi;
class R3BMfiDigiPar;
class R3BMfiDigitizer;
class __attribute__((annotate("$clingAutoload$R3BKeepEventProbabilityMfi.h")))  R3BKeepEventProbabilityMfi;
class R3BMfiRawHit;
class R3BMfiUnpack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BMfi header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BMfi.h
 **/


#ifndef R3BMFI_H
#define R3BMFI_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BMfiPoint;
class FairVolume;



class R3BMfi : public R3BDetector
{

 public:

  /** Default constructor **/
  R3BMfi();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  R3BMfi(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~R3BMfi();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a R3BMfiPoint and adds it to the
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


  /** Virtual method Construct geometry
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
    Double32_t     fTime_in;              //!  time when entering active volume
    Double32_t     fTime_out;              //!  time when exiting active volume
    Double32_t     fTime;              //!  time
    Double32_t     fLength_in;            //!  length when entering active volume
    Double32_t     fLength_out;            //!  length when exiting active volume
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Int_t          fPosIndex;          //!
    TClonesArray*  fMfiCollection;     //!  The hit collection
    Bool_t         kGeoSaved;          //!
    TList *flGeoPar;                   //!

    /** Private method AddHit
     **
     ** Adds a MfiPoint to the HitCollection
     **/
    R3BMfiPoint* AddHit(Int_t trackID, Int_t detID, Int_t plane, TVector3 posIn,
			TVector3 pos_out, TVector3 momIn, 
			TVector3 momOut, Double_t time, 
			Double_t length, Double_t eLoss);


    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();


    ClassDef(R3BMfi,1);

};


inline void R3BMfi::ResetParameters() {
  fTrackID = fVolumeID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = 0;
  fPosIndex = 0;
};


#endif 
#ifndef R3BGEOMFI_H
#define R3BGEOMFI_H

#include "FairGeoSet.h"

class  R3BGeoMfi : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoMfi();
  ~R3BGeoMfi() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoMfi,0) // Class for STS
};

inline Int_t R3BGeoMfi::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOGFI_H */
#ifndef R3BMFIDIGIPAR_H
#define R3BMFIDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BMfiDigiPar : public FairParGenericSet
{
    public :
	R3BMfiDigiPar (const char* name="R3BMfiDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BMfiDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BMfiDigiPar,1); //
};

#endif /* !R3BGFIDIGIPAR_H*/

#ifndef R3BMFIDIGITIZER_H
#define R3BMFIDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BMfiDigiPar.h"
#include "R3BMfiDigi.h"

#include "TRandom.h"

#include "R3BKeepEventProbabilityMfi.h"


class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BMfiDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BMfiDigitizer();

  /** Special constructor with random number generator **/  
  R3BMfiDigitizer(TRandom* rndm, std::string file);
//   TRandom* fRndm; //todo: make this guy private!!!


  /** Destructor **/
  ~R3BMfiDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BMfiDigi* AddHit(Int_t mf1mul,Double_t mf1x, Int_t fiber);
  
  void SetFilenameMfiProb(std::string _file);
  std::string GetFilenameMfiProb();
  
  void SetRandomizer(TRandom* _rndm);
  TRandom* GetRandomizer();

  void SetDoMfiProb(Bool_t _do);
  Bool_t GetDoMfiProb();

  void SetDataPointerMfiProb(R3BKeepEventProbabilityMfi* _fiberProb);
  R3BKeepEventProbabilityMfi* GetDataPointerMfiProb();
  
//   void InitMfiProb();


 
 
  protected:
  TClonesArray* fMfiPoints;
  TClonesArray* fMfiMCTrack; 
  TClonesArray* fMfiDigi;
  
  std::string fFilenameMfiProb;
  TRandom* fRndm; 
  Bool_t fDoMfiProb;
  R3BKeepEventProbabilityMfi* fFiberProb;

  // Parameter class
  R3BMfiDigiPar* fMfiDigiPar;

  //- Control Hitograms

  
  Int_t eventNoMfi;
  
  
  private:
  virtual void SetParContainers();
  

 
  ClassDef(R3BMfiDigitizer,1);
  
};

#endif
/**
R3BKeepEventProbabilityMfi.h

This class reads the survival probability for an event/hit in a fiber of MFI from a file and save it to a global array.

Testing phase! Please report bugs to P.Schrock@gsi.de
*/



#ifndef R3BKEEPEVENTPROBABILITYMFI_H
#define R3BKEEPEVENTPROBABILITYMFI_H 1


#include "TMath.h"

#include     <string>



class R3BKeepEventProbabilityMfi
{

public:

/**
Default constructor. No input file. All fibers will get an efficiency of 100%.
*/
R3BKeepEventProbabilityMfi();

/**
Special constructor getting a filename as string and starts immediately the ReadProbabilityFromFile function.
*/
R3BKeepEventProbabilityMfi(std::string _filename);

/**
Defauld destructor.
*/
~R3BKeepEventProbabilityMfi();


/**
Saves survival probability for a hit in a fiber to a global array.
*/
void SetProbability(Int_t fiber, Double_t prob);

/**
Return the survival probability for a hit in a fiber.
*/
Double_t GetProbability(Int_t fiber);

/**
Reads the survival probability for a hit in a fiber from an external text file.

Note: the file is the same used as input for ggland, hence the format is fix!
One line looks like 'tree-keep-event-prob=1:0.000000,' with '1' the fiber number (starts counting from 1) and '0.000000' the event/hit survival probability, followed by a ','. Everything before the '=' will be deleted by this function. Comment lines are allowed, starting with '//'.

todo: add global efficiency as entry '0', if necessary.
*/
void ReadProbabilityFromFile(std::string filename);



protected:
// private:

/**
Survival probability for a hit in a fiber. Fibers start counting from '1'!
*/
Double_t fKeepEventProb[1025];


};




#endif
// ---------------------------------------------------------------------------------------
// -----                               R3BMfiRawHit                                  -----
// -----                      Created 30-07-2014 by D.Kresan                         -----
// ---------------------------------------------------------------------------------------

#ifndef R3BMFIRAWHIT_H
#define R3BMFIRAWHIT_H

#include "TObject.h"

class R3BMfiRawHit : public TObject
{
  public:
    // Default Constructor
    R3BMfiRawHit();

    // Standard Constructor
    R3BMfiRawHit(UInt_t nxtId, UInt_t gemexId, UInt_t trigger, ULong_t triggerTs, UInt_t adc, UInt_t channelId, UInt_t nxtTs, UInt_t epoch, UInt_t index);

    // Destructor
    virtual ~R3BMfiRawHit()
    {
    }

    inline const UInt_t& GetNxyterId() const
    {
        return fNxtId;
    }
    inline const UInt_t& GetGemexId() const
    {
        return fGemexId;
    }
    inline const UInt_t& GetTrigger() const
    {
        return fTrigger;
    }
    inline const ULong_t& GetTriggerTime() const
    {
        return fTriggerTs;
    }
    inline const UInt_t& GetAdc() const
    {
        return fAdc;
    }
    inline const UInt_t& GetChannelId() const
    {
        return fChannelId;
    }
    inline const UInt_t& GetNxyterTime() const
    {
        return fNxtTs;
    }
    inline const UInt_t& GetEpochTime() const
    {
        return fEpoch;
    }
    inline const UInt_t& GetIndex() const
    {
        return fIndex;
    }

  protected:
    UInt_t fNxtId;
    UInt_t fGemexId;
    UInt_t fTrigger;
    ULong_t fTriggerTs;
    UInt_t fAdc;
    UInt_t fChannelId;
    UInt_t fNxtTs;
    UInt_t fEpoch;
    UInt_t fIndex;

  public:
    ClassDef(R3BMfiRawHit, 1)
};

#endif
// ---------------------------------------------------------------------------------------
// -----                               R3BMfiUnpack                                  -----
// -----                      Created 30-07-2014 by D.Kresan                         -----
// ---------------------------------------------------------------------------------------

#ifndef R3BMFIUNPACK_H
#define R3BMFIUNPACK_H

#include "FairUnpack.h"

class TClonesArray;

class R3BMfiUnpack : public FairUnpack
{
  public:
    // Constructor
    R3BMfiUnpack(Short_t type = 97, Short_t subType = 9700, Short_t procId = 1, Short_t subCrate = 0, Short_t control = 9);

    // Destructor
    virtual ~R3BMfiUnpack();

    // Fair specific
    virtual Bool_t Init();
    virtual Bool_t DoUnpack(Int_t* data, Int_t size);
    virtual void Reset();

  protected:
    virtual void Register();

  private:
    TClonesArray* fRawData;
    Int_t fNHits;

  public:
    // Class definition
    ClassDef(R3BMfiUnpack, 0)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoMfi", payloadCode, "@",
"R3BKeepEventProbabilityMfi", payloadCode, "@",
"R3BMfi", payloadCode, "@",
"R3BMfiDigiPar", payloadCode, "@",
"R3BMfiDigitizer", payloadCode, "@",
"R3BMfiRawHit", payloadCode, "@",
"R3BMfiUnpack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BMfiDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BMfiDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BMfiDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BMfiDict() {
  TriggerDictionaryInitialization_G__R3BMfiDict_Impl();
}
