// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIr3bgendIG__R3BGenDict

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
#include "R3BPrimaryGenerator.h"
#include "R3BSpecificGenerator.h"
#include "R3BReadKinematics.h"
#include "R3BCDGenerator.h"
#include "R3BBeamInfo.h"
#include "R3BBackTracking.h"
#include "R3BBackTrackingStorageState.h"
#include "R3BAsciiGenerator.h"
#include "R3BCosmicGenerator.h"
#include "R3Bp2pGenerator.h"
#include "R3BLandGenerator.h"
#include "R3BCALIFATestGenerator.h"
#include "R3BAsciiIQMDGen.h"
#include "R3BAsciiUrQMDGen.h"
#include "R3BIonGenerator.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BPrimaryGenerator(void *p = 0);
   static void *newArray_R3BPrimaryGenerator(Long_t size, void *p);
   static void delete_R3BPrimaryGenerator(void *p);
   static void deleteArray_R3BPrimaryGenerator(void *p);
   static void destruct_R3BPrimaryGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPrimaryGenerator*)
   {
      ::R3BPrimaryGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPrimaryGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPrimaryGenerator", ::R3BPrimaryGenerator::Class_Version(), "invalid", 33,
                  typeid(::R3BPrimaryGenerator), DefineBehavior(ptr, ptr),
                  &::R3BPrimaryGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPrimaryGenerator) );
      instance.SetNew(&new_R3BPrimaryGenerator);
      instance.SetNewArray(&newArray_R3BPrimaryGenerator);
      instance.SetDelete(&delete_R3BPrimaryGenerator);
      instance.SetDeleteArray(&deleteArray_R3BPrimaryGenerator);
      instance.SetDestructor(&destruct_R3BPrimaryGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPrimaryGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BPrimaryGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPrimaryGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSpecificGenerator(void *p = 0);
   static void *newArray_R3BSpecificGenerator(Long_t size, void *p);
   static void delete_R3BSpecificGenerator(void *p);
   static void deleteArray_R3BSpecificGenerator(void *p);
   static void destruct_R3BSpecificGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSpecificGenerator*)
   {
      ::R3BSpecificGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSpecificGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSpecificGenerator", ::R3BSpecificGenerator::Class_Version(), "invalid", 110,
                  typeid(::R3BSpecificGenerator), DefineBehavior(ptr, ptr),
                  &::R3BSpecificGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSpecificGenerator) );
      instance.SetNew(&new_R3BSpecificGenerator);
      instance.SetNewArray(&newArray_R3BSpecificGenerator);
      instance.SetDelete(&delete_R3BSpecificGenerator);
      instance.SetDeleteArray(&deleteArray_R3BSpecificGenerator);
      instance.SetDestructor(&destruct_R3BSpecificGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSpecificGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BSpecificGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BReadKinematics(void *p = 0);
   static void *newArray_R3BReadKinematics(Long_t size, void *p);
   static void delete_R3BReadKinematics(void *p);
   static void deleteArray_R3BReadKinematics(void *p);
   static void destruct_R3BReadKinematics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BReadKinematics*)
   {
      ::R3BReadKinematics *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BReadKinematics >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BReadKinematics", ::R3BReadKinematics::Class_Version(), "R3BReadKinematics.h", 24,
                  typeid(::R3BReadKinematics), DefineBehavior(ptr, ptr),
                  &::R3BReadKinematics::Dictionary, isa_proxy, 4,
                  sizeof(::R3BReadKinematics) );
      instance.SetNew(&new_R3BReadKinematics);
      instance.SetNewArray(&newArray_R3BReadKinematics);
      instance.SetDelete(&delete_R3BReadKinematics);
      instance.SetDeleteArray(&deleteArray_R3BReadKinematics);
      instance.SetDestructor(&destruct_R3BReadKinematics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BReadKinematics*)
   {
      return GenerateInitInstanceLocal((::R3BReadKinematics*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCDGenerator(void *p = 0);
   static void *newArray_R3BCDGenerator(Long_t size, void *p);
   static void delete_R3BCDGenerator(void *p);
   static void deleteArray_R3BCDGenerator(void *p);
   static void destruct_R3BCDGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCDGenerator*)
   {
      ::R3BCDGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCDGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCDGenerator", ::R3BCDGenerator::Class_Version(), "R3BCDGenerator.h", 31,
                  typeid(::R3BCDGenerator), DefineBehavior(ptr, ptr),
                  &::R3BCDGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCDGenerator) );
      instance.SetNew(&new_R3BCDGenerator);
      instance.SetNewArray(&newArray_R3BCDGenerator);
      instance.SetDelete(&delete_R3BCDGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCDGenerator);
      instance.SetDestructor(&destruct_R3BCDGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCDGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCDGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBeamInfo(void *p = 0);
   static void *newArray_R3BBeamInfo(Long_t size, void *p);
   static void delete_R3BBeamInfo(void *p);
   static void deleteArray_R3BBeamInfo(void *p);
   static void destruct_R3BBeamInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBeamInfo*)
   {
      ::R3BBeamInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBeamInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBeamInfo", ::R3BBeamInfo::Class_Version(), "invalid", 446,
                  typeid(::R3BBeamInfo), DefineBehavior(ptr, ptr),
                  &::R3BBeamInfo::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBeamInfo) );
      instance.SetNew(&new_R3BBeamInfo);
      instance.SetNewArray(&newArray_R3BBeamInfo);
      instance.SetDelete(&delete_R3BBeamInfo);
      instance.SetDeleteArray(&deleteArray_R3BBeamInfo);
      instance.SetDestructor(&destruct_R3BBeamInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBeamInfo*)
   {
      return GenerateInitInstanceLocal((::R3BBeamInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBackTracking(void *p = 0);
   static void *newArray_R3BBackTracking(Long_t size, void *p);
   static void delete_R3BBackTracking(void *p);
   static void deleteArray_R3BBackTracking(void *p);
   static void destruct_R3BBackTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBackTracking*)
   {
      ::R3BBackTracking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBackTracking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBackTracking", ::R3BBackTracking::Class_Version(), "R3BBackTracking.h", 30,
                  typeid(::R3BBackTracking), DefineBehavior(ptr, ptr),
                  &::R3BBackTracking::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBackTracking) );
      instance.SetNew(&new_R3BBackTracking);
      instance.SetNewArray(&newArray_R3BBackTracking);
      instance.SetDelete(&delete_R3BBackTracking);
      instance.SetDeleteArray(&deleteArray_R3BBackTracking);
      instance.SetDestructor(&destruct_R3BBackTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBackTracking*)
   {
      return GenerateInitInstanceLocal((::R3BBackTracking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBackTrackingStorageState(void *p = 0);
   static void *newArray_R3BBackTrackingStorageState(Long_t size, void *p);
   static void delete_R3BBackTrackingStorageState(void *p);
   static void deleteArray_R3BBackTrackingStorageState(void *p);
   static void destruct_R3BBackTrackingStorageState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBackTrackingStorageState*)
   {
      ::R3BBackTrackingStorageState *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBackTrackingStorageState >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBackTrackingStorageState", ::R3BBackTrackingStorageState::Class_Version(), "invalid", 598,
                  typeid(::R3BBackTrackingStorageState), DefineBehavior(ptr, ptr),
                  &::R3BBackTrackingStorageState::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBackTrackingStorageState) );
      instance.SetNew(&new_R3BBackTrackingStorageState);
      instance.SetNewArray(&newArray_R3BBackTrackingStorageState);
      instance.SetDelete(&delete_R3BBackTrackingStorageState);
      instance.SetDeleteArray(&deleteArray_R3BBackTrackingStorageState);
      instance.SetDestructor(&destruct_R3BBackTrackingStorageState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBackTrackingStorageState*)
   {
      return GenerateInitInstanceLocal((::R3BBackTrackingStorageState*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAsciiGenerator(void *p = 0);
   static void *newArray_R3BAsciiGenerator(Long_t size, void *p);
   static void delete_R3BAsciiGenerator(void *p);
   static void deleteArray_R3BAsciiGenerator(void *p);
   static void destruct_R3BAsciiGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAsciiGenerator*)
   {
      ::R3BAsciiGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAsciiGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAsciiGenerator", ::R3BAsciiGenerator::Class_Version(), "invalid", 695,
                  typeid(::R3BAsciiGenerator), DefineBehavior(ptr, ptr),
                  &::R3BAsciiGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAsciiGenerator) );
      instance.SetNew(&new_R3BAsciiGenerator);
      instance.SetNewArray(&newArray_R3BAsciiGenerator);
      instance.SetDelete(&delete_R3BAsciiGenerator);
      instance.SetDeleteArray(&deleteArray_R3BAsciiGenerator);
      instance.SetDestructor(&destruct_R3BAsciiGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAsciiGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BAsciiGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandGenerator(void *p = 0);
   static void *newArray_R3BLandGenerator(Long_t size, void *p);
   static void delete_R3BLandGenerator(void *p);
   static void deleteArray_R3BLandGenerator(void *p);
   static void destruct_R3BLandGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandGenerator*)
   {
      ::R3BLandGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandGenerator", ::R3BLandGenerator::Class_Version(), "invalid", 993,
                  typeid(::R3BLandGenerator), DefineBehavior(ptr, ptr),
                  &::R3BLandGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandGenerator) );
      instance.SetNew(&new_R3BLandGenerator);
      instance.SetNewArray(&newArray_R3BLandGenerator);
      instance.SetDelete(&delete_R3BLandGenerator);
      instance.SetDeleteArray(&deleteArray_R3BLandGenerator);
      instance.SetDestructor(&destruct_R3BLandGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BLandGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCALIFATestGenerator(void *p = 0);
   static void *newArray_R3BCALIFATestGenerator(Long_t size, void *p);
   static void delete_R3BCALIFATestGenerator(void *p);
   static void deleteArray_R3BCALIFATestGenerator(void *p);
   static void destruct_R3BCALIFATestGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCALIFATestGenerator*)
   {
      ::R3BCALIFATestGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCALIFATestGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCALIFATestGenerator", ::R3BCALIFATestGenerator::Class_Version(), "invalid", 1086,
                  typeid(::R3BCALIFATestGenerator), DefineBehavior(ptr, ptr),
                  &::R3BCALIFATestGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCALIFATestGenerator) );
      instance.SetNew(&new_R3BCALIFATestGenerator);
      instance.SetNewArray(&newArray_R3BCALIFATestGenerator);
      instance.SetDelete(&delete_R3BCALIFATestGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCALIFATestGenerator);
      instance.SetDestructor(&destruct_R3BCALIFATestGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCALIFATestGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCALIFATestGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCosmicGenerator(void *p = 0);
   static void *newArray_R3BCosmicGenerator(Long_t size, void *p);
   static void delete_R3BCosmicGenerator(void *p);
   static void deleteArray_R3BCosmicGenerator(void *p);
   static void destruct_R3BCosmicGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCosmicGenerator*)
   {
      ::R3BCosmicGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCosmicGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCosmicGenerator", ::R3BCosmicGenerator::Class_Version(), "invalid", 805,
                  typeid(::R3BCosmicGenerator), DefineBehavior(ptr, ptr),
                  &::R3BCosmicGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCosmicGenerator) );
      instance.SetNew(&new_R3BCosmicGenerator);
      instance.SetNewArray(&newArray_R3BCosmicGenerator);
      instance.SetDelete(&delete_R3BCosmicGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCosmicGenerator);
      instance.SetDestructor(&destruct_R3BCosmicGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCosmicGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCosmicGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3Bp2pGenerator(void *p = 0);
   static void *newArray_R3Bp2pGenerator(Long_t size, void *p);
   static void delete_R3Bp2pGenerator(void *p);
   static void deleteArray_R3Bp2pGenerator(void *p);
   static void destruct_R3Bp2pGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3Bp2pGenerator*)
   {
      ::R3Bp2pGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3Bp2pGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3Bp2pGenerator", ::R3Bp2pGenerator::Class_Version(), "invalid", 907,
                  typeid(::R3Bp2pGenerator), DefineBehavior(ptr, ptr),
                  &::R3Bp2pGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3Bp2pGenerator) );
      instance.SetNew(&new_R3Bp2pGenerator);
      instance.SetNewArray(&newArray_R3Bp2pGenerator);
      instance.SetDelete(&delete_R3Bp2pGenerator);
      instance.SetDeleteArray(&deleteArray_R3Bp2pGenerator);
      instance.SetDestructor(&destruct_R3Bp2pGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3Bp2pGenerator*)
   {
      return GenerateInitInstanceLocal((::R3Bp2pGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAsciiIQMDGen(void *p = 0);
   static void *newArray_R3BAsciiIQMDGen(Long_t size, void *p);
   static void delete_R3BAsciiIQMDGen(void *p);
   static void deleteArray_R3BAsciiIQMDGen(void *p);
   static void destruct_R3BAsciiIQMDGen(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAsciiIQMDGen*)
   {
      ::R3BAsciiIQMDGen *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAsciiIQMDGen >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAsciiIQMDGen", ::R3BAsciiIQMDGen::Class_Version(), "invalid", 1231,
                  typeid(::R3BAsciiIQMDGen), DefineBehavior(ptr, ptr),
                  &::R3BAsciiIQMDGen::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAsciiIQMDGen) );
      instance.SetNew(&new_R3BAsciiIQMDGen);
      instance.SetNewArray(&newArray_R3BAsciiIQMDGen);
      instance.SetDelete(&delete_R3BAsciiIQMDGen);
      instance.SetDeleteArray(&deleteArray_R3BAsciiIQMDGen);
      instance.SetDestructor(&destruct_R3BAsciiIQMDGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAsciiIQMDGen*)
   {
      return GenerateInitInstanceLocal((::R3BAsciiIQMDGen*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BAsciiIQMDGen*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAsciiUrQMDGen(void *p = 0);
   static void *newArray_R3BAsciiUrQMDGen(Long_t size, void *p);
   static void delete_R3BAsciiUrQMDGen(void *p);
   static void deleteArray_R3BAsciiUrQMDGen(void *p);
   static void destruct_R3BAsciiUrQMDGen(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAsciiUrQMDGen*)
   {
      ::R3BAsciiUrQMDGen *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAsciiUrQMDGen >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAsciiUrQMDGen", ::R3BAsciiUrQMDGen::Class_Version(), "invalid", 1321,
                  typeid(::R3BAsciiUrQMDGen), DefineBehavior(ptr, ptr),
                  &::R3BAsciiUrQMDGen::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAsciiUrQMDGen) );
      instance.SetNew(&new_R3BAsciiUrQMDGen);
      instance.SetNewArray(&newArray_R3BAsciiUrQMDGen);
      instance.SetDelete(&delete_R3BAsciiUrQMDGen);
      instance.SetDeleteArray(&deleteArray_R3BAsciiUrQMDGen);
      instance.SetDestructor(&destruct_R3BAsciiUrQMDGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAsciiUrQMDGen*)
   {
      return GenerateInitInstanceLocal((::R3BAsciiUrQMDGen*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BAsciiUrQMDGen*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BIonGenerator(void *p = 0);
   static void *newArray_R3BIonGenerator(Long_t size, void *p);
   static void delete_R3BIonGenerator(void *p);
   static void deleteArray_R3BIonGenerator(void *p);
   static void destruct_R3BIonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BIonGenerator*)
   {
      ::R3BIonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BIonGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BIonGenerator", ::R3BIonGenerator::Class_Version(), "invalid", 1396,
                  typeid(::R3BIonGenerator), DefineBehavior(ptr, ptr),
                  &::R3BIonGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BIonGenerator) );
      instance.SetNew(&new_R3BIonGenerator);
      instance.SetNewArray(&newArray_R3BIonGenerator);
      instance.SetDelete(&delete_R3BIonGenerator);
      instance.SetDeleteArray(&deleteArray_R3BIonGenerator);
      instance.SetDestructor(&destruct_R3BIonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BIonGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BIonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BPrimaryGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPrimaryGenerator::Class_Name()
{
   return "R3BPrimaryGenerator";
}

//______________________________________________________________________________
const char *R3BPrimaryGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimaryGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPrimaryGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimaryGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPrimaryGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimaryGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPrimaryGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimaryGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSpecificGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSpecificGenerator::Class_Name()
{
   return "R3BSpecificGenerator";
}

//______________________________________________________________________________
const char *R3BSpecificGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSpecificGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSpecificGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSpecificGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BReadKinematics::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BReadKinematics::Class_Name()
{
   return "R3BReadKinematics";
}

//______________________________________________________________________________
const char *R3BReadKinematics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BReadKinematics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BReadKinematics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BReadKinematics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCDGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCDGenerator::Class_Name()
{
   return "R3BCDGenerator";
}

//______________________________________________________________________________
const char *R3BCDGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCDGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCDGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCDGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBeamInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBeamInfo::Class_Name()
{
   return "R3BBeamInfo";
}

//______________________________________________________________________________
const char *R3BBeamInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBeamInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBeamInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBeamInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBackTracking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBackTracking::Class_Name()
{
   return "R3BBackTracking";
}

//______________________________________________________________________________
const char *R3BBackTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBackTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBackTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBackTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBackTrackingStorageState::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBackTrackingStorageState::Class_Name()
{
   return "R3BBackTrackingStorageState";
}

//______________________________________________________________________________
const char *R3BBackTrackingStorageState::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBackTrackingStorageState::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBackTrackingStorageState::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBackTrackingStorageState::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAsciiGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAsciiGenerator::Class_Name()
{
   return "R3BAsciiGenerator";
}

//______________________________________________________________________________
const char *R3BAsciiGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAsciiGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAsciiGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAsciiGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandGenerator::Class_Name()
{
   return "R3BLandGenerator";
}

//______________________________________________________________________________
const char *R3BLandGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCALIFATestGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCALIFATestGenerator::Class_Name()
{
   return "R3BCALIFATestGenerator";
}

//______________________________________________________________________________
const char *R3BCALIFATestGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCALIFATestGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCALIFATestGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCALIFATestGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCosmicGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCosmicGenerator::Class_Name()
{
   return "R3BCosmicGenerator";
}

//______________________________________________________________________________
const char *R3BCosmicGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCosmicGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCosmicGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCosmicGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3Bp2pGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3Bp2pGenerator::Class_Name()
{
   return "R3Bp2pGenerator";
}

//______________________________________________________________________________
const char *R3Bp2pGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3Bp2pGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3Bp2pGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3Bp2pGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAsciiIQMDGen::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAsciiIQMDGen::Class_Name()
{
   return "R3BAsciiIQMDGen";
}

//______________________________________________________________________________
const char *R3BAsciiIQMDGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiIQMDGen*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAsciiIQMDGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiIQMDGen*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAsciiIQMDGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiIQMDGen*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAsciiIQMDGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiIQMDGen*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAsciiUrQMDGen::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAsciiUrQMDGen::Class_Name()
{
   return "R3BAsciiUrQMDGen";
}

//______________________________________________________________________________
const char *R3BAsciiUrQMDGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiUrQMDGen*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAsciiUrQMDGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiUrQMDGen*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAsciiUrQMDGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiUrQMDGen*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAsciiUrQMDGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiUrQMDGen*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BIonGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BIonGenerator::Class_Name()
{
   return "R3BIonGenerator";
}

//______________________________________________________________________________
const char *R3BIonGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BIonGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BIonGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BIonGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BPrimaryGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPrimaryGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPrimaryGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPrimaryGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPrimaryGenerator(void *p) {
      return  p ? new(p) ::R3BPrimaryGenerator : new ::R3BPrimaryGenerator;
   }
   static void *newArray_R3BPrimaryGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPrimaryGenerator[nElements] : new ::R3BPrimaryGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPrimaryGenerator(void *p) {
      delete ((::R3BPrimaryGenerator*)p);
   }
   static void deleteArray_R3BPrimaryGenerator(void *p) {
      delete [] ((::R3BPrimaryGenerator*)p);
   }
   static void destruct_R3BPrimaryGenerator(void *p) {
      typedef ::R3BPrimaryGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPrimaryGenerator

//______________________________________________________________________________
void R3BSpecificGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSpecificGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSpecificGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSpecificGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSpecificGenerator(void *p) {
      return  p ? new(p) ::R3BSpecificGenerator : new ::R3BSpecificGenerator;
   }
   static void *newArray_R3BSpecificGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSpecificGenerator[nElements] : new ::R3BSpecificGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSpecificGenerator(void *p) {
      delete ((::R3BSpecificGenerator*)p);
   }
   static void deleteArray_R3BSpecificGenerator(void *p) {
      delete [] ((::R3BSpecificGenerator*)p);
   }
   static void destruct_R3BSpecificGenerator(void *p) {
      typedef ::R3BSpecificGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSpecificGenerator

//______________________________________________________________________________
void R3BReadKinematics::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BReadKinematics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BReadKinematics::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BReadKinematics::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BReadKinematics(void *p) {
      return  p ? new(p) ::R3BReadKinematics : new ::R3BReadKinematics;
   }
   static void *newArray_R3BReadKinematics(Long_t nElements, void *p) {
      return p ? new(p) ::R3BReadKinematics[nElements] : new ::R3BReadKinematics[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BReadKinematics(void *p) {
      delete ((::R3BReadKinematics*)p);
   }
   static void deleteArray_R3BReadKinematics(void *p) {
      delete [] ((::R3BReadKinematics*)p);
   }
   static void destruct_R3BReadKinematics(void *p) {
      typedef ::R3BReadKinematics current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BReadKinematics

//______________________________________________________________________________
void R3BCDGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCDGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCDGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCDGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCDGenerator(void *p) {
      return  p ? new(p) ::R3BCDGenerator : new ::R3BCDGenerator;
   }
   static void *newArray_R3BCDGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCDGenerator[nElements] : new ::R3BCDGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCDGenerator(void *p) {
      delete ((::R3BCDGenerator*)p);
   }
   static void deleteArray_R3BCDGenerator(void *p) {
      delete [] ((::R3BCDGenerator*)p);
   }
   static void destruct_R3BCDGenerator(void *p) {
      typedef ::R3BCDGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCDGenerator

//______________________________________________________________________________
void R3BBeamInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBeamInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBeamInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBeamInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBeamInfo(void *p) {
      return  p ? new(p) ::R3BBeamInfo : new ::R3BBeamInfo;
   }
   static void *newArray_R3BBeamInfo(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBeamInfo[nElements] : new ::R3BBeamInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBeamInfo(void *p) {
      delete ((::R3BBeamInfo*)p);
   }
   static void deleteArray_R3BBeamInfo(void *p) {
      delete [] ((::R3BBeamInfo*)p);
   }
   static void destruct_R3BBeamInfo(void *p) {
      typedef ::R3BBeamInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBeamInfo

//______________________________________________________________________________
void R3BBackTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBackTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBackTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBackTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBackTracking(void *p) {
      return  p ? new(p) ::R3BBackTracking : new ::R3BBackTracking;
   }
   static void *newArray_R3BBackTracking(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBackTracking[nElements] : new ::R3BBackTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBackTracking(void *p) {
      delete ((::R3BBackTracking*)p);
   }
   static void deleteArray_R3BBackTracking(void *p) {
      delete [] ((::R3BBackTracking*)p);
   }
   static void destruct_R3BBackTracking(void *p) {
      typedef ::R3BBackTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBackTracking

//______________________________________________________________________________
void R3BBackTrackingStorageState::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBackTrackingStorageState.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBackTrackingStorageState::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBackTrackingStorageState::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBackTrackingStorageState(void *p) {
      return  p ? new(p) ::R3BBackTrackingStorageState : new ::R3BBackTrackingStorageState;
   }
   static void *newArray_R3BBackTrackingStorageState(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBackTrackingStorageState[nElements] : new ::R3BBackTrackingStorageState[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBackTrackingStorageState(void *p) {
      delete ((::R3BBackTrackingStorageState*)p);
   }
   static void deleteArray_R3BBackTrackingStorageState(void *p) {
      delete [] ((::R3BBackTrackingStorageState*)p);
   }
   static void destruct_R3BBackTrackingStorageState(void *p) {
      typedef ::R3BBackTrackingStorageState current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBackTrackingStorageState

//______________________________________________________________________________
void R3BAsciiGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAsciiGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAsciiGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAsciiGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAsciiGenerator(void *p) {
      return  p ? new(p) ::R3BAsciiGenerator : new ::R3BAsciiGenerator;
   }
   static void *newArray_R3BAsciiGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAsciiGenerator[nElements] : new ::R3BAsciiGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAsciiGenerator(void *p) {
      delete ((::R3BAsciiGenerator*)p);
   }
   static void deleteArray_R3BAsciiGenerator(void *p) {
      delete [] ((::R3BAsciiGenerator*)p);
   }
   static void destruct_R3BAsciiGenerator(void *p) {
      typedef ::R3BAsciiGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAsciiGenerator

//______________________________________________________________________________
void R3BLandGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandGenerator(void *p) {
      return  p ? new(p) ::R3BLandGenerator : new ::R3BLandGenerator;
   }
   static void *newArray_R3BLandGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandGenerator[nElements] : new ::R3BLandGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandGenerator(void *p) {
      delete ((::R3BLandGenerator*)p);
   }
   static void deleteArray_R3BLandGenerator(void *p) {
      delete [] ((::R3BLandGenerator*)p);
   }
   static void destruct_R3BLandGenerator(void *p) {
      typedef ::R3BLandGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandGenerator

//______________________________________________________________________________
void R3BCALIFATestGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCALIFATestGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCALIFATestGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCALIFATestGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCALIFATestGenerator(void *p) {
      return  p ? new(p) ::R3BCALIFATestGenerator : new ::R3BCALIFATestGenerator;
   }
   static void *newArray_R3BCALIFATestGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCALIFATestGenerator[nElements] : new ::R3BCALIFATestGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCALIFATestGenerator(void *p) {
      delete ((::R3BCALIFATestGenerator*)p);
   }
   static void deleteArray_R3BCALIFATestGenerator(void *p) {
      delete [] ((::R3BCALIFATestGenerator*)p);
   }
   static void destruct_R3BCALIFATestGenerator(void *p) {
      typedef ::R3BCALIFATestGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCALIFATestGenerator

//______________________________________________________________________________
void R3BCosmicGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCosmicGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCosmicGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCosmicGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCosmicGenerator(void *p) {
      return  p ? new(p) ::R3BCosmicGenerator : new ::R3BCosmicGenerator;
   }
   static void *newArray_R3BCosmicGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCosmicGenerator[nElements] : new ::R3BCosmicGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCosmicGenerator(void *p) {
      delete ((::R3BCosmicGenerator*)p);
   }
   static void deleteArray_R3BCosmicGenerator(void *p) {
      delete [] ((::R3BCosmicGenerator*)p);
   }
   static void destruct_R3BCosmicGenerator(void *p) {
      typedef ::R3BCosmicGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCosmicGenerator

//______________________________________________________________________________
void R3Bp2pGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3Bp2pGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3Bp2pGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3Bp2pGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3Bp2pGenerator(void *p) {
      return  p ? new(p) ::R3Bp2pGenerator : new ::R3Bp2pGenerator;
   }
   static void *newArray_R3Bp2pGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3Bp2pGenerator[nElements] : new ::R3Bp2pGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3Bp2pGenerator(void *p) {
      delete ((::R3Bp2pGenerator*)p);
   }
   static void deleteArray_R3Bp2pGenerator(void *p) {
      delete [] ((::R3Bp2pGenerator*)p);
   }
   static void destruct_R3Bp2pGenerator(void *p) {
      typedef ::R3Bp2pGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3Bp2pGenerator

//______________________________________________________________________________
void R3BAsciiIQMDGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAsciiIQMDGen.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAsciiIQMDGen::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAsciiIQMDGen::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAsciiIQMDGen(void *p) {
      return  p ? new(p) ::R3BAsciiIQMDGen : new ::R3BAsciiIQMDGen;
   }
   static void *newArray_R3BAsciiIQMDGen(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAsciiIQMDGen[nElements] : new ::R3BAsciiIQMDGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAsciiIQMDGen(void *p) {
      delete ((::R3BAsciiIQMDGen*)p);
   }
   static void deleteArray_R3BAsciiIQMDGen(void *p) {
      delete [] ((::R3BAsciiIQMDGen*)p);
   }
   static void destruct_R3BAsciiIQMDGen(void *p) {
      typedef ::R3BAsciiIQMDGen current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAsciiIQMDGen

//______________________________________________________________________________
void R3BAsciiUrQMDGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAsciiUrQMDGen.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAsciiUrQMDGen::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAsciiUrQMDGen::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAsciiUrQMDGen(void *p) {
      return  p ? new(p) ::R3BAsciiUrQMDGen : new ::R3BAsciiUrQMDGen;
   }
   static void *newArray_R3BAsciiUrQMDGen(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAsciiUrQMDGen[nElements] : new ::R3BAsciiUrQMDGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAsciiUrQMDGen(void *p) {
      delete ((::R3BAsciiUrQMDGen*)p);
   }
   static void deleteArray_R3BAsciiUrQMDGen(void *p) {
      delete [] ((::R3BAsciiUrQMDGen*)p);
   }
   static void destruct_R3BAsciiUrQMDGen(void *p) {
      typedef ::R3BAsciiUrQMDGen current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAsciiUrQMDGen

//______________________________________________________________________________
void R3BIonGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BIonGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BIonGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BIonGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BIonGenerator(void *p) {
      return  p ? new(p) ::R3BIonGenerator : new ::R3BIonGenerator;
   }
   static void *newArray_R3BIonGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BIonGenerator[nElements] : new ::R3BIonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BIonGenerator(void *p) {
      delete ((::R3BIonGenerator*)p);
   }
   static void deleteArray_R3BIonGenerator(void *p) {
      delete [] ((::R3BIonGenerator*)p);
   }
   static void destruct_R3BIonGenerator(void *p) {
      typedef ::R3BIonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BIonGenerator

namespace {
  void TriggerDictionaryInitialization_G__R3BGenDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/field",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/generators",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bgen",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/r3bgen/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BPrimaryGenerator;
class R3BSpecificGenerator;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$R3BReadKinematics.h")))  R3BReadKinematics;
class __attribute__((annotate("$clingAutoload$R3BCDGenerator.h")))  R3BCDGenerator;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) R3BBeamInfo;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$R3BBackTracking.h")))  R3BBackTracking;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) R3BBackTrackingStorageState;
class R3BAsciiGenerator;
class R3BLandGenerator;
class R3BCALIFATestGenerator;
class R3BCosmicGenerator;
class R3Bp2pGenerator;
class R3BAsciiIQMDGen;
class R3BAsciiUrQMDGen;
class R3BIonGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BPRIMARYGENERATOR_H
#define R3BPRIMARYGENERATOR_H

#include "FairPrimaryGenerator.h"
#include "FairGenericStack.h"

#include "TNamed.h"
#include "TObjArray.h"
#include "TVector3.h"

#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "THashList.h"
#include "TDecayChannel.h"

#include "TRandom.h"
#include "TMath.h"
#include "TF1.h"

#include "TVirtualMC.h"
#include "TMCParticleType.h"

#include "Riostream.h"
#include <iostream>
#include <stdio.h>


class R3BPrimaryGenerator : public FairPrimaryGenerator
{

 public:
     /** Default constructor. **/
     R3BPrimaryGenerator();

     /** Constructor with name and title **/
     R3BPrimaryGenerator(const char* name, const char *title="R3B Generator");

     /** Destructor. **/
     virtual ~R3BPrimaryGenerator();


     virtual  void AddTrack(Int_t pdgid, Double_t px, Double_t py, Double_t pz,
                            Double_t vx, Double_t vy, Double_t vz, Int_t parent=-1,Bool_t wanttracking=true,
                            Double_t e=-9e9, Double_t tof = 0., Double_t weight = 0.);



     Bool_t ExtendIon(Int_t pdgid);
     void   ExtendIon2(Int_t pdgid);
     //Updates the pdg base for event displayer
     void WriteTable(const char* filename);


  R3BPrimaryGenerator& operator= (const  R3BPrimaryGenerator&) {return *this;}

  ClassDef(R3BPrimaryGenerator,1);

};

#endif


/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Marc Labiche		labi-ph0@paisley.ac.uk
//	       Oleg Kiselev		O.Kiselev@gsi.de
//             Hector Alvarez-Pol       hapol@fpddux.usc.es
//             Saúl Beceiro             saul.beceiro@rai.usc.es
//             Denis Bertini          <D.Bertini@gsi.de>
//*-- Date: 11/2005
//*-- Last Update: 3/08/09  <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Event generator interface for R3B
//
// --------------------------------------------------------------
// Comments:
//               3/08/09 - adapted for R3BRoot
//                         <D.Bertini@gsi.de>
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BSpecificGenerator_H
#define R3BSpecificGenerator_H 1


#include "TString.h"
#include "TVector3.h"

#include "TRandom.h"
#include "TParticlePDG.h"
#include "TDatabasePDG.h"
#include "TMath.h"

#include "FairGenerator.h"

#include "R3BReadKinematics.h"
#include "R3BCDGenerator.h"
#include "R3BBackTracking.h"


class TVector3;
class TString;

class R3BSpecificGenerator : public FairGenerator {

private:

  R3BReadKinematics *pReadKinematics;
  R3BCDGenerator *pCDGenerator;
  R3BBackTracking *pBackTrackingGenerator;


  TString gammasFlag;          // flag to select an isotropic gamma emitter
  TString decaySchemeFlag;     // 
  TString reactionFlag;        // flag to select a reaction 
  TString reactionType;        // reaction type
  TString dissociationFlag;    //Coulomb dissociation generator flag
  TString backTrackingFlag;    //BackTracking generator flag

 
  TString targetType;         // target elements
  Double_t targetHalfThicknessPara;
  Double_t targetThicknessLiH;
  Double_t targetRadius;

  TString  beamInteractionFlag; // flag to select target/beam interaction-like position for gammas origin
  TString  rndmFlag;          // flag for a rndm (angle) primary emission
  TString  rndmEneFlag;       // flag for a rndm energy primary emission
  TString  boostFlag;	       // flag for a boosted primary emission
  Int_t    fPDGType;  // Particle type (PDG encoding)
  Double_t  kinEnergyPrim;     // kinetic energy of the primary
  Double_t  meanKinEnergyBeam; // kinetic energy mean of the beam (per nucleon)
  Double_t  sigmaKinEnergyBeam;// kinetic energy sigma of the beam
   
  
  TString simEmittanceFlag; //flag to select an emittance spectra for vertex emission in CoulDiss
  Double_t sigmaXInEmittance;
  Double_t sigmaXPrimeInEmittance;

  Double_t fPDGMass; // Particle Mass from internal PDG table

  Int_t fMult;                      // Multiplicity
  Double_t fP;                      // Momentum
  TVector3 fPdir;                   // Momentum Direction
  Int_t fCharge;                 // Charge
  TVector3 fPol;                    // Polarization
  TVector3 fPos;                    // Vertex position
  Double_t fTime;                   // Decay Time
  TString particlePrim;
  Bool_t isDumped;

public:
  R3BSpecificGenerator();
  R3BSpecificGenerator(const R3BSpecificGenerator&);
  ~R3BSpecificGenerator();

  R3BSpecificGenerator& operator=(const R3BSpecificGenerator&) { return *this; }

  /** Initializer **/
  virtual Bool_t Init();

   /** Creates an event with given type and multiplicity.
   **@param primGen  pointer to the FairSpecificGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);


  void SetBeamInteractionFlag(TString val){beamInteractionFlag=val;}
  void SetRndmFlag(TString val){ rndmFlag = val;}
  void SetRndmEneFlag(TString val){ rndmEneFlag = val;}
  void SetBoostFlag(TString val){ boostFlag = val;}
  void SetBeamEnergy(Double_t val){ 
     meanKinEnergyBeam = val;
  }
  void SetSigmaBeamEnergy(Double_t val){ sigmaKinEnergyBeam = val;}

  void SetParticlePrim(TString val){ particlePrim = val;}

  void SetEnergyPrim(Double_t val){
      if ( reactionFlag.CompareTo("on") == 0 ){
         cout << "-I- R3BSpecificGenerator::SetEnergyPrim()  \
                 FLAG(Reaction) is on " << endl;
         cout << "-I  R3BSpecificGenerator::SetEnergyPrim()  \
                 Sampling between [50.,400.] MeV activated ..."<< endl;
       }

      kinEnergyPrim = val;

  }

  void SetTargetType(TString ans){targetType=ans;} 
  void SetReactionFlag(TString val){reactionFlag=val;} 
  void SetGammasFlag(TString val){gammasFlag=val;} 
  void SetDecaySchemeFlag(TString val){decaySchemeFlag=val;} 
  void SetReactionType(TString val){reactionType=val;} 
  void SetTargetHalfThicknessPara(Double_t para){targetHalfThicknessPara=para;}
  void SetTargetThicknessLiH(Double_t para){targetThicknessLiH=para;} 
  void SetTargetRadius(Double_t para){targetRadius=para;} 

  void SetDissociationFlag(TString val){dissociationFlag=val;}
  void SetBackTrackingFlag(TString val){backTrackingFlag=val;}
  void SetSimEmittanceFlag(TString val){simEmittanceFlag=val;} 
  void SetSigmaXInEmittance(Double_t val){sigmaXInEmittance=val;} 
  void SetSigmaXPrimeInEmittance(Double_t val){sigmaXPrimeInEmittance=val;} 

  //
  TString     GetBeamInteractionFlag() { return beamInteractionFlag;}
  TString     GetRndmFlag(){ return  rndmFlag ;}
  TString     GetRndmEneFlag(){ return rndmEneFlag;}
  TString     GetBoostFlag(){ return  boostFlag ;}
  Double_t    GetBeamEnergy(){ return  meanKinEnergyBeam ;}
  TString     GetParticlePrim(){ return particlePrim  ;}
  Double_t    GetEnergyPrim(){ return  kinEnergyPrim ;}
  TString     GetTargetType(){ return   targetType ;}
  TString     GetReactionFlag(){ return  reactionFlag  ;}
  TString     GetGammasFlag() { return   gammasFlag ;}
  TString     GetDecaySchemeFlag(){ return decaySchemeFlag;}
  TString     GetReactionType() { return   reactionType ;}

  Double_t    GetTargetHalfThicknessPara(){ return  targetHalfThicknessPara;}
  Double_t    GetTargetThicknessLiH(){ return  targetThicknessLiH ;}
  Double_t    GetTargetRadius() { return  targetRadius ;}

  TString     GetDissociationFlag() { return  dissociationFlag  ;}
  TString     GetBackTrackingFlag() { return  backTrackingFlag  ;}
  TString     GetSimEmittanceFlag() { return  simEmittanceFlag  ;}
  Double_t    GetSigmaXInEmittance() { return  sigmaXInEmittance ;}
  Double_t    GetSigmaXPrimeInEmittance() { return  sigmaXPrimeInEmittance ;}

  void SetParticleDefinition( Int_t pdg_id)
     { fPDGType = pdg_id;}

  inline void SetParticleMomentum(Double32_t aMomentum)
     {fP = aMomentum ;}

  inline void SetParticleMomentumDirection(TVector3 aMomentumDirection)
     {fPdir = aMomentumDirection; }


  inline void SetParticleCharge(Int_t aCharge)
    { fCharge = aCharge; }

  inline void SetParticlePolarization(TVector3 aVal)
     { fPol = aVal; }

  inline void SetParticlePosition(TVector3 aPos)
     { fPos = aPos; }

  inline void SetParticleTime(Double32_t aTime)
     { fTime = aTime; }

  inline void SetNumberOfParticles(Int_t i)
     { fMult = i; }


  inline Int_t GetPrimPDGCode() { return fPDGType;}

  inline TParticlePDG* GetParticleDefinition()
  {
   TDatabasePDG* pdgBase = TDatabasePDG::Instance();
   TParticlePDG *particle = pdgBase->GetParticle(fPDGType);

   return particle; }


  inline TVector3 GetParticleMomentumDirection()
  { return TVector3(fP,0,0); }

  inline Int_t GetParticleCharge()
     { return fCharge; }

  inline TVector3 GetParticlePolarization()
     { return fPol; }

  inline TVector3 GetParticlePosition()
     { return fPos; }

  inline Double_t GetParticleTime()
  { return fTime; }

  inline Int_t GetNumberOfParticles()
     { return fMult; }

  void PrintParameters();  


 ClassDef(R3BSpecificGenerator,1);

};

#endif


/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Oleg Kiselev		O.Kiselev@gsi.de
//*-- Date: 11/2005
//*-- Last Update: 20/07/05 Hector Alvarez
// --------------------------------------------------------------
// Description:
//   Event generator kinematics reader
//
// --------------------------------------------------------------
// Comments:
// 
// --------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////

#ifndef READKINEM_H
#define READKINEM_H

#include "TObject.h"
#include <fstream>
#include <iostream>
#include <string>

class R3BReadKinematics : public TObject
{
  public:
    R3BReadKinematics();
   ~R3BReadKinematics();
   
  public:
//    File *pFile;
		Double_t LabAngle[1000];
		Double_t LabEnergy[1000];
			Double_t T_xsec[5000];
			Double_t CrossSection_t[5000];
			//Integrated matrix (cross section) 
      Double_t Icross_section[5000];

  ClassDef(R3BReadKinematics,1) //ROOT CINT

};
#endif
/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//             Hector Alvarez-Pol       hapol@fpddux.usc.es
//             Denis Bertini            D.Bertini@gsi.de    
//*-- Date: 05/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Coulomb Disociation generators interface
//
// --------------------------------------------------------------
// Comments:
//     - 05/08/09  Adapting to R3BRoot 
//     - 07/05/07 Adding setters for including emittance
//     - 03/05/07 Cleaning and moving to svn repository
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BCDGenerator_h
#define R3BCDGenerator_h 1

#include "TObject.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class R3BCDGenerator :  public TObject {
  
private:
  Double_t  px1; //momentum components for particle 1
  Double_t  py1;
  Double_t  pz1;
  Double_t  E1;  //energy for particle 1
  Double_t  px2; //momentum components for particle 2
  Double_t  py2;
  Double_t  pz2;
  Double_t  E2;  //energy for particle 1

  ifstream* inputFile;  //!
   
public:
  
  R3BCDGenerator();
  R3BCDGenerator(const R3BCDGenerator&);
  ~R3BCDGenerator();

  R3BCDGenerator& operator=(const R3BCDGenerator&) { return *this; }
  
  void ReadNewLine();

  Double_t GetPx1(){return px1;}
  Double_t GetPy1(){return py1;}
  Double_t GetPz1(){return pz1;}
  Double_t GetE1(){return E1;}
  Double_t GetPx2(){return px2;}
  Double_t GetPy2(){return py2;}
  Double_t GetPz2(){return pz2;}
  Double_t GetE2(){return E2;}

  void SetPx1(Double_t px){px1=px;}
  void SetPy1(Double_t py){py1=py;}
  void SetPz1(Double_t pz){pz1=pz;}
  void SetE1(Double_t E){E1=E;}
  void SetPx2(Double_t px){px2=px;}
  void SetPy2(Double_t py){py2=py;}
  void SetPz2(Double_t pz){pz2=pz;}
  void SetE2(Double_t E){E2=E;}
  

  ClassDef(R3BCDGenerator,0);
};
#endif
/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es

//*-- Date: 08/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   The information from the beam parameters used for the reaction
//   vertex. Information to be accessed in the ROOT file per event
//
// --------------------------------------------------------------
// Comments:
//     - 05/08/09 changes for Root compat. 
//
//     - 07/05/07 Data structure for beam parameters  
//
/////////////////////////////////////////////////////////////////

#ifndef R3BBeamInfo_H
#define R3BBeamInfo_H 1

#include "TROOT.h"  //for including Rtypes.h

#include "TObject.h" 

class R3BBeamInfo : public TObject {
  
private:

  Double_t theta;              // theta emission angle in vertex
  Double_t phi;                // phi emission angle in vertex

  Double_t xPos;         //vertex position
  Double_t yPos;
  Double_t zPos;
  
public:
  
  R3BBeamInfo();
  ~R3BBeamInfo();
  
  inline Double_t GetTheta() const { return theta; }
  inline Double_t GetPhi() const { return phi; }

  inline Double_t GetXPos() const { return xPos; }
  inline Double_t GetYPos() const { return yPos; }
  inline Double_t GetZPos() const { return zPos; }

  inline void SetTheta(Double_t t) { theta = t; }
  inline void SetPhi(Double_t p) { phi = p; }

  inline void SetXPos(UInt_t x) { xPos = x; }
  inline void SetYPos(UInt_t y) { yPos = y; }
  inline void SetZPos(UInt_t z) { zPos = z; }

  void SetVertexPosition(Double_t ,Double_t ,Double_t );
  void SetAngles(Double_t ,Double_t );

  void print(void);

  ClassDef(R3BBeamInfo,1) //ROOT CINT    
};
#endif
/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//           
//*-- Date: 08/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Back Tracking reconstruction generators interface
//
// --------------------------------------------------------------
// Comments:
//           - Adapted for R3BRoot
//   
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////


#ifndef R3BBackTracking_h
#define R3BBackTracking_h 1

#include "TObject.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class R3BBackTracking : public TObject{
  
private:
  Double_t  px1; //unitary momentum components for proton
  Double_t  py1;
  Double_t  pz1;
  Double_t  pprim;
  Double_t   x1; //position in DCH2 (starting point)
  Double_t  y1;
  Double_t  z1;
  Double_t  x0; //position measured in target
  Double_t  y0;
  Double_t  z0; 

  ifstream* inputFile; //!
   
public:
  
  R3BBackTracking();
  R3BBackTracking(const R3BBackTracking&);
  ~R3BBackTracking();

  R3BBackTracking& operator=(const R3BBackTracking&) { return *this; }
  
  void ReadNewLine();

  Double_t GetPx1(){return px1;}
  Double_t GetPy1(){return py1;}
  Double_t GetPz1(){return pz1;}
  Double_t GetPPrim(){return pprim;}
  Double_t GetX1(){return x1;}
  Double_t GetY1(){return y1;}
  Double_t GetZ1(){return z1;}
  Double_t GetX0(){return x0;}
  Double_t GetY0(){return y0;}
  Double_t GetZ0(){return z0;}
  
  void SetPx1(Double_t p){px1=p;}
  void SetPy1(Double_t p){py1=p;}
  void SetPz1(Double_t p){pz1=p;}
  void SetPPrim(Double_t p){pprim=p;}
  void SetX1(Double_t p){x1=p;}
  void SetY1(Double_t p){y1=p;}
  void SetZ1(Double_t p){z1=p;}
  void SetX0(Double_t p){x0=p;}
  void SetY0(Double_t p){y0=p;}
  void SetZ0(Double_t p){z0=p;}

   ClassDef(R3BBackTracking,0) //ROOT CINT

};
#endif
/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//           
//*-- Date: 05/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Storage intermediate state in the iterations needed 
//   for the convergency of the momentum calculation
//
// --------------------------------------------------------------
// Comments:
//       - Adapted for R3BRoot 
//   
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BBackTrackingStorageState_h
#define R3BBackTrackingStorageState_h 1

#include "TROOT.h"  //for including Rtypes.h

#include "TObject.h"

#include <iostream>
#include <fstream>
#include <string>

//using namespace std;

class R3BBackTrackingStorageState : public TObject{ 
  
private:
  Double_t  p0; //central value of the theoretical momentum calculation
  Double_t  pcent;
  Double_t  pmax;//maximum value of the theoretical momentum calculation
  Double_t  pmin;//minimum value of the theoretical momentum calculation
  Double_t  pmaxabs;//maximum value of the theoretical momentum calculation
  Double_t  pminabs;//minimum value of the theoretical momentum calculation
  Double_t  pfinal;//calculated value for the momentum module
  Double_t  piter;//calculated value for the momentum module
  Int_t     niter;//iteration number
  Int_t     converg; //0 when it doesnt converge,1 when it does.

  Double_t  x0tar;//coordinates measured in the target (real measurement)
  Double_t  y0tar;
  Double_t  z0tar;
  Double_t pPrim;//real momentum (obtained with simulated data) 

  Double_t  xSim;//coordinates in the target taken during the backward simulation
  Double_t  ySim;
  Double_t  zSim;

public:
  
  R3BBackTrackingStorageState();
  ~R3BBackTrackingStorageState();
  
  void ReadNewLine();
  
  Double_t GetP0(){return p0;}
  Double_t GetPcent(){return pcent;}
  Double_t GetPmax(){return pmax;}
  Double_t GetPmin(){return pmin;}
  Double_t GetPmaxAbs(){return pmaxabs;}
  Double_t GetPminAbs(){return pminabs;}
  Double_t GetPfinal(){return pfinal;}
  Double_t GetPiter(){return piter;}
  Int_t GetNiter(){return niter;}
  Int_t GetConverg(){return converg;}
  Double_t GetX0(){return x0tar;}
  Double_t GetY0(){return y0tar;}
  Double_t GetZ0(){return z0tar;}
  Double_t GetPPrim(){return pPrim;}
  Double_t GetXSim(){return xSim;}
  Double_t GetYSim(){return ySim;}
  Double_t GetZSim(){return zSim;}
  
  void SetP0(Double_t p){p0=p;}
  void SetPcent(Double_t p){pcent=p;}
  void SetPmax(Double_t p){pmax=p;}
  void SetPmin(Double_t p){pmin=p;}
  void SetPmaxabs(Double_t p){pmaxabs=p;}
  void SetPminabs(Double_t p){pminabs=p;}
  void SetPfinal(Double_t p){pfinal=p;}
  void SetPiter(Double_t p){piter=p;}
  void SetNiter(Int_t p){niter=p;}
  void SetConverg(Int_t p){converg=p;}
  void SetX0(Double_t p){x0tar=p;}
  void SetY0(Double_t p){y0tar=p;}
  void SetZ0(Double_t p){z0tar=p;}
  void SetPPrim(Double_t p){pPrim=p;}
  void SetXSim(Double_t p){xSim=p;}
  void SetYSim(Double_t p){ySim=p;}
  void SetZSim(Double_t p){zSim=p;}
  
  ClassDef(R3BBackTrackingStorageState,1) //ROOT CINT

};
#endif
// -------------------------------------------------------------------------
// -----                R3BAsciiGenerator header file                 -----
// -----                Created 27.11.09 <D.Bertini@gsi.de>           -----
// -------------------------------------------------------------------------

/** R3BAsciiGenerator
**/


#ifndef R3BASCIIGENERATOR_H
#define R3BASCIIGENERATOR_H 1


#include "FairGenerator.h"

#include <fstream>
#include <map>

using namespace std;

using std::ifstream;

class TDatabasePDG;
class FairPrimaryGenerator;
class FairIon;

class R3BAsciiGenerator : public FairGenerator  
{

 public: 

  /** Default constructor without arguments should not be used. **/
  R3BAsciiGenerator();


  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  R3BAsciiGenerator(const char* fileName);


  R3BAsciiGenerator(const R3BAsciiGenerator&);


  R3BAsciiGenerator& operator=(const R3BAsciiGenerator&) { return *this; }


  /** Destructor. **/
  virtual ~R3BAsciiGenerator();

	
  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the R3BPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

 void SetXYZ   (Double32_t x=0, Double32_t y=0, Double32_t z=0) {
      fX=x;
      fY=y;
      fZ=z;
      fPointVtxIsSet=kTRUE;
   }

 void SetDxDyDz(Double32_t sx=0, Double32_t sy=0, Double32_t sz=0) {
      fDX=sx;
      fDY=sy;
      fDZ=sz;
      fBoxVtxIsSet=kTRUE;

 } 

 private:

  ifstream*      fInputFile;          //! Input file stream
  const Char_t*  fFileName;           //! Input file Name
  TDatabasePDG*  fPDG;                //!  PDG database

	
  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();


  /** Private method RegisterIons. Goes through the input file and registers
   ** any ion needed. **/
  Int_t RegisterIons();



  /** STL map from ion name to FairIon **/
  std::map<TString, FairIon*> fIonMap;       //!
	
  Double32_t fX, fY, fZ;           // Point vertex coordinates [cm]	
  Bool_t     fPointVtxIsSet;       // True if point vertex is set
  Double32_t fDX, fDY, fDZ;           // Point vertex coordinates [cm]	
  Bool_t     fBoxVtxIsSet;       // True if point vertex is set



  ClassDef(R3BAsciiGenerator,1);

};

#endif
// -------------------------------------------------------------------------
// -----                R3BCosmicGenerator header file                -----
// -----               Created 09/09/04  by Marc Labiche               -----
// -----            Derived from R3BBoxGenerator header file          ----- 
// -------------------------------------------------------------------------

/**  R3BCosmicGenerator.h 
 *@author Marc Labiche <marc.labiche@stfc.ac.uk>
 *
 * The R3BBoxGenerator generates particles within given range
 * over phi,theta and a fixed multiplicity per event.
 * Derived from R3BGenerator.
**/

/* $Id: R3BCosmicGenerator.h,v 1.0 2010/02/19 $ */

/* History of cvs commits:
 *
 *
 */

#ifndef R3B_COSMICGENERATOR_H
#define R3B_COSMICGENERATOR_H

#include "FairGenerator.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BCosmicGenerator : public FairGenerator
{
public:

  /** Default constructor. **/
  R3BCosmicGenerator();

  /** Constructor with PDG-ID, multiplicity
   **@param pdgid Particle type (PDG encoding)
   **@param mult  Multiplicity (default is 1)
   **/
  R3BCosmicGenerator(Int_t pdgid, Int_t mult=1, Double32_t E_Threshold=0);

  /** Destructor **/
  virtual ~R3BCosmicGenerator() {};

  /** Modifiers **/
  void SetPDGType      (Int_t pdg)  {fPDGType = pdg;  };

  void SetMultiplicity (Int_t mult) {fMult    = mult; };

  void SetE_Threshold (Double32_t E_Threshold) {fE_Threshold    = E_Threshold; };

  void SetPhiRange     (Double32_t phimin=0  , Double32_t phimax=360)
    {fPhiMin=phimin; fPhiMax=phimax;};

  void SetThetaRange   (Double32_t thetamin=0, Double32_t thetamax=90)
    {fThetaMin=thetamin; fThetaMax=thetamax; fThetaRangeIsSet=kTRUE;};

  void SetCosTheta   ()
    {fCosThetaIsSet=kTRUE;};

  void SetXYZ   (Double32_t x=0, Double32_t y=0, Double32_t z=0) {
    fX=x; fY=y; fZ=z; fPointVtxIsSet=kTRUE;}

  void SetBoxXYZ (Double32_t x1=0, Double32_t y1=0, Double32_t x2=0, Double32_t y2=0, Double32_t z=0) {
    fX1=x1; fY1=y1; fX2=x2; fY2=y2; fZ=z; fBoxVtxIsSet=kTRUE;}

  void SetDebug(Bool_t debug=0) {fDebug = debug;}


  /** Initializer **/
  virtual Bool_t Init();

  /** Creates an event with given type and multiplicity.
   **@param primGen  pointer to the R3BPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  /** E_Cosmic **/
  Double32_t E_Cosmic();


private:
  Int_t      fPDGType;             // Particle type (PDG encoding)
  Int_t      fMult;                // Multiplicity

  Double32_t fE_Threshold;         // Kinetic energy threshold

  Double32_t fPDGMass;             // Particle mass [GeV]
  Double32_t fPhiMin, fPhiMax;     // Azimuth angle range [degree]
  Double32_t fThetaMin, fThetaMax; // Polar angle range in lab system [degree]
  Double32_t fX, fY, fZ;           // Point vertex coordinates [cm]
  Double32_t fX1, fY1, fZ1, fX2, fY2, fZ2;   // Box vertex coords (x1,y1,z1)->(x2,y2,z2)

  Bool_t     fThetaRangeIsSet;     // True if theta range is set
  Bool_t     fCosThetaIsSet;       // True if uniform distribution in 
                                   //cos(theta) is set (default -> not set)
  Bool_t     fPointVtxIsSet;       // True if point vertex is set
  Bool_t     fBoxVtxIsSet;         // True if box vertex is set
  Bool_t     fDebug;               // Debug switch

  ClassDef(R3BCosmicGenerator,1);

};


#endif
// -------------------------------------------------------------------------
// -----          based on FairAsciiGenerator header file              -----
// -----          Created 30/09/10  by M. Labiche                      -----
// -------------------------------------------------------------------------

/**  R3Bp2pGenerator.h 
 Derived from FairGenerator.
**/


#ifndef FAIR_ASCIIGENERATOR_H
#define FAIR_ASCIIGENERATOR_H


#include "FairGenerator.h"

#include <fstream>

using namespace std;

class TDatabasePDG;
class FairPrimaryGenerator;

class R3Bp2pGenerator : public FairGenerator  
{

 public: 

  /** Default constructor without arguments should not be used. **/
  R3Bp2pGenerator();


  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  R3Bp2pGenerator(const char* fileName);


  R3Bp2pGenerator(const R3Bp2pGenerator&);


  R3Bp2pGenerator& operator=(const R3Bp2pGenerator&) { return *this; }


  /** Destructor. **/
  virtual ~R3Bp2pGenerator();

	
  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);


 private:

  ifstream* fInputFile;               //! Input file stream
  const Char_t * fFileName;           //! Input file Name

  ofstream* fOutputFile;	

  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();
	
	
  /** PDG data base */
  
//  TDatabasePDG *fPDG; //!

  ClassDef(R3Bp2pGenerator,1);

};

#endif
// --------------------------------------------------------------------------------------------
// -----                          R3BLandGenerator header file                            -----
// -----                       Created by M.I.Cherciu -18.06.2010                         -----
// --------------------------------------------------------------------------------------------

/** R3BLandGenerator
**/


#ifndef R3BLANDGENERATOR_H
#define R3BLANDGENERATOR_H 1


#include "FairGenerator.h"
#include <map>

//Root Headers
#include "TROOT.h"
#include "TApplication.h"
#include "TSystem.h"
#include "TBranch.h"
#include "TPad.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TFile.h"



class TDatabasePDG;
class FairPrimaryGenerator;
class FairIon;

class R3BLandGenerator : public FairGenerator  
{

 public: 

  /** Default constructor without arguments should not be used. **/
  R3BLandGenerator();


  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  R3BLandGenerator(const char* fileName);


  R3BLandGenerator(const R3BLandGenerator&);


  R3BLandGenerator& operator=(const R3BLandGenerator&) { return *this; }


  /** Destructor. **/
  virtual ~R3BLandGenerator();


  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the R3BPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);



 private:

  TFile* fInputFile;          //! Input file stream
  TTree* tree;

  TLeaf* lPDG;
  TLeaf* lM;
  TLeaf* lZ;
  TLeaf* lE;
  TLeaf* lp;
  TLeaf* ltheta;
  TLeaf* lphi;
  TLeaf* lpx;
  TLeaf* lpy;
  TLeaf* lpz;
  TLeaf* lx;
  TLeaf* ly;
  TLeaf* lz;

  const char*  fFileName;           //! Input file Name
  TDatabasePDG*  fPDG;                //!  PDG database

  Double_t PDGo,Mo,Zo,Eo,po,thetao,phio;
  Double_t xo,yo,zo,pxo,pyo,pzo;
  Double_t vx,vy,vz;

  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();


  ClassDef(R3BLandGenerator,1);

};

#endif
// -------------------------------------------------------------------------
// -----          R3BCALIFATestGenerator source file                   -----
// -----          Created 05/07/10  by H. Alvarez Pol				   -----
// -------------------------------------------------------------------------

/**  R3BCALIFATestGenerator.h 
 *@author H. Alvarez Pol <hector.alvarez@usc.es>
 *
 * The R3BCALIFATestGenerator generates gammas with different options 
 * for testing CALIFA. Copies from FairBoxGenerator (I tried to derive from it, 
 * but requires a modification of their data members to protected).
 * Derived from FairGenerator.
**/

#ifndef FAIR_CALIFATESTGENERATOR_H
#define FAIR_CALIFATESTGENERATOR_H

#include "FairGenerator.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BCALIFATestGenerator : public FairGenerator
{
public:

  /** Default constructor. **/
  R3BCALIFATestGenerator();

  /** Constructor with PDG-ID, multiplicity
   **@param pdgid Particle type (PDG encoding)
   **@param mult  Multiplicity (default is 1)
   **/
  R3BCALIFATestGenerator(Int_t pdgid, Int_t mult=1);

  /** Destructor **/
  virtual ~R3BCALIFATestGenerator() {};

  /** Modifiers **/
  void SetPDGType      (Int_t pdg)  {fPDGType = pdg;  };
	
  void SetMultiplicity (Int_t mult) {fMult    = mult; };
	
  void SetPRange(Double32_t pmin=0   , Double32_t pmax=10)
    {fPMin=pmin; fPMax=pmax; fPRangeIsSet=kTRUE;}
	
  void SetPtRange      (Double32_t ptmin=0   , Double32_t ptmax=10)
    {fPtMin=ptmin; fPtMax=ptmax; fPtRangeIsSet=kTRUE;};
	
  void SetPhiRange     (Double32_t phimin=0  , Double32_t phimax=360)
    {fPhiMin=phimin; fPhiMax=phimax;};
	
  void SetEtaRange     (Double32_t etamin=-5 , Double32_t etamax=7)
    {fEtaMin=etamin; fEtaMax=etamax; fEtaRangeIsSet=kTRUE;};
	
  void SetYRange       (Double32_t ymin=-5   , Double32_t ymax=7)
    {fYMin=ymin; fYMax=ymax; fYRangeIsSet=kTRUE;};
	
  void SetThetaRange   (Double32_t thetamin=0, Double32_t thetamax=90)
    {fThetaMin=thetamin; fThetaMax=thetamax; fThetaRangeIsSet=kTRUE;};
	
  void SetCosTheta   ()
    {fCosThetaIsSet=kTRUE;};
	
  void SetXYZ   (Double32_t x=0, Double32_t y=0, Double32_t z=0) {
		fX=x; fY=y; fZ=z; fPointVtxIsSet=kTRUE;}
	
  void SetBoxXYZ (Double32_t x1=0, Double32_t y1=0, Double32_t z1=0, Double32_t x2=0, Double32_t y2=0, Double32_t z2=0) {
		fX1=x1; fY1=y1; fZ1=z1; fX2=x2; fY2=y2; fZ2=z2; fBoxVtxIsSet=kTRUE;}
	
  void SetDebug(Bool_t debug=0) {fDebug = debug;}
	
  void SetLorentzBoost(Double32_t beta=0)
    {   SetFragmentVelocity(beta); fLorentzBoostIsSet=kTRUE; };

  void SetFragmentVelocity(Double32_t beta=0);
	
  void SetNuclearDecayChain()
    {  fNuclearDecayChainIsSet=kTRUE;};
	
  void SetDecayChainPoint(Double32_t gammaEnergy=0, Double32_t branchingRatio=0);
	
  /** Initializer **/
  virtual Bool_t Init();

  /** Creates an event with given type and multiplicity.
   **@param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

private:
  Int_t      fPDGType;             // Particle type (PDG encoding)
  Int_t      fMult;                // Multiplicity
	
  Double32_t fPDGMass;             // Particle mass [GeV]
  Double32_t fPtMin,  fPtMax;      // Transverse momentum range [GeV]
  Double32_t fPhiMin, fPhiMax;     // Azimuth angle range [degree]
  Double32_t fEtaMin, fEtaMax;     // Pseudorapidity range in lab system
  Double32_t fYMin,   fYMax;       // Rapidity range in lab system
  Double32_t fPMin,   fPMax;       // Momentum range in lab system  
  Double32_t fThetaMin, fThetaMax; // Polar angle range in lab system [degree]
  Double32_t fX, fY, fZ;           // Point vertex coordinates [cm]
  Double32_t fX1, fY1, fZ1, fX2, fY2, fZ2;   // Box vertex coords (x1,y1,z1)->(x2,y2,z2)
	
  Bool_t     fEtaRangeIsSet;       // True if eta range is set
  Bool_t     fYRangeIsSet;         // True if rapidity range is set
  Bool_t     fThetaRangeIsSet;     // True if theta range is set
  Bool_t     fCosThetaIsSet;       // True if uniform distribution in 
								   //cos(theta) is set (default -> not set)
  Bool_t     fPtRangeIsSet;        // True if transverse momentum range is set
  Bool_t     fPRangeIsSet;         // True if abs.momentum range is set
  Bool_t     fPointVtxIsSet;       // True if point vertex is set
  Bool_t     fBoxVtxIsSet;         // True if box vertex is set
  Bool_t     fDebug;               // Debug switch
	
  //SPECIFIC OF CALIFA
  Double32_t fGammaEnergies[8];          // Gamma energies for the nuclear decay chain [GeV] TEST UNITS!
  Double32_t fGammaBranchingRatios[8];   // Gamma branching ratios for the nuclear decay chain 
  Int_t	fGammasDefinedInNuclearDecay;	// Number of gammas defined (max 8)
  Double32_t fBetaOfEmittingFragment;	// Velocity of the fragment emitting the gammas
  Double32_t fGammaFactor;				// Velocity of the fragment emitting the gammas
	
  Bool_t     fLorentzBoostIsSet;        // True if Lorentz Boost is set
  Bool_t     fNuclearDecayChainIsSet;   // True if a nuclear decay chain is set
 

  ClassDef(R3BCALIFATestGenerator,1);

};


#endif
// -------------------------------------------------------------------------
// -----                FairAsciiGenerator header file                  -----
// -----          Created 09/06/04  by V. Friese / D.Bertini           -----
// -------------------------------------------------------------------------

/**  FairAsciiGenerator.h 
 *@author V.Friese  <v.friese@gsi.de>
 *@author D.Bertini <d.bertini@gsi.de>
 *@author M.Al-Turany<M.Al-Turany@gsi.de>
 *
 The FairAsciiGenerator reads an Ascii input file. The file must contain
 for each event a header line of the format  NTRACKS  IEV  VX VY VZ,
 where NTRACKS is the number of tracks in the event, IEV the event number,
 and VX, VY, VZ the event vertex coordinates in cm. The header line is
 followed by NTRACKS lines of the format G3PID, PX, PY, PZ, where
 G3PID is the GEANT3 particle code, and PX, PY, PZ the cartesian 
 momentum coordinates in GeV.
 Derived from FairGenerator.
**/


#ifndef R3BASCIIIQMDGEN_H
#define R3BASCIIIQMDGEN_H


#include "FairGenerator.h"

#include <fstream>

class TDatabasePDG;
class FairPrimaryGenerator;



class R3BAsciiIQMDGen : public FairGenerator  
{

 public: 

  /** Default constructor without arguments should not be used. **/
  R3BAsciiIQMDGen();


  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  R3BAsciiIQMDGen(const char* filename);


  R3BAsciiIQMDGen(const R3BAsciiIQMDGen&);


  R3BAsciiIQMDGen& operator=(const R3BAsciiIQMDGen&) { return *this; }


  /** Destructor. **/
  virtual ~R3BAsciiIQMDGen();

	
  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);




 private:

 
  FILE* fiqmd;
  const Char_t * fname;           //! Input file Name
 

  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();
	
	
  /** PDG data base */
  
//  TDatabasePDG *fPDG; //!

  ClassDef(R3BAsciiIQMDGen,1);

};

#endif
// -------------------------------------------------------------------------
// -----                FairAsciiGenerator header file                  -----
// -----          Created 09/06/04  by V. Friese / D.Bertini           -----
// -------------------------------------------------------------------------

/**  FairAsciiGenerator.h 
 *@author V.Friese  <v.friese@gsi.de>
 *@author D.Bertini <d.bertini@gsi.de>
 *@author M.Al-Turany<M.Al-Turany@gsi.de>
 *
 The FairAsciiGenerator reads an Ascii input file. The file must contain
 for each event a header line of the format  NTRACKS  IEV  VX VY VZ,
 where NTRACKS is the number of tracks in the event, IEV the event number,
 and VX, VY, VZ the event vertex coordinates in cm. The header line is
 followed by NTRACKS lines of the format G3PID, PX, PY, PZ, where
 G3PID is the GEANT3 particle code, and PX, PY, PZ the cartesian 
 momentum coordinates in GeV.
 Derived from FairGenerator.
**/


#ifndef R3BASCIIURQMDGEN_H
#define R3BASCIIURQMDGEN_H


#include "FairGenerator.h"

#include <fstream>

class TDatabasePDG;
class FairPrimaryGenerator;



class R3BAsciiUrQMDGen : public FairGenerator  
{

 public: 

  /** Default constructor without arguments should not be used. **/
  R3BAsciiUrQMDGen();


  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  R3BAsciiUrQMDGen(const char* filename);


  R3BAsciiUrQMDGen(const R3BAsciiUrQMDGen&);


  R3BAsciiUrQMDGen& operator=(const R3BAsciiUrQMDGen&) { return *this; }


  /** Destructor. **/
  virtual ~R3BAsciiUrQMDGen();

	
  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);




 private:

 
  FILE* furqmd;
  const Char_t * fname;           //! Input file Name
 

  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();
	
	
  /** PDG data base */
  
//  TDatabasePDG *fPDG; //!

  ClassDef(R3BAsciiUrQMDGen,1);

};

#endif
// -------------------------------------------------------------------------
// -----                   R3BIonGenerator header file                 -----
// -----                    Based on FairIonGenerator                  -----
// -----                 Created 18/03/11  by M. Labiche               -----
// -------------------------------------------------------------------------

/** Include beam spot size **/

#ifndef R3BIONGENERATOR_H
#define R3BIONGENERATOR_H


#include "FairGenerator.h"
#include "FairIon.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BIonGenerator : public FairGenerator
{

 public:

  /** Default constructor **/
  R3BIonGenerator();


  /** Constructor with ion name    
    ** For the generation of ions with pre-defined FairIon 
   ** By default, the  excitation energy is zero. This can be changed with the
   ** respective modifiers.
   **@param ionName  Ion name
   **@param mult      Number of ions per event
   **@param px,py,pz  Momentum components [GeV] per nucleon!
   **@param vx,vy,vz  Vertex coordinates [cm]
   **/
  R3BIonGenerator(const Char_t* ionName, Int_t mult, Double_t px, 
		  Double_t py, Double_t pz);


  /** Default constructor 
   ** For the generation of ions with atomic number z and mass number a.
   ** By default, the mass equals a times the proton mass and the 
   ** excitation energy is zero. This can be changed with the
   ** respective modifiers.
   **@param z         Atomic number
   **@param a         Atomic mass
   **@param q         Electric charge [e]
   **@param mult      Number of ions per event
   **@param px,py,pz  Momentum components [GeV] per nucleon!
   **@param vx,vy,vz  Vertex coordinates [cm]
   **/
  R3BIonGenerator(Int_t z, Int_t a, Int_t q, Int_t mult, Double_t px, 
		  Double_t py, Double_t pz);


  R3BIonGenerator(const R3BIonGenerator&);


  R3BIonGenerator& operator=(const R3BIonGenerator&) { return *this; }


  /** Destructor **/
  virtual ~R3BIonGenerator();


  /** Modifiers **/
  void SetCharge(Int_t charge){fQ=charge;}
  void SetExcitationEnergy(Double_t eExc);
  void SetMass(Double_t mass);

  void SetSpotRadius   (Double32_t r=0, Double32_t z=0, Double32_t off=0) {
    fR=r; fz=z; fOffset=off; fBeamSpotIsSet=kTRUE;}


  /** Method ReadEvent 
   ** Generates <mult> of the specified ions and hands hem to the
   ** FairPrimaryGenerator. 
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);


private:

  static Int_t fgNIon;      //! Number of the instance of this class
  Int_t    fMult;           // Multiplicity per event
  Double_t fPx, fPy, fPz;   // Momentum components [GeV] per nucleon
  Double32_t fR, fz, fOffset;  // beam Spot radius [cm], z source, y source
  Double_t fVx, fVy, fVz;   // Vertex coordinates [cm]
  FairIon   *fIon;          // Pointer to the FairIon to be generated
  Int_t    fQ;		    // Electric charge [e]

  Bool_t fBeamSpotIsSet;    // True if point beamspot is set
    
  ClassDef(R3BIonGenerator,1)

}; 


#endif
   


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BAsciiGenerator", payloadCode, "@",
"R3BAsciiIQMDGen", payloadCode, "@",
"R3BAsciiUrQMDGen", payloadCode, "@",
"R3BBackTracking", payloadCode, "@",
"R3BBackTrackingStorageState", payloadCode, "@",
"R3BBeamInfo", payloadCode, "@",
"R3BCALIFATestGenerator", payloadCode, "@",
"R3BCDGenerator", payloadCode, "@",
"R3BCosmicGenerator", payloadCode, "@",
"R3BIonGenerator", payloadCode, "@",
"R3BLandGenerator", payloadCode, "@",
"R3BPrimaryGenerator", payloadCode, "@",
"R3BReadKinematics", payloadCode, "@",
"R3BSpecificGenerator", payloadCode, "@",
"R3Bp2pGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BGenDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BGenDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BGenDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BGenDict() {
  TriggerDictionaryInitialization_G__R3BGenDict_Impl();
}
