// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIevtvisdIG__R3BEvtVisDict

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
#include "R3BEventManager.h"
#include "R3BEventManagerEditor.h"
#include "R3BCaloEventDisplay.h"
#include "R3BCaloHitEventDisplay.h"
#include "R3BMCTracks.h"
#include "R3BIonName.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BEventManager(void *p = 0);
   static void *newArray_R3BEventManager(Long_t size, void *p);
   static void delete_R3BEventManager(void *p);
   static void deleteArray_R3BEventManager(void *p);
   static void destruct_R3BEventManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventManager*)
   {
      ::R3BEventManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventManager", ::R3BEventManager::Class_Version(), "invalid", 14,
                  typeid(::R3BEventManager), DefineBehavior(ptr, ptr),
                  &::R3BEventManager::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventManager) );
      instance.SetNew(&new_R3BEventManager);
      instance.SetNewArray(&newArray_R3BEventManager);
      instance.SetDelete(&delete_R3BEventManager);
      instance.SetDeleteArray(&deleteArray_R3BEventManager);
      instance.SetDestructor(&destruct_R3BEventManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventManager*)
   {
      return GenerateInitInstanceLocal((::R3BEventManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BEventManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BEventManagerEditor(void *p = 0);
   static void *newArray_R3BEventManagerEditor(Long_t size, void *p);
   static void delete_R3BEventManagerEditor(void *p);
   static void deleteArray_R3BEventManagerEditor(void *p);
   static void destruct_R3BEventManagerEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventManagerEditor*)
   {
      ::R3BEventManagerEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventManagerEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventManagerEditor", ::R3BEventManagerEditor::Class_Version(), "invalid", 49,
                  typeid(::R3BEventManagerEditor), DefineBehavior(ptr, ptr),
                  &::R3BEventManagerEditor::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventManagerEditor) );
      instance.SetNew(&new_R3BEventManagerEditor);
      instance.SetNewArray(&newArray_R3BEventManagerEditor);
      instance.SetDelete(&delete_R3BEventManagerEditor);
      instance.SetDeleteArray(&deleteArray_R3BEventManagerEditor);
      instance.SetDestructor(&destruct_R3BEventManagerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventManagerEditor*)
   {
      return GenerateInitInstanceLocal((::R3BEventManagerEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BEventManagerEditor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMCTracks(void *p = 0);
   static void *newArray_R3BMCTracks(Long_t size, void *p);
   static void delete_R3BMCTracks(void *p);
   static void deleteArray_R3BMCTracks(void *p);
   static void destruct_R3BMCTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMCTracks*)
   {
      ::R3BMCTracks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMCTracks >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMCTracks", ::R3BMCTracks::Class_Version(), "invalid", 321,
                  typeid(::R3BMCTracks), DefineBehavior(ptr, ptr),
                  &::R3BMCTracks::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMCTracks) );
      instance.SetNew(&new_R3BMCTracks);
      instance.SetNewArray(&newArray_R3BMCTracks);
      instance.SetDelete(&delete_R3BMCTracks);
      instance.SetDeleteArray(&deleteArray_R3BMCTracks);
      instance.SetDestructor(&destruct_R3BMCTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMCTracks*)
   {
      return GenerateInitInstanceLocal((::R3BMCTracks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMCTracks*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloEventDisplay(void *p = 0);
   static void *newArray_R3BCaloEventDisplay(Long_t size, void *p);
   static void delete_R3BCaloEventDisplay(void *p);
   static void deleteArray_R3BCaloEventDisplay(void *p);
   static void destruct_R3BCaloEventDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloEventDisplay*)
   {
      ::R3BCaloEventDisplay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloEventDisplay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloEventDisplay", ::R3BCaloEventDisplay::Class_Version(), "invalid", 104,
                  typeid(::R3BCaloEventDisplay), DefineBehavior(ptr, ptr),
                  &::R3BCaloEventDisplay::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloEventDisplay) );
      instance.SetNew(&new_R3BCaloEventDisplay);
      instance.SetNewArray(&newArray_R3BCaloEventDisplay);
      instance.SetDelete(&delete_R3BCaloEventDisplay);
      instance.SetDeleteArray(&deleteArray_R3BCaloEventDisplay);
      instance.SetDestructor(&destruct_R3BCaloEventDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloEventDisplay*)
   {
      return GenerateInitInstanceLocal((::R3BCaloEventDisplay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloEventDisplay*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloHitEventDisplay(void *p = 0);
   static void *newArray_R3BCaloHitEventDisplay(Long_t size, void *p);
   static void delete_R3BCaloHitEventDisplay(void *p);
   static void deleteArray_R3BCaloHitEventDisplay(void *p);
   static void destruct_R3BCaloHitEventDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloHitEventDisplay*)
   {
      ::R3BCaloHitEventDisplay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloHitEventDisplay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloHitEventDisplay", ::R3BCaloHitEventDisplay::Class_Version(), "invalid", 228,
                  typeid(::R3BCaloHitEventDisplay), DefineBehavior(ptr, ptr),
                  &::R3BCaloHitEventDisplay::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloHitEventDisplay) );
      instance.SetNew(&new_R3BCaloHitEventDisplay);
      instance.SetNewArray(&newArray_R3BCaloHitEventDisplay);
      instance.SetDelete(&delete_R3BCaloHitEventDisplay);
      instance.SetDeleteArray(&deleteArray_R3BCaloHitEventDisplay);
      instance.SetDestructor(&destruct_R3BCaloHitEventDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloHitEventDisplay*)
   {
      return GenerateInitInstanceLocal((::R3BCaloHitEventDisplay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloHitEventDisplay*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BIonName(void *p = 0);
   static void *newArray_R3BIonName(Long_t size, void *p);
   static void delete_R3BIonName(void *p);
   static void deleteArray_R3BIonName(void *p);
   static void destruct_R3BIonName(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BIonName*)
   {
      ::R3BIonName *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BIonName >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BIonName", ::R3BIonName::Class_Version(), "invalid", 347,
                  typeid(::R3BIonName), DefineBehavior(ptr, ptr),
                  &::R3BIonName::Dictionary, isa_proxy, 4,
                  sizeof(::R3BIonName) );
      instance.SetNew(&new_R3BIonName);
      instance.SetNewArray(&newArray_R3BIonName);
      instance.SetDelete(&delete_R3BIonName);
      instance.SetDeleteArray(&deleteArray_R3BIonName);
      instance.SetDestructor(&destruct_R3BIonName);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BIonName*)
   {
      return GenerateInitInstanceLocal((::R3BIonName*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BIonName*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BEventManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventManager::Class_Name()
{
   return "R3BEventManager";
}

//______________________________________________________________________________
const char *R3BEventManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BEventManagerEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventManagerEditor::Class_Name()
{
   return "R3BEventManagerEditor";
}

//______________________________________________________________________________
const char *R3BEventManagerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManagerEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventManagerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManagerEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventManagerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManagerEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventManagerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventManagerEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMCTracks::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMCTracks::Class_Name()
{
   return "R3BMCTracks";
}

//______________________________________________________________________________
const char *R3BMCTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTracks*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMCTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTracks*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMCTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTracks*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMCTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTracks*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloEventDisplay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloEventDisplay::Class_Name()
{
   return "R3BCaloEventDisplay";
}

//______________________________________________________________________________
const char *R3BCaloEventDisplay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloEventDisplay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloEventDisplay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloEventDisplay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloEventDisplay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloEventDisplay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloEventDisplay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloEventDisplay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloHitEventDisplay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloHitEventDisplay::Class_Name()
{
   return "R3BCaloHitEventDisplay";
}

//______________________________________________________________________________
const char *R3BCaloHitEventDisplay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitEventDisplay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloHitEventDisplay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitEventDisplay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloHitEventDisplay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitEventDisplay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloHitEventDisplay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitEventDisplay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BIonName::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BIonName::Class_Name()
{
   return "R3BIonName";
}

//______________________________________________________________________________
const char *R3BIonName::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonName*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BIonName::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonName*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BIonName::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonName*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BIonName::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonName*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BEventManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BEventManager(void *p) {
      return  p ? new(p) ::R3BEventManager : new ::R3BEventManager;
   }
   static void *newArray_R3BEventManager(Long_t nElements, void *p) {
      return p ? new(p) ::R3BEventManager[nElements] : new ::R3BEventManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BEventManager(void *p) {
      delete ((::R3BEventManager*)p);
   }
   static void deleteArray_R3BEventManager(void *p) {
      delete [] ((::R3BEventManager*)p);
   }
   static void destruct_R3BEventManager(void *p) {
      typedef ::R3BEventManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventManager

//______________________________________________________________________________
void R3BEventManagerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventManagerEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventManagerEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventManagerEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BEventManagerEditor(void *p) {
      return  p ? new(p) ::R3BEventManagerEditor : new ::R3BEventManagerEditor;
   }
   static void *newArray_R3BEventManagerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::R3BEventManagerEditor[nElements] : new ::R3BEventManagerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BEventManagerEditor(void *p) {
      delete ((::R3BEventManagerEditor*)p);
   }
   static void deleteArray_R3BEventManagerEditor(void *p) {
      delete [] ((::R3BEventManagerEditor*)p);
   }
   static void destruct_R3BEventManagerEditor(void *p) {
      typedef ::R3BEventManagerEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventManagerEditor

//______________________________________________________________________________
void R3BMCTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMCTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMCTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMCTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMCTracks(void *p) {
      return  p ? new(p) ::R3BMCTracks : new ::R3BMCTracks;
   }
   static void *newArray_R3BMCTracks(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMCTracks[nElements] : new ::R3BMCTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMCTracks(void *p) {
      delete ((::R3BMCTracks*)p);
   }
   static void deleteArray_R3BMCTracks(void *p) {
      delete [] ((::R3BMCTracks*)p);
   }
   static void destruct_R3BMCTracks(void *p) {
      typedef ::R3BMCTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMCTracks

//______________________________________________________________________________
void R3BCaloEventDisplay::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloEventDisplay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloEventDisplay::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloEventDisplay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloEventDisplay(void *p) {
      return  p ? new(p) ::R3BCaloEventDisplay : new ::R3BCaloEventDisplay;
   }
   static void *newArray_R3BCaloEventDisplay(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloEventDisplay[nElements] : new ::R3BCaloEventDisplay[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloEventDisplay(void *p) {
      delete ((::R3BCaloEventDisplay*)p);
   }
   static void deleteArray_R3BCaloEventDisplay(void *p) {
      delete [] ((::R3BCaloEventDisplay*)p);
   }
   static void destruct_R3BCaloEventDisplay(void *p) {
      typedef ::R3BCaloEventDisplay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloEventDisplay

//______________________________________________________________________________
void R3BCaloHitEventDisplay::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloHitEventDisplay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloHitEventDisplay::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloHitEventDisplay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloHitEventDisplay(void *p) {
      return  p ? new(p) ::R3BCaloHitEventDisplay : new ::R3BCaloHitEventDisplay;
   }
   static void *newArray_R3BCaloHitEventDisplay(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloHitEventDisplay[nElements] : new ::R3BCaloHitEventDisplay[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloHitEventDisplay(void *p) {
      delete ((::R3BCaloHitEventDisplay*)p);
   }
   static void deleteArray_R3BCaloHitEventDisplay(void *p) {
      delete [] ((::R3BCaloHitEventDisplay*)p);
   }
   static void destruct_R3BCaloHitEventDisplay(void *p) {
      typedef ::R3BCaloHitEventDisplay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloHitEventDisplay

//______________________________________________________________________________
void R3BIonName::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BIonName.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BIonName::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BIonName::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BIonName(void *p) {
      return  p ? new(p) ::R3BIonName : new ::R3BIonName;
   }
   static void *newArray_R3BIonName(Long_t nElements, void *p) {
      return p ? new(p) ::R3BIonName[nElements] : new ::R3BIonName[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BIonName(void *p) {
      delete ((::R3BIonName*)p);
   }
   static void deleteArray_R3BIonName(void *p) {
      delete [] ((::R3BIonName*)p);
   }
   static void destruct_R3BIonName(void *p) {
      typedef ::R3BIonName current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BIonName

namespace {
  void TriggerDictionaryInitialization_G__R3BEvtVisDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/field",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/geane",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/cal",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/eventdisplay",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/evtvis",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/TGeant3",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/evtvis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BEventManager;
class __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) R3BEventManagerEditor;
class R3BMCTracks;
class R3BCaloEventDisplay;
class R3BCaloHitEventDisplay;
class R3BIonName;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

#ifndef R3BEVENTMANAGER_H
#define R3BEVENTMANAGER_H

#include "FairEventManager.h"

class R3BIonName;

class R3BEventManager : public FairEventManager
{
 public:
  static R3BEventManager *Instance();
  R3BEventManager();
  virtual ~R3BEventManager(){;}
  virtual void AddParticlesToPdgDataBase(Int_t pdgCode);
  virtual void SetScaleByEnergy(Bool_t scale) {fScaleByEnergy = scale;}
  virtual Bool_t IsScaleByEnergy() {return fScaleByEnergy;}

 protected:
  Bool_t fScaleByEnergy; //!

  R3BIonName *fIonName;

    
 private:
  static R3BEventManager*    fgRinstance; //!
  ClassDef(R3BEventManager,1);

};


#endif

#ifndef ROOT_R3BEVENTMANAGEREDITOR
#define ROOT_R3BEVENTMANAGEREDITOR

#include "TGedFrame.h"
class R3BEventManager;
class TGNumberEntry;
class TGCheckButton;
class TEveGValuator;

class R3BEventManagerEditor : public TGedFrame
{
   R3BEventManagerEditor(const R3BEventManagerEditor&);            // Not implemented
   R3BEventManagerEditor& operator=(const R3BEventManagerEditor&); // Not implemented

protected:
   TObject *fObject;
   R3BEventManager  *fManager;
   TGNumberEntry  *fCurrentEvent, *fCurrentPDG;
   TGCheckButton  *fVizPri;
   TGCheckButton  *fScaleE;
   TEveGValuator *fMinEnergy ,*fMaxEnergy;  

public:
   R3BEventManagerEditor(const TGWindow* p=0, Int_t width=170, Int_t height=30,
                      UInt_t options = kChildFrame, Pixel_t back=GetDefaultFrameBackground());
   virtual ~R3BEventManagerEditor() {}
   void SetModel( TObject* obj);
   virtual void SelectEvent();
   virtual void SelectPDG();                  
   void DoVizPri();
   virtual void MaxEnergy();
   virtual void MinEnergy();
   virtual void Init();
   virtual void DoScaleE();
   ClassDef(R3BEventManagerEditor, 0); // Specialization of TGedEditor for proper update propagation to TEveManager.
};

#endif
// -------------------------------------------------------------------------
// -----               R3BCaloEventDisplay header file                 -----
// -----              Created 01/10/2012  by P.Cabanelas               -----
// -------------------------------------------------------------------------

#ifndef R3BCALOEVENTDISPLAY_H
#define R3BCALOEVENTDISPLAY_H

#include "FairTask.h"
#include "FairMCTracks.h"

#include "TEveProjections.h"
#include "TEveProjectionManager.h"
#include "TEveCalo.h"
#include "TEveCaloData.h"
#include "TEveWindow.h"
#include "TEveViewer.h"
#include "TEveScene.h"

class TClonesArray;
class FairEventManager;
class FairRootManager;

class TH2F;

class R3BCaloEventDisplay : public FairTask 
{
  public:

    /** Default constructor **/
    R3BCaloEventDisplay();

    /** Standard Constructor **/
    R3BCaloEventDisplay(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    ~R3BCaloEventDisplay();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Finish **/
    virtual void Finish();

    /** Public method SelectGeometryVersion
     **
     ** Defines the geometry
     *@param version  Integer parameter used to select the geometry:
     ** (see documentation /r3broot/cal/perlScripts/README))
     **/
    void SelectGeometryVersion(Int_t version);


    /** Accessors **/

  protected:

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    TClonesArray*     fCrystalHitCA;

    FairEventManager* fEventManager;
    FairRootManager*  fManager;

    // Selecting the geometry of the CALIFA calorimeter
    Int_t fGeometryVersion;
    
    TEveCaloDataHist* fDataHist;
    TEveCalo3D*       fCalo3d;
    TEveCalo2D*       fCalo2d;
    TEveCaloLego*     fLego;

    TEveWindowSlot*   slotLeftTop;
    TEveWindowSlot*   slotLeftBottom;
    TEveWindowSlot*   slotRightTop;
    TEveWindowSlot*   slotRightBottom;
    TEveViewer*       viewerLeftTop;
    TEveScene*        sceneLeftTop;
    TEveViewer*       viewerRightTop;
    TEveScene*        sceneRightTop;
    TEveViewer*       viewerLeftBottom;
    TEveScene*        sceneLeftBottom;
    TEveViewer*       viewerRightBottom;
    TEveScene*        sceneRightBottom;
    TEveWindowSlot*   legoSlot;
    TEveScene*        legoScene;
    TEveViewer*       legoViewer;

    TEveProjectionManager*   fProjManager1;
    TEveProjectionManager*   fProjManager2;
	
    // Flag for simulation
    Bool_t kSimulation;


  private:

    /** Data members **/

    TH2F* hcalo;


    /** Private Methods **/

    void CreateHistograms();
    void MakeSlots();
    void MakeViewerScene();

    void GetAngles(Int_t geoVersion, Int_t iD, Double_t* polar, Double_t* azimuthal, Double_t* rho);


    ClassDef(R3BCaloEventDisplay,1);

};

#endif
// -------------------------------------------------------------------------
// -----              R3BCaloHitEventDisplay header file               -----
// -----              Created 26/10/2012  by P.Cabanelas               -----
// -------------------------------------------------------------------------

#ifndef R3BCALOHITEVENTDISPLAY_H
#define R3BCALOHITEVENTDISPLAY_H

#include "FairTask.h"
#include "FairMCTracks.h"

#include "TEveProjections.h"
#include "TEveProjectionManager.h"
#include "TEveCalo.h"
#include "TEveCaloData.h"
#include "TEveWindow.h"
#include "TEveViewer.h"
#include "TEveScene.h"

class TClonesArray;
class FairEventManager;
class FairRootManager;

class TH2F;

class R3BCaloHitEventDisplay : public FairTask 
{
  public:

    /** Default constructor **/
    R3BCaloHitEventDisplay();

    /** Standard Constructor **/
    R3BCaloHitEventDisplay(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    ~R3BCaloHitEventDisplay();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Finish **/
    virtual void Finish();



    /** Accessors **/

  protected:

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    TClonesArray*     fCaloHitCA;

    FairEventManager* fEventManager;
    FairRootManager*  fManager;

    TEveCaloDataHist* fDataHist;
    TEveCalo3D*       fCalo3d;
    TEveCalo2D*       fCalo2d;
    TEveCaloLego*     fLego;

    TEveWindowSlot*   slotLeftTop;
    TEveWindowSlot*   slotLeftBottom;
    TEveWindowSlot*   slotRightTop;
    TEveWindowSlot*   slotRightBottom;
    TEveViewer*       viewerLeftTop;
    TEveScene*        sceneLeftTop;
    TEveViewer*       viewerRightTop;
    TEveScene*        sceneRightTop;
    TEveViewer*       viewerLeftBottom;
    TEveScene*        sceneLeftBottom;
    TEveViewer*       viewerRightBottom;
    TEveScene*        sceneRightBottom;
    TEveWindowSlot*   legoSlot;
    TEveScene*        legoScene;
    TEveViewer*       legoViewer;

    TEveProjectionManager*   fProjManager1;
    TEveProjectionManager*   fProjManager2;
	
    // Flag for simulation
    Bool_t kSimulation;


  private:

    /** Data members **/

    TH2F* hcalohit;


    /** Private Methods **/

    void CreateHistograms();
    void MakeSlots();
    void MakeViewerScene();

    ClassDef(R3BCaloHitEventDisplay,1);

};

#endif
#ifndef R3BMCTRACKS_H
#define R3BMCTRACKS_H

#include "FairMCTracks.h"



class R3BMCTracks : public FairMCTracks {

public:

  R3BMCTracks();
  R3BMCTracks(const char* name, Int_t iVerbose = 1);
  virtual ~R3BMCTracks(){;}

  virtual InitStatus Init();
  virtual void Exec(Option_t* option);

 ClassDef(R3BMCTracks,1);
};
#endif

// -------------------------------------------------------------------------
// -----                   R3BIonName header file                      -----
// -----              Created 04/10/2011  by P.Cabanelas               -----
// -------------------------------------------------------------------------

#ifndef R3BIONNAME_H
#define R3BIONNAME_H

#include "TNamed.h"

class R3BIonName: public TNamed
{
  public:

    /** Default constructor **/
    R3BIonName();


    /** Destructor **/
    virtual ~R3BIonName();


    /** Accessors **/
    /**
    * Return the ion name if exists
    */
    Bool_t GetIonName(Int_t element, Char_t *name);

  private:

    /** Data members **/

    ClassDef(R3BIonName,1);

};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BCaloEventDisplay", payloadCode, "@",
"R3BCaloHitEventDisplay", payloadCode, "@",
"R3BEventManager", payloadCode, "@",
"R3BEventManagerEditor", payloadCode, "@",
"R3BIonName", payloadCode, "@",
"R3BMCTracks", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BEvtVisDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BEvtVisDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BEvtVisDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BEvtVisDict() {
  TriggerDictionaryInitialization_G__R3BEvtVisDict_Impl();
}
