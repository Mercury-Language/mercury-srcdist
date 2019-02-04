/*
** Automatically generated from `dl.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__mdb__dl__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.dl.c"
#include "mdb.dl.mh"

#line 27 "mdb.dl.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.dl.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 35 "mdb.dl.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 39 "mdb.dl.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdb.dl.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdb.dl.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "mdb.dl.c"
#line 52 "mdb.dl.c"
#ifndef MDB__DL_DECL_GUARD
#define MDB__DL_DECL_GUARD

#line 56 "mdb.dl.c"
#line 107 "dl.m"

    #include <stdio.h>
    #include "mercury_conf.h"
    #include "mercury_string.h"   /* for MR_make_aligned_string_copy() */
    #include "mercury_ho_call.h"
#ifdef MR_HAVE_DLFCN_H
    #include <dlfcn.h>
#endif

#line 67 "mdb.dl.c"
#line 180 "dl.m"

#include "mercury_ho_call.h"

#line 72 "mdb.dl.c"
#line 73 "mdb.dl.c"

#endif
#line 76 "mdb.dl.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__dl__type_ctor_info_scope_0,
	mercury_data_mdb__dl__type_ctor_info_link_mode_0,
	mercury_data_mdb__dl__type_ctor_info_handle_0,
	mercury_data_mdb__dl__type_ctor_info_dl_result_1,
	mercury_data_mdb__dl__type_ctor_info_dl_result_0;
MR_decl_label1(mdb__dl__close_4_0, 2)
MR_decl_label1(mdb__dl__high_level_code_0_0, 1)
MR_decl_label1(mdb__dl__is_null_1_0, 1)
MR_decl_label8(mdb__dl__mercury_sym_5_0, 2,3,4,5,7,10,18,19)
MR_decl_label8(mdb__dl__mercury_sym_5_0, 20,9,22,27,33,34,42,32)
MR_decl_label8(mdb__dl__mercury_sym_5_0, 47,54,55,56,57,60,59,62)
MR_decl_label8(mdb__dl__mercury_sym_5_0, 64,50,51,66,49,72,73,74)
MR_decl_label5(mdb__dl__mercury_sym_5_0, 69,77,78,79,80)
MR_decl_label1(mdb__dl__open_6_0, 3)
MR_decl_label1(mdb__dl__sym_5_0, 3)
MR_decl_label3(__Unify___mdb__dl__dl_result_0_0, 10,5,1)
MR_decl_label3(__Unify___mdb__dl__dl_result_1_0, 14,5,1)
MR_decl_label1(__Unify___mdb__dl__handle_0_0, 6)
MR_decl_label4(__Compare___mdb__dl__dl_result_0_0, 18,7,5,9)
MR_decl_label5(__Compare___mdb__dl__dl_result_1_0, 3,2,7,5,10)
MR_decl_label2(__Compare___mdb__dl__handle_0_0, 3,2)
MR_decl_static(mdb__dl__is_null_1_0)
MR_decl_static(mdb__dl__dlopen_6_0)
MR_decl_static(mdb__dl__dlerror_3_0)
MR_def_extern_entry(mdb__dl__open_6_0)
MR_decl_static(mdb__dl__dlsym_5_0)
MR_def_extern_entry(mdb__dl__sym_5_0)
MR_decl_static(fn__mdb__dl__make_closure_1_0)
MR_decl_static(mdb__dl__high_level_code_0_0)
MR_def_extern_entry(mdb__dl__mercury_sym_5_0)
MR_decl_static(mdb__dl__dlclose_3_0)
MR_def_extern_entry(mdb__dl__close_4_0)
MR_def_extern_entry(__Unify___mdb__dl__dl_result_0_0)
MR_def_extern_entry(__Compare___mdb__dl__dl_result_0_0)
MR_def_extern_entry(__Unify___mdb__dl__dl_result_1_0)
MR_def_extern_entry(__Compare___mdb__dl__dl_result_1_0)
MR_def_extern_entry(__Unify___mdb__dl__handle_0_0)
MR_def_extern_entry(__Compare___mdb__dl__handle_0_0)
MR_def_extern_entry(__Unify___mdb__dl__link_mode_0_0)
MR_def_extern_entry(__Compare___mdb__dl__link_mode_0_0)
MR_def_extern_entry(__Unify___mdb__dl__scope_0_0)
MR_def_extern_entry(__Compare___mdb__dl__scope_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const(" arguments(s)", 13),
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_mdb__dl__enum_functor_desc_scope_0_0 = {
	"local",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__dl__enum_functor_desc_scope_0_1 = {
	"global",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__dl__enum_value_ordered_scope_0[] = {
	&mercury_data_mdb__dl__enum_functor_desc_scope_0_0,
	&mercury_data_mdb__dl__enum_functor_desc_scope_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__dl__enum_name_ordered_scope_0[] = {
	&mercury_data_mdb__dl__enum_functor_desc_scope_0_1,
	&mercury_data_mdb__dl__enum_functor_desc_scope_0_0
};

const MR_Integer mercury_data_mdb__dl__functor_number_map_scope_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__dl__type_ctor_info_scope_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__dl__scope_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__dl__scope_0_0)),
	"mdb.dl",
	"scope",
	{ (void *)mercury_data_mdb__dl__enum_name_ordered_scope_0 },
	{ (void *)mercury_data_mdb__dl__enum_value_ordered_scope_0 },
	2,
	4,
	mercury_data_mdb__dl__functor_number_map_scope_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__dl__enum_functor_desc_link_mode_0_0 = {
	"lazy",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__dl__enum_functor_desc_link_mode_0_1 = {
	"now",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__dl__enum_value_ordered_link_mode_0[] = {
	&mercury_data_mdb__dl__enum_functor_desc_link_mode_0_0,
	&mercury_data_mdb__dl__enum_functor_desc_link_mode_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__dl__enum_name_ordered_link_mode_0[] = {
	&mercury_data_mdb__dl__enum_functor_desc_link_mode_0_0,
	&mercury_data_mdb__dl__enum_functor_desc_link_mode_0_1
};

const MR_Integer mercury_data_mdb__dl__functor_number_map_link_mode_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__dl__type_ctor_info_link_mode_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__dl__link_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__dl__link_mode_0_0)),
	"mdb.dl",
	"link_mode",
	{ (void *)mercury_data_mdb__dl__enum_name_ordered_link_mode_0 },
	{ (void *)mercury_data_mdb__dl__enum_value_ordered_link_mode_0 },
	2,
	4,
	mercury_data_mdb__dl__functor_number_map_link_mode_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_mdb__dl__notag_functor_desc_handle_0 = {
	"handle",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_mdb__dl__functor_number_map_handle_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__dl__type_ctor_info_handle_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__dl__handle_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__dl__handle_0_0)),
	"mdb.dl",
	"handle",
	{ (void *)&mercury_data_mdb__dl__notag_functor_desc_handle_0 },
	{ (void *)&mercury_data_mdb__dl__notag_functor_desc_handle_0 },
	1,
	4,
	mercury_data_mdb__dl__functor_number_map_handle_0
};

const MR_PseudoTypeInfo mercury_data_mdb__dl__field_types_dl_result_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__dl__du_functor_desc_dl_result_1_0 = {
	"dl_ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__dl__field_types_dl_result_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__dl__field_types_dl_result_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__dl__du_functor_desc_dl_result_1_1 = {
	"dl_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__dl__field_types_dl_result_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_stag_ordered_dl_result_1_0[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_stag_ordered_dl_result_1_1[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_1_1

};

const MR_DuPtagLayout mercury_data_mdb__dl__du_ptag_ordered_dl_result_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__dl__du_stag_ordered_dl_result_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__dl__du_stag_ordered_dl_result_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_name_ordered_dl_result_1[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_1_1,
	&mercury_data_mdb__dl__du_functor_desc_dl_result_1_0
};

const MR_Integer mercury_data_mdb__dl__functor_number_map_dl_result_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__dl__type_ctor_info_dl_result_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__dl__dl_result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__dl__dl_result_1_0)),
	"mdb.dl",
	"dl_result",
	{ (void *)mercury_data_mdb__dl__du_name_ordered_dl_result_1 },
	{ (void *)mercury_data_mdb__dl__du_ptag_ordered_dl_result_1 },
	2,
	4,
	mercury_data_mdb__dl__functor_number_map_dl_result_1
};

static const MR_DuFunctorDesc mercury_data_mdb__dl__du_functor_desc_dl_result_0_0 = {
	"dl_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__dl__field_types_dl_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__dl__du_functor_desc_dl_result_0_1 = {
	"dl_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__dl__field_types_dl_result_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_stag_ordered_dl_result_0_0[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_stag_ordered_dl_result_0_1[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_0_1

};

const MR_DuPtagLayout mercury_data_mdb__dl__du_ptag_ordered_dl_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__dl__du_stag_ordered_dl_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__dl__du_stag_ordered_dl_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__dl__du_name_ordered_dl_result_0[] = {
	&mercury_data_mdb__dl__du_functor_desc_dl_result_0_1,
	&mercury_data_mdb__dl__du_functor_desc_dl_result_0_0
};

const MR_Integer mercury_data_mdb__dl__functor_number_map_dl_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__dl__type_ctor_info_dl_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__dl__dl_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__dl__dl_result_0_0)),
	"mdb.dl",
	"dl_result",
	{ (void *)mercury_data_mdb__dl__du_name_ordered_dl_result_0 },
	{ (void *)mercury_data_mdb__dl__du_ptag_ordered_dl_result_0 },
	2,
	4,
	mercury_data_mdb__dl__functor_number_map_dl_result_0
};


MR_BEGIN_MODULE(mdb__dl_module0)
	MR_init_entry1(mdb__dl__is_null_1_0);
	MR_init_label1(mdb__dl__is_null_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__is_null_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__dl__is_null_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Pointer = MR_r1;
{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)
;}
#line 425 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__is_null_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__dl__is_null_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module1)
	MR_init_entry1(mdb__dl__dlopen_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__dlopen_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_String	FileName;
	MR_Word	Mode;
	MR_Word	Scope;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__mdb__dl__dlopen_6_0
	FileName = (MR_String) MR_r1;
	Mode = MR_r2;
	Scope = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("dlopen");
{
#line 149 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLOPEN)  && defined(RTLD_NOW) && defined(RTLD_LAZY)
    int mode = (Mode ? RTLD_NOW : RTLD_LAZY);
    /* not all systems have RTLD_GLOBAL */
    #ifdef RTLD_GLOBAL
      if (Scope) mode |= RTLD_GLOBAL;
    #endif
    Result = (MR_Word) dlopen(FileName, mode);
#else
    Result = (MR_Word) NULL;
#endif
};}
#line 481 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlopen");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module2)
	MR_init_entry1(mdb__dl__dlerror_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__dlerror_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	ErrorMsg;
#define	MR_PROC_LABEL	mercury__mdb__dl__dlerror_3_0
	MR_OBTAIN_GLOBAL_LOCK("dlerror");
{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
};}
#line 526 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlerror");
	MR_r1 = (MR_Word) ErrorMsg;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module3)
	MR_init_entry1(mdb__dl__open_6_0);
	MR_init_label1(mdb__dl__open_6_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__dl__open_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_String	FileName;
	MR_Word	Mode;
	MR_Word	Scope;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__mdb__dl__open_6_0
	FileName = (MR_String) MR_r1;
	Mode = MR_r2;
	Scope = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("dlopen");
{
#line 149 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLOPEN)  && defined(RTLD_NOW) && defined(RTLD_LAZY)
    int mode = (Mode ? RTLD_NOW : RTLD_LAZY);
    /* not all systems have RTLD_GLOBAL */
    #ifdef RTLD_GLOBAL
      if (Scope) mode |= RTLD_GLOBAL;
    #endif
    Result = (MR_Word) dlopen(FileName, mode);
#else
    Result = (MR_Word) NULL;
#endif
};}
#line 577 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlopen");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r3 = Result;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__dl__open_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Pointer = MR_r3;
{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)
;}
#line 597 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__open_6_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	ErrorMsg;
#define	MR_PROC_LABEL	mercury__mdb__dl__open_6_0
	MR_OBTAIN_GLOBAL_LOCK("dlerror");
{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
};}
#line 624 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlerror");
	MR_tempr1 = (MR_Word) ErrorMsg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__dl__open_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module4)
	MR_init_entry1(mdb__dl__dlsym_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__dlsym_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Handle;
	MR_String	Name;
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__dl__dlsym_5_0
	Handle = MR_r1;
	Name = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("dlsym");
{
#line 318 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
};}
#line 672 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlsym");
	MR_r1 = Pointer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module5)
	MR_init_entry1(mdb__dl__sym_5_0);
	MR_init_label1(mdb__dl__sym_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__dl__sym_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
	MR_Word	Handle;
	MR_String	Name;
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__dl__sym_5_0
	Handle = MR_r1;
	Name = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("dlsym");
{
#line 318 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
};}
#line 714 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlsym");
	MR_r3 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__dl__sym_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Pointer = MR_r3;
{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)
;}
#line 731 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__sym_5_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	ErrorMsg;
#define	MR_PROC_LABEL	mercury__mdb__dl__sym_5_0
	MR_OBTAIN_GLOBAL_LOCK("dlerror");
{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
};}
#line 758 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlerror");
	MR_tempr1 = (MR_Word) ErrorMsg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
MR_def_label(mdb__dl__sym_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_decr_sp(1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module6)
	MR_init_entry1(fn__mdb__dl__make_closure_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__dl__make_closure_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ProcAddr;
	MR_Word	Closure;
#define	MR_PROC_LABEL	mercury__fn__mdb__dl__make_closure_1_0
	ProcAddr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("make_closure");
{
#line 192 "dl.m"
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
};}
#line 804 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("make_closure");
	MR_r1 = Closure;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module7)
	MR_init_entry1(mdb__dl__high_level_code_0_0);
	MR_init_label1(mdb__dl__high_level_code_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__high_level_code_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__dl__high_level_code_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 842 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__high_level_code_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__dl__high_level_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);
MR_decl_entry(fn__type_desc__type_ctor_1_0);
MR_decl_entry(type_desc__type_ctor_name_and_arity_4_0);
MR_decl_entry(fn__type_desc__type_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__type_desc__type_args_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(fn__type_desc__type_ctor_name_1_0);
MR_decl_entry(fn__type_desc__type_ctor_module_name_1_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__type_desc__type_ctor_arity_1_0);
MR_decl_entry(fn__mdb__name_mangle__proc_name_mangle_1_0);

MR_BEGIN_MODULE(mdb__dl_module8)
	MR_init_entry1(mdb__dl__mercury_sym_5_0);
	MR_init_label8(mdb__dl__mercury_sym_5_0,2,3,4,5,7,10,18,19)
	MR_init_label8(mdb__dl__mercury_sym_5_0,20,9,22,27,33,34,42,32)
	MR_init_label8(mdb__dl__mercury_sym_5_0,47,54,55,56,57,60,59,62)
	MR_init_label8(mdb__dl__mercury_sym_5_0,64,50,51,66,49,72,73,74)
	MR_init_label5(mdb__dl__mercury_sym_5_0,69,77,78,79,80)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__dl__mercury_sym_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__dl__mercury_sym_5_0_i2);
MR_def_label(mdb__dl__mercury_sym_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		mdb__dl__mercury_sym_5_0_i3);
MR_def_label(mdb__dl__mercury_sym_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(type_desc__type_ctor_name_and_arity_4_0,
		mdb__dl__mercury_sym_5_0_i4);
MR_def_label(mdb__dl__mercury_sym_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i5);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i7);
MR_def_label(mdb__dl__mercury_sym_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r3;
MR_def_label(mdb__dl__mercury_sym_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i10);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("pred", 4)) == 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i9);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("func", 4)) == 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i9);
	}
MR_def_label(mdb__dl__mercury_sym_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		mdb__dl__mercury_sym_5_0_i18);
MR_def_label(mdb__dl__mercury_sym_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\') is not a higher-order type", 29);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__dl__mercury_sym_5_0_i19);
MR_def_label(mdb__dl__mercury_sym_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_sym: result type (\140", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__dl__mercury_sym_5_0_i20);
MR_def_label(mdb__dl__mercury_sym_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i47);
MR_def_label(mdb__dl__mercury_sym_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i22);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("pred", 4)) == 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury_sym: predicate/function mismatch: argument is a predicate, result type is a function", 92);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i47);
MR_def_label(mdb__dl__mercury_sym_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i27);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("func", 4)) == 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury_sym: predicate/function mismatch: argument is a function, result type is a predicate", 92);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i47);
MR_def_label(mdb__dl__mercury_sym_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) == MR_sv(7))) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i32);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__dl__mercury_sym_5_0_i33);
MR_def_label(mdb__dl__mercury_sym_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__dl__mercury_sym_5_0_i34);
MR_def_label(mdb__dl__mercury_sym_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("result type has ", 16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" argument(s), ", 14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("argument has ", 13);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("mercury_sym: arity mismatch: ", 29);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__dl__mercury_sym_5_0_i42);
MR_def_label(mdb__dl__mercury_sym_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i47);
MR_def_label(mdb__dl__mercury_sym_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(mdb__dl__mercury_sym_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdb__dl__mercury_sym_5_0_i50);
	{
#define	MR_PROC_LABEL	mercury__mdb__dl__mercury_sym_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1063 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i51);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__dl__mercury_sym_5_0_i54);
MR_def_label(mdb__dl__mercury_sym_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_args_1_0,
		mdb__dl__mercury_sym_5_0_i55);
MR_def_label(mdb__dl__mercury_sym_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		mdb__dl__mercury_sym_5_0_i56);
MR_def_label(mdb__dl__mercury_sym_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		mdb__dl__mercury_sym_5_0_i57);
MR_def_label(mdb__dl__mercury_sym_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_ctor_name_1_0,
		mdb__dl__mercury_sym_5_0_i60);
MR_def_label(mdb__dl__mercury_sym_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i59);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__type_desc__type_ctor_module_name_1_0,
		mdb__dl__mercury_sym_5_0_i64);
MR_def_label(mdb__dl__mercury_sym_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__type_desc__type_ctor_name_1_0,
		mdb__dl__mercury_sym_5_0_i62);
MR_def_label(mdb__dl__mercury_sym_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("char", 4)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__type_desc__type_ctor_module_name_1_0,
		mdb__dl__mercury_sym_5_0_i64);
MR_def_label(mdb__dl__mercury_sym_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i66);
MR_def_label(mdb__dl__mercury_sym_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(mdb__dl__mercury_sym_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i49);
MR_def_label(mdb__dl__mercury_sym_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sorry, not implemented: mercury_sym for procedure with argument type \140float\' or \140char\'", 86);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i77);
MR_def_label(mdb__dl__mercury_sym_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__dl__mercury_sym_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1155 "mdb.dl.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i69);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__dl__mercury_sym_5_0_i72);
MR_def_label(mdb__dl__mercury_sym_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		mdb__dl__mercury_sym_5_0_i73);
MR_def_label(mdb__dl__mercury_sym_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__type_desc__type_ctor_arity_1_0,
		mdb__dl__mercury_sym_5_0_i74);
MR_def_label(mdb__dl__mercury_sym_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,18)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i69);
	}
	MR_r1 = (MR_Word) MR_string_const("sorry, not implemented: mercury_sym for procedure with more than 18 arguments", 77);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__dl__mercury_sym_5_0_i77);
MR_def_label(mdb__dl__mercury_sym_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(mdb__dl__mercury_sym_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdb__name_mangle__proc_name_mangle_1_0,
		mdb__dl__mercury_sym_5_0_i78);
MR_def_label(mdb__dl__mercury_sym_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__dl__mercury_sym_5_0_i79);
MR_def_label(mdb__dl__mercury_sym_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__dl__mercury_sym_5_0_i80);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word	ProcAddr;
	MR_Word	Closure;
#define	MR_PROC_LABEL	mercury__mdb__dl__mercury_sym_5_0
	ProcAddr = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("make_closure");
{
#line 192 "dl.m"
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
};}
#line 1216 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("make_closure");
	MR_r3 = Closure;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
MR_def_label(mdb__dl__mercury_sym_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module9)
	MR_init_entry1(mdb__dl__dlclose_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__dl__dlclose_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Handle;
#define	MR_PROC_LABEL	mercury__mdb__dl__dlclose_3_0
	Handle = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("dlclose");
{
#line 364 "dl.m"

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif
;}
#line 1258 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlclose");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module10)
	MR_init_entry1(mdb__dl__close_4_0);
	MR_init_label1(mdb__dl__close_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__dl__close_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Handle;
#define	MR_PROC_LABEL	mercury__mdb__dl__close_4_0
	Handle = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("dlclose");
{
#line 364 "dl.m"

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif
;}
#line 1299 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlclose");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_String	ErrorMsg;
#define	MR_PROC_LABEL	mercury__mdb__dl__close_4_0
	MR_OBTAIN_GLOBAL_LOCK("dlerror");
{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
};}
#line 1325 "mdb.dl.c"
	MR_RELEASE_GLOBAL_LOCK("dlerror");
	MR_r3 = (MR_Word) ErrorMsg;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdb__dl__close_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__dl__close_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module11)
	MR_init_entry1(__Unify___mdb__dl__dl_result_0_0);
	MR_init_label3(__Unify___mdb__dl__dl_result_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__dl__dl_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__dl__dl_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__dl__dl_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__dl__dl_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__dl_module12)
	MR_init_entry1(__Compare___mdb__dl__dl_result_0_0);
	MR_init_label4(__Compare___mdb__dl__dl_result_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__dl__dl_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_0_0_i7);
	}
MR_def_label(__Compare___mdb__dl__dl_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__dl__dl_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__dl__dl_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__dl__dl_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__dl_module13)
	MR_init_entry1(__Unify___mdb__dl__dl_result_1_0);
	MR_init_label3(__Unify___mdb__dl__dl_result_1_0,14,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__dl__dl_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_1_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__dl__dl_result_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__dl__dl_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__dl__dl_result_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__dl__dl_result_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__dl_module14)
	MR_init_entry1(__Compare___mdb__dl__dl_result_1_0);
	MR_init_label5(__Compare___mdb__dl__dl_result_1_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__dl__dl_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__dl__dl_result_1_0_i2);
MR_def_label(__Compare___mdb__dl__dl_result_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__dl__dl_result_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_1_0_i7);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__dl__dl_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__dl__dl_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__dl__dl_result_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__dl__dl_result_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__dl_module15)
	MR_init_entry1(__Unify___mdb__dl__handle_0_0);
	MR_init_label1(__Unify___mdb__dl__handle_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__dl__handle_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__dl__handle_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___mdb__dl__handle_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__dl_module16)
	MR_init_entry1(__Compare___mdb__dl__handle_0_0);
	MR_init_label2(__Compare___mdb__dl__handle_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__dl__handle_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__dl__handle_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__dl__handle_0_0_i2);
MR_def_label(__Compare___mdb__dl__handle_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__dl__handle_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module17)
	MR_init_entry1(__Unify___mdb__dl__link_mode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__dl__link_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__dl_module18)
	MR_init_entry1(__Compare___mdb__dl__link_mode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__dl__link_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module19)
	MR_init_entry1(__Unify___mdb__dl__scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__dl__scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__dl_module20)
	MR_init_entry1(__Compare___mdb__dl__scope_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__dl__scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__dl_maybe_bunch_0(void)
{
	mdb__dl_module0();
	mdb__dl_module1();
	mdb__dl_module2();
	mdb__dl_module3();
	mdb__dl_module4();
	mdb__dl_module5();
	mdb__dl_module6();
	mdb__dl_module7();
	mdb__dl_module8();
	mdb__dl_module9();
	mdb__dl_module10();
	mdb__dl_module11();
	mdb__dl_module12();
	mdb__dl_module13();
	mdb__dl_module14();
	mdb__dl_module15();
	mdb__dl_module16();
	mdb__dl_module17();
	mdb__dl_module18();
	mdb__dl_module19();
	mdb__dl_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__dl__init(void);
void mercury__mdb__dl__init_type_tables(void);
void mercury__mdb__dl__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__dl__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__dl__init_complexity_procs(void);
#endif

void mercury__mdb__dl__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__dl_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__dl__type_ctor_info_scope_0,
		mdb__dl__scope_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__dl__type_ctor_info_link_mode_0,
		mdb__dl__link_mode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__dl__type_ctor_info_handle_0,
		mdb__dl__handle_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__dl__type_ctor_info_dl_result_1,
		mdb__dl__dl_result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__dl__type_ctor_info_dl_result_0,
		mdb__dl__dl_result_0_0);
	mercury__mdb__dl__init_debugger();
}

void mercury__mdb__dl__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__dl__type_ctor_info_scope_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__dl__type_ctor_info_link_mode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__dl__type_ctor_info_handle_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__dl__type_ctor_info_dl_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__dl__type_ctor_info_dl_result_0);
	}
}


void mercury__mdb__dl__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__dl__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__dl);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__dl__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
