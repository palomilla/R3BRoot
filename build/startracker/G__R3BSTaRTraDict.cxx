// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIstartrackerdIG__R3BSTaRTraDict

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
#include "R3BSTaRTra.h"
#include "R3BGeoSTaRTra.h"
#include "R3BGeoSTaRTraPar.h"
#include "R3BSTaRTraContFact.h"
#include "R3BSTaRTraHitFinder.h"
#include "R3BSTaRTraDigit.h"
#include "R3BSTaRTraDigiPar.h"
#include "R3BSTaRTrackerEvent.h"
#include "unpack/R3BStarTrackRawHit.h"
#include "unpack/R3BStarTrackUnpack.h"
#include "unpack/R3BStarTrackUnpackPar.h"
#include "unpack/R3BStarTrackRawAna.h"
#include "unpack/R3BStarTrackStripAna.h"
#include "unpack/R3BStarTrackCalib.h"
#include "unpack/R3BStarTrackCalibPar.h"
#include "unpack/R3BStarTrackCalibParFinder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoSTaRTra(void *p = 0);
   static void *newArray_R3BGeoSTaRTra(Long_t size, void *p);
   static void delete_R3BGeoSTaRTra(void *p);
   static void deleteArray_R3BGeoSTaRTra(void *p);
   static void destruct_R3BGeoSTaRTra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoSTaRTra*)
   {
      ::R3BGeoSTaRTra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoSTaRTra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoSTaRTra", ::R3BGeoSTaRTra::Class_Version(), "invalid", 183,
                  typeid(::R3BGeoSTaRTra), DefineBehavior(ptr, ptr),
                  &::R3BGeoSTaRTra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoSTaRTra) );
      instance.SetNew(&new_R3BGeoSTaRTra);
      instance.SetNewArray(&newArray_R3BGeoSTaRTra);
      instance.SetDelete(&delete_R3BGeoSTaRTra);
      instance.SetDeleteArray(&deleteArray_R3BGeoSTaRTra);
      instance.SetDestructor(&destruct_R3BGeoSTaRTra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoSTaRTra*)
   {
      return GenerateInitInstanceLocal((::R3BGeoSTaRTra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoSTaRTra*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoSTaRTraPar(void *p = 0);
   static void *newArray_R3BGeoSTaRTraPar(Long_t size, void *p);
   static void delete_R3BGeoSTaRTraPar(void *p);
   static void deleteArray_R3BGeoSTaRTraPar(void *p);
   static void destruct_R3BGeoSTaRTraPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoSTaRTraPar*)
   {
      ::R3BGeoSTaRTraPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoSTaRTraPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoSTaRTraPar", ::R3BGeoSTaRTraPar::Class_Version(), "invalid", 210,
                  typeid(::R3BGeoSTaRTraPar), DefineBehavior(ptr, ptr),
                  &::R3BGeoSTaRTraPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoSTaRTraPar) );
      instance.SetNew(&new_R3BGeoSTaRTraPar);
      instance.SetNewArray(&newArray_R3BGeoSTaRTraPar);
      instance.SetDelete(&delete_R3BGeoSTaRTraPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoSTaRTraPar);
      instance.SetDestructor(&destruct_R3BGeoSTaRTraPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoSTaRTraPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoSTaRTraPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoSTaRTraPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTra(void *p = 0);
   static void *newArray_R3BSTaRTra(Long_t size, void *p);
   static void delete_R3BSTaRTra(void *p);
   static void deleteArray_R3BSTaRTra(void *p);
   static void destruct_R3BSTaRTra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTra*)
   {
      ::R3BSTaRTra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTra", ::R3BSTaRTra::Class_Version(), "invalid", 28,
                  typeid(::R3BSTaRTra), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTra) );
      instance.SetNew(&new_R3BSTaRTra);
      instance.SetNewArray(&newArray_R3BSTaRTra);
      instance.SetDelete(&delete_R3BSTaRTra);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTra);
      instance.SetDestructor(&destruct_R3BSTaRTra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTra*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTra*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraHitFinder(void *p = 0);
   static void *newArray_R3BSTaRTraHitFinder(Long_t size, void *p);
   static void delete_R3BSTaRTraHitFinder(void *p);
   static void deleteArray_R3BSTaRTraHitFinder(void *p);
   static void destruct_R3BSTaRTraHitFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraHitFinder*)
   {
      ::R3BSTaRTraHitFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraHitFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraHitFinder", ::R3BSTaRTraHitFinder::Class_Version(), "invalid", 267,
                  typeid(::R3BSTaRTraHitFinder), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraHitFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraHitFinder) );
      instance.SetNew(&new_R3BSTaRTraHitFinder);
      instance.SetNewArray(&newArray_R3BSTaRTraHitFinder);
      instance.SetDelete(&delete_R3BSTaRTraHitFinder);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraHitFinder);
      instance.SetDestructor(&destruct_R3BSTaRTraHitFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraHitFinder*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraHitFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraHitFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraDigit(void *p = 0);
   static void *newArray_R3BSTaRTraDigit(Long_t size, void *p);
   static void delete_R3BSTaRTraDigit(void *p);
   static void deleteArray_R3BSTaRTraDigit(void *p);
   static void destruct_R3BSTaRTraDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraDigit*)
   {
      ::R3BSTaRTraDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraDigit", ::R3BSTaRTraDigit::Class_Version(), "invalid", 362,
                  typeid(::R3BSTaRTraDigit), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraDigit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraDigit) );
      instance.SetNew(&new_R3BSTaRTraDigit);
      instance.SetNewArray(&newArray_R3BSTaRTraDigit);
      instance.SetDelete(&delete_R3BSTaRTraDigit);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraDigit);
      instance.SetDestructor(&destruct_R3BSTaRTraDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraDigit*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraDigit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraDigiPar(void *p = 0);
   static void *newArray_R3BSTaRTraDigiPar(Long_t size, void *p);
   static void delete_R3BSTaRTraDigiPar(void *p);
   static void deleteArray_R3BSTaRTraDigiPar(void *p);
   static void destruct_R3BSTaRTraDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraDigiPar*)
   {
      ::R3BSTaRTraDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraDigiPar", ::R3BSTaRTraDigiPar::Class_Version(), "R3BSTaRTraDigiPar.h", 10,
                  typeid(::R3BSTaRTraDigiPar), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraDigiPar) );
      instance.SetNew(&new_R3BSTaRTraDigiPar);
      instance.SetNewArray(&newArray_R3BSTaRTraDigiPar);
      instance.SetDelete(&delete_R3BSTaRTraDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraDigiPar);
      instance.SetDestructor(&destruct_R3BSTaRTraDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraDigiPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTraContFact(void *p = 0);
   static void *newArray_R3BSTaRTraContFact(Long_t size, void *p);
   static void delete_R3BSTaRTraContFact(void *p);
   static void deleteArray_R3BSTaRTraContFact(void *p);
   static void destruct_R3BSTaRTraContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTraContFact*)
   {
      ::R3BSTaRTraContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTraContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTraContFact", ::R3BSTaRTraContFact::Class_Version(), "invalid", 237,
                  typeid(::R3BSTaRTraContFact), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTraContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTraContFact) );
      instance.SetNew(&new_R3BSTaRTraContFact);
      instance.SetNewArray(&newArray_R3BSTaRTraContFact);
      instance.SetDelete(&delete_R3BSTaRTraContFact);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTraContFact);
      instance.SetDestructor(&destruct_R3BSTaRTraContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTraContFact*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTraContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTraContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSTaRTrackerEvent(void *p = 0);
   static void *newArray_R3BSTaRTrackerEvent(Long_t size, void *p);
   static void delete_R3BSTaRTrackerEvent(void *p);
   static void deleteArray_R3BSTaRTrackerEvent(void *p);
   static void destruct_R3BSTaRTrackerEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSTaRTrackerEvent*)
   {
      ::R3BSTaRTrackerEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSTaRTrackerEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSTaRTrackerEvent", ::R3BSTaRTrackerEvent::Class_Version(), "invalid", 481,
                  typeid(::R3BSTaRTrackerEvent), DefineBehavior(ptr, ptr),
                  &::R3BSTaRTrackerEvent::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSTaRTrackerEvent) );
      instance.SetNew(&new_R3BSTaRTrackerEvent);
      instance.SetNewArray(&newArray_R3BSTaRTrackerEvent);
      instance.SetDelete(&delete_R3BSTaRTrackerEvent);
      instance.SetDeleteArray(&deleteArray_R3BSTaRTrackerEvent);
      instance.SetDestructor(&destruct_R3BSTaRTrackerEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSTaRTrackerEvent*)
   {
      return GenerateInitInstanceLocal((::R3BSTaRTrackerEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSTaRTrackerEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BStarTrackUnpack(void *p);
   static void deleteArray_R3BStarTrackUnpack(void *p);
   static void destruct_R3BStarTrackUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackUnpack*)
   {
      ::R3BStarTrackUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackUnpack", ::R3BStarTrackUnpack::Class_Version(), "invalid", 639,
                  typeid(::R3BStarTrackUnpack), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackUnpack) );
      instance.SetDelete(&delete_R3BStarTrackUnpack);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackUnpack);
      instance.SetDestructor(&destruct_R3BStarTrackUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackUnpack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackUnpackPar(void *p = 0);
   static void *newArray_R3BStarTrackUnpackPar(Long_t size, void *p);
   static void delete_R3BStarTrackUnpackPar(void *p);
   static void deleteArray_R3BStarTrackUnpackPar(void *p);
   static void destruct_R3BStarTrackUnpackPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackUnpackPar*)
   {
      ::R3BStarTrackUnpackPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackUnpackPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackUnpackPar", ::R3BStarTrackUnpackPar::Class_Version(), "invalid", 733,
                  typeid(::R3BStarTrackUnpackPar), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackUnpackPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackUnpackPar) );
      instance.SetNew(&new_R3BStarTrackUnpackPar);
      instance.SetNewArray(&newArray_R3BStarTrackUnpackPar);
      instance.SetDelete(&delete_R3BStarTrackUnpackPar);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackUnpackPar);
      instance.SetDestructor(&destruct_R3BStarTrackUnpackPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackUnpackPar*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackUnpackPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackUnpackPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackRawAna(void *p = 0);
   static void *newArray_R3BStarTrackRawAna(Long_t size, void *p);
   static void delete_R3BStarTrackRawAna(void *p);
   static void deleteArray_R3BStarTrackRawAna(void *p);
   static void destruct_R3BStarTrackRawAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackRawAna*)
   {
      ::R3BStarTrackRawAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackRawAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackRawAna", ::R3BStarTrackRawAna::Class_Version(), "invalid", 804,
                  typeid(::R3BStarTrackRawAna), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackRawAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackRawAna) );
      instance.SetNew(&new_R3BStarTrackRawAna);
      instance.SetNewArray(&newArray_R3BStarTrackRawAna);
      instance.SetDelete(&delete_R3BStarTrackRawAna);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackRawAna);
      instance.SetDestructor(&destruct_R3BStarTrackRawAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackRawAna*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackRawAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackRawAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackRawHit(void *p = 0);
   static void *newArray_R3BStarTrackRawHit(Long_t size, void *p);
   static void delete_R3BStarTrackRawHit(void *p);
   static void deleteArray_R3BStarTrackRawHit(void *p);
   static void destruct_R3BStarTrackRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackRawHit*)
   {
      ::R3BStarTrackRawHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackRawHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackRawHit", ::R3BStarTrackRawHit::Class_Version(), "invalid", 547,
                  typeid(::R3BStarTrackRawHit), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackRawHit) );
      instance.SetNew(&new_R3BStarTrackRawHit);
      instance.SetNewArray(&newArray_R3BStarTrackRawHit);
      instance.SetDelete(&delete_R3BStarTrackRawHit);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackRawHit);
      instance.SetDestructor(&destruct_R3BStarTrackRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackRawHit*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackRawHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackRawHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackStripAna(void *p = 0);
   static void *newArray_R3BStarTrackStripAna(Long_t size, void *p);
   static void delete_R3BStarTrackStripAna(void *p);
   static void deleteArray_R3BStarTrackStripAna(void *p);
   static void destruct_R3BStarTrackStripAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackStripAna*)
   {
      ::R3BStarTrackStripAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackStripAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackStripAna", ::R3BStarTrackStripAna::Class_Version(), "invalid", 864,
                  typeid(::R3BStarTrackStripAna), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackStripAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackStripAna) );
      instance.SetNew(&new_R3BStarTrackStripAna);
      instance.SetNewArray(&newArray_R3BStarTrackStripAna);
      instance.SetDelete(&delete_R3BStarTrackStripAna);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackStripAna);
      instance.SetDestructor(&destruct_R3BStarTrackStripAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackStripAna*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackStripAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackStripAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackCalib(void *p = 0);
   static void *newArray_R3BStarTrackCalib(Long_t size, void *p);
   static void delete_R3BStarTrackCalib(void *p);
   static void deleteArray_R3BStarTrackCalib(void *p);
   static void destruct_R3BStarTrackCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackCalib*)
   {
      ::R3BStarTrackCalib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackCalib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackCalib", ::R3BStarTrackCalib::Class_Version(), "invalid", 920,
                  typeid(::R3BStarTrackCalib), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackCalib::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackCalib) );
      instance.SetNew(&new_R3BStarTrackCalib);
      instance.SetNewArray(&newArray_R3BStarTrackCalib);
      instance.SetDelete(&delete_R3BStarTrackCalib);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackCalib);
      instance.SetDestructor(&destruct_R3BStarTrackCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackCalib*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackCalib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackCalib*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackCalibPar(void *p = 0);
   static void *newArray_R3BStarTrackCalibPar(Long_t size, void *p);
   static void delete_R3BStarTrackCalibPar(void *p);
   static void deleteArray_R3BStarTrackCalibPar(void *p);
   static void destruct_R3BStarTrackCalibPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackCalibPar*)
   {
      ::R3BStarTrackCalibPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackCalibPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackCalibPar", ::R3BStarTrackCalibPar::Class_Version(), "R3BStarTrackCalibPar.h", 17,
                  typeid(::R3BStarTrackCalibPar), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackCalibPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackCalibPar) );
      instance.SetNew(&new_R3BStarTrackCalibPar);
      instance.SetNewArray(&newArray_R3BStarTrackCalibPar);
      instance.SetDelete(&delete_R3BStarTrackCalibPar);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackCalibPar);
      instance.SetDestructor(&destruct_R3BStarTrackCalibPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackCalibPar*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackCalibPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackCalibPar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStarTrackCalibParFinder(void *p = 0);
   static void *newArray_R3BStarTrackCalibParFinder(Long_t size, void *p);
   static void delete_R3BStarTrackCalibParFinder(void *p);
   static void deleteArray_R3BStarTrackCalibParFinder(void *p);
   static void destruct_R3BStarTrackCalibParFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStarTrackCalibParFinder*)
   {
      ::R3BStarTrackCalibParFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStarTrackCalibParFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStarTrackCalibParFinder", ::R3BStarTrackCalibParFinder::Class_Version(), "invalid", 1067,
                  typeid(::R3BStarTrackCalibParFinder), DefineBehavior(ptr, ptr),
                  &::R3BStarTrackCalibParFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStarTrackCalibParFinder) );
      instance.SetNew(&new_R3BStarTrackCalibParFinder);
      instance.SetNewArray(&newArray_R3BStarTrackCalibParFinder);
      instance.SetDelete(&delete_R3BStarTrackCalibParFinder);
      instance.SetDeleteArray(&deleteArray_R3BStarTrackCalibParFinder);
      instance.SetDestructor(&destruct_R3BStarTrackCalibParFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStarTrackCalibParFinder*)
   {
      return GenerateInitInstanceLocal((::R3BStarTrackCalibParFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BStarTrackCalibParFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoSTaRTra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoSTaRTra::Class_Name()
{
   return "R3BGeoSTaRTra";
}

//______________________________________________________________________________
const char *R3BGeoSTaRTra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoSTaRTra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoSTaRTra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoSTaRTra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoSTaRTraPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoSTaRTraPar::Class_Name()
{
   return "R3BGeoSTaRTraPar";
}

//______________________________________________________________________________
const char *R3BGeoSTaRTraPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTraPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoSTaRTraPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTraPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoSTaRTraPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTraPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoSTaRTraPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoSTaRTraPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTra::Class_Name()
{
   return "R3BSTaRTra";
}

//______________________________________________________________________________
const char *R3BSTaRTra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraHitFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraHitFinder::Class_Name()
{
   return "R3BSTaRTraHitFinder";
}

//______________________________________________________________________________
const char *R3BSTaRTraHitFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHitFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraHitFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHitFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraHitFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHitFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraHitFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraHitFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraDigit::Class_Name()
{
   return "R3BSTaRTraDigit";
}

//______________________________________________________________________________
const char *R3BSTaRTraDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraDigiPar::Class_Name()
{
   return "R3BSTaRTraDigiPar";
}

//______________________________________________________________________________
const char *R3BSTaRTraDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTraContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTraContFact::Class_Name()
{
   return "R3BSTaRTraContFact";
}

//______________________________________________________________________________
const char *R3BSTaRTraContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTraContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTraContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTraContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTraContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSTaRTrackerEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSTaRTrackerEvent::Class_Name()
{
   return "R3BSTaRTrackerEvent";
}

//______________________________________________________________________________
const char *R3BSTaRTrackerEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSTaRTrackerEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSTaRTrackerEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSTaRTrackerEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackUnpack::Class_Name()
{
   return "R3BStarTrackUnpack";
}

//______________________________________________________________________________
const char *R3BStarTrackUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackUnpackPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackUnpackPar::Class_Name()
{
   return "R3BStarTrackUnpackPar";
}

//______________________________________________________________________________
const char *R3BStarTrackUnpackPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpackPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackUnpackPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpackPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackUnpackPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpackPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackUnpackPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackUnpackPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackRawAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackRawAna::Class_Name()
{
   return "R3BStarTrackRawAna";
}

//______________________________________________________________________________
const char *R3BStarTrackRawAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackRawAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackRawAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackRawAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackRawHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackRawHit::Class_Name()
{
   return "R3BStarTrackRawHit";
}

//______________________________________________________________________________
const char *R3BStarTrackRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackRawHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackStripAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackStripAna::Class_Name()
{
   return "R3BStarTrackStripAna";
}

//______________________________________________________________________________
const char *R3BStarTrackStripAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackStripAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackStripAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackStripAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackStripAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackStripAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackStripAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackStripAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackCalib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackCalib::Class_Name()
{
   return "R3BStarTrackCalib";
}

//______________________________________________________________________________
const char *R3BStarTrackCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackCalibPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackCalibPar::Class_Name()
{
   return "R3BStarTrackCalibPar";
}

//______________________________________________________________________________
const char *R3BStarTrackCalibPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackCalibPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackCalibPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackCalibPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStarTrackCalibParFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStarTrackCalibParFinder::Class_Name()
{
   return "R3BStarTrackCalibParFinder";
}

//______________________________________________________________________________
const char *R3BStarTrackCalibParFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibParFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStarTrackCalibParFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibParFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStarTrackCalibParFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibParFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStarTrackCalibParFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStarTrackCalibParFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoSTaRTra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoSTaRTra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoSTaRTra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoSTaRTra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoSTaRTra(void *p) {
      return  p ? new(p) ::R3BGeoSTaRTra : new ::R3BGeoSTaRTra;
   }
   static void *newArray_R3BGeoSTaRTra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoSTaRTra[nElements] : new ::R3BGeoSTaRTra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoSTaRTra(void *p) {
      delete ((::R3BGeoSTaRTra*)p);
   }
   static void deleteArray_R3BGeoSTaRTra(void *p) {
      delete [] ((::R3BGeoSTaRTra*)p);
   }
   static void destruct_R3BGeoSTaRTra(void *p) {
      typedef ::R3BGeoSTaRTra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoSTaRTra

//______________________________________________________________________________
void R3BGeoSTaRTraPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoSTaRTraPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoSTaRTraPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoSTaRTraPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoSTaRTraPar(void *p) {
      return  p ? new(p) ::R3BGeoSTaRTraPar : new ::R3BGeoSTaRTraPar;
   }
   static void *newArray_R3BGeoSTaRTraPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoSTaRTraPar[nElements] : new ::R3BGeoSTaRTraPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoSTaRTraPar(void *p) {
      delete ((::R3BGeoSTaRTraPar*)p);
   }
   static void deleteArray_R3BGeoSTaRTraPar(void *p) {
      delete [] ((::R3BGeoSTaRTraPar*)p);
   }
   static void destruct_R3BGeoSTaRTraPar(void *p) {
      typedef ::R3BGeoSTaRTraPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoSTaRTraPar

//______________________________________________________________________________
void R3BSTaRTra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTra(void *p) {
      return  p ? new(p) ::R3BSTaRTra : new ::R3BSTaRTra;
   }
   static void *newArray_R3BSTaRTra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTra[nElements] : new ::R3BSTaRTra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTra(void *p) {
      delete ((::R3BSTaRTra*)p);
   }
   static void deleteArray_R3BSTaRTra(void *p) {
      delete [] ((::R3BSTaRTra*)p);
   }
   static void destruct_R3BSTaRTra(void *p) {
      typedef ::R3BSTaRTra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTra

//______________________________________________________________________________
void R3BSTaRTraHitFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraHitFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraHitFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraHitFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraHitFinder(void *p) {
      return  p ? new(p) ::R3BSTaRTraHitFinder : new ::R3BSTaRTraHitFinder;
   }
   static void *newArray_R3BSTaRTraHitFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraHitFinder[nElements] : new ::R3BSTaRTraHitFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraHitFinder(void *p) {
      delete ((::R3BSTaRTraHitFinder*)p);
   }
   static void deleteArray_R3BSTaRTraHitFinder(void *p) {
      delete [] ((::R3BSTaRTraHitFinder*)p);
   }
   static void destruct_R3BSTaRTraHitFinder(void *p) {
      typedef ::R3BSTaRTraHitFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraHitFinder

//______________________________________________________________________________
void R3BSTaRTraDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraDigit(void *p) {
      return  p ? new(p) ::R3BSTaRTraDigit : new ::R3BSTaRTraDigit;
   }
   static void *newArray_R3BSTaRTraDigit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraDigit[nElements] : new ::R3BSTaRTraDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraDigit(void *p) {
      delete ((::R3BSTaRTraDigit*)p);
   }
   static void deleteArray_R3BSTaRTraDigit(void *p) {
      delete [] ((::R3BSTaRTraDigit*)p);
   }
   static void destruct_R3BSTaRTraDigit(void *p) {
      typedef ::R3BSTaRTraDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraDigit

//______________________________________________________________________________
void R3BSTaRTraDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraDigiPar(void *p) {
      return  p ? new(p) ::R3BSTaRTraDigiPar : new ::R3BSTaRTraDigiPar;
   }
   static void *newArray_R3BSTaRTraDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraDigiPar[nElements] : new ::R3BSTaRTraDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraDigiPar(void *p) {
      delete ((::R3BSTaRTraDigiPar*)p);
   }
   static void deleteArray_R3BSTaRTraDigiPar(void *p) {
      delete [] ((::R3BSTaRTraDigiPar*)p);
   }
   static void destruct_R3BSTaRTraDigiPar(void *p) {
      typedef ::R3BSTaRTraDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraDigiPar

//______________________________________________________________________________
void R3BSTaRTraContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTraContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTraContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTraContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTraContFact(void *p) {
      return  p ? new(p) ::R3BSTaRTraContFact : new ::R3BSTaRTraContFact;
   }
   static void *newArray_R3BSTaRTraContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTraContFact[nElements] : new ::R3BSTaRTraContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTraContFact(void *p) {
      delete ((::R3BSTaRTraContFact*)p);
   }
   static void deleteArray_R3BSTaRTraContFact(void *p) {
      delete [] ((::R3BSTaRTraContFact*)p);
   }
   static void destruct_R3BSTaRTraContFact(void *p) {
      typedef ::R3BSTaRTraContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTraContFact

//______________________________________________________________________________
void R3BSTaRTrackerEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSTaRTrackerEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSTaRTrackerEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSTaRTrackerEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSTaRTrackerEvent(void *p) {
      return  p ? new(p) ::R3BSTaRTrackerEvent : new ::R3BSTaRTrackerEvent;
   }
   static void *newArray_R3BSTaRTrackerEvent(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSTaRTrackerEvent[nElements] : new ::R3BSTaRTrackerEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSTaRTrackerEvent(void *p) {
      delete ((::R3BSTaRTrackerEvent*)p);
   }
   static void deleteArray_R3BSTaRTrackerEvent(void *p) {
      delete [] ((::R3BSTaRTrackerEvent*)p);
   }
   static void destruct_R3BSTaRTrackerEvent(void *p) {
      typedef ::R3BSTaRTrackerEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSTaRTrackerEvent

//______________________________________________________________________________
void R3BStarTrackUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BStarTrackUnpack(void *p) {
      delete ((::R3BStarTrackUnpack*)p);
   }
   static void deleteArray_R3BStarTrackUnpack(void *p) {
      delete [] ((::R3BStarTrackUnpack*)p);
   }
   static void destruct_R3BStarTrackUnpack(void *p) {
      typedef ::R3BStarTrackUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackUnpack

//______________________________________________________________________________
void R3BStarTrackUnpackPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackUnpackPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackUnpackPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackUnpackPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackUnpackPar(void *p) {
      return  p ? new(p) ::R3BStarTrackUnpackPar : new ::R3BStarTrackUnpackPar;
   }
   static void *newArray_R3BStarTrackUnpackPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackUnpackPar[nElements] : new ::R3BStarTrackUnpackPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackUnpackPar(void *p) {
      delete ((::R3BStarTrackUnpackPar*)p);
   }
   static void deleteArray_R3BStarTrackUnpackPar(void *p) {
      delete [] ((::R3BStarTrackUnpackPar*)p);
   }
   static void destruct_R3BStarTrackUnpackPar(void *p) {
      typedef ::R3BStarTrackUnpackPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackUnpackPar

//______________________________________________________________________________
void R3BStarTrackRawAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackRawAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackRawAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackRawAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackRawAna(void *p) {
      return  p ? new(p) ::R3BStarTrackRawAna : new ::R3BStarTrackRawAna;
   }
   static void *newArray_R3BStarTrackRawAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackRawAna[nElements] : new ::R3BStarTrackRawAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackRawAna(void *p) {
      delete ((::R3BStarTrackRawAna*)p);
   }
   static void deleteArray_R3BStarTrackRawAna(void *p) {
      delete [] ((::R3BStarTrackRawAna*)p);
   }
   static void destruct_R3BStarTrackRawAna(void *p) {
      typedef ::R3BStarTrackRawAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackRawAna

//______________________________________________________________________________
void R3BStarTrackRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackRawHit(void *p) {
      return  p ? new(p) ::R3BStarTrackRawHit : new ::R3BStarTrackRawHit;
   }
   static void *newArray_R3BStarTrackRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackRawHit[nElements] : new ::R3BStarTrackRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackRawHit(void *p) {
      delete ((::R3BStarTrackRawHit*)p);
   }
   static void deleteArray_R3BStarTrackRawHit(void *p) {
      delete [] ((::R3BStarTrackRawHit*)p);
   }
   static void destruct_R3BStarTrackRawHit(void *p) {
      typedef ::R3BStarTrackRawHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackRawHit

//______________________________________________________________________________
void R3BStarTrackStripAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackStripAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackStripAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackStripAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackStripAna(void *p) {
      return  p ? new(p) ::R3BStarTrackStripAna : new ::R3BStarTrackStripAna;
   }
   static void *newArray_R3BStarTrackStripAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackStripAna[nElements] : new ::R3BStarTrackStripAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackStripAna(void *p) {
      delete ((::R3BStarTrackStripAna*)p);
   }
   static void deleteArray_R3BStarTrackStripAna(void *p) {
      delete [] ((::R3BStarTrackStripAna*)p);
   }
   static void destruct_R3BStarTrackStripAna(void *p) {
      typedef ::R3BStarTrackStripAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackStripAna

//______________________________________________________________________________
void R3BStarTrackCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackCalib(void *p) {
      return  p ? new(p) ::R3BStarTrackCalib : new ::R3BStarTrackCalib;
   }
   static void *newArray_R3BStarTrackCalib(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackCalib[nElements] : new ::R3BStarTrackCalib[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackCalib(void *p) {
      delete ((::R3BStarTrackCalib*)p);
   }
   static void deleteArray_R3BStarTrackCalib(void *p) {
      delete [] ((::R3BStarTrackCalib*)p);
   }
   static void destruct_R3BStarTrackCalib(void *p) {
      typedef ::R3BStarTrackCalib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackCalib

//______________________________________________________________________________
void R3BStarTrackCalibPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackCalibPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackCalibPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackCalibPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackCalibPar(void *p) {
      return  p ? new(p) ::R3BStarTrackCalibPar : new ::R3BStarTrackCalibPar;
   }
   static void *newArray_R3BStarTrackCalibPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackCalibPar[nElements] : new ::R3BStarTrackCalibPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackCalibPar(void *p) {
      delete ((::R3BStarTrackCalibPar*)p);
   }
   static void deleteArray_R3BStarTrackCalibPar(void *p) {
      delete [] ((::R3BStarTrackCalibPar*)p);
   }
   static void destruct_R3BStarTrackCalibPar(void *p) {
      typedef ::R3BStarTrackCalibPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackCalibPar

//______________________________________________________________________________
void R3BStarTrackCalibParFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStarTrackCalibParFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStarTrackCalibParFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStarTrackCalibParFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStarTrackCalibParFinder(void *p) {
      return  p ? new(p) ::R3BStarTrackCalibParFinder : new ::R3BStarTrackCalibParFinder;
   }
   static void *newArray_R3BStarTrackCalibParFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStarTrackCalibParFinder[nElements] : new ::R3BStarTrackCalibParFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStarTrackCalibParFinder(void *p) {
      delete ((::R3BStarTrackCalibParFinder*)p);
   }
   static void deleteArray_R3BStarTrackCalibParFinder(void *p) {
      delete [] ((::R3BStarTrackCalibParFinder*)p);
   }
   static void destruct_R3BStarTrackCalibParFinder(void *p) {
      typedef ::R3BStarTrackCalibParFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStarTrackCalibParFinder

namespace {
  void TriggerDictionaryInitialization_G__R3BSTaRTraDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/startracker",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/startracker/unpack",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/calData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/caloData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/dchData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/gfiData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/mtofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/tofData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/landData",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bdata/startrackerData",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/startracker/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoSTaRTra;
class R3BGeoSTaRTraPar;
class R3BSTaRTra;
class R3BSTaRTraHitFinder;
class R3BSTaRTraDigit;
class __attribute__((annotate("$clingAutoload$R3BSTaRTraDigiPar.h")))  R3BSTaRTraDigiPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TRA parameter containers)ATTRDUMP"))) R3BSTaRTraContFact;
class R3BSTaRTrackerEvent;
class R3BStarTrackUnpack;
class R3BStarTrackUnpackPar;
class R3BStarTrackRawAna;
class R3BStarTrackRawHit;
class R3BStarTrackStripAna;
class R3BStarTrackCalib;
class __attribute__((annotate("$clingAutoload$R3BStarTrackCalibPar.h")))  R3BStarTrackCalibPar;
class R3BStarTrackCalibParFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                        R3BSTaRTra header file                     -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BSTaRTra.h
 **/


#ifndef R3BSTARTRA_H
#define R3BSTARTRA_H

#include "R3BDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class R3BSTaRTraPoint;
class FairVolume;



class R3BSTaRTra : public R3BDetector
{

 public:

  /** Default constructor **/
  R3BSTaRTra();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  R3BSTaRTra(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~R3BSTaRTra();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a R3BTraPoint and adds it to the
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
  virtual void Print(Option_t *option="") const;


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
  virtual Bool_t CheckIfSensitive(std::string name);
  virtual void Initialize();
  virtual void SetSpecialPhysicsCuts() {}

//  void SaveGeoParams();

  private:


    /** Track information to be stored until the track leaves the
	active volume. **/
    Int_t          fTrackID;           //!  track index
    Int_t          fVolumeID;          //!  volume id
    Int_t          fDetCopyID;       //!  Det volume id  // added by Marc
    Int_t          fsector;            //!  volume id
    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Int_t          fPosIndex;          //!
    TClonesArray*  fTraCollection;     //!  The hit collection
    Bool_t         kGeoSaved;          //!
    TList *flGeoPar; //!

    /** Private method AddHit
     **
     ** Adds a TraPoint to the HitCollection
     **/
    R3BSTaRTraPoint* AddHit(Int_t trackID, Int_t detID, Int_t detCopyID,    // Int_t detCopyID added by Marc
			TVector3 posIn,
			TVector3 pos_out, TVector3 momIn, 
			TVector3 momOut, Double_t time, 
			Double_t length, Double_t eLoss);


    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();


    ClassDef(R3BSTaRTra,1);

};


inline void R3BSTaRTra::ResetParameters() {
  fTrackID = fVolumeID = 0; fDetCopyID = 0;   // fDetCopyID added by Marc
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = 0;
  fPosIndex = 0;
};


#endif 
#ifndef R3BGEOSTARTRA_H
#define R3BGEOSTARTRA_H

#include "FairGeoSet.h"

class  R3BGeoSTaRTra : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  R3BGeoSTaRTra();
  ~R3BGeoSTaRTra() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(R3BGeoSTaRTra,0) // Class for STS
};

inline Int_t R3BGeoSTaRTra::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !R3BGEOSTARTRA_H */
#ifndef R3BGEOSTARTRAPAR_H
#define R3BGEOSTARTRAPAR_H
 
#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoSTaRTraPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoSTaRTraPar(const char* name="R3BGeoSTaRTraPar",
             const char* title="STaRTrack Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoSTaRTraPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoSTaRTraPar,1)
};

#endif /* !R3BGEOSTARTRAPAR_H */
#ifndef R3BSTARTRACONTFACT_H
#define R3BSTARTRACONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BSTaRTraContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BSTaRTraContFact();
  ~R3BSTaRTraContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( R3BSTaRTraContFact,0) // Factory for all TRA parameter containers
};

#endif  /* !R3BTRACONTFACT_H */
// -------------------------------------------------------------------------
// -----                   R3BSTaRTraHitFinder source file                 -----
// -----                  Created 01/06/11  by N.Ashwood               -----
// -------------------------------------------------------------------------

/**  R3BSTaRTraHitFinder.h
 **/


#ifndef R3BSTARTRAHITFINDER_H
#define R3BSTARTRAHITFINDER_H

#include "FairTask.h"
#include "R3BSTaRTrackerHit.h"

class TClonesArray;

class R3BSTaRTraHitFinder : public FairTask
{
	
public:
	
	/** Default constructor **/  
	R3BSTaRTraHitFinder();
	
	/** Destructor **/
	~R3BSTaRTraHitFinder();
	
	/** Virtual method Exec **/
	virtual void Exec(Option_t* opt);

	/** Virtual method Reset **/
	virtual void Reset();
	
	/** Public method SetExperimentalResolution
	 **
	 ** Defines the experimental resolution of the tracker. 
	 **
	 **/
	void SetExperimentalResolution(Double_t trackerRes);
	
	/** Public method SetDetectionThreshold
	 **
	 ** Defines the minimum energy requested in a strip to be considered in a tracker Hit 
	 **
	 **/
	void SetDetectionThreshold(Double_t thresholdEne);
	
		
protected:
	
	
	/** Virtual method Init **/
	virtual InitStatus Init();
	
	/** Virtual method ReInit **/
	virtual InitStatus ReInit();
		
	/** Virtual method Finish **/
	virtual void Finish();
	
	
	TClonesArray* fSTaRTrackerHitCA;
	TClonesArray* fSTaRTraHitCA;
	
	// Minimum energy requested in a crystal to be considered in a calorimeter Hit 
	Double_t fThreshold;
	// Experimental resolution @ 1 MeV  
	Double_t fTrackerResolution;

	
private:
	
	/** Private method ExpResSmearing **/
    Double_t ExpResSmearing(Double_t inputEnergy);
	/** Private method GetThetaScatZero **/
	Double_t GetThetaScatZero(Double_t x, Double_t y, Double_t z);
	/** Private method GetPhiScatZero **/
    Double_t GetPhiScatZero(Double_t x, Double_t y, Double_t z);
    
	//R3BTrackerHit* AddHit(Double_t ene,Int_t det);
	R3BSTaRTrackerHit* AddHit(Double_t ene,Int_t det,Double_t x,Double_t y,Double_t z,Double_t px, Double_t py, Double_t pz, Double_t th,Double_t phi);
	
	
	ClassDef(R3BSTaRTraHitFinder,1);
	
};




#endif 
// -------------------------------------------------------------------------
// -----                   R3BSTaRTraHitFinder source file                 -----
// -----                  Created 01/06/11  by N.Ashwood               -----
// -------------------------------------------------------------------------

/**  R3BSTaRTraHitFinder.h
 **/


#ifndef R3BSTARTRADIGIT_H
#define R3BSTARTRADIGIT_H

#include "FairTask.h"
#include "R3BSTaRTrackerDigitHit.h"

#include "R3BSTaRTraDigiPar.h"

class TClonesArray;

class R3BSTaRTraDigit : public FairTask
{
	
public:
	
	/** Default constructor **/  
	R3BSTaRTraDigit();
	
	/** Destructor **/
	~R3BSTaRTraDigit();
	
	/** Virtual method Exec **/
	virtual void Exec(Option_t* opt);

	/** Virtual method Reset **/
	virtual void Reset();
	
	/** Public method SetExperimentalResolution
	 **
	 ** Defines the experimental resolution of the tracker. 
	 **
	 **/
	void SetExperimentalResolution(Double_t trackerRes);
	
	/** Public method SetDetectionThreshold
	 **
	 ** Defines the minimum energy requested in a strip to be considered in a tracker Hit 
	 **
	 **/
	void SetDetectionThreshold(Double_t thresholdEne);
	
		
protected:
	
	
	/** Virtual method Init **/
	virtual InitStatus Init();
	
	/** Virtual method ReInit **/
	virtual InitStatus ReInit();
		
	/** Virtual method Finish **/
	virtual void Finish();
	
	
	TClonesArray* fSTaRTrackerHitCA;
	TClonesArray* fSTaRTraHitCA;
	
	// Minimum energy requested in a crystal to be considered in a calorimeter Hit 
	Double_t fThreshold;
	// Experimental resolution @ 1 MeV  
	Double_t fTrackerResolution;

        // Parameter class
        R3BSTaRTraDigiPar* fSTaRTraDigiPar;
	
private:
	
	/** Private method ExpResSmearing **/
    Double_t ExpResSmearing(Double_t inputEnergy);

	/** Private method Addhit **/
	//R3BSTaRTrackerDigitHit* AddHit(Double_t ene,Int_t det,Int_t Stripfrt,Int_t Stripbck,Double_t time);
        R3BSTaRTrackerDigitHit* AddHit( Int_t det, Int_t chip, Int_t Side, Int_t Strip, Double_t energy, Double_t time);
	

        virtual void SetParContainers();
	
	ClassDef(R3BSTaRTraDigit,1);
	
};




#endif 
#ifndef R3BSTARTRADIGIPAR_H
#define R3BSTARTRADIGIPAR_H 1

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BSTaRTraDigiPar : public FairParGenericSet
{
    public :
	R3BSTaRTraDigiPar (const char* name="R3BSTaRTraDigiParTest",
			const char* title="Tutorial  parameter",
			const char* context="TestDefaultContext");
	~R3BSTaRTraDigiPar(void){};
	void clear(void){};
	void putParams(FairParamList* list);
	Bool_t getParams(FairParamList* list);

	virtual void Print(Option_t *option="") const;
	/** Accessor functions **/

  private:
  // Digi. Parameters


   ClassDef(R3BSTaRTraDigiPar,1); //
};

#endif /* !R3BSTARTRADIGIPAR_H*/

#ifndef R3BSTaRTrackerEvent_H
#define R3BSTaRTrackerEvent_H

#include <TObject.h>
#include <TObjArray.h>
#include "R3BSTaRTrackerHit.h"
#include "../caloData/R3BCaloHit.h"


class R3BSTaRTrackerEvent : public TObject {

 public:
 // constructor, destructor, copy

  R3BSTaRTrackerEvent();
  R3BSTaRTrackerEvent(Int_t nhitsST, Int_t nhitsCalifa);

  virtual ~R3BSTaRTrackerEvent();

  R3BSTaRTrackerEvent(const R3BSTaRTrackerEvent& stevent);


  //getters
   Double_t* GetBeamPosition(){return fBeamPosition;}
   Double_t GetBeamX() {return fBeamPosition[0];}
   Double_t* GetTargetDim(){return fTargetDim;}
   Double_t GetTargetLenght() {return fTargetDim[0];}
   Double_t GetTargetWidth() {return fTargetDim[1];}
   Double_t GetTargetThickness() {return fTargetDim[2];}
   Double_t* GetTargetPosition(){return fTargetPosition;}
   Double_t* GetVtxPosition(){return fVtxPosition;}
   Double_t GetVtxPositionX() {return fVtxPosition[0];}
   Double_t* GetVtxError(){return fVtxError;}
   TObjArray* GetSTHits() const {return (TObjArray*)fSTHits;}
   TObjArray* GetCalifaHits() const {return (TObjArray*)fCalifaHits;}
   TString GetGeometryST() {return fGeometryST;}

  //setters
   void SetBeamPosition(Double_t beam[3]){for(Int_t i=0;i<3;i++){fBeamPosition[i]=beam[i];} return;}
   void SetTargetDim(Double_t tgdim[3]){for(Int_t i=0;i<3;i++){fTargetDim[i]=tgdim[i];} return;}
   void SetTargetPosition(Double_t tgpos[3]){for(Int_t i=0;i<3;i++){fTargetPosition[i]=tgpos[i];} return;}
   void SetVtxPosition(Double_t vtxpos[3]){for(Int_t i=0;i<3;i++){fVtxPosition[i]=vtxpos[i];} return;}
   void SetVtxError(Double_t vtxerr[3]){for(Int_t i=0;i<3;i++){fVtxError[i]=vtxerr[i];} return;}
   void SetSTHits(TObjArray *sthits){fSTHits=sthits;return;}
   void SetCalifaHits(TObjArray* califahits){fCalifaHits=califahits; return;}
   void SetSTGeometry(TString geometry="geometry.root"){fGeometryST=geometry.Data();}

 private:
  Double_t fBeamPosition[3]; // beam position 
  Double_t fTargetDim[3]; // target dimension (Lenght,Width,Thickness)
  Double_t fTargetPosition[3]; // target position 
  Double_t fVtxPosition[3]; // primary vertex position
  Double_t fVtxError[3]; // primary vertex error
  TObjArray *fSTHits; // Hits in the Silicon Tracker (R3BSTaRTrackerHit), min 3 (1 track), or 6 (2 protons)
  TObjArray *fCalifaHits; // CALIFA hit (R3BCaloHit)
  TString fGeometryST; // geometry Silicon Tracker

  ClassDef(R3BSTaRTrackerEvent,1);
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BStarTrackRawHit                         -----
// -----                           Version 0.1                             -----
// -----                    Created 28.05.2014 by M. Labiche               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKRAWHIT_H
#define R3BSTARTRACKRAWHIT_H

#include "TObject.h"

class R3BStarTrackRawHit : public TObject {
public:
  // Default Constructor
  R3BStarTrackRawHit();
  
  /** Standard Constructor
   *@param moduleId    module unique identifier
   *@param side        module Side unique identifier
   *@param asicId      asic unique identifier
   *@param stripId     Strip unique identifier
   *@param adc         Total energy deposited on the crystal [ch]
   *@param time        Time since event start [ns]
   **/

  // R3BStarTrackRawHit( UInt_t WRvhb, UInt_t WRhb , UInt_t WRlb, UInt_t wordtype, UInt_t hitbit, UInt_t moduleId, UInt_t side, UInt_t asicId, UInt_t stripId, UInt_t adc_data, UInt_t timevhb, UInt_t timehb, UInt_t timelb,  UInt_t timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, UInt_t infofield, UInt_t infocode);
 R3BStarTrackRawHit( UInt_t WRvhb, UInt_t WRhb , UInt_t WRlb, UInt_t wordtype, UInt_t hitbit, UInt_t moduleId, UInt_t side, UInt_t asicId, UInt_t stripId, UInt_t adc_data, ULong_t timevhb, ULong_t timehb, UInt_t timelb,  UInt_t timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, UInt_t infofield, UInt_t infocode);
  
  // vhb stands for very high bit
  // hb stands for  high bit
  // lb stands for  low bit

  //Destructor
  ~R3BStarTrackRawHit() { }
  
  //Getters
  inline const UInt_t&  GetWRvhb()      const { return fWRvhb;      }
  inline const UInt_t&  GetWRhb()      const { return fWRhb;      }
  inline const UInt_t&  GetWRlb()      const { return fWRlb;      }
   inline const UInt_t& GetWordType() const { return fWordType; }
  inline const UInt_t& GetHitBit() const { return fHitBit; }
  inline const UInt_t& GetModuleId() const { return fModuleId; }
  inline const UInt_t& GetSide() const { return fSide; }
  inline const UInt_t& GetAsicId() const { return fAsicId; }
  inline const UInt_t& GetStripId() const { return fStripId; }
  inline const UInt_t& GetADCdata()    const { return fADCdata;    }
  //inline const UInt_t&  GetTimevhb()      const { return fTimevhb;      }
  inline const ULong_t&  GetTimevhb()      const { return fTimevhb;      }  // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
  //inline const UInt_t&  GetTimehb()      const { return fTimehb;      }
  inline const ULong_t&  GetTimehb()      const { return fTimehb;      }    // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
  inline const UInt_t&  GetTimelb()      const { return fTimelb;      }
  inline const UInt_t&  GetTimeExtvhb()      const { return fTimeExtvhb;      }
  inline const UInt_t&  GetTimeExthb()      const { return fTimeExthb;      }
  inline const UInt_t&  GetTimeExtlb()      const { return fTimeExtlb;      }
  inline const UInt_t&  GetInfoField()      const { return fInfoField;      }
  inline const UInt_t&  GetInfoCode()      const { return fInfoCode;      }
	
protected:
  //ULong_t  fWR;        //header White Rabbit time (all bits) of the interaction
  UInt_t  fWRvhb;        //header White Rabbit time (48 - 63 bits) of the interaction
  UInt_t  fWRhb;        //header White Rabbit time (28-47 bits) of the interaction
  UInt_t  fWRlb;        //header White Rabbit time (low bit) of the interaction
  UInt_t fWordType;    // 
  UInt_t fHitBit;      // 
  UInt_t fModuleId;    //module unique identifier
  UInt_t fSide;        //module side unique identifier (128 strip per chip)
  UInt_t fAsicId;      //chip unique identifier
  UInt_t fStripId;     //strip unique identifier
  UInt_t fADCdata;     //total energy in the crystal
  //ULong_t  fTime;        //time (all 64 bits) of the interaction
  //UInt_t  fTimevhb;        //time (48 - 63 bits) of the interaction
  ULong_t  fTimevhb;        //time (48 - 63 bits) of the interaction // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
  //UInt_t  fTimehb;        //time ( 28-47 bits) of the interaction
  ULong_t  fTimehb;        //time ( 28-47 bits) of the interaction // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
  UInt_t  fTimelb;        //time (low bit) of the interaction
  UInt_t  fTimeExtvhb;        //time (48 - 63 bits) of the external input
  UInt_t  fTimeExthb;        //time (28-47  bits) of the external input
  UInt_t  fTimeExtlb;        //time (low bit) of the external input
  UInt_t  fInfoField;     //time of the interaction
  UInt_t  fInfoCode;      //time of the interaction
  
public:
  ClassDef(R3BStarTrackRawHit,1)
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BStarTrackUnpack                            -----
// -----                           Version 0.1                             -----
// -----                    Created 28.05.2014 by M.Labiche               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKUNPACK_H
#define R3BSTARTRACKUNPACK_H

#include "FairUnpack.h"

class TClonesArray;


class R3BStarTrackUnpack : public FairUnpack {
 public:
  //Constructor
  R3BStarTrackUnpack(char *strCalDir,
                Short_t type = 104, Short_t subType = 10400,
                Short_t procId = 1,
                Short_t subCrate = 0, Short_t control = 37);

  // Type, SubTypde, procId, subcrate, control are parameters that are unique to the Silicon Tracker.

  
  //Destructor
  virtual ~R3BStarTrackUnpack();
  
  //Fair specific
  virtual Bool_t Init();
  virtual Bool_t DoUnpack(Int_t* data, Int_t size);
  //virtual Bool_t DoUnpack2(Int_t* data_wd0, Int_t* data_wd1, Int_t size);
  virtual void Reset();
    
 protected:
  virtual void Register();
 
 private:
  TClonesArray *fRawData;
  Int_t         fNHits;
  Int_t         nblock;


    // The information is split into 2 words of 32 bits (4 byte).
    // The words can by of two types: A or B.
    // Type A words have word_0 with msb=10.
    // Type B words have word_0 with msb=11.
    UInt_t word_0A; 
    UInt_t word_1A;
    UInt_t word_0B; 
    UInt_t word_1B;
 

   UInt_t wordtype;  // 
    UInt_t info_field;
    UInt_t info_code;
    
    //UInt_t ts_vhb;
    ULong_t ts_vhb;  // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    //UInt_t ts_hb;
    ULong_t ts_hb;   // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    UInt_t ts_lb;
    UInt_t ts_lb_part1;
    UInt_t ts_lb_part2;
    UInt_t ts_lb_part2_inv;
    UInt_t ts_lb_part3;
    //long long ts=0;
    
    // Time information from an external input (ie: other than Si tracker)
    UInt_t tsExt_vhb; // 63:48 in Si (16 bits)
    UInt_t tsExt_hb; // 47:28 in Si (20 bits) 
    UInt_t tsExt_lb; // 27:0 in Si (28 bits)	   
    //long long tsExt=0;	   
    
    UInt_t hitbit; // real values are: 0 or 1
    UInt_t module_id;  // module id, real values are  1 to 30
    UInt_t side; // real values are  0 or 1 
    UInt_t asic_id;    // Chip id, real values are 0 to 15
    UInt_t strip_id;   // strip id, real values are 0 to 127
    UInt_t adcData;  // adc value for energy loss in Si
    


 public:
  //Class definition
  ClassDef(R3BStarTrackUnpack, 0)
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                   from R3BCaloUnpackPar                           -----
// -----                Created 21/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKUNPACKPAR_H
#define R3BSTARTRACKUNPACKPAR_H

#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

//static const UInt_t numberOfCrystals = 1952;
static const UInt_t numberOfStrips = 128;  // per ASIC

class R3BStarTrackUnpackPar : public FairParGenericSet
{
 public :
  R3BStarTrackUnpackPar (const char* name="R3BStarTrackUnpackPar",
		    const char* title="Strip Unpacking Parameters",
		    const char* context="TestDefaultContext");
  ~R3BStarTrackUnpackPar(void){};
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
    
  ClassDef(R3BStarTrackUnpackPar,1); //
};

#endif /* !R3BSTARTRACKUNPACKPAR_H*/

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BStarTrackRawAna                         -----
// -----                           Version 0.1                             -----
// -----                    Created 28.04.2014 by M.Labiche                -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKRAWANA_H
#define R3BSTARTRACKRAWANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BStarTrackRawAna : public FairTask {
public:
  R3BStarTrackRawAna();
  virtual ~R3BStarTrackRawAna();
  
  virtual InitStatus Init();
  
  virtual void Exec(Option_t *option);
  
  virtual void FinishTask();
   
private:
  Int_t fnEvents;
  
  TClonesArray *fRawData;
  
  TH1F *thw;
  TH1F *thh;
  TH1F *thm;
  TH1F *thsd;
  TH1F *tha;
  TH1F *thst;
  TH1F *the;
  TH1F *thts;
  TH1F *thtslbdiff;
  TH1F *thtsExt;
  TH1F *thtsExtlbdiff;
  TH1F *thif;
  TH1F *thic;
  
  void CreateHistos();
  
  void WriteHistos();
  
public:
  
  ClassDef(R3BStarTrackRawAna, 0)
};


#endif


// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        from R3BCaloCrystalAna                     -----
// -----                    Created 18/07/14  by H.Alvarez                 -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKSTRIPANA_H
#define R3BSTARTRACKSTRIPANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BStarTrackStripAna : public FairTask {
public:
  R3BStarTrackStripAna();
  virtual ~R3BStarTrackStripAna();
  
  virtual InitStatus Init();
  
  virtual void Exec(Option_t *option);
  
  virtual void FinishTask();
   
private:
  Int_t fnEvents;
  
  TClonesArray *fSiDetData;
    
  //TH1F *thWordType;
  //TH1F *thHitBit;
  TH1F *thModuleID;
  TH1F *thSide;
  TH1F *thAsicID;
  TH1F *thStripID;
  TH1F *thEnergy;
  TH1F *thTime;
  
  void CreateHistos();
  
  void WriteHistos();
  
public:
  
  ClassDef(R3BStarTrackStripAna, 0)
};


#endif


// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BCaloCalib                            -----
// -----                Created 18/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIB_H
#define R3BSTARTRACKCALIB_H

#include "FairTask.h"
#include "R3BSTaRTrackerDigitHit.h"
#include "R3BStarTrackRawHit.h"
#include "R3BStarTrackCalibPar.h"

class TClonesArray;

class R3BStarTrackCalib : public FairTask {
    
 public:
  /** Default constructor **/
  R3BStarTrackCalib();
  
  /** Destructor **/
  virtual ~R3BStarTrackCalib();
  
  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);
    
  /** Virtual method Reset **/
  virtual void Reset();

protected:
  //Fair specific
  /** Virtual method Init **/
  virtual InitStatus Init();
    
  /** Virtual method ReInit **/
  virtual InitStatus ReInit();
    
  /** Virtual method SetParContainers **/
  virtual void SetParContainers();
    
  /** Virtual method Finish **/
  virtual void Finish();

  virtual void Register();
 
 private:
  //private functions making most of the calibration work
  Int_t MapModuleID(R3BStarTrackRawHit* chit);
  Int_t MapSide(R3BStarTrackRawHit* chit);
  Int_t MapAsicID(R3BStarTrackRawHit* chit);
  Int_t MapStripID(R3BStarTrackRawHit* chit);
  Double32_t CalibrateEnergy(R3BStarTrackRawHit* chit);
  Double32_t CalibrateTime(R3BStarTrackRawHit* chit);

    
  TClonesArray *fRawHitCA;
  TClonesArray *fSiDetHitCA;

  R3BStarTrackCalibPar* fStarTrackCalibPar;
    
 public:
  //Class definition
  ClassDef(R3BStarTrackCalib, 0)
};

#endif
// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                      from R3BCaloCalibPar                         -----
// -----                Created 21/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIBPAR_H
#define R3BSTARTRACKCALIBPAR_H

#include <TVector3.h>
#include <TObjString.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BStarTrackCalibPar : public FairParGenericSet
{
 public :
  R3BStarTrackCalibPar (const char* name="R3BStarTrackCalibPar",
		   const char* title="Si Strip det Calibration Parameters",
		   const char* context="TestDefaultContext");
  ~R3BStarTrackCalibPar(void){};
  void clear(void){};
  void putParams(FairParamList* list);
  Bool_t getParams(FairParamList* list);
  
  void Print(Option_t* option="") const;
  /** Accessor functions **/
  const Double_t GetEneCalibGain(Int_t strip){return eneCalibGain[strip];}
  const Double_t GetEneCalibOffset(Int_t strip){return eneCalibOffset[strip];}
  const Double_t GetEneCalibGainUncert(Int_t strip){return eneCalibGainUncert[strip];}
  const Double_t GetEneCalibOffsetUncert(Int_t strip){return eneCalibOffsetUncert[strip];}
  
  const Double_t GetTimeCalib_p0(Int_t strip){return timeCalib_p0[strip];}
  const Double_t GetTimeCalib_p1(Int_t strip){return timeCalib_p1[strip];}
  const Double_t GetTimeCalib_p2(Int_t strip){return timeCalib_p2[strip];}
  const Double_t GetTimeCalibUncert_p0(Int_t strip){return timeCalibUncert_p0[strip];}
  const Double_t GetTimeCalibUncert_p1(Int_t strip){return timeCalibUncert_p1[strip];}
  const Double_t GetTimeCalibUncert_p2(Int_t strip){return timeCalibUncert_p2[strip];}
  
  void SetEneCalibGain(Int_t strip, Double_t value){eneCalibGain[strip]=value;}
  void SetEneCalibOffset(Int_t strip, Double_t value){eneCalibOffset[strip]=value;}
  void SetEneCalibGainUncert(Int_t strip, Double_t value){eneCalibGainUncert[strip]=value;}
  void SetEneCalibOffsetUncert(Int_t strip, Double_t value){eneCalibOffsetUncert[strip]=value;}

  void SettimeCalib_p0(Int_t strip, Double_t value){timeCalib_p0[strip]=value;}
  void SettimeCalib_p1(Int_t strip, Double_t value){timeCalib_p1[strip]=value;}
  void SettimeCalib_p2(Int_t strip, Double_t value){timeCalib_p2[strip]=value;}
  void SettimeCalibUncert_p0(Int_t strip, Double_t value){timeCalibUncert_p0[strip]=value;}
  void SettimeCalibUncert_p1(Int_t strip, Double_t value){timeCalibUncert_p1[strip]=value;}
  void SettimeCalibUncert_p2(Int_t strip, Double_t value){timeCalibUncert_p2[strip]=value;}
  
 private:
  //Polynomial (second order) parameters for high gain (gammas) calibration 
  //+ uncertainty. [2×3×double×number_of_crystals].
  Double_t* eneCalibGain;
  Double_t* eneCalibOffset;
  Double_t* eneCalibGainUncert;
  Double_t* eneCalibOffsetUncert;


  // Polynomial (second order) parameters for time calibration 
  //+ uncertainty.
  Double_t* timeCalib_p0;
  Double_t* timeCalib_p1;
  Double_t* timeCalib_p2;
  Double_t* timeCalibUncert_p0;
  Double_t* timeCalibUncert_p1;
  Double_t* timeCalibUncert_p2;

  TString  fGeometryFileName;
  
  ClassDef(R3BStarTrackCalibPar,1); //
};

#endif /* !R3BSTARTRACKCALIBPAR_H*/
// -------------------------------------------------------------------------
// -----           R3BStarTrackCalibParFinder source file              -----
// -----           from R3BCaloCalibParFinder source file              -----
// -----              Created 22/07/14  by H.Alvarez                   -----
// -------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIBPARFINDER_H
#define R3BSTARTRACKCALIBPARFINDER_H

#include "FairTask.h"
#include "R3BSTaRTraHit.h"
#include "R3BSTaRTrackerHit.h"
#include "R3BStarTrackCalibPar.h"

class TClonesArray;

class R3BStarTrackCalibParFinder : public FairTask
{
    
public:
    
    /** Default constructor **/
    R3BStarTrackCalibParFinder();
    
    /** Destructor **/
    ~R3BStarTrackCalibParFinder();
    
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
    
    TClonesArray* fSiDetRawHitCA;
    
    // Parameter class
    R3BStarTrackCalibPar* fStarTrackCalibPar;
    
    
    ClassDef(R3BStarTrackCalibParFinder,1);
};


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoSTaRTra", payloadCode, "@",
"R3BGeoSTaRTraPar", payloadCode, "@",
"R3BSTaRTra", payloadCode, "@",
"R3BSTaRTraContFact", payloadCode, "@",
"R3BSTaRTraDigiPar", payloadCode, "@",
"R3BSTaRTraDigit", payloadCode, "@",
"R3BSTaRTraHitFinder", payloadCode, "@",
"R3BSTaRTrackerEvent", payloadCode, "@",
"R3BStarTrackCalib", payloadCode, "@",
"R3BStarTrackCalibPar", payloadCode, "@",
"R3BStarTrackCalibParFinder", payloadCode, "@",
"R3BStarTrackRawAna", payloadCode, "@",
"R3BStarTrackRawHit", payloadCode, "@",
"R3BStarTrackStripAna", payloadCode, "@",
"R3BStarTrackUnpack", payloadCode, "@",
"R3BStarTrackUnpackPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BSTaRTraDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BSTaRTraDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BSTaRTraDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BSTaRTraDict() {
  TriggerDictionaryInitialization_G__R3BSTaRTraDict_Impl();
}
