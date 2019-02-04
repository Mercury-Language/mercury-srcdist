/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__maybe__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "maybe.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "maybe.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "maybe.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "maybe.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 43 "maybe.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 47 "maybe.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 51 "maybe.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "maybe.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "maybe.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "maybe.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "maybe.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "maybe.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "maybe.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "maybe.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "maybe.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 87 "maybe.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "maybe.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "maybe.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 99 "maybe.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "maybe.c"
#line 104 "maybe.c"
#include "maybe.mh"

#line 107 "maybe.c"
#line 108 "maybe.c"
#ifndef MAYBE_DECL_GUARD
#define MAYBE_DECL_GUARD

#line 112 "maybe.c"
#line 113 "maybe.c"

#endif
#line 116 "maybe.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_maybe__type_ctor_info_maybe_error_1,
	mercury_data_maybe__type_ctor_info_maybe_error_0,
	mercury_data_maybe__type_ctor_info_maybe_1;
MR_decl_label1(maybe__fold_maybe_4_0, 3)
MR_decl_label1(maybe__fold_maybe_4_1, 3)
MR_decl_label2(maybe__map_fold2_maybe_7_0, 13,4)
MR_decl_label2(maybe__map_fold_maybe_5_0, 13,4)
MR_decl_label2(maybe__map_maybe_3_0, 13,4)
MR_decl_label3(maybe__map_maybe_3_1, 18,4,1)
MR_decl_label2(maybe__map_maybe_3_2, 12,3)
MR_decl_label1(fn__maybe__fold_maybe_3_0, 3)
MR_decl_label2(fn__maybe__map_maybe_2_0, 13,4)
MR_decl_label3(__Unify___maybe__maybe_1_0, 12,5,1)
MR_decl_label3(__Unify___maybe__maybe_error_0_0, 10,5,1)
MR_decl_label3(__Unify___maybe__maybe_error_1_0, 14,5,1)
MR_decl_label4(__Compare___maybe__maybe_1_0, 18,7,5,9)
MR_decl_label6(__Compare___maybe__maybe_error_0_0, 5,25,9,20,10,21)
MR_decl_label5(__Compare___maybe__maybe_error_1_0, 8,27,7,5,14)
MR_def_extern_entry(maybe__map_maybe_3_0)
MR_def_extern_entry(maybe__map_maybe_3_1)
MR_def_extern_entry(maybe__map_maybe_3_2)
MR_def_extern_entry(maybe__map_maybe_3_3)
MR_def_extern_entry(fn__maybe__map_maybe_2_0)
MR_def_extern_entry(maybe__fold_maybe_4_0)
MR_def_extern_entry(maybe__fold_maybe_4_1)
MR_def_extern_entry(maybe__fold_maybe_4_2)
MR_def_extern_entry(fn__maybe__fold_maybe_3_0)
MR_def_extern_entry(maybe__map_fold_maybe_5_0)
MR_def_extern_entry(maybe__map_fold_maybe_5_1)
MR_def_extern_entry(maybe__map_fold2_maybe_7_0)
MR_def_extern_entry(maybe__map_fold2_maybe_7_1)
MR_def_extern_entry(__Unify___maybe__maybe_1_0)
MR_def_extern_entry(__Compare___maybe__maybe_1_0)
MR_def_extern_entry(__Unify___maybe__maybe_error_0_0)
MR_def_extern_entry(__Compare___maybe__maybe_error_0_0)
MR_def_extern_entry(__Unify___maybe__maybe_error_1_0)
MR_def_extern_entry(__Compare___maybe__maybe_error_1_0)
MR_decl_static(fn__f_109_97_121_98_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_PseudoTypeInfo mercury_data_maybe__field_types_maybe_error_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_error_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_maybe__field_types_maybe_error_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_maybe__field_types_maybe_error_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_error_1_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_maybe__field_types_maybe_error_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_error_1_0[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_1_0

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_error_1_1[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_1_1

};

const MR_DuPtagLayout mercury_data_maybe__du_ptag_ordered_maybe_error_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_maybe__du_stag_ordered_maybe_error_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_maybe__du_stag_ordered_maybe_error_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_name_ordered_maybe_error_1[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_1_1,
	&mercury_data_maybe__du_functor_desc_maybe_error_1_0
};

const MR_Integer mercury_data_maybe__functor_number_map_maybe_error_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___maybe__maybe_error_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___maybe__maybe_error_1_0)),
	"maybe",
	"maybe_error",
	{ (void *)mercury_data_maybe__du_name_ordered_maybe_error_1 },
	{ (void *)mercury_data_maybe__du_ptag_ordered_maybe_error_1 },
	2,
	4,
	mercury_data_maybe__functor_number_map_maybe_error_1
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_error_0_0 = {
	"ok",
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

const MR_PseudoTypeInfo mercury_data_maybe__field_types_maybe_error_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_error_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_maybe__field_types_maybe_error_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_error_0_0[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_0_0

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_error_0_1[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_0_1

};

const MR_DuPtagLayout mercury_data_maybe__du_ptag_ordered_maybe_error_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_maybe__du_stag_ordered_maybe_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_maybe__du_stag_ordered_maybe_error_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_name_ordered_maybe_error_0[] = {
	&mercury_data_maybe__du_functor_desc_maybe_error_0_1,
	&mercury_data_maybe__du_functor_desc_maybe_error_0_0
};

const MR_Integer mercury_data_maybe__functor_number_map_maybe_error_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___maybe__maybe_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___maybe__maybe_error_0_0)),
	"maybe",
	"maybe_error",
	{ (void *)mercury_data_maybe__du_name_ordered_maybe_error_0 },
	{ (void *)mercury_data_maybe__du_ptag_ordered_maybe_error_0 },
	2,
	4,
	mercury_data_maybe__functor_number_map_maybe_error_0
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_1_0 = {
	"no",
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

const MR_PseudoTypeInfo mercury_data_maybe__field_types_maybe_1_1[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_maybe__du_functor_desc_maybe_1_1 = {
	"yes",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_maybe__field_types_maybe_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_1_0[] = {
	&mercury_data_maybe__du_functor_desc_maybe_1_0

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_stag_ordered_maybe_1_1[] = {
	&mercury_data_maybe__du_functor_desc_maybe_1_1

};

const MR_DuPtagLayout mercury_data_maybe__du_ptag_ordered_maybe_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_maybe__du_stag_ordered_maybe_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_maybe__du_stag_ordered_maybe_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_maybe__du_name_ordered_maybe_1[] = {
	&mercury_data_maybe__du_functor_desc_maybe_1_0,
	&mercury_data_maybe__du_functor_desc_maybe_1_1
};

const MR_Integer mercury_data_maybe__functor_number_map_maybe_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___maybe__maybe_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___maybe__maybe_1_0)),
	"maybe",
	"maybe",
	{ (void *)mercury_data_maybe__du_name_ordered_maybe_1 },
	{ (void *)mercury_data_maybe__du_ptag_ordered_maybe_1 },
	2,
	4,
	mercury_data_maybe__functor_number_map_maybe_1
};

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(maybe_module0)
	MR_init_entry1(maybe__map_maybe_3_0);
	MR_init_label2(maybe__map_maybe_3_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_maybe_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(maybe__map_maybe_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(maybe__map_maybe_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__map_maybe_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__maybe__map_maybe_3_0_i4);
MR_def_label(maybe__map_maybe_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module1)
	MR_init_entry1(maybe__map_maybe_3_1);
	MR_init_label3(maybe__map_maybe_3_1,18,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_maybe_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(maybe__map_maybe_3_1_i18);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(maybe__map_maybe_3_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__map_maybe_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__maybe__map_maybe_3_1_i4);
MR_def_label(maybe__map_maybe_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(maybe__map_maybe_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(maybe__map_maybe_3_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(maybe_module2)
	MR_init_entry1(maybe__map_maybe_3_2);
	MR_init_label2(maybe__map_maybe_3_2,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_maybe_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(maybe__map_maybe_3_2_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(maybe__map_maybe_3_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred maybe.map_maybe/3-2", 0,
		MR_ENTRY(MR_do_fail));
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__map_maybe_3_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__maybe__map_maybe_3_2_i3);
MR_def_label(maybe__map_maybe_3_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module3)
	MR_init_entry1(maybe__map_maybe_3_3);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_maybe_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(maybe__map_maybe_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module4)
	MR_init_entry1(fn__maybe__map_maybe_2_0);
	MR_init_label2(fn__maybe__map_maybe_2_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__maybe__map_maybe_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__maybe__map_maybe_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__maybe__map_maybe_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__maybe__map_maybe_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__maybe__map_maybe_2_0_i4);
MR_def_label(fn__maybe__map_maybe_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(maybe_module5)
	MR_init_entry1(maybe__fold_maybe_4_0);
	MR_init_label1(maybe__fold_maybe_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__fold_maybe_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(maybe__fold_maybe_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(maybe__fold_maybe_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__fold_maybe_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module6)
	MR_init_entry1(maybe__fold_maybe_4_1);
	MR_init_label1(maybe__fold_maybe_4_1,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__fold_maybe_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(maybe__fold_maybe_4_1_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(maybe__fold_maybe_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__fold_maybe_4_1));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module7)
	MR_init_entry1(maybe__fold_maybe_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__fold_maybe_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(maybe__fold_maybe_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module8)
	MR_init_entry1(fn__maybe__fold_maybe_3_0);
	MR_init_label1(fn__maybe__fold_maybe_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__maybe__fold_maybe_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__maybe__fold_maybe_3_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__maybe__fold_maybe_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__maybe__fold_maybe_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module9)
	MR_init_entry1(maybe__map_fold_maybe_5_0);
	MR_init_label2(maybe__map_fold_maybe_5_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_fold_maybe_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(maybe__map_fold_maybe_5_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(maybe__map_fold_maybe_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r4;
	MR_r2 = MR_ctfield(1, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__map_fold_maybe_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__maybe__map_fold_maybe_5_0_i4);
MR_def_label(maybe__map_fold_maybe_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module10)
	MR_init_entry1(maybe__map_fold_maybe_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_fold_maybe_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(maybe__map_fold_maybe_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(maybe_module11)
	MR_init_entry1(maybe__map_fold2_maybe_7_0);
	MR_init_label2(maybe__map_fold2_maybe_7_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_fold2_maybe_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(maybe__map_fold2_maybe_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(maybe__map_fold2_maybe_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(maybe__map_fold2_maybe_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__maybe__map_fold2_maybe_7_0_i4);
MR_def_label(maybe__map_fold2_maybe_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module12)
	MR_init_entry1(maybe__map_fold2_maybe_7_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maybe__map_fold2_maybe_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(maybe__map_fold2_maybe_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(maybe_module13)
	MR_init_entry1(__Unify___maybe__maybe_1_0);
	MR_init_label3(__Unify___maybe__maybe_1_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___maybe__maybe_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_1_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___maybe__maybe_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___maybe__maybe_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___maybe__maybe_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(maybe_module14)
	MR_init_entry1(__Compare___maybe__maybe_1_0);
	MR_init_label4(__Compare___maybe__maybe_1_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___maybe__maybe_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_1_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_1_0_i7);
	}
MR_def_label(__Compare___maybe__maybe_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module15)
	MR_init_entry1(__Unify___maybe__maybe_error_0_0);
	MR_init_label3(__Unify___maybe__maybe_error_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___maybe__maybe_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___maybe__maybe_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___maybe__maybe_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___maybe__maybe_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module16)
	MR_init_entry1(__Compare___maybe__maybe_error_0_0);
	MR_init_label6(__Compare___maybe__maybe_error_0_0,5,25,9,20,10,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___maybe__maybe_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___maybe__maybe_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i9);
	}
MR_def_label(__Compare___maybe__maybe_error_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___maybe__maybe_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___maybe__maybe_error_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 1041 "maybe.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i10);
	}
	}
MR_def_label(__Compare___maybe__maybe_error_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___maybe__maybe_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_0_0_i25);
	}
MR_def_label(__Compare___maybe__maybe_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module17)
	MR_init_entry1(__Unify___maybe__maybe_error_1_0);
	MR_init_label3(__Unify___maybe__maybe_error_1_0,14,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___maybe__maybe_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_1_0_i14);
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
		MR_GOTO_LAB(__Unify___maybe__maybe_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___maybe__maybe_error_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___maybe__maybe_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___maybe__maybe_error_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___maybe__maybe_error_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maybe_module18)
	MR_init_entry1(__Compare___maybe__maybe_error_1_0);
	MR_init_label5(__Compare___maybe__maybe_error_1_0,8,27,7,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___maybe__maybe_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i7);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___maybe__maybe_error_1_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr3;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 1175 "maybe.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___maybe__maybe_error_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i7);
	}
MR_def_label(__Compare___maybe__maybe_error_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_error_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___maybe__maybe_error_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___maybe__maybe_error_1_0,14)
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


MR_BEGIN_MODULE(maybe_module19)
	MR_init_entry1(fn__f_109_97_121_98_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_97_121_98_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__maybe_maybe_bunch_0(void)
{
	maybe_module0();
	maybe_module1();
	maybe_module2();
	maybe_module3();
	maybe_module4();
	maybe_module5();
	maybe_module6();
	maybe_module7();
	maybe_module8();
	maybe_module9();
	maybe_module10();
	maybe_module11();
	maybe_module12();
	maybe_module13();
	maybe_module14();
	maybe_module15();
	maybe_module16();
	maybe_module17();
	maybe_module18();
	maybe_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__maybe__init(void);
void mercury__maybe__init_type_tables(void);
void mercury__maybe__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__maybe__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__maybe__init_complexity_procs(void);
#endif

void mercury__maybe__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__maybe_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_maybe__type_ctor_info_maybe_error_1,
		maybe__maybe_error_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_maybe__type_ctor_info_maybe_error_0,
		maybe__maybe_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_maybe__type_ctor_info_maybe_1,
		maybe__maybe_1_0);
	mercury__maybe__init_debugger();
}

void mercury__maybe__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_maybe__type_ctor_info_maybe_error_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_maybe__type_ctor_info_maybe_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_maybe__type_ctor_info_maybe_1);
	}
}


void mercury__maybe__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__maybe__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__maybe);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__maybe__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
