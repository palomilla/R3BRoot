// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIneulanddIG__R3BNeulandDict

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
#include "R3BNeuland.h"
#include "R3BNeulandMCMon.h"
#include "R3BNeulandDigiMon.h"
#include "R3BNeulandVisualizer.h"
#include "R3BNeulandDigitizer.h"
#include "digitizing/DigitizingEngine.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeuland(void *p = 0);
   static void *newArray_R3BNeuland(Long_t size, void *p);
   static void delete_R3BNeuland(void *p);
   static void deleteArray_R3BNeuland(void *p);
   static void destruct_R3BNeuland(void *p);
   static void streamer_R3BNeuland(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuland*)
   {
      ::R3BNeuland *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuland >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuland", ::R3BNeuland::Class_Version(), "invalid", 29,
                  typeid(::R3BNeuland), DefineBehavior(ptr, ptr),
                  &::R3BNeuland::Dictionary, isa_proxy, 16,
                  sizeof(::R3BNeuland) );
      instance.SetNew(&new_R3BNeuland);
      instance.SetNewArray(&newArray_R3BNeuland);
      instance.SetDelete(&delete_R3BNeuland);
      instance.SetDeleteArray(&deleteArray_R3BNeuland);
      instance.SetDestructor(&destruct_R3BNeuland);
      instance.SetStreamerFunc(&streamer_R3BNeuland);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuland*)
   {
      return GenerateInitInstanceLocal((::R3BNeuland*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeuland*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandDigiMon(void *p = 0);
   static void *newArray_R3BNeulandDigiMon(Long_t size, void *p);
   static void delete_R3BNeulandDigiMon(void *p);
   static void deleteArray_R3BNeulandDigiMon(void *p);
   static void destruct_R3BNeulandDigiMon(void *p);
   static void streamer_R3BNeulandDigiMon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandDigiMon*)
   {
      ::R3BNeulandDigiMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandDigiMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandDigiMon", ::R3BNeulandDigiMon::Class_Version(), "invalid", 216,
                  typeid(::R3BNeulandDigiMon), DefineBehavior(ptr, ptr),
                  &::R3BNeulandDigiMon::Dictionary, isa_proxy, 16,
                  sizeof(::R3BNeulandDigiMon) );
      instance.SetNew(&new_R3BNeulandDigiMon);
      instance.SetNewArray(&newArray_R3BNeulandDigiMon);
      instance.SetDelete(&delete_R3BNeulandDigiMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandDigiMon);
      instance.SetDestructor(&destruct_R3BNeulandDigiMon);
      instance.SetStreamerFunc(&streamer_R3BNeulandDigiMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandDigiMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandDigiMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandDigiMon*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMCMon(void *p = 0);
   static void *newArray_R3BNeulandMCMon(Long_t size, void *p);
   static void delete_R3BNeulandMCMon(void *p);
   static void deleteArray_R3BNeulandMCMon(void *p);
   static void destruct_R3BNeulandMCMon(void *p);
   static void streamer_R3BNeulandMCMon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMCMon*)
   {
      ::R3BNeulandMCMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMCMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMCMon", ::R3BNeulandMCMon::Class_Version(), "invalid", 129,
                  typeid(::R3BNeulandMCMon), DefineBehavior(ptr, ptr),
                  &::R3BNeulandMCMon::Dictionary, isa_proxy, 16,
                  sizeof(::R3BNeulandMCMon) );
      instance.SetNew(&new_R3BNeulandMCMon);
      instance.SetNewArray(&newArray_R3BNeulandMCMon);
      instance.SetDelete(&delete_R3BNeulandMCMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMCMon);
      instance.SetDestructor(&destruct_R3BNeulandMCMon);
      instance.SetStreamerFunc(&streamer_R3BNeulandMCMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMCMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMCMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BNeulandVisualizer(void *p);
   static void deleteArray_R3BNeulandVisualizer(void *p);
   static void destruct_R3BNeulandVisualizer(void *p);
   static void streamer_R3BNeulandVisualizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandVisualizer*)
   {
      ::R3BNeulandVisualizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandVisualizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandVisualizer", ::R3BNeulandVisualizer::Class_Version(), "invalid", 254,
                  typeid(::R3BNeulandVisualizer), DefineBehavior(ptr, ptr),
                  &::R3BNeulandVisualizer::Dictionary, isa_proxy, 16,
                  sizeof(::R3BNeulandVisualizer) );
      instance.SetDelete(&delete_R3BNeulandVisualizer);
      instance.SetDeleteArray(&deleteArray_R3BNeulandVisualizer);
      instance.SetDestructor(&destruct_R3BNeulandVisualizer);
      instance.SetStreamerFunc(&streamer_R3BNeulandVisualizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandVisualizer*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandVisualizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandDigitizer(void *p = 0);
   static void *newArray_R3BNeulandDigitizer(Long_t size, void *p);
   static void delete_R3BNeulandDigitizer(void *p);
   static void deleteArray_R3BNeulandDigitizer(void *p);
   static void destruct_R3BNeulandDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandDigitizer*)
   {
      ::R3BNeulandDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandDigitizer", ::R3BNeulandDigitizer::Class_Version(), "invalid", 301,
                  typeid(::R3BNeulandDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BNeulandDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandDigitizer) );
      instance.SetNew(&new_R3BNeulandDigitizer);
      instance.SetNewArray(&newArray_R3BNeulandDigitizer);
      instance.SetDelete(&delete_R3BNeulandDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BNeulandDigitizer);
      instance.SetDestructor(&destruct_R3BNeulandDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingEngine_Dictionary();
   static void NeulandcLcLDigitizingEngine_TClassManip(TClass*);
   static void *new_NeulandcLcLDigitizingEngine(void *p = 0);
   static void *newArray_NeulandcLcLDigitizingEngine(Long_t size, void *p);
   static void delete_NeulandcLcLDigitizingEngine(void *p);
   static void deleteArray_NeulandcLcLDigitizingEngine(void *p);
   static void destruct_NeulandcLcLDigitizingEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::DigitizingEngine*)
   {
      ::Neuland::DigitizingEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::DigitizingEngine));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::DigitizingEngine", "DigitizingEngine.h", 54,
                  typeid(::Neuland::DigitizingEngine), DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingEngine_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::DigitizingEngine) );
      instance.SetNew(&new_NeulandcLcLDigitizingEngine);
      instance.SetNewArray(&newArray_NeulandcLcLDigitizingEngine);
      instance.SetDelete(&delete_NeulandcLcLDigitizingEngine);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingEngine);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::DigitizingEngine*)
   {
      return GenerateInitInstanceLocal((::Neuland::DigitizingEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Neuland::DigitizingEngine*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::DigitizingEngine*)0x0)->GetClass();
      NeulandcLcLDigitizingEngine_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuland::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuland::Class_Name()
{
   return "R3BNeuland";
}

//______________________________________________________________________________
const char *R3BNeuland::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuland::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuland::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuland::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandDigiMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandDigiMon::Class_Name()
{
   return "R3BNeulandDigiMon";
}

//______________________________________________________________________________
const char *R3BNeulandDigiMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigiMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandDigiMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigiMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandDigiMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigiMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandDigiMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigiMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMCMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMCMon::Class_Name()
{
   return "R3BNeulandMCMon";
}

//______________________________________________________________________________
const char *R3BNeulandMCMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMCMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMCMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMCMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandVisualizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandVisualizer::Class_Name()
{
   return "R3BNeulandVisualizer";
}

//______________________________________________________________________________
const char *R3BNeulandVisualizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandVisualizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandVisualizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandVisualizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandDigitizer::Class_Name()
{
   return "R3BNeulandDigitizer";
}

//______________________________________________________________________________
const char *R3BNeulandDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeuland::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuland.

   R3BDetector::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuland(void *p) {
      return  p ? new(p) ::R3BNeuland : new ::R3BNeuland;
   }
   static void *newArray_R3BNeuland(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuland[nElements] : new ::R3BNeuland[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuland(void *p) {
      delete ((::R3BNeuland*)p);
   }
   static void deleteArray_R3BNeuland(void *p) {
      delete [] ((::R3BNeuland*)p);
   }
   static void destruct_R3BNeuland(void *p) {
      typedef ::R3BNeuland current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BNeuland(TBuffer &buf, void *obj) {
      ((::R3BNeuland*)obj)->::R3BNeuland::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BNeuland

//______________________________________________________________________________
void R3BNeulandDigiMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandDigiMon.

   FairTask::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandDigiMon(void *p) {
      return  p ? new(p) ::R3BNeulandDigiMon : new ::R3BNeulandDigiMon;
   }
   static void *newArray_R3BNeulandDigiMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandDigiMon[nElements] : new ::R3BNeulandDigiMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandDigiMon(void *p) {
      delete ((::R3BNeulandDigiMon*)p);
   }
   static void deleteArray_R3BNeulandDigiMon(void *p) {
      delete [] ((::R3BNeulandDigiMon*)p);
   }
   static void destruct_R3BNeulandDigiMon(void *p) {
      typedef ::R3BNeulandDigiMon current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BNeulandDigiMon(TBuffer &buf, void *obj) {
      ((::R3BNeulandDigiMon*)obj)->::R3BNeulandDigiMon::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BNeulandDigiMon

//______________________________________________________________________________
void R3BNeulandMCMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMCMon.

   FairTask::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMCMon(void *p) {
      return  p ? new(p) ::R3BNeulandMCMon : new ::R3BNeulandMCMon;
   }
   static void *newArray_R3BNeulandMCMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMCMon[nElements] : new ::R3BNeulandMCMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMCMon(void *p) {
      delete ((::R3BNeulandMCMon*)p);
   }
   static void deleteArray_R3BNeulandMCMon(void *p) {
      delete [] ((::R3BNeulandMCMon*)p);
   }
   static void destruct_R3BNeulandMCMon(void *p) {
      typedef ::R3BNeulandMCMon current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BNeulandMCMon(TBuffer &buf, void *obj) {
      ((::R3BNeulandMCMon*)obj)->::R3BNeulandMCMon::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BNeulandMCMon

//______________________________________________________________________________
void R3BNeulandVisualizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandVisualizer.

   ::Error("R3BNeulandVisualizer::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BNeulandVisualizer(void *p) {
      delete ((::R3BNeulandVisualizer*)p);
   }
   static void deleteArray_R3BNeulandVisualizer(void *p) {
      delete [] ((::R3BNeulandVisualizer*)p);
   }
   static void destruct_R3BNeulandVisualizer(void *p) {
      typedef ::R3BNeulandVisualizer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BNeulandVisualizer(TBuffer &buf, void *obj) {
      ((::R3BNeulandVisualizer*)obj)->::R3BNeulandVisualizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BNeulandVisualizer

//______________________________________________________________________________
void R3BNeulandDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandDigitizer(void *p) {
      return  p ? new(p) ::R3BNeulandDigitizer : new ::R3BNeulandDigitizer;
   }
   static void *newArray_R3BNeulandDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandDigitizer[nElements] : new ::R3BNeulandDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandDigitizer(void *p) {
      delete ((::R3BNeulandDigitizer*)p);
   }
   static void deleteArray_R3BNeulandDigitizer(void *p) {
      delete [] ((::R3BNeulandDigitizer*)p);
   }
   static void destruct_R3BNeulandDigitizer(void *p) {
      typedef ::R3BNeulandDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandDigitizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLDigitizingEngine(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Neuland::DigitizingEngine : new ::Neuland::DigitizingEngine;
   }
   static void *newArray_NeulandcLcLDigitizingEngine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::Neuland::DigitizingEngine[nElements] : new ::Neuland::DigitizingEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingEngine(void *p) {
      delete ((::Neuland::DigitizingEngine*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingEngine(void *p) {
      delete [] ((::Neuland::DigitizingEngine*)p);
   }
   static void destruct_NeulandcLcLDigitizingEngine(void *p) {
      typedef ::Neuland::DigitizingEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::DigitizingEngine

namespace ROOT {
   static TClass *maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_Dictionary();
   static void maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_TClassManip(TClass*);
   static void *new_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p = 0);
   static void *newArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(Long_t size, void *p);
   static void delete_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p);
   static void deleteArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p);
   static void destruct_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,Neuland::DigitizingEngine::Paddle>*)
   {
      map<int,Neuland::DigitizingEngine::Paddle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,Neuland::DigitizingEngine::Paddle>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,Neuland::DigitizingEngine::Paddle>", -2, "map", 96,
                  typeid(map<int,Neuland::DigitizingEngine::Paddle>), DefineBehavior(ptr, ptr),
                  &maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,Neuland::DigitizingEngine::Paddle>) );
      instance.SetNew(&new_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR);
      instance.SetNewArray(&newArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR);
      instance.SetDelete(&delete_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR);
      instance.SetDeleteArray(&deleteArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR);
      instance.SetDestructor(&destruct_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,Neuland::DigitizingEngine::Paddle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,Neuland::DigitizingEngine::Paddle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,Neuland::DigitizingEngine::Paddle>*)0x0)->GetClass();
      maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,Neuland::DigitizingEngine::Paddle> : new map<int,Neuland::DigitizingEngine::Paddle>;
   }
   static void *newArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,Neuland::DigitizingEngine::Paddle>[nElements] : new map<int,Neuland::DigitizingEngine::Paddle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p) {
      delete ((map<int,Neuland::DigitizingEngine::Paddle>*)p);
   }
   static void deleteArray_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p) {
      delete [] ((map<int,Neuland::DigitizingEngine::Paddle>*)p);
   }
   static void destruct_maplEintcONeulandcLcLDigitizingEnginecLcLPaddlegR(void *p) {
      typedef map<int,Neuland::DigitizingEngine::Paddle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,Neuland::DigitizingEngine::Paddle>

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/neuland/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/neuland/digitizing",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/neuland/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeuland;
class R3BNeulandDigiMon;
class R3BNeulandMCMon;
class R3BNeulandVisualizer;
class R3BNeulandDigitizer;
namespace Neuland{class __attribute__((annotate("$clingAutoload$DigitizingEngine.h")))  DigitizingEngine;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BNEULAND_H
#define R3BNEULAND_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

#include <string>
#include <memory>

class FairVolume;
class TClonesArray;

/**
 * NeuLAND detector simulation class
 * @author Jan Mayer
 * @since 12.01.2016
 * For each simulated event, TClonesArrays are filled:
 * - NeulandPoints (R3BLandPoint), each representing energy deposition and light yield of a track in a paddle
 * - NeulandPrimaryNeutronInteractionPoints (FairMCPoint), each representing the first interaction points of
 *   primary neutrons.
 * Suitable geometry files require proper naming of the active volume (see CheckIfSensitive) and copy numbers.
 */

class R3BNeuland : public R3BDetector {
public:
    /** Default constructor */
    R3BNeuland();

    /** Standard constructor.
     *@param name    detector name
     *@param active  sensitivity flag
     */
    R3BNeuland(const char *name, Bool_t active);

    /** Default Destructor */
    //virtual ~R3BNeuland() = default;
    virtual ~R3BNeuland() {};

    virtual void Initialize(); // override;

    virtual Bool_t ProcessHits(FairVolume * = nullptr); // override;

    virtual void EndOfEvent(); // override;

    virtual void Register(); // override;

    virtual TClonesArray *GetCollection(Int_t iColl) const; // override;

    virtual void Print(Option_t * = "") const; // override;

    virtual void Reset(); // override;

    virtual void ConstructGeometry(); // override;

    virtual void PostTrack(); // override;

    virtual Bool_t CheckIfSensitive(std::string name); // override;

    /** May not be copy constructed */
    //R3BNeuland(const R3BNeuland &) = delete;
    //R3BNeuland &operator=(const R3BNeuland &) = delete;

private:
    //std::unique_ptr<TClonesArray> fNeulandPoints;
    TClonesArray* fNeulandPoints;
    //std::unique_ptr<TClonesArray> fNeulandPrimaryNeutronInteractionPoints;
    TClonesArray* fNeulandPrimaryNeutronInteractionPoints;

    /** Track information to be stored until the track leaves the active volume. */
    // TODO: Just fill an existing R3BLandPoint in the TClonesArray or
    //       Use an R3BLandPoint as Member Variable to move construct into TClonesarray?
    Int_t fTrackID;
    Int_t fPaddleID;
    TLorentzVector fPosIn, fPosOut;
    TLorentzVector fMomIn, fMomOut;
    Double_t fTime;
    Double_t fLength;
    Double_t fELoss;
    Double_t fLightYield;
    Bool_t fLastHitDone;

    void ResetValues();

    void WriteParameterFile();

    /** ROOT ClassDef
     * ClassDefOverride to avoid inconsistent-missing-override warnings
     * ClassVersionID = 0, this class should not be read/written (no IO necessary)
     */
    //ClassDefOverride(R3BNeuland, 0);
    ClassDef(R3BNeuland, 0);
};

#endif //R3BNEULAND_H
/** Neuland Monte Carlo Monitor
 * @author Jan Mayer
 * @since  07.07.2015
 *
 *  Input:  Monte Carlo Tracks "MCTrack".
 *  Output: Several histogramms:
 *          - Energy of primary neutrons
 *          - Number of particles by PDG code created by the first neutron interaction
 *          - Energy of non-neutron tracks in kLAND created by primary neutron interaction(s), by PID
 *          - Energy of neutron tracks created by primary neutron interaction
 *          - Total energy of non-neutron tracks in kLAND created by primary neutron interaction(s)
 *          - Total energy of non-neutron tracks in kLAND created by primary neutron interaction(s), by PID
 *          - IDs of tracks with a primary mother
 *          - Distribution of track mother IDs
 */

#ifndef R3BNEULANDMCMON_H
#define R3BNEULANDMCMON_H 1

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BLandPoint.h"
#include "TClonesArray.h"
#include <map>

class TH1D;
class TH3D;

class R3BNeulandMCMon : public FairTask {
public:
    R3BNeulandMCMon(const Option_t *option = "");
    ~R3BNeulandMCMon();

    InitStatus Init();
    void Exec(Option_t *option);
    void Finish();

private:
    Bool_t fIs3DTrackEnabled;

    TClonesArray *fMCTracks;
    TClonesArray *fLandPoints;
    TH1D *fhPDG;
    TH1D *fhEPrimarys;
    TH1D *fhEPrimaryNeutrons;
    TH1D *fhEtot;
    TH1D *fhEtotPrim;
    TH1D *fhESecondaryNeutrons;
    TH1D *fhMotherIDs;
    TH1D *fhPrimaryDaughterIDs;
    std::map<Int_t, TH1D *> fhmEPdg;
    std::map<Int_t, TH1D *> fhmEtotPdg;
    std::map<Int_t, TH1D *> fhmEtotPdgRel;
    TH3D *fh3;

    // TODO: Thats not the business of this class, should be in R3BMCTrack
    // Note: Reference to the pointer to R3BMCTrack so it can be changed within the function
    inline Bool_t GetMotherTrack(const Int_t i, R3BMCTrack *&motherTrack)
    {
        if (i < fMCTracks->GetEntries() && i >= 0) {
            motherTrack = (R3BMCTrack *)fMCTracks->At(i);
            return true;
        }
        return false;
    }

    inline Bool_t IsPrimaryNeutron(const R3BMCTrack *mcTrack)
    {
        if (mcTrack->GetPdgCode() == 2112 && mcTrack->GetMotherId() == -1) {
            return true;
        }
        return false;
    }

    inline Bool_t IsMotherPrimaryNeutron(const R3BMCTrack *mcTrack)
    {
        R3BMCTrack *motherTrack;
        if (GetMotherTrack(mcTrack->GetMotherId(), motherTrack) && IsPrimaryNeutron(motherTrack)) {
            return true;
        }
        return false;
    }

    inline Double_t GetKineticEnergy(const R3BMCTrack *mcTrack)
    {
        return (mcTrack->GetEnergy() - mcTrack->GetMass()) * 1000.;
    }


    ClassDef(R3BNeulandMCMon, 0)
};


#endif //R3BNEULANDMCMON_H
#ifndef R3BNEULANDDIGIMON_H
#define R3BNEULANDDIGIMON_H 1

/** Neuland Digi Monitor
 * @author Jan Mayer
 * @since  10.06.2015
 *
 *  Input:  Digis. Should work both on Digis from Monte Carlo simulations
 *          as well as experimental data on digi level.
 *  Output: Soon: Vairous diagrams.
 *          Currently: A 3D scatterplot for each event.
 */

#include "FairTask.h"

class TClonesArray;
class TH1D;
class TH2D;
class TH3D;

class R3BNeulandDigiMon : public FairTask {
public:
    R3BNeulandDigiMon(const Option_t *option = "");
    ~R3BNeulandDigiMon();

    InitStatus Init();
    void Exec(Option_t *option);
    void Finish();

private:
    TClonesArray *fDigis;

    Bool_t fIs3DTrackEnabled;
    TH3D *fh3;

    TH1D *hDepth;
    TH1D *hForemostEnergy;
    TH1D *hSternmostEnergy;
    TH2D *hDepthVSForemostEnergy;
    TH2D *hDepthVSSternmostEnergy;
    TH1D *hEtot;
    TH2D *hDepthVSEtot;
    TH2D *hPosVSEnergy;

    ClassDef(R3BNeulandDigiMon, 0);
};


#endif //R3BNEULANDDIGIMON_H
#ifndef R3BNEULANDVISUALIZER_H
#define R3BNEULANDVISUALIZER_H 1

#include "TFile.h"
#include "TTree.h"
#include "TH3D.h"
#include "TCanvas.h"

class R3BNeulandVisualizer {
public:
    R3BNeulandVisualizer(const TString &input_file, const TString &what);
    virtual ~R3BNeulandVisualizer();

    inline void ShowEvent(const UInt_t i)
    {
        fIndex = i;
        Visualize();
    }

    inline void ShowNext()
    {
        fIndex++;
        Visualize();
    }

protected:
    void Visualize();

private:
    TFile *fFile;
    TTree *fTree;
    TH3D *fh3;
    TCanvas *fCanvas;
    UInt_t fIndex;

    ClassDef(R3BNeulandVisualizer, 0);
};

#endif //R3BNEULANDVISUALIZER_H
#ifndef _R3B_NEULAND_DIGITIZER_H_
#define _R3B_NEULAND_DIGITIZER_H_ 1

#include "FairTask.h"

#include "R3BLandPoint.h"
#include "R3BLandDigiPar.h"
#include "R3BLandDigi.h"

#include "DigitizingEngine.h"

class TClonesArray;
class TH1F;


class R3BNeulandDigitizer : public FairTask {

public:
    R3BNeulandDigitizer();
    ~R3BNeulandDigitizer();

    virtual InitStatus Init();
    virtual void Exec(Option_t *);
    virtual void Finish();
    virtual void Reset();

protected:
    TClonesArray *fLandPoints;
    TClonesArray *fLandDigi;

    R3BLandDigiPar *fLandDigiPar;
    Double_t fPlength;

    Neuland::DigitizingEngine *fDigitizingEngine;

    TH1F *hPMl;
    TH1F *hPMr;
    TH1F *hMultOne;
    TH1F *hMultTwo;
    TH1F *hRLTimeToTrig;

    Int_t npaddles;
    Int_t nplanes;
    Int_t paddle_per_plane;

private:
    virtual void SetParContainers();

    ClassDef(R3BNeulandDigitizer, 1)
};

#endif //_R3B_NEULAND_DIGITIZER_H_
#ifndef _NEULAND_DIGITIZING_ENGINE_H_
#define _NEULAND_DIGITIZING_ENGINE_H_

/* Neuland Digitizing Engine
 * @author: Jan Mayer
 *
 * The Neuland Digitizing Engine (DE) handles the detector physics and data acquisition
 * part of the conversion from raw deposited energy (that has already been converted to
 * light), to experiment-like detector hits.
 *
 * Note: This class does not depend on any R3BRoot code. The in- and output, that is the
 * the actual conversion from `LandPoints` to `LandDigis`, is handled by tasks, e.g. by
 * the R3BNeulandDigitizer.
 *
 *
 * All scintillator bars in the NeuLAND detector are equipped a photomultiplier (PMT) on
 * the left and right side (leftPMT, rightPMT), forming a Paddle. The DE handles these
 * paddles independently by id, without knowledge about physical position or orientation.
 *
 * DigitizingEngine
 *  └ map<id,paddle> paddles
 *
 * Paddle
 *  ├ PMT leftPMT
 *  └ PMT rightPMT
 *
 *
 * Each light emission created by deposition of energy is transported to the PMT and arrives
 * at a specific time and with a specific amplitude (PMTHit). Based on these PMTHits, the
 * PMT response (HasFired, TDC, QDC, Energy) is calculated based on a plethora of "variable"
 * values (e.g. threshold) and material "constants" (e.g. speed of light), see cxx file.
 *
 * PMT
 *  └ vector<PMTHit> hits;
 *
 * PMTHit
 *  ├ time
 *  └ light
 *
 */

#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <cmath>

#include "TRandom3.h"

#include "Validated.h"

namespace Neuland {

class DigitizingEngine {

protected:
    static const Double_t fSaturationCoefficient;
    static const Double_t fcMedium;
    static const Double_t fAttenuation;
    static const Double_t fIntegrationTime;
    static const Double_t fLambda;
    static const Double_t fThresh;
    static const Double_t fTimeRes;
    static Double_t fPaddleHalfLength;
    static TRandom3 *fRnd;

public:
    struct PMTHit {
        Double_t time;
        Double_t light;

        bool operator < (const PMTHit &rhs) const
        {
            return (time < rhs.time);
        }

        /* Calculate the time of arrival and the amount of light that arrives at
         * the PMT based on the deposition in the paddle */
        PMTHit(const Double_t &mcTime, const Double_t &mcLight, const Double_t &dist)
        {
            time = mcTime + (fPaddleHalfLength + dist) / fcMedium;
            light = mcLight * exp(-fAttenuation * (fPaddleHalfLength + dist));
        }
    };

    class PMT {
    private:
        std::vector<PMTHit> hits;
        // NOTE: Some expensive calculations and random distributions are cached
        // so they do not need to be recomputed every time a Getter is called
        mutable Validated<std::vector<PMTHit>::const_iterator> cachedFirstHitOverThresh;
        mutable Validated<Double_t> cachedQDC;
        mutable Validated<Double_t> cachedTDC;
        mutable Validated<Double_t> cachedEnergy;

    public:
        void AddHit(const Double_t &mcTime, const Double_t &mcLight, const Double_t &dist)
        {
            hits.push_back(PMTHit(mcTime, mcLight, dist));
            // NOTE: Sorting after every hit may not be efficient, but this way
            // FindThresholdExeeding hit can be made const
            std::sort(hits.begin(), hits.end());
            cachedFirstHitOverThresh.invalidate();
        }

        bool HasFired() const;
        Double_t GetQDC() const;
        Double_t GetTDC() const;
        Double_t GetEnergy() const;
        const std::vector<PMTHit> &GetHits() const
        {
            return hits;
        }

    private:
        std::vector<PMTHit>::const_iterator FindThresholdExceedingHit() const;
        Double_t BuildQDC() const;
        Double_t BuildTDC() const;
        Double_t BuildEnergy() const;
    };

    struct Paddle {
        PMT leftPMT;
        PMT rightPMT;

        Double_t GetPaddleEnergy() const
        {
            return sqrt(leftPMT.GetEnergy() * rightPMT.GetEnergy());
        }

        Double_t GetPaddleTime() const
        {
            return (leftPMT.GetTDC() + rightPMT.GetTDC()) / 2. - fPaddleHalfLength / fcMedium;
        }

        Double_t GetPosition() const
        {
            return (rightPMT.GetTDC() - leftPMT.GetTDC()) / 2.*fcMedium;
        }

        bool HasFired() const
        {
            return (leftPMT.HasFired() && rightPMT.HasFired());
        }


    };

public:
    std::map<Int_t, Paddle> paddles;

    DigitizingEngine(){};// = default;
    ~DigitizingEngine(){};// = default;


    void SetPaddleHalfLength(const Double_t &v)
    {
        fPaddleHalfLength = v;
    }


    void Clear()
    {
        paddles.clear();
    }


    Double_t GetTriggerTime() const;


    void DepositLight(const Int_t &paddle_id, const Double_t &time, const Double_t &light, const Double_t &dist)
    {
        if (fPaddleHalfLength == 0.) {
            throw std::invalid_argument("Paddle Legth has not been set");
        }
        paddles[paddle_id].leftPMT.AddHit(time, light, -1. * dist);
        paddles[paddle_id].rightPMT.AddHit(time, light, dist);
    }

};

}; //namespace

#endif //_NEULAND_DIGITIZING_ENGINE_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Neuland::DigitizingEngine", payloadCode, "@",
"R3BNeuland", payloadCode, "@",
"R3BNeulandDigiMon", payloadCode, "@",
"R3BNeulandDigitizer", payloadCode, "@",
"R3BNeulandMCMon", payloadCode, "@",
"R3BNeulandVisualizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandDict() {
  TriggerDictionaryInitialization_G__R3BNeulandDict_Impl();
}
