// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIlosdIG__R3BLosDict

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
#include "unpack/R3BLosUnpack.h"
#include "unpack/R3BLosRawHit.h"
#include "unpack/R3BLosHit.h"
#include "unpack/R3BLosTcalFill.h"
#include "unpack/R3BLosTcal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BLosUnpack(void *p = 0);
   static void *newArray_R3BLosUnpack(Long_t size, void *p);
   static void delete_R3BLosUnpack(void *p);
   static void deleteArray_R3BLosUnpack(void *p);
   static void destruct_R3BLosUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosUnpack*)
   {
      ::R3BLosUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosUnpack", ::R3BLosUnpack::Class_Version(), "invalid", 38,
                  typeid(::R3BLosUnpack), DefineBehavior(ptr, ptr),
                  &::R3BLosUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosUnpack) );
      instance.SetNew(&new_R3BLosUnpack);
      instance.SetNewArray(&newArray_R3BLosUnpack);
      instance.SetDelete(&delete_R3BLosUnpack);
      instance.SetDeleteArray(&deleteArray_R3BLosUnpack);
      instance.SetDestructor(&destruct_R3BLosUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BLosUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosRawHit(void *p = 0);
   static void *newArray_R3BLosRawHit(Long_t size, void *p);
   static void delete_R3BLosRawHit(void *p);
   static void deleteArray_R3BLosRawHit(void *p);
   static void destruct_R3BLosRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosRawHit*)
   {
      ::R3BLosRawHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosRawHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosRawHit", ::R3BLosRawHit::Class_Version(), "invalid", 80,
                  typeid(::R3BLosRawHit), DefineBehavior(ptr, ptr),
                  &::R3BLosRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosRawHit) );
      instance.SetNew(&new_R3BLosRawHit);
      instance.SetNewArray(&newArray_R3BLosRawHit);
      instance.SetDelete(&delete_R3BLosRawHit);
      instance.SetDeleteArray(&deleteArray_R3BLosRawHit);
      instance.SetDestructor(&destruct_R3BLosRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosRawHit*)
   {
      return GenerateInitInstanceLocal((::R3BLosRawHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosRawHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosTcalFill(void *p = 0);
   static void *newArray_R3BLosTcalFill(Long_t size, void *p);
   static void delete_R3BLosTcalFill(void *p);
   static void deleteArray_R3BLosTcalFill(void *p);
   static void destruct_R3BLosTcalFill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosTcalFill*)
   {
      ::R3BLosTcalFill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosTcalFill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosTcalFill", ::R3BLosTcalFill::Class_Version(), "invalid", 178,
                  typeid(::R3BLosTcalFill), DefineBehavior(ptr, ptr),
                  &::R3BLosTcalFill::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosTcalFill) );
      instance.SetNew(&new_R3BLosTcalFill);
      instance.SetNewArray(&newArray_R3BLosTcalFill);
      instance.SetDelete(&delete_R3BLosTcalFill);
      instance.SetDeleteArray(&deleteArray_R3BLosTcalFill);
      instance.SetDestructor(&destruct_R3BLosTcalFill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosTcalFill*)
   {
      return GenerateInitInstanceLocal((::R3BLosTcalFill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosTcalFill*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosTcal(void *p = 0);
   static void *newArray_R3BLosTcal(Long_t size, void *p);
   static void delete_R3BLosTcal(void *p);
   static void deleteArray_R3BLosTcal(void *p);
   static void destruct_R3BLosTcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosTcal*)
   {
      ::R3BLosTcal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosTcal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosTcal", ::R3BLosTcal::Class_Version(), "invalid", 297,
                  typeid(::R3BLosTcal), DefineBehavior(ptr, ptr),
                  &::R3BLosTcal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosTcal) );
      instance.SetNew(&new_R3BLosTcal);
      instance.SetNewArray(&newArray_R3BLosTcal);
      instance.SetDelete(&delete_R3BLosTcal);
      instance.SetDeleteArray(&deleteArray_R3BLosTcal);
      instance.SetDestructor(&destruct_R3BLosTcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosTcal*)
   {
      return GenerateInitInstanceLocal((::R3BLosTcal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosTcal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosHit(void *p = 0);
   static void *newArray_R3BLosHit(Long_t size, void *p);
   static void delete_R3BLosHit(void *p);
   static void deleteArray_R3BLosHit(void *p);
   static void destruct_R3BLosHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosHit*)
   {
      ::R3BLosHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosHit", ::R3BLosHit::Class_Version(), "invalid", 128,
                  typeid(::R3BLosHit), DefineBehavior(ptr, ptr),
                  &::R3BLosHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosHit) );
      instance.SetNew(&new_R3BLosHit);
      instance.SetNewArray(&newArray_R3BLosHit);
      instance.SetDelete(&delete_R3BLosHit);
      instance.SetDeleteArray(&deleteArray_R3BLosHit);
      instance.SetDestructor(&destruct_R3BLosHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosHit*)
   {
      return GenerateInitInstanceLocal((::R3BLosHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BLosUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosUnpack::Class_Name()
{
   return "R3BLosUnpack";
}

//______________________________________________________________________________
const char *R3BLosUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosRawHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosRawHit::Class_Name()
{
   return "R3BLosRawHit";
}

//______________________________________________________________________________
const char *R3BLosRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosRawHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosRawHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosRawHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosRawHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosTcalFill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosTcalFill::Class_Name()
{
   return "R3BLosTcalFill";
}

//______________________________________________________________________________
const char *R3BLosTcalFill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcalFill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosTcalFill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcalFill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosTcalFill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcalFill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosTcalFill::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcalFill*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosTcal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosTcal::Class_Name()
{
   return "R3BLosTcal";
}

//______________________________________________________________________________
const char *R3BLosTcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosTcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosTcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosTcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosTcal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosHit::Class_Name()
{
   return "R3BLosHit";
}

//______________________________________________________________________________
const char *R3BLosHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BLosUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosUnpack(void *p) {
      return  p ? new(p) ::R3BLosUnpack : new ::R3BLosUnpack;
   }
   static void *newArray_R3BLosUnpack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosUnpack[nElements] : new ::R3BLosUnpack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosUnpack(void *p) {
      delete ((::R3BLosUnpack*)p);
   }
   static void deleteArray_R3BLosUnpack(void *p) {
      delete [] ((::R3BLosUnpack*)p);
   }
   static void destruct_R3BLosUnpack(void *p) {
      typedef ::R3BLosUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosUnpack

//______________________________________________________________________________
void R3BLosRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosRawHit(void *p) {
      return  p ? new(p) ::R3BLosRawHit : new ::R3BLosRawHit;
   }
   static void *newArray_R3BLosRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosRawHit[nElements] : new ::R3BLosRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosRawHit(void *p) {
      delete ((::R3BLosRawHit*)p);
   }
   static void deleteArray_R3BLosRawHit(void *p) {
      delete [] ((::R3BLosRawHit*)p);
   }
   static void destruct_R3BLosRawHit(void *p) {
      typedef ::R3BLosRawHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosRawHit

//______________________________________________________________________________
void R3BLosTcalFill::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosTcalFill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosTcalFill::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosTcalFill::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosTcalFill(void *p) {
      return  p ? new(p) ::R3BLosTcalFill : new ::R3BLosTcalFill;
   }
   static void *newArray_R3BLosTcalFill(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosTcalFill[nElements] : new ::R3BLosTcalFill[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosTcalFill(void *p) {
      delete ((::R3BLosTcalFill*)p);
   }
   static void deleteArray_R3BLosTcalFill(void *p) {
      delete [] ((::R3BLosTcalFill*)p);
   }
   static void destruct_R3BLosTcalFill(void *p) {
      typedef ::R3BLosTcalFill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosTcalFill

//______________________________________________________________________________
void R3BLosTcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosTcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosTcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosTcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosTcal(void *p) {
      return  p ? new(p) ::R3BLosTcal : new ::R3BLosTcal;
   }
   static void *newArray_R3BLosTcal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosTcal[nElements] : new ::R3BLosTcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosTcal(void *p) {
      delete ((::R3BLosTcal*)p);
   }
   static void deleteArray_R3BLosTcal(void *p) {
      delete [] ((::R3BLosTcal*)p);
   }
   static void destruct_R3BLosTcal(void *p) {
      typedef ::R3BLosTcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosTcal

//______________________________________________________________________________
void R3BLosHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosHit(void *p) {
      return  p ? new(p) ::R3BLosHit : new ::R3BLosHit;
   }
   static void *newArray_R3BLosHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosHit[nElements] : new ::R3BLosHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosHit(void *p) {
      delete ((::R3BLosHit*)p);
   }
   static void deleteArray_R3BLosHit(void *p) {
      delete [] ((::R3BLosHit*)p);
   }
   static void destruct_R3BLosHit(void *p) {
      typedef ::R3BLosHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosHit

namespace ROOT {
   static TClass *maplEintcOR3BTCalModuleParmUgR_Dictionary();
   static void maplEintcOR3BTCalModuleParmUgR_TClassManip(TClass*);
   static void *new_maplEintcOR3BTCalModuleParmUgR(void *p = 0);
   static void *newArray_maplEintcOR3BTCalModuleParmUgR(Long_t size, void *p);
   static void delete_maplEintcOR3BTCalModuleParmUgR(void *p);
   static void deleteArray_maplEintcOR3BTCalModuleParmUgR(void *p);
   static void destruct_maplEintcOR3BTCalModuleParmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,R3BTCalModulePar*>*)
   {
      map<int,R3BTCalModulePar*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,R3BTCalModulePar*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,R3BTCalModulePar*>", -2, "map", 96,
                  typeid(map<int,R3BTCalModulePar*>), DefineBehavior(ptr, ptr),
                  &maplEintcOR3BTCalModuleParmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,R3BTCalModulePar*>) );
      instance.SetNew(&new_maplEintcOR3BTCalModuleParmUgR);
      instance.SetNewArray(&newArray_maplEintcOR3BTCalModuleParmUgR);
      instance.SetDelete(&delete_maplEintcOR3BTCalModuleParmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOR3BTCalModuleParmUgR);
      instance.SetDestructor(&destruct_maplEintcOR3BTCalModuleParmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,R3BTCalModulePar*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,R3BTCalModulePar*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOR3BTCalModuleParmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,R3BTCalModulePar*>*)0x0)->GetClass();
      maplEintcOR3BTCalModuleParmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOR3BTCalModuleParmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOR3BTCalModuleParmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,R3BTCalModulePar*> : new map<int,R3BTCalModulePar*>;
   }
   static void *newArray_maplEintcOR3BTCalModuleParmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,R3BTCalModulePar*>[nElements] : new map<int,R3BTCalModulePar*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOR3BTCalModuleParmUgR(void *p) {
      delete ((map<int,R3BTCalModulePar*>*)p);
   }
   static void deleteArray_maplEintcOR3BTCalModuleParmUgR(void *p) {
      delete [] ((map<int,R3BTCalModulePar*>*)p);
   }
   static void destruct_maplEintcOR3BTCalModuleParmUgR(void *p) {
      typedef map<int,R3BTCalModulePar*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,R3BTCalModulePar*>

namespace {
  void TriggerDictionaryInitialization_G__R3BLosDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/los",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/los/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdb/losdb",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/tcal",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/los/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BLosUnpack;
class R3BLosRawHit;
class R3BLosTcalFill;
class R3BLosTcal;
class R3BLosHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// ---------------------------------------------------------------------------------------
// -----                           R3BLosUnpack                                      -----
// -----                  Created 09-04-2014 by D.Kresan                             -----
// ---------------------------------------------------------------------------------------

#ifndef R3BLOSUNPACK_H
#define R3BLOSUNPACK_H

#include "FairUnpack.h"

#define VME_CAEN 1
#define VME_CAEN_MASK 0xff000000
#define VME_CAEN_SCALER_SIG 0x04000000
#define VME_CAEN_MTDC_MASK 0xf0000000
#define VME_CAEN_MTDC_SIG 0x40000000

#define VME_MESYTEC 3
#define VME_MESYTEC_MASK 0xff000000
#define VME_MESYTEC_SIGNATURE 0x40000000

#define VME_VUPROM 4
#define VME_VUPROM_MASK 0xff000000
#define VME_VUPROM_SIGNATURE 0xfe000000

#define VME_VFTX 5
#define VME_VFTX_MASK 0xff000000
#define VME_VFTX_SIGNATURE 0xab000000
#define VME_VFTX_GEOM_MASK 0x0000001f
#define VME_VFTX_GEOM_SHIFT 0

class TClonesArray;

class R3BLosUnpack : public FairUnpack
{
  public:
    // Constructor
    R3BLosUnpack(Short_t type = 88,
                 Short_t subType = 8800,
                 Short_t procId = 10,
                 Short_t subCrate = 7,
                 Short_t control = 5);

    // Destructor
    virtual ~R3BLosUnpack();

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
    ClassDef(R3BLosUnpack, 0)
};

#endif
// ---------------------------------------------------------------------------------------
// -----                                R3BLosRawHit                                 -----
// -----                      Created 14-04-2014 by D.Kresan                         -----
// ---------------------------------------------------------------------------------------

#ifndef R3BLOSRAWHIT_H
#define R3BLOSRAWHIT_H

#include "TObject.h"

class R3BLosRawHit : public TObject
{
  public:
    // Default Constructor
    R3BLosRawHit();

    // Standard Constructor
    R3BLosRawHit(UShort_t channel, UShort_t tdc, UShort_t clock);

    // Destructor
    virtual ~R3BLosRawHit()
    {
    }

    inline const UShort_t& GetChannel() const
    {
        return fChannel;
    }
    inline const UShort_t& GetTdc() const
    {
        return fTdc;
    }
    inline const UShort_t& GetClock() const
    {
        return fClock;
    }

  private:
    UShort_t fChannel;
    UShort_t fTdc;
    UShort_t fClock;

  public:
    ClassDef(R3BLosRawHit, 1)
};

#endif
// ---------------------------------------------------------
// -----                    R3BLosHit                  -----
// -----          Created 29-04-2014 by D.Kresan       -----
// ---------------------------------------------------------

#ifndef R3BLOSHIT
#define R3BLOSHIT

#include "TObject.h"

class R3BLosHit : public TObject
{
  public:
    R3BLosHit();

    R3BLosHit(Int_t channel, Double_t time);

    virtual ~R3BLosHit();

    inline Int_t GetChannel() const
    {
        return fChannel;
    }
    inline Double_t GetTime() const
    {
        return fTime;
    }

  private:
    Int_t fChannel;
    Double_t fTime;

  public:
    ClassDef(R3BLosHit, 1);
};

#endif
// ----------------------------------------------------------------
// -----                     R3BLosTcalFill                   -----
// -----             Created 18-04-2014 by D.Kresan           -----
// ----------------------------------------------------------------

#ifndef R3BLOSTCALFILL_H
#define R3BLOSTCALFILL_H

#include "FairTask.h"

class R3BTCalPar;
class TClonesArray;
class R3BTCalEngine;

/**
 * An analysis task for time calibration of LOS.
 * This class fills the TDC distribution per module,
 * and calculates the calibration parameters using
 * the R3BTCalEngine class.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BLosTcalFill : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of this class using default parameters.
     */
    R3BLosTcalFill();

    /**
     * Standard constructor.
     * Creates an instance of this class.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLosTcalFill(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Deletes an instance of this class.
     */
    virtual ~R3BLosTcalFill();

    /**
     * Method for task initialization.
     * It is called by the framework prior to the event loop.
     * Implements initialization of input data and parameter
     * containers.
     * @return Status of initialization: kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for event loop implementation.
     * Fills the TDC distribution for each module.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * Method called after processing each event.
     */
    virtual void FinishEvent();

    /**
     * Method called after task has finished.
     */
    virtual void FinishTask();

    /**
     * Method for setting the update rate of calibration parameters.
     * @param rate an update rate value in events.
     */
    inline void SetUpdateRate(Int_t rate)
    {
        fUpdateRate = rate;
    }

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries larger this value
     * will be calibrated.
     * @param minStats a value of minimum statistics.
     */
    inline void SetMinStats(Int_t minStats)
    {
        fMinStats = minStats;
    }

    /**
     * Method for setting of number of detector modules.
     * @param nCh a number of detector modules.
     */
    inline void SetNofModules(Int_t nCh)
    {
        fNofCh = nCh;
    }

  private:
    Int_t fUpdateRate; /**< Update rate of calibration parameters. **/
    Int_t fMinStats;   /**< Minimum required statistics per module. **/
    Int_t fNofCh;      /**< Number of detctor modules. **/

    Int_t fNEvents;       /**< Event counter **/
    R3BTCalPar* fCal_Par; /**< Parameter container **/
    TClonesArray* fHits;  /**< Array of raw items - input data. **/

    R3BTCalEngine* fEngine; /**< Instance of TCAL engine. **/

  public:
    ClassDef(R3BLosTcalFill, 1)
};

#endif
// ------------------------------------------------------------
// -----                     R3BLosTcal                   -----
// -----          Created 22-04-2014 by D.Kresan          -----
// ------------------------------------------------------------

#ifndef R3BLOSTCAL
#define R3BLOSTCAL

#include <map>

#include "FairTask.h"

class TClonesArray;
class R3BTCalPar;
class R3BTCalModulePar;

/**
 * An analysis task for apllying the time calibration for LOS.
 * This class makes a loop over LOS raw items with TDC values,
 * and calculates LOS time items with time value in [ns].
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BLosTcal : public FairTask
{
  public:
    /**
     * Default constructor.
     * Creates an instance of this class using default parameters.
     */
    R3BLosTcal();

    /**
     * Standard constructor.
     * Creates an instance of this class.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLosTcal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Deletes an instance of this class.
     */
    virtual ~R3BLosTcal();

    /**
     * Method for task initialization.
     * It is called by the framework prior to the event loop.
     * Implements initialization of input data and parameter
     * containers.
     * @return Status of initialization: kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for initialization of the parameter containers.
     * Called by the framework prior to Init() method.
     */
    virtual void SetParContainers();

    /**
     * Method for re-initialization of parameter containers
     * in case the Run ID has changed.
     */
    virtual InitStatus ReInit();

    /**
     * Method for event loop implementation.
     * Fills the TDC distribution for each module.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * Method called after processing each event.
     */
    virtual void FinishEvent();

    /**
     * Method called after task has finished.
     */
    virtual void FinishTask();

    /**
     * Method for setting of number of detector modules.
     * @param nModules a number of detector modules.
     */
    inline void SetNofModules(Int_t nModules)
    {
        fNofModules = nModules;
    }

  private:
    TClonesArray* fRawHit;                      /**< Array of raw items - input data. */
    TClonesArray* fHit;                         /**< Array of time items - output data. */
    Int_t fNHit;                                /**< Number of produced time items per event. */
    std::map<Int_t, R3BTCalModulePar*> fMapPar; /**< Map for matching of detector module with parameter container. */
    R3BTCalPar* fTcalPar;                       /**< Parameter container for the whole detector. */
    Int_t fNofModules;                          /**< Number of modules. */
    Double_t fClockFreq;                        /**< Clock cycle in [ns]. */

    /**
     * Method for retrieving parameter container for specific module ID.
     * @param channel a detector module ID.
     * @param par an output parameter container for this module.
     * @return kTRUE if parameter container for this module exists, else kFALSE.
     */
    Bool_t FindChannel(Int_t channel, R3BTCalModulePar** par);

  public:
    ClassDef(R3BLosTcal, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BLosHit", payloadCode, "@",
"R3BLosRawHit", payloadCode, "@",
"R3BLosTcal", payloadCode, "@",
"R3BLosTcalFill", payloadCode, "@",
"R3BLosUnpack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BLosDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BLosDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BLosDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BLosDict() {
  TriggerDictionaryInitialization_G__R3BLosDict_Impl();
}
