// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIr3bdatadIG__R3BDataDict

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
#include "R3BMCStack.h"
#include "R3BMCTrack.h"
#include "xballData/R3BXBallPoint.h"
#include "xballData/R3BXBallCrystalHit.h"
#include "xballData/R3BXBallCrystalHitSim.h"
#include "caloData/R3BCaloCrystalHit.h"
#include "caloData/R3BCaloCrystalHitSim.h"
#include "caloData/R3BCaloRawHit.h"
#include "caloData/R3BCaloHit.h"
#include "caloData/R3BCaloHitSim.h"
#include "caloData/R3BCaloPoint.h"
#include "caloData/R3BCaloRawHit.h"
#include "dchData/R3BDchPoint.h"
#include "dchData/R3BDchFullPoint.h"
#include "gfiData/R3BGfiPoint.h"
#include "mtofData/R3BmTofPoint.h"
#include "dtofData/R3BdTofPoint.h"
#include "tofData/R3BTofPoint.h"
#include "vetoData/R3BVetoPoint.h"
#include "lumonData/ELILuMonPoint.h"
#include "trackerData/R3BTraPoint.h"
#include "trackerData/R3BTraHit.h"
#include "trackerData/R3BSitrackerHit.h"
#include "trackerData/R3BTrackerHit.h"
#include "startrackerData/R3BSTaRTraPoint.h"
#include "startrackerData/R3BSTaRTraHit.h"
#include "startrackerData/R3BSTaRTrackerHit.h"
#include "startrackerData/R3BSTaRTrackerDigitHit.h"
#include "landData/R3BLandPoint.h"
#include "landData/R3BLandDigi.h"
#include "landData/R3BLandFirstHits.h"
#include "landData/R3BLandHit.h"
#include "landData/R3BPaddleCrystalHit.h"
#include "landData/R3BNeutronTrack.h"
#include "dchData/R3BDchDigi.h"
#include "dchData/R3BDch2pDigi.h"
#include "tofData/R3BTofDigi.h"
#include "tofData/R3BTof2pDigi.h"
#include "mtofData/R3BmTofDigi.h"
#include "gfiData/R3BGfiDigi.h"
#include "trackerData/R3BTraDigi.h"
#include "trackerData/R3BTra2pDigi.h"
#include "trackerData/R3BTraFraDigi.h"
#include "trackerData/R3BTargetDigi.h"
#include "trackerData/R3BTarget2pDigi.h"
#include "mfiData/R3BMfiPoint.h"
#include "mfiData/R3BMfiDigi.h"
#include "pspData/R3BPspPoint.h"
#include "pspData/R3BPspDigi.h"
#include "neulandData/R3BNeulandRawItem.h"
#include "neulandData/R3BNeulandMappedItem.h"
#include "pspData/R3BPspxMappedItem.h"
#include "pspData/R3BPspxCalItem.h"
#include "losData/R3BLosMappedItem.h"
#include "R3BDetectorList.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BStack(void *p = 0);
   static void *newArray_R3BStack(Long_t size, void *p);
   static void delete_R3BStack(void *p);
   static void deleteArray_R3BStack(void *p);
   static void destruct_R3BStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStack*)
   {
      ::R3BStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStack", ::R3BStack::Class_Version(), "invalid", 48,
                  typeid(::R3BStack), DefineBehavior(ptr, ptr),
                  &::R3BStack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStack) );
      instance.SetNew(&new_R3BStack);
      instance.SetNewArray(&newArray_R3BStack);
      instance.SetDelete(&delete_R3BStack);
      instance.SetDeleteArray(&deleteArray_R3BStack);
      instance.SetDestructor(&destruct_R3BStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStack*)
   {
      return GenerateInitInstanceLocal((::R3BStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMCTrack(void *p = 0);
   static void *newArray_R3BMCTrack(Long_t size, void *p);
   static void delete_R3BMCTrack(void *p);
   static void deleteArray_R3BMCTrack(void *p);
   static void destruct_R3BMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMCTrack*)
   {
      ::R3BMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMCTrack", ::R3BMCTrack::Class_Version(), "invalid", 296,
                  typeid(::R3BMCTrack), DefineBehavior(ptr, ptr),
                  &::R3BMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMCTrack) );
      instance.SetNew(&new_R3BMCTrack);
      instance.SetNewArray(&newArray_R3BMCTrack);
      instance.SetDelete(&delete_R3BMCTrack);
      instance.SetDeleteArray(&deleteArray_R3BMCTrack);
      instance.SetDestructor(&destruct_R3BMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMCTrack*)
   {
      return GenerateInitInstanceLocal((::R3BMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallPoint(void *p = 0);
   static void *newArray_R3BXBallPoint(Long_t size, void *p);
   static void delete_R3BXBallPoint(void *p);
   static void deleteArray_R3BXBallPoint(void *p);
   static void destruct_R3BXBallPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallPoint*)
   {
      ::R3BXBallPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallPoint", ::R3BXBallPoint::Class_Version(), "invalid", 439,
                  typeid(::R3BXBallPoint), DefineBehavior(ptr, ptr),
                  &::R3BXBallPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallPoint) );
      instance.SetNew(&new_R3BXBallPoint);
      instance.SetNewArray(&newArray_R3BXBallPoint);
      instance.SetDelete(&delete_R3BXBallPoint);
      instance.SetDeleteArray(&deleteArray_R3BXBallPoint);
      instance.SetDestructor(&destruct_R3BXBallPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallPoint*)
   {
      return GenerateInitInstanceLocal((::R3BXBallPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloRawHit(void *p = 0);
   static void *newArray_R3BCaloRawHit(Long_t size, void *p);
   static void delete_R3BCaloRawHit(void *p);
   static void deleteArray_R3BCaloRawHit(void *p);
   static void destruct_R3BCaloRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloRawHit*)
   {
      ::R3BCaloRawHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloRawHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloRawHit", ::R3BCaloRawHit::Class_Version(), "invalid", 870,
                  typeid(::R3BCaloRawHit), DefineBehavior(ptr, ptr),
                  &::R3BCaloRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloRawHit) );
      instance.SetNew(&new_R3BCaloRawHit);
      instance.SetNewArray(&newArray_R3BCaloRawHit);
      instance.SetDelete(&delete_R3BCaloRawHit);
      instance.SetDeleteArray(&deleteArray_R3BCaloRawHit);
      instance.SetDestructor(&destruct_R3BCaloRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloRawHit*)
   {
      return GenerateInitInstanceLocal((::R3BCaloRawHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloRawHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallCrystalHit(void *p = 0);
   static void *newArray_R3BXBallCrystalHit(Long_t size, void *p);
   static void delete_R3BXBallCrystalHit(void *p);
   static void deleteArray_R3BXBallCrystalHit(void *p);
   static void destruct_R3BXBallCrystalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallCrystalHit*)
   {
      ::R3BXBallCrystalHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallCrystalHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallCrystalHit", ::R3BXBallCrystalHit::Class_Version(), "invalid", 555,
                  typeid(::R3BXBallCrystalHit), DefineBehavior(ptr, ptr),
                  &::R3BXBallCrystalHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallCrystalHit) );
      instance.SetNew(&new_R3BXBallCrystalHit);
      instance.SetNewArray(&newArray_R3BXBallCrystalHit);
      instance.SetDelete(&delete_R3BXBallCrystalHit);
      instance.SetDeleteArray(&deleteArray_R3BXBallCrystalHit);
      instance.SetDestructor(&destruct_R3BXBallCrystalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallCrystalHit*)
   {
      return GenerateInitInstanceLocal((::R3BXBallCrystalHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallCrystalHitSim(void *p = 0);
   static void *newArray_R3BXBallCrystalHitSim(Long_t size, void *p);
   static void delete_R3BXBallCrystalHitSim(void *p);
   static void deleteArray_R3BXBallCrystalHitSim(void *p);
   static void destruct_R3BXBallCrystalHitSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallCrystalHitSim*)
   {
      ::R3BXBallCrystalHitSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallCrystalHitSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallCrystalHitSim", ::R3BXBallCrystalHitSim::Class_Version(), "invalid", 617,
                  typeid(::R3BXBallCrystalHitSim), DefineBehavior(ptr, ptr),
                  &::R3BXBallCrystalHitSim::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallCrystalHitSim) );
      instance.SetNew(&new_R3BXBallCrystalHitSim);
      instance.SetNewArray(&newArray_R3BXBallCrystalHitSim);
      instance.SetDelete(&delete_R3BXBallCrystalHitSim);
      instance.SetDeleteArray(&deleteArray_R3BXBallCrystalHitSim);
      instance.SetDestructor(&destruct_R3BXBallCrystalHitSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallCrystalHitSim*)
   {
      return GenerateInitInstanceLocal((::R3BXBallCrystalHitSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloCrystalHit(void *p = 0);
   static void *newArray_R3BCaloCrystalHit(Long_t size, void *p);
   static void delete_R3BCaloCrystalHit(void *p);
   static void deleteArray_R3BCaloCrystalHit(void *p);
   static void destruct_R3BCaloCrystalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloCrystalHit*)
   {
      ::R3BCaloCrystalHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloCrystalHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloCrystalHit", ::R3BCaloCrystalHit::Class_Version(), "invalid", 704,
                  typeid(::R3BCaloCrystalHit), DefineBehavior(ptr, ptr),
                  &::R3BCaloCrystalHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloCrystalHit) );
      instance.SetNew(&new_R3BCaloCrystalHit);
      instance.SetNewArray(&newArray_R3BCaloCrystalHit);
      instance.SetDelete(&delete_R3BCaloCrystalHit);
      instance.SetDeleteArray(&deleteArray_R3BCaloCrystalHit);
      instance.SetDestructor(&destruct_R3BCaloCrystalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloCrystalHit*)
   {
      return GenerateInitInstanceLocal((::R3BCaloCrystalHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloCrystalHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloCrystalHitSim(void *p = 0);
   static void *newArray_R3BCaloCrystalHitSim(Long_t size, void *p);
   static void delete_R3BCaloCrystalHitSim(void *p);
   static void deleteArray_R3BCaloCrystalHitSim(void *p);
   static void destruct_R3BCaloCrystalHitSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloCrystalHitSim*)
   {
      ::R3BCaloCrystalHitSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloCrystalHitSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloCrystalHitSim", ::R3BCaloCrystalHitSim::Class_Version(), "invalid", 780,
                  typeid(::R3BCaloCrystalHitSim), DefineBehavior(ptr, ptr),
                  &::R3BCaloCrystalHitSim::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloCrystalHitSim) );
      instance.SetNew(&new_R3BCaloCrystalHitSim);
      instance.SetNewArray(&newArray_R3BCaloCrystalHitSim);
      instance.SetDelete(&delete_R3BCaloCrystalHitSim);
      instance.SetDeleteArray(&deleteArray_R3BCaloCrystalHitSim);
      instance.SetDestructor(&destruct_R3BCaloCrystalHitSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloCrystalHitSim*)
   {
      return GenerateInitInstanceLocal((::R3BCaloCrystalHitSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloCrystalHitSim*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloHit(void *p = 0);
   static void *newArray_R3BCaloHit(Long_t size, void *p);
   static void delete_R3BCaloHit(void *p);
   static void deleteArray_R3BCaloHit(void *p);
   static void destruct_R3BCaloHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloHit*)
   {
      ::R3BCaloHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloHit", ::R3BCaloHit::Class_Version(), "invalid", 935,
                  typeid(::R3BCaloHit), DefineBehavior(ptr, ptr),
                  &::R3BCaloHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloHit) );
      instance.SetNew(&new_R3BCaloHit);
      instance.SetNewArray(&newArray_R3BCaloHit);
      instance.SetDelete(&delete_R3BCaloHit);
      instance.SetDeleteArray(&deleteArray_R3BCaloHit);
      instance.SetDestructor(&destruct_R3BCaloHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloHit*)
   {
      return GenerateInitInstanceLocal((::R3BCaloHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloHitSim(void *p = 0);
   static void *newArray_R3BCaloHitSim(Long_t size, void *p);
   static void delete_R3BCaloHitSim(void *p);
   static void deleteArray_R3BCaloHitSim(void *p);
   static void destruct_R3BCaloHitSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloHitSim*)
   {
      ::R3BCaloHitSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloHitSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloHitSim", ::R3BCaloHitSim::Class_Version(), "invalid", 1021,
                  typeid(::R3BCaloHitSim), DefineBehavior(ptr, ptr),
                  &::R3BCaloHitSim::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloHitSim) );
      instance.SetNew(&new_R3BCaloHitSim);
      instance.SetNewArray(&newArray_R3BCaloHitSim);
      instance.SetDelete(&delete_R3BCaloHitSim);
      instance.SetDeleteArray(&deleteArray_R3BCaloHitSim);
      instance.SetDestructor(&destruct_R3BCaloHitSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloHitSim*)
   {
      return GenerateInitInstanceLocal((::R3BCaloHitSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloHitSim*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCaloPoint(void *p = 0);
   static void *newArray_R3BCaloPoint(Long_t size, void *p);
   static void delete_R3BCaloPoint(void *p);
   static void deleteArray_R3BCaloPoint(void *p);
   static void destruct_R3BCaloPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCaloPoint*)
   {
      ::R3BCaloPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCaloPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCaloPoint", ::R3BCaloPoint::Class_Version(), "invalid", 1092,
                  typeid(::R3BCaloPoint), DefineBehavior(ptr, ptr),
                  &::R3BCaloPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCaloPoint) );
      instance.SetNew(&new_R3BCaloPoint);
      instance.SetNewArray(&newArray_R3BCaloPoint);
      instance.SetDelete(&delete_R3BCaloPoint);
      instance.SetDeleteArray(&deleteArray_R3BCaloPoint);
      instance.SetDestructor(&destruct_R3BCaloPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCaloPoint*)
   {
      return GenerateInitInstanceLocal((::R3BCaloPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCaloPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchPoint(void *p = 0);
   static void *newArray_R3BDchPoint(Long_t size, void *p);
   static void delete_R3BDchPoint(void *p);
   static void deleteArray_R3BDchPoint(void *p);
   static void destruct_R3BDchPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchPoint*)
   {
      ::R3BDchPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchPoint", ::R3BDchPoint::Class_Version(), "invalid", 1273,
                  typeid(::R3BDchPoint), DefineBehavior(ptr, ptr),
                  &::R3BDchPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchPoint) );
      instance.SetNew(&new_R3BDchPoint);
      instance.SetNewArray(&newArray_R3BDchPoint);
      instance.SetDelete(&delete_R3BDchPoint);
      instance.SetDeleteArray(&deleteArray_R3BDchPoint);
      instance.SetDestructor(&destruct_R3BDchPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchPoint*)
   {
      return GenerateInitInstanceLocal((::R3BDchPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchFullPoint(void *p = 0);
   static void *newArray_R3BDchFullPoint(Long_t size, void *p);
   static void delete_R3BDchFullPoint(void *p);
   static void deleteArray_R3BDchFullPoint(void *p);
   static void destruct_R3BDchFullPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchFullPoint*)
   {
      ::R3BDchFullPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchFullPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchFullPoint", ::R3BDchFullPoint::Class_Version(), "invalid", 1419,
                  typeid(::R3BDchFullPoint), DefineBehavior(ptr, ptr),
                  &::R3BDchFullPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchFullPoint) );
      instance.SetNew(&new_R3BDchFullPoint);
      instance.SetNewArray(&newArray_R3BDchFullPoint);
      instance.SetDelete(&delete_R3BDchFullPoint);
      instance.SetDeleteArray(&deleteArray_R3BDchFullPoint);
      instance.SetDestructor(&destruct_R3BDchFullPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchFullPoint*)
   {
      return GenerateInitInstanceLocal((::R3BDchFullPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchDigi(void *p = 0);
   static void *newArray_R3BDchDigi(Long_t size, void *p);
   static void delete_R3BDchDigi(void *p);
   static void deleteArray_R3BDchDigi(void *p);
   static void destruct_R3BDchDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchDigi*)
   {
      ::R3BDchDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchDigi", ::R3BDchDigi::Class_Version(), "invalid", 3556,
                  typeid(::R3BDchDigi), DefineBehavior(ptr, ptr),
                  &::R3BDchDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchDigi) );
      instance.SetNew(&new_R3BDchDigi);
      instance.SetNewArray(&newArray_R3BDchDigi);
      instance.SetDelete(&delete_R3BDchDigi);
      instance.SetDeleteArray(&deleteArray_R3BDchDigi);
      instance.SetDestructor(&destruct_R3BDchDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchDigi*)
   {
      return GenerateInitInstanceLocal((::R3BDchDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDch2pDigi(void *p = 0);
   static void *newArray_R3BDch2pDigi(Long_t size, void *p);
   static void delete_R3BDch2pDigi(void *p);
   static void deleteArray_R3BDch2pDigi(void *p);
   static void destruct_R3BDch2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDch2pDigi*)
   {
      ::R3BDch2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDch2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDch2pDigi", ::R3BDch2pDigi::Class_Version(), "invalid", 3631,
                  typeid(::R3BDch2pDigi), DefineBehavior(ptr, ptr),
                  &::R3BDch2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDch2pDigi) );
      instance.SetNew(&new_R3BDch2pDigi);
      instance.SetNewArray(&newArray_R3BDch2pDigi);
      instance.SetDelete(&delete_R3BDch2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BDch2pDigi);
      instance.SetDestructor(&destruct_R3BDch2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDch2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BDch2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiPoint(void *p = 0);
   static void *newArray_R3BGfiPoint(Long_t size, void *p);
   static void delete_R3BGfiPoint(void *p);
   static void deleteArray_R3BGfiPoint(void *p);
   static void destruct_R3BGfiPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiPoint*)
   {
      ::R3BGfiPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiPoint", ::R3BGfiPoint::Class_Version(), "invalid", 1507,
                  typeid(::R3BGfiPoint), DefineBehavior(ptr, ptr),
                  &::R3BGfiPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiPoint) );
      instance.SetNew(&new_R3BGfiPoint);
      instance.SetNewArray(&newArray_R3BGfiPoint);
      instance.SetDelete(&delete_R3BGfiPoint);
      instance.SetDeleteArray(&deleteArray_R3BGfiPoint);
      instance.SetDestructor(&destruct_R3BGfiPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiPoint*)
   {
      return GenerateInitInstanceLocal((::R3BGfiPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiDigi(void *p = 0);
   static void *newArray_R3BGfiDigi(Long_t size, void *p);
   static void delete_R3BGfiDigi(void *p);
   static void deleteArray_R3BGfiDigi(void *p);
   static void destruct_R3BGfiDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiDigi*)
   {
      ::R3BGfiDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiDigi", ::R3BGfiDigi::Class_Version(), "invalid", 4025,
                  typeid(::R3BGfiDigi), DefineBehavior(ptr, ptr),
                  &::R3BGfiDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiDigi) );
      instance.SetNew(&new_R3BGfiDigi);
      instance.SetNewArray(&newArray_R3BGfiDigi);
      instance.SetDelete(&delete_R3BGfiDigi);
      instance.SetDeleteArray(&deleteArray_R3BGfiDigi);
      instance.SetDestructor(&destruct_R3BGfiDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiDigi*)
   {
      return GenerateInitInstanceLocal((::R3BGfiDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofPoint(void *p = 0);
   static void *newArray_R3BmTofPoint(Long_t size, void *p);
   static void delete_R3BmTofPoint(void *p);
   static void deleteArray_R3BmTofPoint(void *p);
   static void destruct_R3BmTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofPoint*)
   {
      ::R3BmTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofPoint", ::R3BmTofPoint::Class_Version(), "invalid", 1626,
                  typeid(::R3BmTofPoint), DefineBehavior(ptr, ptr),
                  &::R3BmTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofPoint) );
      instance.SetNew(&new_R3BmTofPoint);
      instance.SetNewArray(&newArray_R3BmTofPoint);
      instance.SetDelete(&delete_R3BmTofPoint);
      instance.SetDeleteArray(&deleteArray_R3BmTofPoint);
      instance.SetDestructor(&destruct_R3BmTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofPoint*)
   {
      return GenerateInitInstanceLocal((::R3BmTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofDigi(void *p = 0);
   static void *newArray_R3BmTofDigi(Long_t size, void *p);
   static void delete_R3BmTofDigi(void *p);
   static void deleteArray_R3BmTofDigi(void *p);
   static void destruct_R3BmTofDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofDigi*)
   {
      ::R3BmTofDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofDigi", ::R3BmTofDigi::Class_Version(), "invalid", 3937,
                  typeid(::R3BmTofDigi), DefineBehavior(ptr, ptr),
                  &::R3BmTofDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofDigi) );
      instance.SetNew(&new_R3BmTofDigi);
      instance.SetNewArray(&newArray_R3BmTofDigi);
      instance.SetDelete(&delete_R3BmTofDigi);
      instance.SetDeleteArray(&deleteArray_R3BmTofDigi);
      instance.SetDestructor(&destruct_R3BmTofDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofDigi*)
   {
      return GenerateInitInstanceLocal((::R3BmTofDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BdTofPoint(void *p = 0);
   static void *newArray_R3BdTofPoint(Long_t size, void *p);
   static void delete_R3BdTofPoint(void *p);
   static void deleteArray_R3BdTofPoint(void *p);
   static void destruct_R3BdTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BdTofPoint*)
   {
      ::R3BdTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BdTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BdTofPoint", ::R3BdTofPoint::Class_Version(), "invalid", 1743,
                  typeid(::R3BdTofPoint), DefineBehavior(ptr, ptr),
                  &::R3BdTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BdTofPoint) );
      instance.SetNew(&new_R3BdTofPoint);
      instance.SetNewArray(&newArray_R3BdTofPoint);
      instance.SetDelete(&delete_R3BdTofPoint);
      instance.SetDeleteArray(&deleteArray_R3BdTofPoint);
      instance.SetDestructor(&destruct_R3BdTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BdTofPoint*)
   {
      return GenerateInitInstanceLocal((::R3BdTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BdTofPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofPoint(void *p = 0);
   static void *newArray_R3BTofPoint(Long_t size, void *p);
   static void delete_R3BTofPoint(void *p);
   static void deleteArray_R3BTofPoint(void *p);
   static void destruct_R3BTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofPoint*)
   {
      ::R3BTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofPoint", ::R3BTofPoint::Class_Version(), "invalid", 1860,
                  typeid(::R3BTofPoint), DefineBehavior(ptr, ptr),
                  &::R3BTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofPoint) );
      instance.SetNew(&new_R3BTofPoint);
      instance.SetNewArray(&newArray_R3BTofPoint);
      instance.SetDelete(&delete_R3BTofPoint);
      instance.SetDeleteArray(&deleteArray_R3BTofPoint);
      instance.SetDestructor(&destruct_R3BTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofPoint*)
   {
      return GenerateInitInstanceLocal((::R3BTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigi(void *p = 0);
   static void *newArray_R3BTofDigi(Long_t size, void *p);
   static void delete_R3BTofDigi(void *p);
   static void deleteArray_R3BTofDigi(void *p);
   static void destruct_R3BTofDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigi*)
   {
      ::R3BTofDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigi", ::R3BTofDigi::Class_Version(), "invalid", 3729,
                  typeid(::R3BTofDigi), DefineBehavior(ptr, ptr),
                  &::R3BTofDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigi) );
      instance.SetNew(&new_R3BTofDigi);
      instance.SetNewArray(&newArray_R3BTofDigi);
      instance.SetDelete(&delete_R3BTofDigi);
      instance.SetDeleteArray(&deleteArray_R3BTofDigi);
      instance.SetDestructor(&destruct_R3BTofDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigi(void *p = 0);
   static void *newArray_R3BTof2pDigi(Long_t size, void *p);
   static void delete_R3BTof2pDigi(void *p);
   static void deleteArray_R3BTof2pDigi(void *p);
   static void destruct_R3BTof2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigi*)
   {
      ::R3BTof2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigi", ::R3BTof2pDigi::Class_Version(), "invalid", 3815,
                  typeid(::R3BTof2pDigi), DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigi) );
      instance.SetNew(&new_R3BTof2pDigi);
      instance.SetNewArray(&newArray_R3BTof2pDigi);
      instance.SetDelete(&delete_R3BTof2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigi);
      instance.SetDestructor(&destruct_R3BTof2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BVetoPoint(void *p = 0);
   static void *newArray_R3BVetoPoint(Long_t size, void *p);
   static void delete_R3BVetoPoint(void *p);
   static void deleteArray_R3BVetoPoint(void *p);
   static void destruct_R3BVetoPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BVetoPoint*)
   {
      ::R3BVetoPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BVetoPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BVetoPoint", ::R3BVetoPoint::Class_Version(), "invalid", 1977,
                  typeid(::R3BVetoPoint), DefineBehavior(ptr, ptr),
                  &::R3BVetoPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BVetoPoint) );
      instance.SetNew(&new_R3BVetoPoint);
      instance.SetNewArray(&newArray_R3BVetoPoint);
      instance.SetDelete(&delete_R3BVetoPoint);
      instance.SetDeleteArray(&deleteArray_R3BVetoPoint);
      instance.SetDestructor(&destruct_R3BVetoPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BVetoPoint*)
   {
      return GenerateInitInstanceLocal((::R3BVetoPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraPoint(void *p = 0);
   static void *newArray_R3BSTaRTraPoint(Long_t size, void *p);
   static void delete_R3BSTaRTraPoint(void *p);
   static void deleteArray_R3BSTaRTraPoint(void *p);
   static void destruct_R3BSTaRTraPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraPoint*)
   {
      ::R3BSTaRTraPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraPoint", ::R3BSTaRTraPoint::Class_Version(), "invalid", 2580,
                  typeid(::R3BSTaRTraPoint), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraPoint) );
      instance.SetNew(&new_R3BSTaRTraPoint);
      instance.SetNewArray(&newArray_R3BSTaRTraPoint);
      instance.SetDelete(&delete_R3BSTaRTraPoint);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraPoint);
      instance.SetDestructor(&destruct_R3BSTaRTraPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraPoint*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraHit(void *p = 0);
   static void *newArray_R3BSTaRTraHit(Long_t size, void *p);
   static void delete_R3BSTaRTraHit(void *p);
   static void deleteArray_R3BSTaRTraHit(void *p);
   static void destruct_R3BSTaRTraHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraHit*)
   {
      ::R3BSTaRTraHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraHit", ::R3BSTaRTraHit::Class_Version(), "invalid", 2702,
                  typeid(::R3BSTaRTraHit), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraHit) );
      instance.SetNew(&new_R3BSTaRTraHit);
      instance.SetNewArray(&newArray_R3BSTaRTraHit);
      instance.SetDelete(&delete_R3BSTaRTraHit);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraHit);
      instance.SetDestructor(&destruct_R3BSTaRTraHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraHit*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTrackerHit(void *p = 0);
   static void *newArray_R3BSTaRTrackerHit(Long_t size, void *p);
   static void delete_R3BSTaRTrackerHit(void *p);
   static void deleteArray_R3BSTaRTrackerHit(void *p);
   static void destruct_R3BSTaRTrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTrackerHit*)
   {
      ::R3BSTaRTrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTrackerHit", ::R3BSTaRTrackerHit::Class_Version(), "invalid", 2758,
                  typeid(::R3BSTaRTrackerHit), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTrackerHit) );
      instance.SetNew(&new_R3BSTaRTrackerHit);
      instance.SetNewArray(&newArray_R3BSTaRTrackerHit);
      instance.SetDelete(&delete_R3BSTaRTrackerHit);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTrackerHit);
      instance.SetDestructor(&destruct_R3BSTaRTrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTrackerHit*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTrackerHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTrackerDigitHit(void *p = 0);
   static void *newArray_R3BSTaRTrackerDigitHit(Long_t size, void *p);
   static void delete_R3BSTaRTrackerDigitHit(void *p);
   static void deleteArray_R3BSTaRTrackerDigitHit(void *p);
   static void destruct_R3BSTaRTrackerDigitHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTrackerDigitHit*)
   {
      ::R3BSTaRTrackerDigitHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTrackerDigitHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTrackerDigitHit", ::R3BSTaRTrackerDigitHit::Class_Version(), "invalid", 2845,
                  typeid(::R3BSTaRTrackerDigitHit), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTrackerDigitHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTrackerDigitHit) );
      instance.SetNew(&new_R3BSTaRTrackerDigitHit);
      instance.SetNewArray(&newArray_R3BSTaRTrackerDigitHit);
      instance.SetDelete(&delete_R3BSTaRTrackerDigitHit);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTrackerDigitHit);
      instance.SetDestructor(&destruct_R3BSTaRTrackerDigitHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTrackerDigitHit*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTrackerDigitHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTrackerDigitHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraPoint(void *p = 0);
   static void *newArray_R3BTraPoint(Long_t size, void *p);
   static void delete_R3BTraPoint(void *p);
   static void deleteArray_R3BTraPoint(void *p);
   static void destruct_R3BTraPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraPoint*)
   {
      ::R3BTraPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraPoint", ::R3BTraPoint::Class_Version(), "invalid", 2219,
                  typeid(::R3BTraPoint), DefineBehavior(ptr, ptr),
                  &::R3BTraPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraPoint) );
      instance.SetNew(&new_R3BTraPoint);
      instance.SetNewArray(&newArray_R3BTraPoint);
      instance.SetDelete(&delete_R3BTraPoint);
      instance.SetDeleteArray(&deleteArray_R3BTraPoint);
      instance.SetDestructor(&destruct_R3BTraPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraPoint*)
   {
      return GenerateInitInstanceLocal((::R3BTraPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraHit(void *p = 0);
   static void *newArray_R3BTraHit(Long_t size, void *p);
   static void delete_R3BTraHit(void *p);
   static void deleteArray_R3BTraHit(void *p);
   static void destruct_R3BTraHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraHit*)
   {
      ::R3BTraHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraHit", ::R3BTraHit::Class_Version(), "invalid", 2340,
                  typeid(::R3BTraHit), DefineBehavior(ptr, ptr),
                  &::R3BTraHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraHit) );
      instance.SetNew(&new_R3BTraHit);
      instance.SetNewArray(&newArray_R3BTraHit);
      instance.SetDelete(&delete_R3BTraHit);
      instance.SetDeleteArray(&deleteArray_R3BTraHit);
      instance.SetDestructor(&destruct_R3BTraHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraHit*)
   {
      return GenerateInitInstanceLocal((::R3BTraHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTraHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackerHit(void *p = 0);
   static void *newArray_R3BTrackerHit(Long_t size, void *p);
   static void delete_R3BTrackerHit(void *p);
   static void deleteArray_R3BTrackerHit(void *p);
   static void destruct_R3BTrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackerHit*)
   {
      ::R3BTrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackerHit", ::R3BTrackerHit::Class_Version(), "invalid", 2489,
                  typeid(::R3BTrackerHit), DefineBehavior(ptr, ptr),
                  &::R3BTrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackerHit) );
      instance.SetNew(&new_R3BTrackerHit);
      instance.SetNewArray(&newArray_R3BTrackerHit);
      instance.SetDelete(&delete_R3BTrackerHit);
      instance.SetDeleteArray(&deleteArray_R3BTrackerHit);
      instance.SetDestructor(&destruct_R3BTrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackerHit*)
   {
      return GenerateInitInstanceLocal((::R3BTrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraDigi(void *p = 0);
   static void *newArray_R3BTraDigi(Long_t size, void *p);
   static void delete_R3BTraDigi(void *p);
   static void deleteArray_R3BTraDigi(void *p);
   static void destruct_R3BTraDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraDigi*)
   {
      ::R3BTraDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraDigi", ::R3BTraDigi::Class_Version(), "invalid", 4088,
                  typeid(::R3BTraDigi), DefineBehavior(ptr, ptr),
                  &::R3BTraDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraDigi) );
      instance.SetNew(&new_R3BTraDigi);
      instance.SetNewArray(&newArray_R3BTraDigi);
      instance.SetDelete(&delete_R3BTraDigi);
      instance.SetDeleteArray(&deleteArray_R3BTraDigi);
      instance.SetDestructor(&destruct_R3BTraDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTraDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTra2pDigi(void *p = 0);
   static void *newArray_R3BTra2pDigi(Long_t size, void *p);
   static void delete_R3BTra2pDigi(void *p);
   static void deleteArray_R3BTra2pDigi(void *p);
   static void destruct_R3BTra2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTra2pDigi*)
   {
      ::R3BTra2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTra2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTra2pDigi", ::R3BTra2pDigi::Class_Version(), "invalid", 4328,
                  typeid(::R3BTra2pDigi), DefineBehavior(ptr, ptr),
                  &::R3BTra2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTra2pDigi) );
      instance.SetNew(&new_R3BTra2pDigi);
      instance.SetNewArray(&newArray_R3BTra2pDigi);
      instance.SetDelete(&delete_R3BTra2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTra2pDigi);
      instance.SetDestructor(&destruct_R3BTra2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTra2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTra2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraFraDigi(void *p = 0);
   static void *newArray_R3BTraFraDigi(Long_t size, void *p);
   static void delete_R3BTraFraDigi(void *p);
   static void deleteArray_R3BTraFraDigi(void *p);
   static void destruct_R3BTraFraDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraFraDigi*)
   {
      ::R3BTraFraDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraFraDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraFraDigi", ::R3BTraFraDigi::Class_Version(), "invalid", 4568,
                  typeid(::R3BTraFraDigi), DefineBehavior(ptr, ptr),
                  &::R3BTraFraDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraFraDigi) );
      instance.SetNew(&new_R3BTraFraDigi);
      instance.SetNewArray(&newArray_R3BTraFraDigi);
      instance.SetDelete(&delete_R3BTraFraDigi);
      instance.SetDeleteArray(&deleteArray_R3BTraFraDigi);
      instance.SetDestructor(&destruct_R3BTraFraDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraFraDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTraFraDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTargetDigi(void *p = 0);
   static void *newArray_R3BTargetDigi(Long_t size, void *p);
   static void delete_R3BTargetDigi(void *p);
   static void deleteArray_R3BTargetDigi(void *p);
   static void destruct_R3BTargetDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTargetDigi*)
   {
      ::R3BTargetDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTargetDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTargetDigi", ::R3BTargetDigi::Class_Version(), "invalid", 4711,
                  typeid(::R3BTargetDigi), DefineBehavior(ptr, ptr),
                  &::R3BTargetDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTargetDigi) );
      instance.SetNew(&new_R3BTargetDigi);
      instance.SetNewArray(&newArray_R3BTargetDigi);
      instance.SetDelete(&delete_R3BTargetDigi);
      instance.SetDeleteArray(&deleteArray_R3BTargetDigi);
      instance.SetDestructor(&destruct_R3BTargetDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTargetDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTargetDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTarget2pDigi(void *p = 0);
   static void *newArray_R3BTarget2pDigi(Long_t size, void *p);
   static void delete_R3BTarget2pDigi(void *p);
   static void deleteArray_R3BTarget2pDigi(void *p);
   static void destruct_R3BTarget2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTarget2pDigi*)
   {
      ::R3BTarget2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTarget2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTarget2pDigi", ::R3BTarget2pDigi::Class_Version(), "invalid", 4838,
                  typeid(::R3BTarget2pDigi), DefineBehavior(ptr, ptr),
                  &::R3BTarget2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTarget2pDigi) );
      instance.SetNew(&new_R3BTarget2pDigi);
      instance.SetNewArray(&newArray_R3BTarget2pDigi);
      instance.SetDelete(&delete_R3BTarget2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTarget2pDigi);
      instance.SetDestructor(&destruct_R3BTarget2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTarget2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTarget2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSitrackerHit(void *p = 0);
   static void *newArray_R3BSitrackerHit(Long_t size, void *p);
   static void delete_R3BSitrackerHit(void *p);
   static void deleteArray_R3BSitrackerHit(void *p);
   static void destruct_R3BSitrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSitrackerHit*)
   {
      ::R3BSitrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSitrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSitrackerHit", ::R3BSitrackerHit::Class_Version(), "invalid", 2394,
                  typeid(::R3BSitrackerHit), DefineBehavior(ptr, ptr),
                  &::R3BSitrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSitrackerHit) );
      instance.SetNew(&new_R3BSitrackerHit);
      instance.SetNewArray(&newArray_R3BSitrackerHit);
      instance.SetDelete(&delete_R3BSitrackerHit);
      instance.SetDeleteArray(&deleteArray_R3BSitrackerHit);
      instance.SetDestructor(&destruct_R3BSitrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSitrackerHit*)
   {
      return GenerateInitInstanceLocal((::R3BSitrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandPoint(void *p = 0);
   static void *newArray_R3BLandPoint(Long_t size, void *p);
   static void delete_R3BLandPoint(void *p);
   static void deleteArray_R3BLandPoint(void *p);
   static void destruct_R3BLandPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandPoint*)
   {
      ::R3BLandPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandPoint", ::R3BLandPoint::Class_Version(), "invalid", 2934,
                  typeid(::R3BLandPoint), DefineBehavior(ptr, ptr),
                  &::R3BLandPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandPoint) );
      instance.SetNew(&new_R3BLandPoint);
      instance.SetNewArray(&newArray_R3BLandPoint);
      instance.SetDelete(&delete_R3BLandPoint);
      instance.SetDeleteArray(&deleteArray_R3BLandPoint);
      instance.SetDestructor(&destruct_R3BLandPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandPoint*)
   {
      return GenerateInitInstanceLocal((::R3BLandPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTrack(void *p = 0);
   static void *newArray_R3BNeutronTrack(Long_t size, void *p);
   static void delete_R3BNeutronTrack(void *p);
   static void deleteArray_R3BNeutronTrack(void *p);
   static void destruct_R3BNeutronTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTrack*)
   {
      ::R3BNeutronTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTrack", ::R3BNeutronTrack::Class_Version(), "invalid", 3463,
                  typeid(::R3BNeutronTrack), DefineBehavior(ptr, ptr),
                  &::R3BNeutronTrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTrack) );
      instance.SetNew(&new_R3BNeutronTrack);
      instance.SetNewArray(&newArray_R3BNeutronTrack);
      instance.SetDelete(&delete_R3BNeutronTrack);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTrack);
      instance.SetDestructor(&destruct_R3BNeutronTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTrack*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigi(void *p = 0);
   static void *newArray_R3BLandDigi(Long_t size, void *p);
   static void delete_R3BLandDigi(void *p);
   static void deleteArray_R3BLandDigi(void *p);
   static void destruct_R3BLandDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigi*)
   {
      ::R3BLandDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigi", ::R3BLandDigi::Class_Version(), "invalid", 3059,
                  typeid(::R3BLandDigi), DefineBehavior(ptr, ptr),
                  &::R3BLandDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigi) );
      instance.SetNew(&new_R3BLandDigi);
      instance.SetNewArray(&newArray_R3BLandDigi);
      instance.SetDelete(&delete_R3BLandDigi);
      instance.SetDeleteArray(&deleteArray_R3BLandDigi);
      instance.SetDestructor(&destruct_R3BLandDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigi*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandFirstHits(void *p = 0);
   static void *newArray_R3BLandFirstHits(Long_t size, void *p);
   static void delete_R3BLandFirstHits(void *p);
   static void deleteArray_R3BLandFirstHits(void *p);
   static void destruct_R3BLandFirstHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandFirstHits*)
   {
      ::R3BLandFirstHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandFirstHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandFirstHits", ::R3BLandFirstHits::Class_Version(), "invalid", 3156,
                  typeid(::R3BLandFirstHits), DefineBehavior(ptr, ptr),
                  &::R3BLandFirstHits::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandFirstHits) );
      instance.SetNew(&new_R3BLandFirstHits);
      instance.SetNewArray(&newArray_R3BLandFirstHits);
      instance.SetDelete(&delete_R3BLandFirstHits);
      instance.SetDeleteArray(&deleteArray_R3BLandFirstHits);
      instance.SetDestructor(&destruct_R3BLandFirstHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandFirstHits*)
   {
      return GenerateInitInstanceLocal((::R3BLandFirstHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandHit(void *p = 0);
   static void *newArray_R3BLandHit(Long_t size, void *p);
   static void delete_R3BLandHit(void *p);
   static void deleteArray_R3BLandHit(void *p);
   static void destruct_R3BLandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandHit*)
   {
      ::R3BLandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandHit", ::R3BLandHit::Class_Version(), "invalid", 3311,
                  typeid(::R3BLandHit), DefineBehavior(ptr, ptr),
                  &::R3BLandHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandHit) );
      instance.SetNew(&new_R3BLandHit);
      instance.SetNewArray(&newArray_R3BLandHit);
      instance.SetDelete(&delete_R3BLandHit);
      instance.SetDeleteArray(&deleteArray_R3BLandHit);
      instance.SetDestructor(&destruct_R3BLandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandHit*)
   {
      return GenerateInitInstanceLocal((::R3BLandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPaddleCrystalHit(void *p = 0);
   static void *newArray_R3BPaddleCrystalHit(Long_t size, void *p);
   static void delete_R3BPaddleCrystalHit(void *p);
   static void deleteArray_R3BPaddleCrystalHit(void *p);
   static void destruct_R3BPaddleCrystalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPaddleCrystalHit*)
   {
      ::R3BPaddleCrystalHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPaddleCrystalHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPaddleCrystalHit", ::R3BPaddleCrystalHit::Class_Version(), "invalid", 3371,
                  typeid(::R3BPaddleCrystalHit), DefineBehavior(ptr, ptr),
                  &::R3BPaddleCrystalHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPaddleCrystalHit) );
      instance.SetNew(&new_R3BPaddleCrystalHit);
      instance.SetNewArray(&newArray_R3BPaddleCrystalHit);
      instance.SetDelete(&delete_R3BPaddleCrystalHit);
      instance.SetDeleteArray(&deleteArray_R3BPaddleCrystalHit);
      instance.SetDestructor(&destruct_R3BPaddleCrystalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPaddleCrystalHit*)
   {
      return GenerateInitInstanceLocal((::R3BPaddleCrystalHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ELILuMonPoint(void *p = 0);
   static void *newArray_ELILuMonPoint(Long_t size, void *p);
   static void delete_ELILuMonPoint(void *p);
   static void deleteArray_ELILuMonPoint(void *p);
   static void destruct_ELILuMonPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELILuMonPoint*)
   {
      ::ELILuMonPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELILuMonPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELILuMonPoint", ::ELILuMonPoint::Class_Version(), "invalid", 2099,
                  typeid(::ELILuMonPoint), DefineBehavior(ptr, ptr),
                  &::ELILuMonPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ELILuMonPoint) );
      instance.SetNew(&new_ELILuMonPoint);
      instance.SetNewArray(&newArray_ELILuMonPoint);
      instance.SetDelete(&delete_ELILuMonPoint);
      instance.SetDeleteArray(&deleteArray_ELILuMonPoint);
      instance.SetDestructor(&destruct_ELILuMonPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELILuMonPoint*)
   {
      return GenerateInitInstanceLocal((::ELILuMonPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiPoint(void *p = 0);
   static void *newArray_R3BMfiPoint(Long_t size, void *p);
   static void delete_R3BMfiPoint(void *p);
   static void deleteArray_R3BMfiPoint(void *p);
   static void destruct_R3BMfiPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiPoint*)
   {
      ::R3BMfiPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiPoint", ::R3BMfiPoint::Class_Version(), "invalid", 4996,
                  typeid(::R3BMfiPoint), DefineBehavior(ptr, ptr),
                  &::R3BMfiPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiPoint) );
      instance.SetNew(&new_R3BMfiPoint);
      instance.SetNewArray(&newArray_R3BMfiPoint);
      instance.SetDelete(&delete_R3BMfiPoint);
      instance.SetDeleteArray(&deleteArray_R3BMfiPoint);
      instance.SetDestructor(&destruct_R3BMfiPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiPoint*)
   {
      return GenerateInitInstanceLocal((::R3BMfiPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiDigi(void *p = 0);
   static void *newArray_R3BMfiDigi(Long_t size, void *p);
   static void delete_R3BMfiDigi(void *p);
   static void deleteArray_R3BMfiDigi(void *p);
   static void destruct_R3BMfiDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiDigi*)
   {
      ::R3BMfiDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiDigi", ::R3BMfiDigi::Class_Version(), "invalid", 5117,
                  typeid(::R3BMfiDigi), DefineBehavior(ptr, ptr),
                  &::R3BMfiDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiDigi) );
      instance.SetNew(&new_R3BMfiDigi);
      instance.SetNewArray(&newArray_R3BMfiDigi);
      instance.SetDelete(&delete_R3BMfiDigi);
      instance.SetDeleteArray(&deleteArray_R3BMfiDigi);
      instance.SetDestructor(&destruct_R3BMfiDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiDigi*)
   {
      return GenerateInitInstanceLocal((::R3BMfiDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspPoint(void *p = 0);
   static void *newArray_R3BPspPoint(Long_t size, void *p);
   static void delete_R3BPspPoint(void *p);
   static void deleteArray_R3BPspPoint(void *p);
   static void destruct_R3BPspPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspPoint*)
   {
      ::R3BPspPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspPoint", ::R3BPspPoint::Class_Version(), "invalid", 5191,
                  typeid(::R3BPspPoint), DefineBehavior(ptr, ptr),
                  &::R3BPspPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspPoint) );
      instance.SetNew(&new_R3BPspPoint);
      instance.SetNewArray(&newArray_R3BPspPoint);
      instance.SetDelete(&delete_R3BPspPoint);
      instance.SetDeleteArray(&deleteArray_R3BPspPoint);
      instance.SetDestructor(&destruct_R3BPspPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspPoint*)
   {
      return GenerateInitInstanceLocal((::R3BPspPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigi(void *p = 0);
   static void *newArray_R3BPspDigi(Long_t size, void *p);
   static void delete_R3BPspDigi(void *p);
   static void deleteArray_R3BPspDigi(void *p);
   static void destruct_R3BPspDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigi*)
   {
      ::R3BPspDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigi", ::R3BPspDigi::Class_Version(), "invalid", 5310,
                  typeid(::R3BPspDigi), DefineBehavior(ptr, ptr),
                  &::R3BPspDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigi) );
      instance.SetNew(&new_R3BPspDigi);
      instance.SetNewArray(&newArray_R3BPspDigi);
      instance.SetDelete(&delete_R3BPspDigi);
      instance.SetDeleteArray(&deleteArray_R3BPspDigi);
      instance.SetDestructor(&destruct_R3BPspDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigi*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandRawItem(void *p = 0);
   static void *newArray_R3BNeulandRawItem(Long_t size, void *p);
   static void delete_R3BNeulandRawItem(void *p);
   static void deleteArray_R3BNeulandRawItem(void *p);
   static void destruct_R3BNeulandRawItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandRawItem*)
   {
      ::R3BNeulandRawItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandRawItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandRawItem", ::R3BNeulandRawItem::Class_Version(), "invalid", 5365,
                  typeid(::R3BNeulandRawItem), DefineBehavior(ptr, ptr),
                  &::R3BNeulandRawItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandRawItem) );
      instance.SetNew(&new_R3BNeulandRawItem);
      instance.SetNewArray(&newArray_R3BNeulandRawItem);
      instance.SetDelete(&delete_R3BNeulandRawItem);
      instance.SetDeleteArray(&deleteArray_R3BNeulandRawItem);
      instance.SetDestructor(&destruct_R3BNeulandRawItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandRawItem*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandRawItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandRawItem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMappedItem(void *p = 0);
   static void *newArray_R3BNeulandMappedItem(Long_t size, void *p);
   static void delete_R3BNeulandMappedItem(void *p);
   static void deleteArray_R3BNeulandMappedItem(void *p);
   static void destruct_R3BNeulandMappedItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMappedItem*)
   {
      ::R3BNeulandMappedItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMappedItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMappedItem", ::R3BNeulandMappedItem::Class_Version(), "invalid", 5450,
                  typeid(::R3BNeulandMappedItem), DefineBehavior(ptr, ptr),
                  &::R3BNeulandMappedItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMappedItem) );
      instance.SetNew(&new_R3BNeulandMappedItem);
      instance.SetNewArray(&newArray_R3BNeulandMappedItem);
      instance.SetDelete(&delete_R3BNeulandMappedItem);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMappedItem);
      instance.SetDestructor(&destruct_R3BNeulandMappedItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMappedItem*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMappedItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMappedItem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxMappedItem(void *p = 0);
   static void *newArray_R3BPspxMappedItem(Long_t size, void *p);
   static void delete_R3BPspxMappedItem(void *p);
   static void deleteArray_R3BPspxMappedItem(void *p);
   static void destruct_R3BPspxMappedItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxMappedItem*)
   {
      ::R3BPspxMappedItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxMappedItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxMappedItem", ::R3BPspxMappedItem::Class_Version(), "invalid", 5507,
                  typeid(::R3BPspxMappedItem), DefineBehavior(ptr, ptr),
                  &::R3BPspxMappedItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxMappedItem) );
      instance.SetNew(&new_R3BPspxMappedItem);
      instance.SetNewArray(&newArray_R3BPspxMappedItem);
      instance.SetDelete(&delete_R3BPspxMappedItem);
      instance.SetDeleteArray(&deleteArray_R3BPspxMappedItem);
      instance.SetDestructor(&destruct_R3BPspxMappedItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxMappedItem*)
   {
      return GenerateInitInstanceLocal((::R3BPspxMappedItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspxMappedItem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxCalItem(void *p = 0);
   static void *newArray_R3BPspxCalItem(Long_t size, void *p);
   static void delete_R3BPspxCalItem(void *p);
   static void deleteArray_R3BPspxCalItem(void *p);
   static void destruct_R3BPspxCalItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxCalItem*)
   {
      ::R3BPspxCalItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxCalItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxCalItem", ::R3BPspxCalItem::Class_Version(), "invalid", 5543,
                  typeid(::R3BPspxCalItem), DefineBehavior(ptr, ptr),
                  &::R3BPspxCalItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxCalItem) );
      instance.SetNew(&new_R3BPspxCalItem);
      instance.SetNewArray(&newArray_R3BPspxCalItem);
      instance.SetDelete(&delete_R3BPspxCalItem);
      instance.SetDeleteArray(&deleteArray_R3BPspxCalItem);
      instance.SetDestructor(&destruct_R3BPspxCalItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxCalItem*)
   {
      return GenerateInitInstanceLocal((::R3BPspxCalItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPspxCalItem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosMappedItem(void *p = 0);
   static void *newArray_R3BLosMappedItem(Long_t size, void *p);
   static void delete_R3BLosMappedItem(void *p);
   static void deleteArray_R3BLosMappedItem(void *p);
   static void destruct_R3BLosMappedItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosMappedItem*)
   {
      ::R3BLosMappedItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosMappedItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosMappedItem", ::R3BLosMappedItem::Class_Version(), "invalid", 5579,
                  typeid(::R3BLosMappedItem), DefineBehavior(ptr, ptr),
                  &::R3BLosMappedItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosMappedItem) );
      instance.SetNew(&new_R3BLosMappedItem);
      instance.SetNewArray(&newArray_R3BLosMappedItem);
      instance.SetDelete(&delete_R3BLosMappedItem);
      instance.SetDeleteArray(&deleteArray_R3BLosMappedItem);
      instance.SetDestructor(&destruct_R3BLosMappedItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosMappedItem*)
   {
      return GenerateInitInstanceLocal((::R3BLosMappedItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLosMappedItem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStack::Class_Name()
{
   return "R3BStack";
}

//______________________________________________________________________________
const char *R3BStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMCTrack::Class_Name()
{
   return "R3BMCTrack";
}

//______________________________________________________________________________
const char *R3BMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallPoint::Class_Name()
{
   return "R3BXBallPoint";
}

//______________________________________________________________________________
const char *R3BXBallPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloRawHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloRawHit::Class_Name()
{
   return "R3BCaloRawHit";
}

//______________________________________________________________________________
const char *R3BCaloRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloRawHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallCrystalHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallCrystalHit::Class_Name()
{
   return "R3BXBallCrystalHit";
}

//______________________________________________________________________________
const char *R3BXBallCrystalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallCrystalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallCrystalHitSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallCrystalHitSim::Class_Name()
{
   return "R3BXBallCrystalHitSim";
}

//______________________________________________________________________________
const char *R3BXBallCrystalHitSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallCrystalHitSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHitSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHitSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloCrystalHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloCrystalHit::Class_Name()
{
   return "R3BCaloCrystalHit";
}

//______________________________________________________________________________
const char *R3BCaloCrystalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloCrystalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloCrystalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloCrystalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloCrystalHitSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloCrystalHitSim::Class_Name()
{
   return "R3BCaloCrystalHitSim";
}

//______________________________________________________________________________
const char *R3BCaloCrystalHitSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHitSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloCrystalHitSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHitSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloCrystalHitSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHitSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloCrystalHitSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloCrystalHitSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloHit::Class_Name()
{
   return "R3BCaloHit";
}

//______________________________________________________________________________
const char *R3BCaloHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloHitSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloHitSim::Class_Name()
{
   return "R3BCaloHitSim";
}

//______________________________________________________________________________
const char *R3BCaloHitSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloHitSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloHitSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloHitSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloHitSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCaloPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCaloPoint::Class_Name()
{
   return "R3BCaloPoint";
}

//______________________________________________________________________________
const char *R3BCaloPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCaloPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCaloPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCaloPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCaloPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchPoint::Class_Name()
{
   return "R3BDchPoint";
}

//______________________________________________________________________________
const char *R3BDchPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchFullPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchFullPoint::Class_Name()
{
   return "R3BDchFullPoint";
}

//______________________________________________________________________________
const char *R3BDchFullPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchFullPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchFullPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchFullPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchDigi::Class_Name()
{
   return "R3BDchDigi";
}

//______________________________________________________________________________
const char *R3BDchDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDch2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDch2pDigi::Class_Name()
{
   return "R3BDch2pDigi";
}

//______________________________________________________________________________
const char *R3BDch2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDch2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDch2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDch2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiPoint::Class_Name()
{
   return "R3BGfiPoint";
}

//______________________________________________________________________________
const char *R3BGfiPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiDigi::Class_Name()
{
   return "R3BGfiDigi";
}

//______________________________________________________________________________
const char *R3BGfiDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofPoint::Class_Name()
{
   return "R3BmTofPoint";
}

//______________________________________________________________________________
const char *R3BmTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofDigi::Class_Name()
{
   return "R3BmTofDigi";
}

//______________________________________________________________________________
const char *R3BmTofDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BdTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BdTofPoint::Class_Name()
{
   return "R3BdTofPoint";
}

//______________________________________________________________________________
const char *R3BdTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BdTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BdTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BdTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BdTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofPoint::Class_Name()
{
   return "R3BTofPoint";
}

//______________________________________________________________________________
const char *R3BTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigi::Class_Name()
{
   return "R3BTofDigi";
}

//______________________________________________________________________________
const char *R3BTofDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigi::Class_Name()
{
   return "R3BTof2pDigi";
}

//______________________________________________________________________________
const char *R3BTof2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BVetoPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BVetoPoint::Class_Name()
{
   return "R3BVetoPoint";
}

//______________________________________________________________________________
const char *R3BVetoPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BVetoPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BVetoPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BVetoPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraPoint::Class_Name()
{
   return "R3BSTaRTraPoint";
}

//______________________________________________________________________________
const char *R3BSTaRTraPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraHit::Class_Name()
{
   return "R3BSTaRTraHit";
}

//______________________________________________________________________________
const char *R3BSTaRTraHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTrackerHit::Class_Name()
{
   return "R3BSTaRTrackerHit";
}

//______________________________________________________________________________
const char *R3BSTaRTrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTrackerDigitHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTrackerDigitHit::Class_Name()
{
   return "R3BSTaRTrackerDigitHit";
}

//______________________________________________________________________________
const char *R3BSTaRTrackerDigitHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerDigitHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTrackerDigitHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerDigitHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerDigitHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerDigitHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerDigitHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerDigitHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraPoint::Class_Name()
{
   return "R3BTraPoint";
}

//______________________________________________________________________________
const char *R3BTraPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraHit::Class_Name()
{
   return "R3BTraHit";
}

//______________________________________________________________________________
const char *R3BTraHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackerHit::Class_Name()
{
   return "R3BTrackerHit";
}

//______________________________________________________________________________
const char *R3BTrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraDigi::Class_Name()
{
   return "R3BTraDigi";
}

//______________________________________________________________________________
const char *R3BTraDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTra2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTra2pDigi::Class_Name()
{
   return "R3BTra2pDigi";
}

//______________________________________________________________________________
const char *R3BTra2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTra2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTra2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTra2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraFraDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraFraDigi::Class_Name()
{
   return "R3BTraFraDigi";
}

//______________________________________________________________________________
const char *R3BTraFraDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraFraDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraFraDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraFraDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTargetDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTargetDigi::Class_Name()
{
   return "R3BTargetDigi";
}

//______________________________________________________________________________
const char *R3BTargetDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTargetDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTargetDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTargetDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTarget2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTarget2pDigi::Class_Name()
{
   return "R3BTarget2pDigi";
}

//______________________________________________________________________________
const char *R3BTarget2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTarget2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTarget2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTarget2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSitrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSitrackerHit::Class_Name()
{
   return "R3BSitrackerHit";
}

//______________________________________________________________________________
const char *R3BSitrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSitrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSitrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSitrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandPoint::Class_Name()
{
   return "R3BLandPoint";
}

//______________________________________________________________________________
const char *R3BLandPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTrack::Class_Name()
{
   return "R3BNeutronTrack";
}

//______________________________________________________________________________
const char *R3BNeutronTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigi::Class_Name()
{
   return "R3BLandDigi";
}

//______________________________________________________________________________
const char *R3BLandDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandFirstHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandFirstHits::Class_Name()
{
   return "R3BLandFirstHits";
}

//______________________________________________________________________________
const char *R3BLandFirstHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandFirstHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandFirstHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandFirstHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandHit::Class_Name()
{
   return "R3BLandHit";
}

//______________________________________________________________________________
const char *R3BLandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPaddleCrystalHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPaddleCrystalHit::Class_Name()
{
   return "R3BPaddleCrystalHit";
}

//______________________________________________________________________________
const char *R3BPaddleCrystalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPaddleCrystalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPaddleCrystalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPaddleCrystalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELILuMonPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELILuMonPoint::Class_Name()
{
   return "ELILuMonPoint";
}

//______________________________________________________________________________
const char *ELILuMonPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELILuMonPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELILuMonPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELILuMonPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiPoint::Class_Name()
{
   return "R3BMfiPoint";
}

//______________________________________________________________________________
const char *R3BMfiPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiDigi::Class_Name()
{
   return "R3BMfiDigi";
}

//______________________________________________________________________________
const char *R3BMfiDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspPoint::Class_Name()
{
   return "R3BPspPoint";
}

//______________________________________________________________________________
const char *R3BPspPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigi::Class_Name()
{
   return "R3BPspDigi";
}

//______________________________________________________________________________
const char *R3BPspDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandRawItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandRawItem::Class_Name()
{
   return "R3BNeulandRawItem";
}

//______________________________________________________________________________
const char *R3BNeulandRawItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandRawItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandRawItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandRawItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandRawItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandRawItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandRawItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandRawItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMappedItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMappedItem::Class_Name()
{
   return "R3BNeulandMappedItem";
}

//______________________________________________________________________________
const char *R3BNeulandMappedItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMappedItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMappedItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMappedItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxMappedItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxMappedItem::Class_Name()
{
   return "R3BPspxMappedItem";
}

//______________________________________________________________________________
const char *R3BPspxMappedItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxMappedItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxMappedItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxMappedItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxCalItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxCalItem::Class_Name()
{
   return "R3BPspxCalItem";
}

//______________________________________________________________________________
const char *R3BPspxCalItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxCalItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxCalItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxCalItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosMappedItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosMappedItem::Class_Name()
{
   return "R3BLosMappedItem";
}

//______________________________________________________________________________
const char *R3BLosMappedItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosMappedItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosMappedItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosMappedItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStack(void *p) {
      return  p ? new(p) ::R3BStack : new ::R3BStack;
   }
   static void *newArray_R3BStack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStack[nElements] : new ::R3BStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStack(void *p) {
      delete ((::R3BStack*)p);
   }
   static void deleteArray_R3BStack(void *p) {
      delete [] ((::R3BStack*)p);
   }
   static void destruct_R3BStack(void *p) {
      typedef ::R3BStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStack

//______________________________________________________________________________
void R3BMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMCTrack(void *p) {
      return  p ? new(p) ::R3BMCTrack : new ::R3BMCTrack;
   }
   static void *newArray_R3BMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMCTrack[nElements] : new ::R3BMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMCTrack(void *p) {
      delete ((::R3BMCTrack*)p);
   }
   static void deleteArray_R3BMCTrack(void *p) {
      delete [] ((::R3BMCTrack*)p);
   }
   static void destruct_R3BMCTrack(void *p) {
      typedef ::R3BMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMCTrack

//______________________________________________________________________________
void R3BXBallPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallPoint(void *p) {
      return  p ? new(p) ::R3BXBallPoint : new ::R3BXBallPoint;
   }
   static void *newArray_R3BXBallPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallPoint[nElements] : new ::R3BXBallPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallPoint(void *p) {
      delete ((::R3BXBallPoint*)p);
   }
   static void deleteArray_R3BXBallPoint(void *p) {
      delete [] ((::R3BXBallPoint*)p);
   }
   static void destruct_R3BXBallPoint(void *p) {
      typedef ::R3BXBallPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallPoint

//______________________________________________________________________________
void R3BCaloRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloRawHit(void *p) {
      return  p ? new(p) ::R3BCaloRawHit : new ::R3BCaloRawHit;
   }
   static void *newArray_R3BCaloRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloRawHit[nElements] : new ::R3BCaloRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloRawHit(void *p) {
      delete ((::R3BCaloRawHit*)p);
   }
   static void deleteArray_R3BCaloRawHit(void *p) {
      delete [] ((::R3BCaloRawHit*)p);
   }
   static void destruct_R3BCaloRawHit(void *p) {
      typedef ::R3BCaloRawHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloRawHit

//______________________________________________________________________________
void R3BXBallCrystalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallCrystalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallCrystalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallCrystalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallCrystalHit(void *p) {
      return  p ? new(p) ::R3BXBallCrystalHit : new ::R3BXBallCrystalHit;
   }
   static void *newArray_R3BXBallCrystalHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallCrystalHit[nElements] : new ::R3BXBallCrystalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallCrystalHit(void *p) {
      delete ((::R3BXBallCrystalHit*)p);
   }
   static void deleteArray_R3BXBallCrystalHit(void *p) {
      delete [] ((::R3BXBallCrystalHit*)p);
   }
   static void destruct_R3BXBallCrystalHit(void *p) {
      typedef ::R3BXBallCrystalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallCrystalHit

//______________________________________________________________________________
void R3BXBallCrystalHitSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallCrystalHitSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallCrystalHitSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallCrystalHitSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallCrystalHitSim(void *p) {
      return  p ? new(p) ::R3BXBallCrystalHitSim : new ::R3BXBallCrystalHitSim;
   }
   static void *newArray_R3BXBallCrystalHitSim(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallCrystalHitSim[nElements] : new ::R3BXBallCrystalHitSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallCrystalHitSim(void *p) {
      delete ((::R3BXBallCrystalHitSim*)p);
   }
   static void deleteArray_R3BXBallCrystalHitSim(void *p) {
      delete [] ((::R3BXBallCrystalHitSim*)p);
   }
   static void destruct_R3BXBallCrystalHitSim(void *p) {
      typedef ::R3BXBallCrystalHitSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallCrystalHitSim

//______________________________________________________________________________
void R3BCaloCrystalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloCrystalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloCrystalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloCrystalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloCrystalHit(void *p) {
      return  p ? new(p) ::R3BCaloCrystalHit : new ::R3BCaloCrystalHit;
   }
   static void *newArray_R3BCaloCrystalHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloCrystalHit[nElements] : new ::R3BCaloCrystalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloCrystalHit(void *p) {
      delete ((::R3BCaloCrystalHit*)p);
   }
   static void deleteArray_R3BCaloCrystalHit(void *p) {
      delete [] ((::R3BCaloCrystalHit*)p);
   }
   static void destruct_R3BCaloCrystalHit(void *p) {
      typedef ::R3BCaloCrystalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloCrystalHit

//______________________________________________________________________________
void R3BCaloCrystalHitSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloCrystalHitSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloCrystalHitSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloCrystalHitSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloCrystalHitSim(void *p) {
      return  p ? new(p) ::R3BCaloCrystalHitSim : new ::R3BCaloCrystalHitSim;
   }
   static void *newArray_R3BCaloCrystalHitSim(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloCrystalHitSim[nElements] : new ::R3BCaloCrystalHitSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloCrystalHitSim(void *p) {
      delete ((::R3BCaloCrystalHitSim*)p);
   }
   static void deleteArray_R3BCaloCrystalHitSim(void *p) {
      delete [] ((::R3BCaloCrystalHitSim*)p);
   }
   static void destruct_R3BCaloCrystalHitSim(void *p) {
      typedef ::R3BCaloCrystalHitSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloCrystalHitSim

//______________________________________________________________________________
void R3BCaloHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloHit(void *p) {
      return  p ? new(p) ::R3BCaloHit : new ::R3BCaloHit;
   }
   static void *newArray_R3BCaloHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloHit[nElements] : new ::R3BCaloHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloHit(void *p) {
      delete ((::R3BCaloHit*)p);
   }
   static void deleteArray_R3BCaloHit(void *p) {
      delete [] ((::R3BCaloHit*)p);
   }
   static void destruct_R3BCaloHit(void *p) {
      typedef ::R3BCaloHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloHit

//______________________________________________________________________________
void R3BCaloHitSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloHitSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloHitSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloHitSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloHitSim(void *p) {
      return  p ? new(p) ::R3BCaloHitSim : new ::R3BCaloHitSim;
   }
   static void *newArray_R3BCaloHitSim(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloHitSim[nElements] : new ::R3BCaloHitSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloHitSim(void *p) {
      delete ((::R3BCaloHitSim*)p);
   }
   static void deleteArray_R3BCaloHitSim(void *p) {
      delete [] ((::R3BCaloHitSim*)p);
   }
   static void destruct_R3BCaloHitSim(void *p) {
      typedef ::R3BCaloHitSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloHitSim

//______________________________________________________________________________
void R3BCaloPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCaloPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCaloPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCaloPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCaloPoint(void *p) {
      return  p ? new(p) ::R3BCaloPoint : new ::R3BCaloPoint;
   }
   static void *newArray_R3BCaloPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCaloPoint[nElements] : new ::R3BCaloPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCaloPoint(void *p) {
      delete ((::R3BCaloPoint*)p);
   }
   static void deleteArray_R3BCaloPoint(void *p) {
      delete [] ((::R3BCaloPoint*)p);
   }
   static void destruct_R3BCaloPoint(void *p) {
      typedef ::R3BCaloPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCaloPoint

//______________________________________________________________________________
void R3BDchPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchPoint(void *p) {
      return  p ? new(p) ::R3BDchPoint : new ::R3BDchPoint;
   }
   static void *newArray_R3BDchPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchPoint[nElements] : new ::R3BDchPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchPoint(void *p) {
      delete ((::R3BDchPoint*)p);
   }
   static void deleteArray_R3BDchPoint(void *p) {
      delete [] ((::R3BDchPoint*)p);
   }
   static void destruct_R3BDchPoint(void *p) {
      typedef ::R3BDchPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchPoint

//______________________________________________________________________________
void R3BDchFullPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchFullPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchFullPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchFullPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchFullPoint(void *p) {
      return  p ? new(p) ::R3BDchFullPoint : new ::R3BDchFullPoint;
   }
   static void *newArray_R3BDchFullPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchFullPoint[nElements] : new ::R3BDchFullPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchFullPoint(void *p) {
      delete ((::R3BDchFullPoint*)p);
   }
   static void deleteArray_R3BDchFullPoint(void *p) {
      delete [] ((::R3BDchFullPoint*)p);
   }
   static void destruct_R3BDchFullPoint(void *p) {
      typedef ::R3BDchFullPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchFullPoint

//______________________________________________________________________________
void R3BDchDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchDigi(void *p) {
      return  p ? new(p) ::R3BDchDigi : new ::R3BDchDigi;
   }
   static void *newArray_R3BDchDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchDigi[nElements] : new ::R3BDchDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchDigi(void *p) {
      delete ((::R3BDchDigi*)p);
   }
   static void deleteArray_R3BDchDigi(void *p) {
      delete [] ((::R3BDchDigi*)p);
   }
   static void destruct_R3BDchDigi(void *p) {
      typedef ::R3BDchDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchDigi

//______________________________________________________________________________
void R3BDch2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDch2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDch2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDch2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDch2pDigi(void *p) {
      return  p ? new(p) ::R3BDch2pDigi : new ::R3BDch2pDigi;
   }
   static void *newArray_R3BDch2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDch2pDigi[nElements] : new ::R3BDch2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDch2pDigi(void *p) {
      delete ((::R3BDch2pDigi*)p);
   }
   static void deleteArray_R3BDch2pDigi(void *p) {
      delete [] ((::R3BDch2pDigi*)p);
   }
   static void destruct_R3BDch2pDigi(void *p) {
      typedef ::R3BDch2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDch2pDigi

//______________________________________________________________________________
void R3BGfiPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiPoint(void *p) {
      return  p ? new(p) ::R3BGfiPoint : new ::R3BGfiPoint;
   }
   static void *newArray_R3BGfiPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiPoint[nElements] : new ::R3BGfiPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiPoint(void *p) {
      delete ((::R3BGfiPoint*)p);
   }
   static void deleteArray_R3BGfiPoint(void *p) {
      delete [] ((::R3BGfiPoint*)p);
   }
   static void destruct_R3BGfiPoint(void *p) {
      typedef ::R3BGfiPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiPoint

//______________________________________________________________________________
void R3BGfiDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiDigi(void *p) {
      return  p ? new(p) ::R3BGfiDigi : new ::R3BGfiDigi;
   }
   static void *newArray_R3BGfiDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiDigi[nElements] : new ::R3BGfiDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiDigi(void *p) {
      delete ((::R3BGfiDigi*)p);
   }
   static void deleteArray_R3BGfiDigi(void *p) {
      delete [] ((::R3BGfiDigi*)p);
   }
   static void destruct_R3BGfiDigi(void *p) {
      typedef ::R3BGfiDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiDigi

//______________________________________________________________________________
void R3BmTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofPoint(void *p) {
      return  p ? new(p) ::R3BmTofPoint : new ::R3BmTofPoint;
   }
   static void *newArray_R3BmTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofPoint[nElements] : new ::R3BmTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofPoint(void *p) {
      delete ((::R3BmTofPoint*)p);
   }
   static void deleteArray_R3BmTofPoint(void *p) {
      delete [] ((::R3BmTofPoint*)p);
   }
   static void destruct_R3BmTofPoint(void *p) {
      typedef ::R3BmTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofPoint

//______________________________________________________________________________
void R3BmTofDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofDigi(void *p) {
      return  p ? new(p) ::R3BmTofDigi : new ::R3BmTofDigi;
   }
   static void *newArray_R3BmTofDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofDigi[nElements] : new ::R3BmTofDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofDigi(void *p) {
      delete ((::R3BmTofDigi*)p);
   }
   static void deleteArray_R3BmTofDigi(void *p) {
      delete [] ((::R3BmTofDigi*)p);
   }
   static void destruct_R3BmTofDigi(void *p) {
      typedef ::R3BmTofDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofDigi

//______________________________________________________________________________
void R3BdTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BdTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BdTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BdTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BdTofPoint(void *p) {
      return  p ? new(p) ::R3BdTofPoint : new ::R3BdTofPoint;
   }
   static void *newArray_R3BdTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BdTofPoint[nElements] : new ::R3BdTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BdTofPoint(void *p) {
      delete ((::R3BdTofPoint*)p);
   }
   static void deleteArray_R3BdTofPoint(void *p) {
      delete [] ((::R3BdTofPoint*)p);
   }
   static void destruct_R3BdTofPoint(void *p) {
      typedef ::R3BdTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BdTofPoint

//______________________________________________________________________________
void R3BTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofPoint(void *p) {
      return  p ? new(p) ::R3BTofPoint : new ::R3BTofPoint;
   }
   static void *newArray_R3BTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofPoint[nElements] : new ::R3BTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofPoint(void *p) {
      delete ((::R3BTofPoint*)p);
   }
   static void deleteArray_R3BTofPoint(void *p) {
      delete [] ((::R3BTofPoint*)p);
   }
   static void destruct_R3BTofPoint(void *p) {
      typedef ::R3BTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofPoint

//______________________________________________________________________________
void R3BTofDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigi(void *p) {
      return  p ? new(p) ::R3BTofDigi : new ::R3BTofDigi;
   }
   static void *newArray_R3BTofDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigi[nElements] : new ::R3BTofDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigi(void *p) {
      delete ((::R3BTofDigi*)p);
   }
   static void deleteArray_R3BTofDigi(void *p) {
      delete [] ((::R3BTofDigi*)p);
   }
   static void destruct_R3BTofDigi(void *p) {
      typedef ::R3BTofDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigi

//______________________________________________________________________________
void R3BTof2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigi(void *p) {
      return  p ? new(p) ::R3BTof2pDigi : new ::R3BTof2pDigi;
   }
   static void *newArray_R3BTof2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigi[nElements] : new ::R3BTof2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigi(void *p) {
      delete ((::R3BTof2pDigi*)p);
   }
   static void deleteArray_R3BTof2pDigi(void *p) {
      delete [] ((::R3BTof2pDigi*)p);
   }
   static void destruct_R3BTof2pDigi(void *p) {
      typedef ::R3BTof2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigi

//______________________________________________________________________________
void R3BVetoPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BVetoPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BVetoPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BVetoPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BVetoPoint(void *p) {
      return  p ? new(p) ::R3BVetoPoint : new ::R3BVetoPoint;
   }
   static void *newArray_R3BVetoPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BVetoPoint[nElements] : new ::R3BVetoPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BVetoPoint(void *p) {
      delete ((::R3BVetoPoint*)p);
   }
   static void deleteArray_R3BVetoPoint(void *p) {
      delete [] ((::R3BVetoPoint*)p);
   }
   static void destruct_R3BVetoPoint(void *p) {
      typedef ::R3BVetoPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BVetoPoint

//______________________________________________________________________________
void R3BSTaRTraPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraPoint(void *p) {
      return  p ? new(p) ::R3BSTaRTraPoint : new ::R3BSTaRTraPoint;
   }
   static void *newArray_R3BSTaRTraPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraPoint[nElements] : new ::R3BSTaRTraPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraPoint(void *p) {
      delete ((::R3BSTaRTraPoint*)p);
   }
   static void deleteArray_R3BSTaRTraPoint(void *p) {
      delete [] ((::R3BSTaRTraPoint*)p);
   }
   static void destruct_R3BSTaRTraPoint(void *p) {
      typedef ::R3BSTaRTraPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraPoint

//______________________________________________________________________________
void R3BSTaRTraHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraHit(void *p) {
      return  p ? new(p) ::R3BSTaRTraHit : new ::R3BSTaRTraHit;
   }
   static void *newArray_R3BSTaRTraHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraHit[nElements] : new ::R3BSTaRTraHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraHit(void *p) {
      delete ((::R3BSTaRTraHit*)p);
   }
   static void deleteArray_R3BSTaRTraHit(void *p) {
      delete [] ((::R3BSTaRTraHit*)p);
   }
   static void destruct_R3BSTaRTraHit(void *p) {
      typedef ::R3BSTaRTraHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraHit

//______________________________________________________________________________
void R3BSTaRTrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTrackerHit(void *p) {
      return  p ? new(p) ::R3BSTaRTrackerHit : new ::R3BSTaRTrackerHit;
   }
   static void *newArray_R3BSTaRTrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTrackerHit[nElements] : new ::R3BSTaRTrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTrackerHit(void *p) {
      delete ((::R3BSTaRTrackerHit*)p);
   }
   static void deleteArray_R3BSTaRTrackerHit(void *p) {
      delete [] ((::R3BSTaRTrackerHit*)p);
   }
   static void destruct_R3BSTaRTrackerHit(void *p) {
      typedef ::R3BSTaRTrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTrackerHit

//______________________________________________________________________________
void R3BSTaRTrackerDigitHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTrackerDigitHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTrackerDigitHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTrackerDigitHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTrackerDigitHit(void *p) {
      return  p ? new(p) ::R3BSTaRTrackerDigitHit : new ::R3BSTaRTrackerDigitHit;
   }
   static void *newArray_R3BSTaRTrackerDigitHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTrackerDigitHit[nElements] : new ::R3BSTaRTrackerDigitHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTrackerDigitHit(void *p) {
      delete ((::R3BSTaRTrackerDigitHit*)p);
   }
   static void deleteArray_R3BSTaRTrackerDigitHit(void *p) {
      delete [] ((::R3BSTaRTrackerDigitHit*)p);
   }
   static void destruct_R3BSTaRTrackerDigitHit(void *p) {
      typedef ::R3BSTaRTrackerDigitHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTrackerDigitHit

//______________________________________________________________________________
void R3BTraPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraPoint(void *p) {
      return  p ? new(p) ::R3BTraPoint : new ::R3BTraPoint;
   }
   static void *newArray_R3BTraPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraPoint[nElements] : new ::R3BTraPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraPoint(void *p) {
      delete ((::R3BTraPoint*)p);
   }
   static void deleteArray_R3BTraPoint(void *p) {
      delete [] ((::R3BTraPoint*)p);
   }
   static void destruct_R3BTraPoint(void *p) {
      typedef ::R3BTraPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraPoint

//______________________________________________________________________________
void R3BTraHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraHit(void *p) {
      return  p ? new(p) ::R3BTraHit : new ::R3BTraHit;
   }
   static void *newArray_R3BTraHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraHit[nElements] : new ::R3BTraHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraHit(void *p) {
      delete ((::R3BTraHit*)p);
   }
   static void deleteArray_R3BTraHit(void *p) {
      delete [] ((::R3BTraHit*)p);
   }
   static void destruct_R3BTraHit(void *p) {
      typedef ::R3BTraHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraHit

//______________________________________________________________________________
void R3BTrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackerHit(void *p) {
      return  p ? new(p) ::R3BTrackerHit : new ::R3BTrackerHit;
   }
   static void *newArray_R3BTrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackerHit[nElements] : new ::R3BTrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackerHit(void *p) {
      delete ((::R3BTrackerHit*)p);
   }
   static void deleteArray_R3BTrackerHit(void *p) {
      delete [] ((::R3BTrackerHit*)p);
   }
   static void destruct_R3BTrackerHit(void *p) {
      typedef ::R3BTrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackerHit

//______________________________________________________________________________
void R3BTraDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraDigi(void *p) {
      return  p ? new(p) ::R3BTraDigi : new ::R3BTraDigi;
   }
   static void *newArray_R3BTraDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraDigi[nElements] : new ::R3BTraDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraDigi(void *p) {
      delete ((::R3BTraDigi*)p);
   }
   static void deleteArray_R3BTraDigi(void *p) {
      delete [] ((::R3BTraDigi*)p);
   }
   static void destruct_R3BTraDigi(void *p) {
      typedef ::R3BTraDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraDigi

//______________________________________________________________________________
void R3BTra2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTra2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTra2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTra2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTra2pDigi(void *p) {
      return  p ? new(p) ::R3BTra2pDigi : new ::R3BTra2pDigi;
   }
   static void *newArray_R3BTra2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTra2pDigi[nElements] : new ::R3BTra2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTra2pDigi(void *p) {
      delete ((::R3BTra2pDigi*)p);
   }
   static void deleteArray_R3BTra2pDigi(void *p) {
      delete [] ((::R3BTra2pDigi*)p);
   }
   static void destruct_R3BTra2pDigi(void *p) {
      typedef ::R3BTra2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTra2pDigi

//______________________________________________________________________________
void R3BTraFraDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraFraDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraFraDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraFraDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraFraDigi(void *p) {
      return  p ? new(p) ::R3BTraFraDigi : new ::R3BTraFraDigi;
   }
   static void *newArray_R3BTraFraDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraFraDigi[nElements] : new ::R3BTraFraDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraFraDigi(void *p) {
      delete ((::R3BTraFraDigi*)p);
   }
   static void deleteArray_R3BTraFraDigi(void *p) {
      delete [] ((::R3BTraFraDigi*)p);
   }
   static void destruct_R3BTraFraDigi(void *p) {
      typedef ::R3BTraFraDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraFraDigi

//______________________________________________________________________________
void R3BTargetDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTargetDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTargetDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTargetDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTargetDigi(void *p) {
      return  p ? new(p) ::R3BTargetDigi : new ::R3BTargetDigi;
   }
   static void *newArray_R3BTargetDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTargetDigi[nElements] : new ::R3BTargetDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTargetDigi(void *p) {
      delete ((::R3BTargetDigi*)p);
   }
   static void deleteArray_R3BTargetDigi(void *p) {
      delete [] ((::R3BTargetDigi*)p);
   }
   static void destruct_R3BTargetDigi(void *p) {
      typedef ::R3BTargetDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTargetDigi

//______________________________________________________________________________
void R3BTarget2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTarget2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTarget2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTarget2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTarget2pDigi(void *p) {
      return  p ? new(p) ::R3BTarget2pDigi : new ::R3BTarget2pDigi;
   }
   static void *newArray_R3BTarget2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTarget2pDigi[nElements] : new ::R3BTarget2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTarget2pDigi(void *p) {
      delete ((::R3BTarget2pDigi*)p);
   }
   static void deleteArray_R3BTarget2pDigi(void *p) {
      delete [] ((::R3BTarget2pDigi*)p);
   }
   static void destruct_R3BTarget2pDigi(void *p) {
      typedef ::R3BTarget2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTarget2pDigi

//______________________________________________________________________________
void R3BSitrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSitrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSitrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSitrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSitrackerHit(void *p) {
      return  p ? new(p) ::R3BSitrackerHit : new ::R3BSitrackerHit;
   }
   static void *newArray_R3BSitrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSitrackerHit[nElements] : new ::R3BSitrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSitrackerHit(void *p) {
      delete ((::R3BSitrackerHit*)p);
   }
   static void deleteArray_R3BSitrackerHit(void *p) {
      delete [] ((::R3BSitrackerHit*)p);
   }
   static void destruct_R3BSitrackerHit(void *p) {
      typedef ::R3BSitrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSitrackerHit

//______________________________________________________________________________
void R3BLandPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandPoint(void *p) {
      return  p ? new(p) ::R3BLandPoint : new ::R3BLandPoint;
   }
   static void *newArray_R3BLandPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandPoint[nElements] : new ::R3BLandPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandPoint(void *p) {
      delete ((::R3BLandPoint*)p);
   }
   static void deleteArray_R3BLandPoint(void *p) {
      delete [] ((::R3BLandPoint*)p);
   }
   static void destruct_R3BLandPoint(void *p) {
      typedef ::R3BLandPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandPoint

//______________________________________________________________________________
void R3BNeutronTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTrack(void *p) {
      return  p ? new(p) ::R3BNeutronTrack : new ::R3BNeutronTrack;
   }
   static void *newArray_R3BNeutronTrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTrack[nElements] : new ::R3BNeutronTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTrack(void *p) {
      delete ((::R3BNeutronTrack*)p);
   }
   static void deleteArray_R3BNeutronTrack(void *p) {
      delete [] ((::R3BNeutronTrack*)p);
   }
   static void destruct_R3BNeutronTrack(void *p) {
      typedef ::R3BNeutronTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTrack

//______________________________________________________________________________
void R3BLandDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigi(void *p) {
      return  p ? new(p) ::R3BLandDigi : new ::R3BLandDigi;
   }
   static void *newArray_R3BLandDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigi[nElements] : new ::R3BLandDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigi(void *p) {
      delete ((::R3BLandDigi*)p);
   }
   static void deleteArray_R3BLandDigi(void *p) {
      delete [] ((::R3BLandDigi*)p);
   }
   static void destruct_R3BLandDigi(void *p) {
      typedef ::R3BLandDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigi

//______________________________________________________________________________
void R3BLandFirstHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandFirstHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandFirstHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandFirstHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandFirstHits(void *p) {
      return  p ? new(p) ::R3BLandFirstHits : new ::R3BLandFirstHits;
   }
   static void *newArray_R3BLandFirstHits(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandFirstHits[nElements] : new ::R3BLandFirstHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandFirstHits(void *p) {
      delete ((::R3BLandFirstHits*)p);
   }
   static void deleteArray_R3BLandFirstHits(void *p) {
      delete [] ((::R3BLandFirstHits*)p);
   }
   static void destruct_R3BLandFirstHits(void *p) {
      typedef ::R3BLandFirstHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandFirstHits

//______________________________________________________________________________
void R3BLandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandHit(void *p) {
      return  p ? new(p) ::R3BLandHit : new ::R3BLandHit;
   }
   static void *newArray_R3BLandHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandHit[nElements] : new ::R3BLandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandHit(void *p) {
      delete ((::R3BLandHit*)p);
   }
   static void deleteArray_R3BLandHit(void *p) {
      delete [] ((::R3BLandHit*)p);
   }
   static void destruct_R3BLandHit(void *p) {
      typedef ::R3BLandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandHit

//______________________________________________________________________________
void R3BPaddleCrystalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPaddleCrystalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPaddleCrystalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPaddleCrystalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPaddleCrystalHit(void *p) {
      return  p ? new(p) ::R3BPaddleCrystalHit : new ::R3BPaddleCrystalHit;
   }
   static void *newArray_R3BPaddleCrystalHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPaddleCrystalHit[nElements] : new ::R3BPaddleCrystalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPaddleCrystalHit(void *p) {
      delete ((::R3BPaddleCrystalHit*)p);
   }
   static void deleteArray_R3BPaddleCrystalHit(void *p) {
      delete [] ((::R3BPaddleCrystalHit*)p);
   }
   static void destruct_R3BPaddleCrystalHit(void *p) {
      typedef ::R3BPaddleCrystalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPaddleCrystalHit

//______________________________________________________________________________
void ELILuMonPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELILuMonPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ELILuMonPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ELILuMonPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELILuMonPoint(void *p) {
      return  p ? new(p) ::ELILuMonPoint : new ::ELILuMonPoint;
   }
   static void *newArray_ELILuMonPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ELILuMonPoint[nElements] : new ::ELILuMonPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELILuMonPoint(void *p) {
      delete ((::ELILuMonPoint*)p);
   }
   static void deleteArray_ELILuMonPoint(void *p) {
      delete [] ((::ELILuMonPoint*)p);
   }
   static void destruct_ELILuMonPoint(void *p) {
      typedef ::ELILuMonPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ELILuMonPoint

//______________________________________________________________________________
void R3BMfiPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiPoint(void *p) {
      return  p ? new(p) ::R3BMfiPoint : new ::R3BMfiPoint;
   }
   static void *newArray_R3BMfiPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiPoint[nElements] : new ::R3BMfiPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiPoint(void *p) {
      delete ((::R3BMfiPoint*)p);
   }
   static void deleteArray_R3BMfiPoint(void *p) {
      delete [] ((::R3BMfiPoint*)p);
   }
   static void destruct_R3BMfiPoint(void *p) {
      typedef ::R3BMfiPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiPoint

//______________________________________________________________________________
void R3BMfiDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiDigi(void *p) {
      return  p ? new(p) ::R3BMfiDigi : new ::R3BMfiDigi;
   }
   static void *newArray_R3BMfiDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiDigi[nElements] : new ::R3BMfiDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiDigi(void *p) {
      delete ((::R3BMfiDigi*)p);
   }
   static void deleteArray_R3BMfiDigi(void *p) {
      delete [] ((::R3BMfiDigi*)p);
   }
   static void destruct_R3BMfiDigi(void *p) {
      typedef ::R3BMfiDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiDigi

//______________________________________________________________________________
void R3BPspPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspPoint(void *p) {
      return  p ? new(p) ::R3BPspPoint : new ::R3BPspPoint;
   }
   static void *newArray_R3BPspPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspPoint[nElements] : new ::R3BPspPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspPoint(void *p) {
      delete ((::R3BPspPoint*)p);
   }
   static void deleteArray_R3BPspPoint(void *p) {
      delete [] ((::R3BPspPoint*)p);
   }
   static void destruct_R3BPspPoint(void *p) {
      typedef ::R3BPspPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspPoint

//______________________________________________________________________________
void R3BPspDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigi(void *p) {
      return  p ? new(p) ::R3BPspDigi : new ::R3BPspDigi;
   }
   static void *newArray_R3BPspDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigi[nElements] : new ::R3BPspDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigi(void *p) {
      delete ((::R3BPspDigi*)p);
   }
   static void deleteArray_R3BPspDigi(void *p) {
      delete [] ((::R3BPspDigi*)p);
   }
   static void destruct_R3BPspDigi(void *p) {
      typedef ::R3BPspDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigi

//______________________________________________________________________________
void R3BNeulandRawItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandRawItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandRawItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandRawItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandRawItem(void *p) {
      return  p ? new(p) ::R3BNeulandRawItem : new ::R3BNeulandRawItem;
   }
   static void *newArray_R3BNeulandRawItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandRawItem[nElements] : new ::R3BNeulandRawItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandRawItem(void *p) {
      delete ((::R3BNeulandRawItem*)p);
   }
   static void deleteArray_R3BNeulandRawItem(void *p) {
      delete [] ((::R3BNeulandRawItem*)p);
   }
   static void destruct_R3BNeulandRawItem(void *p) {
      typedef ::R3BNeulandRawItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandRawItem

//______________________________________________________________________________
void R3BNeulandMappedItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMappedItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMappedItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMappedItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMappedItem(void *p) {
      return  p ? new(p) ::R3BNeulandMappedItem : new ::R3BNeulandMappedItem;
   }
   static void *newArray_R3BNeulandMappedItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMappedItem[nElements] : new ::R3BNeulandMappedItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMappedItem(void *p) {
      delete ((::R3BNeulandMappedItem*)p);
   }
   static void deleteArray_R3BNeulandMappedItem(void *p) {
      delete [] ((::R3BNeulandMappedItem*)p);
   }
   static void destruct_R3BNeulandMappedItem(void *p) {
      typedef ::R3BNeulandMappedItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMappedItem

//______________________________________________________________________________
void R3BPspxMappedItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxMappedItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxMappedItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxMappedItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxMappedItem(void *p) {
      return  p ? new(p) ::R3BPspxMappedItem : new ::R3BPspxMappedItem;
   }
   static void *newArray_R3BPspxMappedItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxMappedItem[nElements] : new ::R3BPspxMappedItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxMappedItem(void *p) {
      delete ((::R3BPspxMappedItem*)p);
   }
   static void deleteArray_R3BPspxMappedItem(void *p) {
      delete [] ((::R3BPspxMappedItem*)p);
   }
   static void destruct_R3BPspxMappedItem(void *p) {
      typedef ::R3BPspxMappedItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxMappedItem

//______________________________________________________________________________
void R3BPspxCalItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxCalItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxCalItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxCalItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxCalItem(void *p) {
      return  p ? new(p) ::R3BPspxCalItem : new ::R3BPspxCalItem;
   }
   static void *newArray_R3BPspxCalItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxCalItem[nElements] : new ::R3BPspxCalItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxCalItem(void *p) {
      delete ((::R3BPspxCalItem*)p);
   }
   static void deleteArray_R3BPspxCalItem(void *p) {
      delete [] ((::R3BPspxCalItem*)p);
   }
   static void destruct_R3BPspxCalItem(void *p) {
      typedef ::R3BPspxCalItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxCalItem

//______________________________________________________________________________
void R3BLosMappedItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosMappedItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosMappedItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosMappedItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosMappedItem(void *p) {
      return  p ? new(p) ::R3BLosMappedItem : new ::R3BLosMappedItem;
   }
   static void *newArray_R3BLosMappedItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosMappedItem[nElements] : new ::R3BLosMappedItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosMappedItem(void *p) {
      delete ((::R3BLosMappedItem*)p);
   }
   static void deleteArray_R3BLosMappedItem(void *p) {
      delete [] ((::R3BLosMappedItem*)p);
   }
   static void destruct_R3BLosMappedItem(void *p) {
      typedef ::R3BLosMappedItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosMappedItem

namespace {
  void TriggerDictionaryInitialization_G__R3BDataDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/xballData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dhcData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/vetoData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/lumonData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/starttrackerData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/losData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/pspData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/neulandData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bdata/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BStack;
class R3BMCTrack;
class R3BXBallPoint;
class R3BCaloRawHit;
class R3BXBallCrystalHit;
class R3BXBallCrystalHitSim;
class R3BCaloCrystalHit;
class R3BCaloCrystalHitSim;
class R3BCaloHit;
class R3BCaloHitSim;
class R3BCaloPoint;
class R3BDchPoint;
class R3BDchFullPoint;
class R3BDchDigi;
class R3BDch2pDigi;
class R3BGfiPoint;
class R3BGfiDigi;
class R3BmTofPoint;
class R3BmTofDigi;
class R3BdTofPoint;
class R3BTofPoint;
class R3BTofDigi;
class R3BTof2pDigi;
class R3BVetoPoint;
class R3BSTaRTraPoint;
class R3BSTaRTraHit;
class R3BSTaRTrackerHit;
class R3BSTaRTrackerDigitHit;
class R3BTraPoint;
class R3BTraHit;
class R3BTrackerHit;
class R3BTraDigi;
class R3BTra2pDigi;
class R3BTraFraDigi;
class R3BTargetDigi;
class R3BTarget2pDigi;
class R3BSitrackerHit;
class R3BLandPoint;
class R3BNeutronTrack;
class R3BLandDigi;
class R3BLandFirstHits;
class R3BLandHit;
class R3BPaddleCrystalHit;
class ELILuMonPoint;
class R3BMfiPoint;
class R3BMfiDigi;
class R3BPspPoint;
class R3BPspDigi;
class R3BNeulandRawItem;
class R3BNeulandMappedItem;
class R3BPspxMappedItem;
class R3BPspxCalItem;
class R3BLosMappedItem;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                       R3BStack header file                    -----
// -----           Created 10/08/04  by D. Bertini / V. Friese         -----
// -------------------------------------------------------------------------


/** R3BStack.h
 *@author D.Bertini <d.bertini@gsi.de>
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Version 14/06/07 by V. Friese
 **
 ** This class handles the particle stack for the transport simulation.
 ** For the stack FILO functunality, it uses the STL stack. To store
 ** the tracks during transport, a TParticle arry is used. 
 ** At the end of the event, tracks satisfying the filter criteria
 ** are copied to a R3BMCTrack array, which is stored in the output.
 **
 ** The filtering criteria for the output tracks are:
 ** - primary tracks are stored in any case.
 ** - secondary tracks are stored if they have a minimal number of
 **   points (sum of all detectors) and a minimal energy, or are the
 ** 
 ** The storage of secondaries can be switched off.
 ** The storage of all mothers can be switched off. 
 ** By default, the minimal number of points is 1 and the energy cut is 0.
 **/


#ifndef R3BSTACK_H
#define R3BSTACK_H


#include "R3BDetectorList.h"
#include "FairGenericStack.h"

#include "TClonesArray.h"
#include "TVirtualMCStack.h"

#include <map>
#include <stack>

class R3BStack : public FairGenericStack
{

 public:

  /** Default constructor
   *param size  Estimated track number
   **/
  R3BStack(Int_t size = 100);


  /** Destructor  **/
  virtual ~R3BStack();


  /** Add a TParticle to the stack.
   ** Declared in TVirtualMCStack
   *@param toBeDone  Flag for tracking
   *@param parentID  Index of mother particle
   *@param pdgCode   Particle type (PDG encoding)
   *@param px,py,pz  Momentum components at start vertex [GeV]
   *@param e         Total energy at start vertex [GeV]
   *@param vx,vy,vz  Coordinates of start vertex [cm]
   *@param time      Start time of track [s]
   *@param polx,poly,polz Polarisation vector
   *@param proc      Production mechanism (VMC encoding)
   *@param ntr       Track number (filled by the stack)
   *@param weight    Particle weight
   *@param is        Generation status code (whatever that means)
   **/
  virtual void PushTrack(Int_t toBeDone, Int_t parentID, Int_t pdgCode,
			 Double_t px, Double_t py, Double_t pz,
			 Double_t e, Double_t vx, Double_t vy, 
			 Double_t vz, Double_t time, Double_t polx, 
			 Double_t poly, Double_t polz, TMCProcess proc, 
			 Int_t& ntr, Double_t weight, Int_t is);

  virtual void PushTrack(Int_t toBeDone, Int_t parentID, Int_t pdgCode,
			 Double_t px, Double_t py, Double_t pz,
			 Double_t e, Double_t vx, Double_t vy,
			 Double_t vz, Double_t time, Double_t polx,
			 Double_t poly, Double_t polz, TMCProcess proc,
			 Int_t& ntr, Double_t weight, Int_t is,Int_t secondParentId);





  /** Get next particle for tracking from the stack.
   ** Declared in TVirtualMCStack
   *@param  iTrack  index of popped track (return)
   *@return Pointer to the TParticle of the track
   **/
  virtual TParticle* PopNextTrack(Int_t& iTrack);


  /** Get primary particle by index for tracking from stack
   ** Declared in TVirtualMCStack
   *@param  iPrim   index of primary particle
   *@return Pointer to the TParticle of the track
   **/
  virtual TParticle* PopPrimaryForTracking(Int_t iPrim); 


  /** Set the current track number 
   ** Declared in TVirtualMCStack
   *@param iTrack  track number
   **/
  virtual void SetCurrentTrack(Int_t iTrack)   { fCurrentTrack     = iTrack; }


  /** Get total number of tracks 
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetNtrack() const { return fNParticles; }


  /** Get number of primary tracks
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetNprimary() const { return fNPrimaries; }


  /** Get the current track's particle
   ** Declared in TVirtualMCStack
   **/
  virtual TParticle* GetCurrentTrack() const;


  /** Get the number of the current track
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetCurrentTrackNumber() const { return fCurrentTrack; }


  /** Get the track number of the parent of the current track
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetCurrentParentTrackNumber() const;


  /** Add a TParticle to the fParticles array **/
  virtual void AddParticle(TParticle* part);


  /** Fill the MCTrack output array, applying filter criteria **/
  virtual void FillTrackArray();


  /** Update the track index in the MCTracks and MCPoints **/
  virtual void UpdateTrackIndex(TRefArray* detArray);


  /** Resets arrays and stack and deletes particles and tracks **/
  virtual void Reset();


  /** Register the MCTrack array to the Root Manager  **/
  virtual void Register();


  /** Output to screen 
   **@param iVerbose: 0=events summary, 1=track info
   **/
  virtual void Print(Int_t iVerbose) const;


  /** Modifiers  **/
  void StoreSecondaries(Bool_t choice = kTRUE) { fStoreSecondaries = choice; }
  void SetMinPoints(Int_t min)                 { fMinPoints        = min;    }
  void SetEnergyCut(Double_t eMin)             { fEnergyCut        = eMin;   }
  void StoreMothers(Bool_t choice = kTRUE)     { fStoreMothers     = choice; }


  /** Increment number of points for the current track in a given detector
   *@param iDet  Detector unique identifier
   **/
  void AddPoint(DetectorId iDet);


  /** Increment number of points for an arbitrary track in a given detector
   *@param iDet    Detector unique identifier
   *@param iTrack  Track number
   **/
  void AddPoint(DetectorId iDet, Int_t iTrack);
 

  /** Accessors **/
  TParticle* GetParticle(Int_t trackId) const;
  TClonesArray* GetListOfParticles() { return fParticles; }

  void SetDebug(Bool_t t ) { fDebug= t ; }


 private:

  R3BStack(const R3BStack&);
  R3BStack& operator=(const R3BStack&) { return *this; }
    

  /** STL stack (FILO) used to handle the TParticles for tracking **/
  std::stack<TParticle*>  fStack;           //!


  /** Array of TParticles (contains all TParticles put into or created
   ** by the transport 
   **/
  TClonesArray* fParticles;            //!


  /** Array of R3BMCTracks containg the tracks written to the output **/
  TClonesArray* fTracks;


  /** STL map from particle index to storage flag  **/
  std::map<Int_t, Bool_t>           fStoreMap;        //!
  std::map<Int_t, Bool_t>::iterator fStoreIter;       //!


  /** STL map from particle index to track index  **/
  std::map<Int_t, Int_t>            fIndexMap;        //!
  std::map<Int_t, Int_t>::iterator  fIndexIter;       //!


  /** STL map from track index and detector ID to number of MCPoints **/
  std::map<std::pair<Int_t, Int_t>, Int_t> fPointsMap;     //!

  
  /** Some indizes and counters **/
  Int_t fCurrentTrack;  //! Index of current track
  Int_t fNPrimaries;    //! Number of primary particles
  Int_t fNParticles;    //! Number of entries in fParticles
  Int_t fNTracks;       //! Number of entries in fTracks
  Int_t fIndex;         //! Used for merging
  Int_t fMC;            //! index for MC units testing

  /** Variables defining the criteria for output selection **/
  Bool_t     fStoreSecondaries;
  Int_t      fMinPoints;
  Double32_t fEnergyCut;
  Bool_t     fStoreMothers;
  Bool_t     fDebug;

  /** Mark tracks for output using selection criteria  **/
  void SelectTracks();


  ClassDef(R3BStack,1)

      
};






#endif 
// -------------------------------------------------------------------------
// -----                      R3BMCTrack header file                   -----
// -----                  Created 03/08/04                             -----
// -------------------------------------------------------------------------


/** R3BMCTrack.h
 **/


#ifndef R3BMCTRACK_H
#define R3BMCTRACK_H 1


#include "R3BDetectorList.h"

#include "TLorentzVector.h"
#include "TObject.h"
#include "TParticle.h"
#include "TVector3.h"

#ifndef ROOT_TParticlePDG
 #include "TParticlePDG.h"
#endif
#ifndef ROOT_TDatabasePDG
 #include "TDatabasePDG.h"
#endif


class R3BMCTrack : public TObject
{

 public:


  /**  Default constructor  **/
  R3BMCTrack();


  /**  Standard constructor  **/
  R3BMCTrack(Int_t pdgCode, Int_t motherID, Double_t px, Double_t py,
	     Double_t pz, Double_t x, Double_t y, Double_t z, 
	     Double_t t, Int_t nPoints);

  /**  Copy constructor  **/
  R3BMCTrack(const R3BMCTrack&);


  /**  Constructor from TParticle  **/
  R3BMCTrack(TParticle* particle, Int_t fMC);


  /**  Destructor  **/
  virtual ~R3BMCTrack();


  R3BMCTrack& operator=(const R3BMCTrack&) { return *this; }


  /**  Output to screen  **/
  virtual void Print(Option_t *option="") const;


  /**  Accessors  **/
  Int_t    GetPdgCode()  const { return fPdgCode; }
  Int_t    GetMotherId() const { return fMotherId; }
  Double_t GetPx()       const { return fPx; }
  Double_t GetPy()       const { return fPy; }
  Double_t GetPz()       const { return fPz; }
  Double_t GetStartX()   const { return fStartX; }
  Double_t GetStartY()   const { return fStartY; }
  Double_t GetStartZ()   const { return fStartZ; }
  Double_t GetStartT()   const { return fStartT; }
  Double_t GetMass()     const;
  Double_t GetEnergy()   const;
  Double_t GetPt()       const { return TMath::Sqrt(fPx*fPx+fPy*fPy); }
  Double_t GetP() const { return TMath::Sqrt(fPx*fPx+fPy*fPy+fPz*fPz); }
  Double_t GetRapidity() const;
  void GetMomentum(TVector3& momentum); 
  void Get4Momentum(TLorentzVector& momentum);
  void GetStartVertex(TVector3& vertex);


  /** Accessors to the number of MCPoints in the detectors **/
  Int_t GetNPoints(DetectorId detId)  const;


  /**  Modifiers  **/
  void SetMotherId(Int_t id) { fMotherId = id; }
  void SetNPoints(Int_t iDet, Int_t np);



private:

  /**  PDG particle code  **/
  Int_t  fPdgCode;

  /**  Index of mother track. -1 for primary particles.  **/
  Int_t  fMotherId;

  /** Momentum components at start vertex [GeV]  **/
  Double32_t fPx, fPy, fPz;

  /** Coordinates of start vertex [cm, ns]  **/
  Double32_t fStartX, fStartY, fStartZ, fStartT;

  /**  Bitvector representing the number of MCPoints for this track in 
   **  each subdetector. The detectors are represented by
   **  REF:         Bit  0      (1 bit,  max. value  1)
   **  The respective point numbers can be accessed and modified 
   **  with the inline functions. 
   **  Bits 26-31 are spare for potential additional detectors.
   **/
  Int_t fNPoints;

  // case of HIons
  Double32_t fMass;


  ClassDef(R3BMCTrack,1);

};



// ==========   Inline functions   ========================================

inline Double_t R3BMCTrack::GetEnergy() const {
  Double_t mass = GetMass();
  return TMath::Sqrt(mass*mass + fPx*fPx + fPy*fPy + fPz*fPz );
}


inline void R3BMCTrack::GetMomentum(TVector3& momentum) { 
  momentum.SetXYZ(fPx,fPy,fPz); 
}


inline void R3BMCTrack::Get4Momentum(TLorentzVector& momentum) {
  momentum.SetXYZT(fPx,fPy,fPz,GetEnergy()); 
}


inline void R3BMCTrack::GetStartVertex(TVector3& vertex) { 
  vertex.SetXYZ(fStartX,fStartY,fStartZ); 
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BXBallPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BXBallPoint.h
 **/


#ifndef R3BXBALLPOINT_H
#define R3BXBALLPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BXBallPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BXBallPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BXBallPoint(Int_t trackID, Int_t detID, Int_t type, Int_t cp, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BXBallPoint(const R3BXBallPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BXBallPoint();


  /** Accessors **/
  Int_t GetCrystalType()   const { return fCrystalType; }
  Int_t GetCrystalNumber() const { return fCrystalNb; }
  Double_t GetXIn()        const { return fX; }
  Double_t GetYIn()        const { return fY; }
  Double_t GetZIn()        const { return fZ; }
  Double_t GetXOut()       const { return fX_out; }
  Double_t GetYOut()       const { return fY_out; }
  Double_t GetZOut()       const { return fZ_out; }
  Double_t GetPxOut()      const { return fPx_out; }
  Double_t GetPyOut()      const { return fPy_out; }
  Double_t GetPzOut()      const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fCrystalType;
  Int_t fCrystalNb;


  ClassDef(R3BXBallPoint,1)

};



inline void R3BXBallPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BXBallPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                  R3BXBallCrystalHit header file                -----
// -----               Created 13/06/12  by Pablo Cabanelas            -----
// -------------------------------------------------------------------------

/**  R3BXBallCrystalHit.h
 **  A cal crystal hit is the representation of the 
 **  information obtained from each crystal in the DH-CrystalBall.
 **/

#ifndef R3BXBALLCRYSTALHIT_H
#define R3BXBALLCRYSTALHIT_H

#include "TObject.h"
#include "FairMultiLinkedData.h"

class R3BXBallCrystalHit : public FairMultiLinkedData 
{
public:

  /** Default constructor **/
  R3BXBallCrystalHit();

  /** Constructor with arguments
   *@param fCrystalNb      Crystal number
   *@param fEnergy	   total energy deposited on the crystal [GeV]
   *@param fTime           Time since event start [ns]
   **/
  R3BXBallCrystalHit(Int_t crysnb, Double_t energy, Double_t time);

  /** Copy constructor **/
  R3BXBallCrystalHit(const R3BXBallCrystalHit& hit) { *this = hit; };

  /** Destructor **/
  virtual ~R3BXBallCrystalHit();

  /** Accessors **/
  Int_t    GetCrystalNumber() const { return fCrystalNb; }
  Double_t GetEnergy()        const { return fEnergy; }
  Double_t GetTime()          const { return fTime; }
	
  /** Modifiers **/
  void SetCrystalNumber(Int_t crysnb)       { fCrystalNb = crysnb; }
  void SetEnergy(Double32_t energy)         { fEnergy = energy; }
  void SetTime(Double32_t time)             { fTime = time; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

protected:

  Double32_t fEnergy;    //total energy in the crystal
  Int_t fCrystalNb;      //crystal number (1-162, number of crystals in the CB)
  Double32_t fTime;      //time of the interaction

  ClassDef(R3BXBallCrystalHit,1)

};

#endif
// -------------------------------------------------------------------------
// -----                R3BXBallCrystalHitSim header file                -----
// -----               Created 02/07/12  by Pablo Cabanelas            -----
// -------------------------------------------------------------------------

/**  R3BXBallCrystalHitSim.h
 **  A cal crystal hit is the representation of the 
 **  information obtained from each crystal in the DH-CrystalBall.
 **/

#ifndef R3BXBALLCRYSTALHITSIM_H
#define R3BXBALLCRYSTALHITSIM_H

#include "TObject.h"
#include "FairMultiLinkedData.h"
#include "R3BXBallCrystalHit.h"

class R3BXBallCrystalHitSim : public R3BXBallCrystalHit 
{
public:

  /** Default constructor **/
  R3BXBallCrystalHitSim();

  /** Constructor with arguments
   *@param fCrystalType    Crystal type
   *@param fNSteps         Steps inside an active volume
   *@param fEinc           total energy entering the crystal [GeV]
   *@param fTrackID        Track index
   *@param fVolumeID       Volume index
   *@param fParentTrackID  Parent Track index
   *@param fTrackPID       Particle identification
   *@param fTrackUniqueID  Particle unique id (e.g. if Delta electron, fTrackUniqueID=9)
   **/
  R3BXBallCrystalHitSim(Int_t type, Int_t crysnb,
			Double_t energy, Double_t time,
			Int_t steps, Double_t einc,
			Int_t trackid, Int_t volid, Int_t partrackid,
			Int_t pdgid, Int_t uniqueid);

  /** Copy constructor **/
  R3BXBallCrystalHitSim(const R3BXBallCrystalHitSim& hit) { *this = hit; };

  /** Destructor **/
  virtual ~R3BXBallCrystalHitSim();

  /** Accessors **/
  Int_t    GetCrystalType()   const { return fCrystalType; }
  Int_t    GetNSteps()        const { return fNSteps; }
  Double_t GetEinc()          const { return fEinc; }
  Int_t    GetTrackId()       const { return fTrackID; }
  Int_t    GetVolumeId()      const { return fVolumeID; }
  Int_t    GetParentTrackId() const { return fParentTrackID; }
  Int_t    GetTrackPID()      const { return fTrackPID; }
  Int_t    GetTrackUniqueID() const { return fTrackUniqueID; }
	
  /** Modifiers **/
  void SetCrystalType(Int_t type)           { fCrystalType = type; }
  void AddMoreEnergy(Double32_t moreEnergy) { fEnergy += moreEnergy; }
  void SetNSteps(Int_t steps)               { fNSteps = steps; }
  void SetEinc(Double32_t einc)             { fEinc = einc; }
  void SetTrackId(Int_t trackid)            { fTrackID = trackid; }
  void SetVolumeId(Int_t volid)             { fVolumeID = volid; }
  void SetParentTrackId(Int_t partrackid)   { fParentTrackID = partrackid; }
  void SetTrackPID(Int_t pdgid)             { fTrackPID = pdgid; }
  void SetTrackUniqueID(Int_t uniqueid)     { fTrackUniqueID = uniqueid; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

protected:

  Int_t fCrystalType;    //crystal type (1-5, the four kind of crystal shapes in the CB
  Int_t fNSteps;         //steps inside an active volume
  Double32_t fEinc;      //total energy entering the crystal
  Int_t fTrackID;        //track index
  Int_t fVolumeID;       //volume index
  Int_t fParentTrackID;  //parent track index
  Int_t fTrackPID;       //particle identification
  Int_t fTrackUniqueID;       //particle unique id

  ClassDef(R3BXBallCrystalHitSim,1)

};

#endif
// -------------------------------------------------------------------------
// -----                  R3BCaloCrystalHit header file                -----
// -----               Created 08/07/10  by H. Alvarez Pol             -----
// -----	     Last modification 18/07/14 by H. Alvarez         -----
// -------------------------------------------------------------------------

/**  R3BCaloCrystalHit.h
 **  A calorimeter crystal hit is the representation of the 
 **  information obtained from each crystal in the calorimeter.
 **/

#ifndef R3BCALOCRYSTALHIT_H
#define R3BCALOCRYSTALHIT_H

#include "TObject.h"
#include "FairMultiLinkedData.h"

class R3BCaloCrystalHit : public FairMultiLinkedData 
{
public:

  /** Default constructor **/
  R3BCaloCrystalHit();

  /** Constructor with arguments
   *@param fCrystalId   Crystal unique identifier
   *@param fEnergy      Total energy deposited on the crystal ([GeV] in sim)
   *@param fToT_Energy  Total energy deposited on the crystal from ToT ([GeV] in sim)
   *@param fTime        Time since event start [ns]
   **/
  R3BCaloCrystalHit(Int_t ident, Double_t energy, Double_t Nf, Double_t Ns, ULong64_t time, Double_t tot_energy=0);

  /** Copy constructor **/
  R3BCaloCrystalHit(const R3BCaloCrystalHit&);

  R3BCaloCrystalHit& operator=(const R3BCaloCrystalHit&) { return *this; }

  /** Destructor **/
  virtual ~R3BCaloCrystalHit();

  /** Accessors **/
  Int_t    GetCrystalId()     const { return fCrystalId; }
  Double_t GetEnergy()        const { return fEnergy; }
  Double_t GetToT_Energy()    const { return fToT_Energy; }
  Double_t GetNf()            const { return fNf; }
  Double_t GetNs()            const { return fNs; }
  ULong64_t GetTime()          const { return fTime; }
	
  Int_t    GetCrystalType()   const { return 0; }   //Backwards compatibility: not crashing macros
  Int_t    GetCrystalCopy()   const { return 0; }   //Backwards compatibility: not crashing macros

  /** Modifiers **/
  void SetCrystalId(Int_t ident)            { fCrystalId = ident; }
  void SetEnergy(Double32_t energy){fEnergy = energy;}
  void SetToT_Energy(Double32_t energy){fToT_Energy = energy;}
  void SetNf(Double32_t Nf){fNf = Nf;}
  void SetNs(Double32_t Ns){fNs = Ns;}
  void SetTime(ULong64_t time){fTime = time;}

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

protected:
  Double32_t fEnergy;    //total energy in the crystal
  Double32_t fNf;        //total Nf in the crystal
  Double32_t fNs;        //total Nf in the crystal
  Double32_t fToT_Energy;//total energy in the crystal from ToT
  ULong64_t fTime;      //time of the interaction
  Int_t fCrystalId;      //crystal unique identifier

  ClassDef(R3BCaloCrystalHit,2)

};

#endif
// -------------------------------------------------------------------------
// -----                R3BCaloCrystalHitSim header file               -----
// -----               Created 04/07/12  by P. Cabanelas               -----
// -------------------------------------------------------------------------

/**  R3BCaloCrystalHitSim.h
 **  A simulation calorimeter crystal hit is the representation of the 
 **  information obtained from each crystal in the calorimeter.
 **/

#ifndef R3BCALOCRYSTALHITSIM_H
#define R3BCALOCRYSTALHITSIM_H

#include "TObject.h"
#include "FairMultiLinkedData.h"
#include "R3BCaloCrystalHit.h"

class R3BCaloCrystalHitSim : public R3BCaloCrystalHit 
{
public:

  /** Default constructor **/
  R3BCaloCrystalHitSim();

  /** Constructor with arguments
   *@param fCrystalType    Crystal type
   *@param fCrystalCopy    Crystal copy
   *@param fNSteps         Steps inside an active volume
   *@param fEinc           total energy entering the crystal [GeV]
   *@param fTrackID        Track index
   *@param fVolumeID       Volume index
   *@param fParentTrackID  Parent Track index
   *@param fTrackPID       Particle identification
   *@param fTrackUniqueID  Particle unique id (e.g. if Delta electron, fTrackUniqueID=9)
   **/
  R3BCaloCrystalHitSim(Int_t type, Int_t copy, Int_t ident,
		       Double_t energy, Double_t Nf, Double_t Ns, Double_t time,
			Int_t steps, Double_t einc,
			Int_t trackid, Int_t volid, Int_t partrackid,
			Int_t pdgid, Int_t uniqueid);

  /** Copy constructor **/
  R3BCaloCrystalHitSim(const R3BCaloCrystalHitSim&);

  R3BCaloCrystalHitSim& operator=(const R3BCaloCrystalHitSim&) { return *this; }

  /** Destructor **/
  virtual ~R3BCaloCrystalHitSim();

  /** Accessors **/
  Int_t    GetCrystalType()   const { return fCrystalType; }
  Int_t    GetCrystalCopy()   const { return fCrystalCopy; }
  Int_t    GetNSteps()        const { return fNSteps; }
  Double_t GetEinc()          const { return fEinc; }
  Int_t    GetTrackId()       const { return fTrackID; }
  Int_t    GetVolumeId()      const { return fVolumeID; }
  Int_t    GetParentTrackId() const { return fParentTrackID; }
  Int_t    GetTrackPID()      const { return fTrackPID; }
  Int_t    GetTrackUniqueID() const { return fTrackUniqueID; }
	
  /** Modifiers **/
  void SetCrystalType(Int_t type)           { fCrystalType = type; }
  void SetCrystalCopy(Int_t copy)           { fCrystalCopy = copy; }
  void AddMoreEnergy(Double32_t moreEnergy) { fEnergy += moreEnergy; }
  void AddMoreNf(Double32_t moreNf)         { fNf += moreNf; }
  void AddMoreNs(Double32_t moreNs)         { fNs += moreNs; }
  void SetNSteps(Int_t steps)               { fNSteps = steps; }
  void SetEinc(Double32_t einc)             { fEinc = einc; }
  void SetTrackId(Int_t trackid)            { fTrackID = trackid; }
  void SetVolumeId(Int_t volid)             { fVolumeID = volid; }
  void SetParentTrackId(Int_t partrackid)   { fParentTrackID = partrackid; }
  void SetTrackPID(Int_t pdgid)             { fTrackPID = pdgid; }
  void SetTrackUniqueID(Int_t uniqueid)     { fTrackUniqueID = uniqueid; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

protected:

  Int_t fCrystalType;    //crystal type
  Int_t fCrystalCopy;    //crystal copy
  Int_t fNSteps;         //steps inside an active volume
  Double32_t fEinc;      //total energy entering the crystal
  Int_t fTrackID;        //track index
  Int_t fVolumeID;       //volume index
  Int_t fParentTrackID;  //parent track index
  Int_t fTrackPID;       //particle identification
  Int_t fTrackUniqueID;       //particle unique id

  ClassDef(R3BCaloCrystalHitSim,1)

};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                          R3BCaloRawHit                            -----
// -----                           Version 0.1                             -----
// -----                    Created 15.10.2013 by Y.Gonzalez               -----
// -----                    Modified 24/09/2014 by A.Perea                                               -----
// -----------------------------------------------------------------------------

#ifndef R3BCALORAWHIT_H
#define R3BCALORAWHIT_H
#include "TObject.h"

class R3BCaloRawHit : public TObject {

  
public:
  // Default Constructor
  R3BCaloRawHit();
  
  /** Standard Constructor
   *@param crystalId   Crystal unique identifier
   *@param energy      Total energy deposited in the crystal [GeV]
   *@param nf          Total fast amplitude deposited in the crystal [a.u.]
   *@param ns          Total slow amplitude deposited on the crystal [a.u.]
   *@param time        Time since event start [ns]
   *@param tot         Time over threshold
   **/
  R3BCaloRawHit(UShort_t crystalId, Int_t energy, Int_t nf, Int_t ns, ULong_t time, UChar_t error, UShort_t tot);
  
  //Destructor
  ~R3BCaloRawHit() { }
  
  //Getters
  inline const UShort_t& GetCrystalId() const { return fCrystalId; }
  inline const Int_t&    GetEnergy()    const { return fEnergy;    }
  inline const Int_t&    GetNf()        const { return fNf;        }
  inline const Int_t&    GetNs()        const { return fNs;        }
  inline const ULong_t&  GetTime()      const { return fTime;      }
  inline const UChar_t&  GetError()     const { return fError;     }	
  inline const UShort_t& GetTot()       const { return fTot;       }  
  
protected:
  UShort_t fCrystalId; // crystal unique identifier
  Int_t    fEnergy;    // total energy in the crystal
  Int_t    fNf;        // total fast amplitude in the crystal
  Int_t    fNs;        // total slow amplitude in the crystal
  ULong_t  fTime;      // time-stamp (common to all the hits in the event)
  UChar_t  fError;     // bit coded error flag
  UShort_t fTot;       // time-over-treshold
   
public:
  ClassDef(R3BCaloRawHit,1)
};

#endif
// -------------------------------------------------------------------------
// -----                  R3BCaloHit header file                       -----
// -----               Created  26/08/10  by H. Alvarez Pol            -----
// -----               Modified 15/09/11  by Enrico Fiori              ----- 
// -------------------------------------------------------------------------


/**  R3BCaloHit.h
 **  A calorimeter hit is the representation of the information 
 **  reconstructed from a set of crystalHits in the calorimeter.
 **/


#ifndef R3BCALOHIT_H
#define R3BCALOHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"


class R3BCaloHit : public FairMultiLinkedData 
{
	
public:
	
	/** Default constructor **/
	R3BCaloHit();
	
	/** Constructor with arguments
	 *@param fNbOfCrystalHits		Crystal unique identifier
	 *@param fEnergy				Total energy deposited 
	 *@param fTheta					Reconstructed theta
	 *@param fPhi					Reconstructed phi
	 **/
	R3BCaloHit(UInt_t Nb, Double_t ene, Double_t nf, Double_t ns,
		   Double_t theta, Double_t phi, ULong64_t time);
	
	
	/** Copy constructor **/
	R3BCaloHit(const R3BCaloHit&);

	R3BCaloHit& operator=(const R3BCaloHit&) { return *this; }
	
	
	/** Destructor **/
	virtual ~R3BCaloHit();
	
	/** Accessors **/
	UInt_t GetNbOfCrystalHits()   const { return fNbOfCrystalHits; }
	Double_t GetEnergy()   const { return fEnergy; }
	Double_t GetNf()   const { return fNf; }
	Double_t GetNs()   const { return fNs; }
	Double_t GetTheta()   const { return fTheta; }
	Double_t GetPhi()   const { return fPhi; }
        ULong64_t GetTime() const { return fTime; }

	/** Modifiers **/
	void SetNbOfCrystalHits(UInt_t number){fNbOfCrystalHits = number;}
	void SetEnergy(Double_t ene){fEnergy = ene;}
	void SetNf(Double_t nf){fNf = nf;}
	void SetNs(Double_t ns){fNs = ns;}
	void SetTheta(Double_t theta){fTheta = theta;}
	void SetPhi(Double_t phi){fPhi = phi;}
        void SetTime(ULong64_t time){fTime = time;}

	/** Output to screen **/
	virtual void Print(const Option_t* opt) const;
	
	
protected:
	
	//Basic Hit information
	UInt_t fNbOfCrystalHits; //number of crystals contribuying to the R3BCaloHit
	Double_t fEnergy;        //total energy deposited 
	Double_t fNf;            //total Nf deposited
	Double_t fNs;            //total Ns deposited
	Double_t fTheta;         //reconstructed theta
	Double_t fPhi;           //reconstructed phi
        ULong64_t fTime;         //WR time stamp
	
	ClassDef(R3BCaloHit,2)
	
};

#endif
// -------------------------------------------------------------------------
// -----                  R3BCaloHitSim header file                    -----
// -----               Created  05/07/12  by P. Cabanelas              -----
// -------------------------------------------------------------------------


/**  R3BCaloHitSim.h
 **  A calorimeter hit sim is the representation of the information 
 **  reconstructed from a set of crystalHits in the calorimeter in simulation.
 **/


#ifndef R3BCALOHITSIM_H
#define R3BCALOHITSIM_H

#include "TObject.h"

#include "R3BCaloHit.h"


class R3BCaloHitSim : public R3BCaloHit 
{
	
public:
	
	/** Default constructor **/
	R3BCaloHitSim();
	
	/** Constructor with arguments
	 *@param fNbOfCrystalHits		Crystal unique identifier
	 *@param fEnergy			Total energy deposited 
	 *@param fTheta				Reconstructed theta
	 *@param fPhi				Reconstructed phi
	 *@param fEinc				Total incident energy
	 **/
	R3BCaloHitSim(UInt_t Nb, Double_t ene, Double_t nf, Double_t ns,
			   Double_t theta, Double_t phi, Double_t einc);
	
	
	/** Copy constructor **/
	R3BCaloHitSim(const R3BCaloHitSim&);

	R3BCaloHitSim& operator=(const R3BCaloHitSim&) { return *this; }
	
	
	/** Destructor **/
	virtual ~R3BCaloHitSim();
	
	/** Accessors **/
	Double_t GetEinc()   const { return fEinc; }

	/** Modifiers **/
	void SetEinc(Double_t einc){fEinc = einc;}


	/** Output to screen **/
	virtual void Print(const Option_t* opt) const;
	
	
protected:
	
	//Basic Hit information
        Double_t fEinc;      // total incident energy
		
	
	ClassDef(R3BCaloHitSim,2)
	
};

#endif
// -------------------------------------------------------------------------
// -----                      R3BCaloPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BCaloPoint.h
 **/


#ifndef R3BCALOPOINT_H
#define R3BCALOPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BCaloPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BCaloPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   *@param Nf       Fast component of CsI(Tl) light [a.u.]
   *@param Ns       Slow component of CsI(Tl) light [a.u.]
   **/
  R3BCaloPoint(Int_t trackID, Int_t detID, Int_t volId, Int_t copy , Int_t ident,
	       TVector3 posIn,TVector3 posOut, TVector3 momIn, TVector3 momOut,
	       Double_t tof, Double_t length, Double_t eLoss, Double_t Nf, Double_t Ns);


  /** Copy constructor **/
  R3BCaloPoint(const R3BCaloPoint&);

  R3BCaloPoint& operator=(const R3BCaloPoint&) { return *this; }


  /** Destructor **/
  virtual ~R3BCaloPoint();


  /** Accessors **/
  Int_t GetCrystalType()   const { return fCrystalType; }
  Int_t GetCrystalCopy()   const { return fCrystalCopy; }
  Int_t GetCrystalId()   const { return fCrystalId; }
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fCrystalType;
  Int_t fCrystalCopy;
  Int_t fCrystalId;
  Double32_t fNf, fNs;

  ClassDef(R3BCaloPoint,1)

};



inline void R3BCaloPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BCaloPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                          R3BCaloRawHit                            -----
// -----                           Version 0.1                             -----
// -----                    Created 15.10.2013 by Y.Gonzalez               -----
// -----                    Modified 24/09/2014 by A.Perea                                               -----
// -----------------------------------------------------------------------------

#ifndef R3BCALORAWHIT_H
#define R3BCALORAWHIT_H
#include "TObject.h"

class R3BCaloRawHit : public TObject {

  
public:
  // Default Constructor
  R3BCaloRawHit();
  
  /** Standard Constructor
   *@param crystalId   Crystal unique identifier
   *@param energy      Total energy deposited in the crystal [GeV]
   *@param nf          Total fast amplitude deposited in the crystal [a.u.]
   *@param ns          Total slow amplitude deposited on the crystal [a.u.]
   *@param time        Time since event start [ns]
   *@param tot         Time over threshold
   **/
  R3BCaloRawHit(UShort_t crystalId, Int_t energy, Int_t nf, Int_t ns, ULong_t time, UChar_t error, UShort_t tot);
  
  //Destructor
  ~R3BCaloRawHit() { }
  
  //Getters
  inline const UShort_t& GetCrystalId() const { return fCrystalId; }
  inline const Int_t&    GetEnergy()    const { return fEnergy;    }
  inline const Int_t&    GetNf()        const { return fNf;        }
  inline const Int_t&    GetNs()        const { return fNs;        }
  inline const ULong_t&  GetTime()      const { return fTime;      }
  inline const UChar_t&  GetError()     const { return fError;     }	
  inline const UShort_t& GetTot()       const { return fTot;       }  
  
protected:
  UShort_t fCrystalId; // crystal unique identifier
  Int_t    fEnergy;    // total energy in the crystal
  Int_t    fNf;        // total fast amplitude in the crystal
  Int_t    fNs;        // total slow amplitude in the crystal
  ULong_t  fTime;      // time-stamp (common to all the hits in the event)
  UChar_t  fError;     // bit coded error flag
  UShort_t fTot;       // time-over-treshold
   
public:
  ClassDef(R3BCaloRawHit,1)
};

#endif
// -------------------------------------------------------------------------
// -----                      R3BDchPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BDchPoint.h
 **/


#ifndef R3BDCHPOINT_H
#define R3BDCHPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BDchPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BDchPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BDchPoint(Int_t trackId, Int_t mod, Int_t layer, Int_t cell, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      TVector3 lpos1, TVector3 lmom1,
	      TVector3 lpos2, TVector3 lmom2,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BDchPoint(const R3BDchPoint&);

  R3BDchPoint& operator=(const R3BDchPoint&) { return *this; }


  /** Destructor **/
  virtual ~R3BDchPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  
  Double_t GetXLocalIn() const { return fLocalX_in; }
  Double_t GetYLocalIn() const { return fLocalY_in; }
  
  Double_t GetXLocalOut() const { return fLocalX_out; }
  Double_t GetYLocalOut() const { return fLocalY_out; }
  

  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void MomentumIn(TVector3& mom) { mom.SetXYZ(fPx,fPy,fPz); }

  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }

  void LocalPositionIn(TVector3& pos)  { pos.SetXYZ(fLocalX_in, fLocalY_in, fLocalZ_in); }
  void LocalMomentumIn(TVector3& mom) { mom.SetXYZ(fLocalPx_in,fLocalPy_in,fLocalPz_in); }

  void LocalPositionOut(TVector3& pos) { pos.SetXYZ(fLocalX_out,fLocalY_out,fLocalZ_out); }
  void LocalMomentumOut(TVector3& mom) { mom.SetXYZ(fLocalPx_out,fLocalPy_out,fLocalPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;
  Double_t GetLocalX(Double_t z) const;
  Double_t GetLocalY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Double32_t fLocalX_in, fLocalY_in,fLocalZ_in;
  Double32_t fLocalPx_in, fLocalPy_in,fLocalPz_in;
  Double32_t fLocalX_out, fLocalY_out,fLocalZ_out;
  Double32_t fLocalPx_out, fLocalPy_out,fLocalPz_out;

  Int_t fModule;
  Int_t fLayer;
  Int_t fCell;


  ClassDef(R3BDchPoint,1)

};



inline void R3BDchPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BDchPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BDchFullPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BDchFullPoint.h
 **/


#ifndef R3BDCHFULLPOINT_H
#define R3BDCHFULLPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BDchFullPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BDchFullPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BDchFullPoint(Int_t trackId, Int_t module, Int_t layer, Int_t cell,
		  TVector3 pos, TVector3 lpos, TVector3 mom, TVector3 lmom,
		  Double_t tof, Double_t length, Double_t eLoss);
  

  /** Copy constructor **/
  R3BDchFullPoint(const R3BDchFullPoint&);

  R3BDchFullPoint& operator=(const R3BDchFullPoint&) { return *this; }


  /** Destructor **/
  virtual ~R3BDchFullPoint();


  /** Accessors **/
  Double_t GetLocalX()  const { return fLocalX; }
  Double_t GetLocalY()  const { return fLocalY; }
  Double_t GetLocalZ()  const { return fLocalZ; }

  Double_t GetLocalPx() const { return fLocalPx; }
  Double_t GetLocalPy() const { return fLocalPy; }
  Double_t GetLocalPz() const { return fLocalPz; }


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


 protected:
  Double32_t fLocalX,  fLocalY,  fLocalZ;
  Double32_t fLocalPx, fLocalPy, fLocalPz;
  Int_t fModule;
  Int_t fLayer;
  Int_t fCell;


  ClassDef(R3BDchFullPoint,1)
};



#endif
// -------------------------------------------------------------------------
// -----                      R3BGfiPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BGfiPoint.h
 **/


#ifndef R3BGFIPOINT_H
#define R3BGFIPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BGfiPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BGfiPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param plane    Module ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BGfiPoint(Int_t trackID, Int_t detID, Int_t plane, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BGfiPoint(const R3BGfiPoint&);


  /** Destructor **/
  virtual ~R3BGfiPoint();


  /** Accessors **/
  Int_t GetModule()   const { return fModule; }
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fModule;


  ClassDef(R3BGfiPoint,1)

};



inline void R3BGfiPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BGfiPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BmTofPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BmTofPoint.h
 **/


#ifndef R3BMTOFPOINT_H
#define R3BMTOFPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BmTofPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BmTofPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BmTofPoint(Int_t trackID, Int_t detID, TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BmTofPoint(const R3BmTofPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BmTofPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;



  ClassDef(R3BmTofPoint,1)

};



inline void R3BmTofPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BmTofPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BdTofPoint header file                 -----
// -----                  Created 18/05/15  by D. Kresan               -----
// -------------------------------------------------------------------------


/**  R3BdTofPoint.h
 **/


#ifndef R3BDTOFPOINT_H
#define R3BDTOFPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BdTofPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BdTofPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BdTofPoint(Int_t trackID, Int_t detID, TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BdTofPoint(const R3BdTofPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BdTofPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;



  ClassDef(R3BdTofPoint,1)

};



inline void R3BdTofPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BdTofPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BTofPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BTofPoint.h
 **/


#ifndef R3BTOFPOINT_H
#define R3BTOFPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BTofPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BTofPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BTofPoint(Int_t trackID, Int_t detID, TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BTofPoint(const R3BTofPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BTofPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;



  ClassDef(R3BTofPoint,1)

};



inline void R3BTofPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BTofPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BVetoPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BVetoPoint.h
 **/


#ifndef R3BVETOPOINT_H
#define R3BVETOPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BVetoPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BVetoPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BVetoPoint(Int_t trackID, Int_t detID, Int_t box, Int_t sector, Int_t paddle, TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BVetoPoint(const R3BVetoPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BVetoPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  Int_t    GetSector() const { return fSector;}
  Int_t    GetPaddleType() const { return fPaddleTyp;}
  Int_t    GetPaddleNb() const { return fPaddleNb;}
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fSector;
  Int_t fPaddleNb;
  Int_t fPaddleTyp;


  ClassDef(R3BVetoPoint,1)

};



inline void R3BVetoPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BVetoPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      ELILuMonPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  ELILuMonPoint.h
 **/


#ifndef ELILUMONPOINT_H
#define ELILUMONPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class ELILuMonPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  ELILuMonPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  ELILuMonPoint(Int_t trackID, Int_t detID, Int_t copy, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  ELILuMonPoint(const ELILuMonPoint&);


  ELILuMonPoint& operator=(const ELILuMonPoint&) { return *this; }


  /** Destructor **/
  virtual ~ELILuMonPoint();


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fCrystalNb;


  ClassDef(ELILuMonPoint,1)

};



inline void ELILuMonPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void ELILuMonPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BTraPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BTraPoint.h
 **/


#ifndef R3BTRAPOINT_H
#define R3BTRAPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BTraPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BTraPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param detVolID Detector Copy ID  // added by Marc
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BTraPoint(Int_t trackID, Int_t detID, Int_t detCopyID, // detCopyID added by Marc
	      TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BTraPoint(const R3BTraPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BTraPoint();


  /** Accessors **/
  Int_t GetDetCopyID()   const { return fDetCopyID; } // added by Marc
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }


  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);
  void SetDetCopyID(Int_t id)       { fDetCopyID = id; }; // added by Marc


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fDetCopyID; // added by Marc



  ClassDef(R3BTraPoint,1)

};



inline void R3BTraPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BTraPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BTraHit header file                  -----
// -----                  Created 07/07/09  by M. Labiche               -----
// -------------------------------------------------------------------------



#ifndef R3BTRAHIT_H
#define R3BTRAHIT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"


class R3BTraHit : public FairHit
{

 public:

  /** Default constructor **/
  R3BTraHit();

  /** Copy constructor **/
  R3BTraHit(const R3BTraHit& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTraHit();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void SetEnergy(Double_t en){fEnergy = en;}
  Double_t GetEnergy(){return fEnergy;}

  void SetToF(Double_t time){fTof = time;}
  Double_t GetToF(){return fTof;}

  void SetDetID(Int_t id){ fDetectorID = id; }
  Int_t GetDetID(){ return fDetectorID; }



 protected:

  Double32_t fEnergy;
  Double32_t fTof;
  
  ClassDef(R3BTraHit,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTra header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------
/**  R3BSitrackerHit.h
 **/

#ifndef R3BSITRACKERHIT_H
#define R3BSITRACKERHIT_H

#include "TObject.h"
#include "TVector3.h"
#include "FairHit.h"

class R3BSitrackerHit : public FairHit
{

 public:

  /** Default constructor **/
  R3BSitrackerHit();
  /** Copy constructor **/
  R3BSitrackerHit(const R3BSitrackerHit& point) { *this = point; };
  /** Destructor **/
  virtual ~R3BSitrackerHit();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

   
  void SetType(UInt_t ty){type = ty;}
  void SetCopy(UInt_t co){copy = co;}
  void SetEnergy(Double_t en){fEnergy = en;}
  void SetNbOfSteps(UInt_t nb){nbOfSteps = nb;}

  void SetTimeFirstStep(Double_t ti){fTimeFirstStep = ti;}
  void SetTimeLastStep(Double_t ti){fTimeLastStep = ti;}
  void SetPositionX(Double_t posX){fX = posX;}
  void SetPositionY(Double_t posY){fY = posY;}
  void SetPositionZ(Double_t posZ){fZ = posZ;}

  void SetNbOfPrimaries(UInt_t nb){nbOfPrimaries = nb;}
  void SetEnergyPrimary(Double_t ene){fEnergyPrimary = ene;}
  void SetThetaPrimary(Double_t the){fThetaPrimary = the;}
  void SetPhiPrimary(Double_t phi){fPhiPrimary = phi;}

  void SetEventID(UInt_t ev){eventID = ev;}
  void SetRunID(UInt_t run){runID = run;}

  Int_t GetType(){return type;}
  Int_t GetCopy(){return copy;}
  Double_t GetEnergy(){return fEnergy;}
  UInt_t GetNbOfSteps(){return nbOfSteps;}

  Double_t GetTimeFirstStep(){return fTimeFirstStep;}
  Double_t GetTimeLastStep(){return fTimeLastStep;}

  UInt_t GetNbOfPrimaries(){return nbOfPrimaries;}
  Double_t GetEnergyPrimary(){return fEnergyPrimary;}
  Double_t GetThetaPrimary(){return fThetaPrimary;}
  Double_t GetPhiPrimary(){return fPhiPrimary;}

  UInt_t GetEventID(){return eventID;}
  UInt_t GetRunID(){return runID;}

 protected:

  //Crystal identification
  UInt_t type;           //crystal type
  UInt_t copy;           //crystal copy

  //Basic Hit information
  Double32_t fEnergy;       //total energy deposited on the paddle
  UInt_t nbOfSteps;      //number of step depositing energy in the crystal

  Double32_t fTimeFirstStep;  //time of the first interaction
  Double32_t fTimeLastStep;   //time of the last interaction

  //Primary identification 
  UInt_t nbOfPrimaries;    //for a gamma source
  Double32_t fEnergyPrimary;
  Double32_t fThetaPrimary;
  Double32_t fPhiPrimary;
  
  //Event identification  
  UInt_t eventID;     // event ID
  UInt_t runID;       // run ID

  ClassDef(R3BSitrackerHit,1)

};
#endif
// -------------------------------------------------------------------------
// -----                  R3BTrackerHit header file                -----
// -----               Created 01/09/10  by N.Ashwood              -----
// -------------------------------------------------------------------------




#ifndef R3BTRACKERHIT_H
#define R3BTRACKERHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"


class R3BTrackerHit : public FairMultiLinkedData 
{
	
public:
	
	/** Default constructor **/
	R3BTrackerHit();

	
	R3BTrackerHit(Double_t ene, Int_t det, Double_t x, Double_t y, Double_t z, Double_t px, Double_t py, Double_t pz, Double_t th, Double_t phi);
	//R3BTrackerHit(Double_t ene, Int_t det);
	
	
	/** Copy constructor **/
	R3BTrackerHit(const R3BTrackerHit& hit) { *this = hit; };
	
	
	/** Destructor **/
	virtual ~R3BTrackerHit();
	
	/** Accessors **/
	//Int_t GetNbOfTrackerHits()   const { return fNbOfTrackerHits; }
	Double_t GetEnergy()   const { return fEnergy; }
	Int_t GetDetector()   const { return fDetector; }
	Double_t GetXHit()   const { return fXHit; } 
	Double_t GetYHit()   const { return fYHit; } 
	Double_t GetZHit()   const { return fZHit; } 
    Double_t GetPx()   const { return fPx; } 
    Double_t GetPy()   const { return fPy; } 
    Double_t GetPz()   const { return fPz; } 
	Double_t GetThetaZero()   const { return fThetaZero; } 
	Double_t GetPhiZero()   const { return fPhiZero; }
	/** Modifiers **/
	//void SetNbOfTrackerHits(Int_t number){fNbOfTrackerHits = number;}
	void SetEnergy(Double_t ene){fEnergy = ene;}
	void SetDetector(Int_t det){fDetector = det;}
	void SetXHit(Double_t x){fXHit = x;}
	void SetYHit(Double_t y){fYHit = y;}
	void SetZHit(Double_t z){fZHit = z;}
    void SetPx(Double_t px){fPx = px;}
    void SetPy(Double_t py){fPy = py;}
    void SetPz(Double_t pz){fPz = pz;}
	void SetThetaZero(Double_t th){fThetaZero = th;}
	void GetPhiZero(Double_t phi){fPhiZero = phi;}


	/** Output to screen **/
	//virtual void Print(const Option_t* opt) const;
	
	
protected:
	
	//Basic Hit information
	//Int_t fNbOfTrackerHits; //number of Si hits contributing to the R3BTrackerHit
	Double_t fEnergy;        //total energy deposited 
	Int_t fDetector; //Detector hit by event
	Double_t fXHit; // Position in x of hit in detector fdetector	
	Double_t fYHit; // Position in y of hit in detector fdetector	
	Double_t fZHit; // Position in z of hit in detector fdetector
	Double_t fPx; // Momentum in the x direction of particle
	Double_t fPy; // Momentum in the y direction of particle
	Double_t fPz; // Momentum in the z direction of particle
	Double_t fThetaZero; // Theta from (0,0,0) in detector fdetector	
	Double_t fPhiZero; // Phi from (0,0,0) in detector fdetector	

	ClassDef(R3BTrackerHit,1)
	
};

#endif
// -------------------------------------------------------------------------
// -----                      R3BSTaRTraPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BSTaRTraPoint.h
 **/


#ifndef R3BSTARTRAPOINT_H
#define R3BSTARTRAPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BSTaRTraPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BSTaRTraPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param detVolID Detector Copy ID  // added by Marc
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BSTaRTraPoint(Int_t trackID, Int_t detID, Int_t detCopyID, // detCopyID added by Marc
	      TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BSTaRTraPoint(const R3BSTaRTraPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BSTaRTraPoint();


  /** Accessors **/
  Int_t GetDetCopyID()   const { return fDetCopyID; } // added by Marc
  Double_t GetTOF()   const { return fTime; }         // added by Marc
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }


  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);
  void SetDetCopyID(Int_t id)       { fDetCopyID = id; }; // added by Marc


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fDetCopyID; // added by Marc



  ClassDef(R3BSTaRTraPoint,1)

};



inline void R3BSTaRTraPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BSTaRTraPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BSTaRTraHit header file                  -----
// -----                  Created 07/07/09  by M. Labiche               -----
// -------------------------------------------------------------------------



#ifndef R3BSTARTRAHIT_H
#define R3BSTARTRAHIT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"


class R3BSTaRTraHit : public FairHit
{

 public:

  /** Default constructor **/
  R3BSTaRTraHit();

  /** Copy constructor **/
  R3BSTaRTraHit(const R3BSTaRTraHit& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BSTaRTraHit();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void SetEnergy(Double_t en){fEnergy = en;}
  Double_t GetEnergy(){return fEnergy;}

  void SetToF(Double_t time){fTof = time;}
  Double_t GetToF(){return fTof;}

  void SetDetID(Int_t id){ fDetectorID = id; }
  Int_t GetDetID(){ return fDetectorID; }



 protected:

  Double32_t fEnergy;
  Double32_t fTof;
  
  ClassDef(R3BSTaRTraHit,1)

};

#endif
// -------------------------------------------------------------------------
// -----                  R3BSTaRTrackerHit header file                -----
// -----               Created 01/09/10  by N.Ashwood              -----
// -------------------------------------------------------------------------




#ifndef R3BSTARTRACKERHIT_H
#define R3BSTARTRACKERHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"


class R3BSTaRTrackerHit : public FairMultiLinkedData 
{
	
public:
	
	/** Default constructor **/
	R3BSTaRTrackerHit();

	
	R3BSTaRTrackerHit(Double_t ene, Int_t det, Double_t x, Double_t y, Double_t z, Double_t px, Double_t py, Double_t pz, Double_t th, Double_t phi);
	//R3BSTaRTrackerHit(Double_t ene, Int_t det);
	
	
	/** Copy constructor **/
	R3BSTaRTrackerHit(const R3BSTaRTrackerHit& hit) { *this = hit; };
	
	
	/** Destructor **/
	virtual ~R3BSTaRTrackerHit();
	
	/** Accessors **/
	//Int_t GetNbOfTrackerHits()   const { return fNbOfTrackerHits; }
	Double_t GetEnergy()   const { return fEnergy; }
	Int_t GetDetector()   const { return fDetector; }
	Double_t GetXHit()   const { return fXHit; } 
	Double_t GetYHit()   const { return fYHit; } 
	Double_t GetZHit()   const { return fZHit; } 
    Double_t GetPx()   const { return fPx; } 
    Double_t GetPy()   const { return fPy; } 
    Double_t GetPz()   const { return fPz; } 
	Double_t GetThetaZero()   const { return fThetaZero; } 
	Double_t GetPhiZero()   const { return fPhiZero; }
	/** Modifiers **/
	//void SetNbOfTrackerHits(Int_t number){fNbOfTrackerHits = number;}
	void SetEnergy(Double_t ene){fEnergy = ene;}
	void SetDetector(Int_t det){fDetector = det;}
	void SetXHit(Double_t x){fXHit = x;}
	void SetYHit(Double_t y){fYHit = y;}
	void SetZHit(Double_t z){fZHit = z;}
    void SetPx(Double_t px){fPx = px;}
    void SetPy(Double_t py){fPy = py;}
    void SetPz(Double_t pz){fPz = pz;}
	void SetThetaZero(Double_t th){fThetaZero = th;}
	void GetPhiZero(Double_t phi){fPhiZero = phi;}


	/** Output to screen **/
	//virtual void Print(const Option_t* opt) const;
	
	
protected:
	
	//Basic Hit information
	//Int_t fNbOfTrackerHits; //number of Si hits contributing to the R3BSTaRTrackerHit
	Double_t fEnergy;        //total energy deposited 
	Int_t fDetector; //Detector hit by event
	Double_t fXHit; // Position in x of hit in detector fdetector	
	Double_t fYHit; // Position in y of hit in detector fdetector	
	Double_t fZHit; // Position in z of hit in detector fdetector
	Double_t fPx; // Momentum in the x direction of particle
	Double_t fPy; // Momentum in the y direction of particle
	Double_t fPz; // Momentum in the z direction of particle
	Double_t fThetaZero; // Theta from (0,0,0) in detector fdetector	
	Double_t fPhiZero; // Phi from (0,0,0) in detector fdetector	

	ClassDef(R3BSTaRTrackerHit,1)
	
};

#endif
// -------------------------------------------------------------------------
// -----                  R3BSTaRTrackerDigitHit header file           -----
// -----               Created 28/04/14  by M.Labiche                  -----
// -------------------------------------------------------------------------




#ifndef R3BSTARTRACKERDIGITHIT_H
#define R3BSTARTRACKERDIGITHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"


class R3BSTaRTrackerDigitHit : public FairMultiLinkedData 
{
	
public:
	
	/** Default constructor **/
	R3BSTaRTrackerDigitHit();

	
	//R3BSTaRTrackerDigitHit(Double_t ene, Int_t det, Int_t Stripfrt, Int_t Stripbck, Double_t time);
	R3BSTaRTrackerDigitHit(Int_t det, Int_t chip, Int_t side, Int_t strip, Double_t ene, Double_t time);
	
	
	/** Copy constructor **/
	R3BSTaRTrackerDigitHit(const R3BSTaRTrackerDigitHit& hit) { *this = hit; };
	
	
	/** Destructor **/
	virtual ~R3BSTaRTrackerDigitHit();
	
	/** Accessors **/
	//Int_t GetNbOfTrackerHits()   const { return fNbOfTrackerHits; }
	Double_t GetEnergy()   const { return fEnergy; }
	Double_t GetTime()   const { return fTime; }
	Int_t GetDetector()   const { return fDetector; }
	Int_t GetChip()   const { return fChip; }
	Int_t GetSide()   const { return fSide; }
	Int_t GetStrip()   const { return fStrip; }
	/*
	Double_t GetStripfrt()   const { return fStripfrt; } 
	Double_t GetStripbck()   const { return fStripbck; } 
	*/	 
	/** Modifiers **/
	//void SetNbOfTrackerHits(Int_t number){fNbOfTrackerHits = number;}
	void SetEnergy(Double_t ene){fEnergy = ene;}
	void SetDetector(Int_t det){fDetector = det;}
	void SetChip(Int_t chip){fChip = chip;}
	void SetSide(Int_t side){fSide = side;}
	void SetStrip(Int_t strip){fStrip = strip;}
	/*
	void SetStripfrt(Int_t Stripfrt){fStripfrt = Stripfrt;}
	void SetStripbck(Int_t Stripbck){fStripbck = Stripbck;}
	*/


	/** Output to screen **/
	//virtual void Print(const Option_t* opt) const;
	
	
protected:
	
	//Basic Hit information
	//Int_t fNbOfTrackerHits; //number of Si hits contributing to the R3BSTaRTrackerHit
	Double_t fEnergy;        //total energy deposited 
	Double_t fTime;        // global time when hit occur 
	Int_t fDetector; //Detector hit by event
	Int_t fChip;  //ASIC chip hit by event
	Int_t fSide;  //Front or back of Det hit by event
	Int_t fStrip; //Front or back of Det hit by event
	/*
	Double_t fStripfrt; // front strip hit in detector fdetector	
	Double_t fStripbck; // back strip hit in detector fdetector	
	*/
	ClassDef(R3BSTaRTrackerDigitHit,1)
	
};

#endif
// -------------------------------------------------------------------------
// -----                      R3BLandPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BLandPoint.h
 **/


#ifndef R3BLANDPOINT_H
#define R3BLANDPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BLandPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BLandPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BLandPoint(Int_t trackID, Int_t box, Int_t detID, Int_t sector,
	       Int_t paddle, TVector3 posIn,
	       TVector3 posOut, TVector3 momIn, TVector3 momOut,
	       Double_t tof, Double_t length, Double_t eLoss, Double_t ligthYield);


  /** Copy constructor **/
  R3BLandPoint(const R3BLandPoint&);


  /** Destructor **/
  virtual ~R3BLandPoint();


  R3BLandPoint& operator=(const R3BLandPoint&) { return *this; }


  /** Accessors **/
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  Int_t    GetSector() const { return fSector;}
  Int_t    GetPaddleType() const { return fPaddleTyp;}
  Int_t    GetPaddleNb() const { return fPaddleNb;}
  Double_t GetLightYield() const {return fLightYield;}

  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fSector;
  Int_t fPaddleNb;
  Int_t fPaddleTyp;
  Double_t fLightYield;

  ClassDef(R3BLandPoint,1)

};



inline void R3BLandPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BLandPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BLandDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BLandDigi.h
 **/


#ifndef R3BLANDDIGI_H
#define R3BLANDDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BLandDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BLandDigi();
  R3BLandDigi(Int_t paddle, Double_t tdcL, Double_t tdcR,
   Double_t tdc, Double_t qdcL, Double_t qdcR, Double_t qdc,
   Double_t xx, Double_t yy, Double_t zz);

  R3BLandDigi(Int_t paddle, Double_t tdcR, Double_t tdcL,
	               Double_t qdcR, Double_t qdcL);
   
  /** Copy constructor **/
  R3BLandDigi(const R3BLandDigi&);

  /** Destructor **/
  virtual ~R3BLandDigi();

  R3BLandDigi& operator=(const R3BLandDigi&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



  void SetTdcR(Double_t time){fTdcR = time;}
  Double_t GetTdcR(){return fTdcR;}

  void SetTdcL(Double_t time){fTdcL = time;}
  Double_t GetTdcL(){return fTdcL;}
  
  void SetTdc(Double_t time){fTdc = time;}
  Double_t GetTdc() const {return fTdc;}

  void SetQdcR(Double_t charge){fQdcR = charge;}
  Double_t GetQdcR(){return fQdcR;}

  void SetQdcL(Double_t charge){fQdcL = charge;}
  Double_t GetQdcL(){return fQdcL;}

  void SetQdc(Double_t charge){fQdc = charge;}
  Double_t GetQdc(){return fQdc;}

  void SetXX(Double_t pos){fxx = pos;}
  Double_t GetXX(){return fxx;}

  void SetYY(Double_t pos){fyy = pos;}
  Double_t GetYY(){return fyy;}

  void SetZZ(Double_t pos){fzz = pos;}
  Double_t GetZZ(){return fzz;}

  void SetPaddleNr(Int_t paddleNb){fPaddleNb = paddleNb;}
  Int_t GetPaddleNr(){return fPaddleNb;}



 protected:

  Int_t fPaddleNb;
  Double32_t fTdcL;
  Double32_t fTdcR;
  Double32_t fTdc;
  Double32_t fQdcL;
  Double32_t fQdcR;
  Double32_t fQdc;
  Double32_t fxx;
  Double32_t fyy;
  Double32_t fzz;

  ClassDef(R3BLandDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                  R3BLandFirstHits header file                 -----
// -----                    Created 20/02/1  by M.Heil                 -----
// -------------------------------------------------------------------------


/**  R3BLandFirstHits.h
 **/


#ifndef R3BLANDFIRSTHITS_H
#define R3BLANDFIRSTHITS_H


#include "TObject.h"
#include "TVector3.h"



class R3BLandFirstHits : public TObject
{

 public:

  /** Default constructor **/
  R3BLandFirstHits();
  R3BLandFirstHits(Double_t x0, Double_t y0, Double_t z0, Double_t t0,
                   Double_t x1, Double_t y1, Double_t z1, Double_t t1,
                   Double_t x2, Double_t y2, Double_t z2, Double_t t2,
                   Double_t x3, Double_t y3, Double_t z3, Double_t t3,
                   Double_t x4, Double_t y4, Double_t z4, Double_t t4,
                   Double_t x5, Double_t y5, Double_t z5, Double_t t5);
   
  /** Copy constructor **/
  R3BLandFirstHits(const R3BLandFirstHits&);

  /** Destructor **/
  virtual ~R3BLandFirstHits();

  R3BLandFirstHits& operator=(const R3BLandFirstHits&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  void SetX0(Double_t pos){fx0 = pos;}
  Double_t GetX0(){return fx0;}

  void SetY0(Double_t pos){fy0 = pos;}
  Double_t GetY0(){return fy0;}

  void SetZ0(Double_t pos){fz0 = pos;}
  Double_t GetZ0(){return fz0;}

  void SetT0(Double_t time){fT0 = time;}
  Double_t GetT0(){return fT0;}


  void SetX1(Double_t pos){fx1 = pos;}
  Double_t GetX1(){return fx1;}

  void SetY1(Double_t pos){fy1 = pos;}
  Double_t GetY1(){return fy1;}

  void SetZ1(Double_t pos){fz1 = pos;}
  Double_t GetZ1(){return fz1;}

  void SetT1(Double_t time){fT1 = time;}
  Double_t GetT1(){return fT1;}


  void SetX2(Double_t pos){fx2 = pos;}
  Double_t GetX2(){return fx2;}

  void SetY2(Double_t pos){fy2 = pos;}
  Double_t GetY2(){return fy2;}

  void SetZ2(Double_t pos){fz2 = pos;}
  Double_t GetZ2(){return fz2;}

  void SetT2(Double_t time){fT2 = time;}
  Double_t GetT2(){return fT2;}


  void SetX3(Double_t pos){fx3 = pos;}
  Double_t GetX3(){return fx3;}

  void SetY3(Double_t pos){fy3 = pos;}
  Double_t GetY3(){return fy3;}

  void SetZ3(Double_t pos){fz3 = pos;}
  Double_t GetZ3(){return fz3;}

  void SetT3(Double_t time){fT3 = time;}
  Double_t GetT3(){return fT3;}


  void SetX4(Double_t pos){fx4 = pos;}
  Double_t GetX4(){return fx4;}

  void SetY4(Double_t pos){fy4 = pos;}
  Double_t GetY4(){return fy4;}

  void SetZ4(Double_t pos){fz4 = pos;}
  Double_t GetZ4(){return fz4;}

  void SetT4(Double_t time){fT4 = time;}
  Double_t GetT4(){return fT4;}


  void SetX5(Double_t pos){fx5 = pos;}
  Double_t GetX5(){return fx5;}

  void SetY5(Double_t pos){fy5 = pos;}
  Double_t GetY5(){return fy5;}

  void SetZ5(Double_t pos){fz5 = pos;}
  Double_t GetZ5(){return fz5;}

  void SetT5(Double_t time){fT5 = time;}
  Double_t GetT5(){return fT5;}

 protected:

  Double32_t fx0;
  Double32_t fy0;
  Double32_t fz0;
  Double32_t fT0;
  Double32_t fx1;
  Double32_t fy1;
  Double32_t fz1;
  Double32_t fT1;
  Double32_t fx2;
  Double32_t fy2;
  Double32_t fz2;
  Double32_t fT2;
  Double32_t fx3;
  Double32_t fy3;
  Double32_t fz3;
  Double32_t fT3;
  Double32_t fx4;
  Double32_t fy4;
  Double32_t fz4;
  Double32_t fT4;
  Double32_t fx5;
  Double32_t fy5;
  Double32_t fz5;
  Double32_t fT5;

  ClassDef(R3BLandFirstHits,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BLandHit header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BLandHit.h
 **/


#ifndef R3BLANDHIT_H
#define R3BLANDHIT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"


class R3BLandHit : public FairHit
{

 public:

  /** Default constructor **/
  R3BLandHit();

  /** Copy constructor **/
  R3BLandHit(const R3BLandHit&);

  /** Destructor **/
  virtual ~R3BLandHit();

  R3BLandHit& operator=(const R3BLandHit&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void SetEnergy(Double_t en){fEnergy = en;}
  Double_t GetEnergy(){return fEnergy;}

  void SetToF(Double_t time){fTof = time;}
  Double_t GetToF(){return fTof;}

  void SetDetID(Int_t id){ fDetectorID = id; }
  Int_t GetDetID(){ return fDetectorID; }

  void SetSaturnPaddle(Int_t paddleNb){fSaturnPaddleNb = paddleNb;}
  Int_t GetSaturnPaddle(){return fSaturnPaddleNb;}



 protected:

  Double32_t fEnergy;
  Double32_t fTof;
  Int_t fSaturnPaddleNb;

  ClassDef(R3BLandHit,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BLandPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------
/**  R3BPaddleCrystalHit.h
 **/

#ifndef R3BPADDLECRYSTALHIT_H
#define R3BPADDLECRYSTALHIT_H

#include "TObject.h"
#include "TVector3.h"
#include "FairHit.h"

class R3BPaddleCrystalHit : public FairHit
{

 public:

  /** Default constructor **/
  R3BPaddleCrystalHit();
  /** Copy constructor **/
  R3BPaddleCrystalHit(const R3BPaddleCrystalHit&);
  /** Destructor **/
  virtual ~R3BPaddleCrystalHit();

  R3BPaddleCrystalHit& operator=(const R3BPaddleCrystalHit&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

   
  void SetType(UInt_t ty){type = ty;}
  void SetCopy(UInt_t co){copy = co;}
  void SetEnergy(Double_t en){fEnergy = en;}
  void SetNbOfSteps(UInt_t nb){nbOfSteps = nb;}

  void SetTimeFirstStep(Double_t ti){fTimeFirstStep = ti;}
  void SetTimeLastStep(Double_t ti){fTimeLastStep = ti;}
  void SetPositionX(Double_t posX){fX = posX;}
  void SetPositionY(Double_t posY){fY = posY;}
  void SetPositionZ(Double_t posZ){fZ = posZ;}

  void SetNbOfPrimaries(UInt_t nb){nbOfPrimaries = nb;}
  void SetEnergyPrimary(Double_t ene){fEnergyPrimary = ene;}
  void SetThetaPrimary(Double_t the){fThetaPrimary = the;}
  void SetPhiPrimary(Double_t phi){fPhiPrimary = phi;}

  void SetEventID(UInt_t ev){eventID = ev;}
  void SetRunID(UInt_t run){runID = run;}

  Int_t GetType(){return type;}
  Int_t GetCopy(){return copy;}
  Double_t GetEnergy(){return fEnergy;}
  UInt_t GetNbOfSteps(){return nbOfSteps;}

  Double_t GetTimeFirstStep(){return fTimeFirstStep;}
  Double_t GetTimeLastStep(){return fTimeLastStep;}

  UInt_t GetNbOfPrimaries(){return nbOfPrimaries;}
  Double_t GetEnergyPrimary(){return fEnergyPrimary;}
  Double_t GetThetaPrimary(){return fThetaPrimary;}
  Double_t GetPhiPrimary(){return fPhiPrimary;}

  UInt_t GetEventID(){return eventID;}
  UInt_t GetRunID(){return runID;}

 protected:

  //Crystal identification
  UInt_t type;           //crystal type
  UInt_t copy;           //crystal copy

  //Basic Hit information
  Double32_t fEnergy;       //total energy deposited on the paddle
  UInt_t nbOfSteps;      //number of step depositing energy in the crystal

  Double32_t fTimeFirstStep;  //time of the first interaction
  Double32_t fTimeLastStep;   //time of the last interaction

  //Primary identification 
  UInt_t nbOfPrimaries;    //for a gamma source
  Double32_t fEnergyPrimary;
  Double32_t fThetaPrimary;
  Double32_t fPhiPrimary;
  
  //Event identification  
  UInt_t eventID;     // event ID
  UInt_t runID;       // run ID

  ClassDef(R3BPaddleCrystalHit,1)

};
#endif


#ifndef R3BNEUTRONTRACK_H
#define R3BNEUTRONTRACK_H


#include "TObject.h"
#include "TVector3.h"



class R3BNeutronTrack :  public TObject
{

 public:

  /** Default constructor **/
  R3BNeutronTrack();
  
  R3BNeutronTrack(TVector3 posIn, TVector3 posOut, TVector3 momOut, Double_t tof);

  /** Copy constructor **/
  R3BNeutronTrack(const R3BNeutronTrack&);

  /** Destructor **/
  virtual ~R3BNeutronTrack();

  R3BNeutronTrack& operator=(const R3BNeutronTrack&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }

  void PositionIn(TVector3& pos) { pos.SetXYZ(fX,fY,fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }

  /** Modifiers **/
  void SetPositionIn(TVector3 pos);
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


 protected:
  Double32_t fX,  fY,  fZ;
  Double32_t fX_in,  fY_in,  fZ_in;
  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fPaddleNb;

  ClassDef(R3BNeutronTrack,1)

};

inline void R3BNeutronTrack::SetPositionIn(TVector3 pos) {
  fX = pos.X();
  fY = pos.Y();
  fZ = pos.Z();
}

inline void R3BNeutronTrack::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}

inline void R3BNeutronTrack::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}

#endif
// -------------------------------------------------------------------------
// -----                      R3BDchDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BDchDigi.h
 **/


#ifndef R3BDCHDIGI_H
#define R3BDCHDIGI_H



#include "TObject.h"
#include "TVector3.h"



class R3BDchDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BDchDigi();
  R3BDchDigi(Int_t pd1mul,Double_t Pdx1_p1,Double_t Pdy1_p1,Int_t pd2mul,Double_t Pdx2_p1,Double_t Pdy2_p1);
  
  /** Copy constructor **/
  R3BDchDigi(const R3BDchDigi& point);

  /** Destructor **/
  virtual ~R3BDchDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void Setpd1mul(Int_t mul){Pd1mul = mul;}
  Double_t Getpd1mul(){return Pd1mul;}

  void SetPdx1_p1(Double_t pos){Pd1x_p1 = pos;}
  Double_t GetPdx1_p1(){return Pd1x_p1;}
  
  void SetPdy1_p1(Double_t pos){Pd1y_p1 = pos;}
  Double_t GetPdy1_p1(){return Pd1y_p1;}
  
  void Setpd2mul(Int_t mul){Pd2mul = mul;}
  Double_t Getpd2mul(){return Pd2mul;}
  
  void SetPdx2_p1(Double_t pos){Pd2x_p1 = pos;}
  Double_t GetPdx2_p1(){return Pd2x_p1;}
  
  void SetPdy2_p1(Double_t pos){Pd2y_p1 = pos;}
  Double_t GetPdy2_p1(){return Pd2y_p1;}

  R3BDchDigi& operator=(const R3BDchDigi&) { return *this; }

 protected:
 
   Int_t Pd1mul;
   Double32_t Pd1x_p1;
   Double32_t Pd1y_p1;
   
   Int_t Pd2mul;
   Double32_t Pd2x_p1;
   Double32_t Pd2y_p1;

  ClassDef(R3BDchDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BDch2pDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BDch2pDigi.h
 **/


#ifndef R3BDCH2PDIGI_H
#define R3BDCH2PDIGI_H



#include "TObject.h"
#include "TVector3.h"



class R3BDch2pDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BDch2pDigi();
  R3BDch2pDigi(Int_t pd1mul,
	       Double_t Pdx1_p1, Double_t Pdy1_p1,
	       Double_t Pdx1_p2, Double_t Pdy1_p2,
	       Int_t pd2mul,
	       Double_t Pdx2_p1, Double_t Pdy2_p1,
	       Double_t Pdx2_p2, Double_t Pdy2_p2);
  
  /** Copy constructor **/
  R3BDch2pDigi(const R3BDch2pDigi&);

  /** Destructor **/
  virtual ~R3BDch2pDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void Setpd1mul(Int_t mul){Pd1mul = mul;}
  Double_t Getpd1mul(){return Pd1mul;}

  void SetPdx1_p1(Double_t pos){Pd1x_p1 = pos;}
  Double_t GetPdx1_p1(){return Pd1x_p1;}
  
  void SetPdy1_p1(Double_t pos){Pd1y_p1 = pos;}
  Double_t GetPdy1_p1(){return Pd1y_p1;}
  
  void SetPdx1_p2(Double_t pos){Pd1x_p2 = pos;}
  Double_t GetPdx1_p2(){return Pd1x_p2;}
  
  void SetPdy1_p2(Double_t pos){Pd1y_p2 = pos;}
  Double_t GetPdy1_p2(){return Pd1y_p2;}
  
      
  
  void Setpd2mul(Int_t mul){Pd2mul = mul;}
  Double_t Getpd2mul(){return Pd2mul;}
  
  void SetPdx2_p1(Double_t pos){Pd2x_p1 = pos;}
  Double_t GetPdx2_p1(){return Pd2x_p1;}
  
  void SetPdy2_p1(Double_t pos){Pd2y_p1 = pos;}
  Double_t GetPdy2_p1(){return Pd2y_p1;}
  
  void SetPdx2_p2(Double_t pos){Pd2x_p2 = pos;}
  Double_t GetPdx2_p2(){return Pd2x_p2;}
  
  void SetPdy2_p2(Double_t pos){Pd2y_p2 = pos;}
  Double_t GetPdy2_p2(){return Pd2y_p2;}
  
  R3BDch2pDigi& operator=(const R3BDch2pDigi&) { return *this; }


 protected:
 
   Int_t Pd1mul;
   Double32_t Pd1x_p1;
   Double32_t Pd1y_p1;
   Double32_t Pd1x_p2;
   Double32_t Pd1y_p2;
   
   Int_t Pd2mul;
   Double32_t Pd2x_p1;
   Double32_t Pd2y_p1;
   Double32_t Pd2x_p2;
   Double32_t Pd2y_p2;

   ClassDef(R3BDch2pDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTofDigi header file                  -----
// -----                  Created 29/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTofDigi.h
 **/


#ifndef R3BTOFDIGI_H
#define R3BTOFDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTofDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTofDigi();
  R3BTofDigi(Int_t tfmul,Double_t tfwx_p1,Double_t tfwy_p1,Double_t tfwt_p1,Double_t tfwpath_p1,Double_t tfwpx_p1,
  //Double_t tfwpy_p1,Double_t tfwpz_p1);
  Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwe_p1);
  
  /** Copy constructor **/
  R3BTofDigi(const R3BTofDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTofDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  
  void Settfmul(Int_t mul){Tfmul = mul;}
  Double_t Gettfmul(){return Tfmul;}
  
  void Settfwx_p1(Double_t pos){Tfx_p1 = pos;}
  Double_t Gettfwx_p1(){return Tfx_p1;}
  
  void Settfwy_p1(Double_t pos){Tfy_p1 = pos;}
  Double_t Gettfwy_p1(){return Tfy_p1;}
  
  void Settfwt_p1(Double_t time){Tft_p1 = time;}
  Double_t Gettfwt_p1(){return Tft_p1;}
  
  void Settfwpath_p1(Double_t length){Tfpath_p1 = length;}
  Double_t Gettfwpath_p1(){return Tfpath_p1;}
  
  void Settfwpx_p1(Int_t mom){Tfwpx_p1 = mom;}
  Double_t Gettfwpx_p1(){return Tfwpx_p1;}
  
  void Settfwpy_p1(Int_t mom){Tfwpy_p1 = mom;}
  Double_t Gettfwpy_p1(){return Tfwpy_p1;}
  
  void Settfwpz_p1(Int_t mom){Tfwpz_p1 = mom;}
  Double_t Gettfwpz_p1(){return Tfwpz_p1;}  

  void Settfwe_p1(Double_t en){Tfe_p1 = en;}
  Double_t Gettfwe_p1(){return Tfe_p1;}
  

 protected:
 
   Int_t Tfmul;
   Double32_t Tfx_p1;
   Double32_t Tfy_p1;
   Double32_t Tft_p1;
   Double32_t Tfpath_p1;
   Double32_t Tfwpx_p1;
   Double32_t Tfwpy_p1;
   Double32_t Tfwpz_p1;
   Double32_t Tfe_p1;

  ClassDef(R3BTofDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTofDigi header file                  -----
// -----                  Created 29/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTofDigi.h
 **/


#ifndef R3BTOF2PDIGI_H
#define R3BTOF2PDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTof2pDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTof2pDigi();
  R3BTof2pDigi(Int_t tfmul,Double_t tfwx_p1,Double_t tfwy_p1,Double_t tfwt_p1,
  Double_t tfwx_p2,Double_t tfwy_p2,Double_t tfwt_p2,Double_t tfwpath_p1,Double_t tfwpath_p2,
  //Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwpx_p2,Double_t tfwpy_p2,Double_t tfwpz_p2);
  Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwpx_p2,Double_t tfwpy_p2,Double_t tfwpz_p2,
  Double_t tfwe_p1,Double_t tfwe_p2);
  
  /** Copy constructor **/
  R3BTof2pDigi(const R3BTof2pDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTof2pDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  
  void Settfmul(Int_t mul){Tfmul = mul;}
  Double_t Gettfmul(){return Tfmul;}
  
  void Settfwx_p1(Double_t pos){Tfx_p1 = pos;}
  Double_t Gettfwx_p1(){return Tfx_p1;}
  
  void Settfwy_p1(Double_t pos){Tfy_p1 = pos;}
  Double_t Gettfwy_p1(){return Tfy_p1;}
  
  void Settfwt_p1(Double_t time){Tft_p1 = time;}
  Double_t Gettfwt_p1(){return Tft_p1;}
  
  void Settfwpath_p1(Double_t length){Tfpath_p1 = length;}
  Double_t Gettfwpath_p1(){return Tfpath_p1;}
  
  void Settfwpx_p1(Int_t mom){Tfwpx_p1 = mom;}
  Double_t Gettfwpx_p1(){return Tfwpx_p1;}
  
  void Settfwpy_p1(Int_t mom){Tfwpy_p1 = mom;}
  Double_t Gettfwpy_p1(){return Tfwpy_p1;}
  
  void Settfwpz_p1(Int_t mom){Tfwpz_p1 = mom;}
  Double_t Gettfwpz_p1(){return Tfwpz_p1;}
  
  void Settfwe_p1(Double_t en){Tfe_p1 = en;}
  Double_t Gettfwe_p1(){return Tfe_p1;}
  
  
  void Settfwx_p2(Double_t pos){Tfx_p2 = pos;}
  Double_t Gettfwx_p2(){return Tfx_p2;}
  
  void Settfwy_p2(Double_t pos){Tfy_p2 = pos;}
  Double_t Gettfwy_p2(){return Tfy_p2;}
  
  void Settfwt_p2(Double_t time){Tft_p2 = time;}
  Double_t Gettfwt_p2(){return Tft_p2;} 
  
  void Settfwpath_p2(Double_t length){Tfpath_p2 = length;}
  Double_t Gettfwpath_p2(){return Tfpath_p2;}
  
  void Settfwpx_p2(Int_t mom){Tfwpx_p2 = mom;}
  Double_t Gettfwpx_p2(){return Tfwpx_p2;}
  
  void Settfwpy_p2(Int_t mom){Tfwpy_p2 = mom;}
  Double_t Gettfwpy_p2(){return Tfwpy_p2;}
  
  void Settfwpz_p2(Int_t mom){Tfwpz_p2 = mom;}
  Double_t Gettfwpz_p2(){return Tfwpz_p2;} 

  void Settfwe_p2(Double_t en){Tfe_p2 = en;}
  Double_t Gettfwe_p2(){return Tfe_p2;} 

 protected:
 
   Int_t Tfmul;
   Double32_t Tfx_p1;
   Double32_t Tfy_p1;
   Double32_t Tft_p1;
   Double32_t Tfpath_p1;
   Double32_t Tfwpx_p1;
   Double32_t Tfwpy_p1;
   Double32_t Tfwpz_p1;
   Double32_t Tfe_p1;
   
   Double32_t Tfx_p2;
   Double32_t Tfy_p2;
   Double32_t Tft_p2;
   Double32_t Tfpath_p2;
   Double32_t Tfwpx_p2;
   Double32_t Tfwpy_p2;
   Double32_t Tfwpz_p2;
   Double32_t Tfe_p2;

  ClassDef(R3BTof2pDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BmTofDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BmTofDigi.h
 **/


#ifndef R3BMTOFDIGI_H
#define R3BMTOFDIGI_H



#include "TObject.h"
#include "TVector3.h"



class R3BmTofDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BmTofDigi();
  R3BmTofDigi(Int_t ntmul,Double_t ntfx,Double_t ntfy,Double_t ntft,Double_t ntfpath,Double_t ntfpx,
//Double_t ntfpy,Double_t ntfpz);
Double_t ntfpy,Double_t ntfpz,Double_t ntfe);
  
  /** Copy constructor **/
  R3BmTofDigi(const R3BmTofDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BmTofDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void Setntmul(Int_t mul){Ntmul = mul;}
  Double_t Getntmul(){return Ntmul;}
  
  void Setntfx(Double_t pos){Ntx = pos;}
  Double_t Getntfx(){return Ntx;}
  
  void Setntfy(Double_t pos){Nty = pos;}
  Double_t Getntfy(){return Nty;}
  
  void Setntft(Double_t time){Ntt = time;}
  Double_t Getntft(){return Ntt;}
  
  void Setntfpath(Double_t length){Ntpath = length;}
  Double_t Getntfpath(){return Ntpath;}
  
  void Setntfpx(Int_t mom){Ntfpx = mom;}
  Double_t Getntfpx(){return Ntfpx;}
  
  void Setntfpy(Int_t mom){Ntfpy = mom;}
  Double_t Getntfpy(){return Ntfpy;}
  
  void Setntfpz(Int_t mom){Ntfpz = mom;}
  Double_t Getntfpz(){return Ntfpz;}
  
  void Setntfe(Double_t en){Nte = en;}
  Double_t Getntfe(){return Nte;}
  


 protected:

   Int_t Ntmul;
   Double32_t Ntx;
   Double32_t Nty;
   Double32_t Ntt;
   Double32_t Ntpath;
   Double32_t Ntfpx;
   Double32_t Ntfpy;
   Double32_t Ntfpz;
   Double32_t Nte;

  ClassDef(R3BmTofDigi,1)


};

#endif
// -------------------------------------------------------------------------
// -----                      R3BGfiDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BGfiDigi.h
 **/


#ifndef R3BGFIDIGI_H
#define R3BGFIDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BGfiDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BGfiDigi();
  R3BGfiDigi(Int_t gf1mul, Double_t gf1_01x,
	     Int_t gf2mul, Double_t gf2_01x);
  
  /** Copy constructor **/
  R3BGfiDigi(const R3BGfiDigi&);

  /** Destructor **/
  virtual ~R3BGfiDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void Setgf1mul(Int_t mul){Gf1mul = mul;}
  Double_t Getgf1mul(){return Gf1mul;}

  void Setgf1_01x(Double_t pos){Gf1_01x = pos;}
  Double_t Getgf1_01x(){return Gf1_01x;}
  
  void Setgf2mul(Int_t mul){Gf2mul = mul;}
  Double_t Getgf2mul(){return Gf2mul;}
  
  void Setgf2_01x(Double_t pos){Gf2_01x = pos;}
  Double_t Getgf2_01x(){return Gf2_01x;}


 protected:
  Int_t Gf1mul;
  Double32_t Gf1_01x;
  Int_t Gf2mul;
  Double32_t Gf2_01x;

  ClassDef(R3BGfiDigi,1)
};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTraDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTraDigi.h
 **/


#ifndef R3BTRADIGI_H
#define R3BTRADIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTraDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTraDigi();
  R3BTraDigi(Double_t ss03_se_f,
Double_t ss03_spos_f,Double_t ss03_sbw_f,Double_t ss03_sarea_f,Double_t ss03_seta_f,Double_t ss03_ke_f,
Double_t ss03_kpos_f,Double_t ss03_kbw_f,Double_t ss03_karea_f,Double_t ss03_keta_f,Double_t ss06_se_f,
Double_t ss06_spos_f,Double_t ss06_sbw_f,Double_t ss06_sarea_f,Double_t ss06_seta_f,Double_t ss06_ke_f,
Double_t ss06_kpos_f,Double_t ss06_kbw_f,Double_t ss06_karea_f,Double_t ss06_keta_f,Double_t ss03_se_p1,
Double_t ss03_spos_p1,Double_t ss03_sbw_p1,Double_t ss03_sarea_p1,Double_t ss03_seta_p1,Double_t ss03_ke_p1,
Double_t ss03_kpos_p1,Double_t ss03_kbw_p1,Double_t ss03_karea_p1,Double_t ss03_keta_p1,Double_t ss06_se_p1,
Double_t ss06_spos_p1,Double_t ss06_sbw_p1,Double_t ss06_sarea_p1,Double_t ss06_seta_p1,Double_t ss06_ke_p1,
Double_t ss06_kpos_p1,Double_t ss06_kbw_p1,Double_t ss06_karea_p1,Double_t ss06_keta_p1);
  
  /** Copy constructor **/
  R3BTraDigi(const R3BTraDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTraDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;
  
  
  void Setss03_se_f(Double_t en){Ss03_se_f = en;}
  Double_t Getss03_se_f(){return Ss03_se_f;}
     
  void Setss03_spos_f(Double_t pos){Ss03_spos_f = pos;}
  Double_t Getss03_spos_f(){return Ss03_spos_f;}
  
  void Setss03_sbw_f(Double_t bw){Ss03_sbw_f = bw;}
  Double_t Getss03_sbw_f(){return Ss03_sbw_f;}
  
  void Setss03_sarea_f(Double_t area){Ss03_sarea_f = area;}
  Double_t Getss03_sarea_f(){return Ss03_sarea_f;}
  
  void Setss03_seta_f(Double_t eta){Ss03_seta_f = eta;}
  Double_t Getss03_seta_f(){return Ss03_seta_f;}


  
  void Setss03_ke_f(Double_t en){Ss03_ke_f = en;}
  Double_t Getss03_ke_f(){return Ss03_ke_f;}
  
  void Setss03_kpos_f(Double_t pos){Ss03_kpos_f = pos;}
  Double_t Getss03_kpos_f(){return Ss03_kpos_f;}
  
  void Setss03_kbw_f(Double_t bw){Ss03_kbw_f = bw;}
  Double_t Getss03_kbw_f(){return Ss03_kbw_f;}
  
  void Setss03_karea_f(Double_t area){Ss03_karea_f = area;}
  Double_t Getss03_karea_f(){return Ss03_karea_f;}
  
  void Setss03_keta_f(Double_t eta){Ss03_keta_f = eta;}
  Double_t Getss03_keta_f(){return Ss03_keta_f;}
  
  
  
  void Setss06_se_f(Double_t en){Ss06_se_f = en;}
  Double_t Getss06_se_f(){return Ss06_se_f;}
  
  void Setss06_spos_f(Double_t pos){Ss06_spos_f = pos;}
  Double_t Getss06_spos_f(){return Ss06_spos_f;}
  
  void Setss06_sbw_f(Double_t bw){Ss06_sbw_f = bw;}
  Double_t Getss06_sbw_f(){return Ss06_sbw_f;}
  
  void Setss06_sarea_f(Double_t area){Ss06_sarea_f = area;}
  Double_t Getss06_sarea_f(){return Ss06_sarea_f;}
  
  void Setss06_seta_f(Double_t eta){Ss06_seta_f = eta;}
  Double_t Getss06_seta_f(){return Ss06_seta_f;}


  
  void Setss06_ke_f(Double_t en){Ss06_ke_f = en;}
  Double_t Getss06_ke_f(){return Ss06_ke_f;}
  
  void Setss06_kpos_f(Double_t pos){Ss06_kpos_f = pos;}
  Double_t Getss06_kpos_f(){return Ss06_kpos_f;}
  
  void Setss06_kbw_f(Double_t bw){Ss06_kbw_f = bw;}
  Double_t Getss06_kbw_f(){return Ss06_kbw_f;}
  
  void Setss06_karea_f(Double_t area){Ss06_karea_f = area;}
  Double_t Getss06_karea_f(){return Ss06_karea_f;}
  
  void Setss06_keta_f(Double_t eta){Ss06_keta_f = eta;}
  Double_t Getss06_keta_f(){return Ss06_keta_f;}
  
  
  
  
  
  
  void Setss03_se_p1(Double_t en){Ss03_se_p1 = en;}
  Double_t Getss03_se_p1(){return Ss03_se_p1;}
     
  void Setss03_spos_p1(Double_t pos){Ss03_spos_p1 = pos;}
  Double_t Getss03_spos_p1(){return Ss03_spos_p1;}
  
  void Setss03_sbw_p1(Double_t bw){Ss03_sbw_p1 = bw;}
  Double_t Getss03_sbw_p1(){return Ss03_sbw_p1;}
  
  void Setss03_sarea_p1(Double_t area){Ss03_sarea_p1 = area;}
  Double_t Getss03_sarea_p1(){return Ss03_sarea_p1;}
  
  void Setss03_seta_p1(Double_t eta){Ss03_seta_p1 = eta;}
  Double_t Getss03_seta_p1(){return Ss03_seta_p1;}


  
  void Setss03_ke_p1(Double_t en){Ss03_ke_p1 = en;}
  Double_t Getss03_ke_p1(){return Ss03_ke_p1;}
  
  void Setss03_kpos_p1(Double_t pos){Ss03_kpos_p1 = pos;}
  Double_t Getss03_kpos_p1(){return Ss03_kpos_p1;}
  
  void Setss03_kbw_p1(Double_t bw){Ss03_kbw_p1 = bw;}
  Double_t Getss03_kbw_p1(){return Ss03_kbw_p1;}
  
  void Setss03_karea_p1(Double_t area){Ss03_karea_p1 = area;}
  Double_t Getss03_karea_p1(){return Ss03_karea_p1;}
  
  void Setss03_keta_p1(Double_t eta){Ss03_keta_p1 = eta;}
  Double_t Getss03_keta_p1(){return Ss03_keta_p1;}
  
  
  
  void Setss06_se_p1(Double_t en){Ss06_se_p1 = en;}
  Double_t Getss06_se_p1(){return Ss06_se_p1;}
  
  void Setss06_spos_p1(Double_t pos){Ss06_spos_p1 = pos;}
  Double_t Getss06_spos_p1(){return Ss06_spos_p1;}
  
  void Setss06_sbw_p1(Double_t bw){Ss06_sbw_p1 = bw;}
  Double_t Getss06_sbw_p1(){return Ss06_sbw_p1;}
  
  void Setss06_sarea_p1(Double_t area){Ss06_sarea_p1 = area;}
  Double_t Getss06_sarea_p1(){return Ss06_sarea_p1;}
  
  void Setss06_seta_p1(Double_t eta){Ss06_seta_p1 = eta;}
  Double_t Getss06_seta_p1(){return Ss06_seta_p1;}


  
  void Setss06_ke_p1(Double_t en){Ss06_ke_p1 = en;}
  Double_t Getss06_ke_p1(){return Ss06_ke_p1;}
  
  void Setss06_kpos_p1(Double_t pos){Ss06_kpos_p1 = pos;}
  Double_t Getss06_kpos_p1(){return Ss06_kpos_p1;}
  
  void Setss06_kbw_p1(Double_t bw){Ss06_kbw_p1 = bw;}
  Double_t Getss06_kbw_p1(){return Ss06_kbw_p1;}
  
  void Setss06_karea_p1(Double_t area){Ss06_karea_p1 = area;}
  Double_t Getss06_karea_p1(){return Ss06_karea_p1;}
  
  void Setss06_keta_p1(Double_t eta){Ss06_keta_p1 = eta;}
  Double_t Getss06_keta_p1(){return Ss06_keta_p1;}
    

 protected:

     Double32_t Ss03_se_f;
     Double32_t Ss03_spos_f;
     Double32_t Ss03_sbw_f;
     Double32_t Ss03_sarea_f;
     Double32_t Ss03_seta_f;

     Double32_t Ss03_ke_f;
     Double32_t Ss03_kpos_f;
     Double32_t Ss03_kbw_f;
     Double32_t Ss03_karea_f;
     Double32_t Ss03_keta_f;

     Double32_t Ss06_se_f;
     Double32_t Ss06_spos_f;
     Double32_t Ss06_sbw_f;
     Double32_t Ss06_sarea_f;
     Double32_t Ss06_seta_f;

     Double32_t Ss06_ke_f;
     Double32_t Ss06_kpos_f;
     Double32_t Ss06_kbw_f;
     Double32_t Ss06_karea_f;
     Double32_t Ss06_keta_f;


     Double32_t Ss03_se_p1;
     Double32_t Ss03_spos_p1;
     Double32_t Ss03_sbw_p1;
     Double32_t Ss03_sarea_p1;
     Double32_t Ss03_seta_p1;

     Double32_t Ss03_ke_p1;
     Double32_t Ss03_kpos_p1;
     Double32_t Ss03_kbw_p1;
     Double32_t Ss03_karea_p1;
     Double32_t Ss03_keta_p1;

     Double32_t Ss06_se_p1;
     Double32_t Ss06_spos_p1;
     Double32_t Ss06_sbw_p1;
     Double32_t Ss06_sarea_p1;
     Double32_t Ss06_seta_p1;

     Double32_t Ss06_ke_p1;
     Double32_t Ss06_kpos_p1;
     Double32_t Ss06_kbw_p1;
     Double32_t Ss06_karea_p1;
     Double32_t Ss06_keta_p1;   

  ClassDef(R3BTraDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTra2pDigi header file                  -----
// -----                  Created 13/07/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTra2pDigi.h
 **/


#ifndef R3BTRA2PDIGI_H
#define R3BTRA2PDIGI_H

#include "TObject.h"
#include "TVector3.h"



class R3BTra2pDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTra2pDigi();
  R3BTra2pDigi(Double_t ss03_se_p1,
Double_t ss03_spos_p1,Double_t ss03_sbw_p1,Double_t ss03_sarea_p1,Double_t ss03_seta_p1,Double_t ss03_ke_p1,
Double_t ss03_kpos_p1,Double_t ss03_kbw_p1,Double_t ss03_karea_p1,Double_t ss03_keta_p1,Double_t ss06_se_p1,
Double_t ss06_spos_p1,Double_t ss06_sbw_p1,Double_t ss06_sarea_p1,Double_t ss06_seta_p1,Double_t ss06_ke_p1,
Double_t ss06_kpos_p1,Double_t ss06_kbw_p1,Double_t ss06_karea_p1,Double_t ss06_keta_p1,Double_t ss03_se_p2,
Double_t ss03_spos_p2,Double_t ss03_sbw_p2,Double_t ss03_sarea_p2,Double_t ss03_seta_p2,Double_t ss03_ke_p2,
Double_t ss03_kpos_p2,Double_t ss03_kbw_p2,Double_t ss03_karea_p2,Double_t ss03_keta_p2,Double_t ss06_se_p2,
Double_t ss06_spos_p2,Double_t ss06_sbw_p2,Double_t ss06_sarea_p2,Double_t ss06_seta_p2,Double_t ss06_ke_p2,
Double_t ss06_kpos_p2,Double_t ss06_kbw_p2,Double_t ss06_karea_p2,Double_t ss06_keta_p2);
  
  /** Copy constructor **/
  R3BTra2pDigi(const R3BTra2pDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTra2pDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  
  void Setss03_se_p1(Double_t en){Ss03_se_p1 = en;}
  Double_t Getss03_se_p1(){return Ss03_se_p1;}
     
  void Setss03_spos_p1(Double_t pos){Ss03_spos_p1 = pos;}
  Double_t Getss03_spos_p1(){return Ss03_spos_p1;}
  
  void Setss03_sbw_p1(Double_t bw){Ss03_sbw_p1 = bw;}
  Double_t Getss03_sbw_p1(){return Ss03_sbw_p1;}
  
  void Setss03_sarea_p1(Double_t area){Ss03_sarea_p1 = area;}
  Double_t Getss03_sarea_p1(){return Ss03_sarea_p1;}
  
  void Setss03_seta_p1(Double_t eta){Ss03_seta_p1 = eta;}
  Double_t Getss03_seta_p1(){return Ss03_seta_p1;}


  
  void Setss03_ke_p1(Double_t en){Ss03_ke_p1 = en;}
  Double_t Getss03_ke_p1(){return Ss03_ke_p1;}
  
  void Setss03_kpos_p1(Double_t pos){Ss03_kpos_p1 = pos;}
  Double_t Getss03_kpos_p1(){return Ss03_kpos_p1;}
  
  void Setss03_kbw_p1(Double_t bw){Ss03_kbw_p1 = bw;}
  Double_t Getss03_kbw_p1(){return Ss03_kbw_p1;}
  
  void Setss03_karea_p1(Double_t area){Ss03_karea_p1 = area;}
  Double_t Getss03_karea_p1(){return Ss03_karea_p1;}
  
  void Setss03_keta_p1(Double_t eta){Ss03_keta_p1 = eta;}
  Double_t Getss03_keta_p1(){return Ss03_keta_p1;}
  
  
  
  void Setss06_se_p1(Double_t en){Ss06_se_p1 = en;}
  Double_t Getss06_se_p1(){return Ss06_se_p1;}
  
  void Setss06_spos_p1(Double_t pos){Ss06_spos_p1 = pos;}
  Double_t Getss06_spos_p1(){return Ss06_spos_p1;}
  
  void Setss06_sbw_p1(Double_t bw){Ss06_sbw_p1 = bw;}
  Double_t Getss06_sbw_p1(){return Ss06_sbw_p1;}
  
  void Setss06_sarea_p1(Double_t area){Ss06_sarea_p1 = area;}
  Double_t Getss06_sarea_p1(){return Ss06_sarea_p1;}
  
  void Setss06_seta_p1(Double_t eta){Ss06_seta_p1 = eta;}
  Double_t Getss06_seta_p1(){return Ss06_seta_p1;}


  
  void Setss06_ke_p1(Double_t en){Ss06_ke_p1 = en;}
  Double_t Getss06_ke_p1(){return Ss06_ke_p1;}
  
  void Setss06_kpos_p1(Double_t pos){Ss06_kpos_p1 = pos;}
  Double_t Getss06_kpos_p1(){return Ss06_kpos_p1;}
  
  void Setss06_kbw_p1(Double_t bw){Ss06_kbw_p1 = bw;}
  Double_t Getss06_kbw_p1(){return Ss06_kbw_p1;}
  
  void Setss06_karea_p1(Double_t area){Ss06_karea_p1 = area;}
  Double_t Getss06_karea_p1(){return Ss06_karea_p1;}
  
  void Setss06_keta_p1(Double_t eta){Ss06_keta_p1 = eta;}
  Double_t Getss06_keta_p1(){return Ss06_keta_p1;}
  
  
  
  
    void Setss03_se_p2(Double_t en){Ss03_se_p2 = en;}
  Double_t Getss03_se_p2(){return Ss03_se_p2;}
     
  void Setss03_spos_p2(Double_t pos){Ss03_spos_p2 = pos;}
  Double_t Getss03_spos_p2(){return Ss03_spos_p2;}
  
  void Setss03_sbw_p2(Double_t bw){Ss03_sbw_p2 = bw;}
  Double_t Getss03_sbw_p2(){return Ss03_sbw_p2;}
  
  void Setss03_sarea_p2(Double_t area){Ss03_sarea_p2 = area;}
  Double_t Getss03_sarea_p2(){return Ss03_sarea_p2;}
  
  void Setss03_seta_p2(Double_t eta){Ss03_seta_p2 = eta;}
  Double_t Getss03_seta_p2(){return Ss03_seta_p2;}


  
  void Setss03_ke_p2(Double_t en){Ss03_ke_p2 = en;}
  Double_t Getss03_ke_p2(){return Ss03_ke_p2;}
  
  void Setss03_kpos_p2(Double_t pos){Ss03_kpos_p2 = pos;}
  Double_t Getss03_kpos_p2(){return Ss03_kpos_p2;}
  
  void Setss03_kbw_p2(Double_t bw){Ss03_kbw_p2 = bw;}
  Double_t Getss03_kbw_p2(){return Ss03_kbw_p2;}
  
  void Setss03_karea_p2(Double_t area){Ss03_karea_p2 = area;}
  Double_t Getss03_karea_p2(){return Ss03_karea_p2;}
  
  void Setss03_keta_p2(Double_t eta){Ss03_keta_p2 = eta;}
  Double_t Getss03_keta_p2(){return Ss03_keta_p2;}
  
  
  
  void Setss06_se_p2(Double_t en){Ss06_se_p2 = en;}
  Double_t Getss06_se_p2(){return Ss06_se_p2;}
  
  void Setss06_spos_p2(Double_t pos){Ss06_spos_p2 = pos;}
  Double_t Getss06_spos_p2(){return Ss06_spos_p2;}
  
  void Setss06_sbw_p2(Double_t bw){Ss06_sbw_p2 = bw;}
  Double_t Getss06_sbw_p2(){return Ss06_sbw_p2;}
  
  void Setss06_sarea_p2(Double_t area){Ss06_sarea_p2 = area;}
  Double_t Getss06_sarea_p2(){return Ss06_sarea_p2;}
  
  void Setss06_seta_p2(Double_t eta){Ss06_seta_p2 = eta;}
  Double_t Getss06_seta_p2(){return Ss06_seta_p2;}


  
  void Setss06_ke_p2(Double_t en){Ss06_ke_p2 = en;}
  Double_t Getss06_ke_p2(){return Ss06_ke_p2;}
  
  void Setss06_kpos_p2(Double_t pos){Ss06_kpos_p2 = pos;}
  Double_t Getss06_kpos_p2(){return Ss06_kpos_p2;}
  
  void Setss06_kbw_p2(Double_t bw){Ss06_kbw_p2 = bw;}
  Double_t Getss06_kbw_p2(){return Ss06_kbw_p2;}
  
  void Setss06_karea_p2(Double_t area){Ss06_karea_p2 = area;}
  Double_t Getss06_karea_p2(){return Ss06_karea_p2;}
  
  void Setss06_keta_p2(Double_t eta){Ss06_keta_p2 = eta;}
  Double_t Getss06_keta_p2(){return Ss06_keta_p2;}
    

 protected:

     Double32_t Ss03_se_p1;
     Double32_t Ss03_spos_p1;
     Double32_t Ss03_sbw_p1;
     Double32_t Ss03_sarea_p1;
     Double32_t Ss03_seta_p1;

     Double32_t Ss03_ke_p1;
     Double32_t Ss03_kpos_p1;
     Double32_t Ss03_kbw_p1;
     Double32_t Ss03_karea_p1;
     Double32_t Ss03_keta_p1;

     Double32_t Ss06_se_p1;
     Double32_t Ss06_spos_p1;
     Double32_t Ss06_sbw_p1;
     Double32_t Ss06_sarea_p1;
     Double32_t Ss06_seta_p1;

     Double32_t Ss06_ke_p1;
     Double32_t Ss06_kpos_p1;
     Double32_t Ss06_kbw_p1;
     Double32_t Ss06_karea_p1;
     Double32_t Ss06_keta_p1;
     
     
     
     Double32_t Ss03_se_p2;
     Double32_t Ss03_spos_p2;
     Double32_t Ss03_sbw_p2;
     Double32_t Ss03_sarea_p2;
     Double32_t Ss03_seta_p2;

     Double32_t Ss03_ke_p2;
     Double32_t Ss03_kpos_p2;
     Double32_t Ss03_kbw_p2;
     Double32_t Ss03_karea_p2;
     Double32_t Ss03_keta_p2;

     Double32_t Ss06_se_p2;
     Double32_t Ss06_spos_p2;
     Double32_t Ss06_sbw_p2;
     Double32_t Ss06_sarea_p2;
     Double32_t Ss06_seta_p2;

     Double32_t Ss06_ke_p2;
     Double32_t Ss06_kpos_p2;
     Double32_t Ss06_kbw_p2;
     Double32_t Ss06_karea_p2;
     Double32_t Ss06_keta_p2;    

  ClassDef(R3BTra2pDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTraFraDigi header file                  -----
// -----                  Created 13/07/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTraFraDigi.h
 **/


#ifndef R3BTRAFRADIGI_H
#define R3BTRAFRADIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTraFraDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTraFraDigi();
  R3BTraFraDigi(Double_t ss03_se_f,
Double_t ss03_spos_f,Double_t ss03_sbw_f,Double_t ss03_sarea_f,Double_t ss03_seta_f,Double_t ss03_ke_f,
Double_t ss03_kpos_f,Double_t ss03_kbw_f,Double_t ss03_karea_f,Double_t ss03_keta_f,Double_t ss06_se_f,
Double_t ss06_spos_f,Double_t ss06_sbw_f,Double_t ss06_sarea_f,Double_t ss06_seta_f,Double_t ss06_ke_f,
Double_t ss06_kpos_f,Double_t ss06_kbw_f,Double_t ss06_karea_f,Double_t ss06_keta_f);
  
  /** Copy constructor **/
  R3BTraFraDigi(const R3BTraFraDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTraFraDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;
  
  
  void Setss03_se_f(Double_t en){Ss03_se_f = en;}
  Double_t Getss03_se_f(){return Ss03_se_f;}
     
  void Setss03_spos_f(Double_t pos){Ss03_spos_f = pos;}
  Double_t Getss03_spos_f(){return Ss03_spos_f;}
  
  void Setss03_sbw_f(Double_t bw){Ss03_sbw_f = bw;}
  Double_t Getss03_sbw_f(){return Ss03_sbw_f;}
  
  void Setss03_sarea_f(Double_t area){Ss03_sarea_f = area;}
  Double_t Getss03_sarea_f(){return Ss03_sarea_f;}
  
  void Setss03_seta_f(Double_t eta){Ss03_seta_f = eta;}
  Double_t Getss03_seta_f(){return Ss03_seta_f;}


  
  void Setss03_ke_f(Double_t en){Ss03_ke_f = en;}
  Double_t Getss03_ke_f(){return Ss03_ke_f;}
  
  void Setss03_kpos_f(Double_t pos){Ss03_kpos_f = pos;}
  Double_t Getss03_kpos_f(){return Ss03_kpos_f;}
  
  void Setss03_kbw_f(Double_t bw){Ss03_kbw_f = bw;}
  Double_t Getss03_kbw_f(){return Ss03_kbw_f;}
  
  void Setss03_karea_f(Double_t area){Ss03_karea_f = area;}
  Double_t Getss03_karea_f(){return Ss03_karea_f;}
  
  void Setss03_keta_f(Double_t eta){Ss03_keta_f = eta;}
  Double_t Getss03_keta_f(){return Ss03_keta_f;}
  
  
  
  void Setss06_se_f(Double_t en){Ss06_se_f = en;}
  Double_t Getss06_se_f(){return Ss06_se_f;}
  
  void Setss06_spos_f(Double_t pos){Ss06_spos_f = pos;}
  Double_t Getss06_spos_f(){return Ss06_spos_f;}
  
  void Setss06_sbw_f(Double_t bw){Ss06_sbw_f = bw;}
  Double_t Getss06_sbw_f(){return Ss06_sbw_f;}
  
  void Setss06_sarea_f(Double_t area){Ss06_sarea_f = area;}
  Double_t Getss06_sarea_f(){return Ss06_sarea_f;}
  
  void Setss06_seta_f(Double_t eta){Ss06_seta_f = eta;}
  Double_t Getss06_seta_f(){return Ss06_seta_f;}


  
  void Setss06_ke_f(Double_t en){Ss06_ke_f = en;}
  Double_t Getss06_ke_f(){return Ss06_ke_f;}
  
  void Setss06_kpos_f(Double_t pos){Ss06_kpos_f = pos;}
  Double_t Getss06_kpos_f(){return Ss06_kpos_f;}
  
  void Setss06_kbw_f(Double_t bw){Ss06_kbw_f = bw;}
  Double_t Getss06_kbw_f(){return Ss06_kbw_f;}
  
  void Setss06_karea_f(Double_t area){Ss06_karea_f = area;}
  Double_t Getss06_karea_f(){return Ss06_karea_f;}
  
  void Setss06_keta_f(Double_t eta){Ss06_keta_f = eta;}
  Double_t Getss06_keta_f(){return Ss06_keta_f;}
  


 protected:

     Double32_t Ss03_se_f;
     Double32_t Ss03_spos_f;
     Double32_t Ss03_sbw_f;
     Double32_t Ss03_sarea_f;
     Double32_t Ss03_seta_f;

     Double32_t Ss03_ke_f;
     Double32_t Ss03_kpos_f;
     Double32_t Ss03_kbw_f;
     Double32_t Ss03_karea_f;
     Double32_t Ss03_keta_f;

     Double32_t Ss06_se_f;
     Double32_t Ss06_spos_f;
     Double32_t Ss06_sbw_f;
     Double32_t Ss06_sarea_f;
     Double32_t Ss06_seta_f;

     Double32_t Ss06_ke_f;
     Double32_t Ss06_kpos_f;
     Double32_t Ss06_kbw_f;
     Double32_t Ss06_karea_f;
     Double32_t Ss06_keta_f;


  ClassDef(R3BTraFraDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTargetDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTargetDigi.h
 **/


#ifndef R3BTARGETDIGI_H
#define R3BTARGETDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTargetDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTargetDigi();
  R3BTargetDigi(Double_t ss03_smul,Double_t ss03_kmul,Double_t ss06_smul,Double_t ss06_kmul,
  Double_t x0,Double_t y0,Double_t t0,Double_t estar,Double_t Pxf,Double_t Pyf,Double_t Pzf,Double_t Pf_tot,Double_t f_beta,
Double_t Pxp1,Double_t Pyp1,Double_t Pzp1,Double_t Pp1_tot,Double_t p1_beta);
  
  /** Copy constructor **/
  R3BTargetDigi(const R3BTargetDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTargetDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;
  
  
  
  void Setss03_smul(Double_t mul){Ss03_smul = mul;}
  Double_t Getss03_smul(){return Ss03_smul;}
  
  void Setss03_kmul(Double_t mul){Ss03_kmul = mul;}
  Double_t Getss03_kmul(){return Ss03_kmul;}
  
  void Setss06_smul(Double_t mul){Ss06_smul = mul;}
  Double_t Getss06_smul(){return Ss06_smul;}
  
  void Setss06_kmul(Double_t mul){Ss06_kmul = mul;}
  Double_t Getss06_kmul(){return Ss06_kmul;}    
  
  
  
  void Setx0(Double_t pos){X0 = pos;}
  Double_t Getx0(){return X0;}
  
  void Sety0(Double_t pos){Y0 = pos;}
  Double_t Gety0(){return Y0;}
  
  void Sett0(Double_t time){T0 = time;}
  Double_t Gett0(){return T0;}
  
  
  
  void Setestar(Double_t energy){Estar = energy;}
  Double_t Getestar(){return Estar;}
  
  void SetPxf(Double_t mom){pxf = mom;}
  Double_t GetPxf(){return pxf;}
  void SetPyf(Double_t mom){pyf = mom;}
  Double_t GetPyf(){return pyf;}
  void SetPzf(Double_t mom){pzf = mom;}
  Double_t GetPzf(){return pzf;}
  void SetPf_tot(Double_t mom){pf_tot = mom;}
  Double_t GetPf_tot(){return pf_tot;}
  void Setf_beta(Double_t vel){f_Beta = vel;}
  Double_t Getf_beta(){return f_Beta;}
  
  void SetPxp1(Double_t mom){pxp1 = mom;}
  Double_t GetPxp1(){return pxp1;}
  void SetPyp1(Double_t mom){pyp1 = mom;}
  Double_t GetPyp1(){return pyp1;}
  void SetPzp1(Double_t mom){pzp1 = mom;}
  Double_t GetPzp1(){return pzp1;}
  void SetPp1_tot(Double_t mom){pp1_tot = mom;}
  Double_t GetPp1_tot(){return pp1_tot;}
  void Setp1_beta(Double_t vel){p1_Beta = vel;}
  Double_t Getp1_beta(){return p1_Beta;}

    

 protected:

     
     Double32_t Ss03_smul;
     Double32_t Ss03_kmul;
     Double32_t Ss06_smul;
     Double32_t Ss06_kmul;
     
     Double32_t X0;
     Double32_t Y0;
     Double32_t T0;
     
     Double32_t Estar;
     
     Double32_t pxf;
     Double32_t pyf;
     Double32_t pzf;
     Double32_t pf_tot;
     Double32_t f_Beta;
     
     Double32_t pxp1;
     Double32_t pyp1;
     Double32_t pzp1;
     Double32_t pp1_tot;
     Double32_t p1_Beta;
     
  

  ClassDef(R3BTargetDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BTarget2pDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BTarget2pDigi.h
 **/


#ifndef R3BTARGET2PDIGI_H
#define R3BTARGET2PDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BTarget2pDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BTarget2pDigi();
  R3BTarget2pDigi(Double_t ss03_smul,Double_t ss03_kmul,Double_t ss06_smul,Double_t ss06_kmul,
  Double_t x0,Double_t y0,Double_t t0,Double_t estar,Double_t Pxf,Double_t Pyf,Double_t Pzf,Double_t Pf_tot,Double_t f_beta,
Double_t Pxp1,Double_t Pyp1,Double_t Pzp1,Double_t Pp1_tot,Double_t p1_beta,Double_t Pxp2,Double_t Pyp2,Double_t Pzp2,
//Double_t Pp2_tot,Double_t p2_beta);
Double_t Pp2_tot,Double_t p2_beta,Double_t alpha,Int_t ppmul);
  
  /** Copy constructor **/
  R3BTarget2pDigi(const R3BTarget2pDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BTarget2pDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;
  
  
  
  void Setss03_smul(Double_t mul){Ss03_smul = mul;}
  Double_t Getss03_smul(){return Ss03_smul;}
  
  void Setss03_kmul(Double_t mul){Ss03_kmul = mul;}
  Double_t Getss03_kmul(){return Ss03_kmul;}
  
  void Setss06_smul(Double_t mul){Ss06_smul = mul;}
  Double_t Getss06_smul(){return Ss06_smul;}
  
  void Setss06_kmul(Double_t mul){Ss06_kmul = mul;}
  Double_t Getss06_kmul(){return Ss06_kmul;}    
  
  
  
  void Setx0(Double_t pos){X0 = pos;}
  Double_t Getx0(){return X0;}
  
  void Sety0(Double_t pos){Y0 = pos;}
  Double_t Gety0(){return Y0;}
  
  void Sett0(Double_t time){T0 = time;}
  Double_t Gett0(){return T0;}
  
  
  
  void Setestar(Double_t energy){Estar = energy;}
  Double_t Getestar(){return Estar;}
  
  
  void SetPxf(Double_t mom){pxf = mom;}
  Double_t GetPxf(){return pxf;}
  void SetPyf(Double_t mom){pyf = mom;}
  Double_t GetPyf(){return pyf;}
  void SetPzf(Double_t mom){pzf = mom;}
  Double_t GetPzf(){return pzf;}
  void SetPf_tot(Double_t mom){pf_tot = mom;}
  Double_t GetPf_tot(){return pf_tot;}
  void Setf_beta(Double_t vel){f_Beta = vel;}
  Double_t Getf_beta(){return f_Beta;}
  
  void SetPxp1(Double_t mom){pxp1 = mom;}
  Double_t GetPxp1(){return pxp1;}
  void SetPyp1(Double_t mom){pyp1 = mom;}
  Double_t GetPyp1(){return pyp1;}
  void SetPzp1(Double_t mom){pzp1 = mom;}
  Double_t GetPzp1(){return pzp1;}
  void SetPp1_tot(Double_t mom){pp1_tot = mom;}
  Double_t GetPp1_tot(){return pp1_tot;}
  void Setp1_beta(Double_t vel){p1_Beta = vel;}
  Double_t Getp1_beta(){return p1_Beta;}
  
  void SetPxp2(Double_t mom){pxp2 = mom;}
  Double_t GetPxp2(){return pxp2;}
  void SetPyp2(Double_t mom){pyp2 = mom;}
  Double_t GetPyp2(){return pyp2;}
  void SetPzp2(Double_t mom){pzp2 = mom;}
  Double_t GetPzp2(){return pzp2;}
  void SetPp2_tot(Double_t mom){pp2_tot = mom;}
  Double_t GetPp2_tot(){return pp2_tot;}
  void Setp2_beta(Double_t vel){p2_Beta = vel;}
  Double_t Getp2_beta(){return p2_Beta;}

  void Setalpha(Double_t ang){Alpha = ang;}
  Double_t Getalpha(){return Alpha;}
  
  void Setppmul(Double_t mul){Ppmul = mul;}
  Double_t Getppmul(){return Ppmul;}

    

 protected:

     
     Double32_t Ss03_smul;
     Double32_t Ss03_kmul;
     Double32_t Ss06_smul;
     Double32_t Ss06_kmul;
     
     Double32_t X0;
     Double32_t Y0;
     Double32_t T0;
     
     Double32_t Estar;
     
     Double32_t pxf;
     Double32_t pyf;
     Double32_t pzf;
     Double32_t pf_tot;
     Double32_t f_Beta;
     
     Double32_t pxp1;
     Double32_t pyp1;
     Double32_t pzp1;
     Double32_t pp1_tot;
     Double32_t p1_Beta;
     
     Double32_t pxp2;
     Double32_t pyp2;
     Double32_t pzp2;
     Double32_t pp2_tot;
     Double32_t p2_Beta;
     
     Double32_t Alpha;
     
     Double32_t Ppmul;
     
  

  ClassDef(R3BTarget2pDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BMfiPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BMfiPoint.h
 **/


#ifndef R3BMFIPOINT_H
#define R3BMFIPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BMfiPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BMfiPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param plane    Module ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BMfiPoint(Int_t trackID, Int_t detID, Int_t plane, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BMfiPoint(const R3BMfiPoint&);


  /** Destructor **/
  virtual ~R3BMfiPoint();


  R3BMfiPoint& operator=(const R3BMfiPoint&) { return *this; }


  /** Accessors **/
  Int_t GetModule()   const { return fModule; }
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fModule;


  ClassDef(R3BMfiPoint,1)

};



inline void R3BMfiPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BMfiPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BMfiDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BMfiDigi.h
 **/


#ifndef R3BMFIDIGI_H
#define R3BMFIDIGI_H


#include "TObject.h"
#include "TVector3.h"



class R3BMfiDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BMfiDigi();
  R3BMfiDigi(Int_t mf1mul,Double_t mf1x, Int_t fiber);
  
  /** Copy constructor **/
  R3BMfiDigi(const R3BMfiDigi&);

  /** Destructor **/
  virtual ~R3BMfiDigi();

  R3BMfiDigi& operator=(const R3BMfiDigi&) { return *this; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void SetMf1mul(Int_t mul){Mf1mul = mul;}
  Double_t GetMf1mul(){return Mf1mul;}

  void SetMf1x(Double_t pos){Mf1x = pos;}
  Double_t GetMf1x(){return Mf1x;}
  
  void SetMf01ni(Double_t fib){Mf01ni = fib;}
  Int_t GetMf01ni(){return Mf01ni;}


  /*
  void SetMf1mul(Int_t mul){MFI1n = mul;}
  Double_t GetMf1mul(){return MFI1n;}

  void SetMf1x(Double_t pos){MFI1x = pos;}
  Double_t GetMf1x(){return MFI1x;}
  */


 protected:
 
     Int_t Mf1mul;
     Double32_t Mf1x;
     Int_t Mf01ni;
//      Int_t MFI1n; //ggland_tracker
//      Double32_t MFI1x;
     
  ClassDef(R3BMfiDigi,1)

};

#endif
// -------------------------------------------------------------------------
// -----                      R3BPspPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------


/**  R3BPspPoint.h
 **/


#ifndef R3BPSPPOINT_H
#define R3BPSPPOINT_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BPspPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  R3BPspPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param plane    Module ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  R3BPspPoint(Int_t trackID, Int_t detID, Int_t plane, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BPspPoint(const R3BPspPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~R3BPspPoint();


  /** Accessors **/
  Int_t GetModule()   const { return fModule; }
  Double_t GetXIn()   const { return fX; }
  Double_t GetYIn()   const { return fY; }
  Double_t GetZIn()   const { return fZ; }
  Double_t GetXOut()  const { return fX_out; }
  Double_t GetYOut()  const { return fY_out; }
  Double_t GetZOut()  const { return fZ_out; }
  Double_t GetPxOut() const { return fPx_out; }
  Double_t GetPyOut() const { return fPy_out; }
  Double_t GetPzOut() const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fModule;


  ClassDef(R3BPspPoint,1)

};



inline void R3BPspPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BPspPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                      R3BPspDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BPspDigi.h
 **/


#ifndef R3BPSPDIGI_H
#define R3BPSPDIGI_H



#include "TObject.h"
#include "TVector3.h"



class R3BPspDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BPspDigi();
  R3BPspDigi(Int_t psp3mul,Double_t psp3x,Double_t psp3y,Double_t psp3e);
  
  /** Copy constructor **/
  R3BPspDigi(const R3BPspDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BPspDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void SetPsp3mul(Int_t mul){Ps03mul = mul;}
  Double_t GetPsp3mul(){return Ps03mul;}
  
  void SetPsp3x(Double_t pos){Ps03x = pos;}
  Double_t GetPsp3x(){return Ps03x;}
  
  void SetPsp3y(Double_t pos){Ps03y = pos;}
  Double_t GetPsp3y(){return Ps03y;}
  
  
  
  void SetPsp3e(Double_t en){Ps03e = en;}
  Double_t GetPsp3e(){return Ps03e;}
  


 protected:

   Int_t Ps03mul;
   Double32_t Ps03x;
   Double32_t Ps03y;
   Double32_t Ps03e;

  ClassDef(R3BPspDigi,1)


};

#endif

#ifndef R3BNEULANDRAWITEM_H
#define R3BNEULANDRAWITEM_H

#include "TObject.h"

class R3BNeulandRawItem : public TObject
{
  public:
    // Default Constructor
    R3BNeulandRawItem();

    /** Standard Constructor
     *@param Tac_addr   tac mod address
     *@param Tac_ch     tac channel no
     *@param Cal        calibration bit
     *@param clock      clock data
     *@param Tac_data   tac data
     *@param Qdc_data   qdc data
     **/
    R3BNeulandRawItem(UShort_t sam,
                      UShort_t gtb,
                      UShort_t tacAddr,
                      UShort_t tacCh,
                      UShort_t cal,
                      UShort_t clock,
                      UShort_t tacData,
                      UShort_t qdcData);

    R3BNeulandRawItem(const R3BNeulandRawItem&);

    // Destructor
    virtual ~R3BNeulandRawItem()
    {
    }

    inline const UShort_t& GetSam() const
    {
        return fSam;
    }
    inline const UShort_t& GetGtb() const
    {
        return fGtb;
    }
    inline const UShort_t& GetTacCh() const
    {
        return fTacCh;
    }
    inline const UShort_t& GetTacAddr() const
    {
        return fTacAddr;
    }
    inline const UShort_t& GetCal() const
    {
        return fCal;
    }
    inline const UShort_t& GetClock() const
    {
        return fClock;
    }
    inline const UShort_t& GetTacData() const
    {
        return fTacData;
    }
    inline const UShort_t& GetQdcData() const
    {
        return fQdcData;
    }

  protected:
    UShort_t fSam;
    UShort_t fGtb;
    UShort_t fTacAddr; //... TAC module address
    UShort_t fTacCh;   //... TAC channel number
    UShort_t fCal;     //... Calibration bit
    UShort_t fClock;   //... Clock data
    UShort_t fTacData; //... TAC data
    UShort_t fQdcData; //... QDC data

  public:
    ClassDef(R3BNeulandRawItem, 1)
};

#endif

#ifndef R3BNEULANDMAPPEDITEM_H
#define R3BNEULANDMAPPEDITEM_H

#include "R3BNeulandRawItem.h"

class R3BNeulandMappedItem : public R3BNeulandRawItem
{
  public:
    // Default Constructor
    R3BNeulandMappedItem();

    /** Standard Constructor
     **/
    R3BNeulandMappedItem(Int_t sam,
                         Int_t gtb,
                         Int_t tacAddr,
                         Int_t cal,
                         Int_t clock,
                         Int_t tacData,
                         Int_t qdcData,
                         Int_t barId,
                         Int_t side,
                         Bool_t is17);

    // Destructor
    virtual ~R3BNeulandMappedItem()
    {
    }

    // Getters
    inline const Int_t& GetBarId() const
    {
        return fBarId;
    }
    inline const Int_t& GetSide() const
    {
        return fSide;
    }
    inline const Bool_t& Is17() const
    {
        return fIs17;
    }

  private:
    Int_t fBarId; //... detector ID
    Int_t fSide;  //... PMT
    Bool_t fIs17; //... true if CH 17

  public:
    ClassDef(R3BNeulandMappedItem, 2)
};

#endif
#ifndef R3BPSPXMAPPEDITEM_H
#define R3BPSPXMAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the s438b PSPX detectors. 
// Introduced by Ralf, Jan 2016

class R3BPspxMappedItem : public TObject
{
  public:
    // Default Constructor
    R3BPspxMappedItem();

    // Standard Constructor
    R3BPspxMappedItem(UChar_t detector, UChar_t channel, UInt_t energy);

    // Destructor
    virtual ~R3BPspxMappedItem() { }

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }
    inline const UChar_t& GetChannel()  const { return fChannel;  }
    inline const UInt_t&  GetEnergy()   const { return fEnergy;   }

  private:
	UChar_t fDetector; // 0..4
    UChar_t fChannel;  // 0..64
    UInt_t  fEnergy;   // 0xfff is energy data, Anything in 0xfffff000 indicates an error or overflow

  public:
    ClassDef(R3BPspxMappedItem, 2)
};

#endif
#ifndef R3BPSPXCALITEM_H
#define R3BPSPXCALITEM_H

#include "TObject.h"

// for the data analysis of the s438b PSPX detectors. 
// Introduced by Ralf, Jan 2016

class R3BPspxCalItem : public TObject
{
  public:
    // Default Constructor
    R3BPspxCalItem();

    // Standard Constructor
    R3BPspxCalItem(UChar_t detector, UChar_t channel, Float_t energy);

    // Destructor
    virtual ~R3BPspxCalItem() { }

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }
    inline const UChar_t& GetChannel()  const { return fChannel;  }
    inline const Float_t& GetEnergy()   const { return fEnergy;   }

  private:
	UChar_t fDetector; // 0..4
    UChar_t fChannel;  // 0..64
    Float_t fEnergy;   // 0xfff is energy data, Anything in 0xfffff000 indicates an error or overflow

  public:
    ClassDef(R3BPspxCalItem, 2)
};

#endif
#ifndef R3BLOSMAPPEDITEM_H
#define R3BLOSMAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the LOS detectors. 
// Introduced by Ralf, Jan 2016

class R3BLosMappedItem : public TObject
{
  public:
    // Default Constructor
    R3BLosMappedItem();

    // Standard Constructor
    R3BLosMappedItem(UChar_t detector, UChar_t channel, UInt_t timeCoarse, UInt_t timeFine);

    // Destructor
    virtual ~R3BLosMappedItem() { }

    // Getters
    inline const UChar_t& GetDetector()   const { return fDetector;  }
    inline const UChar_t& GetChannel()    const { return fChannel;  }
    inline const UInt_t&  GetTimeCoarse() const { return fTimeCoarse;   }
    inline const UInt_t&  GetTimeFine()   const { return fTimeFine;   }

  private:
    UChar_t fDetector;
    UChar_t fChannel;  
    UInt_t  fTimeCoarse;   
    UInt_t  fTimeFine;

  public:
    ClassDef(R3BLosMappedItem, 2)
};

#endif
// -------------------------------------------------------------------------
// -----                  R3BDetectorList.header file                  -----
// -----                 Created 11/02/09  by D.Bertini                -----
// -------------------------------------------------------------------------

/** Unique identifier for all R3B detector systems **/

#ifndef R3BDETECTORLIST_H
#define R3BDETECTORLIST_H 1

enum DetectorId
{
    kREF,
    kDCH,
    kCAL,
    kLAND,
    kGFI,
    kMTOF,
    kDTOF,
    kTOF,
    kTRA,
    kCALIFA,
    kMFI,
    kPSP,
    kVETO,
    kSTaRTrack,
    kLUMON,
    kNEULAND,
    kLAST
};

/** Unique identifier for all R3B Point and Hit types **/

enum fDetectorType
{
    kUnknown,
    kDchPoint,
    kCalPoint,
    kLandPoint,
    kGfiPoint,
    kmTofPoint,
    kdTofPoint,
    kTofPoint,
    kTraPoint,
    kCalifaPoint,
    kMfiPoint,
    kPspPoint,
    kVetoPoint,
    kSTarTraPoint,
    kLuMonPoint,
    kNeulandPoint
};

enum SensorSide
{
    kTOP,
    kBOTTOM
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ELILuMonPoint", payloadCode, "@",
"R3BCaloCrystalHit", payloadCode, "@",
"R3BCaloCrystalHitSim", payloadCode, "@",
"R3BCaloHit", payloadCode, "@",
"R3BCaloHitSim", payloadCode, "@",
"R3BCaloPoint", payloadCode, "@",
"R3BCaloRawHit", payloadCode, "@",
"R3BDch2pDigi", payloadCode, "@",
"R3BDchDigi", payloadCode, "@",
"R3BDchFullPoint", payloadCode, "@",
"R3BDchPoint", payloadCode, "@",
"R3BGfiDigi", payloadCode, "@",
"R3BGfiPoint", payloadCode, "@",
"R3BLandDigi", payloadCode, "@",
"R3BLandFirstHits", payloadCode, "@",
"R3BLandHit", payloadCode, "@",
"R3BLandPoint", payloadCode, "@",
"R3BLosMappedItem", payloadCode, "@",
"R3BMCTrack", payloadCode, "@",
"R3BMfiDigi", payloadCode, "@",
"R3BMfiPoint", payloadCode, "@",
"R3BNeulandMappedItem", payloadCode, "@",
"R3BNeulandRawItem", payloadCode, "@",
"R3BNeutronTrack", payloadCode, "@",
"R3BPaddleCrystalHit", payloadCode, "@",
"R3BPspDigi", payloadCode, "@",
"R3BPspPoint", payloadCode, "@",
"R3BPspxCalItem", payloadCode, "@",
"R3BPspxMappedItem", payloadCode, "@",
"R3BSTaRTraHit", payloadCode, "@",
"R3BSTaRTraPoint", payloadCode, "@",
"R3BSTaRTrackerDigitHit", payloadCode, "@",
"R3BSTaRTrackerHit", payloadCode, "@",
"R3BSitrackerHit", payloadCode, "@",
"R3BStack", payloadCode, "@",
"R3BTarget2pDigi", payloadCode, "@",
"R3BTargetDigi", payloadCode, "@",
"R3BTof2pDigi", payloadCode, "@",
"R3BTofDigi", payloadCode, "@",
"R3BTofPoint", payloadCode, "@",
"R3BTra2pDigi", payloadCode, "@",
"R3BTraDigi", payloadCode, "@",
"R3BTraFraDigi", payloadCode, "@",
"R3BTraHit", payloadCode, "@",
"R3BTraPoint", payloadCode, "@",
"R3BTrackerHit", payloadCode, "@",
"R3BVetoPoint", payloadCode, "@",
"R3BXBallCrystalHit", payloadCode, "@",
"R3BXBallCrystalHitSim", payloadCode, "@",
"R3BXBallPoint", payloadCode, "@",
"R3BdTofPoint", payloadCode, "@",
"R3BmTofDigi", payloadCode, "@",
"R3BmTofPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BDataDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BDataDict() {
  TriggerDictionaryInitialization_G__R3BDataDict_Impl();
}
