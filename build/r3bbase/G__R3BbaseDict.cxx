// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIr3bbasedIG__R3BbaseDict

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
#include "R3BModule.h"
#include "R3BDetector.h"
#include "R3BEventHeader.h"
#include "R3BEventHeaderUnpack.h"
#include "R3BTimeStampUnpack.h"
#include "R3BLmdSource.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BModule(void *p = 0);
   static void *newArray_R3BModule(Long_t size, void *p);
   static void delete_R3BModule(void *p);
   static void deleteArray_R3BModule(void *p);
   static void destruct_R3BModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BModule*)
   {
      ::R3BModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BModule", ::R3BModule::Class_Version(), "invalid", 17,
                  typeid(::R3BModule), DefineBehavior(ptr, ptr),
                  &::R3BModule::Dictionary, isa_proxy, 4,
                  sizeof(::R3BModule) );
      instance.SetNew(&new_R3BModule);
      instance.SetNewArray(&newArray_R3BModule);
      instance.SetDelete(&delete_R3BModule);
      instance.SetDeleteArray(&deleteArray_R3BModule);
      instance.SetDestructor(&destruct_R3BModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BModule*)
   {
      return GenerateInitInstanceLocal((::R3BModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BModule*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BDetector(void *p);
   static void deleteArray_R3BDetector(void *p);
   static void destruct_R3BDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDetector*)
   {
      ::R3BDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDetector", ::R3BDetector::Class_Version(), "invalid", 72,
                  typeid(::R3BDetector), DefineBehavior(ptr, ptr),
                  &::R3BDetector::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDetector) );
      instance.SetDelete(&delete_R3BDetector);
      instance.SetDeleteArray(&deleteArray_R3BDetector);
      instance.SetDestructor(&destruct_R3BDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDetector*)
   {
      return GenerateInitInstanceLocal((::R3BDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BEventHeader(void *p = 0);
   static void *newArray_R3BEventHeader(Long_t size, void *p);
   static void delete_R3BEventHeader(void *p);
   static void deleteArray_R3BEventHeader(void *p);
   static void destruct_R3BEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventHeader*)
   {
      ::R3BEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventHeader", ::R3BEventHeader::Class_Version(), "invalid", 144,
                  typeid(::R3BEventHeader), DefineBehavior(ptr, ptr),
                  &::R3BEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventHeader) );
      instance.SetNew(&new_R3BEventHeader);
      instance.SetNewArray(&newArray_R3BEventHeader);
      instance.SetDelete(&delete_R3BEventHeader);
      instance.SetDeleteArray(&deleteArray_R3BEventHeader);
      instance.SetDestructor(&destruct_R3BEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventHeader*)
   {
      return GenerateInitInstanceLocal((::R3BEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BEventHeaderUnpack(void *p = 0);
   static void *newArray_R3BEventHeaderUnpack(Long_t size, void *p);
   static void delete_R3BEventHeaderUnpack(void *p);
   static void deleteArray_R3BEventHeaderUnpack(void *p);
   static void destruct_R3BEventHeaderUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventHeaderUnpack*)
   {
      ::R3BEventHeaderUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventHeaderUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventHeaderUnpack", ::R3BEventHeaderUnpack::Class_Version(), "invalid", 192,
                  typeid(::R3BEventHeaderUnpack), DefineBehavior(ptr, ptr),
                  &::R3BEventHeaderUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventHeaderUnpack) );
      instance.SetNew(&new_R3BEventHeaderUnpack);
      instance.SetNewArray(&newArray_R3BEventHeaderUnpack);
      instance.SetDelete(&delete_R3BEventHeaderUnpack);
      instance.SetDeleteArray(&deleteArray_R3BEventHeaderUnpack);
      instance.SetDestructor(&destruct_R3BEventHeaderUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventHeaderUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BEventHeaderUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BEventHeaderUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BTimeStampUnpack(void *p);
   static void deleteArray_R3BTimeStampUnpack(void *p);
   static void destruct_R3BTimeStampUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTimeStampUnpack*)
   {
      ::R3BTimeStampUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTimeStampUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTimeStampUnpack", ::R3BTimeStampUnpack::Class_Version(), "invalid", 226,
                  typeid(::R3BTimeStampUnpack), DefineBehavior(ptr, ptr),
                  &::R3BTimeStampUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTimeStampUnpack) );
      instance.SetDelete(&delete_R3BTimeStampUnpack);
      instance.SetDeleteArray(&deleteArray_R3BTimeStampUnpack);
      instance.SetDestructor(&destruct_R3BTimeStampUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTimeStampUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BTimeStampUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTimeStampUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLmdSource(void *p = 0);
   static void *newArray_R3BLmdSource(Long_t size, void *p);
   static void delete_R3BLmdSource(void *p);
   static void deleteArray_R3BLmdSource(void *p);
   static void destruct_R3BLmdSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLmdSource*)
   {
      ::R3BLmdSource *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLmdSource >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLmdSource", ::R3BLmdSource::Class_Version(), "invalid", 283,
                  typeid(::R3BLmdSource), DefineBehavior(ptr, ptr),
                  &::R3BLmdSource::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLmdSource) );
      instance.SetNew(&new_R3BLmdSource);
      instance.SetNewArray(&newArray_R3BLmdSource);
      instance.SetDelete(&delete_R3BLmdSource);
      instance.SetDeleteArray(&deleteArray_R3BLmdSource);
      instance.SetDestructor(&destruct_R3BLmdSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLmdSource*)
   {
      return GenerateInitInstanceLocal((::R3BLmdSource*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLmdSource*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BModule::Class_Name()
{
   return "R3BModule";
}

//______________________________________________________________________________
const char *R3BModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDetector::Class_Name()
{
   return "R3BDetector";
}

//______________________________________________________________________________
const char *R3BDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventHeader::Class_Name()
{
   return "R3BEventHeader";
}

//______________________________________________________________________________
const char *R3BEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BEventHeaderUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventHeaderUnpack::Class_Name()
{
   return "R3BEventHeaderUnpack";
}

//______________________________________________________________________________
const char *R3BEventHeaderUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventHeaderUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventHeaderUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventHeaderUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTimeStampUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTimeStampUnpack::Class_Name()
{
   return "R3BTimeStampUnpack";
}

//______________________________________________________________________________
const char *R3BTimeStampUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTimeStampUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTimeStampUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTimeStampUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTimeStampUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTimeStampUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTimeStampUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTimeStampUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLmdSource::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLmdSource::Class_Name()
{
   return "R3BLmdSource";
}

//______________________________________________________________________________
const char *R3BLmdSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLmdSource*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLmdSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLmdSource*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLmdSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLmdSource*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLmdSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLmdSource*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BModule(void *p) {
      return  p ? new(p) ::R3BModule : new ::R3BModule;
   }
   static void *newArray_R3BModule(Long_t nElements, void *p) {
      return p ? new(p) ::R3BModule[nElements] : new ::R3BModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BModule(void *p) {
      delete ((::R3BModule*)p);
   }
   static void deleteArray_R3BModule(void *p) {
      delete [] ((::R3BModule*)p);
   }
   static void destruct_R3BModule(void *p) {
      typedef ::R3BModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BModule

//______________________________________________________________________________
void R3BDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BDetector(void *p) {
      delete ((::R3BDetector*)p);
   }
   static void deleteArray_R3BDetector(void *p) {
      delete [] ((::R3BDetector*)p);
   }
   static void destruct_R3BDetector(void *p) {
      typedef ::R3BDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDetector

//______________________________________________________________________________
void R3BEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BEventHeader(void *p) {
      return  p ? new(p) ::R3BEventHeader : new ::R3BEventHeader;
   }
   static void *newArray_R3BEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::R3BEventHeader[nElements] : new ::R3BEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BEventHeader(void *p) {
      delete ((::R3BEventHeader*)p);
   }
   static void deleteArray_R3BEventHeader(void *p) {
      delete [] ((::R3BEventHeader*)p);
   }
   static void destruct_R3BEventHeader(void *p) {
      typedef ::R3BEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventHeader

//______________________________________________________________________________
void R3BEventHeaderUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventHeaderUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventHeaderUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventHeaderUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BEventHeaderUnpack(void *p) {
      return  p ? new(p) ::R3BEventHeaderUnpack : new ::R3BEventHeaderUnpack;
   }
   static void *newArray_R3BEventHeaderUnpack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BEventHeaderUnpack[nElements] : new ::R3BEventHeaderUnpack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BEventHeaderUnpack(void *p) {
      delete ((::R3BEventHeaderUnpack*)p);
   }
   static void deleteArray_R3BEventHeaderUnpack(void *p) {
      delete [] ((::R3BEventHeaderUnpack*)p);
   }
   static void destruct_R3BEventHeaderUnpack(void *p) {
      typedef ::R3BEventHeaderUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventHeaderUnpack

//______________________________________________________________________________
void R3BTimeStampUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTimeStampUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTimeStampUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTimeStampUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BTimeStampUnpack(void *p) {
      delete ((::R3BTimeStampUnpack*)p);
   }
   static void deleteArray_R3BTimeStampUnpack(void *p) {
      delete [] ((::R3BTimeStampUnpack*)p);
   }
   static void destruct_R3BTimeStampUnpack(void *p) {
      typedef ::R3BTimeStampUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTimeStampUnpack

//______________________________________________________________________________
void R3BLmdSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLmdSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLmdSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLmdSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLmdSource(void *p) {
      return  p ? new(p) ::R3BLmdSource : new ::R3BLmdSource;
   }
   static void *newArray_R3BLmdSource(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLmdSource[nElements] : new ::R3BLmdSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLmdSource(void *p) {
      delete ((::R3BLmdSource*)p);
   }
   static void deleteArray_R3BLmdSource(void *p) {
      delete [] ((::R3BLmdSource*)p);
   }
   static void destruct_R3BLmdSource(void *p) {
      typedef ::R3BLmdSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLmdSource

namespace {
  void TriggerDictionaryInitialization_G__R3BbaseDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/neulandData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bbase/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BModule;
class R3BDetector;
class R3BEventHeader;
class R3BEventHeaderUnpack;
class R3BTimeStampUnpack;
class R3BLmdSource;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BMODULE_H
#define R3BMODULE_H 1


#include "FairModule.h"

#include "TObject.h"
#include "TVector3.h"
#include "TGeoMatrix.h"


class R3BModule : public FairModule
{
 public:
  /** Default constructor **/
  R3BModule();
  
  /** Constructor with arguments
   **/
  R3BModule(const char* Name, const char* title, Bool_t Active=kFALSE);
  
  /** Destructor **/
  virtual ~R3BModule();
  
  /** Transformation **/
  void SetRotAnglesEuler(Double_t phi, Double_t theta, Double_t psi);
  void SetRotAnglesXYZ(Double_t xx, Double_t yy, Double_t zz);
  void SetTranslation(Double_t tx, Double_t ty, Double_t tz);
  
  TGeoRotation* GetGlobalRot(){ return fGlobalRot;}
  TGeoTranslation* GetGlobalTrans(){ return fGlobalTrans;}
  TGeoCombiTrans* GetGlobalPosition(TGeoCombiTrans *fRef=NULL);
  
 private:
  R3BModule(const R3BModule&);
  R3BModule& operator=(const R3BModule&) { return *this; }
  
 protected:
  TGeoRotation *fGlobalRot;
  TGeoTranslation *fGlobalTrans;
  TGeoCombiTrans *fRefRot;
  
  Double_t fThetaX;
  Double_t fThetaY;
  Double_t fThetaZ;
  
  Bool_t fLabTrans;
  Bool_t fLocalTrans;
  
  Double_t fX,fY,fZ;
  Double_t fPhi,fTheta,fPsi;
  
  ClassDef(R3BModule,1)
};

#endif
#ifndef R3BDETECTOR_H
#define R3BDETECTOR_H 1

#include "FairDetector.h"

#include "TObject.h"
#include "TVector3.h"
#include "TGeoMatrix.h"

class R3BDetector : public FairDetector
{
  public:
    /** Default constructor **/
    R3BDetector();

    /** Constructor with arguments
     **/
    R3BDetector(const char* Name, Bool_t Active, Int_t detId = 0);

    /** Destructor **/
    virtual ~R3BDetector();

    /** Transformation **/
    void SetRotAnglesEuler(Double_t phi, Double_t theta, Double_t psi);
    void SetRotAnglesXYZ(Double_t xx, Double_t yy, Double_t zz);
    void SetTranslation(Double_t tx, Double_t ty, Double_t tz);

    TGeoRotation* GetGlobalRot()
    {
        return fGlobalRot;
    }
    TGeoTranslation* GetGlobalTrans()
    {
        return fGlobalTrans;
    }
    TGeoCombiTrans* GetGlobalPosition(TGeoCombiTrans* fRef = NULL);

    inline void SetEnergyCut(Double_t cutE)
    {
        fCutE = cutE;
    }

  private:
    R3BDetector(const R3BDetector&);
    R3BDetector& operator=(const R3BDetector&)
    {
        return *this;
    }

  protected:
    TGeoRotation* fGlobalRot;
    TGeoTranslation* fGlobalTrans;
    TGeoCombiTrans* fRefRot;

    Double_t fThetaX;
    Double_t fThetaY;
    Double_t fThetaZ;

    Bool_t fLabTrans;
    Bool_t fLocalTrans;

    Double_t fX, fY, fZ;
    Double_t fPhi, fTheta, fPsi;

    Double_t fCutE;

    ClassDef(R3BDetector, 1)
};

#endif
// ----------------------------------------------------------------------
// -----                          R3BEventHeader                    -----
// -----                  Created 02-06-2014 by D. Kresan           -----
// ----------------------------------------------------------------------

#ifndef R3BEVENTHEADER
#define R3BEVENTHEADER

#include "FairEventHeader.h"

class R3BEventHeader : public FairEventHeader
{
  public:
    R3BEventHeader();
    virtual ~R3BEventHeader();

    inline void SetTrigger(const Int_t& trigger)
    {
        fTrigger = trigger;
    }
    
    inline void SetTimeStamp(const ULong_t& timeStamp)
    {
        fTimeStamp = timeStamp;
    }

    inline const Int_t& GetTrigger() const
    {
        return fTrigger;
    }
    
    inline const ULong_t& GetTimeStamp() const
    {
        return fTimeStamp;
    }

  private:
    Int_t fTrigger;
    ULong_t fTimeStamp;

  public:
    ClassDef(R3BEventHeader, 2)
};

#endif
// ----------------------------------------------------------------------
// -----                       R3BEventHeaderUnpack                 -----
// -----                  Created 02-06-2014 by D. Kresan           -----
// ----------------------------------------------------------------------

#ifndef R3BEVENTHEADERUNPACK
#define R3BEVENTHEADERUNPACK

#include "FairUnpack.h"

class R3BEventHeader;

class R3BEventHeaderUnpack : public FairUnpack
{
  public:
    R3BEventHeaderUnpack();
    virtual ~R3BEventHeaderUnpack();

    virtual Bool_t Init();
    virtual Bool_t DoUnpack(Int_t* data, Int_t size);
    virtual void Reset();

  private:
    R3BEventHeader* fHeader;
    
  protected:
    virtual void Register();

  public:
    ClassDef(R3BEventHeaderUnpack, 1)
};

#endif
// ----------------------------------------------------------------------
// -----                         R3BTimeStampUnpack                 -----
// -----                  Created 26-02-2015 by D. Kresan           -----
// ----------------------------------------------------------------------

#ifndef R3BTIMESTAMPUNPACK
#define R3BTIMESTAMPUNPACK

#include "FairUnpack.h"

class R3BEventHeader;

class R3BTimeStampUnpack : public FairUnpack
{
  public:
    R3BTimeStampUnpack(Short_t type, Short_t subType, Short_t procId, Short_t subCrate, Short_t control);
    virtual ~R3BTimeStampUnpack();

    virtual Bool_t Init();
    virtual Bool_t DoUnpack(Int_t* data, Int_t size);
    virtual void Reset();
    
  protected:
    virtual void Register() {}

  private:
    R3BEventHeader* fHeader;

  public:
    ClassDef(R3BTimeStampUnpack, 1)
};

#endif
/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             * 
 *         GNU Lesser General Public Licence version 3 (LGPL) version 3,        *  
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                            R3BLmdSource                           -----
// -----                    Created 27.02.2015 by D.Kresan                 -----
// -----------------------------------------------------------------------------

#ifndef R3BLmdSource_H
#define R3BLmdSource_H

extern "C"
{
#include "f_evt.h"
#include "s_filhe_swap.h"
#include "s_bufhe_swap.h"
}

#include "TString.h"

#include "FairMbsSource.h"


class TList;
class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;


class R3BLmdSource : public FairMbsSource
{
  public:
    R3BLmdSource();
    R3BLmdSource(const R3BLmdSource& source);
    virtual ~R3BLmdSource();

    void AddFile(TString fileName);
    inline const Int_t GetCurrentFile() const { return fCurrentFile; }
    inline const TList* GetFileNames() const { return fFileNames; }

    virtual Bool_t Init();
    virtual Int_t ReadEvent(UInt_t=0);
    virtual void Close();
    
    inline void SetTimeStampUnit(Int_t unit) { fTSUnit = unit; }
    inline void SetMaxDelay(Int_t delayLower, Int_t delayUpper)
    { fDelayCutLower = delayLower; fDelayCutUpper = delayUpper; }
    
  private:
    Int_t ReadData();
    Int_t ReadMbsEvent();
    
    void CopyNeuLandToBuf();
    void CopyNeuLandToOutput();
    void ClearBuf();
    
    R3BEventHeader *fEventHeader;
    TClonesArray *fNeuLandHits;
    TClonesArray *fCalifaHits;
    
    R3BEventHeader *fBufHeader;
    TClonesArray *fBufNeuLand;
    
    Int_t fTSUnit;
    Int_t fDelayCutLower;
    Int_t fDelayCutUpper;
    
    TH1F *fhDelay;

  protected:
    Bool_t OpenNextFile(TString fileName);

    Int_t fCurrentFile;
	Int_t fNEvent;
	Int_t fCurrentEvent;
    TList* fFileNames;
    s_evt_channel* fxInputChannel;
    s_ve10_1* fxEvent;
    s_bufhe* fxBuffer;
    Int_t* fxEventData;
    s_ves10_1* fxSubEvent;
	s_filhe* fxInfoHeader;

    ClassDef(R3BLmdSource, 0)
};


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BDetector", payloadCode, "@",
"R3BEventHeader", payloadCode, "@",
"R3BEventHeaderUnpack", payloadCode, "@",
"R3BLmdSource", payloadCode, "@",
"R3BModule", payloadCode, "@",
"R3BTimeStampUnpack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BbaseDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BbaseDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BbaseDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BbaseDict() {
  TriggerDictionaryInitialization_G__R3BbaseDict_Impl();
}
