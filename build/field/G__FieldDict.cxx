// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIfielddIG__FieldDict

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
#include "R3BFieldConst.h"
#include "R3BFieldContFact.h"
#include "R3BFieldMap.h"
#include "R3BFieldPar.h"
#include "R3BFieldCreator.h"
#include "R3BGladFieldMap.h"
#include "R3BFieldInterp.h"
#include "R3BAladinFieldMap.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BFieldConst(void *p = 0);
   static void *newArray_R3BFieldConst(Long_t size, void *p);
   static void delete_R3BFieldConst(void *p);
   static void deleteArray_R3BFieldConst(void *p);
   static void destruct_R3BFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFieldConst*)
   {
      ::R3BFieldConst *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFieldConst >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFieldConst", ::R3BFieldConst::Class_Version(), "invalid", 34,
                  typeid(::R3BFieldConst), DefineBehavior(ptr, ptr),
                  &::R3BFieldConst::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFieldConst) );
      instance.SetNew(&new_R3BFieldConst);
      instance.SetNewArray(&newArray_R3BFieldConst);
      instance.SetDelete(&delete_R3BFieldConst);
      instance.SetDeleteArray(&deleteArray_R3BFieldConst);
      instance.SetDestructor(&destruct_R3BFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFieldConst*)
   {
      return GenerateInitInstanceLocal((::R3BFieldConst*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BFieldConst*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFieldContFact(void *p = 0);
   static void *newArray_R3BFieldContFact(Long_t size, void *p);
   static void delete_R3BFieldContFact(void *p);
   static void deleteArray_R3BFieldContFact(void *p);
   static void destruct_R3BFieldContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFieldContFact*)
   {
      ::R3BFieldContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFieldContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFieldContFact", ::R3BFieldContFact::Class_Version(), "invalid", 152,
                  typeid(::R3BFieldContFact), DefineBehavior(ptr, ptr),
                  &::R3BFieldContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFieldContFact) );
      instance.SetNew(&new_R3BFieldContFact);
      instance.SetNewArray(&newArray_R3BFieldContFact);
      instance.SetDelete(&delete_R3BFieldContFact);
      instance.SetDeleteArray(&deleteArray_R3BFieldContFact);
      instance.SetDestructor(&destruct_R3BFieldContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFieldContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFieldContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BFieldContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFieldMap(void *p = 0);
   static void *newArray_R3BFieldMap(Long_t size, void *p);
   static void delete_R3BFieldMap(void *p);
   static void deleteArray_R3BFieldMap(void *p);
   static void destruct_R3BFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFieldMap*)
   {
      ::R3BFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFieldMap", ::R3BFieldMap::Class_Version(), "invalid", 212,
                  typeid(::R3BFieldMap), DefineBehavior(ptr, ptr),
                  &::R3BFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFieldMap) );
      instance.SetNew(&new_R3BFieldMap);
      instance.SetNewArray(&newArray_R3BFieldMap);
      instance.SetDelete(&delete_R3BFieldMap);
      instance.SetDeleteArray(&deleteArray_R3BFieldMap);
      instance.SetDestructor(&destruct_R3BFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFieldMap*)
   {
      return GenerateInitInstanceLocal((::R3BFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BFieldMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGladFieldMap(void *p = 0);
   static void *newArray_R3BGladFieldMap(Long_t size, void *p);
   static void delete_R3BGladFieldMap(void *p);
   static void deleteArray_R3BGladFieldMap(void *p);
   static void destruct_R3BGladFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGladFieldMap*)
   {
      ::R3BGladFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGladFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGladFieldMap", ::R3BGladFieldMap::Class_Version(), "invalid", 451,
                  typeid(::R3BGladFieldMap), DefineBehavior(ptr, ptr),
                  &::R3BGladFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGladFieldMap) );
      instance.SetNew(&new_R3BGladFieldMap);
      instance.SetNewArray(&newArray_R3BGladFieldMap);
      instance.SetDelete(&delete_R3BGladFieldMap);
      instance.SetDeleteArray(&deleteArray_R3BGladFieldMap);
      instance.SetDestructor(&destruct_R3BGladFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGladFieldMap*)
   {
      return GenerateInitInstanceLocal((::R3BGladFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGladFieldMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAladinFieldMap(void *p = 0);
   static void *newArray_R3BAladinFieldMap(Long_t size, void *p);
   static void delete_R3BAladinFieldMap(void *p);
   static void deleteArray_R3BAladinFieldMap(void *p);
   static void destruct_R3BAladinFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAladinFieldMap*)
   {
      ::R3BAladinFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAladinFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAladinFieldMap", ::R3BAladinFieldMap::Class_Version(), "invalid", 746,
                  typeid(::R3BAladinFieldMap), DefineBehavior(ptr, ptr),
                  &::R3BAladinFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAladinFieldMap) );
      instance.SetNew(&new_R3BAladinFieldMap);
      instance.SetNewArray(&newArray_R3BAladinFieldMap);
      instance.SetDelete(&delete_R3BAladinFieldMap);
      instance.SetDeleteArray(&deleteArray_R3BAladinFieldMap);
      instance.SetDestructor(&destruct_R3BAladinFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAladinFieldMap*)
   {
      return GenerateInitInstanceLocal((::R3BAladinFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BAladinFieldMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFieldPar(void *p = 0);
   static void *newArray_R3BFieldPar(Long_t size, void *p);
   static void delete_R3BFieldPar(void *p);
   static void deleteArray_R3BFieldPar(void *p);
   static void destruct_R3BFieldPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFieldPar*)
   {
      ::R3BFieldPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFieldPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFieldPar", ::R3BFieldPar::Class_Version(), "invalid", 326,
                  typeid(::R3BFieldPar), DefineBehavior(ptr, ptr),
                  &::R3BFieldPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFieldPar) );
      instance.SetNew(&new_R3BFieldPar);
      instance.SetNewArray(&newArray_R3BFieldPar);
      instance.SetDelete(&delete_R3BFieldPar);
      instance.SetDeleteArray(&deleteArray_R3BFieldPar);
      instance.SetDestructor(&destruct_R3BFieldPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFieldPar*)
   {
      return GenerateInitInstanceLocal((::R3BFieldPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BFieldPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFieldCreator(void *p = 0);
   static void *newArray_R3BFieldCreator(Long_t size, void *p);
   static void delete_R3BFieldCreator(void *p);
   static void deleteArray_R3BFieldCreator(void *p);
   static void destruct_R3BFieldCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFieldCreator*)
   {
      ::R3BFieldCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFieldCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFieldCreator", ::R3BFieldCreator::Class_Version(), "invalid", 427,
                  typeid(::R3BFieldCreator), DefineBehavior(ptr, ptr),
                  &::R3BFieldCreator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFieldCreator) );
      instance.SetNew(&new_R3BFieldCreator);
      instance.SetNewArray(&newArray_R3BFieldCreator);
      instance.SetDelete(&delete_R3BFieldCreator);
      instance.SetDeleteArray(&deleteArray_R3BFieldCreator);
      instance.SetDestructor(&destruct_R3BFieldCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFieldCreator*)
   {
      return GenerateInitInstanceLocal((::R3BFieldCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BFieldCreator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFieldConst::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFieldConst::Class_Name()
{
   return "R3BFieldConst";
}

//______________________________________________________________________________
const char *R3BFieldConst::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldConst*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFieldConst::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldConst*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFieldConst::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldConst*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFieldConst::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldConst*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFieldContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFieldContFact::Class_Name()
{
   return "R3BFieldContFact";
}

//______________________________________________________________________________
const char *R3BFieldContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFieldContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFieldContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFieldContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFieldMap::Class_Name()
{
   return "R3BFieldMap";
}

//______________________________________________________________________________
const char *R3BFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGladFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGladFieldMap::Class_Name()
{
   return "R3BGladFieldMap";
}

//______________________________________________________________________________
const char *R3BGladFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGladFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGladFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGladFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGladFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGladFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGladFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGladFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAladinFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAladinFieldMap::Class_Name()
{
   return "R3BAladinFieldMap";
}

//______________________________________________________________________________
const char *R3BAladinFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAladinFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAladinFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAladinFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAladinFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAladinFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAladinFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAladinFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFieldPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFieldPar::Class_Name()
{
   return "R3BFieldPar";
}

//______________________________________________________________________________
const char *R3BFieldPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFieldPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFieldPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFieldPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFieldCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFieldCreator::Class_Name()
{
   return "R3BFieldCreator";
}

//______________________________________________________________________________
const char *R3BFieldCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFieldCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFieldCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFieldCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFieldCreator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFieldConst::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFieldConst.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFieldConst::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFieldConst::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFieldConst(void *p) {
      return  p ? new(p) ::R3BFieldConst : new ::R3BFieldConst;
   }
   static void *newArray_R3BFieldConst(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFieldConst[nElements] : new ::R3BFieldConst[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFieldConst(void *p) {
      delete ((::R3BFieldConst*)p);
   }
   static void deleteArray_R3BFieldConst(void *p) {
      delete [] ((::R3BFieldConst*)p);
   }
   static void destruct_R3BFieldConst(void *p) {
      typedef ::R3BFieldConst current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFieldConst

//______________________________________________________________________________
void R3BFieldContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFieldContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFieldContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFieldContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFieldContFact(void *p) {
      return  p ? new(p) ::R3BFieldContFact : new ::R3BFieldContFact;
   }
   static void *newArray_R3BFieldContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFieldContFact[nElements] : new ::R3BFieldContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFieldContFact(void *p) {
      delete ((::R3BFieldContFact*)p);
   }
   static void deleteArray_R3BFieldContFact(void *p) {
      delete [] ((::R3BFieldContFact*)p);
   }
   static void destruct_R3BFieldContFact(void *p) {
      typedef ::R3BFieldContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFieldContFact

//______________________________________________________________________________
void R3BFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFieldMap(void *p) {
      return  p ? new(p) ::R3BFieldMap : new ::R3BFieldMap;
   }
   static void *newArray_R3BFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFieldMap[nElements] : new ::R3BFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFieldMap(void *p) {
      delete ((::R3BFieldMap*)p);
   }
   static void deleteArray_R3BFieldMap(void *p) {
      delete [] ((::R3BFieldMap*)p);
   }
   static void destruct_R3BFieldMap(void *p) {
      typedef ::R3BFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFieldMap

//______________________________________________________________________________
void R3BGladFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGladFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGladFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGladFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGladFieldMap(void *p) {
      return  p ? new(p) ::R3BGladFieldMap : new ::R3BGladFieldMap;
   }
   static void *newArray_R3BGladFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGladFieldMap[nElements] : new ::R3BGladFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGladFieldMap(void *p) {
      delete ((::R3BGladFieldMap*)p);
   }
   static void deleteArray_R3BGladFieldMap(void *p) {
      delete [] ((::R3BGladFieldMap*)p);
   }
   static void destruct_R3BGladFieldMap(void *p) {
      typedef ::R3BGladFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGladFieldMap

//______________________________________________________________________________
void R3BAladinFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAladinFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAladinFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAladinFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAladinFieldMap(void *p) {
      return  p ? new(p) ::R3BAladinFieldMap : new ::R3BAladinFieldMap;
   }
   static void *newArray_R3BAladinFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAladinFieldMap[nElements] : new ::R3BAladinFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAladinFieldMap(void *p) {
      delete ((::R3BAladinFieldMap*)p);
   }
   static void deleteArray_R3BAladinFieldMap(void *p) {
      delete [] ((::R3BAladinFieldMap*)p);
   }
   static void destruct_R3BAladinFieldMap(void *p) {
      typedef ::R3BAladinFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAladinFieldMap

//______________________________________________________________________________
void R3BFieldPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFieldPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFieldPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFieldPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFieldPar(void *p) {
      return  p ? new(p) ::R3BFieldPar : new ::R3BFieldPar;
   }
   static void *newArray_R3BFieldPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFieldPar[nElements] : new ::R3BFieldPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFieldPar(void *p) {
      delete ((::R3BFieldPar*)p);
   }
   static void deleteArray_R3BFieldPar(void *p) {
      delete [] ((::R3BFieldPar*)p);
   }
   static void destruct_R3BFieldPar(void *p) {
      typedef ::R3BFieldPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFieldPar

//______________________________________________________________________________
void R3BFieldCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFieldCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFieldCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFieldCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFieldCreator(void *p) {
      return  p ? new(p) ::R3BFieldCreator : new ::R3BFieldCreator;
   }
   static void *newArray_R3BFieldCreator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFieldCreator[nElements] : new ::R3BFieldCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFieldCreator(void *p) {
      delete ((::R3BFieldCreator*)p);
   }
   static void deleteArray_R3BFieldCreator(void *p) {
      delete [] ((::R3BFieldCreator*)p);
   }
   static void destruct_R3BFieldCreator(void *p) {
      typedef ::R3BFieldCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFieldCreator

namespace {
  void TriggerDictionaryInitialization_G__FieldDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/field",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/field/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFieldConst;
class R3BFieldContFact;
class R3BFieldMap;
class R3BGladFieldMap;
class R3BAladinFieldMap;
class R3BFieldPar;
class R3BFieldCreator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                    R3BFieldConst header file                  -----
// -------------------------------------------------------------------------


/** R3BFieldConst.h
 ** @since 12.01.2004
 ** @version1.0
 **
 ** A constant (homogeneous) magnetic field
 **/


#ifndef R3BFIELDCONST_H
#define R3BFIELDCONST_H 1


#include "FairField.h"


class R3BFieldPar;

/**
 * \brief R3BFieldConst class.
 *
 * A constant (homogeneous) magnetic field.
 */

class R3BFieldConst : public FairField
{

 public:    

  /** Default constructor **/
  R3BFieldConst();


  /** Standard constructor 
   ** @param name   Object name
   ** @param xMin,xMax   x region of field (global coordinates)
   ** @param yMin,yMax   y region of field (global coordinates)
   ** @param zMin,zMax   z region of field (global coordinates)
   ** @param bX,bY,bZ    Field values [kG]
   **/
  R3BFieldConst(const char* name, Double_t xMin, Double_t xMax,
		Double_t yMin, Double_t yMax, Double_t zMin,
		Double_t zMax, Double_t bX, Double_t bY, Double_t bZ);


  /** Constructor from R3BFieldPar **/
  R3BFieldConst(R3BFieldPar* fieldPar);


  /** Destructor **/
  virtual ~R3BFieldConst();


  /** Set the field region
   ** @param xMin,xMax   x region of field (global coordinates)
   ** @param yMin,yMax   y region of field (global coordinates)
   ** @param zMin,zMax   z region of field (global coordinates)
   **/
  void SetFieldRegion(Double_t xMin, Double_t xMax, Double_t yMin, 
		      Double_t yMax, Double_t zMin, Double_t zMax);


  /** Set the field values
   ** @param bX,bY,bZ    Field values [kG]
   **/
  void SetField(Double_t bX, Double_t bY, Double_t bZ);
  

  /** Get components of field at a given point 
   ** @param x,y,z   Point coordinates [cm]
   **/
  virtual Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Accessors to field region **/
  Double_t GetXmin() const { return fXmin; }
  Double_t GetXmax() const { return fXmax; }
  Double_t GetYmin() const { return fYmin; }
  Double_t GetYmax() const { return fYmax; }
  Double_t GetZmin() const { return fZmin; }
  Double_t GetZmax() const { return fZmax; }


  /** Accessors to field values **/
  Double_t GetBx() const { return fBx; }
  Double_t GetBy() const { return fBy; }
  Double_t GetBz() const { return fBz; }


  /** Screen output **/
  virtual void Print(Option_t *option="") const;


 private:

  /** Limits of the field region **/
  Double_t fXmin;   
  Double_t fXmax;
  Double_t fYmin;
  Double_t fYmax;
  Double_t fZmin;
  Double_t fZmax;
  
  /** Field components inside the field region **/
  Double_t fBx;
  Double_t fBy;
  Double_t fBz;

  ClassDef(R3BFieldConst, 1);

};


#endif
// -------------------------------------------------------------------------
// -----                    R3BFieldContFact header file               -----
// -------------------------------------------------------------------------


/** R3BFieldContFact.h
 ** @author
 ** @since 20.02.2006
 ** @version 1.0
 **
 ** Parameter container factory for field parameter container
 **/


#ifndef R3BFIELDCONTFACT_H
#define R3BFIELDCONTFACT_H 1


#include "FairContFact.h"


class FairContainer;
class FairParSet;


class R3BFieldContFact : public FairContFact
{

 public:

  /** Constructor **/
  R3BFieldContFact();


  /** Destructor **/
  ~R3BFieldContFact();


  /** Create containers
   ** Creates the requested parameter sets (R3BFieldPar) 
   **/
  FairParSet* createContainer(FairContainer* container);


 private:

  /** Set all containers  
   ** Creates container objects with all accepted contexts and adds them
   ** to the list of containers for the field library. 
   **/
  void SetAllContainers();


  ClassDef(R3BFieldContFact,1);

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BFieldMap header file                  -----
// -------------------------------------------------------------------------


/** R3BFieldMap.h
 ** @since 12.01.2004
 ** @version1.0
 **
 ** Magnetic field map on a 3-D grid.
 ** Field values are hold and returned in kG.
 **/


#ifndef R3BFIELDMAP_H
#define R3BFIELDMAP_H 1


#include "FairField.h"
#include "TRotation.h"
#include "TVector3.h"

class TArrayI;
class TArrayF;
class R3BFieldPar;

class R3BFieldMap : public FairField {

public:
  /** Default constructor **/
  R3BFieldMap();
  /** Standard constructor
   ** @param name       Name of field map
   ** @param fileType   R = ROOT file, A = ASCII
   **/
  R3BFieldMap(const char* mapName, const char* fileType = "R");
  /** Constructor from R3BFieldPar **/
  R3BFieldMap(R3BFieldPar* fieldPar);
  R3BFieldMap(Int_t ftype,Bool_t verbosity=kFALSE);


  /** Destructor **/
  virtual ~R3BFieldMap();
  /** Initialisation (read map from file) **/
  virtual void Init();
  /** Write the field map to an ASCII file **/
  void WriteAsciiFile(const char* fileName);
  /** Write field map data to a ROOT file **/
  void WriteRootFile(const char* fileName, const char* mapName);
  /** Set the position of the field centre **/
  virtual void SetPosition(Double_t x, Double_t y, Double_t z);
  /** Set a global field scaling factor **/
  virtual void SetScale(Double_t factor) { fScale = factor; }
  /** Accessor to global scaling factor  **/
  Double_t GetScale() const { return fScale; }
  /** Screen output **/
  virtual void Print(Option_t *option="") const;
  /** Main GetField function */
  virtual void GetFieldValue(const Double_t point[3], Double_t* bField);

  void SetVerbose(Bool_t verbosity){ fVerbose = verbosity;}

private:
    const R3BFieldMap& operator=(const R3BFieldMap&);
    R3BFieldMap(const R3BFieldMap&);


 protected:
  /** Reset the field parameters and data **/
  void Reset();
  /** Read the field map from an ASCII file **/
  void ReadAsciiFile(const char* fileName);
  /** Read field map from a ROOT file **/	
  void ReadRootFile(const char* fileName, const char* mapName);

  Int_t GetLineForPosition(TVector3*  pos) const;
  Int_t GetPositionForLine(Int_t line, TVector3* pos) const;
  Int_t GetLinesArrayForPosition(TVector3* pos, TArrayI* lines);

  /** Map file name **/
  TString fFileName;
  /** Global scaling factor (w.r.t. map on file) **/
  Double_t fScale;        //!       

  /** Local Variables **/
  Int_t stepsInX;        //!   
  Int_t stepsInY;        //! 
  Int_t stepsInZ;        //! steps in the field map along each direction
  Double_t initialX;     //!
  Double_t initialY;     //!
  Double_t initialZ;     //! initial coordinates in field map
  Double_t gridStep;     //! distance between points in field map

  Double_t* Bxfield;     //! field values obtained from field map
  Double_t* Byfield;     //!
  Double_t* Bzfield;     //!


  Int_t typeField;  //! 0 for ALADIN field map,
                    // 1 for R3B map, 2 for other possib .
                    // 3 ALADIN inverted for back tracking

  TRotation* gRot;   //!
  TVector3* gTrans;  //! 

  Bool_t fVerbose;

  ClassDef(R3BFieldMap,1)

};


#endif
// -------------------------------------------------------------------------
// -----                      CbmFieldPar header file                  -----
// -------------------------------------------------------------------------


/** R3BFieldPar.h
 ** @author
 ** @since 20.02.2006
 ** @version 1.0
 **
 ** Parameter set for the CBM magnetic field. For the runtime database.
 **/


#ifndef R3BFIELDPAR_H
#define R3BFIELDPAR_H 1


#include "FairField.h"
#include "FairParGenericSet.h"


class FairParamList;

const int kMaxFieldMapType = 5;        

class R3BFieldPar : public FairParGenericSet
{

 public:

  
  /** Standard constructor  **/
  R3BFieldPar(const char* name, const char* title, const char* context);

/** default constructor  **/
  R3BFieldPar();
  
  /** Destructor **/
  ~R3BFieldPar();


  /** Put parameters **/
  virtual void putParams(FairParamList* list);


  /** Get parameters **/
  virtual Bool_t getParams(FairParamList* list);


  /** Set parameters from R3BField  **/
  void SetParameters(FairField* field);


  /** Accessors **/
  Int_t    GetType()      const { return fType; }
  Double_t GetXmin()      const { return fXmin; }
  Double_t GetXmax()      const { return fXmax; }
  Double_t GetYmin()      const { return fYmin; }
  Double_t GetYmax()      const { return fYmax; }
  Double_t GetZmin()      const { return fZmin; }
  Double_t GetZmax()      const { return fZmax; }
  Double_t GetBx()        const { return fBx; }
  Double_t GetBy()        const { return fBy; }
  Double_t GetBz()        const { return fBz; }
  void MapName(TString& name) { name = fMapName; }
  Double_t GetPositionX() const { return fPosX; }
  Double_t GetPositionY() const { return fPosY; }
  Double_t GetPositionZ() const { return fPosZ; }
  Double_t GetScale()     const { return fScale; }
    Double_t GetCurrent()   const { return fCurrent; }


 private:

  /** Field type
   ** 0 = constant field
   ** 1 = field map
   **/
  Int_t fType;


  /** Field limits in case of constant field **/
  Double_t fXmin, fXmax;
  Double_t fYmin, fYmax;
  Double_t fZmin, fZmax;


  /** Field values in case of constant field [kG] **/
  Double_t fBx, fBy, fBz;


  /** Field map name in case of field map **/
  TString fMapName;


  /** Field centre position for field map **/
  Double_t fPosX, fPosY, fPosZ;


  /** Scaling factor for field map **/
  Double_t fScale;
    

    Double_t fCurrent;


  ClassDef(R3BFieldPar,1);

};


#endif
// -------------------------------------------------------------------------
// -----                    CbmFieldCreator header file                  -----
// -----                Created 15/01/07  by M. Al-Turany              -----
// -------------------------------------------------------------------------


#ifndef R3BFIELDCREATOR_H
#define R3BFIELDCREATOR_H

#include "FairField.h"
#include "FairFieldFactory.h"
#include "R3BFieldPar.h"

class R3BFieldCreator : public FairFieldFactory 
{
public:
    R3BFieldCreator();
    virtual ~R3BFieldCreator();
    virtual FairField* createFairField();
    virtual void SetParm();
    ClassDef(R3BFieldCreator,1);
protected:
    R3BFieldPar* fFieldPar;
};
#endif //R3BFIELDCREATOR_H
#ifndef R3BGLADFIELDMAP_H
#define R3BGLADFIELDMAP_H 1


#include "FairField.h"
#include "R3BFieldPar.h"
#include "TRotation.h"
#include "TVector3.h"

class TArrayF;

class R3BGladFieldMap : public FairField {


public:


  /** Default constructor **/
  R3BGladFieldMap();


  /** Standard constructor
   ** @param name       Name of field map
   ** @param fileType   R = ROOT file, A = ASCII
   **/
  R3BGladFieldMap(const char* mapName, const char* fileType = "A");


  /** Constructor from R3BGladFieldPar **/
  R3BGladFieldMap(R3BFieldPar* fieldPar);


  /** Constructor from R3BGladFieldMapCreator **/
 // R3BGladFieldMap(R3BGladFieldMapCreator* creator);


  /** Destructor **/
  virtual ~R3BGladFieldMap();


  /** Initialisation (read map from file) **/
  virtual void Init();


  /** Get the field components at a certain point 
   ** @param x,y,z     Point coordinates (global) [cm]
   ** @value Bx,By,Bz  Field components [kG]
   **/
  virtual Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Determine whether a point is inside the field map
   ** @param x,y,z              Point coordinates (global) [cm]
   ** @param ix,iy,iz (return)  Grid cell
   ** @param dx,dy,dz (return)  Distance from grid point [cm] if inside
   ** @value kTRUE if inside map, else kFALSE
   **/
  virtual Bool_t IsInside(Double_t x, Double_t y, Double_t z,
			  Int_t& ix, Int_t& iy, Int_t& iz,
			  Double_t& dx, Double_t& dy, Double_t& dz);

 
  /** Write the field map to an ASCII file **/
  void WriteAsciiFile(const char* fileName);

								
  /** Write field map data to a ROOT file **/
  //void WriteRootFile(const char* fileName, const char* mapName);


  /** Set the position of the field centre **/
  virtual void SetPosition(Double_t x, Double_t y, Double_t z);


  /** Set a global field scaling factor **/
  virtual void SetScale(Double_t factor) { fScale = factor; }


  /** Accessors to field parameters in local coordinate system **/
  Double_t GetXmin()  const { return fXmin; } 
  Double_t GetYmin()  const { return fYmin; }
  Double_t GetZmin()  const { return fZmin; }
  Double_t GetXmax()  const { return fXmax; }  
  Double_t GetYmax()  const { return fYmax; }
  Double_t GetZmax()  const { return fZmax; }
  Double_t GetXstep() const { return fXstep; }  
  Double_t GetYstep() const { return fYstep; }
  Double_t GetZstep() const { return fZstep; }
  Int_t    GetNx()    const { return fNx; }
  Int_t    GetNy()    const { return fNy; }
  Int_t    GetNz()    const { return fNz; }


  /** Accessor to field centre position in global system **/
  Double_t GetPositionX() const { return fPosX; }
  Double_t GetPositionY() const { return fPosY; }
  Double_t GetPositionZ() const { return fPosZ; }


  /** Accessor to global scaling factor  **/
  Double_t GetScale() const { return fScale; }


  /** Accessors to the field value arrays **/
  TArrayF* GetBx() const { return fBx; }
  TArrayF* GetBy() const { return fBy; }
  TArrayF* GetBz() const { return fBz; }


  /** Accessor to field map file **/
  const char* GetFileName() { return fFileName.Data(); }


  /** Screen output **/
  virtual void Print(Option_t *option="") const;
	

	
 protected:


  /** Reset the field parameters and data **/
  void Reset();


  /** Read the field map from an ASCII file **/
  void ReadAsciiFile(const char* fileName);


  /** Read field map from a ROOT file **/	
  //void ReadRootFile(const char* fileName, const char* mapName);


  /** Set field parameters and data **/
  //void SetField(const R3BGladFieldMapData* data);


  /** Get field values by interpolation of the grid.
   ** @param dx,dy,dz  Relative distance from grid point [cell units]
   **/
  Double_t Interpolate(Double_t dx, Double_t dy, Double_t dz); 


  /** Map file name **/
  TString fFileName;


  /** Global scaling factor (w.r.t. map on file) **/
  Double_t fScale;             


  /** Field centre position in global coordinates  **/
  Double_t fPosX, fPosY, fPosZ; 


  /** Field limits in local coordinate system **/
  Double_t fXmin, fXmax, fXstep;
  Double_t fYmin, fYmax, fYstep;
  Double_t fZmin, fZmax, fZstep;


  /** Number of grid points  **/
  Int_t fNx, fNy, fNz;   //


  /** Arrays with the field values  **/
  TArrayF* fBx;    //!
  TArrayF* fBy;    //! 
  TArrayF* fBz;    //!


  /** Variables for temporary storage 
   ** Used in the very frequently called method GetFieldValue  **/
  Double_t fHa[2][2][2];            //! Field at corners of a grid cell
  Double_t fHb[2][2];               //! Interpolated field (2-dim)
  Double_t fHc[2];                  //! Interpolated field (1-dim)

  /** local transformation
  **/
  TRotation* gRot;    //!
  TVector3* gTrans;   //!



 ClassDef(R3BGladFieldMap,1)

};


#endif

#ifndef R3BFIELDINTERP_H
#define R3BFIELDINTERP_H

#include <stdlib.h>


// Class to interpolate one variable in three dimensions Using linear
// interpolation.  When given a point outside the valid map: produce
// values as at the boundary at that point, i.e.  give a continous
// value outside.  But not where and in what direction it went wrong.


class R3BFieldInterp
{
public:
  R3BFieldInterp()
    : _m1(0)
    , _m2(0)
    , _n(0)
    , _data(NULL)
  {
    for (int i = 0; i < 3; i++)
      _np[i] = 0;
  }

  ~R3BFieldInterp()
  {
    free(_data);
  }
    
private:
    const R3BFieldInterp& operator=(const R3BFieldInterp&);
    R3BFieldInterp(const R3BFieldInterp&);

public:
  void interpolate(const R3BFieldInterp &s1,double w1,
		   const R3BFieldInterp &s2,double w2);

  void init();

  bool expand();

public:
  double interp(int ic[3],double dc[3]/*,int &outside*/);

  double interp3(int ic[3],double dc[3]/*,int &outside*/);

public:  
  int    _np[3];
  int    _max_ic[3]; // _max_ic[i] = _np[i] - 1
  int    _m1, _m2;   // _m1 = _np[1] * _np[2] ; _m2 = _np[2]
  int    _n;         // _n = _np[0] * _np[1] * _np[2]
  float *_data;

  float get_data_pt(int i0,int i1,int i2)
  {
    return _data[i0 * _m1 + i1 * _m2 + i2];
  }

  void set_data_pt(int i0,int i1,int i2,float d)
  {
    _data[i0 * _m1 + i1 * _m2 + i2] = d;
  }

};

#endif//R3BFIELD_INTERP_H_
#ifndef R3BALADINFIELDMAP_H
#define R3BALADINFIELDMAP_H 1


#include "FairField.h"
#include "TRotation.h"
#include "TVector3.h"
#include "R3BFieldInterp.h"
#include "R3BFieldPar.h"
#include <map>



// ------------------  Land02 internal Structures -----------------------//
// <DB @ March 2010 >
// The syntax convention in Land02 is preserved, member variables
// begins with an _<xx>. It will help to separated between imported Land02
// code and native one.

struct fields_ALADiN
{
  R3BFieldInterp f[2][3];
};

typedef std::map<Double_t,fields_ALADiN*> map_fields_ALADiN;

struct coords_ALADiN
{
  // Note, these are in ALADiN measurement box axis system,
  // i.e. x is forward (usual z) and z is usual -x

  TVector3 fBox_pt[2];
  TVector3 fMag_pt[2];
  Double_t fCosa, fSina;
};





// -------------------- Standard R3BRoot Field Map API -----------------//

class TArrayF;

class R3BAladinFieldMap : public FairField {


public:


  /** Default constructor **/
  R3BAladinFieldMap();


  /** Standard constructor
   ** @param name       Name of field map
   ** @param fileType   R = ROOT file, A = ASCII
   **/
  R3BAladinFieldMap(const char* mapName, const char* fileType = "A");


  /** Constructor from R3BAladinFieldPar **/
  R3BAladinFieldMap(R3BFieldPar* fieldPar);


  /** Constructor from R3BAladinFieldMapCreator **/
 // R3BAladinFieldMap(R3BAladinFieldMapCreator* creator);


  /** Destructor **/
  virtual ~R3BAladinFieldMap();


  /** Initialisation (read map from file) **/
  virtual void Init();

  virtual void InitField();
  
  
  virtual void FillParContainer() {}
  

  /** Main GetField function */
  virtual void GetFieldValue(const Double_t point[3], Double_t* bField);


  /** Get the field components at a certain point 
   ** @param x,y,z     Point coordinates (global) [cm]
   ** @value Bx,By,Bz  Field components [kG]
   **/
  virtual Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Determine whether a point is inside the field map
   ** @param x,y,z              Point coordinates (global) [cm]
   ** @param ix,iy,iz (return)  Grid cell
   ** @param dx,dy,dz (return)  Distance from grid point [cm] if inside
   ** @value kTRUE if inside map, else kFALSE
   **/
  virtual Bool_t IsInside(Double_t x, Double_t y, Double_t z,
			  Int_t& ix, Int_t& iy, Int_t& iz,
			  Double_t& dx, Double_t& dy, Double_t& dz);

 
  /** Write the field map to an ASCII file **/
  void WriteAsciiFile(const char* fileName);

								
  /** Write field map data to a ROOT file **/
  //void WriteRootFile(const char* fileName, const char* mapName);


  /** Set the position of the field centre **/
  virtual void SetPosition(Double_t x, Double_t y, Double_t z);


  /** Set a global field scaling factor **/
  virtual void SetScale(Double_t factor) { fScale = factor; }


  /** Accessors to field parameters in local coordinate system **/
  Double_t GetXmin()  const { return fXmin; } 
  Double_t GetYmin()  const { return fYmin; }
  Double_t GetZmin()  const { return fZmin; }
  Double_t GetXmax()  const { return fXmax; }  
  Double_t GetYmax()  const { return fYmax; }
  Double_t GetZmax()  const { return fZmax; }
  Double_t GetXstep() const { return fXstep; }  
  Double_t GetYstep() const { return fYstep; }
  Double_t GetZstep() const { return fZstep; }
  Int_t    GetNx()    const { return fNx; }
  Int_t    GetNy()    const { return fNy; }
  Int_t    GetNz()    const { return fNz; }


  /** Accessor to field centre position in global system **/
  Double_t GetPositionX() const { return fPosX; }
  Double_t GetPositionY() const { return fPosY; }
  Double_t GetPositionZ() const { return fPosZ; }


  /** Accessor to global scaling factor  **/
  Double_t GetScale() const { return fScale; }


  /** Accessors to the field value arrays **/
  TArrayF* GetBx() const { return fBx; }
  TArrayF* GetBy() const { return fBy; }
  TArrayF* GetBz() const { return fBz; }


  /** Accessor to field map file **/
  const char* GetFileName() { return fFileName.Data(); }


  void CalcFieldDiv(R3BFieldInterp f[3],Double_t d[3]);



  /** Screen output **/
  virtual void Print(Option_t *option="") const;
	
  /** Set Current **/

  void SetCurrent(Double_t aCurrent ) { fCurrent=aCurrent;}
  Double_t GetCurrent() { return fCurrent;}
  void SetFringeField(Bool_t set ) {gFringeField=set;}

	
 protected:


  /** Reset the field parameters and data **/
  void Reset();


  /** Read the field map from an ASCII file **/
  void ReadAsciiFile(const char* fileName);


  /** Read field map from a ROOT file **/	
  //void ReadRootFile(const char* fileName, const char* mapName);


  /** Set field parameters and data **/
  //void SetField(const R3BAladinFieldMapData* data);


  /** Get field values by interpolation of the grid.
   ** @param dx,dy,dz  Relative distance from grid point [cell units]
   **/
  Double_t Interpolate(Double_t dx, Double_t dy, Double_t dz); 


  /** Map file name **/
  TString fFileName;


  /** Global scaling factor (w.r.t. map on file) **/
  Double_t fScale;             


  /** Field centre position in global coordinates  **/
  Double_t fPosX, fPosY, fPosZ; 


  /** Field limits in local coordinate system **/
  Double_t fXmin, fXmax, fXstep;
  Double_t fYmin, fYmax, fYstep;
  Double_t fZmin, fZmax, fZstep;


  /** Number of grid points  **/
  Int_t fNx, fNy, fNz;   //


  /** Arrays with the field values  **/
  TArrayF* fBx;    //!
  TArrayF* fBy;    //! 
  TArrayF* fBz;    //!


  /** Variables for temporary storage 
   ** Used in the very frequently called method GetFieldValue  **/
  Double_t fHa[2][2][2];            //! Field at corners of a grid cell
  Double_t fHb[2][2];               //! Interpolated field (2-dim)
  Double_t fHc[2];                  //! Interpolated field (1-dim)

  /** local transformation
  **/
  TRotation* gRot;    //!
  TVector3* gTrans;   //!


  /** land02 imported variables
   **/

  static map_fields_ALADiN gMapIFieldOrig; //!
  static map_fields_ALADiN gMapIField;     //!

  static coords_ALADiN     gCoords[2];     //!
  static Bool_t            gInitialized;   //!

  fields_ALADiN *fCurField;                //!
  Double_t       fCurrent;                 //!
  Double_t       fFieldSign;               //!


  TVector3 af_box[2][2] ;            //!
  TVector3 af_mag[2][2] ;            //!
  Bool_t gFringeField;               //!



 ClassDef(R3BAladinFieldMap,1)

};


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BAladinFieldMap", payloadCode, "@",
"R3BFieldConst", payloadCode, "@",
"R3BFieldContFact", payloadCode, "@",
"R3BFieldCreator", payloadCode, "@",
"R3BFieldMap", payloadCode, "@",
"R3BFieldPar", payloadCode, "@",
"R3BGladFieldMap", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__FieldDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__FieldDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__FieldDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__FieldDict() {
  TriggerDictionaryInitialization_G__FieldDict_Impl();
}
