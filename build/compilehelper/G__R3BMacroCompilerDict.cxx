// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIudIpalomadIR3BRootdIR3BRoot_cabanelasdIR3BRootdIbuilddIcompilehelperdIG__R3BMacroCompilerDict

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
#include "R3BMacroCompiler.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *R3BMacroCompiler_Dictionary();
   static void R3BMacroCompiler_TClassManip(TClass*);
   static void *new_R3BMacroCompiler(void *p = 0);
   static void *newArray_R3BMacroCompiler(Long_t size, void *p);
   static void delete_R3BMacroCompiler(void *p);
   static void deleteArray_R3BMacroCompiler(void *p);
   static void destruct_R3BMacroCompiler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMacroCompiler*)
   {
      ::R3BMacroCompiler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BMacroCompiler));
      static ::ROOT::TGenericClassInfo 
         instance("R3BMacroCompiler", "invalid", 9,
                  typeid(::R3BMacroCompiler), DefineBehavior(ptr, ptr),
                  &R3BMacroCompiler_Dictionary, isa_proxy, 4,
                  sizeof(::R3BMacroCompiler) );
      instance.SetNew(&new_R3BMacroCompiler);
      instance.SetNewArray(&newArray_R3BMacroCompiler);
      instance.SetDelete(&delete_R3BMacroCompiler);
      instance.SetDeleteArray(&deleteArray_R3BMacroCompiler);
      instance.SetDestructor(&destruct_R3BMacroCompiler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMacroCompiler*)
   {
      return GenerateInitInstanceLocal((::R3BMacroCompiler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::R3BMacroCompiler*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BMacroCompiler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BMacroCompiler*)0x0)->GetClass();
      R3BMacroCompiler_TClassManip(theClass);
   return theClass;
   }

   static void R3BMacroCompiler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMacroCompiler(void *p) {
      return  p ? new(p) ::R3BMacroCompiler : new ::R3BMacroCompiler;
   }
   static void *newArray_R3BMacroCompiler(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMacroCompiler[nElements] : new ::R3BMacroCompiler[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMacroCompiler(void *p) {
      delete ((::R3BMacroCompiler*)p);
   }
   static void deleteArray_R3BMacroCompiler(void *p) {
      delete [] ((::R3BMacroCompiler*)p);
   }
   static void destruct_R3BMacroCompiler(void *p) {
      typedef ::R3BMacroCompiler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMacroCompiler

namespace {
  void TriggerDictionaryInitialization_G__R3BMacroCompilerDict_Impl() {
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
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/compilehelper",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairroot/v-15.11a_fairsoft-nov15p1_root6/include",
"/cvmfs/fairroot.gsi.de/gcc_4.8.4/fairsoft/nov15p1_root6/include/root",
"/u/paloma/R3BRoot/R3BRoot_cabanelas/R3BRoot/build/compilehelper/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BMacroCompiler;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef _R3BMACROCOMPILER_H_
#define _R3BMACROCOMPILER_H_

class R3BMacroCompiler
{
public:
  static void SetIncludeDirectories();
};

#endif


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BMacroCompiler", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BMacroCompilerDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BMacroCompilerDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BMacroCompilerDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BMacroCompilerDict() {
  TriggerDictionaryInitialization_G__R3BMacroCompilerDict_Impl();
}
