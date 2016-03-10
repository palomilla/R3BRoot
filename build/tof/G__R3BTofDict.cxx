// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddItofdIG__R3BTofDict

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
#include "R3BTof.h"
#include "R3BGeoTof.h"
#include "R3BGeoTofPar.h"
#include "R3BTofContFact.h"
#include "R3BTofDigiPar.h"
#include "R3BTofDigitizer.h"
#include "R3BTof2pDigiPar.h"
#include "R3BTof2pDigitizer.h"
#include "R3BTofUnpack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoTof(void *p = 0);
   static void *newArray_R3BGeoTof(Long_t size, void *p);
   static void delete_R3BGeoTof(void *p);
   static void deleteArray_R3BGeoTof(void *p);
   static void destruct_R3BGeoTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTof*)
   {
      ::R3BGeoTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTof", ::R3BGeoTof::Class_Version(), "invalid", 163,
                  typeid(::R3BGeoTof), DefineBehavior(ptr, ptr),
                  &::R3BGeoTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoTof) );
      instance.SetNew(&new_R3BGeoTof);
      instance.SetNewArray(&newArray_R3BGeoTof);
      instance.SetDelete(&delete_R3BGeoTof);
      instance.SetDeleteArray(&deleteArray_R3BGeoTof);
      instance.SetDestructor(&destruct_R3BGeoTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTof*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTofPar(void *p = 0);
   static void *newArray_R3BGeoTofPar(Long_t size, void *p);
   static void delete_R3BGeoTofPar(void *p);
   static void deleteArray_R3BGeoTofPar(void *p);
   static void destruct_R3BGeoTofPar(void *p);
   static void streamer_R3BGeoTofPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTofPar*)
   {
      ::R3BGeoTofPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTofPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTofPar", ::R3BGeoTofPar::Class_Version(), "invalid", 190,
                  typeid(::R3BGeoTofPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoTofPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoTofPar) );
      instance.SetNew(&new_R3BGeoTofPar);
      instance.SetNewArray(&newArray_R3BGeoTofPar);
      instance.SetDelete(&delete_R3BGeoTofPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoTofPar);
      instance.SetDestructor(&destruct_R3BGeoTofPar);
      instance.SetStreamerFunc(&streamer_R3BGeoTofPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTofPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTofPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof(void *p = 0);
   static void *newArray_R3BTof(Long_t size, void *p);
   static void delete_R3BTof(void *p);
   static void deleteArray_R3BTof(void *p);
   static void destruct_R3BTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof*)
   {
      ::R3BTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof", ::R3BTof::Class_Version(), "invalid", 25,
                  typeid(::R3BTof), DefineBehavior(ptr, ptr),
                  &::R3BTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof) );
      instance.SetNew(&new_R3BTof);
      instance.SetNewArray(&newArray_R3BTof);
      instance.SetDelete(&delete_R3BTof);
      instance.SetDeleteArray(&deleteArray_R3BTof);
      instance.SetDestructor(&destruct_R3BTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof*)
   {
      return GenerateInitInstanceLocal((::R3BTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTof*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofContFact(void *p = 0);
   static void *newArray_R3BTofContFact(Long_t size, void *p);
   static void delete_R3BTofContFact(void *p);
   static void deleteArray_R3BTofContFact(void *p);
   static void destruct_R3BTofContFact(void *p);
   static void streamer_R3BTofContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofContFact*)
   {
      ::R3BTofContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofContFact", ::R3BTofContFact::Class_Version(), "invalid", 217,
                  typeid(::R3BTofContFact), DefineBehavior(ptr, ptr),
                  &::R3BTofContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BTofContFact) );
      instance.SetNew(&new_R3BTofContFact);
      instance.SetNewArray(&newArray_R3BTofContFact);
      instance.SetDelete(&delete_R3BTofContFact);
      instance.SetDeleteArray(&deleteArray_R3BTofContFact);
      instance.SetDestructor(&destruct_R3BTofContFact);
      instance.SetStreamerFunc(&streamer_R3BTofContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofContFact*)
   {
      return GenerateInitInstanceLocal((::R3BTofContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigiPar(void *p = 0);
   static void *newArray_R3BTofDigiPar(Long_t size, void *p);
   static void delete_R3BTofDigiPar(void *p);
   static void deleteArray_R3BTofDigiPar(void *p);
   static void destruct_R3BTofDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigiPar*)
   {
      ::R3BTofDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigiPar", ::R3BTofDigiPar::Class_Version(), "invalid", 239,
                  typeid(::R3BTofDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BTofDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigiPar) );
      instance.SetNew(&new_R3BTofDigiPar);
      instance.SetNewArray(&newArray_R3BTofDigiPar);
      instance.SetDelete(&delete_R3BTofDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTofDigiPar);
      instance.SetDestructor(&destruct_R3BTofDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigitizer(void *p = 0);
   static void *newArray_R3BTofDigitizer(Long_t size, void *p);
   static void delete_R3BTofDigitizer(void *p);
   static void deleteArray_R3BTofDigitizer(void *p);
   static void destruct_R3BTofDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigitizer*)
   {
      ::R3BTofDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigitizer", ::R3BTofDigitizer::Class_Version(), "invalid", 280,
                  typeid(::R3BTofDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BTofDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigitizer) );
      instance.SetNew(&new_R3BTofDigitizer);
      instance.SetNewArray(&newArray_R3BTofDigitizer);
      instance.SetDelete(&delete_R3BTofDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTofDigitizer);
      instance.SetDestructor(&destruct_R3BTofDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigiPar(void *p = 0);
   static void *newArray_R3BTof2pDigiPar(Long_t size, void *p);
   static void delete_R3BTof2pDigiPar(void *p);
   static void deleteArray_R3BTof2pDigiPar(void *p);
   static void destruct_R3BTof2pDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigiPar*)
   {
      ::R3BTof2pDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigiPar", ::R3BTof2pDigiPar::Class_Version(), "invalid", 348,
                  typeid(::R3BTof2pDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigiPar) );
      instance.SetNew(&new_R3BTof2pDigiPar);
      instance.SetNewArray(&newArray_R3BTof2pDigiPar);
      instance.SetDelete(&delete_R3BTof2pDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigiPar);
      instance.SetDestructor(&destruct_R3BTof2pDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigitizer(void *p = 0);
   static void *newArray_R3BTof2pDigitizer(Long_t size, void *p);
   static void delete_R3BTof2pDigitizer(void *p);
   static void deleteArray_R3BTof2pDigitizer(void *p);
   static void destruct_R3BTof2pDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigitizer*)
   {
      ::R3BTof2pDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigitizer", ::R3BTof2pDigitizer::Class_Version(), "invalid", 389,
                  typeid(::R3BTof2pDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigitizer) );
      instance.SetNew(&new_R3BTof2pDigitizer);
      instance.SetNewArray(&newArray_R3BTof2pDigitizer);
      instance.SetDelete(&delete_R3BTof2pDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigitizer);
      instance.SetDestructor(&destruct_R3BTof2pDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BTofUnpack(void *p);
   static void deleteArray_R3BTofUnpack(void *p);
   static void destruct_R3BTofUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofUnpack*)
   {
      ::R3BTofUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofUnpack", ::R3BTofUnpack::Class_Version(), "invalid", 462,
                  typeid(::R3BTofUnpack), DefineBehavior(ptr, ptr),
                  &::R3BTofUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofUnpack) );
      instance.SetDelete(&delete_R3BTofUnpack);
      instance.SetDeleteArray(&deleteArray_R3BTofUnpack);
      instance.SetDestructor(&destruct_R3BTofUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BTofUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTof::Class_Name()
{
   return "R3BGeoTof";
}

//______________________________________________________________________________
const char *R3BGeoTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTofPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTofPar::Class_Name()
{
   return "R3BGeoTofPar";
}

//______________________________________________________________________________
const char *R3BGeoTofPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTofPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTofPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTofPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof::Class_Name()
{
   return "R3BTof";
}

//______________________________________________________________________________
const char *R3BTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofContFact::Class_Name()
{
   return "R3BTofContFact";
}

//______________________________________________________________________________
const char *R3BTofContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigiPar::Class_Name()
{
   return "R3BTofDigiPar";
}

//______________________________________________________________________________
const char *R3BTofDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigitizer::Class_Name()
{
   return "R3BTofDigitizer";
}

//______________________________________________________________________________
const char *R3BTofDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigiPar::Class_Name()
{
   return "R3BTof2pDigiPar";
}

//______________________________________________________________________________
const char *R3BTof2pDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigitizer::Class_Name()
{
   return "R3BTof2pDigitizer";
}

//______________________________________________________________________________
const char *R3BTof2pDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofUnpack::Class_Name()
{
   return "R3BTofUnpack";
}

//______________________________________________________________________________
const char *R3BTofUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTof(void *p) {
      return  p ? new(p) ::R3BGeoTof : new ::R3BGeoTof;
   }
   static void *newArray_R3BGeoTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTof[nElements] : new ::R3BGeoTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTof(void *p) {
      delete ((::R3BGeoTof*)p);
   }
   static void deleteArray_R3BGeoTof(void *p) {
      delete [] ((::R3BGeoTof*)p);
   }
   static void destruct_R3BGeoTof(void *p) {
      typedef ::R3BGeoTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoTof

//______________________________________________________________________________
void R3BGeoTofPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTofPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoTofPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoTofPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTofPar(void *p) {
      return  p ? new(p) ::R3BGeoTofPar : new ::R3BGeoTofPar;
   }
   static void *newArray_R3BGeoTofPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTofPar[nElements] : new ::R3BGeoTofPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTofPar(void *p) {
      delete ((::R3BGeoTofPar*)p);
   }
   static void deleteArray_R3BGeoTofPar(void *p) {
      delete [] ((::R3BGeoTofPar*)p);
   }
   static void destruct_R3BGeoTofPar(void *p) {
      typedef ::R3BGeoTofPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoTofPar(TBuffer &buf, void *obj) {
      ((::R3BGeoTofPar*)obj)->::R3BGeoTofPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoTofPar

//______________________________________________________________________________
void R3BTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof(void *p) {
      return  p ? new(p) ::R3BTof : new ::R3BTof;
   }
   static void *newArray_R3BTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof[nElements] : new ::R3BTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof(void *p) {
      delete ((::R3BTof*)p);
   }
   static void deleteArray_R3BTof(void *p) {
      delete [] ((::R3BTof*)p);
   }
   static void destruct_R3BTof(void *p) {
      typedef ::R3BTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof

//______________________________________________________________________________
void R3BTofContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofContFact(void *p) {
      return  p ? new(p) ::R3BTofContFact : new ::R3BTofContFact;
   }
   static void *newArray_R3BTofContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofContFact[nElements] : new ::R3BTofContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofContFact(void *p) {
      delete ((::R3BTofContFact*)p);
   }
   static void deleteArray_R3BTofContFact(void *p) {
      delete [] ((::R3BTofContFact*)p);
   }
   static void destruct_R3BTofContFact(void *p) {
      typedef ::R3BTofContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BTofContFact(TBuffer &buf, void *obj) {
      ((::R3BTofContFact*)obj)->::R3BTofContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BTofContFact

//______________________________________________________________________________
void R3BTofDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigiPar(void *p) {
      return  p ? new(p) ::R3BTofDigiPar : new ::R3BTofDigiPar;
   }
   static void *newArray_R3BTofDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigiPar[nElements] : new ::R3BTofDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigiPar(void *p) {
      delete ((::R3BTofDigiPar*)p);
   }
   static void deleteArray_R3BTofDigiPar(void *p) {
      delete [] ((::R3BTofDigiPar*)p);
   }
   static void destruct_R3BTofDigiPar(void *p) {
      typedef ::R3BTofDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigiPar

//______________________________________________________________________________
void R3BTofDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigitizer(void *p) {
      return  p ? new(p) ::R3BTofDigitizer : new ::R3BTofDigitizer;
   }
   static void *newArray_R3BTofDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigitizer[nElements] : new ::R3BTofDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigitizer(void *p) {
      delete ((::R3BTofDigitizer*)p);
   }
   static void deleteArray_R3BTofDigitizer(void *p) {
      delete [] ((::R3BTofDigitizer*)p);
   }
   static void destruct_R3BTofDigitizer(void *p) {
      typedef ::R3BTofDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigitizer

//______________________________________________________________________________
void R3BTof2pDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigiPar(void *p) {
      return  p ? new(p) ::R3BTof2pDigiPar : new ::R3BTof2pDigiPar;
   }
   static void *newArray_R3BTof2pDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigiPar[nElements] : new ::R3BTof2pDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigiPar(void *p) {
      delete ((::R3BTof2pDigiPar*)p);
   }
   static void deleteArray_R3BTof2pDigiPar(void *p) {
      delete [] ((::R3BTof2pDigiPar*)p);
   }
   static void destruct_R3BTof2pDigiPar(void *p) {
      typedef ::R3BTof2pDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigiPar

//______________________________________________________________________________
void R3BTof2pDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigitizer(void *p) {
      return  p ? new(p) ::R3BTof2pDigitizer : new ::R3BTof2pDigitizer;
   }
   static void *newArray_R3BTof2pDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigitizer[nElements] : new ::R3BTof2pDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigitizer(void *p) {
      delete ((::R3BTof2pDigitizer*)p);
   }
   static void deleteArray_R3BTof2pDigitizer(void *p) {
      delete [] ((::R3BTof2pDigitizer*)p);
   }
   static void destruct_R3BTof2pDigitizer(void *p) {
      typedef ::R3BTof2pDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigitizer

//______________________________________________________________________________
void R3BTofUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BTofUnpack(void *p) {
      delete ((::R3BTofUnpack*)p);
   }
   static void deleteArray_R3BTofUnpack(void *p) {
      delete [] ((::R3BTofUnpack*)p);
   }
   static void destruct_R3BTofUnpack(void *p) {
      typedef ::R3BTofUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofUnpack

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 96,
                  typeid(map<int,int>), DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_G__R3BTofDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/tof",
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
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/tof/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoTof;
class R3BGeoTofPar;
class R3BTof;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TOF parameter containers)ATTRDUMP"))) R3BTofContFact;
class R3BTofDigiPar;
class R3BTofDigitizer;
class R3BTof2pDigiPar;
class R3BTof2pDigitizer;
class R3BTofUnpack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BTof header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BTof.h
 **/

#ifndef R3BTOF_H
#define R3BTOF_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BTofPoint;
class FairVolume;

class R3BTof : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BTof();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BTof(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BTof();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BTofPoint and adds it to the
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
    Double32_t fTime;               //!  time average in detector active volume
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length average in detector
    Double32_t fELoss;              //!  energy loss

    Int_t fPosIndex;              //!
    TClonesArray* fTofCollection; //!  The hit collection
    Bool_t kGeoSaved;             //!
    TList* flGeoPar;              //!

    /** Private method AddHit
     **
     ** Adds a TofPoint to the HitCollection
     **/
    R3BTofPoint*
        AddHit(Int_t trackID, Int_t detID, TVector3 posIn, TVector3 pos_out, TVector3 momIn, TVector3 momOut, Double_t time, Double_t length, Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BTof, 1);
};

inline void R3BTof::ResetParameters()
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
#ifndef R3BGEOTOF_H
#define R3BGEOTOF_H

#include "FairGeoSet.h"

class  R3BGeoTof : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoTof();
  ~R3BGeoTof() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoTof,0) // Class for STS
};

inline Int_t R3BGeoTof::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOTOF_H */
#ifndef R3BGEOTOFPAR_H
#define R3BGEOTOFPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoTofPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoTofPar(const char* name="R3BGeoTofPar",
             const char* title="Tof Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoTofPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoTofPar,1)
};

#endif /* !R3BGEOTOFPAR_H */
#ifndef R3BTOFCONTFACT_H
#define R3BTOFCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BTofContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BTofContFact();
  ~R3BTofContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BTofContFact,0) // Factory for all TOF parameter containers
};

#endif  /* !R3BTOFCONTFACT_H */
#ifndef R3BTOFDIGIPAR_H
#define R3BTOFDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTofDigiPar : public FairParGenericSet
{
    public :
	R3BTofDigiPar (const char* name="R3BTofDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BTofDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BTofDigiPar,1); //
};

#endif /* !R3BDTOFDIGIPAR_H*/

#ifndef R3BTOFDIGITIZER_H
#define R3BTOFDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BTofDigiPar.h"
#include "R3BTofDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BTofDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BTofDigitizer();


  /** Destructor **/
  ~R3BTofDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BTofDigi* AddHit(Int_t tfmul,Double_t tfwx_p1,Double_t tfwy_p1,Double_t tfwt_p1,Double_t tfwpath_p1,
  //Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1);
  Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwe_p1);


  protected: 
  TClonesArray* fTofDigi;
  TClonesArray* fTofPoints;
  TClonesArray* fTofMCTrack;

  // Parameter class
  R3BTofDigiPar* fTofDigiPar;

  //- Control Hitograms

  
  TH1F * TOFelosshis;
  
  TH1F * TfwXhis;
  TH1F * TfwYhis;
  TH1F * TfwThis;
  
  Int_t eventNoTof;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BTofDigitizer,1);
  
};

#endif
#ifndef R3BTOF2PDIGIPAR_H
#define R3BTOF2PDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTof2pDigiPar : public FairParGenericSet
{
    public :
	R3BTof2pDigiPar (const char* name="R3BTof2pDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BTof2pDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BTof2pDigiPar,1); //
};

#endif /* !R3BDTOFDIGIPAR_H*/

#ifndef R3BTOF2PDIGITIZER_H
#define R3BTOF2PDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BTof2pDigiPar.h"
#include "R3BTof2pDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BTof2pDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  R3BTof2pDigitizer();


  /** Destructor **/
  ~R3BTof2pDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BTof2pDigi* AddHit(Int_t tfmul,Double_t tfwx_p1,Double_t tfwy_p1,Double_t tfwt_p1,
  Double_t tfwx_p2,Double_t tfwy_p2,Double_t tfwt_p2,Double_t tfwpath_p1,Double_t tfwpath_p2,
  //Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwpx_p2,Double_t tfwpy_p2,Double_t tfwpz_p2);
  Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwpx_p2,Double_t tfwpy_p2,Double_t tfwpz_p2,
  Double_t tfwe_p1,Double_t tfwe_p2);


  protected: 
  TClonesArray* fTof2pDigi;
  TClonesArray* fTofPoints;
  TClonesArray* fTofMCTrack;

  // Parameter class
  R3BTof2pDigiPar* fTof2pDigiPar;

  //- Control Hitograms

  
  TH1F * TOFelosshis;
  
  TH1F * TfwXhis;
  TH1F * TfwYhis;
  TH1F * TfwThis;
  
  Int_t eventNoTof;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BTof2pDigitizer,1);
  
};

#endif

#ifndef _R3BTOF_UNPACK_
#define _R3BTOF_UNPACK_

#include <map>

#include "FairUnpack.h"


class TH1F;


class R3BTofUnpack : public FairUnpack {

public:
    R3BTofUnpack(Short_t type, Short_t subType,
                 Short_t procId, Short_t subCrate, Short_t control);
    virtual ~R3BTofUnpack();
    
    virtual Bool_t Init();
    virtual Bool_t DoUnpack(Int_t *data, Int_t size);
    virtual void Reset();
    
    
private:
    std::map<Int_t, Int_t> fmap_leading_t;
    std::map<Int_t, Int_t> fmap_leading_c;
    std::map<Int_t, Int_t> fmap_trailing_t;
    std::map<Int_t, Int_t> fmap_trailing_c;

    
protected:
    virtual void Register();

    
public:
    ClassDef(R3BTofUnpack, 1)

};



#endif // _R3BTOF_UNPACK_
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoTof", payloadCode, "@",
"R3BGeoTofPar", payloadCode, "@",
"R3BTof", payloadCode, "@",
"R3BTof2pDigiPar", payloadCode, "@",
"R3BTof2pDigitizer", payloadCode, "@",
"R3BTofContFact", payloadCode, "@",
"R3BTofDigiPar", payloadCode, "@",
"R3BTofDigitizer", payloadCode, "@",
"R3BTofUnpack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BTofDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BTofDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BTofDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BTofDict() {
  TriggerDictionaryInitialization_G__R3BTofDict_Impl();
}
