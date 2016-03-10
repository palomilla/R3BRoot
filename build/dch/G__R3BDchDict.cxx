// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIdchdIG__R3BDchDict

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
#include "R3BDch.h"
#include "R3BGeoDch.h"
#include "R3BGeoDchPar.h"
#include "R3BDchContFact.h"
#include "R3BDchDigiPar.h"
#include "R3BDchDigitizer.h"
#include "R3BDch2pDigiPar.h"
#include "R3BDch2pDigitizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoDch(void *p = 0);
   static void *newArray_R3BGeoDch(Long_t size, void *p);
   static void delete_R3BGeoDch(void *p);
   static void deleteArray_R3BGeoDch(void *p);
   static void destruct_R3BGeoDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoDch*)
   {
      ::R3BGeoDch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoDch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoDch", ::R3BGeoDch::Class_Version(), "invalid", 214,
                  typeid(::R3BGeoDch), DefineBehavior(ptr, ptr),
                  &::R3BGeoDch::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoDch) );
      instance.SetNew(&new_R3BGeoDch);
      instance.SetNewArray(&newArray_R3BGeoDch);
      instance.SetDelete(&delete_R3BGeoDch);
      instance.SetDeleteArray(&deleteArray_R3BGeoDch);
      instance.SetDestructor(&destruct_R3BGeoDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoDch*)
   {
      return GenerateInitInstanceLocal((::R3BGeoDch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoDch*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoDchPar(void *p = 0);
   static void *newArray_R3BGeoDchPar(Long_t size, void *p);
   static void delete_R3BGeoDchPar(void *p);
   static void deleteArray_R3BGeoDchPar(void *p);
   static void destruct_R3BGeoDchPar(void *p);
   static void streamer_R3BGeoDchPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoDchPar*)
   {
      ::R3BGeoDchPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoDchPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoDchPar", ::R3BGeoDchPar::Class_Version(), "invalid", 241,
                  typeid(::R3BGeoDchPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoDchPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoDchPar) );
      instance.SetNew(&new_R3BGeoDchPar);
      instance.SetNewArray(&newArray_R3BGeoDchPar);
      instance.SetDelete(&delete_R3BGeoDchPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoDchPar);
      instance.SetDestructor(&destruct_R3BGeoDchPar);
      instance.SetStreamerFunc(&streamer_R3BGeoDchPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoDchPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoDchPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoDchPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDch(void *p = 0);
   static void *newArray_R3BDch(Long_t size, void *p);
   static void delete_R3BDch(void *p);
   static void deleteArray_R3BDch(void *p);
   static void destruct_R3BDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDch*)
   {
      ::R3BDch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDch", ::R3BDch::Class_Version(), "invalid", 28,
                  typeid(::R3BDch), DefineBehavior(ptr, ptr),
                  &::R3BDch::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDch) );
      instance.SetNew(&new_R3BDch);
      instance.SetNewArray(&newArray_R3BDch);
      instance.SetDelete(&delete_R3BDch);
      instance.SetDeleteArray(&deleteArray_R3BDch);
      instance.SetDestructor(&destruct_R3BDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDch*)
   {
      return GenerateInitInstanceLocal((::R3BDch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDch*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchDigitizer(void *p = 0);
   static void *newArray_R3BDchDigitizer(Long_t size, void *p);
   static void delete_R3BDchDigitizer(void *p);
   static void deleteArray_R3BDchDigitizer(void *p);
   static void destruct_R3BDchDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchDigitizer*)
   {
      ::R3BDchDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchDigitizer", ::R3BDchDigitizer::Class_Version(), "invalid", 331,
                  typeid(::R3BDchDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BDchDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchDigitizer) );
      instance.SetNew(&new_R3BDchDigitizer);
      instance.SetNewArray(&newArray_R3BDchDigitizer);
      instance.SetDelete(&delete_R3BDchDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BDchDigitizer);
      instance.SetDestructor(&destruct_R3BDchDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BDchDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchDigiPar(void *p = 0);
   static void *newArray_R3BDchDigiPar(Long_t size, void *p);
   static void delete_R3BDchDigiPar(void *p);
   static void deleteArray_R3BDchDigiPar(void *p);
   static void destruct_R3BDchDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchDigiPar*)
   {
      ::R3BDchDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchDigiPar", ::R3BDchDigiPar::Class_Version(), "invalid", 290,
                  typeid(::R3BDchDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BDchDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchDigiPar) );
      instance.SetNew(&new_R3BDchDigiPar);
      instance.SetNewArray(&newArray_R3BDchDigiPar);
      instance.SetDelete(&delete_R3BDchDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BDchDigiPar);
      instance.SetDestructor(&destruct_R3BDchDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BDchDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchContFact(void *p = 0);
   static void *newArray_R3BDchContFact(Long_t size, void *p);
   static void delete_R3BDchContFact(void *p);
   static void deleteArray_R3BDchContFact(void *p);
   static void destruct_R3BDchContFact(void *p);
   static void streamer_R3BDchContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchContFact*)
   {
      ::R3BDchContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchContFact", ::R3BDchContFact::Class_Version(), "invalid", 268,
                  typeid(::R3BDchContFact), DefineBehavior(ptr, ptr),
                  &::R3BDchContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BDchContFact) );
      instance.SetNew(&new_R3BDchContFact);
      instance.SetNewArray(&newArray_R3BDchContFact);
      instance.SetDelete(&delete_R3BDchContFact);
      instance.SetDeleteArray(&deleteArray_R3BDchContFact);
      instance.SetDestructor(&destruct_R3BDchContFact);
      instance.SetStreamerFunc(&streamer_R3BDchContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchContFact*)
   {
      return GenerateInitInstanceLocal((::R3BDchContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDch2pDigitizer(void *p = 0);
   static void *newArray_R3BDch2pDigitizer(Long_t size, void *p);
   static void delete_R3BDch2pDigitizer(void *p);
   static void deleteArray_R3BDch2pDigitizer(void *p);
   static void destruct_R3BDch2pDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDch2pDigitizer*)
   {
      ::R3BDch2pDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDch2pDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDch2pDigitizer", ::R3BDch2pDigitizer::Class_Version(), "invalid", 458,
                  typeid(::R3BDch2pDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BDch2pDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDch2pDigitizer) );
      instance.SetNew(&new_R3BDch2pDigitizer);
      instance.SetNewArray(&newArray_R3BDch2pDigitizer);
      instance.SetDelete(&delete_R3BDch2pDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BDch2pDigitizer);
      instance.SetDestructor(&destruct_R3BDch2pDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDch2pDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BDch2pDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDch2pDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDch2pDigiPar(void *p = 0);
   static void *newArray_R3BDch2pDigiPar(Long_t size, void *p);
   static void delete_R3BDch2pDigiPar(void *p);
   static void deleteArray_R3BDch2pDigiPar(void *p);
   static void destruct_R3BDch2pDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDch2pDigiPar*)
   {
      ::R3BDch2pDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDch2pDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDch2pDigiPar", ::R3BDch2pDigiPar::Class_Version(), "invalid", 417,
                  typeid(::R3BDch2pDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BDch2pDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDch2pDigiPar) );
      instance.SetNew(&new_R3BDch2pDigiPar);
      instance.SetNewArray(&newArray_R3BDch2pDigiPar);
      instance.SetDelete(&delete_R3BDch2pDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BDch2pDigiPar);
      instance.SetDestructor(&destruct_R3BDch2pDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDch2pDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BDch2pDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDch2pDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoDch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoDch::Class_Name()
{
   return "R3BGeoDch";
}

//______________________________________________________________________________
const char *R3BGeoDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoDchPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoDchPar::Class_Name()
{
   return "R3BGeoDchPar";
}

//______________________________________________________________________________
const char *R3BGeoDchPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDchPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoDchPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDchPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoDchPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDchPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoDchPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoDchPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDch::Class_Name()
{
   return "R3BDch";
}

//______________________________________________________________________________
const char *R3BDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchDigitizer::Class_Name()
{
   return "R3BDchDigitizer";
}

//______________________________________________________________________________
const char *R3BDchDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchDigiPar::Class_Name()
{
   return "R3BDchDigiPar";
}

//______________________________________________________________________________
const char *R3BDchDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchContFact::Class_Name()
{
   return "R3BDchContFact";
}

//______________________________________________________________________________
const char *R3BDchContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDch2pDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDch2pDigitizer::Class_Name()
{
   return "R3BDch2pDigitizer";
}

//______________________________________________________________________________
const char *R3BDch2pDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDch2pDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDch2pDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDch2pDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDch2pDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDch2pDigiPar::Class_Name()
{
   return "R3BDch2pDigiPar";
}

//______________________________________________________________________________
const char *R3BDch2pDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDch2pDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDch2pDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDch2pDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoDch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoDch(void *p) {
      return  p ? new(p) ::R3BGeoDch : new ::R3BGeoDch;
   }
   static void *newArray_R3BGeoDch(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoDch[nElements] : new ::R3BGeoDch[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoDch(void *p) {
      delete ((::R3BGeoDch*)p);
   }
   static void deleteArray_R3BGeoDch(void *p) {
      delete [] ((::R3BGeoDch*)p);
   }
   static void destruct_R3BGeoDch(void *p) {
      typedef ::R3BGeoDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoDch

//______________________________________________________________________________
void R3BGeoDchPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoDchPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoDchPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoDchPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoDchPar(void *p) {
      return  p ? new(p) ::R3BGeoDchPar : new ::R3BGeoDchPar;
   }
   static void *newArray_R3BGeoDchPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoDchPar[nElements] : new ::R3BGeoDchPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoDchPar(void *p) {
      delete ((::R3BGeoDchPar*)p);
   }
   static void deleteArray_R3BGeoDchPar(void *p) {
      delete [] ((::R3BGeoDchPar*)p);
   }
   static void destruct_R3BGeoDchPar(void *p) {
      typedef ::R3BGeoDchPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoDchPar(TBuffer &buf, void *obj) {
      ((::R3BGeoDchPar*)obj)->::R3BGeoDchPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoDchPar

//______________________________________________________________________________
void R3BDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDch(void *p) {
      return  p ? new(p) ::R3BDch : new ::R3BDch;
   }
   static void *newArray_R3BDch(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDch[nElements] : new ::R3BDch[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDch(void *p) {
      delete ((::R3BDch*)p);
   }
   static void deleteArray_R3BDch(void *p) {
      delete [] ((::R3BDch*)p);
   }
   static void destruct_R3BDch(void *p) {
      typedef ::R3BDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDch

//______________________________________________________________________________
void R3BDchDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchDigitizer(void *p) {
      return  p ? new(p) ::R3BDchDigitizer : new ::R3BDchDigitizer;
   }
   static void *newArray_R3BDchDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchDigitizer[nElements] : new ::R3BDchDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchDigitizer(void *p) {
      delete ((::R3BDchDigitizer*)p);
   }
   static void deleteArray_R3BDchDigitizer(void *p) {
      delete [] ((::R3BDchDigitizer*)p);
   }
   static void destruct_R3BDchDigitizer(void *p) {
      typedef ::R3BDchDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchDigitizer

//______________________________________________________________________________
void R3BDchDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchDigiPar(void *p) {
      return  p ? new(p) ::R3BDchDigiPar : new ::R3BDchDigiPar;
   }
   static void *newArray_R3BDchDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchDigiPar[nElements] : new ::R3BDchDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchDigiPar(void *p) {
      delete ((::R3BDchDigiPar*)p);
   }
   static void deleteArray_R3BDchDigiPar(void *p) {
      delete [] ((::R3BDchDigiPar*)p);
   }
   static void destruct_R3BDchDigiPar(void *p) {
      typedef ::R3BDchDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchDigiPar

//______________________________________________________________________________
void R3BDchContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchContFact(void *p) {
      return  p ? new(p) ::R3BDchContFact : new ::R3BDchContFact;
   }
   static void *newArray_R3BDchContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchContFact[nElements] : new ::R3BDchContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchContFact(void *p) {
      delete ((::R3BDchContFact*)p);
   }
   static void deleteArray_R3BDchContFact(void *p) {
      delete [] ((::R3BDchContFact*)p);
   }
   static void destruct_R3BDchContFact(void *p) {
      typedef ::R3BDchContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BDchContFact(TBuffer &buf, void *obj) {
      ((::R3BDchContFact*)obj)->::R3BDchContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BDchContFact

//______________________________________________________________________________
void R3BDch2pDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDch2pDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDch2pDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDch2pDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDch2pDigitizer(void *p) {
      return  p ? new(p) ::R3BDch2pDigitizer : new ::R3BDch2pDigitizer;
   }
   static void *newArray_R3BDch2pDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDch2pDigitizer[nElements] : new ::R3BDch2pDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDch2pDigitizer(void *p) {
      delete ((::R3BDch2pDigitizer*)p);
   }
   static void deleteArray_R3BDch2pDigitizer(void *p) {
      delete [] ((::R3BDch2pDigitizer*)p);
   }
   static void destruct_R3BDch2pDigitizer(void *p) {
      typedef ::R3BDch2pDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDch2pDigitizer

//______________________________________________________________________________
void R3BDch2pDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDch2pDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDch2pDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDch2pDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDch2pDigiPar(void *p) {
      return  p ? new(p) ::R3BDch2pDigiPar : new ::R3BDch2pDigiPar;
   }
   static void *newArray_R3BDch2pDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDch2pDigiPar[nElements] : new ::R3BDch2pDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDch2pDigiPar(void *p) {
      delete ((::R3BDch2pDigiPar*)p);
   }
   static void deleteArray_R3BDch2pDigiPar(void *p) {
      delete [] ((::R3BDch2pDigiPar*)p);
   }
   static void destruct_R3BDch2pDigiPar(void *p) {
      typedef ::R3BDch2pDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDch2pDigiPar

namespace {
  void TriggerDictionaryInitialization_G__R3BDchDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/dch",
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
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/dch/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoDch;
class R3BGeoDchPar;
class R3BDch;
class R3BDchDigitizer;
class R3BDchDigiPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all DCH parameter containers)ATTRDUMP"))) R3BDchContFact;
class R3BDch2pDigitizer;
class R3BDch2pDigiPar;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BDch header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BDch.h
 **/

#ifndef R3BDCH_H
#define R3BDCH_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

#include <string>

class TClonesArray;
class R3BDchFullPoint;
class R3BDchPoint;
class FairVolume;

class R3BDch : public R3BDetector
{

  public:
    /** Default constructor **/
    R3BDch();

    /** Standard constructor.
     *@param name    detetcor name
     *@param active  sensitivity flag
     **/
    R3BDch(const char* name, Bool_t active);

    /** Destructor **/
    virtual ~R3BDch();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BDchPoint and adds it to the
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
    void SetHeliumBag(Bool_t bag)
    {
        kHelium = bag;
    }
    void SetDynamicStepSize(Bool_t step)
    {
        fDynamicStepSize = step;
    }

    // renormalization of MC step size
    Double_t BetheBloch(Double_t bg);
    void SetStepToNextCollision();
    void SetVerbosity(Bool_t verb)
    {
        fVerbose = verb;
    }

    void PrintInfo();
    void RecordFullMcHit();
    void RecordPartialMcHit();
    void FindNodePath(TObjArray* arr);

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
    TClonesArray* fDchCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    Bool_t kHelium;                 //!  Helium bag part
    TList* flGeoPar;                //!
    Bool_t fVerbose;                //!
    Bool_t fDynamicStepSize;        //!
    // Sensitive Ref Node
    TGeoMatrix* refMatrix; //! Trans reference Node

    /** Private method AddHit
     **
     ** Adds a DchPoint to the HitCollection
     **/
    R3BDchFullPoint* AddFullHit(Int_t trackId,
                                Int_t mod,
                                Int_t layer,
                                Int_t cell,
                                TVector3 pos,
                                TVector3 lpos,
                                TVector3 mom,
                                TVector3 lmom,
                                Double_t time,
                                Double_t length,
                                Double_t eLoss);

    R3BDchPoint* AddHit(Int_t trackId,
                        Int_t mod,
                        Int_t layer,
                        Int_t cell,
                        TVector3 posIn,
                        TVector3 pos_out,
                        TVector3 momIn,
                        TVector3 momOut,
                        TVector3 lpos1,
                        TVector3 lmom1,
                        TVector3 lpos2,
                        TVector3 lmom2,
                        Double_t time,
                        Double_t length,
                        Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BDch, 1);
};

inline void R3BDch::ResetParameters()
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
#ifndef R3BGEODCH_H
#define R3BGEODCH_H

#include "FairGeoSet.h"

class  R3BGeoDch : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoDch();
  ~R3BGeoDch() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoDch,0) // Class for STS
};

inline Int_t R3BGeoDch::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEODCH_H */
#ifndef R3BGEODCHPAR_H
#define R3BGEODCHPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoDchPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoDchPar(const char* name="R3BGeoDchPar",
             const char* title="Dch Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoDchPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoDchPar,1)
};

#endif /* !R3BGEODCHPAR_H */
#ifndef R3BDCHCONTFACT_H
#define R3BDCHCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BDchContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BDchContFact();
  ~R3BDchContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BDchContFact,0) // Factory for all DCH parameter containers
};

#endif  /* !R3BDCHCONTFACT_H */
#ifndef R3BDCHDIGIPAR_H
#define R3BDCHDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BDchDigiPar : public FairParGenericSet
{
    public :
	R3BDchDigiPar (const char* name="R3BDchDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BDchDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option) const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BDchDigiPar,1); //
};

#endif /* !R3BDCHDIGIPAR_H*/

#ifndef R3BDCHDIGITIZER_H
#define R3BDCHDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BDchDigiPar.h"
#include "R3BDchDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BDchDigitizer : public FairTask
{

 public:

  /** Detector resolution **/  
  int detectorResolution;	//0=all off, 1= all on, ...
  
  /** Default constructor **/  
  R3BDchDigitizer();
    
  /** Detector resolution constructor **/  
  R3BDchDigitizer(int detres);

  /** Destructor **/
  ~R3BDchDigitizer();

  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BDchDigi* AddHit(Int_t pd1mul,Double_t Pdx1_p1,Double_t Pdy1_p1,Int_t pd2mul,Double_t Pdx2_p1,Double_t Pdy2_p1);


  protected:
  TClonesArray* fDchPoints;
  TClonesArray* fDchMCTrack; 
  TClonesArray* fDchDigi;

  // Parameter class
  R3BDchDigiPar* fDchDigiPar;

  //- Control Hitograms
  TH1F * DCH1Px;
  TH1F * DCH2Px;
  
  TH1F * DCH1Py;
  TH1F * DCH2Py;
  
  TH1F * DCH1Pz;
  TH1F * DCH2Pz;
  
  TH1F * DCH1X;
  TH1F * DCH2X;
  
  TH1F * DCH1Y;
  TH1F * DCH2Y;
  
  TH1F * DCH1elosshis;
  TH1F * DCH2elosshis;
  
  TH1F * TrackPx;
  TH1F * TrackPy;
  TH1F * TrackPz;
  
  TH2F * TrackPxVSDCH1Px;
  
  Int_t eventNoDch;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BDchDigitizer,1);
  
};

#endif
#ifndef R3BDCH2PDIGIPAR_H
#define R3BDCH2PDIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BDch2pDigiPar : public FairParGenericSet
{
    public :
	R3BDch2pDigiPar (const char* name="R3BDch2pDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BDch2pDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BDch2pDigiPar,1); //
};

#endif /* !R3BDCH2PDIGIPAR_H*/

#ifndef R3BDCH2PDIGITIZER_H
#define R3BDCH2PDDIGITISER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BDch2pDigiPar.h"
#include "R3BDch2pDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;



class R3BDch2pDigitizer : public FairTask
{

 public:

  /** Detector resolution **/  
  int detectorResolution;	//0=all off, 1= all on, ...
  
  /** Default constructor **/  
  R3BDch2pDigitizer();

  /** Detector resolution constructor **/  
  R3BDch2pDigitizer(int detres);

  /** Destructor **/
  ~R3BDch2pDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();


  R3BDch2pDigi* AddHit(Int_t pd1mul,Double_t Pdx1_p1,Double_t Pdy1_p1,Double_t Pdx1_p2,Double_t Pdy1_p2,
Int_t pd2mul,Double_t Pdx2_p1,Double_t Pdy2_p1,Double_t Pdx2_p2,Double_t Pdy2_p2);


  protected:
  TClonesArray* fDch2pPoints;
  TClonesArray* fDch2pMCTrack; 
  TClonesArray* fDch2pDigi;

  // Parameter class
  R3BDch2pDigiPar* fDch2pDigiPar;

  //- Control Hitograms
  
  Int_t eventNoDch;
  
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BDch2pDigitizer,1);
  
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BDch", payloadCode, "@",
"R3BDch2pDigiPar", payloadCode, "@",
"R3BDch2pDigitizer", payloadCode, "@",
"R3BDchContFact", payloadCode, "@",
"R3BDchDigiPar", payloadCode, "@",
"R3BDchDigitizer", payloadCode, "@",
"R3BGeoDch", payloadCode, "@",
"R3BGeoDchPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BDchDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BDchDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BDchDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BDchDict() {
  TriggerDictionaryInitialization_G__R3BDchDict_Impl();
}
