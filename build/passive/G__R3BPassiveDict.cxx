// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIpassivedIG__R3BPassiveDict

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
#include "R3BCave.h"
#include "R3BGeoCave.h"
#include "R3BGeoMagnet.h"
#include "R3BGeoPassivePar.h"
#include "R3BGeoPipe.h"
#include "R3BGeoVacVesselCool.h"
#include "R3BGeoTarget.h"
#include "R3BMagnet.h"
#include "R3BGladMagnet.h"
#include "R3BPassiveContFact.h"
#include "R3BPipe.h"
#include "R3BVacVesselCool.h"
#include "R3BTarget.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BMagnet(void *p = 0);
   static void *newArray_R3BMagnet(Long_t size, void *p);
   static void delete_R3BMagnet(void *p);
   static void deleteArray_R3BMagnet(void *p);
   static void destruct_R3BMagnet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMagnet*)
   {
      ::R3BMagnet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMagnet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMagnet", ::R3BMagnet::Class_Version(), "invalid", 173,
                  typeid(::R3BMagnet), DefineBehavior(ptr, ptr),
                  &::R3BMagnet::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMagnet) );
      instance.SetNew(&new_R3BMagnet);
      instance.SetNewArray(&newArray_R3BMagnet);
      instance.SetDelete(&delete_R3BMagnet);
      instance.SetDeleteArray(&deleteArray_R3BMagnet);
      instance.SetDestructor(&destruct_R3BMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMagnet*)
   {
      return GenerateInitInstanceLocal((::R3BMagnet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMagnet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGladMagnet(void *p = 0);
   static void *newArray_R3BGladMagnet(Long_t size, void *p);
   static void delete_R3BGladMagnet(void *p);
   static void deleteArray_R3BGladMagnet(void *p);
   static void destruct_R3BGladMagnet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGladMagnet*)
   {
      ::R3BGladMagnet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGladMagnet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGladMagnet", ::R3BGladMagnet::Class_Version(), "invalid", 201,
                  typeid(::R3BGladMagnet), DefineBehavior(ptr, ptr),
                  &::R3BGladMagnet::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGladMagnet) );
      instance.SetNew(&new_R3BGladMagnet);
      instance.SetNewArray(&newArray_R3BGladMagnet);
      instance.SetDelete(&delete_R3BGladMagnet);
      instance.SetDeleteArray(&deleteArray_R3BGladMagnet);
      instance.SetDestructor(&destruct_R3BGladMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGladMagnet*)
   {
      return GenerateInitInstanceLocal((::R3BGladMagnet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGladMagnet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTarget(void *p = 0);
   static void *newArray_R3BTarget(Long_t size, void *p);
   static void delete_R3BTarget(void *p);
   static void deleteArray_R3BTarget(void *p);
   static void destruct_R3BTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTarget*)
   {
      ::R3BTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTarget", ::R3BTarget::Class_Version(), "invalid", 299,
                  typeid(::R3BTarget), DefineBehavior(ptr, ptr),
                  &::R3BTarget::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTarget) );
      instance.SetNew(&new_R3BTarget);
      instance.SetNewArray(&newArray_R3BTarget);
      instance.SetDelete(&delete_R3BTarget);
      instance.SetDeleteArray(&deleteArray_R3BTarget);
      instance.SetDestructor(&destruct_R3BTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTarget*)
   {
      return GenerateInitInstanceLocal((::R3BTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BTarget*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPipe(void *p = 0);
   static void *newArray_R3BPipe(Long_t size, void *p);
   static void delete_R3BPipe(void *p);
   static void deleteArray_R3BPipe(void *p);
   static void destruct_R3BPipe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPipe*)
   {
      ::R3BPipe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPipe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPipe", ::R3BPipe::Class_Version(), "invalid", 247,
                  typeid(::R3BPipe), DefineBehavior(ptr, ptr),
                  &::R3BPipe::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPipe) );
      instance.SetNew(&new_R3BPipe);
      instance.SetNewArray(&newArray_R3BPipe);
      instance.SetDelete(&delete_R3BPipe);
      instance.SetDeleteArray(&deleteArray_R3BPipe);
      instance.SetDestructor(&destruct_R3BPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPipe*)
   {
      return GenerateInitInstanceLocal((::R3BPipe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPipe*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BVacVesselCool(void *p = 0);
   static void *newArray_R3BVacVesselCool(Long_t size, void *p);
   static void delete_R3BVacVesselCool(void *p);
   static void deleteArray_R3BVacVesselCool(void *p);
   static void destruct_R3BVacVesselCool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BVacVesselCool*)
   {
      ::R3BVacVesselCool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BVacVesselCool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BVacVesselCool", ::R3BVacVesselCool::Class_Version(), "invalid", 272,
                  typeid(::R3BVacVesselCool), DefineBehavior(ptr, ptr),
                  &::R3BVacVesselCool::Dictionary, isa_proxy, 4,
                  sizeof(::R3BVacVesselCool) );
      instance.SetNew(&new_R3BVacVesselCool);
      instance.SetNewArray(&newArray_R3BVacVesselCool);
      instance.SetDelete(&delete_R3BVacVesselCool);
      instance.SetDeleteArray(&deleteArray_R3BVacVesselCool);
      instance.SetDestructor(&destruct_R3BVacVesselCool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BVacVesselCool*)
   {
      return GenerateInitInstanceLocal((::R3BVacVesselCool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BVacVesselCool*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCave(void *p = 0);
   static void *newArray_R3BCave(Long_t size, void *p);
   static void delete_R3BCave(void *p);
   static void deleteArray_R3BCave(void *p);
   static void destruct_R3BCave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCave*)
   {
      ::R3BCave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCave", ::R3BCave::Class_Version(), "invalid", 13,
                  typeid(::R3BCave), DefineBehavior(ptr, ptr),
                  &::R3BCave::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCave) );
      instance.SetNew(&new_R3BCave);
      instance.SetNewArray(&newArray_R3BCave);
      instance.SetDelete(&delete_R3BCave);
      instance.SetDeleteArray(&deleteArray_R3BCave);
      instance.SetDestructor(&destruct_R3BCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCave*)
   {
      return GenerateInitInstanceLocal((::R3BCave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BCave*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoCave(void *p = 0);
   static void *newArray_R3BGeoCave(Long_t size, void *p);
   static void delete_R3BGeoCave(void *p);
   static void deleteArray_R3BGeoCave(void *p);
   static void destruct_R3BGeoCave(void *p);
   static void streamer_R3BGeoCave(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoCave*)
   {
      ::R3BGeoCave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoCave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoCave", ::R3BGeoCave::Class_Version(), "invalid", 39,
                  typeid(::R3BGeoCave), DefineBehavior(ptr, ptr),
                  &::R3BGeoCave::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoCave) );
      instance.SetNew(&new_R3BGeoCave);
      instance.SetNewArray(&newArray_R3BGeoCave);
      instance.SetDelete(&delete_R3BGeoCave);
      instance.SetDeleteArray(&deleteArray_R3BGeoCave);
      instance.SetDestructor(&destruct_R3BGeoCave);
      instance.SetStreamerFunc(&streamer_R3BGeoCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoCave*)
   {
      return GenerateInitInstanceLocal((::R3BGeoCave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoCave*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoPipe(void *p = 0);
   static void *newArray_R3BGeoPipe(Long_t size, void *p);
   static void delete_R3BGeoPipe(void *p);
   static void deleteArray_R3BGeoPipe(void *p);
   static void destruct_R3BGeoPipe(void *p);
   static void streamer_R3BGeoPipe(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoPipe*)
   {
      ::R3BGeoPipe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoPipe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoPipe", ::R3BGeoPipe::Class_Version(), "invalid", 106,
                  typeid(::R3BGeoPipe), DefineBehavior(ptr, ptr),
                  &::R3BGeoPipe::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoPipe) );
      instance.SetNew(&new_R3BGeoPipe);
      instance.SetNewArray(&newArray_R3BGeoPipe);
      instance.SetDelete(&delete_R3BGeoPipe);
      instance.SetDeleteArray(&deleteArray_R3BGeoPipe);
      instance.SetDestructor(&destruct_R3BGeoPipe);
      instance.SetStreamerFunc(&streamer_R3BGeoPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoPipe*)
   {
      return GenerateInitInstanceLocal((::R3BGeoPipe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoPipe*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoVacVesselCool(void *p = 0);
   static void *newArray_R3BGeoVacVesselCool(Long_t size, void *p);
   static void delete_R3BGeoVacVesselCool(void *p);
   static void deleteArray_R3BGeoVacVesselCool(void *p);
   static void destruct_R3BGeoVacVesselCool(void *p);
   static void streamer_R3BGeoVacVesselCool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoVacVesselCool*)
   {
      ::R3BGeoVacVesselCool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoVacVesselCool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoVacVesselCool", ::R3BGeoVacVesselCool::Class_Version(), "invalid", 129,
                  typeid(::R3BGeoVacVesselCool), DefineBehavior(ptr, ptr),
                  &::R3BGeoVacVesselCool::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoVacVesselCool) );
      instance.SetNew(&new_R3BGeoVacVesselCool);
      instance.SetNewArray(&newArray_R3BGeoVacVesselCool);
      instance.SetDelete(&delete_R3BGeoVacVesselCool);
      instance.SetDeleteArray(&deleteArray_R3BGeoVacVesselCool);
      instance.SetDestructor(&destruct_R3BGeoVacVesselCool);
      instance.SetStreamerFunc(&streamer_R3BGeoVacVesselCool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoVacVesselCool*)
   {
      return GenerateInitInstanceLocal((::R3BGeoVacVesselCool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoVacVesselCool*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTarget(void *p = 0);
   static void *newArray_R3BGeoTarget(Long_t size, void *p);
   static void delete_R3BGeoTarget(void *p);
   static void deleteArray_R3BGeoTarget(void *p);
   static void destruct_R3BGeoTarget(void *p);
   static void streamer_R3BGeoTarget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTarget*)
   {
      ::R3BGeoTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTarget", ::R3BGeoTarget::Class_Version(), "invalid", 148,
                  typeid(::R3BGeoTarget), DefineBehavior(ptr, ptr),
                  &::R3BGeoTarget::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoTarget) );
      instance.SetNew(&new_R3BGeoTarget);
      instance.SetNewArray(&newArray_R3BGeoTarget);
      instance.SetDelete(&delete_R3BGeoTarget);
      instance.SetDeleteArray(&deleteArray_R3BGeoTarget);
      instance.SetDestructor(&destruct_R3BGeoTarget);
      instance.SetStreamerFunc(&streamer_R3BGeoTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTarget*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTarget*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoMagnet(void *p = 0);
   static void *newArray_R3BGeoMagnet(Long_t size, void *p);
   static void delete_R3BGeoMagnet(void *p);
   static void deleteArray_R3BGeoMagnet(void *p);
   static void destruct_R3BGeoMagnet(void *p);
   static void streamer_R3BGeoMagnet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoMagnet*)
   {
      ::R3BGeoMagnet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoMagnet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoMagnet", ::R3BGeoMagnet::Class_Version(), "invalid", 61,
                  typeid(::R3BGeoMagnet), DefineBehavior(ptr, ptr),
                  &::R3BGeoMagnet::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoMagnet) );
      instance.SetNew(&new_R3BGeoMagnet);
      instance.SetNewArray(&newArray_R3BGeoMagnet);
      instance.SetDelete(&delete_R3BGeoMagnet);
      instance.SetDeleteArray(&deleteArray_R3BGeoMagnet);
      instance.SetDestructor(&destruct_R3BGeoMagnet);
      instance.SetStreamerFunc(&streamer_R3BGeoMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoMagnet*)
   {
      return GenerateInitInstanceLocal((::R3BGeoMagnet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoMagnet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoPassivePar(void *p = 0);
   static void *newArray_R3BGeoPassivePar(Long_t size, void *p);
   static void delete_R3BGeoPassivePar(void *p);
   static void deleteArray_R3BGeoPassivePar(void *p);
   static void destruct_R3BGeoPassivePar(void *p);
   static void streamer_R3BGeoPassivePar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoPassivePar*)
   {
      ::R3BGeoPassivePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoPassivePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoPassivePar", ::R3BGeoPassivePar::Class_Version(), "invalid", 81,
                  typeid(::R3BGeoPassivePar), DefineBehavior(ptr, ptr),
                  &::R3BGeoPassivePar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoPassivePar) );
      instance.SetNew(&new_R3BGeoPassivePar);
      instance.SetNewArray(&newArray_R3BGeoPassivePar);
      instance.SetDelete(&delete_R3BGeoPassivePar);
      instance.SetDeleteArray(&deleteArray_R3BGeoPassivePar);
      instance.SetDestructor(&destruct_R3BGeoPassivePar);
      instance.SetStreamerFunc(&streamer_R3BGeoPassivePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoPassivePar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoPassivePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BGeoPassivePar*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPassiveContFact(void *p = 0);
   static void *newArray_R3BPassiveContFact(Long_t size, void *p);
   static void delete_R3BPassiveContFact(void *p);
   static void deleteArray_R3BPassiveContFact(void *p);
   static void destruct_R3BPassiveContFact(void *p);
   static void streamer_R3BPassiveContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPassiveContFact*)
   {
      ::R3BPassiveContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPassiveContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPassiveContFact", ::R3BPassiveContFact::Class_Version(), "invalid", 225,
                  typeid(::R3BPassiveContFact), DefineBehavior(ptr, ptr),
                  &::R3BPassiveContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BPassiveContFact) );
      instance.SetNew(&new_R3BPassiveContFact);
      instance.SetNewArray(&newArray_R3BPassiveContFact);
      instance.SetDelete(&delete_R3BPassiveContFact);
      instance.SetDeleteArray(&deleteArray_R3BPassiveContFact);
      instance.SetDestructor(&destruct_R3BPassiveContFact);
      instance.SetStreamerFunc(&streamer_R3BPassiveContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPassiveContFact*)
   {
      return GenerateInitInstanceLocal((::R3BPassiveContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BPassiveContFact*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BMagnet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMagnet::Class_Name()
{
   return "R3BMagnet";
}

//______________________________________________________________________________
const char *R3BMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMagnet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMagnet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMagnet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMagnet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGladMagnet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGladMagnet::Class_Name()
{
   return "R3BGladMagnet";
}

//______________________________________________________________________________
const char *R3BGladMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGladMagnet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGladMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGladMagnet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGladMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGladMagnet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGladMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGladMagnet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTarget::Class_Name()
{
   return "R3BTarget";
}

//______________________________________________________________________________
const char *R3BTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPipe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPipe::Class_Name()
{
   return "R3BPipe";
}

//______________________________________________________________________________
const char *R3BPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPipe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPipe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPipe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPipe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BVacVesselCool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BVacVesselCool::Class_Name()
{
   return "R3BVacVesselCool";
}

//______________________________________________________________________________
const char *R3BVacVesselCool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVacVesselCool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BVacVesselCool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVacVesselCool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BVacVesselCool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVacVesselCool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BVacVesselCool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVacVesselCool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCave::Class_Name()
{
   return "R3BCave";
}

//______________________________________________________________________________
const char *R3BCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoCave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoCave::Class_Name()
{
   return "R3BGeoCave";
}

//______________________________________________________________________________
const char *R3BGeoCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoCave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoPipe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoPipe::Class_Name()
{
   return "R3BGeoPipe";
}

//______________________________________________________________________________
const char *R3BGeoPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPipe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPipe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPipe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPipe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoVacVesselCool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoVacVesselCool::Class_Name()
{
   return "R3BGeoVacVesselCool";
}

//______________________________________________________________________________
const char *R3BGeoVacVesselCool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoVacVesselCool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoVacVesselCool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoVacVesselCool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoVacVesselCool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoVacVesselCool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoVacVesselCool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoVacVesselCool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTarget::Class_Name()
{
   return "R3BGeoTarget";
}

//______________________________________________________________________________
const char *R3BGeoTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTarget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoMagnet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoMagnet::Class_Name()
{
   return "R3BGeoMagnet";
}

//______________________________________________________________________________
const char *R3BGeoMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMagnet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMagnet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMagnet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoMagnet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoPassivePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoPassivePar::Class_Name()
{
   return "R3BGeoPassivePar";
}

//______________________________________________________________________________
const char *R3BGeoPassivePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPassivePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoPassivePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPassivePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoPassivePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPassivePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoPassivePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPassivePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPassiveContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPassiveContFact::Class_Name()
{
   return "R3BPassiveContFact";
}

//______________________________________________________________________________
const char *R3BPassiveContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPassiveContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPassiveContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPassiveContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPassiveContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPassiveContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPassiveContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPassiveContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMagnet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMagnet::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMagnet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMagnet(void *p) {
      return  p ? new(p) ::R3BMagnet : new ::R3BMagnet;
   }
   static void *newArray_R3BMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMagnet[nElements] : new ::R3BMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMagnet(void *p) {
      delete ((::R3BMagnet*)p);
   }
   static void deleteArray_R3BMagnet(void *p) {
      delete [] ((::R3BMagnet*)p);
   }
   static void destruct_R3BMagnet(void *p) {
      typedef ::R3BMagnet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMagnet

//______________________________________________________________________________
void R3BGladMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGladMagnet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGladMagnet::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGladMagnet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGladMagnet(void *p) {
      return  p ? new(p) ::R3BGladMagnet : new ::R3BGladMagnet;
   }
   static void *newArray_R3BGladMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGladMagnet[nElements] : new ::R3BGladMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGladMagnet(void *p) {
      delete ((::R3BGladMagnet*)p);
   }
   static void deleteArray_R3BGladMagnet(void *p) {
      delete [] ((::R3BGladMagnet*)p);
   }
   static void destruct_R3BGladMagnet(void *p) {
      typedef ::R3BGladMagnet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGladMagnet

//______________________________________________________________________________
void R3BTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTarget(void *p) {
      return  p ? new(p) ::R3BTarget : new ::R3BTarget;
   }
   static void *newArray_R3BTarget(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTarget[nElements] : new ::R3BTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTarget(void *p) {
      delete ((::R3BTarget*)p);
   }
   static void deleteArray_R3BTarget(void *p) {
      delete [] ((::R3BTarget*)p);
   }
   static void destruct_R3BTarget(void *p) {
      typedef ::R3BTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTarget

//______________________________________________________________________________
void R3BPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPipe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPipe::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPipe::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPipe(void *p) {
      return  p ? new(p) ::R3BPipe : new ::R3BPipe;
   }
   static void *newArray_R3BPipe(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPipe[nElements] : new ::R3BPipe[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPipe(void *p) {
      delete ((::R3BPipe*)p);
   }
   static void deleteArray_R3BPipe(void *p) {
      delete [] ((::R3BPipe*)p);
   }
   static void destruct_R3BPipe(void *p) {
      typedef ::R3BPipe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPipe

//______________________________________________________________________________
void R3BVacVesselCool::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BVacVesselCool.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BVacVesselCool::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BVacVesselCool::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BVacVesselCool(void *p) {
      return  p ? new(p) ::R3BVacVesselCool : new ::R3BVacVesselCool;
   }
   static void *newArray_R3BVacVesselCool(Long_t nElements, void *p) {
      return p ? new(p) ::R3BVacVesselCool[nElements] : new ::R3BVacVesselCool[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BVacVesselCool(void *p) {
      delete ((::R3BVacVesselCool*)p);
   }
   static void deleteArray_R3BVacVesselCool(void *p) {
      delete [] ((::R3BVacVesselCool*)p);
   }
   static void destruct_R3BVacVesselCool(void *p) {
      typedef ::R3BVacVesselCool current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BVacVesselCool

//______________________________________________________________________________
void R3BCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCave::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCave(void *p) {
      return  p ? new(p) ::R3BCave : new ::R3BCave;
   }
   static void *newArray_R3BCave(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCave[nElements] : new ::R3BCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCave(void *p) {
      delete ((::R3BCave*)p);
   }
   static void deleteArray_R3BCave(void *p) {
      delete [] ((::R3BCave*)p);
   }
   static void destruct_R3BCave(void *p) {
      typedef ::R3BCave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCave

//______________________________________________________________________________
void R3BGeoCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoCave.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoCave(void *p) {
      return  p ? new(p) ::R3BGeoCave : new ::R3BGeoCave;
   }
   static void *newArray_R3BGeoCave(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoCave[nElements] : new ::R3BGeoCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoCave(void *p) {
      delete ((::R3BGeoCave*)p);
   }
   static void deleteArray_R3BGeoCave(void *p) {
      delete [] ((::R3BGeoCave*)p);
   }
   static void destruct_R3BGeoCave(void *p) {
      typedef ::R3BGeoCave current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoCave(TBuffer &buf, void *obj) {
      ((::R3BGeoCave*)obj)->::R3BGeoCave::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoCave

//______________________________________________________________________________
void R3BGeoPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoPipe.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoPipe(void *p) {
      return  p ? new(p) ::R3BGeoPipe : new ::R3BGeoPipe;
   }
   static void *newArray_R3BGeoPipe(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoPipe[nElements] : new ::R3BGeoPipe[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoPipe(void *p) {
      delete ((::R3BGeoPipe*)p);
   }
   static void deleteArray_R3BGeoPipe(void *p) {
      delete [] ((::R3BGeoPipe*)p);
   }
   static void destruct_R3BGeoPipe(void *p) {
      typedef ::R3BGeoPipe current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoPipe(TBuffer &buf, void *obj) {
      ((::R3BGeoPipe*)obj)->::R3BGeoPipe::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoPipe

//______________________________________________________________________________
void R3BGeoVacVesselCool::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoVacVesselCool.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoVacVesselCool(void *p) {
      return  p ? new(p) ::R3BGeoVacVesselCool : new ::R3BGeoVacVesselCool;
   }
   static void *newArray_R3BGeoVacVesselCool(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoVacVesselCool[nElements] : new ::R3BGeoVacVesselCool[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoVacVesselCool(void *p) {
      delete ((::R3BGeoVacVesselCool*)p);
   }
   static void deleteArray_R3BGeoVacVesselCool(void *p) {
      delete [] ((::R3BGeoVacVesselCool*)p);
   }
   static void destruct_R3BGeoVacVesselCool(void *p) {
      typedef ::R3BGeoVacVesselCool current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoVacVesselCool(TBuffer &buf, void *obj) {
      ((::R3BGeoVacVesselCool*)obj)->::R3BGeoVacVesselCool::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoVacVesselCool

//______________________________________________________________________________
void R3BGeoTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTarget.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTarget(void *p) {
      return  p ? new(p) ::R3BGeoTarget : new ::R3BGeoTarget;
   }
   static void *newArray_R3BGeoTarget(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTarget[nElements] : new ::R3BGeoTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTarget(void *p) {
      delete ((::R3BGeoTarget*)p);
   }
   static void deleteArray_R3BGeoTarget(void *p) {
      delete [] ((::R3BGeoTarget*)p);
   }
   static void destruct_R3BGeoTarget(void *p) {
      typedef ::R3BGeoTarget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoTarget(TBuffer &buf, void *obj) {
      ((::R3BGeoTarget*)obj)->::R3BGeoTarget::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoTarget

//______________________________________________________________________________
void R3BGeoMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoMagnet.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoMagnet(void *p) {
      return  p ? new(p) ::R3BGeoMagnet : new ::R3BGeoMagnet;
   }
   static void *newArray_R3BGeoMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoMagnet[nElements] : new ::R3BGeoMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoMagnet(void *p) {
      delete ((::R3BGeoMagnet*)p);
   }
   static void deleteArray_R3BGeoMagnet(void *p) {
      delete [] ((::R3BGeoMagnet*)p);
   }
   static void destruct_R3BGeoMagnet(void *p) {
      typedef ::R3BGeoMagnet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoMagnet(TBuffer &buf, void *obj) {
      ((::R3BGeoMagnet*)obj)->::R3BGeoMagnet::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoMagnet

//______________________________________________________________________________
void R3BGeoPassivePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoPassivePar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoPassivePar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoPassivePar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoPassivePar(void *p) {
      return  p ? new(p) ::R3BGeoPassivePar : new ::R3BGeoPassivePar;
   }
   static void *newArray_R3BGeoPassivePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoPassivePar[nElements] : new ::R3BGeoPassivePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoPassivePar(void *p) {
      delete ((::R3BGeoPassivePar*)p);
   }
   static void deleteArray_R3BGeoPassivePar(void *p) {
      delete [] ((::R3BGeoPassivePar*)p);
   }
   static void destruct_R3BGeoPassivePar(void *p) {
      typedef ::R3BGeoPassivePar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoPassivePar(TBuffer &buf, void *obj) {
      ((::R3BGeoPassivePar*)obj)->::R3BGeoPassivePar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoPassivePar

//______________________________________________________________________________
void R3BPassiveContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPassiveContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPassiveContFact(void *p) {
      return  p ? new(p) ::R3BPassiveContFact : new ::R3BPassiveContFact;
   }
   static void *newArray_R3BPassiveContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPassiveContFact[nElements] : new ::R3BPassiveContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPassiveContFact(void *p) {
      delete ((::R3BPassiveContFact*)p);
   }
   static void deleteArray_R3BPassiveContFact(void *p) {
      delete [] ((::R3BPassiveContFact*)p);
   }
   static void destruct_R3BPassiveContFact(void *p) {
      typedef ::R3BPassiveContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BPassiveContFact(TBuffer &buf, void *obj) {
      ((::R3BPassiveContFact*)obj)->::R3BPassiveContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BPassiveContFact

namespace {
  void TriggerDictionaryInitialization_G__R3BPassiveDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/r3bbase",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/field",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/passive",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/passive/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(R3BMagnet)ATTRDUMP"))) R3BMagnet;
class __attribute__((annotate(R"ATTRDUMP(R3BGladMagnet)ATTRDUMP"))) R3BGladMagnet;
class R3BTarget;
class __attribute__((annotate(R"ATTRDUMP(R3BPIPE)ATTRDUMP"))) R3BPipe;
class R3BVacVesselCool;
class __attribute__((annotate(R"ATTRDUMP(R3BCaveSD)ATTRDUMP"))) R3BCave;
class __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) R3BGeoCave;
class __attribute__((annotate(R"ATTRDUMP(Class for geometry of beam pipe)ATTRDUMP"))) R3BGeoPipe;
class __attribute__((annotate(R"ATTRDUMP(Class for geometry of Cooling)ATTRDUMP"))) R3BGeoVacVesselCool;
class __attribute__((annotate(R"ATTRDUMP(Class for geometry of Target)ATTRDUMP"))) R3BGeoTarget;
class __attribute__((annotate(R"ATTRDUMP(Class for the geometry of Magnet)ATTRDUMP"))) R3BGeoMagnet;
class R3BGeoPassivePar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) R3BPassiveContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BCAVE_H
#define R3BCAVE_H

#include "FairDetector.h"
#include "FairModule.h"


class R3BCave : public FairModule {
  public:
    R3BCave(const char * name, const char *Title="Exp Cave");
    R3BCave();
    virtual ~R3BCave();
    virtual void ConstructGeometry();
    

private:
     Double_t world[3]; //!
     ClassDef(R3BCave,1) //R3BCaveSD
};

#endif //R3BCave_H

#ifndef R3BGEOCAVE_H
#define R3BGEOCAVE_H

#include "FairGeoSet.h"
#include "TString.h"
#include "FairGeoMedia.h"
#include <fstream>

using namespace std;

class  R3BGeoCave : public FairGeoSet {
protected:
  TString name;
public:
  R3BGeoCave();
  ~R3BGeoCave() {}
  const char* getModuleName(Int_t) {return name.Data();}  
  Bool_t read(fstream&,FairGeoMedia*);
  void addRefNodes();
  void write(fstream&);
  void print();
  ClassDef(R3BGeoCave,0) // Class for the geometry of CAVE
};

#endif  /* !PNDGEOCAVE_H */
#ifndef R3BGEOMAGNET_H
#define R3BGEOMAGNET_H

#include "FairGeoSet.h"
#include "TString.h"

class  R3BGeoMagnet : public FairGeoSet {
protected:
  char modName[2];  // name of module
  char eleName[2];  // substring for elements in module
public:
  R3BGeoMagnet();
  ~R3BGeoMagnet() {}
  const char* getModuleName(Int_t) {return modName;}
  const char* getEleName(Int_t) {return eleName;}
  ClassDef(R3BGeoMagnet,0) // Class for the geometry of Magnet
};

#endif  /* !R3BGEOMAGNET_H */
#ifndef R3BGEOPASSIVEPAR_H
#define R3BGEOPASSIVEPAR_H

#include "FairParGenericSet.h"
#include "TH1F.h"

class R3BGeoPassivePar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  R3BGeoPassivePar(const char* name="R3BGeoPassivePar",
             const char* title="Passive Geometry Parameters",
             const char* context="TestDefaultContext");
  ~R3BGeoPassivePar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(R3BGeoPassivePar,1)
};

#endif /* !R3BGEOPASSIVEPAR_H */
#ifndef R3BGEOPIPE_H
#define R3BGEOPIPE_H

#include "FairGeoSet.h"

class  R3BGeoPipe : public FairGeoSet {
protected:
  char modName[2];  // name of module
  char eleName[2];  // substring for elements in module
public:
  R3BGeoPipe();
  virtual ~R3BGeoPipe();
  const char* getModuleName(Int_t) {return modName;}
  const char* getEleName(Int_t) {return eleName;}
  Bool_t create(FairGeoBuilder*);
  ClassDef(R3BGeoPipe,0) // Class for geometry of beam pipe
};

#endif  /* !R3BGEOPIPE_H */
//*-- AUTHOR : Marc Labiche
//*-- Created : 28/06/2012

#ifndef R3BGEOVACVESSELCOOL_H
#define R3BGEOVACVESSELCOOL_H

#include "FairGeoSet.h"

class  R3BGeoVacVesselCool : public FairGeoSet {
protected:
  char modName[2];  // name of module
  char eleName[2];  // substring for elements in module
public:
  R3BGeoVacVesselCool();
  ~R3BGeoVacVesselCool() {}
  const char* getModuleName(Int_t) {return modName;}
  const char* getEleName(Int_t) {return eleName;}
  ClassDef(R3BGeoVacVesselCool,0) // Class for geometry of Cooling
};

#endif  /* !R3BGEOVACVESSELCOOL_H */
#ifndef R3BGEOTARGET_H
#define R3BGEOTARGET_H

#include "FairGeoSet.h"

class  R3BGeoTarget : public FairGeoSet {
protected:
  char modName[2];  // name of module
  char eleName[2];  // substring for elements in module
public:
  R3BGeoTarget();
  ~R3BGeoTarget() {}
  const char* getModuleName(Int_t) {return modName;}
  const char* getEleName(Int_t) {return eleName;}
  ClassDef(R3BGeoTarget,0) // Class for geometry of Target
};

#endif  /* !R3BGEOTARGET_H */
#ifndef R3BMAGNET_H
#define R3BMAGNET_H

#include "TNamed.h"
#include "TArrayI.h"
#include "TClonesArray.h"
#include "FairDetector.h"
#include "FairModule.h"
#include "R3BModule.h"
#include "TGeoMatrix.h"

class R3BMagnet : public R3BModule {
  
public:
  R3BMagnet(const char * name, const char *Title="R3B Magnet");
  R3BMagnet();
  virtual ~R3BMagnet();
  
  void ConstructGeometry();
  
  Bool_t CheckIfSensitive(std::string name);
  
  ClassDef(R3BMagnet,2) //R3BMagnet
};

#endif //R3BMAGNET_H

#ifndef R3BGladMAGNET_H
#define R3BGladMAGNET_H

#include "TNamed.h"
#include "TArrayI.h"
#include "TClonesArray.h"
#include "FairDetector.h"
#include "FairModule.h"
#include "R3BModule.h"
#include "TGeoMatrix.h"

class R3BGladMagnet : public R3BModule {
  
public:
  R3BGladMagnet(const char * name, const char *Title="R3BGlad Magnet");
  R3BGladMagnet();
  virtual ~R3BGladMagnet();

  void ConstructGeometry();
  
  Bool_t CheckIfSensitive(std::string name);
  
  ClassDef(R3BGladMagnet,1) //R3BGladMagnet
};

#endif //R3BGladMAGNET_H

#ifndef R3BPASSIVECONTFACT_H
#define R3BPASSIVECONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BPassiveContFact : public FairContFact {
private:
  void setAllContainers();
public:
  R3BPassiveContFact();
  ~R3BPassiveContFact() {}
  FairParSet* createContainer(FairContainer*);
  ClassDef( R3BPassiveContFact,0) // Factory for all Passive parameter containers
};

#endif  /* !R3BPASSIVECONTFACT_H */
#ifndef R3BPIPE_H
#define R3BPIPE_H

#include "TNamed.h"
#include "TArrayI.h"
#include "TClonesArray.h"
#include "FairDetector.h"
#include "R3BModule.h"


class R3BPipe : public R3BModule {
  public:
    R3BPipe(const char * name, const char *Title="R3B Pipe");
    R3BPipe();

    virtual ~R3BPipe();
    virtual void ConstructGeometry();
   
  ClassDef(R3BPipe,1) //R3BPIPE

};

#endif //R3BPIPE_H

//*-- AUTHOR : Marc Labiche
//*-- Created : 28/06/2012
#ifndef R3BVacVesselCool_H
#define R3BVacVesselCool_H

#include "FairDetector.h"
#include "R3BModule.h"
#include <TString.h>


class R3BVacVesselCool : public R3BModule {
public:
  R3BVacVesselCool(const char * name, const char *Title="R3B VacVesselCool");
  R3BVacVesselCool();
  virtual ~R3BVacVesselCool();

  virtual void ConstructGeometry();
  
  virtual Bool_t CheckIfSensitive(std::string name);
  
protected:
  TString *fVacVesselCoolName; //!
  void ConstructGeometry1();
  
  ClassDef(R3BVacVesselCool,1)
};

#endif //R3BVacVesselCool_H

#ifndef R3BTarget_H
#define R3BTarget_H

#include "R3BModule.h"
#include <TString.h>


class R3BTarget : public R3BModule {
public:
  R3BTarget(const char * name, const char *Title="R3B Target");
  R3BTarget();
  virtual ~R3BTarget();

  virtual void ConstructGeometry();
  
  virtual Bool_t CheckIfSensitive(std::string name);
  
protected:
  TString *fTargetName; //!
  
public:
  ClassDef(R3BTarget,1)
};

#endif //R3BTarget_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BCave", payloadCode, "@",
"R3BGeoCave", payloadCode, "@",
"R3BGeoMagnet", payloadCode, "@",
"R3BGeoPassivePar", payloadCode, "@",
"R3BGeoPipe", payloadCode, "@",
"R3BGeoTarget", payloadCode, "@",
"R3BGeoVacVesselCool", payloadCode, "@",
"R3BGladMagnet", payloadCode, "@",
"R3BMagnet", payloadCode, "@",
"R3BPassiveContFact", payloadCode, "@",
"R3BPipe", payloadCode, "@",
"R3BTarget", payloadCode, "@",
"R3BVacVesselCool", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BPassiveDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BPassiveDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BPassiveDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BPassiveDict() {
  TriggerDictionaryInitialization_G__R3BPassiveDict_Impl();
}
