// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIlanddIG__R3BLandDict

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
#include "R3BLand.h"
#include "R3BGeoLand.h"
#include "R3BGeoLandPar.h"
#include "R3BLandContFact.h"
#include "R3BLandDigitizer.h"
#include "R3BLandDigitizerQA.h"
#include "R3BNeutronTracker.h"
#include "R3BLandDigiPar.h"
#include "R3BNeuLandCluster.h"
#include "R3BNeuLandClusterFinder.h"
#include "R3BNeutronCalibr2D.h"
#include "R3BPrimPart.h"
#include "R3BNeutronTracker2D.h"
#include "R3BNeutHit.h"
#include "unpack/R3BLandRawAna.h"
#include "unpack/R3BLandRawAnaS438b.h"
#include "unpack/R3BLandMapping.h"
#include "unpack/R3BLandUnpack.h"
#include "unpack/R3BLandTcalFill.h"
#include "unpack/R3BLandParamRead.h"
#include "unpack/R3BLandPmt.h"
#include "unpack/R3BLandTcal.h"
#include "unpack/R3BLandTdiffFill.h"
#include "unpack/R3BLandAna.h"
#include "unpack/R3BLandTcalTest.h"
#include "unpack/R3BLandTSync.h"
#include "unpack/R3BLandCosmic1.h"
#include "unpack/R3BLandCosmic1LSQR.h"
#include "unpack/R3BLandCosmic1Util.h"
#include "unpack/R3BLandTSyncContFact.h"
#include "unpack/R3BLandTSyncPar.h"
#include "unpack/R3BLandTSyncModulePar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoLand(void *p = 0);
   static void *newArray_R3BGeoLand(Long_t size, void *p);
   static void delete_R3BGeoLand(void *p);
   static void deleteArray_R3BGeoLand(void *p);
   static void destruct_R3BGeoLand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoLand*)
   {
      ::R3BGeoLand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoLand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoLand", ::R3BGeoLand::Class_Version(), "invalid", 200,
                  typeid(::R3BGeoLand), DefineBehavior(ptr, ptr),
                  &::R3BGeoLand::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoLand) );
      instance.SetNew(&new_R3BGeoLand);
      instance.SetNewArray(&newArray_R3BGeoLand);
      instance.SetDelete(&delete_R3BGeoLand);
      instance.SetDeleteArray(&deleteArray_R3BGeoLand);
      instance.SetDestructor(&destruct_R3BGeoLand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoLand*)
   {
      return GenerateInitInstanceLocal((::R3BGeoLand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoLandPar(void *p = 0);
   static void *newArray_R3BGeoLandPar(Long_t size, void *p);
   static void delete_R3BGeoLandPar(void *p);
   static void deleteArray_R3BGeoLandPar(void *p);
   static void destruct_R3BGeoLandPar(void *p);
   static void streamer_R3BGeoLandPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoLandPar*)
   {
      ::R3BGeoLandPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoLandPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoLandPar", ::R3BGeoLandPar::Class_Version(), "invalid", 227,
                  typeid(::R3BGeoLandPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoLandPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoLandPar) );
      instance.SetNew(&new_R3BGeoLandPar);
      instance.SetNewArray(&newArray_R3BGeoLandPar);
      instance.SetDelete(&delete_R3BGeoLandPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoLandPar);
      instance.SetDestructor(&destruct_R3BGeoLandPar);
      instance.SetStreamerFunc(&streamer_R3BGeoLandPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoLandPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoLandPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLand(void *p = 0);
   static void *newArray_R3BLand(Long_t size, void *p);
   static void delete_R3BLand(void *p);
   static void deleteArray_R3BLand(void *p);
   static void destruct_R3BLand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLand*)
   {
      ::R3BLand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLand", ::R3BLand::Class_Version(), "invalid", 34,
                  typeid(::R3BLand), DefineBehavior(ptr, ptr),
                  &::R3BLand::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLand) );
      instance.SetNew(&new_R3BLand);
      instance.SetNewArray(&newArray_R3BLand);
      instance.SetDelete(&delete_R3BLand);
      instance.SetDeleteArray(&deleteArray_R3BLand);
      instance.SetDestructor(&destruct_R3BLand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLand*)
   {
      return GenerateInitInstanceLocal((::R3BLand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLand*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigitizer(void *p = 0);
   static void *newArray_R3BLandDigitizer(Long_t size, void *p);
   static void delete_R3BLandDigitizer(void *p);
   static void deleteArray_R3BLandDigitizer(void *p);
   static void destruct_R3BLandDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigitizer*)
   {
      ::R3BLandDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigitizer", ::R3BLandDigitizer::Class_Version(), "invalid", 289,
                  typeid(::R3BLandDigitizer), DefineBehavior(ptr, ptr),
                  &::R3BLandDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigitizer) );
      instance.SetNew(&new_R3BLandDigitizer);
      instance.SetNewArray(&newArray_R3BLandDigitizer);
      instance.SetDelete(&delete_R3BLandDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BLandDigitizer);
      instance.SetDestructor(&destruct_R3BLandDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigitizerQA(void *p = 0);
   static void *newArray_R3BLandDigitizerQA(Long_t size, void *p);
   static void delete_R3BLandDigitizerQA(void *p);
   static void deleteArray_R3BLandDigitizerQA(void *p);
   static void destruct_R3BLandDigitizerQA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigitizerQA*)
   {
      ::R3BLandDigitizerQA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigitizerQA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigitizerQA", ::R3BLandDigitizerQA::Class_Version(), "invalid", 400,
                  typeid(::R3BLandDigitizerQA), DefineBehavior(ptr, ptr),
                  &::R3BLandDigitizerQA::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigitizerQA) );
      instance.SetNew(&new_R3BLandDigitizerQA);
      instance.SetNewArray(&newArray_R3BLandDigitizerQA);
      instance.SetDelete(&delete_R3BLandDigitizerQA);
      instance.SetDeleteArray(&deleteArray_R3BLandDigitizerQA);
      instance.SetDestructor(&destruct_R3BLandDigitizerQA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigitizerQA*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigitizerQA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigiPar(void *p = 0);
   static void *newArray_R3BLandDigiPar(Long_t size, void *p);
   static void delete_R3BLandDigiPar(void *p);
   static void deleteArray_R3BLandDigiPar(void *p);
   static void destruct_R3BLandDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigiPar*)
   {
      ::R3BLandDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigiPar", ::R3BLandDigiPar::Class_Version(), "R3BLandDigiPar.h", 13,
                  typeid(::R3BLandDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BLandDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigiPar) );
      instance.SetNew(&new_R3BLandDigiPar);
      instance.SetNewArray(&newArray_R3BLandDigiPar);
      instance.SetDelete(&delete_R3BLandDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BLandDigiPar);
      instance.SetDestructor(&destruct_R3BLandDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTracker(void *p = 0);
   static void *newArray_R3BNeutronTracker(Long_t size, void *p);
   static void delete_R3BNeutronTracker(void *p);
   static void deleteArray_R3BNeutronTracker(void *p);
   static void destruct_R3BNeutronTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTracker*)
   {
      ::R3BNeutronTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTracker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTracker", ::R3BNeutronTracker::Class_Version(), "invalid", 503,
                  typeid(::R3BNeutronTracker), DefineBehavior(ptr, ptr),
                  &::R3BNeutronTracker::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTracker) );
      instance.SetNew(&new_R3BNeutronTracker);
      instance.SetNewArray(&newArray_R3BNeutronTracker);
      instance.SetDelete(&delete_R3BNeutronTracker);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTracker);
      instance.SetDestructor(&destruct_R3BNeutronTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTracker*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandContFact(void *p = 0);
   static void *newArray_R3BLandContFact(Long_t size, void *p);
   static void delete_R3BLandContFact(void *p);
   static void deleteArray_R3BLandContFact(void *p);
   static void destruct_R3BLandContFact(void *p);
   static void streamer_R3BLandContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandContFact*)
   {
      ::R3BLandContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandContFact", ::R3BLandContFact::Class_Version(), "invalid", 254,
                  typeid(::R3BLandContFact), DefineBehavior(ptr, ptr),
                  &::R3BLandContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BLandContFact) );
      instance.SetNew(&new_R3BLandContFact);
      instance.SetNewArray(&newArray_R3BLandContFact);
      instance.SetDelete(&delete_R3BLandContFact);
      instance.SetDeleteArray(&deleteArray_R3BLandContFact);
      instance.SetDestructor(&destruct_R3BLandContFact);
      instance.SetStreamerFunc(&streamer_R3BLandContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandContFact*)
   {
      return GenerateInitInstanceLocal((::R3BLandContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeuLandCluster(void *p = 0);
   static void *newArray_R3BNeuLandCluster(Long_t size, void *p);
   static void delete_R3BNeuLandCluster(void *p);
   static void deleteArray_R3BNeuLandCluster(void *p);
   static void destruct_R3BNeuLandCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuLandCluster*)
   {
      ::R3BNeuLandCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuLandCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuLandCluster", ::R3BNeuLandCluster::Class_Version(), "invalid", 697,
                  typeid(::R3BNeuLandCluster), DefineBehavior(ptr, ptr),
                  &::R3BNeuLandCluster::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeuLandCluster) );
      instance.SetNew(&new_R3BNeuLandCluster);
      instance.SetNewArray(&newArray_R3BNeuLandCluster);
      instance.SetDelete(&delete_R3BNeuLandCluster);
      instance.SetDeleteArray(&deleteArray_R3BNeuLandCluster);
      instance.SetDestructor(&destruct_R3BNeuLandCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuLandCluster*)
   {
      return GenerateInitInstanceLocal((::R3BNeuLandCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeuLandClusterFinder(void *p = 0);
   static void *newArray_R3BNeuLandClusterFinder(Long_t size, void *p);
   static void delete_R3BNeuLandClusterFinder(void *p);
   static void deleteArray_R3BNeuLandClusterFinder(void *p);
   static void destruct_R3BNeuLandClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuLandClusterFinder*)
   {
      ::R3BNeuLandClusterFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuLandClusterFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuLandClusterFinder", ::R3BNeuLandClusterFinder::Class_Version(), "invalid", 761,
                  typeid(::R3BNeuLandClusterFinder), DefineBehavior(ptr, ptr),
                  &::R3BNeuLandClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeuLandClusterFinder) );
      instance.SetNew(&new_R3BNeuLandClusterFinder);
      instance.SetNewArray(&newArray_R3BNeuLandClusterFinder);
      instance.SetDelete(&delete_R3BNeuLandClusterFinder);
      instance.SetDeleteArray(&deleteArray_R3BNeuLandClusterFinder);
      instance.SetDestructor(&destruct_R3BNeuLandClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuLandClusterFinder*)
   {
      return GenerateInitInstanceLocal((::R3BNeuLandClusterFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronCalibr2D(void *p = 0);
   static void *newArray_R3BNeutronCalibr2D(Long_t size, void *p);
   static void delete_R3BNeutronCalibr2D(void *p);
   static void deleteArray_R3BNeutronCalibr2D(void *p);
   static void destruct_R3BNeutronCalibr2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronCalibr2D*)
   {
      ::R3BNeutronCalibr2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronCalibr2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronCalibr2D", ::R3BNeutronCalibr2D::Class_Version(), "invalid", 822,
                  typeid(::R3BNeutronCalibr2D), DefineBehavior(ptr, ptr),
                  &::R3BNeutronCalibr2D::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronCalibr2D) );
      instance.SetNew(&new_R3BNeutronCalibr2D);
      instance.SetNewArray(&newArray_R3BNeutronCalibr2D);
      instance.SetDelete(&delete_R3BNeutronCalibr2D);
      instance.SetDeleteArray(&deleteArray_R3BNeutronCalibr2D);
      instance.SetDestructor(&destruct_R3BNeutronCalibr2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronCalibr2D*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronCalibr2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTracker2D(void *p = 0);
   static void *newArray_R3BNeutronTracker2D(Long_t size, void *p);
   static void delete_R3BNeutronTracker2D(void *p);
   static void deleteArray_R3BNeutronTracker2D(void *p);
   static void destruct_R3BNeutronTracker2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTracker2D*)
   {
      ::R3BNeutronTracker2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTracker2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTracker2D", ::R3BNeutronTracker2D::Class_Version(), "invalid", 935,
                  typeid(::R3BNeutronTracker2D), DefineBehavior(ptr, ptr),
                  &::R3BNeutronTracker2D::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTracker2D) );
      instance.SetNew(&new_R3BNeutronTracker2D);
      instance.SetNewArray(&newArray_R3BNeutronTracker2D);
      instance.SetDelete(&delete_R3BNeutronTracker2D);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTracker2D);
      instance.SetDestructor(&destruct_R3BNeutronTracker2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTracker2D*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTracker2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPrimPart(void *p = 0);
   static void *newArray_R3BPrimPart(Long_t size, void *p);
   static void delete_R3BPrimPart(void *p);
   static void deleteArray_R3BPrimPart(void *p);
   static void destruct_R3BPrimPart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPrimPart*)
   {
      ::R3BPrimPart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPrimPart >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPrimPart", ::R3BPrimPart::Class_Version(), "invalid", 871,
                  typeid(::R3BPrimPart), DefineBehavior(ptr, ptr),
                  &::R3BPrimPart::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPrimPart) );
      instance.SetNew(&new_R3BPrimPart);
      instance.SetNewArray(&newArray_R3BPrimPart);
      instance.SetDelete(&delete_R3BPrimPart);
      instance.SetDeleteArray(&deleteArray_R3BPrimPart);
      instance.SetDestructor(&destruct_R3BPrimPart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPrimPart*)
   {
      return GenerateInitInstanceLocal((::R3BPrimPart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutHit(void *p = 0);
   static void *newArray_R3BNeutHit(Long_t size, void *p);
   static void delete_R3BNeutHit(void *p);
   static void deleteArray_R3BNeutHit(void *p);
   static void destruct_R3BNeutHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutHit*)
   {
      ::R3BNeutHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutHit", ::R3BNeutHit::Class_Version(), "invalid", 1100,
                  typeid(::R3BNeutHit), DefineBehavior(ptr, ptr),
                  &::R3BNeutHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutHit) );
      instance.SetNew(&new_R3BNeutHit);
      instance.SetNewArray(&newArray_R3BNeutHit);
      instance.SetDelete(&delete_R3BNeutHit);
      instance.SetDeleteArray(&deleteArray_R3BNeutHit);
      instance.SetDestructor(&destruct_R3BNeutHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutHit*)
   {
      return GenerateInitInstanceLocal((::R3BNeutHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandRawAna(void *p = 0);
   static void *newArray_R3BLandRawAna(Long_t size, void *p);
   static void delete_R3BLandRawAna(void *p);
   static void deleteArray_R3BLandRawAna(void *p);
   static void destruct_R3BLandRawAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandRawAna*)
   {
      ::R3BLandRawAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandRawAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandRawAna", ::R3BLandRawAna::Class_Version(), "invalid", 1144,
                  typeid(::R3BLandRawAna), DefineBehavior(ptr, ptr),
                  &::R3BLandRawAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandRawAna) );
      instance.SetNew(&new_R3BLandRawAna);
      instance.SetNewArray(&newArray_R3BLandRawAna);
      instance.SetDelete(&delete_R3BLandRawAna);
      instance.SetDeleteArray(&deleteArray_R3BLandRawAna);
      instance.SetDestructor(&destruct_R3BLandRawAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandRawAna*)
   {
      return GenerateInitInstanceLocal((::R3BLandRawAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandRawAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandRawAnaS438b(void *p = 0);
   static void *newArray_R3BLandRawAnaS438b(Long_t size, void *p);
   static void delete_R3BLandRawAnaS438b(void *p);
   static void deleteArray_R3BLandRawAnaS438b(void *p);
   static void destruct_R3BLandRawAnaS438b(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandRawAnaS438b*)
   {
      ::R3BLandRawAnaS438b *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandRawAnaS438b >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandRawAnaS438b", ::R3BLandRawAnaS438b::Class_Version(), "invalid", 1217,
                  typeid(::R3BLandRawAnaS438b), DefineBehavior(ptr, ptr),
                  &::R3BLandRawAnaS438b::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandRawAnaS438b) );
      instance.SetNew(&new_R3BLandRawAnaS438b);
      instance.SetNewArray(&newArray_R3BLandRawAnaS438b);
      instance.SetDelete(&delete_R3BLandRawAnaS438b);
      instance.SetDeleteArray(&deleteArray_R3BLandRawAnaS438b);
      instance.SetDestructor(&destruct_R3BLandRawAnaS438b);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandRawAnaS438b*)
   {
      return GenerateInitInstanceLocal((::R3BLandRawAnaS438b*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandRawAnaS438b*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandMapping(void *p = 0);
   static void *newArray_R3BLandMapping(Long_t size, void *p);
   static void delete_R3BLandMapping(void *p);
   static void deleteArray_R3BLandMapping(void *p);
   static void destruct_R3BLandMapping(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandMapping*)
   {
      ::R3BLandMapping *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandMapping >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandMapping", ::R3BLandMapping::Class_Version(), "invalid", 1272,
                  typeid(::R3BLandMapping), DefineBehavior(ptr, ptr),
                  &::R3BLandMapping::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandMapping) );
      instance.SetNew(&new_R3BLandMapping);
      instance.SetNewArray(&newArray_R3BLandMapping);
      instance.SetDelete(&delete_R3BLandMapping);
      instance.SetDeleteArray(&deleteArray_R3BLandMapping);
      instance.SetDestructor(&destruct_R3BLandMapping);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandMapping*)
   {
      return GenerateInitInstanceLocal((::R3BLandMapping*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandMapping*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandUnpack(void *p = 0);
   static void *newArray_R3BLandUnpack(Long_t size, void *p);
   static void delete_R3BLandUnpack(void *p);
   static void deleteArray_R3BLandUnpack(void *p);
   static void destruct_R3BLandUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandUnpack*)
   {
      ::R3BLandUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandUnpack", ::R3BLandUnpack::Class_Version(), "invalid", 1334,
                  typeid(::R3BLandUnpack), DefineBehavior(ptr, ptr),
                  &::R3BLandUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandUnpack) );
      instance.SetNew(&new_R3BLandUnpack);
      instance.SetNewArray(&newArray_R3BLandUnpack);
      instance.SetDelete(&delete_R3BLandUnpack);
      instance.SetDeleteArray(&deleteArray_R3BLandUnpack);
      instance.SetDestructor(&destruct_R3BLandUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BLandUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTcalFill(void *p = 0);
   static void *newArray_R3BLandTcalFill(Long_t size, void *p);
   static void delete_R3BLandTcalFill(void *p);
   static void deleteArray_R3BLandTcalFill(void *p);
   static void destruct_R3BLandTcalFill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTcalFill*)
   {
      ::R3BLandTcalFill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTcalFill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTcalFill", ::R3BLandTcalFill::Class_Version(), "invalid", 1385,
                  typeid(::R3BLandTcalFill), DefineBehavior(ptr, ptr),
                  &::R3BLandTcalFill::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTcalFill) );
      instance.SetNew(&new_R3BLandTcalFill);
      instance.SetNewArray(&newArray_R3BLandTcalFill);
      instance.SetDelete(&delete_R3BLandTcalFill);
      instance.SetDeleteArray(&deleteArray_R3BLandTcalFill);
      instance.SetDestructor(&destruct_R3BLandTcalFill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTcalFill*)
   {
      return GenerateInitInstanceLocal((::R3BLandTcalFill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTcalFill*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandParamRead(void *p = 0);
   static void *newArray_R3BLandParamRead(Long_t size, void *p);
   static void delete_R3BLandParamRead(void *p);
   static void deleteArray_R3BLandParamRead(void *p);
   static void destruct_R3BLandParamRead(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandParamRead*)
   {
      ::R3BLandParamRead *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandParamRead >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandParamRead", ::R3BLandParamRead::Class_Version(), "invalid", 1510,
                  typeid(::R3BLandParamRead), DefineBehavior(ptr, ptr),
                  &::R3BLandParamRead::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandParamRead) );
      instance.SetNew(&new_R3BLandParamRead);
      instance.SetNewArray(&newArray_R3BLandParamRead);
      instance.SetDelete(&delete_R3BLandParamRead);
      instance.SetDeleteArray(&deleteArray_R3BLandParamRead);
      instance.SetDestructor(&destruct_R3BLandParamRead);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandParamRead*)
   {
      return GenerateInitInstanceLocal((::R3BLandParamRead*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandParamRead*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandPmt(void *p = 0);
   static void *newArray_R3BLandPmt(Long_t size, void *p);
   static void delete_R3BLandPmt(void *p);
   static void deleteArray_R3BLandPmt(void *p);
   static void destruct_R3BLandPmt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandPmt*)
   {
      ::R3BLandPmt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandPmt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandPmt", ::R3BLandPmt::Class_Version(), "invalid", 1551,
                  typeid(::R3BLandPmt), DefineBehavior(ptr, ptr),
                  &::R3BLandPmt::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandPmt) );
      instance.SetNew(&new_R3BLandPmt);
      instance.SetNewArray(&newArray_R3BLandPmt);
      instance.SetDelete(&delete_R3BLandPmt);
      instance.SetDeleteArray(&deleteArray_R3BLandPmt);
      instance.SetDestructor(&destruct_R3BLandPmt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandPmt*)
   {
      return GenerateInitInstanceLocal((::R3BLandPmt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandPmt*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTcal(void *p = 0);
   static void *newArray_R3BLandTcal(Long_t size, void *p);
   static void delete_R3BLandTcal(void *p);
   static void deleteArray_R3BLandTcal(void *p);
   static void destruct_R3BLandTcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTcal*)
   {
      ::R3BLandTcal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTcal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTcal", ::R3BLandTcal::Class_Version(), "invalid", 1613,
                  typeid(::R3BLandTcal), DefineBehavior(ptr, ptr),
                  &::R3BLandTcal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTcal) );
      instance.SetNew(&new_R3BLandTcal);
      instance.SetNewArray(&newArray_R3BLandTcal);
      instance.SetDelete(&delete_R3BLandTcal);
      instance.SetDeleteArray(&deleteArray_R3BLandTcal);
      instance.SetDestructor(&destruct_R3BLandTcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTcal*)
   {
      return GenerateInitInstanceLocal((::R3BLandTcal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTcal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTdiffFill(void *p = 0);
   static void *newArray_R3BLandTdiffFill(Long_t size, void *p);
   static void delete_R3BLandTdiffFill(void *p);
   static void deleteArray_R3BLandTdiffFill(void *p);
   static void destruct_R3BLandTdiffFill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTdiffFill*)
   {
      ::R3BLandTdiffFill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTdiffFill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTdiffFill", ::R3BLandTdiffFill::Class_Version(), "invalid", 1745,
                  typeid(::R3BLandTdiffFill), DefineBehavior(ptr, ptr),
                  &::R3BLandTdiffFill::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTdiffFill) );
      instance.SetNew(&new_R3BLandTdiffFill);
      instance.SetNewArray(&newArray_R3BLandTdiffFill);
      instance.SetDelete(&delete_R3BLandTdiffFill);
      instance.SetDeleteArray(&deleteArray_R3BLandTdiffFill);
      instance.SetDestructor(&destruct_R3BLandTdiffFill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTdiffFill*)
   {
      return GenerateInitInstanceLocal((::R3BLandTdiffFill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTdiffFill*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandAna(void *p = 0);
   static void *newArray_R3BLandAna(Long_t size, void *p);
   static void delete_R3BLandAna(void *p);
   static void deleteArray_R3BLandAna(void *p);
   static void destruct_R3BLandAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandAna*)
   {
      ::R3BLandAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandAna", ::R3BLandAna::Class_Version(), "invalid", 1808,
                  typeid(::R3BLandAna), DefineBehavior(ptr, ptr),
                  &::R3BLandAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandAna) );
      instance.SetNew(&new_R3BLandAna);
      instance.SetNewArray(&newArray_R3BLandAna);
      instance.SetDelete(&delete_R3BLandAna);
      instance.SetDeleteArray(&deleteArray_R3BLandAna);
      instance.SetDestructor(&destruct_R3BLandAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandAna*)
   {
      return GenerateInitInstanceLocal((::R3BLandAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTcalTest(void *p = 0);
   static void *newArray_R3BLandTcalTest(Long_t size, void *p);
   static void delete_R3BLandTcalTest(void *p);
   static void deleteArray_R3BLandTcalTest(void *p);
   static void destruct_R3BLandTcalTest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTcalTest*)
   {
      ::R3BLandTcalTest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTcalTest >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTcalTest", ::R3BLandTcalTest::Class_Version(), "invalid", 1874,
                  typeid(::R3BLandTcalTest), DefineBehavior(ptr, ptr),
                  &::R3BLandTcalTest::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTcalTest) );
      instance.SetNew(&new_R3BLandTcalTest);
      instance.SetNewArray(&newArray_R3BLandTcalTest);
      instance.SetDelete(&delete_R3BLandTcalTest);
      instance.SetDeleteArray(&deleteArray_R3BLandTcalTest);
      instance.SetDestructor(&destruct_R3BLandTcalTest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTcalTest*)
   {
      return GenerateInitInstanceLocal((::R3BLandTcalTest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTcalTest*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTSync(void *p = 0);
   static void *newArray_R3BLandTSync(Long_t size, void *p);
   static void delete_R3BLandTSync(void *p);
   static void deleteArray_R3BLandTSync(void *p);
   static void destruct_R3BLandTSync(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTSync*)
   {
      ::R3BLandTSync *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTSync >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTSync", ::R3BLandTSync::Class_Version(), "invalid", 1925,
                  typeid(::R3BLandTSync), DefineBehavior(ptr, ptr),
                  &::R3BLandTSync::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTSync) );
      instance.SetNew(&new_R3BLandTSync);
      instance.SetNewArray(&newArray_R3BLandTSync);
      instance.SetDelete(&delete_R3BLandTSync);
      instance.SetDeleteArray(&deleteArray_R3BLandTSync);
      instance.SetDestructor(&destruct_R3BLandTSync);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTSync*)
   {
      return GenerateInitInstanceLocal((::R3BLandTSync*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTSync*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandCosmic1(void *p = 0);
   static void *newArray_R3BLandCosmic1(Long_t size, void *p);
   static void delete_R3BLandCosmic1(void *p);
   static void deleteArray_R3BLandCosmic1(void *p);
   static void destruct_R3BLandCosmic1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandCosmic1*)
   {
      ::R3BLandCosmic1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandCosmic1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandCosmic1", ::R3BLandCosmic1::Class_Version(), "invalid", 2067,
                  typeid(::R3BLandCosmic1), DefineBehavior(ptr, ptr),
                  &::R3BLandCosmic1::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandCosmic1) );
      instance.SetNew(&new_R3BLandCosmic1);
      instance.SetNewArray(&newArray_R3BLandCosmic1);
      instance.SetDelete(&delete_R3BLandCosmic1);
      instance.SetDeleteArray(&deleteArray_R3BLandCosmic1);
      instance.SetDestructor(&destruct_R3BLandCosmic1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandCosmic1*)
   {
      return GenerateInitInstanceLocal((::R3BLandCosmic1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandCosmic1*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTSyncContFact(void *p = 0);
   static void *newArray_R3BLandTSyncContFact(Long_t size, void *p);
   static void delete_R3BLandTSyncContFact(void *p);
   static void deleteArray_R3BLandTSyncContFact(void *p);
   static void destruct_R3BLandTSyncContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTSyncContFact*)
   {
      ::R3BLandTSyncContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTSyncContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTSyncContFact", ::R3BLandTSyncContFact::Class_Version(), "invalid", 2781,
                  typeid(::R3BLandTSyncContFact), DefineBehavior(ptr, ptr),
                  &::R3BLandTSyncContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTSyncContFact) );
      instance.SetNew(&new_R3BLandTSyncContFact);
      instance.SetNewArray(&newArray_R3BLandTSyncContFact);
      instance.SetDelete(&delete_R3BLandTSyncContFact);
      instance.SetDeleteArray(&deleteArray_R3BLandTSyncContFact);
      instance.SetDestructor(&destruct_R3BLandTSyncContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTSyncContFact*)
   {
      return GenerateInitInstanceLocal((::R3BLandTSyncContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTSyncContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTSyncPar(void *p = 0);
   static void *newArray_R3BLandTSyncPar(Long_t size, void *p);
   static void delete_R3BLandTSyncPar(void *p);
   static void deleteArray_R3BLandTSyncPar(void *p);
   static void destruct_R3BLandTSyncPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTSyncPar*)
   {
      ::R3BLandTSyncPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTSyncPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTSyncPar", ::R3BLandTSyncPar::Class_Version(), "invalid", 2831,
                  typeid(::R3BLandTSyncPar), DefineBehavior(ptr, ptr),
                  &::R3BLandTSyncPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTSyncPar) );
      instance.SetNew(&new_R3BLandTSyncPar);
      instance.SetNewArray(&newArray_R3BLandTSyncPar);
      instance.SetDelete(&delete_R3BLandTSyncPar);
      instance.SetDeleteArray(&deleteArray_R3BLandTSyncPar);
      instance.SetDestructor(&destruct_R3BLandTSyncPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTSyncPar*)
   {
      return GenerateInitInstanceLocal((::R3BLandTSyncPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTSyncPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandTSyncModulePar(void *p = 0);
   static void *newArray_R3BLandTSyncModulePar(Long_t size, void *p);
   static void delete_R3BLandTSyncModulePar(void *p);
   static void deleteArray_R3BLandTSyncModulePar(void *p);
   static void destruct_R3BLandTSyncModulePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandTSyncModulePar*)
   {
      ::R3BLandTSyncModulePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandTSyncModulePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandTSyncModulePar", ::R3BLandTSyncModulePar::Class_Version(), "R3BLandTSyncModulePar.h", 11,
                  typeid(::R3BLandTSyncModulePar), DefineBehavior(ptr, ptr),
                  &::R3BLandTSyncModulePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandTSyncModulePar) );
      instance.SetNew(&new_R3BLandTSyncModulePar);
      instance.SetNewArray(&newArray_R3BLandTSyncModulePar);
      instance.SetDelete(&delete_R3BLandTSyncModulePar);
      instance.SetDeleteArray(&deleteArray_R3BLandTSyncModulePar);
      instance.SetDestructor(&destruct_R3BLandTSyncModulePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandTSyncModulePar*)
   {
      return GenerateInitInstanceLocal((::R3BLandTSyncModulePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandTSyncModulePar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoLand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoLand::Class_Name()
{
   return "R3BGeoLand";
}

//______________________________________________________________________________
const char *R3BGeoLand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoLand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoLand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoLand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoLandPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoLandPar::Class_Name()
{
   return "R3BGeoLandPar";
}

//______________________________________________________________________________
const char *R3BGeoLandPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoLandPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoLandPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoLandPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLand::Class_Name()
{
   return "R3BLand";
}

//______________________________________________________________________________
const char *R3BLand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigitizer::Class_Name()
{
   return "R3BLandDigitizer";
}

//______________________________________________________________________________
const char *R3BLandDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigitizerQA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigitizerQA::Class_Name()
{
   return "R3BLandDigitizerQA";
}

//______________________________________________________________________________
const char *R3BLandDigitizerQA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigitizerQA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigitizerQA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigitizerQA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigiPar::Class_Name()
{
   return "R3BLandDigiPar";
}

//______________________________________________________________________________
const char *R3BLandDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTracker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTracker::Class_Name()
{
   return "R3BNeutronTracker";
}

//______________________________________________________________________________
const char *R3BNeutronTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandContFact::Class_Name()
{
   return "R3BLandContFact";
}

//______________________________________________________________________________
const char *R3BLandContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuLandCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuLandCluster::Class_Name()
{
   return "R3BNeuLandCluster";
}

//______________________________________________________________________________
const char *R3BNeuLandCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuLandCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuLandCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuLandCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuLandClusterFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuLandClusterFinder::Class_Name()
{
   return "R3BNeuLandClusterFinder";
}

//______________________________________________________________________________
const char *R3BNeuLandClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuLandClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuLandClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuLandClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronCalibr2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronCalibr2D::Class_Name()
{
   return "R3BNeutronCalibr2D";
}

//______________________________________________________________________________
const char *R3BNeutronCalibr2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronCalibr2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronCalibr2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronCalibr2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTracker2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTracker2D::Class_Name()
{
   return "R3BNeutronTracker2D";
}

//______________________________________________________________________________
const char *R3BNeutronTracker2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTracker2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTracker2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTracker2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPrimPart::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPrimPart::Class_Name()
{
   return "R3BPrimPart";
}

//______________________________________________________________________________
const char *R3BPrimPart::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPrimPart::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPrimPart::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPrimPart::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutHit::Class_Name()
{
   return "R3BNeutHit";
}

//______________________________________________________________________________
const char *R3BNeutHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandRawAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandRawAna::Class_Name()
{
   return "R3BLandRawAna";
}

//______________________________________________________________________________
const char *R3BLandRawAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandRawAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandRawAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandRawAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandRawAnaS438b::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandRawAnaS438b::Class_Name()
{
   return "R3BLandRawAnaS438b";
}

//______________________________________________________________________________
const char *R3BLandRawAnaS438b::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAnaS438b*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandRawAnaS438b::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAnaS438b*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandRawAnaS438b::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAnaS438b*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandRawAnaS438b::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandRawAnaS438b*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandMapping::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandMapping::Class_Name()
{
   return "R3BLandMapping";
}

//______________________________________________________________________________
const char *R3BLandMapping::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandMapping*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandMapping::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandMapping*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandMapping::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandMapping*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandMapping::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandMapping*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandUnpack::Class_Name()
{
   return "R3BLandUnpack";
}

//______________________________________________________________________________
const char *R3BLandUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTcalFill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTcalFill::Class_Name()
{
   return "R3BLandTcalFill";
}

//______________________________________________________________________________
const char *R3BLandTcalFill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalFill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTcalFill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalFill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTcalFill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalFill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTcalFill::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalFill*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandParamRead::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandParamRead::Class_Name()
{
   return "R3BLandParamRead";
}

//______________________________________________________________________________
const char *R3BLandParamRead::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandParamRead*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandParamRead::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandParamRead*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandParamRead::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandParamRead*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandParamRead::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandParamRead*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandPmt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandPmt::Class_Name()
{
   return "R3BLandPmt";
}

//______________________________________________________________________________
const char *R3BLandPmt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPmt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandPmt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPmt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandPmt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPmt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandPmt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPmt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTcal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTcal::Class_Name()
{
   return "R3BLandTcal";
}

//______________________________________________________________________________
const char *R3BLandTcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTdiffFill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTdiffFill::Class_Name()
{
   return "R3BLandTdiffFill";
}

//______________________________________________________________________________
const char *R3BLandTdiffFill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTdiffFill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTdiffFill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTdiffFill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTdiffFill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTdiffFill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTdiffFill::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTdiffFill*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandAna::Class_Name()
{
   return "R3BLandAna";
}

//______________________________________________________________________________
const char *R3BLandAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTcalTest::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTcalTest::Class_Name()
{
   return "R3BLandTcalTest";
}

//______________________________________________________________________________
const char *R3BLandTcalTest::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalTest*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTcalTest::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalTest*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTcalTest::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalTest*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTcalTest::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTcalTest*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTSync::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTSync::Class_Name()
{
   return "R3BLandTSync";
}

//______________________________________________________________________________
const char *R3BLandTSync::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSync*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTSync::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSync*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTSync::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSync*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTSync::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSync*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandCosmic1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandCosmic1::Class_Name()
{
   return "R3BLandCosmic1";
}

//______________________________________________________________________________
const char *R3BLandCosmic1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandCosmic1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandCosmic1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandCosmic1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandCosmic1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandCosmic1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandCosmic1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandCosmic1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTSyncContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTSyncContFact::Class_Name()
{
   return "R3BLandTSyncContFact";
}

//______________________________________________________________________________
const char *R3BLandTSyncContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTSyncContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTSyncContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTSyncContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTSyncPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTSyncPar::Class_Name()
{
   return "R3BLandTSyncPar";
}

//______________________________________________________________________________
const char *R3BLandTSyncPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTSyncPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTSyncPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTSyncPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandTSyncModulePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandTSyncModulePar::Class_Name()
{
   return "R3BLandTSyncModulePar";
}

//______________________________________________________________________________
const char *R3BLandTSyncModulePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncModulePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandTSyncModulePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncModulePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandTSyncModulePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncModulePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandTSyncModulePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandTSyncModulePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoLand::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoLand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoLand::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoLand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoLand(void *p) {
      return  p ? new(p) ::R3BGeoLand : new ::R3BGeoLand;
   }
   static void *newArray_R3BGeoLand(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoLand[nElements] : new ::R3BGeoLand[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoLand(void *p) {
      delete ((::R3BGeoLand*)p);
   }
   static void deleteArray_R3BGeoLand(void *p) {
      delete [] ((::R3BGeoLand*)p);
   }
   static void destruct_R3BGeoLand(void *p) {
      typedef ::R3BGeoLand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoLand

//______________________________________________________________________________
void R3BGeoLandPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoLandPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoLandPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoLandPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoLandPar(void *p) {
      return  p ? new(p) ::R3BGeoLandPar : new ::R3BGeoLandPar;
   }
   static void *newArray_R3BGeoLandPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoLandPar[nElements] : new ::R3BGeoLandPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoLandPar(void *p) {
      delete ((::R3BGeoLandPar*)p);
   }
   static void deleteArray_R3BGeoLandPar(void *p) {
      delete [] ((::R3BGeoLandPar*)p);
   }
   static void destruct_R3BGeoLandPar(void *p) {
      typedef ::R3BGeoLandPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoLandPar(TBuffer &buf, void *obj) {
      ((::R3BGeoLandPar*)obj)->::R3BGeoLandPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoLandPar

//______________________________________________________________________________
void R3BLand::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLand::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLand(void *p) {
      return  p ? new(p) ::R3BLand : new ::R3BLand;
   }
   static void *newArray_R3BLand(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLand[nElements] : new ::R3BLand[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLand(void *p) {
      delete ((::R3BLand*)p);
   }
   static void deleteArray_R3BLand(void *p) {
      delete [] ((::R3BLand*)p);
   }
   static void destruct_R3BLand(void *p) {
      typedef ::R3BLand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLand

//______________________________________________________________________________
void R3BLandDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigitizer(void *p) {
      return  p ? new(p) ::R3BLandDigitizer : new ::R3BLandDigitizer;
   }
   static void *newArray_R3BLandDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigitizer[nElements] : new ::R3BLandDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigitizer(void *p) {
      delete ((::R3BLandDigitizer*)p);
   }
   static void deleteArray_R3BLandDigitizer(void *p) {
      delete [] ((::R3BLandDigitizer*)p);
   }
   static void destruct_R3BLandDigitizer(void *p) {
      typedef ::R3BLandDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigitizer

//______________________________________________________________________________
void R3BLandDigitizerQA::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigitizerQA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigitizerQA::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigitizerQA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigitizerQA(void *p) {
      return  p ? new(p) ::R3BLandDigitizerQA : new ::R3BLandDigitizerQA;
   }
   static void *newArray_R3BLandDigitizerQA(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigitizerQA[nElements] : new ::R3BLandDigitizerQA[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigitizerQA(void *p) {
      delete ((::R3BLandDigitizerQA*)p);
   }
   static void deleteArray_R3BLandDigitizerQA(void *p) {
      delete [] ((::R3BLandDigitizerQA*)p);
   }
   static void destruct_R3BLandDigitizerQA(void *p) {
      typedef ::R3BLandDigitizerQA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigitizerQA

//______________________________________________________________________________
void R3BLandDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigiPar(void *p) {
      return  p ? new(p) ::R3BLandDigiPar : new ::R3BLandDigiPar;
   }
   static void *newArray_R3BLandDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigiPar[nElements] : new ::R3BLandDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigiPar(void *p) {
      delete ((::R3BLandDigiPar*)p);
   }
   static void deleteArray_R3BLandDigiPar(void *p) {
      delete [] ((::R3BLandDigiPar*)p);
   }
   static void destruct_R3BLandDigiPar(void *p) {
      typedef ::R3BLandDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigiPar

//______________________________________________________________________________
void R3BNeutronTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTracker(void *p) {
      return  p ? new(p) ::R3BNeutronTracker : new ::R3BNeutronTracker;
   }
   static void *newArray_R3BNeutronTracker(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTracker[nElements] : new ::R3BNeutronTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTracker(void *p) {
      delete ((::R3BNeutronTracker*)p);
   }
   static void deleteArray_R3BNeutronTracker(void *p) {
      delete [] ((::R3BNeutronTracker*)p);
   }
   static void destruct_R3BNeutronTracker(void *p) {
      typedef ::R3BNeutronTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTracker

//______________________________________________________________________________
void R3BLandContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandContFact(void *p) {
      return  p ? new(p) ::R3BLandContFact : new ::R3BLandContFact;
   }
   static void *newArray_R3BLandContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandContFact[nElements] : new ::R3BLandContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandContFact(void *p) {
      delete ((::R3BLandContFact*)p);
   }
   static void deleteArray_R3BLandContFact(void *p) {
      delete [] ((::R3BLandContFact*)p);
   }
   static void destruct_R3BLandContFact(void *p) {
      typedef ::R3BLandContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BLandContFact(TBuffer &buf, void *obj) {
      ((::R3BLandContFact*)obj)->::R3BLandContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BLandContFact

//______________________________________________________________________________
void R3BNeuLandCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuLandCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeuLandCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeuLandCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuLandCluster(void *p) {
      return  p ? new(p) ::R3BNeuLandCluster : new ::R3BNeuLandCluster;
   }
   static void *newArray_R3BNeuLandCluster(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuLandCluster[nElements] : new ::R3BNeuLandCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuLandCluster(void *p) {
      delete ((::R3BNeuLandCluster*)p);
   }
   static void deleteArray_R3BNeuLandCluster(void *p) {
      delete [] ((::R3BNeuLandCluster*)p);
   }
   static void destruct_R3BNeuLandCluster(void *p) {
      typedef ::R3BNeuLandCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeuLandCluster

//______________________________________________________________________________
void R3BNeuLandClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuLandClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeuLandClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeuLandClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuLandClusterFinder(void *p) {
      return  p ? new(p) ::R3BNeuLandClusterFinder : new ::R3BNeuLandClusterFinder;
   }
   static void *newArray_R3BNeuLandClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuLandClusterFinder[nElements] : new ::R3BNeuLandClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuLandClusterFinder(void *p) {
      delete ((::R3BNeuLandClusterFinder*)p);
   }
   static void deleteArray_R3BNeuLandClusterFinder(void *p) {
      delete [] ((::R3BNeuLandClusterFinder*)p);
   }
   static void destruct_R3BNeuLandClusterFinder(void *p) {
      typedef ::R3BNeuLandClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeuLandClusterFinder

//______________________________________________________________________________
void R3BNeutronCalibr2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronCalibr2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronCalibr2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronCalibr2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronCalibr2D(void *p) {
      return  p ? new(p) ::R3BNeutronCalibr2D : new ::R3BNeutronCalibr2D;
   }
   static void *newArray_R3BNeutronCalibr2D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronCalibr2D[nElements] : new ::R3BNeutronCalibr2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronCalibr2D(void *p) {
      delete ((::R3BNeutronCalibr2D*)p);
   }
   static void deleteArray_R3BNeutronCalibr2D(void *p) {
      delete [] ((::R3BNeutronCalibr2D*)p);
   }
   static void destruct_R3BNeutronCalibr2D(void *p) {
      typedef ::R3BNeutronCalibr2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronCalibr2D

//______________________________________________________________________________
void R3BNeutronTracker2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTracker2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTracker2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTracker2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTracker2D(void *p) {
      return  p ? new(p) ::R3BNeutronTracker2D : new ::R3BNeutronTracker2D;
   }
   static void *newArray_R3BNeutronTracker2D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTracker2D[nElements] : new ::R3BNeutronTracker2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTracker2D(void *p) {
      delete ((::R3BNeutronTracker2D*)p);
   }
   static void deleteArray_R3BNeutronTracker2D(void *p) {
      delete [] ((::R3BNeutronTracker2D*)p);
   }
   static void destruct_R3BNeutronTracker2D(void *p) {
      typedef ::R3BNeutronTracker2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTracker2D

//______________________________________________________________________________
void R3BPrimPart::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPrimPart.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPrimPart::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPrimPart::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPrimPart(void *p) {
      return  p ? new(p) ::R3BPrimPart : new ::R3BPrimPart;
   }
   static void *newArray_R3BPrimPart(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPrimPart[nElements] : new ::R3BPrimPart[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPrimPart(void *p) {
      delete ((::R3BPrimPart*)p);
   }
   static void deleteArray_R3BPrimPart(void *p) {
      delete [] ((::R3BPrimPart*)p);
   }
   static void destruct_R3BPrimPart(void *p) {
      typedef ::R3BPrimPart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPrimPart

//______________________________________________________________________________
void R3BNeutHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutHit(void *p) {
      return  p ? new(p) ::R3BNeutHit : new ::R3BNeutHit;
   }
   static void *newArray_R3BNeutHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutHit[nElements] : new ::R3BNeutHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutHit(void *p) {
      delete ((::R3BNeutHit*)p);
   }
   static void deleteArray_R3BNeutHit(void *p) {
      delete [] ((::R3BNeutHit*)p);
   }
   static void destruct_R3BNeutHit(void *p) {
      typedef ::R3BNeutHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutHit

//______________________________________________________________________________
void R3BLandRawAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandRawAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandRawAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandRawAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandRawAna(void *p) {
      return  p ? new(p) ::R3BLandRawAna : new ::R3BLandRawAna;
   }
   static void *newArray_R3BLandRawAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandRawAna[nElements] : new ::R3BLandRawAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandRawAna(void *p) {
      delete ((::R3BLandRawAna*)p);
   }
   static void deleteArray_R3BLandRawAna(void *p) {
      delete [] ((::R3BLandRawAna*)p);
   }
   static void destruct_R3BLandRawAna(void *p) {
      typedef ::R3BLandRawAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandRawAna

//______________________________________________________________________________
void R3BLandRawAnaS438b::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandRawAnaS438b.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandRawAnaS438b::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandRawAnaS438b::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandRawAnaS438b(void *p) {
      return  p ? new(p) ::R3BLandRawAnaS438b : new ::R3BLandRawAnaS438b;
   }
   static void *newArray_R3BLandRawAnaS438b(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandRawAnaS438b[nElements] : new ::R3BLandRawAnaS438b[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandRawAnaS438b(void *p) {
      delete ((::R3BLandRawAnaS438b*)p);
   }
   static void deleteArray_R3BLandRawAnaS438b(void *p) {
      delete [] ((::R3BLandRawAnaS438b*)p);
   }
   static void destruct_R3BLandRawAnaS438b(void *p) {
      typedef ::R3BLandRawAnaS438b current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandRawAnaS438b

//______________________________________________________________________________
void R3BLandMapping::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandMapping.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandMapping::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandMapping::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandMapping(void *p) {
      return  p ? new(p) ::R3BLandMapping : new ::R3BLandMapping;
   }
   static void *newArray_R3BLandMapping(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandMapping[nElements] : new ::R3BLandMapping[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandMapping(void *p) {
      delete ((::R3BLandMapping*)p);
   }
   static void deleteArray_R3BLandMapping(void *p) {
      delete [] ((::R3BLandMapping*)p);
   }
   static void destruct_R3BLandMapping(void *p) {
      typedef ::R3BLandMapping current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandMapping

//______________________________________________________________________________
void R3BLandUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandUnpack(void *p) {
      return  p ? new(p) ::R3BLandUnpack : new ::R3BLandUnpack;
   }
   static void *newArray_R3BLandUnpack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandUnpack[nElements] : new ::R3BLandUnpack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandUnpack(void *p) {
      delete ((::R3BLandUnpack*)p);
   }
   static void deleteArray_R3BLandUnpack(void *p) {
      delete [] ((::R3BLandUnpack*)p);
   }
   static void destruct_R3BLandUnpack(void *p) {
      typedef ::R3BLandUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandUnpack

//______________________________________________________________________________
void R3BLandTcalFill::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTcalFill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTcalFill::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTcalFill::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTcalFill(void *p) {
      return  p ? new(p) ::R3BLandTcalFill : new ::R3BLandTcalFill;
   }
   static void *newArray_R3BLandTcalFill(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTcalFill[nElements] : new ::R3BLandTcalFill[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTcalFill(void *p) {
      delete ((::R3BLandTcalFill*)p);
   }
   static void deleteArray_R3BLandTcalFill(void *p) {
      delete [] ((::R3BLandTcalFill*)p);
   }
   static void destruct_R3BLandTcalFill(void *p) {
      typedef ::R3BLandTcalFill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTcalFill

//______________________________________________________________________________
void R3BLandParamRead::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandParamRead.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandParamRead::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandParamRead::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandParamRead(void *p) {
      return  p ? new(p) ::R3BLandParamRead : new ::R3BLandParamRead;
   }
   static void *newArray_R3BLandParamRead(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandParamRead[nElements] : new ::R3BLandParamRead[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandParamRead(void *p) {
      delete ((::R3BLandParamRead*)p);
   }
   static void deleteArray_R3BLandParamRead(void *p) {
      delete [] ((::R3BLandParamRead*)p);
   }
   static void destruct_R3BLandParamRead(void *p) {
      typedef ::R3BLandParamRead current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandParamRead

//______________________________________________________________________________
void R3BLandPmt::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandPmt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandPmt::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandPmt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandPmt(void *p) {
      return  p ? new(p) ::R3BLandPmt : new ::R3BLandPmt;
   }
   static void *newArray_R3BLandPmt(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandPmt[nElements] : new ::R3BLandPmt[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandPmt(void *p) {
      delete ((::R3BLandPmt*)p);
   }
   static void deleteArray_R3BLandPmt(void *p) {
      delete [] ((::R3BLandPmt*)p);
   }
   static void destruct_R3BLandPmt(void *p) {
      typedef ::R3BLandPmt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandPmt

//______________________________________________________________________________
void R3BLandTcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTcal(void *p) {
      return  p ? new(p) ::R3BLandTcal : new ::R3BLandTcal;
   }
   static void *newArray_R3BLandTcal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTcal[nElements] : new ::R3BLandTcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTcal(void *p) {
      delete ((::R3BLandTcal*)p);
   }
   static void deleteArray_R3BLandTcal(void *p) {
      delete [] ((::R3BLandTcal*)p);
   }
   static void destruct_R3BLandTcal(void *p) {
      typedef ::R3BLandTcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTcal

//______________________________________________________________________________
void R3BLandTdiffFill::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTdiffFill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTdiffFill::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTdiffFill::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTdiffFill(void *p) {
      return  p ? new(p) ::R3BLandTdiffFill : new ::R3BLandTdiffFill;
   }
   static void *newArray_R3BLandTdiffFill(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTdiffFill[nElements] : new ::R3BLandTdiffFill[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTdiffFill(void *p) {
      delete ((::R3BLandTdiffFill*)p);
   }
   static void deleteArray_R3BLandTdiffFill(void *p) {
      delete [] ((::R3BLandTdiffFill*)p);
   }
   static void destruct_R3BLandTdiffFill(void *p) {
      typedef ::R3BLandTdiffFill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTdiffFill

//______________________________________________________________________________
void R3BLandAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandAna(void *p) {
      return  p ? new(p) ::R3BLandAna : new ::R3BLandAna;
   }
   static void *newArray_R3BLandAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandAna[nElements] : new ::R3BLandAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandAna(void *p) {
      delete ((::R3BLandAna*)p);
   }
   static void deleteArray_R3BLandAna(void *p) {
      delete [] ((::R3BLandAna*)p);
   }
   static void destruct_R3BLandAna(void *p) {
      typedef ::R3BLandAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandAna

//______________________________________________________________________________
void R3BLandTcalTest::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTcalTest.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTcalTest::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTcalTest::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTcalTest(void *p) {
      return  p ? new(p) ::R3BLandTcalTest : new ::R3BLandTcalTest;
   }
   static void *newArray_R3BLandTcalTest(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTcalTest[nElements] : new ::R3BLandTcalTest[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTcalTest(void *p) {
      delete ((::R3BLandTcalTest*)p);
   }
   static void deleteArray_R3BLandTcalTest(void *p) {
      delete [] ((::R3BLandTcalTest*)p);
   }
   static void destruct_R3BLandTcalTest(void *p) {
      typedef ::R3BLandTcalTest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTcalTest

//______________________________________________________________________________
void R3BLandTSync::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTSync.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTSync::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTSync::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTSync(void *p) {
      return  p ? new(p) ::R3BLandTSync : new ::R3BLandTSync;
   }
   static void *newArray_R3BLandTSync(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTSync[nElements] : new ::R3BLandTSync[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTSync(void *p) {
      delete ((::R3BLandTSync*)p);
   }
   static void deleteArray_R3BLandTSync(void *p) {
      delete [] ((::R3BLandTSync*)p);
   }
   static void destruct_R3BLandTSync(void *p) {
      typedef ::R3BLandTSync current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTSync

//______________________________________________________________________________
void R3BLandCosmic1::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandCosmic1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandCosmic1::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandCosmic1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandCosmic1(void *p) {
      return  p ? new(p) ::R3BLandCosmic1 : new ::R3BLandCosmic1;
   }
   static void *newArray_R3BLandCosmic1(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandCosmic1[nElements] : new ::R3BLandCosmic1[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandCosmic1(void *p) {
      delete ((::R3BLandCosmic1*)p);
   }
   static void deleteArray_R3BLandCosmic1(void *p) {
      delete [] ((::R3BLandCosmic1*)p);
   }
   static void destruct_R3BLandCosmic1(void *p) {
      typedef ::R3BLandCosmic1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandCosmic1

//______________________________________________________________________________
void R3BLandTSyncContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTSyncContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTSyncContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTSyncContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTSyncContFact(void *p) {
      return  p ? new(p) ::R3BLandTSyncContFact : new ::R3BLandTSyncContFact;
   }
   static void *newArray_R3BLandTSyncContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTSyncContFact[nElements] : new ::R3BLandTSyncContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTSyncContFact(void *p) {
      delete ((::R3BLandTSyncContFact*)p);
   }
   static void deleteArray_R3BLandTSyncContFact(void *p) {
      delete [] ((::R3BLandTSyncContFact*)p);
   }
   static void destruct_R3BLandTSyncContFact(void *p) {
      typedef ::R3BLandTSyncContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTSyncContFact

//______________________________________________________________________________
void R3BLandTSyncPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTSyncPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTSyncPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTSyncPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTSyncPar(void *p) {
      return  p ? new(p) ::R3BLandTSyncPar : new ::R3BLandTSyncPar;
   }
   static void *newArray_R3BLandTSyncPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTSyncPar[nElements] : new ::R3BLandTSyncPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTSyncPar(void *p) {
      delete ((::R3BLandTSyncPar*)p);
   }
   static void deleteArray_R3BLandTSyncPar(void *p) {
      delete [] ((::R3BLandTSyncPar*)p);
   }
   static void destruct_R3BLandTSyncPar(void *p) {
      typedef ::R3BLandTSyncPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTSyncPar

//______________________________________________________________________________
void R3BLandTSyncModulePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandTSyncModulePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandTSyncModulePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandTSyncModulePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandTSyncModulePar(void *p) {
      return  p ? new(p) ::R3BLandTSyncModulePar : new ::R3BLandTSyncModulePar;
   }
   static void *newArray_R3BLandTSyncModulePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandTSyncModulePar[nElements] : new ::R3BLandTSyncModulePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandTSyncModulePar(void *p) {
      delete ((::R3BLandTSyncModulePar*)p);
   }
   static void deleteArray_R3BLandTSyncModulePar(void *p) {
      delete [] ((::R3BLandTSyncModulePar*)p);
   }
   static void destruct_R3BLandTSyncModulePar(void *p) {
      typedef ::R3BLandTSyncModulePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandTSyncModulePar

namespace ROOT {
   static TClass *vectorlER3BNeuLandClustermUgR_Dictionary();
   static void vectorlER3BNeuLandClustermUgR_TClassManip(TClass*);
   static void *new_vectorlER3BNeuLandClustermUgR(void *p = 0);
   static void *newArray_vectorlER3BNeuLandClustermUgR(Long_t size, void *p);
   static void delete_vectorlER3BNeuLandClustermUgR(void *p);
   static void deleteArray_vectorlER3BNeuLandClustermUgR(void *p);
   static void destruct_vectorlER3BNeuLandClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BNeuLandCluster*>*)
   {
      vector<R3BNeuLandCluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BNeuLandCluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BNeuLandCluster*>", -2, "vector", 210,
                  typeid(vector<R3BNeuLandCluster*>), DefineBehavior(ptr, ptr),
                  &vectorlER3BNeuLandClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BNeuLandCluster*>) );
      instance.SetNew(&new_vectorlER3BNeuLandClustermUgR);
      instance.SetNewArray(&newArray_vectorlER3BNeuLandClustermUgR);
      instance.SetDelete(&delete_vectorlER3BNeuLandClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BNeuLandClustermUgR);
      instance.SetDestructor(&destruct_vectorlER3BNeuLandClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BNeuLandCluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<R3BNeuLandCluster*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BNeuLandClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BNeuLandCluster*>*)0x0)->GetClass();
      vectorlER3BNeuLandClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BNeuLandClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BNeuLandClustermUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<R3BNeuLandCluster*> : new vector<R3BNeuLandCluster*>;
   }
   static void *newArray_vectorlER3BNeuLandClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<R3BNeuLandCluster*>[nElements] : new vector<R3BNeuLandCluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BNeuLandClustermUgR(void *p) {
      delete ((vector<R3BNeuLandCluster*>*)p);
   }
   static void deleteArray_vectorlER3BNeuLandClustermUgR(void *p) {
      delete [] ((vector<R3BNeuLandCluster*>*)p);
   }
   static void destruct_vectorlER3BNeuLandClustermUgR(void *p) {
      typedef vector<R3BNeuLandCluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BNeuLandCluster*>

namespace ROOT {
   static TClass *vectorlER3BLandDigimUgR_Dictionary();
   static void vectorlER3BLandDigimUgR_TClassManip(TClass*);
   static void *new_vectorlER3BLandDigimUgR(void *p = 0);
   static void *newArray_vectorlER3BLandDigimUgR(Long_t size, void *p);
   static void delete_vectorlER3BLandDigimUgR(void *p);
   static void deleteArray_vectorlER3BLandDigimUgR(void *p);
   static void destruct_vectorlER3BLandDigimUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BLandDigi*>*)
   {
      vector<R3BLandDigi*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BLandDigi*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BLandDigi*>", -2, "vector", 210,
                  typeid(vector<R3BLandDigi*>), DefineBehavior(ptr, ptr),
                  &vectorlER3BLandDigimUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BLandDigi*>) );
      instance.SetNew(&new_vectorlER3BLandDigimUgR);
      instance.SetNewArray(&newArray_vectorlER3BLandDigimUgR);
      instance.SetDelete(&delete_vectorlER3BLandDigimUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BLandDigimUgR);
      instance.SetDestructor(&destruct_vectorlER3BLandDigimUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BLandDigi*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<R3BLandDigi*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BLandDigimUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BLandDigi*>*)0x0)->GetClass();
      vectorlER3BLandDigimUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BLandDigimUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BLandDigimUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<R3BLandDigi*> : new vector<R3BLandDigi*>;
   }
   static void *newArray_vectorlER3BLandDigimUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<R3BLandDigi*>[nElements] : new vector<R3BLandDigi*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BLandDigimUgR(void *p) {
      delete ((vector<R3BLandDigi*>*)p);
   }
   static void deleteArray_vectorlER3BLandDigimUgR(void *p) {
      delete [] ((vector<R3BLandDigi*>*)p);
   }
   static void destruct_vectorlER3BLandDigimUgR(void *p) {
      typedef vector<R3BLandDigi*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BLandDigi*>

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

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 96,
                  typeid(map<int,double>), DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOboolgR_Dictionary();
   static void maplEintcOboolgR_TClassManip(TClass*);
   static void *new_maplEintcOboolgR(void *p = 0);
   static void *newArray_maplEintcOboolgR(Long_t size, void *p);
   static void delete_maplEintcOboolgR(void *p);
   static void deleteArray_maplEintcOboolgR(void *p);
   static void destruct_maplEintcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,bool>*)
   {
      map<int,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,bool>", -2, "map", 96,
                  typeid(map<int,bool>), DefineBehavior(ptr, ptr),
                  &maplEintcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,bool>) );
      instance.SetNew(&new_maplEintcOboolgR);
      instance.SetNewArray(&newArray_maplEintcOboolgR);
      instance.SetDelete(&delete_maplEintcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOboolgR);
      instance.SetDestructor(&destruct_maplEintcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,bool>*)0x0)->GetClass();
      maplEintcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOboolgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,bool> : new map<int,bool>;
   }
   static void *newArray_maplEintcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,bool>[nElements] : new map<int,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOboolgR(void *p) {
      delete ((map<int,bool>*)p);
   }
   static void deleteArray_maplEintcOboolgR(void *p) {
      delete [] ((map<int,bool>*)p);
   }
   static void destruct_maplEintcOboolgR(void *p) {
      typedef map<int,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,bool>

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
  void TriggerDictionaryInitialization_G__R3BLandDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/land/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/los",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/los/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/neulandData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/trackerData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdb/landdb",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/tcal",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/land/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoLand;
class R3BGeoLandPar;
class R3BLand;
class R3BLandDigitizer;
class R3BLandDigitizerQA;
class __attribute__((annotate("$clingAutoload$R3BLandDigiPar.h")))  R3BLandDigiPar;
class R3BNeutronTracker;
class __attribute__((annotate(R"ATTRDUMP(Factory for all LAND parameter containers)ATTRDUMP"))) R3BLandContFact;
class R3BNeuLandCluster;
class R3BNeuLandClusterFinder;
class R3BNeutronCalibr2D;
class R3BNeutronTracker2D;
class R3BPrimPart;
class R3BNeutHit;
class R3BLandRawAna;
class R3BLandRawAnaS438b;
class R3BLandMapping;
class R3BLandUnpack;
class R3BLandTcalFill;
class R3BLandParamRead;
class R3BLandPmt;
class R3BLandTcal;
class R3BLandTdiffFill;
class R3BLandAna;
class R3BLandTcalTest;
class R3BLandTSync;
class R3BLandCosmic1;
class R3BLandTSyncContFact;
class R3BLandTSyncPar;
class __attribute__((annotate("$clingAutoload$R3BLandTSyncModulePar.h")))  R3BLandTSyncModulePar;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BLand header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BLand.h
 **/


#ifndef R3BLAND_H
#define R3BLAND_H

#include "R3BDetector.h"
#include "TLorentzVector.h"
#include "TGeoMedium.h"
#include <string>
#include <iostream>
#include <map>
#include "R3BLandFirstHits.h"

using namespace std;

class TClonesArray;
class R3BLandPoint;
class FairVolume;



class R3BLand : public R3BDetector
{
public:
  /** Default constructor **/
  R3BLand();
  
  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  R3BLand(const char* name, Bool_t active);
  
  /** Destructor **/
  virtual ~R3BLand();
  
  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a R3BLandPoint and adds it to the
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
  
  virtual void FinishEvent();
  
  /** Virtual method Register
   **
   ** Registers the hit collection in the ROOT manager.
   **/
  virtual void Register();
  
  virtual void FinishRun();
  
  /** Accessor to the hit collection **/
  virtual TClonesArray* GetCollection(Int_t iColl) const;
  
  /** Virtual method Print
   **
   ** Screen output of hit collection.
   **/
  virtual void Print(Option_t *option = "") const;
  
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
  
  /** Virtaul method Construct geometry
   **
   ** Constructs the STS geometry
   **/
  virtual void ConstructGeometry();
  
  virtual void Initialize();
  
  virtual void SetSpecialPhysicsCuts() {}
  
  virtual Bool_t CheckIfSensitive(std::string name);
  
  
private:
  /** Track information to be stored until the track leaves the
   active volume. **/
  Int_t          fTrackID;           //!  track index
  Int_t          fVolumeID;          //!  volume id
  Int_t          fCopyNo;            //!  copy no
  Int_t          fPaddleTyp;         //!  box number
  TLorentzVector fPosIn, fPosOut;    //!  position
  TLorentzVector fMomIn, fMomOut;    //!  momentum
  Double32_t     fTime;              //!  time
  Double32_t     fLength;            //!  length
  Double32_t     fELoss;             //!  energy loss
  Double32_t     fLightYield;        //!  light yield
  
  Int_t          fPosIndex;          //!
  TClonesArray*  fLandCollection;    //!  The hit collection
  TClonesArray*  fLandFirstHits;     //!  First Hits
  Bool_t         kGeoSaved;          //!
  TList *flGeoPar;                   //!
  Double_t fBirkC0,fBirkC1,fBirkC2;  //!
  
  Int_t          fMotherID;          //!  Mother ID
  Int_t          fNprim;             //!  Number of primaries
  
  Double_t firstHitX[6];             //! position and time of first our hits
  Double_t firstHitY[6];             //!
  Double_t firstHitZ[6];             //!
  Double_t firstT[6];                //!
  
  /** Private method AddHit
   **
   ** Adds a LandPoint to the HitCollection
   **/
  R3BLandPoint* AddHit(Int_t trackID, Int_t detID, Int_t box, Int_t id1, Int_t id2,
                       TVector3 posIn,
                       TVector3 pos_out, TVector3 momIn,
                       TVector3 momOut, Double_t time,
                       Double_t length, Double_t eLoss,Double_t lightYield);
  
  R3BLandFirstHits* AddHit1(Double_t x0, Double_t y0, Double_t z0, Double_t T0,
                            Double_t x1, Double_t y1, Double_t z1, Double_t T1,
                            Double_t x2, Double_t y2, Double_t z2, Double_t T2,
                            Double_t x3, Double_t y3, Double_t z3, Double_t T3,
                            Double_t x4, Double_t y4, Double_t z4, Double_t T4,
                            Double_t x5, Double_t y5, Double_t z5, Double_t T5);
  
  /** Private method ResetParameters
   **
   ** Resets the private members for the track parameters
   **/
  void ResetParameters();
  
  /** Map of MCis with fixed VolID */
  map <Int_t,Int_t> fMapMcId;    //!
  
  void StepHistory();
  
  ClassDef(R3BLand,3);
};


inline void R3BLand::ResetParameters()
{
  fTrackID = fVolumeID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = fLightYield = 0;
  fPosIndex = 0;
};


#endif 
#ifndef R3BGEOLAND_H
#define R3BGEOLAND_H

#include "FairGeoSet.h"

class  R3BGeoLand : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoLand();
  ~R3BGeoLand() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoLand,0) // Class for STS
};

inline Int_t R3BGeoLand::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOLAND_H */
#ifndef R3BGEOLANDPAR_H
#define R3BGEOLANDPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoLandPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoLandPar(const char* name="R3BGeoLandPar",
             const char* title="Land Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoLandPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoLandPar,1)
};

#endif /* !R3BGEOLANDPAR_H */
#ifndef R3BLANDCONTFACT_H
#define R3BLANDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BLandContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BLandContFact();
  ~R3BLandContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BLandContFact,0) // Factory for all LAND parameter containers
};

#endif  /* !R3BLANDCONTFACT_H */
#ifndef R3BLANDDIGITIZER_H
#define R3BLANDDIGITIZER_H 1


#include "FairTask.h"
#include "R3BLandDigiPar.h"
#include "R3BLandDigi.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;
class TF1;
class TRandom3;


struct PM_RES
{
  Double_t Ltime,Rtime,LlightCFD,RlightCFD,LlightQDC,RlightQDC,Lenergy,Renergy;
};


class R3BLandDigitizer : public FairTask {

public:
  /** Default constructor **/
  R3BLandDigitizer();

  /** Constructor **/
  R3BLandDigitizer(Int_t verbose);

  /** Destructor **/
  ~R3BLandDigitizer();

  /** Virtual method Init **/
  virtual InitStatus Init();

  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();

  virtual void Reset();

  // Allow change of the PMT Saturation at runtime. R3BLandDigitizer is initialized with the default value
  inline void SetSaturationCoefficient(const Double_t& saturationCoefficient) {  fSaturationCoefficient = saturationCoefficient;  }
  inline Double_t GetSaturationCoefficient() const  {  return fSaturationCoefficient;  }

  // Allow change of length of time gate for QDC ("Integration time") at runtime
  inline void SetTOFRange(const Double_t& TOFRange) {  fTOFRange = TOFRange;  }
  inline Double_t GetTOFRange() const  {  return fTOFRange;  }
  Double_t BuildTOFRangeFromBeamEnergy(const Double_t &e);
  // Compatibility to not break existing code
  inline void UseBeam(const Double_t& beamEnergy) { fBeamEnergy = beamEnergy; }


  inline void UseThresholds(const char *fileName, const Int_t nChannels)
  { fThreshFileName = TString(fileName);  fNChannels = nChannels; }

  R3BLandDigi* AddHit(Int_t paddleNr, Double_t tdcL, Double_t tdcR, Double_t tdc,
                      Double_t qdcL, Double_t qdcR, Double_t qdc,
                      Double_t xx,Double_t yy, Double_t zz );


protected:

  TF1 *f1;
  TRandom3 *fRnd;

  TString fThreshFileName;
  Int_t fNChannels;

  TClonesArray *fLandPoints;
  TClonesArray *fLandMCTrack;
  TClonesArray *fLandDigi;

  // Parameter class
  R3BLandDigiPar *fLandDigiPar;

  // Control Hitograms
  TH1F *hPMl;
  TH1F *hPMr;
  TH1F *hMult1;
  TH1F *hMult2;
  TH1F *hRLTimeToTrig;

  Double_t threshL[5000];
  Double_t threshR[5000];

  Int_t eventNo;
  Int_t npaddles;
  Int_t nplanes;
  Int_t paddle_per_plane;
  Double_t plength; // half length of paddle
  Double_t att; // light attenuation factor [1/cm]
  Double_t c;
  Double_t cMedia; // speed of light in material in cm/ns
  Double_t fBeamEnergy;
  PM_RES **PM_res;

  static const Double_t DEFAULT_SATURATION_COEFFICIENT;
  Double_t fSaturationCoefficient;
  
  Double_t fTOFRange;

private:

  virtual void SetParContainers();


  ClassDef(R3BLandDigitizer,1)
};

#endif

#ifndef _R3B_LAND_DIGITIZER_QA_H_
#define _R3B_LAND_DIGITIZER_QA_H_

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;


/**
 * \brief R3BLandDigitizerQA task.
 *
 * Task for filling controll histograms of R3BLandDigitizer
 * performance. Plots are stored in the output file.
 */

class R3BLandDigitizerQA : public FairTask {
  
public:
  
  /** Default constructor. */
  R3BLandDigitizerQA();
  
  /** Copy constructor. */
  R3BLandDigitizerQA(const R3BLandDigitizerQA&);
  
  /** Destructor. */
  virtual ~R3BLandDigitizerQA();
  
  /** Assignment operator. */
  R3BLandDigitizerQA& operator =(const R3BLandDigitizerQA&) { return *this; }
  
  /** Initialization of task. */
  virtual InitStatus Init();
  
  /** Execute one event. */
  virtual void Exec(Option_t *option);
  
  /** Finish event. */
  virtual void FinishEvent();
  
  /** Finish task. */
  virtual void Finish();
  
  /** Specify beam energy to be used. */
  inline void SetBeamEnergy(const Double_t &beamEnergy) { fBeamEnergy = beamEnergy; }
  
private:
  Int_t fEvent;
  TClonesArray *fTracks;
  TClonesArray *fPoints;
  TClonesArray *fDigis;
  
  Double_t fBeamEnergy;
  
  TH1F *fhTotEnergy;
  TH1F *fhTotLight;
  TH1F *fhTotEnergyRel;
  TH1F *fhTotLightRel;
  TH2F *fhElossLight;
  TH1F *fhTotEnergyReco;
  TH1F *fhPaddleE;
  TH1F *fhFirstTvsBar;
  TH1F *fhFirstBvsBar;
  TH1F *fhFirstE;
  TH2F *fhElossTime;
  TH2F *fhElossPdg;
  TH2F *fhQdcXL;
  TH2F *fhQdcXR;
  TH2F *fhThresh;
  TH1F *fhQdcRatio;
  
  void CreateHisto();
  
  ClassDef(R3BLandDigitizerQA, 1)
};


#endif
#ifndef R3BNEUTRONTRACKER_H
#define R3BNEUTRONTRACKER_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "R3BLandDigiPar.h"
#include "R3BLandDigi.h"
#include "TLorentzVector.h"
#include "R3BLandFirstHits.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;
class R3BNeutronTrack;

struct PM_HIT
{
  Double_t paddle,tdcL,tdcR,tdc,qdcL,qdcR,qdc,x,y,z,x0,y0,z0,t0;
};
struct PRIM_PART
{
  Double_t pdg,px,py,pz,pt,p,x,y,z,t,A,M;
};
struct NEUT1_HIT
{
  Double_t x,y,z,t,px,py,pz,p;
};
struct NEUT2_HIT
{
  Double_t x,y,z,t,px,py,pz,p;
};
struct CLUSTER
{
  Double_t xStart,yStart,zStart,xEnd,yEnd,zEnd,tStart,tStop,e,size;
};

class R3BNeutronTracker : public FairTask
{

 public:

  /** Default constructor **/  
  R3BNeutronTracker();


  /** Destructor **/
  ~R3BNeutronTracker();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();

  void UseBeam(Double_t _beam_energy,Double_t _beam_beta);

  private:
  
  TLorentzVector fPosIn, fPosOut;    //!  position
  TLorentzVector fMomIn, fMomOut;    //!  momentum
  Double32_t     fTime;              //!  time

  R3BNeutronTrack* AddHit(TVector3 pos_in, TVector3 pos_out,
                          TVector3 momOut, Double_t time);


  protected:
  // Reused structure from previous
  // Algorithm
  TClonesArray* fLandPoints;
  TClonesArray* fLandMCTrack; 
  TClonesArray* fLandDigi;
  TClonesArray* fLandFirstHits;

  // Parameter class
  R3BLandDigiPar* fLandDigiPar;

  // Created structure from this
  // Algorithm
  TClonesArray* fNeutronTracks;

  // Add here control hist for tracker
  TH1F *hNeutmult;
  TH1F *hErel1;
  TH1F *hErel2;
  TH1F *hErel3;
  TH1F *hErel4;
  
  TH1F *hMinv;
  TH1F *hMinv0;
  TH1F *hMinv1;
  TH1F *hMinv2;
  TH1F *hDeltaPx1;
  TH1F *hDeltaPy1;
  TH1F *hDeltaPz1;
  TH1F *hDeltaPx2;
  TH1F *hDeltaPy2;
  TH1F *hDeltaPz2;
  TH1F *hClusterSize;
  TH1F *hClusterEnergy;
  TH1F *hClusters;
  TH1F *hClusters1;  
  TH1F *hClusters2;  
  TH1F *hHits;
  TH2F *hClusterNo_vs_Size;

  TH1F *hDeltaX;
  TH1F *hDeltaY;
  TH1F *hDeltaZ;
  TH1F *hDeltaT;

  TH1F *hFirstHitZ;

  TH1F *hDeltaP1;
  TH1F *hDeltaP2;
  TH1F *hDeltaP3;
  TH1F *hDeltaP4;
  TH1F *hDeltaP5;
  TH1F *hDeltaP6;

  TH1F *hDelta;

  Int_t npaddles;
  Int_t nplanes;
  Int_t printing;

  Double_t beamEnergy;
  Double_t beamBeta;
  Double_t plength; // half length of paddle
  Double_t att; // light attenuation factor [1/cm]
  Double_t amu; //atomic mass unit in MeV/c**2
  Double_t mNeutron; //mass of neutron in amu
  Double_t c;
  Double_t cMedia; // speed of light in material in cm/ns
  Double_t calFactor; //calibration factor energy of LAND paddles
  Int_t eventNo;
  PM_HIT *PM_hit;
  PRIM_PART *PRIM_part;
  PRIM_PART *PRIM_frag;
  PRIM_PART *PRIM_gamma;
  NEUT1_HIT *NEUT1_hit;
  NEUT2_HIT *NEUT2_hit;
  CLUSTER *Cluster;
  
  private:
  virtual void SetParContainers();

 
  ClassDef(R3BNeutronTracker,1);
  
};

#endif
//
// C++ Interface: PndTutPar
//
#ifndef R3BLANDDIGIPAR_H
#define R3BLANDDIGIPAR_H

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BLandDigiPar : public FairParGenericSet
{
    public :
	R3BLandDigiPar (const char* name="R3BLandDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BLandDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	void Print(Option_t* option="") const;
	/** Accessor functions **/
	const Int_t GetMaxPaddle() { return  nMaxPaddle;}
	const Int_t GetMaxPlane() { return  nMaxPlane;}
	const Double_t GetPaddleLength() { return  paddleLength;}
	const Double_t GetPaddleHeight() { return  paddleHeight;}
	const Double_t GetPaddleDepth() { return  paddleDepth;}
	const Double_t GetPaddleSpacing() { return  paddleSpacing; }
	const Double_t GetPaddleWrapping() { return  paddleWrapping; }
	const TString  GetGeometryFileName() { return fGeometryFileName; }
	void SetMaxPaddle(Int_t paddle ){nMaxPaddle=paddle;}
	void SetMaxPlane(Int_t pla){nMaxPlane=pla;}
	void SetPaddleLength(Double_t length){paddleLength=length;}
	void SetPaddleHeight(Double_t height){paddleHeight=height;}
	void SetPaddleDepth(Double_t depth){paddleDepth=depth;}
	void SetPaddleSpacing(Double_t space){paddleSpacing=space;}
	void SetPaddleWrapping(Double_t wrap){paddleWrapping=wrap;}
	void SetGeometryFileName(TString name) { fGeometryFileName = name; }

  private:
  // Digi. Parameters
  Int_t nMaxPaddle;
  Int_t nMaxPlane;
  Double_t paddleLength;
  Double_t paddleHeight;
  Double_t paddleDepth;
  Double_t paddleSpacing;
  Double_t paddleWrapping;
  TString  fGeometryFileName;

   ClassDef(R3BLandDigiPar,2); //
};

#endif /* !R3BLANDDIGIPAR_H*/

// -----------------------------------------------------------------------------
// -----                       R3BNeuLandCluster                           -----
// -----                 Created 12-07-2011 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BNEULANDCLUSTER
#define R3BNEULANDCLUSTER

#include "TObject.h"
#include "TVector3.h"


class R3BNeuLandCluster : public TObject
{
 public:
  R3BNeuLandCluster();
  R3BNeuLandCluster(Double_t startX, Double_t startY, Double_t startZ, Double_t startT,
	     Double_t stopX, Double_t stopY, Double_t stopZ, Double_t stopT,
	     Double_t e, Double_t size);
  virtual ~R3BNeuLandCluster();

  void SetStartPosition(Double_t startX, Double_t startY, Double_t startZ);
  void SetStopPosition(Double_t stopX, Double_t stopY, Double_t stopZ);
  void SetStartT(Double_t startT);
  void SetStopT(Double_t stopT);
  void SetE(Double_t e);
  void SetSize(Double_t size);
  void Mark();

  void StartPosition(TVector3 &pos) const;
  void StopPosition(TVector3 &pos) const;
  Double_t GetStartT() const;
  Double_t GetStopT() const;
  Double_t GetE() const;
  Double_t GetSize() const;
  Bool_t  IsMarked() const;

 private:
  Double32_t fStartX;
  Double32_t fStartY;
  Double32_t fStartZ;
  Double32_t fStartT;
  Double32_t fStopX;
  Double32_t fStopY;
  Double32_t fStopZ;
  Double32_t fStopT;
  Double32_t fE;
  Double32_t fSize;
  Bool_t     fMarked;

 public:
  ClassDef(R3BNeuLandCluster, 1)
};


#endif


// -----------------------------------------------------------------------------
// -----                    R3BNeuLandClusterFinder                        -----
// -----                Created 21-02-2012 by D.Kresan                     -----
// -----------------------------------------------------------------------------

#ifndef R3BNEULANDCLUSTERFINDER_H
#define R3BNEULANDCLUSTERFINDER_H

#include <vector>

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;


class R3BNeuLandClusterFinder : public FairTask {

 public:
  // Default constructor
  R3BNeuLandClusterFinder();

  // Standard constructor
  R3BNeuLandClusterFinder(Int_t verbose);

  // Destructor
  virtual ~R3BNeuLandClusterFinder();

  // Task initialization
  virtual InitStatus Init();

  // Process an event
  virtual void Exec(Option_t *option);

  // Finish of task
  virtual void Finish();

  // Reset the containers
  void Reset();

 private:
  TClonesArray              *fArrayDigi;    // Array of digis - input
  TClonesArray              *fArrayCluster; // Array of clusters - output
  std::vector<R3BLandDigi*>  fVectorDigi;   // Vector of digis (for sorting in time)

  // Control histograms
  TH1F *fhClusterSize;
  TH1F *fhClusterEnergy;
  TH1F *fhClusters;
  TH1F *fhHits;
  TH2F *fhClusterNo_vs_Size;

  // Initialization of control histograms
  void CreateHistograms();

  ClassDef(R3BNeuLandClusterFinder, 1);
};


#endif

// -----------------------------------------------------------------------------
// -----                       R3BNeutronCalibr2D                          -----
// -----                 Created 27-02-2012 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BNEUTRONCALIBR2D_H
#define R3BNEUTRONCALIBR2D_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;


class R3BNeutronCalibr2D : public FairTask
{
 public:
  /** Default constructor **/  
  R3BNeutronCalibr2D();
  
  /** Destructor **/
  ~R3BNeutronCalibr2D();

  /** Virtual method Init **/
  virtual InitStatus Init();

  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();

  inline void UseBeam(Int_t beamEnergy) { fBeamEnergy = beamEnergy; }

 private:
  Int_t         fEventNo;
  Int_t         fBeamEnergy;
  TClonesArray *fArrayDigi;
  TClonesArray *fArrayCluster;
  TH1F         *fh_etot;
  TH2F         *fh_ncl_etot;

  void CreateHistograms();

 public: 
  ClassDef(R3BNeutronCalibr2D,1)  
};


#endif
// -----------------------------------------------------------------------------
// -----                        R3BPrimPart                                -----
// -----                 Created 12-07-2011 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BPRIMPART
#define R3BPRIMPART

#include "TObject.h"
#include "TVector3.h"



class R3BPrimPart : public TObject
{
 public:
  R3BPrimPart();
  R3BPrimPart(Int_t pdg, Double_t px, Double_t py, Double_t pz,
	      Double_t x, Double_t y, Double_t z, Double_t t,
	      Double_t A, Double_t M);
  virtual ~R3BPrimPart();

    Int_t GetPdgCode() const { return fPdg; }
    void Momentum(TVector3 &mom) const { mom.SetXYZ(fPx, fPy, fPz); }
    void Position(TVector3 &pos) const { pos.SetXYZ(fX, fY, fZ); }
    Double_t GetT() const { return fT; }
    Double_t GetA() const { return fA; }
    Double_t GetM() const { return fM; }
    Double_t GetE() const { TVector3 mom; Momentum(mom); return sqrt(mom.Mag2() + GetM2()); }
    Double_t GetM2() const { return fM*fM; }
    Double_t GetBeta() const { TVector3 mom; Momentum(mom); return mom.Mag()/GetE(); }
    Double_t GetGamma() const { return 1./sqrt(1.-pow(GetBeta(),2)); }

    void SetPz(const Double_t& pz) { fPz = pz; }
    void SetA(const Double_t& a) { fA = a; }
    void SetM(const Double_t& m) { fM = m; }

 private:
  Int_t fPdg;
  Double_t fPx;
  Double_t fPy;
  Double_t fPz;
  Double_t fX;
  Double_t fY;
  Double_t fZ;
  Double_t fT;
  Double_t fA;
  Double_t fM;

 public:
  ClassDef(R3BPrimPart, 1)
};

#endif
// -----------------------------------------------------------------------------
// -----                      R3BNeutronTracker2D                          -----
// -----                Created 29-02-2012 by D.Kresan                     -----
// -----            Based on algorithm developed by M.Heil                 -----
// -----------------------------------------------------------------------------

#ifndef R3BNEUTRONTRACKER2D_H
#define R3BNEUTRONTRACKER2D_H

#include <vector>
#include <map>

#include "FairTask.h"

#include "R3BPrimPart.h"
#include "R3BNeuLandCluster.h"

class TClonesArray;
class TH1F;
class TH2F;


class R3BNeutronTracker2D : public FairTask
{
 public:
  /** Default constructor **/  
  R3BNeutronTracker2D();
  
  /** Destructor **/
  ~R3BNeutronTracker2D();

  /** Virtual method Init **/
  virtual InitStatus Init();

  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  virtual void Finish();
  virtual void Reset();

  void UseBeam(Double_t beam_energy, Double_t beam_beta);
  
  void ReadCalibrFile(char *name);

  inline Int_t GetNTracks4() { return h_ntracks->GetBinContent(5); }

 private:
  TClonesArray* fLandPoints;
  TClonesArray* fLandMCTrack; 
  TClonesArray* fLandDigi;
  TClonesArray* fLandFirstHits;
  TClonesArray* fNeutHits;

  // Parameter class
  R3BLandDigiPar* fLandDigiPar;

  // Add here control hist for tracker
  TH1F *hNeutmult;
  TH1F *hErel1;
  TH1F *hErel2;
  TH1F *hErel3;
  TH1F *hErel4;

  TH1F *hMinv;
  TH1F *hMinv0;
  TH1F *hExce;
  TH1F *hExce0;
  TH1F *hMinv1;
  TH1F *hMinv2;
  TH1F *hDeltaPx1;
  TH1F *hDeltaPy1;
  TH1F *hDeltaPz1;
  TH1F *hDeltaPx2;
  TH1F *hDeltaPy2;
  TH1F *hDeltaPz2;
  TH1F *hClusters1;  

  TH1F *hDeltaX;
  TH1F *hDeltaY;
  TH1F *hDeltaZ;
  TH1F *hDeltaT;

  TH1F *hFirstHitZ;

  TH1F *hDeltaP1;
  TH1F *hDeltaP2;
  TH1F *hDeltaP3;
  TH1F *hDeltaP4;
  TH1F *hDeltaP5;
  TH1F *hDeltaP6;

  TH1F *hDelta;

  TH1F *h_theta_cand;
  TH1F *h_beta_min;
  TH1F *h_beta_max;
  TH1F *h_ntracks;
  TH1F *h_nhits;
  TH1F *h_theta;

  TH1F *h_nofclusters;
  TH1F *h_etot;
  TH2F *h_ncl_etot;
  TH2F *h_ncl_etot_1;
  TH2F *h_ndigi_etot;
  TH2F *h_ncl1_etot;


  Int_t npaddles;
  Int_t nplanes;
  Int_t printing;

  Double_t beamEnergy;
  Double_t beamBeta;
  Double_t plength; // half length of paddle
  Double_t att; // light attenuation factor [1/cm]
  Double_t amu; //atomic mass unit in MeV/c**2
  Double_t mNeutron; //mass of neutron in amu
  Double_t cMedia; // speed of light in material in cm/ns
  Double_t calFactor; //calibration factor energy of LAND paddles
  Int_t eventNo;
  R3BPrimPart **PRIM_part;
  R3BPrimPart **PRIM_prot;
  R3BPrimPart **PRIM_frag;
  R3BPrimPart **PRIM_gamma;

  Int_t Nclusters;
  Double_t dio;
  Double_t sumTotalEnergy;

  Float_t fKappa;
  Float_t fCuts[5];

  Int_t fNofClusters;
  Double_t fEtot;
  TClonesArray *fArrayCluster;
  std::vector<R3BNeuLandCluster*> fVectorCluster;
  Int_t fNofClusters1;
  Int_t fNofTracks;
  Int_t fTracks[1000][300];
  Int_t fNofHits[1000];
  Bool_t fMapTracks[1000];
  Int_t nTemp;
  Int_t nNeut;
  Double_t fMinvTrue;
  Double_t fMinv;
  Double_t fExceTrue;
  Double_t fExce;
  Int_t fNPrimNeut;
  Int_t fNPrimProt;
  Int_t fNPrimGamma;
  Int_t fNofFrag;

  Int_t nPrim;

  Double_t temp[3000][14];
  Int_t nentries;

  virtual void SetParContainers();

  void CreateHistograms();
  Int_t AdvancedMethod();
  void CalculateMassInv();
  void CalculateExce();
  void SortClustersBeta();
  void NextIteration(Int_t curIndex, R3BNeuLandCluster *curClus);
  Bool_t IsElastic(R3BNeuLandCluster *c1, R3BNeuLandCluster *c2);

 public: 
  ClassDef(R3BNeutronTracker2D,1)  
};


#endif
// ------------------------------------------------------------------------
// -----                        R3BNeutHit                            -----
// -----              Created 21.05.2012 by D.Kresan                  -----
// ------------------------------------------------------------------------

#ifndef R3BNEUTHIT_H
#define R3BNEUTHIT_H

#include "TObject.h"
#include "TMath.h"


class R3BNeutHit : public TObject {

 public:
  R3BNeutHit();
  R3BNeutHit(Double_t x, Double_t y, Double_t z, Double_t t);
  virtual ~R3BNeutHit();

 private:
  Double32_t fX;
  Double32_t fY;
  Double32_t fZ;
  Double32_t fT;

 public:
  inline Double_t GetX() const {  return fX;  }
  inline Double_t GetY() const {  return fY;  }
  inline Double_t GetZ() const {  return fZ;  }
  inline Double_t GetT() const {  return fT;  }
  inline Double_t GetD() const {  return TMath::Sqrt(fX*fX+fY*fY+fZ*fZ); }
  Double_t GetP() const;

  ClassDef(R3BNeutHit, 1)
};


#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                            R3BLandRawAna                          -----
// -----                      Created  @ 01.2014 by M.I. Cherciu           -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BLANDRAWANA_H
#define R3BLANDRAWANA_H

#include "FairTask.h"

class R3BEventHeader;
class TClonesArray;
class TH1F;
class TH2F;

class R3BLandRawAna : public FairTask
{
  public:
    R3BLandRawAna();
    R3BLandRawAna(const char* name, Int_t iVerbose);
    virtual ~R3BLandRawAna();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    inline Int_t GetNItemsTotal() { return fNItemsTotal; }

  private:
    Int_t fnEvents;
    Int_t fNItemsTotal;

    R3BEventHeader *fHeader;
    TClonesArray* fLandRawHit;
    TClonesArray* fLandRawHitMapped;
    TClonesArray* fLosRawHit;

    TH1F* fh_trigger;
    
    TH1F* fh_land_raw_sam;
    TH1F* fh_land_raw_gtb;
    TH1F* fh_land_raw_tacaddr;
    TH1F* fh_land_raw_tacch;
    TH1F* fh_land_raw_cal;
    TH1F* fh_land_raw_clock;
    TH1F* fh_land_raw_tac;
    TH1F* fh_land_raw_qdc;

    TH1F* fh_land_mapped_is17;
    TH1F* fh_land_mapped_barid;
    TH1F* fh_land_mapped_side;
    TH1F* fh_land_mapped_clock;
    TH1F* fh_land_mapped_tac;
    TH1F* fh_land_mapped_qdc;

    TH1F* fh_los_raw_ch;
    TH1F* fh_los_raw_tdc;
    TH1F* fh_los_raw_clock;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BLandRawAna, 0)
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BLandRawAnaS438b                      -----
// -----                    Created  27-02-2015 by D. Kresan               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BLandRawAnaS438bS438B_H
#define R3BLandRawAnaS438bS438B_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

class R3BLandRawAnaS438b : public FairTask
{
  public:
    R3BLandRawAnaS438b();
    R3BLandRawAnaS438b(const char* name, Int_t iVerbose);
    virtual ~R3BLandRawAnaS438b();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:
    Int_t fnEvents;

    R3BEventHeader *fHeader;
    TClonesArray* fLandRawHitMapped;
    TClonesArray* fCaloRawHit;

    TH1F* fh_trigger;
    TH1F* fh_trigger_cut;
    TH2F* fhNhits;
    TH1F* fh_land_qdc;
    TH2F* fh_land_qdc_ncalo;
    TH2F* fh_eland_ecalo;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BLandRawAnaS438b, 0)
};

#endif
// ---------------------------------------------------------------------------------------
// -----                                                                             -----
// -----                           R3BLandMapping                                    -----
// -----                           Version 0.1                                       -----
// -----                      Created  @ 03.2014 by M.I. Cherciu                     -----
// -----                                                                             -----
// ---------------------------------------------------------------------------------------

#ifndef R3BLAND_MAPPING_H
#define R3BLAND_MAPPING_H

#include <map>

#include "FairTask.h"

class TClonesArray;

/// Class R3BLandMapping allow to read mapping configuration from file and get identificators for each modules and channels.
class R3BLandMapping : public FairTask
{

  public:
    R3BLandMapping();

    virtual ~R3BLandMapping();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishEvent();

    void SetFileName(const char* A_FileName)
    {
        fname = A_FileName;
    }
    const char* GetFileName() const
    {
        return fname;
    }
    inline void SetNofBarsPerPlane(Int_t nBars)
    {
        fNofBarsPerPlane = nBars;
    }

  private:
    const char* fname;
    Int_t nMappedElements;
    Int_t fnEvents;
    Int_t fNofBarsPerPlane;
    TClonesArray* fRawData;
    TClonesArray* fLandHit;
    Int_t nEntry;
    std::map<Int_t, Int_t> v1map;
    std::map<Int_t, Int_t> v2map;
    Bool_t DoMapping();

  public:
    ClassDef(R3BLandMapping, 0);
};

#endif
// ---------------------------------------------------------------------------------------
// -----                                                                             -----
// -----                           R3BLandUnpack                                     -----
// -----                           Version 0.1                                       -----
// -----         Adapted by M.I. Cherciu @ 01.2014 after Y.Gonzalez code             -----
// -----                                                                             -----
// -----        * modification @ 03.2014: added TClonesArray for R3BLandHit          -----
// ---------------------------------------------------------------------------------------

#ifndef R3BLANDUNPACK_H
#define R3BLANDUNPACK_H

#include "FairUnpack.h"

class TClonesArray;
class TH1F;

class R3BLandUnpack : public FairUnpack
{
  public:
    // Constructor
    R3BLandUnpack(Short_t type = 94, Short_t subType = 9400, Short_t procId = 10, Short_t subCrate = 1, Short_t control = 3);

    // Destructor
    virtual ~R3BLandUnpack();

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
    ClassDef(R3BLandUnpack, 0)
};

#endif
// ----------------------------------------------------------------
// -----                     R3BLandTcalFill                  -----
// -----             Created 04-04-2014 by D.Kresan           -----
// ----------------------------------------------------------------

#ifndef R3BLANDTCALFILL_H
#define R3BLANDTCALFILL_H

#include "FairTask.h"

class R3BTCalPar;
class TClonesArray;
class R3BEventHeader;
class R3BTCalEngine;

/**
 * An analysis task for TCAL calibration of NeuLAND data.
 * This class fills TDC distribution for each Photomultiplier
 * of the NeuLAND detector and calculates the calibration
 * parameters using the R3BTCalEngine.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BLandTcalFill : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BLandTcalFill();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLandTcalFill(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BLandTcalFill();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    virtual void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

    /**
     * Method for setting the update rate.
     * @param rate an update rate value (events).
     */
    inline void SetUpdateRate(Int_t rate)
    {
        fUpdateRate = rate;
    }

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries in TDC
     * distribution greater than minimum statistics will be
     * calibrated.
     * @param minStats a value of minimum statistics required.
     */
    inline void SetMinStats(Int_t minStats)
    {
        fMinStats = minStats;
    }

    /**
     * Method for selecting events with certain trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger)
    {
        fTrigger = trigger;
    }

    /**
     * Method for setting number of modules in NeuLAND setup.
     * @param nPMTs a number of photomultipliers.
     * @param n17 a number of channels with stop signal (17-th channel).
     */
    inline void SetNofModules(Int_t nPMTs, Int_t n17)
    {
        fNofPMTs = nPMTs;
        fNof17 = n17;
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    Int_t fNofPMTs; /**< Number of NeuLAND modules. */
    Int_t fNof17;   /**< Number of channels with stop signal. */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fHits;    /**< Array with NeuLAND hits - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BLandTcalFill, 1)
};

#endif
#ifndef R3BLANDPARAMREAD_H
#define R3BLANDPARAMREAD_H

#include "FairTask.h" // for FairTask, InitStatus

#include "Rtypes.h" // for ClassDef

#include <stddef.h> // for NULL

class R3BTCalPar;

class R3BLandParamRead : public FairTask
{
  public:
    /** Default constructor **/
    R3BLandParamRead()
        : FairTask()
        , fCalPar(NULL){};

    /** Destructor **/
    virtual ~R3BLandParamRead(){};

    /** Virtual method Init **/
    virtual void SetParContainers();
    virtual InitStatus Init();
    virtual InitStatus ReInit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);
    /** Virtual method Finish **/
    virtual void Finish();

    R3BTCalPar* fCalPar;

    R3BLandParamRead(const R3BLandParamRead&);
    R3BLandParamRead& operator=(const R3BLandParamRead&);

    ClassDef(R3BLandParamRead, 0);
};

#endif
// -----------------------------------------------------------------------
// -----                          R3BLandPmt                         -----
// -----                Created 22-04-2014 by D.Kresan               -----
// -----------------------------------------------------------------------

#ifndef R3BLANDPMT
#define R3BLANDPMT

#include "TObject.h"

class R3BLandPmt : public TObject
{
  public:
    R3BLandPmt();
    R3BLandPmt(Int_t barId, Int_t side, Double_t time, Int_t qdc);
    virtual ~R3BLandPmt();

    inline const Int_t& GetBarId() const
    {
        return fBarId;
    }
    inline const Int_t& GetSide() const
    {
        return fSide;
    }
    inline const Double_t& GetTime() const
    {
        return fTime;
    }
    inline const Int_t& GetQdc() const
    {
        return fQdc;
    }

  private:
    Int_t fBarId;
    Int_t fSide;
    Double_t fTime;
    Int_t fQdc;

  public:
    ClassDef(R3BLandPmt, 1)
};

#endif
// ------------------------------------------------------------
// -----                    R3BLandTcal                   -----
// -----          Created 22-04-2014 by D.Kresan          -----
// ------------------------------------------------------------

#ifndef R3BLANDTCAL
#define R3BLANDTCAL

#include <map>

#include "FairTask.h"

class TClonesArray;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND raw items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BLandTcalFill task.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BLandTcal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BLandTcal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLandTcal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BLandTcal();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
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
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    virtual void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger)
    {
        fTrigger = trigger;
    }

    /**
     * Method for setting the number of NeuLAND modules.
     * @param nPMTs a number of photomultipliers.
     * @param n17 a number of channels with stop signal (17-th channel).
     */
    inline void SetNofModules(Int_t nPMTs, Int_t n17)
    {
        fNofPMTs = nPMTs;
        fNof17 = n17;
    }

  private:
    Int_t fNEvents;                             /**< Event counter. */
    std::map<Int_t, R3BTCalModulePar*> fMapPar; /**< Map for matching mdoule ID with parameter container. */
    R3BEventHeader* header;                     /**< Event header. */
    TClonesArray* fRawHit;                      /**< Array with raw items - input data. */
    TClonesArray* fPmt;                         /**< Array with time items - output data. */
    Int_t fNPmt;                                /**< Number of produced time items per event. */
    R3BTCalPar* fTcalPar;                       /**< TCAL parameter container. */
    Int_t fTrigger;                             /**< Trigger value. */
    Int_t fNofPMTs;                             /**< Number of photomultipliers. */
    Int_t fNof17;                               /**< Number of channels with stop signal. */
    std::map<Int_t, Bool_t> fMap17Seen;         /**< Map with flag of observed stop signal. */
    std::map<Int_t, Double_t> fMapStopTime;     /**< Map with value of stop time. */
    std::map<Int_t, Int_t> fMapStopClock;       /**< Map with value of stop clock. */
    Double_t fClockFreq;                        /**< Clock cycle in [ns]. */

    /**
     * Method for retrieving parameter container for specific module ID.
     * @param channel a detector module ID.
     * @param par an output parameter container for this module.
     * @return kTRUE if parameter container for this module exists, else kFALSE.
     */
    Bool_t FindChannel(Int_t channel, R3BTCalModulePar** par);

  public:
    ClassDef(R3BLandTcal, 1)
};

#endif
// -----------------------------------------------------------------------------
// -----                            R3BLandTdiffFill                       -----
// -----                     Created 02-05-2014 by D.Kresan                -----
// -----------------------------------------------------------------------------

#ifndef R3BLANDTDIFFFILL_H
#define R3BLANDTDIFFFILL_H

#include <fstream>

#include "Math/IFunction.h"

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BLandTdiffFill : public FairTask
{
  public:
    R3BLandTdiffFill();
    R3BLandTdiffFill(const char* name, Int_t iVerbose);
    virtual ~R3BLandTdiffFill();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    inline void SetNofBars(Int_t nBars)
    {
        fNofBars = nBars;
    }
    
    inline void SetTdiffParName(char* name)
    {
        fParName = name;
    }

  private:
    Int_t fnEvents;

    Int_t fNofBars;

    TClonesArray* fLandPmt;

    TH2F* fh_time;
    TH1F** fh_tdiff;
    TH1F* fh_tdiff_res;
    TH1F* fh_toff_res;
    TH1F* fh_veff_res;
    
    char* fParName;
    std::ofstream* fOutFile;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BLandTdiffFill, 0)
};

#endif
// -----------------------------------------------------------------------------
// -----                               R3BLandAna                          -----
// -----                     Created 22-04-2014 by D.Kresan                -----
// -----------------------------------------------------------------------------

#ifndef R3BLANDANA_H
#define R3BLANDANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BLandAna : public FairTask
{
  public:
    R3BLandAna();
    R3BLandAna(const char* name, Int_t iVerbose);
    virtual ~R3BLandAna();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();
    
    inline void SetNofBars(Int_t nofBars) { fNofBars = nofBars; }
    
    inline void SetFirstPlaneHorisontal() { fFirstPlaneHorisontal = kTRUE; }

  private:
    Int_t fNofBars;
    Bool_t fFirstPlaneHorisontal;
    
    Int_t fnEvents;

    TClonesArray* fLandDigi;
    TClonesArray* fLosHit;

    TH1F* fh_land_barid;
    TH2F* fh_land_qdcbarid;
    TH1F* fh_land_tof;
    TH2F* fh_land_qdctof;
    TH2F* fh_land_timebarid;
    TH2F* fh_land_tofbarid;
    TH2F* fh_land_betabarid;
    TH2F* fh_land_yx;
    TH2F* fh_land_yx1;
    TH2F* fh_land_yx2;
    TH2F* fh_land_lbarid;
    TH2F* fh_land_ltime;

    TH1F* fh_land_beta;
    TH1F* fh_land_qdc;
    TH1F* fh_land_qdc_cut;
    
    TH1F* fh_los_time;
    
    TH2F* fh_los_corr;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BLandAna, 0)
};

#endif
#ifndef R3BLANDTCALTEST_H
#define R3BLANDTCALTEST_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BLandTcalTest : public FairTask
{
  public:
    R3BLandTcalTest();
    R3BLandTcalTest(const char* name, Int_t iVerbose);
    virtual ~R3BLandTcalTest();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:
    Int_t fnEvents;

    TClonesArray* fLandPmt;
    TClonesArray* fLosHit;

    TH2F* fh_los_corr;
    TH1F* fh_tof;
    TH2F* fh_qdctof;

    TH2F* fh_qdctof_2;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BLandTcalTest, 1)
};

#endif
// -----------------------------------------------------------------------------
// -----                              R3BLandTSync                         -----
// -----                     Created 07-05-2014 by D.Kresan                -----
// -----------------------------------------------------------------------------

#ifndef R3BLANDTSYNC_H
#define R3BLANDTSYNC_H

#include <fstream>
#include <map>

#include "FairTask.h"

class TClonesArray;
class R3BLandTSyncPar;

class R3BLandTSync : public FairTask
{
  public:
    R3BLandTSync();
    R3BLandTSync(const char* name, Int_t iVerbose);
    virtual ~R3BLandTSync();

    virtual InitStatus Init();
    
    virtual void SetParContainers();
    
    virtual InitStatus ReInit();
    
    virtual void Exec(Option_t* option);

    virtual void FinishEvent();
    
    inline void SetFirstPlaneHorisontal() { fFirstPlaneHorisontal = kTRUE; }

  private:
    void SetParameter();
    
    TClonesArray* fLandPmt;
    TClonesArray* fLandDigi;
    R3BLandTSyncPar* fTSyncPar;
    Int_t fNDigi;
    
    std::ifstream* fInFile;
    Bool_t fFirstPlaneHorisontal;
    
    std::map<Int_t, Bool_t> fMapIsSet;
    std::map<Int_t, Double_t> fMapVeff;
    std::map<Int_t, Double_t> fMapTSync;
    
    void ReadParameters();

  public:
    ClassDef(R3BLandTSync, 0)
};

#endif
// ---------------------------------------------------------------------------------------
// -----                              R3BLandCosmic1                                 -----
// -----         Copied from Land02/detector/land/n_gen_det_cosmic1 on 11-2015       -----
// ---------------------------------------------------------------------------------------

#ifndef R3BLANDCOSMIC1_H
#define R3BLANDCOSMIC1_H

#include "FairTask.h"
#include "R3BLandCosmic1Util.h"

#include "stdint.h"
#include "stdlib.h"
#include <set>

class R3BLandTSyncPar;
class TClonesArray;
class TCanvas;
class TGraph;
class TF1;

typedef std::set<uint32_t> ident_no_set;
typedef std::pair<float,int> pair_value;

struct nc_diff
{
  float _pos_track;
  float _pos_diff;

  uint32_t  _ident_no;

};

struct n_calib_diff
{
public:
  bool analyse_history(ident_no_set& bad_fit_idents);
  bool calc_params(ident_no_set& bad_fit_idents,double v[2]);

public:
  std::vector<nc_diff> _data;

};

struct nc_mean
{
  float _mean_diff;

  float _mean_corr;

  uint32_t  _ident_no;
};


struct n_calib_mean
{

public:
  bool analyse_history(ident_no_set& bad_fit_idents);
  bool calc_params(ident_no_set& bad_fit_idents,val_err_inv& mean);

public:
  std::vector<nc_mean> _data;
};

struct pdl_pm_pair
{
  float _rate[2];
  Int_t _favourite[2];

  Int_t _others[2][5];

  Int_t _flag;
};

class pair_correlation
{
public:
  pair_correlation(){
    _total = 0;
  }
public:
  std::vector<std::vector<Int_t> > _corr;
  Int_t _total;
};

struct bar{
  Int_t fBarId;
  Int_t fPdl;
  Double_t fTime [2];
  Double_t fQdc [2];

  bar(Int_t barId, Int_t pdl) : fBarId(barId), fPdl(pdl){
    fTime[0] = 0;
    fTime[1] = 0;
    fQdc[0] = 0;
    fQdc[1] = 0;
  }
};

class R3BLandCosmic1 : public FairTask
{

  public:
    R3BLandCosmic1();
    R3BLandCosmic1(const char* name, Int_t iVerbose = 1);
    virtual ~R3BLandCosmic1();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishEvent();

    virtual void FinishTask();

    void WritePlot(Bool_t b){
      writePlot = b;
    }

    void SetMaxPaddleDistFromLine(Double_t d){
	MAX_PADDLE_DIST_FROM_LINE = d;
    }
    
    void SetPlanes(Int_t planes){
	fPlanes = planes;
    }

  private:

    Bool_t writePlot = kFALSE;
    Double_t MAX_PADDLE_DIST_FROM_LINE = 1.0;
    Int_t fPlanes = 60;
    Int_t fPaddles = 50;
    
    TClonesArray* fLandPmt;
    R3BLandTSyncPar* fTSyncPar;

    TCanvas* canvas;
    std::vector<std::vector<bar*> > bars;
    TGraph* x_plot;
    TGraph* y_plot;
    TF1* x_fit;
    TF1* y_fit;
    Int_t nData;
      
    std::vector<std::vector<n_calib_diff> > _collect_diff;
    std::vector<std::vector<n_calib_mean> > _collect_mean_within;
    std::vector<std::vector<std::vector<n_calib_mean> > > _collect_mean_cross;
    std::vector<std::vector<n_calib_diff> > _collect_diff_e;
    std::vector<std::vector<n_calib_mean> > _collect_mean_within_e;
    std::vector<std::vector<std::vector<n_calib_mean> > > _collect_mean_cross_e;

    uint32_t _used_ident_no;

    ident_no_set _bad_fit_idents;

    std::vector<std::vector<std::vector<std::vector<uint32_t> > > > _stats;

    pair_correlation _pairs_pm;
    pair_correlation _pairs_pdl;

  public:
    ClassDef(R3BLandCosmic1, 0)
};

#endif
#ifndef R3BLANDLSQR_H
#define R3BLANDLSQR_H
/*
* lsqr.h
* Contains auxiliary functions, data type definitions, and function
* prototypes for the iterative linear solver LSQR.
*
* 08 Sep 1999: First version from James W. Howse <jhowse@lanl.gov>
* 02 Sep 2007: Dima Sorkin <dima.sorkin@gmail.com> advises that
*              in C++ the use of macros is strongly deprecated.
*              Originally, sqr, max, min, round, TRUE, FALSE, PI
*              were defined here.  Now,
*                 min, round, TRUE, FALSE are gone (never used);
*                 PI is defined explicitly in test_lstp.c;
*                 max is changed to lsqr_max in test_lsqr.c;
*/

/*
*------------------------------------------------------------------------------
*
*     LSQR  finds a solution x to the following problems:
*
*     1. Unsymmetric equations --    solve  A*x = b
*
*     2. Linear least squares  --    solve  A*x = b
*                                    in the least-squares sense
*
*     3. Damped least squares  --    solve  (   A    )*x = ( b )
*                                           ( damp*I )     ( 0 )
*                                    in the least-squares sense
*
*     where 'A' is a matrix with 'm' rows and 'n' columns, 'b' is an
*     'm'-vector, and 'damp' is a scalar.  (All quantities are real.)
*     The matrix 'A' is intended to be large and sparse.
*
*
*     Notation
*     --------
*
*     The following quantities are used in discussing the subroutine
*     parameters:
*
*     'Abar'   =  (   A    ),          'bbar'  =  ( b )
*                 ( damp*I )                      ( 0 )
*
*     'r'      =  b  -  A*x,           'rbar'  =  bbar  -  Abar*x
*
*     'rnorm'  =  sqrt( norm(r)**2  +  damp**2 * norm(x)**2 )
*              =  norm( rbar )
*
*     'rel_prec'  =  the relative precision of floating-point arithmetic
*                    on the machine being used.  For example, on the IBM 370,
*                    'rel_prec' is about 1.0E-6 and 1.0D-16 in single and double
*                    precision respectively.
*
*     LSQR  minimizes the function 'rnorm' with respect to 'x'.
*
*------------------------------------------------------------------------------
*/

/*---------------*/
/* Include files */
/*---------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>

/* 02 Sep 2007: The following 7 macros
                   sqr, max, min, round, TRUE, FALSE, PI
                are no longer defined here.
                (min, round, TRUE, FALSE were never used anyway.)
                "sqr" has been changed to lsqr_sqr.
*/

/*------------------------*/
/* User-defined functions */
/*------------------------*/

#define lsqr_sqr(a)	( (a) * (a) )
/*
#define max(a,b)	( (a) < (b) ? (b) : (a) )
#define min(a,b)	( (a) < (b) ? (a) : (b) )
#define round(a)        ( (a) > 0.0 ? (int)((a) + 0.5) : (int)((a) - 0.5) )
*/

/*----------------------*/
/* Default declarations */
/*----------------------*/

/*
#define TRUE	(1)
#define FALSE	(0)
#define PI      (4.0 * atan(1.0))
*/

/*------------------*/
/* Type definitions */
/*------------------*/

typedef struct LONG_VECTOR {
  long     length;
  long     *elements;
} lvec;

typedef struct LSQR_DOUBLE_VECTOR {
  long     length;
  double   *elements;
} dvec;

/*
*------------------------------------------------------------------------------
*
*     Input Quantities
*     ----------------
*
*     num_rows     input  The number of rows (e.g., 'm') in the matrix A.
*
*     num_cols     input  The number of columns (e.g., 'n') in the matrix A.
*
*     damp_val     input  The damping parameter for problem 3 above.
*                         ('damp_val' should be 0.0 for problems 1 and 2.)
*                         If the system A*x = b is incompatible, values
*                         of 'damp_val' in the range
*                            0 to sqrt('rel_prec')*norm(A)
*                         will probably have a negligible effect.
*                         Larger values of 'damp_val' will tend to decrease
*                         the norm of x and reduce the number of
*                         iterations required by LSQR.
*
*                         The work per iteration and the storage needed
*                         by LSQR are the same for all values of 'damp_val'.
*
*     rel_mat_err  input  An estimate of the relative error in the data
*                         defining the matrix 'A'.  For example,
*                         if 'A' is accurate to about 6 digits, set
*                         rel_mat_err = 1.0e-6 .
*
*     rel_rhs_err  input  An extimate of the relative error in the data
*                         defining the right hand side (rhs) vector 'b'.  For
*                         example, if 'b' is accurate to about 6 digits, set
*                         rel_rhs_err = 1.0e-6 .
*
*     cond_lim     input  An upper limit on cond('Abar'), the apparent
*                         condition number of the matrix 'Abar'.
*                         Iterations will be terminated if a computed
*                         estimate of cond('Abar') exceeds 'cond_lim'.
*                         This is intended to prevent certain small or
*                         zero singular values of 'A' or 'Abar' from
*                         coming into effect and causing unwanted growth
*                         in the computed solution.
*
*                         'cond_lim' and 'damp_val' may be used separately or
*                         together to regularize ill-conditioned systems.
*
*                         Normally, 'cond_lim' should be in the range
*                         1000 to 1/rel_prec.
*                         Suggested value:
*                         cond_lim = 1/(100*rel_prec)  for compatible systems,
*                         cond_lim = 1/(10*sqrt(rel_prec)) for least squares.
*
*             Note:  If the user is not concerned about the parameters
*             'rel_mat_err', 'rel_rhs_err' and 'cond_lim', any or all of them
*             may be set to zero.  The effect will be the same as the values
*             'rel_prec', 'rel_prec' and 1/rel_prec respectively.
*
*     max_iter     input  An upper limit on the number of iterations.
*                         Suggested value:
*                         max_iter = n/2   for well-conditioned systems
*                                          with clustered singular values,
*                         max_iter = 4*n   otherwise.
*
*     lsqr_fp_out  input  Pointer to the file for sending printed output.  If
*                         not NULL, a summary will be printed to the file that
*                         'lsqr_fp_out' points to.
*
*     rhs_vec      input  The right hand side (rhs) vector 'b'.  This vector
*                         has a length of 'm' (i.e., 'num_rows').  The routine
*                         LSQR is designed to over-write 'rhs_vec'.
*
*     sol_vec      input  The initial guess for the solution vector 'x'.  This
*                         vector has a length of 'n' (i.e., 'num_cols').  The
*                         routine LSQR is designed to over-write 'sol_vec'.
*
*------------------------------------------------------------------------------
*/

typedef struct LSQR_INPUTS {
  long     num_rows;
  long     num_cols;
  double   damp_val;
  double   rel_mat_err;
  double   rel_rhs_err;
  double   cond_lim;
  long     max_iter;
  FILE     *lsqr_fp_out;
  dvec     *rhs_vec;
  dvec     *sol_vec;
} lsqr_input;

/*
*------------------------------------------------------------------------------
*
*     Output Quantities
*     -----------------
*
*     term_flag       output  An integer giving the reason for termination:
*
*                     0       x = x0  is the exact solution.
*                             No iterations were performed.
*
*                     1       The equations A*x = b are probably compatible.
*                             Norm(A*x - b) is sufficiently small, given the
*                             values of 'rel_mat_err' and 'rel_rhs_err'.
*
*                     2       The system A*x = b is probably not
*                             compatible.  A least-squares solution has
*                             been obtained that is sufficiently accurate,
*                             given the value of 'rel_mat_err'.
*
*                     3       An estimate of cond('Abar') has exceeded
*                             'cond_lim'.  The system A*x = b appears to be
*                             ill-conditioned.  Otherwise, there could be an
*                             error in subroutine APROD.
*
*                     4       The equations A*x = b are probably
*                             compatible.  Norm(A*x - b) is as small as
*                             seems reasonable on this machine.
*
*                     5       The system A*x = b is probably not
*                             compatible.  A least-squares solution has
*                             been obtained that is as accurate as seems
*                             reasonable on this machine.
*
*                     6       Cond('Abar') seems to be so large that there is
*                             no point in doing further iterations,
*                             given the precision of this machine.
*                             There could be an error in subroutine APROD.
*
*                     7       The iteration limit 'max_iter' was reached.
*
*     num_iters       output  The number of iterations performed.
*
*     frob_mat_norm   output  An estimate of the Frobenius norm of 'Abar'.
*                             This is the square-root of the sum of squares
*                             of the elements of 'Abar'.
*                             If 'damp_val' is small and if the columns of 'A'
*                             have all been scaled to have length 1.0,
*                             'frob_mat_norm' should increase to roughly
*                             sqrt('n').
*                             A radically different value for 'frob_mat_norm'
*                             may indicate an error in subroutine APROD (there
*                             may be an inconsistency between modes 1 and 2).
*
*     mat_cond_num    output  An estimate of cond('Abar'), the condition
*                             number of 'Abar'.  A very high value of
*                             'mat_cond_num'
*                             may again indicate an error in APROD.
*
*     resid_norm      output  An estimate of the final value of norm('rbar'),
*                             the function being minimized (see notation
*                             above).  This will be small if A*x = b has
*                             a solution.
*
*     mat_resid_norm  output  An estimate of the final value of
*                             norm( Abar(transpose)*rbar ), the norm of
*                             the residual for the usual normal equations.
*                             This should be small in all cases.
*                             ('mat_resid_norm'
*                             will often be smaller than the true value
*                             computed from the output vector 'x'.)
*
*     sol_norm        output  An estimate of the norm of the final
*                             solution vector 'x'.
*
*     sol_vec         output  The vector which returns the computed solution
*                             'x'.
*                             This vector has a length of 'n' (i.e.,
*                             'num_cols').
*
*     std_err_vec     output  The vector which returns the standard error
*                             estimates  for the components of 'x'.
*                             This vector has a length of 'n'
*                             (i.e., 'num_cols').  For each i, std_err_vec(i)
*                             is set to the value
*                             'resid_norm' * sqrt( sigma(i,i) / T ),
*                             where sigma(i,i) is an estimate of the i-th
*                             diagonal of the inverse of Abar(transpose)*Abar
*                             and  T = 1      if  m <= n,
*                                  T = m - n  if  m > n  and  damp_val = 0,
*                                  T = m      if  damp_val != 0.
*
*------------------------------------------------------------------------------
*/

typedef struct LSQR_OUTPUTS {
  long     term_flag;
  long     num_iters;
  double   frob_mat_norm;
  double   mat_cond_num;
  double   resid_norm;
  double   mat_resid_norm;
  double   sol_norm;
  dvec     *sol_vec;
  dvec     *std_err_vec;
} lsqr_output;

/*
*------------------------------------------------------------------------------
*
*     Workspace Quantities
*     --------------------
*
*     bidiag_wrk_vec  workspace  This float vector is a workspace for the
*                                current iteration of the
*                                Lanczos bidiagonalization.
*                                This vector has length 'n' (i.e., 'num_cols').
*
*     srch_dir_vec    workspace  This float vector contains the search direction
*                                at the current iteration.  This vector has a
*                                length of 'n' (i.e., 'num_cols').
*
*------------------------------------------------------------------------------
*/

typedef struct LSQR_WORK {
  dvec     *bidiag_wrk_vec;
  dvec     *srch_dir_vec;
} lsqr_work;

/*
*------------------------------------------------------------------------------
*
*     Functions Called
*     ----------------
*
*     mat_vec_prod       functions  A pointer to a function that performs the
*                                   matrix-vector multiplication.  The function
*                                   has the calling parameters:
*
*                                       APROD ( mode, x, y, prod_data ),
*
*                                   and it must perform the following functions:
*
*                                       If MODE = 0, compute  y = y + A*x,
*                                       If MODE = 1, compute  x = x + A^T*y.
*
*                                   The vectors x and y are input parameters in
*                                   both cases.
*                                   If mode = 0, y should be altered without
*                                   changing x.
*                                   If mode = 2, x should be altered without
*                                   changing y.
*                                   The argument prod_data is a pointer to a
*                                   user-defined structure that contains
*                                   any data need by the function APROD that is
*                                   not used by LSQR.  If no additional data is
*                                   needed by APROD, then prod_data should be
*                                   the NULL pointer.
*------------------------------------------------------------------------------
*/

typedef struct LSQR_FUNC {
  void     (*mat_vec_prod) (long, dvec *, dvec *, void *);
} lsqr_func;

/*---------------------*/
/* Function prototypes */
/*---------------------*/

void lsqr_error( const char *, int );

lvec *alloc_lvec( long );
void free_lvec( lvec * );

dvec *alloc_dvec( long );
void free_dvec( dvec * );

void alloc_lsqr_mem( lsqr_input **, lsqr_output **, lsqr_work **, lsqr_func **,
		     long, long );
void free_lsqr_mem( lsqr_input *, lsqr_output *, lsqr_work *, lsqr_func * );

lsqr_input *alloc_lsqr_in( long, long );
void free_lsqr_in( lsqr_input * );

lsqr_output *alloc_lsqr_out( long, long );
void free_lsqr_out( lsqr_output * );

lsqr_work *alloc_lsqr_wrk( long, long );
void free_lsqr_wrk( lsqr_work * );

lsqr_func *alloc_lsqr_fnc( );
void free_lsqr_fnc( lsqr_func * );

void lsqr( lsqr_input *, lsqr_output *, lsqr_work *, lsqr_func *, void * );

double dvec_norm2( dvec * );
void dvec_scale( double, dvec * );
void dvec_copy( dvec *, dvec * );

#endif
#ifndef R3BLANDCOSMIC1UTIL_H
#define R3BLANDCOSMIC1UTIL_H

#include "assert.h"
#include "R3BLandCosmic1LSQR.h"
#include "stdint.h"
#include "vector"
#include <string.h>

#define CMS_OK              0
#define CMS_TOO_LITTLE_DATA 1
#define CMS_TOO_MUCH_NOISE  2

struct flt_ped_sigma
{
  double mean;
  double var;
};

int compare_float(const void *a,const void *b);

int calc_mean_sigma(float *array,int n,float quantisation,
		flt_ped_sigma *pedsigma);

void sparse_linear_least_squares_mult(long, dvec *, dvec *, void *);

class val_err
{
public:
  double  _val; ///< value
  double _e2; ///< square error (1 sigma) on value (0 if unavailable (or should we use nan or inf?)
  // error is zero if the error is unavailable.  if the value _val is
  // unknown, then we set the error to infinity, which in a sense is
  // correct, and also will have some good consequences. I.e. when
  // fitting a line through this point, one should divide by the error
  // to find how bad the line is compared to the point, and with an
  // error of infinity, we'll get a zero-badness, implying that this
  // point doesn't care (or can't care)
  //
  // instead of storing the error we store the reciprocal of the square
  // of the error, as most calculations anyway rather like this.  This
  // avoids many /x*x and especially many sqrt(x)
  //
  // to get the error, do  1/sqrt(_e2)

public:
  void set_nan()
  {
    _val = double(NAN);
    _e2  = double(NAN);
  }
};

struct val_err_inv
{
public:
  double _val; ///< value
  double _e2_inv; ///< reciprocal of square error (1 sigma) on value (0 if unavailable (or should we use nan or inf?)
  // error is zero if the error is unavailable.  if the value _val is
  // unknown, then we set the error to infinity, which in a sense is
  // correct, and also will have some good consequences. I.e. when
  // fitting a line through this point, one should divide by the error
  // to find how bad the line is compared to the point, and with an
  // error of infinity, we'll get a zero-badness, implying that this
  // point doesn't care (or can't care)
  //
  // instead of storing the error we store the reciprocal of the square
  // of the error, as most calculations anyway rather like this.  This
  // avoids many /x*x and especially many sqrt(x)
  //
  // to get the error, do  1/sqrt(_e2)

public:
  void set_nan()
  {
    _val    = double(NAN);
    _e2_inv = double(NAN);
  }
};

struct sspllq_pair_sync
{
  uint32_t   _ind1;
  uint32_t   _ind2;

  double _coeff1;
  double _coeff2;
};

class sparse_linear_least_squares
{

public:
  sparse_linear_least_squares()
  {
    _in   = NULL;
    _out  = NULL;
    _work = NULL;
    _func = NULL;
  }

  virtual ~sparse_linear_least_squares()
  {

  }

public:
  lsqr_input   *_in;
  lsqr_output  *_out;
  lsqr_work    *_work;
  lsqr_func    *_func;

public:
  void set_size(long num_rows,long num_cols)
  {
    assert (!_in); // or you forgot to release

    alloc_lsqr_mem( &_in, &_out, &_work, &_func, num_rows, num_cols);
  }

  void release()
  {
    if (_in)
      free_lsqr_mem( _in, _out, _work, _func );

    _in = NULL;
  }

public:
  bool solve(bool verbose = false);

public:
  virtual void mult_forw(dvec * x, dvec * y) = 0;
  virtual void mult_backw(dvec * x, dvec * y) = 0;

};

class auto_ptr_free
{
public:
  auto_ptr_free(float* p)
  {
    _p = p;
  }

  ~auto_ptr_free()
  {
    ::free (_p);
  }

public:
  float* _p;

public:
  operator float* () const { assert (_p); return _p; }

  float* operator->() const { assert (_p); return _p; }

  void free()
  {
    ::free (_p);
    _p = NULL;
  }
};

class sparse_sync_pair_llq
  : public sparse_linear_least_squares
{
public:

public:
  std::vector<sspllq_pair_sync>  _pair_data;
  std::vector<double>            _pair_rhs;

  std::vector<val_err_inv>       _solution;

  uint32_t _active_vars;

public:
  void add_sync_pair(int ind1,double coeff1,int ind2,double coeff2,double rhs);

  bool solve(uint32_t max_vars,bool add_eqn_for_each_set = false);

public:
  virtual void mult_forw(dvec * vx, dvec * vy);
  virtual void mult_backw(dvec * vx, dvec * vy);

};

class sparse_sync_pair_llq_mean_zero
  : public sparse_sync_pair_llq
{


public:
  bool solve(uint32_t max_vars);




public:
  virtual void mult_forw(dvec * vx, dvec * vy);
  virtual void mult_backw(dvec * vx, dvec * vy);

};

/** \brief Try to weed out noise (far away) values.
 *
 * Given a list of values, this routine sorts them, calculates the
 * differences between them (sorted), and sorts these differences.
 * Assuming that the values comes from some distribution (typically
 * gaussian or so (rectangular...)), we try to calculate the 'end
 * points' of the distribution.  The end points are points beyond which
 * mostly noise occur (or a very tiny fraction of the values sampling
 * the distribution).  The user can then get calculate e.g. mean of the
 * distribution, ignoring values that are most probably noise.
 *
 * \param  data        Pointer to the data.
 * \param  n           Number of data points.
 * \param  min_accept  Output reference.  Min end point.
 * \param  max_accept  Output reference.  Max end point.
 * \param  accept_diff Typical difference expected (will be accepted).
 *                     Parameter needed for algorithm not to fail.
 * \return             True if successful.  False if not (too much suspected noise,
 *                     or too few values for any reasonable chance to determine what
 *                     is noise and what is good.)
 */

bool analyse_spread(const float* data,uint32_t n,float& min_accept,float& max_accept,
		    float accept_diff,float unreasonable_diff);

#endif
#ifndef R3BLANDTSYNCCONTFACT_H
#define R3BLANDTSYNCCONTFACT_H

#include "FairContFact.h"

#include "Rtypes.h"

class FairParSet;

class R3BLandTSyncContFact : public FairContFact
{
  public:
    /**
     * Default constructor.
     */
    R3BLandTSyncContFact();
    
    /**
     * Destructor.
     */
    ~R3BLandTSyncContFact()
    {
    }
    
    /**
     * Method to create a parameter container.
     * Called by FairRuntimeDB singleton class.
     * @param c a parameter container.
     * @return an instance of created parameter set.
     */
    FairParSet* createContainer(FairContainer* c);

  private:
    /**
     * Method to specify a list of parameter containers managed by this factory.
     * Support for additional detrectors has to be implemented in this function.
     */
    void setAllContainers();

    ClassDef(R3BLandTSyncContFact, 0);
};

#endif /* !R3BLANDTSYNCCONTFACT_H */
#ifndef R3BLANDTSYNCPAR_H
#define R3BLANDTSYNCPAR_H

#define NMODULEMAX 6000

#include "FairParGenericSet.h" // for FairParGenericSet

#include "TObjArray.h"

#include "R3BLandTSyncModulePar.h"

using namespace std;

class FairParamList;

class R3BLandTSyncPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BLandTSyncPar(const char* name = "LandTSyncPar",
               const char* title = "Time Synchronization",
               const char* context = "TestDefaultContext",
               Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BLandTSyncPar(void);

    /**
     * Method to reset the values of parameters.
     */
    void clear(void);

    /**
     * Method to store parameters using FairRuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

    /**
     * Method to retrieve parameters using FairRuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successful, else kFALSE.
     */
    Bool_t getParams(FairParamList* list);

    /**
     * Method to print value of parameters to the standard output.
     * Calls printParams() for every module container.
     */
    void printParams();

    /**
     * Method to add parameter container for a module.
     * Extends the array.
     * @param tch a parameter container for a detector module.
     */
    void AddModulePar(R3BLandTSyncModulePar* tch)
    {
        fTSyncParams->Add(tch);
    }

    /**
     * Method to retrieve the arrray with module containers.
     * @return an array with parameter containers of type R3BTSyncModulePar.
     */
    TObjArray* GetListOfModulePar()
    {
        return fTSyncParams;
    }

    /**
     * Method to get number of modules storred in array.
     * @return size of array.
     */
    Int_t GetNumModulePar()
    {
        return fTSyncParams->GetEntriesFast();
    }

    /**
     * Method to get single parameter container for a specific module.
     * @param idx an index of a module.
     * @return parameter container of this module.
     */
    R3BLandTSyncModulePar* GetModuleParAt(Int_t idx)
    {
        return (R3BLandTSyncModulePar*)fTSyncParams->At(idx);
    }

  private:

    TObjArray* fTSyncParams; /**< an array with parameter containers of all modules */

    ClassDef(R3BLandTSyncPar, 1);
};

#endif /* !R3BLANDTSYNCPAR_H*/
#ifndef R3BLANDTSYNCMODULEPAR_H
#define R3BLANDTSYNCMODULEPAR_H

#include "FairParGenericSet.h"

#define NCHMAX 5000

class FairParamList;


class R3BLandTSyncModulePar : public FairParGenericSet
{
public:
    /**
     * Standard constructor.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BLandTSyncModulePar ( const char* name = "TSyncModulePar",
                           const char* title = "Time synchronization of a module",
                           const char* context = "TestDefaultContext",
                           Bool_t own = kTRUE );

    /**
     * Destructor.
     * Frees the memory allocated by the object.
     */
    virtual ~R3BLandTSyncModulePar ( void );

    /**
     * A method to reset the parameter values. Sets all parameters to 0.
     */
    void clear ( void );

    /**
     * A method to write parameters using RuntimeDB.
     * @param list a list of parameters.
     */
    void putParams ( FairParamList* list );

    /**
     * A method to read parameters using RuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successfull, else kFALSE.
     */
    Bool_t getParams ( FairParamList* list );

    /**
     * A method to print value of parameters to the standard
     * output using FairLogger.
     */
    void printParams();

    /** Accessor functions **/
    Int_t GetModuleId() const {
        return fModuleId;
    }
    Int_t GetSide() const {
        return fSide;
    }
    Double_t GetTimeOffset() const {
        return fTimeOffset;
    }
    Double_t GetEnergieGain() const {
        return fEnergieGain;
    }
    Double_t GetEffectiveSpeed() const {
	return fEffectiveSpeed;
    }
    void SetModuleId ( Int_t i ) {
        fModuleId = i;
    }
    void SetSide ( Int_t i ) {
        fSide = i;
    }
    void SetTimeOffset ( Double_t i ) {
        fTimeOffset = i;
    }
    void SetEnergieGain ( Double_t i ) {
        fEnergieGain = i;
    }
    void SetEffectiveSpeed ( Double_t i ){
	fEffectiveSpeed = i;
    }

private:
    Int_t fModuleId;          /**< Index of a detector module. */
    Int_t fSide;              /**< Side of a module: for NeuLAND - L/R PMT. */
    Double_t fTimeOffset;
    Double_t fEnergieGain;
    Double_t fEffectiveSpeed;
    ClassDef ( R3BLandTSyncModulePar, 1 );
};

#endif /* !R3BLANDTSYNCMODULEPAR_H*/

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoLand", payloadCode, "@",
"R3BGeoLandPar", payloadCode, "@",
"R3BLand", payloadCode, "@",
"R3BLandAna", payloadCode, "@",
"R3BLandContFact", payloadCode, "@",
"R3BLandCosmic1", payloadCode, "@",
"R3BLandDigiPar", payloadCode, "@",
"R3BLandDigitizer", payloadCode, "@",
"R3BLandDigitizerQA", payloadCode, "@",
"R3BLandMapping", payloadCode, "@",
"R3BLandParamRead", payloadCode, "@",
"R3BLandPmt", payloadCode, "@",
"R3BLandRawAna", payloadCode, "@",
"R3BLandRawAnaS438b", payloadCode, "@",
"R3BLandTSync", payloadCode, "@",
"R3BLandTSyncContFact", payloadCode, "@",
"R3BLandTSyncModulePar", payloadCode, "@",
"R3BLandTSyncPar", payloadCode, "@",
"R3BLandTcal", payloadCode, "@",
"R3BLandTcalFill", payloadCode, "@",
"R3BLandTcalTest", payloadCode, "@",
"R3BLandTdiffFill", payloadCode, "@",
"R3BLandUnpack", payloadCode, "@",
"R3BNeuLandCluster", payloadCode, "@",
"R3BNeuLandClusterFinder", payloadCode, "@",
"R3BNeutHit", payloadCode, "@",
"R3BNeutronCalibr2D", payloadCode, "@",
"R3BNeutronTracker", payloadCode, "@",
"R3BNeutronTracker2D", payloadCode, "@",
"R3BPrimPart", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BLandDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BLandDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BLandDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BLandDict() {
  TriggerDictionaryInitialization_G__R3BLandDict_Impl();
}
