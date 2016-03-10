// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIcaldIG__R3BCaloDict

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
#include "R3BCalo.h"
#include "R3BCaloGeometry.h"
#include "R3BCaloHitFinder.h"
#include "R3BCaloHitFinderPar.h"
#include "R3BGeoCalo.h"
#include "R3BGeoCaloPar.h"
#include "R3BCaloContFact.h"
#include "unpack/R3BCaloUnpack.h"
#include "unpack/R3BCaloUnpackPar.h"
#include "unpack/R3BCaloRawAna.h"
#include "unpack/R3BCaloCrystalAna.h"
#include "unpack/R3BCaloCalibParFinder.h"
#include "unpack/R3BCaloMap.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoCalo(void *p = 0);
   static void *newArray_R3BGeoCalo(Long_t size, void *p);
   static void delete_R3BGeoCalo(void *p);
   static void deleteArray_R3BGeoCalo(void *p);
   static void destruct_R3BGeoCalo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoCalo*)
   {
      ::R3BGeoCalo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoCalo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoCalo", ::R3BGeoCalo::Class_Version(), "invalid", 566,
                  typeid(::R3BGeoCalo), DefineBehavior(ptr, ptr),
                  &::R3BGeoCalo::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoCalo) );
      instance.SetNew(&new_R3BGeoCalo);
      instance.SetNewArray(&newArray_R3BGeoCalo);
      instance.SetDelete(&delete_R3BGeoCalo);
      instance.SetDeleteArray(&deleteArray_R3BGeoCalo);
      instance.SetDestructor(&destruct_R3BGeoCalo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoCalo*)
   {
      return GenerateInitInstanceLocal((::R3BGeoCalo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoCalo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BCaloGeometry(void *p);
   static void deleteArray_R3BCaloGeometry(void *p);
   static void destruct_R3BCaloGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloGeometry*)
   {
      ::R3BCaloGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloGeometry", ::R3BCaloGeometry::Class_Version(), "invalid", 266,
                  typeid(::R3BCaloGeometry), DefineBehavior(ptr, ptr),
                  &::R3BCaloGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloGeometry) );
      instance.SetDelete(&delete_R3BCaloGeometry);
      instance.SetDeleteArray(&deleteArray_R3BCaloGeometry);
      instance.SetDestructor(&destruct_R3BCaloGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloGeometry*)
   {
      return GenerateInitInstanceLocal((::R3BCaloGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloGeometry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloHitFinder(void *p = 0);
   static void *newArray_R3BCaloHitFinder(Long_t size, void *p);
   static void delete_R3BCaloHitFinder(void *p);
   static void deleteArray_R3BCaloHitFinder(void *p);
   static void destruct_R3BCaloHitFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloHitFinder*)
   {
      ::R3BCaloHitFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloHitFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloHitFinder", ::R3BCaloHitFinder::Class_Version(), "invalid", 309,
                  typeid(::R3BCaloHitFinder), DefineBehavior(ptr, ptr),
                  &::R3BCaloHitFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloHitFinder) );
      instance.SetNew(&new_R3BCaloHitFinder);
      instance.SetNewArray(&newArray_R3BCaloHitFinder);
      instance.SetDelete(&delete_R3BCaloHitFinder);
      instance.SetDeleteArray(&deleteArray_R3BCaloHitFinder);
      instance.SetDestructor(&destruct_R3BCaloHitFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloHitFinder*)
   {
      return GenerateInitInstanceLocal((::R3BCaloHitFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloHitFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloHitFinderPar(void *p = 0);
   static void *newArray_R3BCaloHitFinderPar(Long_t size, void *p);
   static void delete_R3BCaloHitFinderPar(void *p);
   static void deleteArray_R3BCaloHitFinderPar(void *p);
   static void destruct_R3BCaloHitFinderPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloHitFinderPar*)
   {
      ::R3BCaloHitFinderPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloHitFinderPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloHitFinderPar", ::R3BCaloHitFinderPar::Class_Version(), "R3BCaloHitFinderPar.h", 18,
                  typeid(::R3BCaloHitFinderPar), DefineBehavior(ptr, ptr),
                  &::R3BCaloHitFinderPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloHitFinderPar) );
      instance.SetNew(&new_R3BCaloHitFinderPar);
      instance.SetNewArray(&newArray_R3BCaloHitFinderPar);
      instance.SetDelete(&delete_R3BCaloHitFinderPar);
      instance.SetDeleteArray(&deleteArray_R3BCaloHitFinderPar);
      instance.SetDestructor(&destruct_R3BCaloHitFinderPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloHitFinderPar*)
   {
      return GenerateInitInstanceLocal((::R3BCaloHitFinderPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloHitFinderPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoCaloPar(void *p = 0);
   static void *newArray_R3BGeoCaloPar(Long_t size, void *p);
   static void delete_R3BGeoCaloPar(void *p);
   static void deleteArray_R3BGeoCaloPar(void *p);
   static void destruct_R3BGeoCaloPar(void *p);
   static void streamer_R3BGeoCaloPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoCaloPar*)
   {
      ::R3BGeoCaloPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoCaloPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoCaloPar", ::R3BGeoCaloPar::Class_Version(), "invalid", 593,
                  typeid(::R3BGeoCaloPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoCaloPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoCaloPar) );
      instance.SetNew(&new_R3BGeoCaloPar);
      instance.SetNewArray(&newArray_R3BGeoCaloPar);
      instance.SetDelete(&delete_R3BGeoCaloPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoCaloPar);
      instance.SetDestructor(&destruct_R3BGeoCaloPar);
      instance.SetStreamerFunc(&streamer_R3BGeoCaloPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoCaloPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoCaloPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoCaloPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalo(void *p = 0);
   static void *newArray_R3BCalo(Long_t size, void *p);
   static void delete_R3BCalo(void *p);
   static void deleteArray_R3BCalo(void *p);
   static void destruct_R3BCalo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalo*)
   {
      ::R3BCalo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalo", ::R3BCalo::Class_Version(), "invalid", 33,
                  typeid(::R3BCalo), DefineBehavior(ptr, ptr),
                  &::R3BCalo::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalo) );
      instance.SetNew(&new_R3BCalo);
      instance.SetNewArray(&newArray_R3BCalo);
      instance.SetDelete(&delete_R3BCalo);
      instance.SetDeleteArray(&deleteArray_R3BCalo);
      instance.SetDestructor(&destruct_R3BCalo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalo*)
   {
      return GenerateInitInstanceLocal((::R3BCalo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCalo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloContFact(void *p = 0);
   static void *newArray_R3BCaloContFact(Long_t size, void *p);
   static void delete_R3BCaloContFact(void *p);
   static void deleteArray_R3BCaloContFact(void *p);
   static void destruct_R3BCaloContFact(void *p);
   static void streamer_R3BCaloContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloContFact*)
   {
      ::R3BCaloContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloContFact", ::R3BCaloContFact::Class_Version(), "invalid", 620,
                  typeid(::R3BCaloContFact), DefineBehavior(ptr, ptr),
                  &::R3BCaloContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BCaloContFact) );
      instance.SetNew(&new_R3BCaloContFact);
      instance.SetNewArray(&newArray_R3BCaloContFact);
      instance.SetDelete(&delete_R3BCaloContFact);
      instance.SetDeleteArray(&deleteArray_R3BCaloContFact);
      instance.SetDestructor(&destruct_R3BCaloContFact);
      instance.SetStreamerFunc(&streamer_R3BCaloContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloContFact*)
   {
      return GenerateInitInstanceLocal((::R3BCaloContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BCaloUnpack(void *p);
   static void deleteArray_R3BCaloUnpack(void *p);
   static void destruct_R3BCaloUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloUnpack*)
   {
      ::R3BCaloUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloUnpack", ::R3BCaloUnpack::Class_Version(), "invalid", 671,
                  typeid(::R3BCaloUnpack), DefineBehavior(ptr, ptr),
                  &::R3BCaloUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloUnpack) );
      instance.SetDelete(&delete_R3BCaloUnpack);
      instance.SetDeleteArray(&deleteArray_R3BCaloUnpack);
      instance.SetDestructor(&destruct_R3BCaloUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BCaloUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloUnpackPar(void *p = 0);
   static void *newArray_R3BCaloUnpackPar(Long_t size, void *p);
   static void delete_R3BCaloUnpackPar(void *p);
   static void deleteArray_R3BCaloUnpackPar(void *p);
   static void destruct_R3BCaloUnpackPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloUnpackPar*)
   {
      ::R3BCaloUnpackPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloUnpackPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloUnpackPar", ::R3BCaloUnpackPar::Class_Version(), "R3BCaloUnpackPar.h", 18,
                  typeid(::R3BCaloUnpackPar), DefineBehavior(ptr, ptr),
                  &::R3BCaloUnpackPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloUnpackPar) );
      instance.SetNew(&new_R3BCaloUnpackPar);
      instance.SetNewArray(&newArray_R3BCaloUnpackPar);
      instance.SetDelete(&delete_R3BCaloUnpackPar);
      instance.SetDeleteArray(&deleteArray_R3BCaloUnpackPar);
      instance.SetDestructor(&destruct_R3BCaloUnpackPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloUnpackPar*)
   {
      return GenerateInitInstanceLocal((::R3BCaloUnpackPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloUnpackPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloRawAna(void *p = 0);
   static void *newArray_R3BCaloRawAna(Long_t size, void *p);
   static void delete_R3BCaloRawAna(void *p);
   static void deleteArray_R3BCaloRawAna(void *p);
   static void destruct_R3BCaloRawAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloRawAna*)
   {
      ::R3BCaloRawAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloRawAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloRawAna", ::R3BCaloRawAna::Class_Version(), "invalid", 795,
                  typeid(::R3BCaloRawAna), DefineBehavior(ptr, ptr),
                  &::R3BCaloRawAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloRawAna) );
      instance.SetNew(&new_R3BCaloRawAna);
      instance.SetNewArray(&newArray_R3BCaloRawAna);
      instance.SetDelete(&delete_R3BCaloRawAna);
      instance.SetDeleteArray(&deleteArray_R3BCaloRawAna);
      instance.SetDestructor(&destruct_R3BCaloRawAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloRawAna*)
   {
      return GenerateInitInstanceLocal((::R3BCaloRawAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloRawAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloCrystalAna(void *p = 0);
   static void *newArray_R3BCaloCrystalAna(Long_t size, void *p);
   static void delete_R3BCaloCrystalAna(void *p);
   static void deleteArray_R3BCaloCrystalAna(void *p);
   static void destruct_R3BCaloCrystalAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloCrystalAna*)
   {
      ::R3BCaloCrystalAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloCrystalAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloCrystalAna", ::R3BCaloCrystalAna::Class_Version(), "invalid", 845,
                  typeid(::R3BCaloCrystalAna), DefineBehavior(ptr, ptr),
                  &::R3BCaloCrystalAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloCrystalAna) );
      instance.SetNew(&new_R3BCaloCrystalAna);
      instance.SetNewArray(&newArray_R3BCaloCrystalAna);
      instance.SetDelete(&delete_R3BCaloCrystalAna);
      instance.SetDeleteArray(&deleteArray_R3BCaloCrystalAna);
      instance.SetDestructor(&destruct_R3BCaloCrystalAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloCrystalAna*)
   {
      return GenerateInitInstanceLocal((::R3BCaloCrystalAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloCrystalAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloCalibParFinder(void *p = 0);
   static void *newArray_R3BCaloCalibParFinder(Long_t size, void *p);
   static void delete_R3BCaloCalibParFinder(void *p);
   static void deleteArray_R3BCaloCalibParFinder(void *p);
   static void destruct_R3BCaloCalibParFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloCalibParFinder*)
   {
      ::R3BCaloCalibParFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloCalibParFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloCalibParFinder", ::R3BCaloCalibParFinder::Class_Version(), "invalid", 893,
                  typeid(::R3BCaloCalibParFinder), DefineBehavior(ptr, ptr),
                  &::R3BCaloCalibParFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloCalibParFinder) );
      instance.SetNew(&new_R3BCaloCalibParFinder);
      instance.SetNewArray(&newArray_R3BCaloCalibParFinder);
      instance.SetDelete(&delete_R3BCaloCalibParFinder);
      instance.SetDeleteArray(&deleteArray_R3BCaloCalibParFinder);
      instance.SetDestructor(&destruct_R3BCaloCalibParFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloCalibParFinder*)
   {
      return GenerateInitInstanceLocal((::R3BCaloCalibParFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloCalibParFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BCaloMap(void *p);
   static void deleteArray_R3BCaloMap(void *p);
   static void destruct_R3BCaloMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloMap*)
   {
      ::R3BCaloMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloMap", ::R3BCaloMap::Class_Version(), "invalid", 956,
                  typeid(::R3BCaloMap), DefineBehavior(ptr, ptr),
                  &::R3BCaloMap::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloMap) );
      instance.SetDelete(&delete_R3BCaloMap);
      instance.SetDeleteArray(&deleteArray_R3BCaloMap);
      instance.SetDestructor(&destruct_R3BCaloMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloMap*)
   {
      return GenerateInitInstanceLocal((::R3BCaloMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoCalo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoCalo::Class_Name()
{
   return "R3BGeoCalo";
}

//______________________________________________________________________________
const char *R3BGeoCalo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCalo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoCalo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCalo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoCalo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCalo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoCalo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCalo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloGeometry::Class_Name()
{
   return "R3BCaloGeometry";
}

//______________________________________________________________________________
const char *R3BCaloGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloHitFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloHitFinder::Class_Name()
{
   return "R3BCaloHitFinder";
}

//______________________________________________________________________________
const char *R3BCaloHitFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloHitFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloHitFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloHitFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloHitFinderPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloHitFinderPar::Class_Name()
{
   return "R3BCaloHitFinderPar";
}

//______________________________________________________________________________
const char *R3BCaloHitFinderPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinderPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloHitFinderPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinderPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloHitFinderPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinderPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloHitFinderPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitFinderPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoCaloPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoCaloPar::Class_Name()
{
   return "R3BGeoCaloPar";
}

//______________________________________________________________________________
const char *R3BGeoCaloPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCaloPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoCaloPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCaloPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoCaloPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCaloPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoCaloPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCaloPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalo::Class_Name()
{
   return "R3BCalo";
}

//______________________________________________________________________________
const char *R3BCalo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloContFact::Class_Name()
{
   return "R3BCaloContFact";
}

//______________________________________________________________________________
const char *R3BCaloContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloUnpack::Class_Name()
{
   return "R3BCaloUnpack";
}

//______________________________________________________________________________
const char *R3BCaloUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloUnpackPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloUnpackPar::Class_Name()
{
   return "R3BCaloUnpackPar";
}

//______________________________________________________________________________
const char *R3BCaloUnpackPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpackPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloUnpackPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpackPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloUnpackPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpackPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloUnpackPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloUnpackPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloRawAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloRawAna::Class_Name()
{
   return "R3BCaloRawAna";
}

//______________________________________________________________________________
const char *R3BCaloRawAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloRawAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloRawAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloRawAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloCrystalAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloCrystalAna::Class_Name()
{
   return "R3BCaloCrystalAna";
}

//______________________________________________________________________________
const char *R3BCaloCrystalAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloCrystalAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloCrystalAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloCrystalAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloCalibParFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloCalibParFinder::Class_Name()
{
   return "R3BCaloCalibParFinder";
}

//______________________________________________________________________________
const char *R3BCaloCalibParFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCalibParFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloCalibParFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCalibParFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloCalibParFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCalibParFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloCalibParFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCalibParFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloMap::Class_Name()
{
   return "R3BCaloMap";
}

//______________________________________________________________________________
const char *R3BCaloMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoCalo::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoCalo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoCalo::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoCalo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoCalo(void *p) {
      return  p ? new(p) ::R3BGeoCalo : new ::R3BGeoCalo;
   }
   static void *newArray_R3BGeoCalo(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoCalo[nElements] : new ::R3BGeoCalo[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoCalo(void *p) {
      delete ((::R3BGeoCalo*)p);
   }
   static void deleteArray_R3BGeoCalo(void *p) {
      delete [] ((::R3BGeoCalo*)p);
   }
   static void destruct_R3BGeoCalo(void *p) {
      typedef ::R3BGeoCalo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoCalo

//______________________________________________________________________________
void R3BCaloGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BCaloGeometry(void *p) {
      delete ((::R3BCaloGeometry*)p);
   }
   static void deleteArray_R3BCaloGeometry(void *p) {
      delete [] ((::R3BCaloGeometry*)p);
   }
   static void destruct_R3BCaloGeometry(void *p) {
      typedef ::R3BCaloGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloGeometry

//______________________________________________________________________________
void R3BCaloHitFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloHitFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloHitFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloHitFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloHitFinder(void *p) {
      return  p ? new(p) ::R3BCaloHitFinder : new ::R3BCaloHitFinder;
   }
   static void *newArray_R3BCaloHitFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloHitFinder[nElements] : new ::R3BCaloHitFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloHitFinder(void *p) {
      delete ((::R3BCaloHitFinder*)p);
   }
   static void deleteArray_R3BCaloHitFinder(void *p) {
      delete [] ((::R3BCaloHitFinder*)p);
   }
   static void destruct_R3BCaloHitFinder(void *p) {
      typedef ::R3BCaloHitFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloHitFinder

//______________________________________________________________________________
void R3BCaloHitFinderPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloHitFinderPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloHitFinderPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloHitFinderPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloHitFinderPar(void *p) {
      return  p ? new(p) ::R3BCaloHitFinderPar : new ::R3BCaloHitFinderPar;
   }
   static void *newArray_R3BCaloHitFinderPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloHitFinderPar[nElements] : new ::R3BCaloHitFinderPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloHitFinderPar(void *p) {
      delete ((::R3BCaloHitFinderPar*)p);
   }
   static void deleteArray_R3BCaloHitFinderPar(void *p) {
      delete [] ((::R3BCaloHitFinderPar*)p);
   }
   static void destruct_R3BCaloHitFinderPar(void *p) {
      typedef ::R3BCaloHitFinderPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloHitFinderPar

//______________________________________________________________________________
void R3BGeoCaloPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoCaloPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoCaloPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoCaloPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoCaloPar(void *p) {
      return  p ? new(p) ::R3BGeoCaloPar : new ::R3BGeoCaloPar;
   }
   static void *newArray_R3BGeoCaloPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoCaloPar[nElements] : new ::R3BGeoCaloPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoCaloPar(void *p) {
      delete ((::R3BGeoCaloPar*)p);
   }
   static void deleteArray_R3BGeoCaloPar(void *p) {
      delete [] ((::R3BGeoCaloPar*)p);
   }
   static void destruct_R3BGeoCaloPar(void *p) {
      typedef ::R3BGeoCaloPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoCaloPar(TBuffer &buf, void *obj) {
      ((::R3BGeoCaloPar*)obj)->::R3BGeoCaloPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoCaloPar

//______________________________________________________________________________
void R3BCalo::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalo::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalo(void *p) {
      return  p ? new(p) ::R3BCalo : new ::R3BCalo;
   }
   static void *newArray_R3BCalo(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalo[nElements] : new ::R3BCalo[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalo(void *p) {
      delete ((::R3BCalo*)p);
   }
   static void deleteArray_R3BCalo(void *p) {
      delete [] ((::R3BCalo*)p);
   }
   static void destruct_R3BCalo(void *p) {
      typedef ::R3BCalo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalo

//______________________________________________________________________________
void R3BCaloContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloContFact(void *p) {
      return  p ? new(p) ::R3BCaloContFact : new ::R3BCaloContFact;
   }
   static void *newArray_R3BCaloContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloContFact[nElements] : new ::R3BCaloContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloContFact(void *p) {
      delete ((::R3BCaloContFact*)p);
   }
   static void deleteArray_R3BCaloContFact(void *p) {
      delete [] ((::R3BCaloContFact*)p);
   }
   static void destruct_R3BCaloContFact(void *p) {
      typedef ::R3BCaloContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BCaloContFact(TBuffer &buf, void *obj) {
      ((::R3BCaloContFact*)obj)->::R3BCaloContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BCaloContFact

//______________________________________________________________________________
void R3BCaloUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BCaloUnpack(void *p) {
      delete ((::R3BCaloUnpack*)p);
   }
   static void deleteArray_R3BCaloUnpack(void *p) {
      delete [] ((::R3BCaloUnpack*)p);
   }
   static void destruct_R3BCaloUnpack(void *p) {
      typedef ::R3BCaloUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloUnpack

//______________________________________________________________________________
void R3BCaloUnpackPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloUnpackPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloUnpackPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloUnpackPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloUnpackPar(void *p) {
      return  p ? new(p) ::R3BCaloUnpackPar : new ::R3BCaloUnpackPar;
   }
   static void *newArray_R3BCaloUnpackPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloUnpackPar[nElements] : new ::R3BCaloUnpackPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloUnpackPar(void *p) {
      delete ((::R3BCaloUnpackPar*)p);
   }
   static void deleteArray_R3BCaloUnpackPar(void *p) {
      delete [] ((::R3BCaloUnpackPar*)p);
   }
   static void destruct_R3BCaloUnpackPar(void *p) {
      typedef ::R3BCaloUnpackPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloUnpackPar

//______________________________________________________________________________
void R3BCaloRawAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloRawAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloRawAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloRawAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloRawAna(void *p) {
      return  p ? new(p) ::R3BCaloRawAna : new ::R3BCaloRawAna;
   }
   static void *newArray_R3BCaloRawAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloRawAna[nElements] : new ::R3BCaloRawAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloRawAna(void *p) {
      delete ((::R3BCaloRawAna*)p);
   }
   static void deleteArray_R3BCaloRawAna(void *p) {
      delete [] ((::R3BCaloRawAna*)p);
   }
   static void destruct_R3BCaloRawAna(void *p) {
      typedef ::R3BCaloRawAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloRawAna

//______________________________________________________________________________
void R3BCaloCrystalAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloCrystalAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloCrystalAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloCrystalAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloCrystalAna(void *p) {
      return  p ? new(p) ::R3BCaloCrystalAna : new ::R3BCaloCrystalAna;
   }
   static void *newArray_R3BCaloCrystalAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloCrystalAna[nElements] : new ::R3BCaloCrystalAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloCrystalAna(void *p) {
      delete ((::R3BCaloCrystalAna*)p);
   }
   static void deleteArray_R3BCaloCrystalAna(void *p) {
      delete [] ((::R3BCaloCrystalAna*)p);
   }
   static void destruct_R3BCaloCrystalAna(void *p) {
      typedef ::R3BCaloCrystalAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloCrystalAna

//______________________________________________________________________________
void R3BCaloCalibParFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloCalibParFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloCalibParFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloCalibParFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloCalibParFinder(void *p) {
      return  p ? new(p) ::R3BCaloCalibParFinder : new ::R3BCaloCalibParFinder;
   }
   static void *newArray_R3BCaloCalibParFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloCalibParFinder[nElements] : new ::R3BCaloCalibParFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloCalibParFinder(void *p) {
      delete ((::R3BCaloCalibParFinder*)p);
   }
   static void deleteArray_R3BCaloCalibParFinder(void *p) {
      delete [] ((::R3BCaloCalibParFinder*)p);
   }
   static void destruct_R3BCaloCalibParFinder(void *p) {
      typedef ::R3BCaloCalibParFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloCalibParFinder

//______________________________________________________________________________
void R3BCaloMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BCaloMap(void *p) {
      delete ((::R3BCaloMap*)p);
   }
   static void deleteArray_R3BCaloMap(void *p) {
      delete [] ((::R3BCaloMap*)p);
   }
   static void destruct_R3BCaloMap(void *p) {
      typedef ::R3BCaloMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloMap

namespace ROOT {
   static TClass *maplEintcOR3BCalocLcLsCrystalInfogR_Dictionary();
   static void maplEintcOR3BCalocLcLsCrystalInfogR_TClassManip(TClass*);
   static void *new_maplEintcOR3BCalocLcLsCrystalInfogR(void *p = 0);
   static void *newArray_maplEintcOR3BCalocLcLsCrystalInfogR(Long_t size, void *p);
   static void delete_maplEintcOR3BCalocLcLsCrystalInfogR(void *p);
   static void deleteArray_maplEintcOR3BCalocLcLsCrystalInfogR(void *p);
   static void destruct_maplEintcOR3BCalocLcLsCrystalInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,R3BCalo::sCrystalInfo>*)
   {
      map<int,R3BCalo::sCrystalInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,R3BCalo::sCrystalInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,R3BCalo::sCrystalInfo>", -2, "map", 96,
                  typeid(map<int,R3BCalo::sCrystalInfo>), DefineBehavior(ptr, ptr),
                  &maplEintcOR3BCalocLcLsCrystalInfogR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,R3BCalo::sCrystalInfo>) );
      instance.SetNew(&new_maplEintcOR3BCalocLcLsCrystalInfogR);
      instance.SetNewArray(&newArray_maplEintcOR3BCalocLcLsCrystalInfogR);
      instance.SetDelete(&delete_maplEintcOR3BCalocLcLsCrystalInfogR);
      instance.SetDeleteArray(&deleteArray_maplEintcOR3BCalocLcLsCrystalInfogR);
      instance.SetDestructor(&destruct_maplEintcOR3BCalocLcLsCrystalInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,R3BCalo::sCrystalInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,R3BCalo::sCrystalInfo>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOR3BCalocLcLsCrystalInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,R3BCalo::sCrystalInfo>*)0x0)->GetClass();
      maplEintcOR3BCalocLcLsCrystalInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOR3BCalocLcLsCrystalInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOR3BCalocLcLsCrystalInfogR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,R3BCalo::sCrystalInfo> : new map<int,R3BCalo::sCrystalInfo>;
   }
   static void *newArray_maplEintcOR3BCalocLcLsCrystalInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,R3BCalo::sCrystalInfo>[nElements] : new map<int,R3BCalo::sCrystalInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOR3BCalocLcLsCrystalInfogR(void *p) {
      delete ((map<int,R3BCalo::sCrystalInfo>*)p);
   }
   static void deleteArray_maplEintcOR3BCalocLcLsCrystalInfogR(void *p) {
      delete [] ((map<int,R3BCalo::sCrystalInfo>*)p);
   }
   static void destruct_maplEintcOR3BCalocLcLsCrystalInfogR(void *p) {
      typedef map<int,R3BCalo::sCrystalInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,R3BCalo::sCrystalInfo>

namespace {
  void TriggerDictionaryInitialization_G__R3BCaloDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/xball",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/cal",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/cal/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdb/caldb",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/cal/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoCalo;
class R3BCaloGeometry;
class R3BCaloHitFinder;
class __attribute__((annotate("$clingAutoload$R3BCaloHitFinderPar.h")))  R3BCaloHitFinderPar;
class R3BGeoCaloPar;
class R3BCalo;
class __attribute__((annotate(R"ATTRDUMP(Factory for all CALO parameter containers)ATTRDUMP"))) R3BCaloContFact;
class R3BCaloUnpack;
class __attribute__((annotate("$clingAutoload$R3BCaloUnpackPar.h")))  R3BCaloUnpackPar;
class R3BCaloRawAna;
class R3BCaloCrystalAna;
class R3BCaloCalibParFinder;
class R3BCaloMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BCalo header file                    -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -----	     Last modification 10/01/14 by H.Alvarez           -----
// -------------------------------------------------------------------------

/**  R3BCalo.h
 **/


#ifndef R3BCALO_H
#define R3BCALO_H

#include <map>

#include "R3BDetector.h"
#include "TF1.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BCaloPoint;
class R3BCaloCrystalHit;
class R3BCaloCrystalHitSim;
class FairVolume;
class TGeoRotation;


class R3BCalo : public R3BDetector
{

 public:

  struct sCrystalInfo
  {
    Int_t   crystalType;
    Int_t   crystalCopy;
    Int_t   crystalId;
    Int_t   fEndcapIdentifier;
    Int_t   fPhoswichIdentifier;

    Int_t   volIdAlv;
    Int_t   cpAlv;
    Int_t   cpCry;
  };

  /** Default constructor **/
  R3BCalo();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  R3BCalo(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~R3BCalo();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a R3BCaloPoint and adds it to the
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
   ** Added support for R3BCaloCrystalHit
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
  virtual void Print(Option_t* option="") const;


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
  
  /** Select the version of the CALIFA geometry
   **
   *@param version Geometry version (see documentation /r3broot/cal/perlScripts/README)
   **/	
  void SelectGeometryVersion(Int_t version);
  
  
  /** Public method SetNonUniformity
   **
   ** Defines the fNonUniformity parameter in % deviation from the central value 
   *@param nonU  Double parameter setting the maximum non-uniformity allowed 
   **/	
  void SetNonUniformity( Double_t nonU );
  
	
  virtual void Initialize();
  virtual void SetSpecialPhysicsCuts() {}


//  void SaveGeoParams();

  private:

  // Mapping of volume ID to crystal information
  std::map<Int_t, sCrystalInfo> fCrystalMap;

  // Current active crystal
  sCrystalInfo    *fCrystal;

    /** Track information to be stored until the track leaves the
	active volume. **/
    Int_t          fTrackID;           //!  track index
    Int_t          fTrackPID;          //!  particle identification
    Int_t          fVolumeID;          //!  volume id
    Int_t          fParentTrackID;     //!  parent track index
    Int_t          fUniqueID;          //!  particle unique id (e.g. if Delta electron, fUniqueID=9)
    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Double32_t     fNf;                //!  fast CsI(Tl) amplitude
    Double32_t     fNs;                //!  slow CsI(Tl) amplitude
    Int_t          fPosIndex;          //!
    Int_t          fNSteps;            //!  Number of steps in the active volume
    Double32_t     fEinc;              //!  Total incident energy
    Bool_t         kGeoSaved;          //!
    TList*         flGeoPar;	       //!

    TClonesArray*  fCaloCollection;              //!  The hit collection
    TClonesArray*  fCaloCrystalHitCollection;    //!  The crystal hit collection

    //! Defining functions for energy to light output calculation
    TF1 *tf_p_dNs;    //!
    TF1 *tf_p_dNf;    //!
    TF1 *tf_g_dNs;    //!
    TF1 *tf_g_dNf;    //!
	
    // Selecting the geometry of the CALIFA calorimeter
    Int_t fGeometryVersion;
    // Adding some non-uniformity preliminary description
    Double_t  fNonUniformity;
	
    /** Private method AddHit
     **
     ** Adds a CaloPoint to the HitCollection
     **/
    R3BCaloPoint* AddHit(Int_t trackID, Int_t detID, Int_t volid, Int_t copy, Int_t ident,
			 TVector3 posIn,
			 TVector3 pos_out, TVector3 momIn, 
			 TVector3 momOut, Double_t time, 
			 Double_t length, Double_t eLoss,
			 Double_t Nf, Double_t Ns);

	
    /** Private method AddCrystalHit
     **
     ** Adds a CaloCrystalHitSim to the HitCollection
     **/
    R3BCaloCrystalHitSim* AddCrystalHit(Int_t type, Int_t copy, Int_t ident,
					Double_t energy, Double_t Nf, Double_t Ns, Double_t tof,
					Int_t steps, Double_t einc,
					Int_t trackid, Int_t volid, Int_t partrackid,
					Int_t pdgid, Int_t uniqueid);
	
	
    /** Private method NUSmearing
     **
     ** Smears the energy according to some non-uniformity distribution	
     ** Very simple preliminary scheme where the NU is introduced as a flat random
     ** distribution with limits fNonUniformity (%) of the energy value.
     **/
    Double_t NUSmearing(Double_t inputEnergy);
	
	
    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();
	
    TGeoRotation* createMatrix( Double_t phi, Double_t theta, Double_t psi);

    Bool_t GetCrystalInfo(sCrystalInfo &info);

    ClassDef(R3BCalo,3);
};

inline void R3BCalo::ResetParameters() {
  fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = fNf = fNs = fEinc = 0;
  fPosIndex = 0;
  fNSteps = 0;
};

#endif 
#ifndef R3BCALOGEOMETRY_H
#define R3BCALOGEOMETRY_H

#include <TObject.h>

class TVector3;

class R3BCaloGeometry : public TObject
{
protected:
    static R3BCaloGeometry *inst;
    R3BCaloGeometry(int version);

    int fGeometryVersion;

public:
  void GetAngles(Int_t iD, Double_t *polar, Double_t *azimuthal, Double_t* rho);

  const char *GetCrystalVolumePath(int iD);

  double GetDistanceThroughCrystals(TVector3 &startVertex, TVector3 &direction);

  static R3BCaloGeometry *Instance(int version);

  ClassDef(R3BCaloGeometry, 3);
};

#endif

// -------------------------------------------------------------------------
// -----                   R3BCaloHitFinder source file                -----
// -----                  Created 27/08/10  by H.Alvarez               -----
// -----                Last modification 10/01/14 by H.Alvarez        ----
// -------------------------------------------------------------------------

/**  R3BCaloHitFinder.h
 **/


#ifndef R3BCALOHITFINDER_H
#define R3BCALOHITFINDER_H

#include "FairTask.h"
#include "R3BCaloHit.h"
#include "R3BCaloHitSim.h"
#include "R3BCaloHitFinderPar.h"

class TClonesArray;

class R3BCaloHitFinder : public FairTask
{

  public:

    /** Default constructor **/
    R3BCaloHitFinder();

    /** Destructor **/
    ~R3BCaloHitFinder();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Public method  GetAngles **/
    void GetAngles(Int_t iD, Double_t* polar, Double_t* azimuthal);

    /** Public method  GetAngles **/
    void GetAngles(Int_t iD, Double_t* polar, Double_t* azimuthal, Double_t* rho);

    /** Public method SelectGeometryVersion
     **
     ** Defines the geometry
     *@param version  Integer parameter used to select the geometry:
     ** (see documentation /r3broot/cal/perlScripts/README))
     **/
    void SelectGeometryVersion(Int_t version);

    /** Public method SetExperimentalResolution
     **
     ** Defines the experimental resolution of the crystals. The parameter sets the value
     ** at 1 MeV, and it scales according to and 1/sqrt(E) law.
     *@param crystalRes  Double parameter used to set the experimental resolution @ 1 MeV
     **/
    void SetExperimentalResolution(Double_t crystalRes);

    /** Public method SetComponentResolution
     **
     ** Defines the experimental resolution of the CsI(Tl) components.
     *@param componentRes  Double parameter used to set the experimental resolution in MeV
     **/
    void SetComponentResolution(Double_t componentRes);

    /** Public method SetPhoswichResolution
     **
     ** Defines the experimental resolution of the LaBr and LaCl crystals.
     *@param LaBr  Double parameter used to set the experimental resolution in % for LaBr
     *@param Lacl  Double parameter used to set the experimental resolution in % for LaCl
     **/
    void SetPhoswichResolution(Double_t LaBr, Double_t LaCl);
    /** Public method SetDetectionThreshold
     **
     ** Defines the minimum energy requested in a crystal to be considered in a calorimeter Hit
     *@param thresholdEne  Double parameter used to set the threshold
     **/
    void SetDetectionThreshold(Double_t thresholdEne);

    /** Public method SetAngularWindow
     **
     ** Sets the angular window open around the crystal with the largest energy
     ** to search for additional crystal hits and addback to the same cal hit
     **/
    void SetAngularWindow(Double_t deltaPolar, Double_t deltaAzimuthal, Double_t DeltaAngleClust=0.);

    /** Public method SetClusteringAlgorithm
     **
     ** Select the clustering algorithm to be used and set the parameter to be used by one of them
     //  1  ->  square window
     //  2  ->  round window
     //  3  ->  advanced round window with opening proportional to the
     //         energy of the hit, need ParCluster1
     //  4  ->  advanced round window with opening proportional to the
     //         energy of the two hit, need ParCluster1 NOT IMPLEMENTED YET!
     **
     **/
    void SetClusteringAlgorithm(Int_t ClusteringAlgorithmSelector, Double_t ParCluster1) ;





  protected:


    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Virtual method Finish **/
    virtual void Finish();


    TClonesArray* fCrystalHitCA;
    TClonesArray* fCaloHitCA;

    // Selecting the geometry of the CALIFA calorimeter
    Int_t fGeometryVersion;
    // Minimum energy requested in a crystal to be considered in a calorimeter Hit
    Double_t fThreshold;
    // Experimental resolution @ 1 MeV
    Double_t fCrystalResolution;
    // Experimental resolution for Nf and Ns
    Double_t fComponentResolution;
    // Experimental resolution for LaBr
    Double_t fLaBrResolution;
    // Experimental resolution for LaCl
    Double_t fLaClResolution;
    // Angular window (polar)
    Double_t fDeltaPolar;
    // Angular window (azimuthal)
    Double_t fDeltaAzimuthal;
    // Angular opening used for the clustering condition
    Double_t fDeltaAngleClust;
    // Clustering algorithm selector
    Int_t fClusteringAlgorithmSelector;
    // Clustering parameter 1
    Double_t fParCluster1;
    // Flag for simulation
    Bool_t kSimulation;

    // Parameter class
    R3BCaloHitFinderPar* fCaloHitFinderPar;

  private:

    UInt_t nEvents;

    /** Private method ExpResSmearing
    **
    ** Smears the energy according to some Experimental Resolution distribution
     ** Very simple preliminary scheme where the Experimental Resolution
     ** is introduced as a gaus random distribution with a width given by the
     ** parameter fCrystalResolution(in % @ MeV). Scales according to 1/sqrt(E)
     **/
    Double_t ExpResSmearing(Double_t inputEnergy);


     /** Private method CompSmearing
    **
    ** Smears the CsI(Tl) components Ns and Nf
    **/
    Double_t CompSmearing(Double_t inputComponent);

    /** Private method CompSmearing
    **
    ** Smears the LaBr and LaCl
    **/
    Double_t PhoswichSmearing(Double_t inputEnergy, bool isLaBr);


    /** Private method isPhoswich
    **
    ** Smears the CsI(Tl) components Ns and Nf
    **/
    bool isPhoswich(Int_t crystalid);

   /** Private method AddHit
    **
    ** Adds a CaloHit to the HitCollection
    **/
    R3BCaloHit* AddHit(UInt_t Nbcrystals,Double_t ene, Double_t Nf, Double_t Ns, Double_t pAngle,Double_t aAngle, ULong64_t time);

    /** Private method AddHitSim
    **
    ** Adds a CaloHitSim to the HitSimCollection
    **/
    R3BCaloHitSim* AddHitSim(UInt_t Nbcrystals,Double_t ene, Double_t Nf, Double_t Ns,Double_t pAngle,Double_t aAngle, Double_t einc);


    ClassDef(R3BCaloHitFinder,1);

};


#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                         R3BCaloHitFinderPar                           -----
// -----                Created 21/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALOHITFINDERPAR_H
#define R3BCALOHITFINDERPAR_H

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"


class R3BCaloHitFinderPar : public FairParGenericSet
{
 public :
  R3BCaloHitFinderPar (const char* name="R3BCaloHitFinderPar",
		       const char* title="Crystal HitFinder Parameters",
		       const char* context="TestDefaultContext");
  ~R3BCaloHitFinderPar(void){};
  void clear(void){};
  void putParams(FairParamList* list);
  Bool_t getParams(FairParamList* list);
  
  void Print(Option_t* option="") const;
  /** Accessor functions **/
  const Double_t GetThreshold(){return fThreshold;}
  const Double_t GetCrystalResolution(){return fCrystalResolution;}
  const Double_t GetDeltaPolar(){return fDeltaPolar;}
  const Double_t GetDeltaAzimuthal(){return fDeltaAzimuthal;}
  const Double_t GetDeltaAngleClust(){return fDeltaAngleClust;}
  const Int_t GetClusteringAlgorithmSelector(){return fClusteringAlgorithmSelector;}
  const Double_t GetParCluster1(){return fParCluster1;}
   
  void SetThreshold(Double_t value){fThreshold=value;}
  void SetCrystalResolution(Double_t value){fCrystalResolution=value;}
  void SetDeltaPolar(Double_t value){fDeltaPolar=value;}
  void SetDeltaAzimuthal(Double_t value){fDeltaAzimuthal=value;}
  void SetDeltaAngleClust(Double_t value){fDeltaAngleClust=value;}
  void SetClusteringAlgorithmSelector(Int_t value){fClusteringAlgorithmSelector=value;}
  void SetParCluster1(Double_t value){fParCluster1=value;}
  
 private:   
  // Minimum energy requested in a crystal to be considered in a calorimeter Hit
  Double_t fThreshold;
  // Experimental resolution @ 1 MeV
  Double_t fCrystalResolution;
  // Angular window (polar)
  Double_t fDeltaPolar;
  // Angular window (azimuthal)
  Double_t fDeltaAzimuthal;
  // Angular opening used for the clustering condition
  Double_t fDeltaAngleClust;
  // Clustering algorithm selector
  Int_t fClusteringAlgorithmSelector;
  // Clustering parameter 1
  Double_t fParCluster1;
 
  ClassDef(R3BCaloHitFinderPar,1); //
};

#endif /* !R3BCALOHITFINDERPAR_H*/

#ifndef R3BGEOCALO_H
#define R3BGEOCALO_H

#include "FairGeoSet.h"

class  R3BGeoCalo : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoCalo();
  ~R3BGeoCalo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoCalo,0) // Class for STS
};

inline Int_t R3BGeoCalo::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOCAL_H */
#ifndef R3BGEOCALOPAR_H
#define R3BGEOCALOPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoCaloPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoCaloPar(const char* name="R3BGeoCaloPar",
             const char* title="Calo Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoCaloPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoCaloPar,1)
};

#endif /* !R3BGEOCALPAR_H */
#ifndef R3BCALOCONTFACT_H
#define R3BCALOCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BCaloContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BCaloContFact();
  ~R3BCaloContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BCaloContFact,0) // Factory for all CALO parameter containers
};

#endif  /* !R3BCALOCONTFACT_H */
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BCaloUnpack                           -----
// -----                           Version 0.1                             -----
// -----                    Created 11/10/2013 by Y.Gonzalez               -----
// -----                    Modified 23/09/2014 by A.Perea                 -----                
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALOUNPACK_H
#define R3BCALOUNPACK_H

#include "FairUnpack.h"

#include "R3BCaloUnpackPar.h"

class TClonesArray;

static const UInt_t gosip_header_size = 16;
static const UInt_t gosip_sub_header_size = 8;

static const UInt_t max_channel = 16;  // channels per card 
static const UInt_t max_card = 256;    // max. number of cards per crate   
static const UInt_t max_sfp_id = 4;    // crates per controler
static const UInt_t max_pc_id = 2;     // max number of controller

static const int event_t_size = 44;        // size of std event 
static const int kEvent115a_t_size = 40;   // size of an event payload in the new version
static const int kTot_size = 12;           // size of the time-over-threshold optional payload
static const int kTrace_head_t_size = 8;   // size of the header for the trace optional payload


//---------------------------------------------
/**
 * 
 *  
 * 
 */
class R3BCaloUnpack : public FairUnpack {
   public:
    //Constructor
    R3BCaloUnpack(char *strCalDir,
                  Short_t type = 10, Short_t subType = 1,
                  Short_t procId = 1,
                  Short_t subCrate = 0, Short_t control = 9);
    
    //Destructor
    virtual ~R3BCaloUnpack();
    
    //Fair specific
    virtual Bool_t Init();
    
    virtual void SetParContainers();
    virtual Bool_t DoUnpack(Int_t* data, Int_t size);
    virtual void Reset();
      
   protected:
    virtual void Register();
   
   private:
    TClonesArray *fRawData;
    Int_t         fNHits;

    R3BCaloUnpackPar* fCaloUnpackPar;

    ULong64_t nEvents;

   public:
    //Class definition
    ClassDef(R3BCaloUnpack, 0)
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BCaloUnpackPar                           -----
// -----                Created 21/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALOUNPACKPAR_H
#define R3BCALOUNPACKPAR_H

#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

static const UInt_t numberOfCrystals = 1952;

class R3BCaloUnpackPar : public FairParGenericSet
{
 public :
  R3BCaloUnpackPar (const char* name="R3BCaloUnpackPar",
		    const char* title="Crystal Unpacking Parameters",
		    const char* context="TestDefaultContext");
  ~R3BCaloUnpackPar(void){};
  void clear(void){};
  void putParams(FairParamList* list);
  Bool_t getParams(FairParamList* list);
  
  void Print(Option_t* option="") const;
  /** Accessor functions **/
  const Int_t GetValidityMast(Int_t crystal){return validityMask[crystal];}
  const UInt_t GetGosip_header_size(){return gosip_header_size;}
  const UInt_t GetGosip_sub_header_size(){return gosip_sub_header_size;}
  const Int_t GetEvent_t_size(){return event_t_size;}
  const Int_t GetTrace_head_t_size(){return trace_head_t_size;}
  const UInt_t GetMax_submemory_id(){return max_submemory_id;}
  const UInt_t GetMax_module_id(){return max_module_id;}
  const UInt_t GetMax_sfp_id(){return max_sfp_id;}
  const UInt_t GetMax_pc_id(){return max_pc_id;}
  
  void SetValidityMask(Int_t crystal, Int_t value){validityMask[crystal]=value;}
  void SetGosip_header_size(UInt_t value){gosip_header_size=value;}
  void SetGosip_sub_header_size(UInt_t value){gosip_sub_header_size=value;}
  void SetEvent_t_size(Int_t value){event_t_size=value;}
  void SetTrace_head_t_size(Int_t value){trace_head_t_size=value;}
  void SetMax_submemory_id(UInt_t value){max_submemory_id=value;}
  void SetMax_module_id(UInt_t value){max_module_id=value;}
  void SetMax_sfp_id(UInt_t value){max_sfp_id=value;}
  void SetMax_pc_id(UInt_t value){max_pc_id=value;}
  
 private:
  
  //Mask for valid/invalid/present/defect/unused crystals. [int×number_of_crystals].
  Int_t* validityMask; 

  Int_t gosip_header_size;
  Int_t gosip_sub_header_size;
  Int_t  event_t_size;
  Int_t  trace_head_t_size;
  
  Int_t max_submemory_id;
  Int_t max_module_id;
  Int_t max_sfp_id;
  Int_t max_pc_id;
    
  ClassDef(R3BCaloUnpackPar,1); //
};

#endif /* !R3BCALOUNPACKPAR_H*/

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                          R3BCaloRawAna                            -----
// -----                           Version 0.1                             -----
// -----                    Created 03.02.2014 by Y.Gonzalez               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALORAWANA_H
#define R3BCALORAWANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BCaloRawAna : public FairTask {
public:
  R3BCaloRawAna();
  virtual ~R3BCaloRawAna();
  
  virtual InitStatus Init();
  
  virtual void Exec(Option_t *option);
  
  virtual void FinishTask();
   
private:
  Int_t fnEvents;
  
  TClonesArray *fRawData;
  
  TH1F *thc;
  TH1F *the;
  TH1F *tht;
  
  void CreateHistos();
  
  void WriteHistos();
  
public:
  
  ClassDef(R3BCaloRawAna, 0)
};


#endif


// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BCaloCrystalAna                          -----
// -----                    Created 18/07/14  by H.Alvarez                 -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALOCRYSTALANA_H
#define R3BCALOCRYSTALANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BCaloCrystalAna : public FairTask {
public:
  R3BCaloCrystalAna();
  virtual ~R3BCaloCrystalAna();
  
  virtual InitStatus Init();
  
  virtual void Exec(Option_t *option);
  
  virtual void FinishTask();
   
private:
  Int_t fnEvents;
  
  TClonesArray *fCrystalData;
    
  TH1F *thCrystalID;
  TH1F *thEnergy;
  TH1F *thNf;
  TH1F *thNs;
  TH1F *thTime;
  
  void CreateHistos();
  
  void WriteHistos();
  
public:
  
  ClassDef(R3BCaloCrystalAna, 0)
};


#endif


// -------------------------------------------------------------------------
// -----                R3BCaloCalibParFinder source file              -----
// -----                  Created 22/07/14  by H.Alvarez               -----
// -------------------------------------------------------------------------

#ifndef R3BCALOCALIBPARFINDER_H
#define R3BCALOCALIBPARFINDER_H

#include "FairTask.h"

class TClonesArray;

class R3BCaloCalibParFinder : public FairTask
{
    
public:
    
    /** Default constructor **/
    R3BCaloCalibParFinder();
    
    /** Destructor **/
    ~R3BCaloCalibParFinder();
   
    void SetOutputFile(const char *outFile);

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);
    
    /** Virtual method Reset **/
    virtual void Reset();
    
protected:

    /** Virtual method Init **/
    virtual InitStatus Init();
    
    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Register **/
    virtual void Register();
    
    /** Virtual method SetParContainers **/
    virtual void SetParContainers();
    
    /** Virtual method Finish **/
    virtual void Finish();
    
    TClonesArray* fCaloRawHitCA;
    
    // (Nf + Ns) / Energy ratio
    Double_t *fRatioPidEnergy;
    UInt_t *fNumEvents;
    UInt_t fNumChannels;
    
    UInt_t nEvents;

    char *fOutputFile;

    ClassDef(R3BCaloCalibParFinder,1);
};


#endif
#ifndef _R3BCALOMAP_H_
#define _R3BCALOMAP_H_

#include <map>
#include <string>

#include <FairTask.h>

class TClonesArray;

class R3BCaloMap: public FairTask
{
public:

  R3BCaloMap(const char *filename);

  virtual void Exec(Option_t* option);

protected:

  virtual InitStatus Init();

  std::string fname;
  TClonesArray *fCrystalHitCA;
  std::map<int,int> channelMap;

public:
  ClassDef(R3BCaloMap, 0)

};

#endif


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BCalo", payloadCode, "@",
"R3BCaloCalibParFinder", payloadCode, "@",
"R3BCaloContFact", payloadCode, "@",
"R3BCaloCrystalAna", payloadCode, "@",
"R3BCaloGeometry", payloadCode, "@",
"R3BCaloHitFinder", payloadCode, "@",
"R3BCaloHitFinderPar", payloadCode, "@",
"R3BCaloMap", payloadCode, "@",
"R3BCaloRawAna", payloadCode, "@",
"R3BCaloUnpack", payloadCode, "@",
"R3BCaloUnpackPar", payloadCode, "@",
"R3BGeoCalo", payloadCode, "@",
"R3BGeoCaloPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BCaloDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BCaloDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BCaloDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BCaloDict() {
  TriggerDictionaryInitialization_G__R3BCaloDict_Impl();
}
