/*
** Automatically generated from `bool.m'
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
INIT mercury__bool__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "bool.c"
#include "bool.mh"

#line 27 "bool.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "bool.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "bool.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "bool.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "bool.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "bool.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "bool.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 55 "bool.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "bool.c"
#line 150 "io.opt"
#include "dir.mh"

#line 63 "bool.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 67 "bool.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "bool.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "bool.c"
#line 20 "store.opt"
#include "store.mh"

#line 79 "bool.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 83 "bool.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "bool.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 91 "bool.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 95 "bool.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "bool.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 103 "bool.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "bool.c"
#line 108 "bool.c"
#ifndef BOOL_DECL_GUARD
#define BOOL_DECL_GUARD

#line 112 "bool.c"
#line 113 "bool.c"

#endif
#line 116 "bool.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bool__type_ctor_info_bool_0;
MR_decl_label1(bool__and_3_0, 3)
MR_decl_label2(bool__and_list_2_0, 3,5)
MR_decl_label1(bool__not_2_0, 3)
MR_decl_label1(bool__or_3_0, 3)
MR_decl_label2(bool__or_list_2_0, 3,5)
MR_decl_label2(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0, 3,1)
MR_decl_label1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0, 3)
MR_decl_label1(fn__bool__and_2_0, 3)
MR_decl_label1(fn__bool__not_1_0, 3)
MR_decl_label1(fn__bool__or_2_0, 3)
MR_decl_label2(fn__bool__pred_to_bool_1_0, 3,2)
MR_decl_label3(fn__bool__xor_2_0, 9,3,10)
MR_decl_label2(__Compare___bool__bool_0_0, 2,3)
MR_def_extern_entry(bool__or_3_0)
MR_def_extern_entry(fn__bool__or_2_0)
MR_def_extern_entry(bool__or_list_2_0)
MR_def_extern_entry(fn__bool__or_list_1_0)
MR_def_extern_entry(bool__and_3_0)
MR_def_extern_entry(fn__bool__and_2_0)
MR_def_extern_entry(bool__and_list_2_0)
MR_def_extern_entry(fn__bool__and_list_1_0)
MR_def_extern_entry(bool__not_2_0)
MR_def_extern_entry(fn__bool__not_1_0)
MR_def_extern_entry(fn__bool__xor_2_0)
MR_def_extern_entry(fn__bool__pred_to_bool_1_0)
MR_decl_static(fn__bool__return_no_0_0)
MR_decl_static(fn__bool__return_yes_0_0)
MR_def_extern_entry(__Unify___bool__bool_0_0)
MR_def_extern_entry(__Compare___bool__bool_0_0)
MR_def_extern_entry(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0)
MR_def_extern_entry(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0)
MR_decl_static(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_EnumFunctorDesc mercury_data_bool__enum_functor_desc_bool_0_0 = {
	"no",
	0
};

static const MR_EnumFunctorDesc mercury_data_bool__enum_functor_desc_bool_0_1 = {
	"yes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_bool__enum_value_ordered_bool_0[] = {
	&mercury_data_bool__enum_functor_desc_bool_0_0,
	&mercury_data_bool__enum_functor_desc_bool_0_1
};

const MR_EnumFunctorDescPtr mercury_data_bool__enum_name_ordered_bool_0[] = {
	&mercury_data_bool__enum_functor_desc_bool_0_0,
	&mercury_data_bool__enum_functor_desc_bool_0_1
};

const MR_Integer mercury_data_bool__functor_number_map_bool_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bool__bool_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bool__bool_0_0)),
	"bool",
	"bool",
	{ (void *)mercury_data_bool__enum_name_ordered_bool_0 },
	{ (void *)mercury_data_bool__enum_value_ordered_bool_0 },
	2,
	4,
	mercury_data_bool__functor_number_map_bool_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0))
};


MR_BEGIN_MODULE(bool_module0)
	MR_init_entry1(bool__or_3_0);
	MR_init_label1(bool__or_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__or_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__or_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bool__or_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module1)
	MR_init_entry1(fn__bool__or_2_0);
	MR_init_label1(fn__bool__or_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__or_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__or_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bool__or_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module2)
	MR_init_entry1(bool__or_list_2_0);
	MR_init_label2(bool__or_list_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__or_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bool__or_list_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(bool__or_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(bool__or_list_2_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(bool__or_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(bool__or_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module3)
	MR_init_entry1(fn__bool__or_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__or_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bool__or_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module4)
	MR_init_entry1(bool__and_3_0);
	MR_init_label1(bool__and_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__and_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__and_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(bool__and_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module5)
	MR_init_entry1(fn__bool__and_2_0);
	MR_init_label1(fn__bool__and_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__and_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__and_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__and_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module6)
	MR_init_entry1(bool__and_list_2_0);
	MR_init_label2(bool__and_list_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__and_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bool__and_list_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(bool__and_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(bool__and_list_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(bool__and_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(bool__and_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module7)
	MR_init_entry1(fn__bool__and_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__and_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bool__and_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module8)
	MR_init_entry1(bool__not_2_0);
	MR_init_label1(bool__not_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__not_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__not_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(bool__not_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module9)
	MR_init_entry1(fn__bool__not_1_0);
	MR_init_label1(fn__bool__not_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__not_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__not_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__bool__not_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module10)
	MR_init_entry1(fn__bool__xor_2_0);
	MR_init_label3(fn__bool__xor_2_0,9,3,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i10);
	}
MR_def_label(fn__bool__xor_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__xor_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i9);
	}
MR_def_label(fn__bool__xor_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(bool_module11)
	MR_init_entry1(fn__bool__pred_to_bool_1_0);
	MR_init_label2(fn__bool__pred_to_bool_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__pred_to_bool_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__bool__pred_to_bool_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__bool__pred_to_bool_1_0_i3);
MR_def_label(fn__bool__pred_to_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bool__pred_to_bool_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__bool__pred_to_bool_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module12)
	MR_init_entry1(fn__bool__return_no_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bool__return_no_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module13)
	MR_init_entry1(fn__bool__return_yes_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bool__return_yes_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module14)
	MR_init_entry1(__Unify___bool__bool_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bool__bool_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module15)
	MR_init_entry1(__Compare___bool__bool_0_0);
	MR_init_label2(__Compare___bool__bool_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bool__bool_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bool__bool_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bool__bool_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bool__bool_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bool__bool_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module16)
	MR_init_entry1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
	MR_init_label1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module17)
	MR_init_entry1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
	MR_init_label2(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module18)
	MR_init_entry1(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__bool__return_yes_0_0);

MR_Word
ML_bool_return_yes(void);

MR_Word
ML_bool_return_yes(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__bool__return_yes_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__bool__return_yes_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__bool__return_no_0_0);

MR_Word
ML_bool_return_no(void);

MR_Word
ML_bool_return_no(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__bool__return_no_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__bool__return_no_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__bool_maybe_bunch_0(void)
{
	bool_module0();
	bool_module1();
	bool_module2();
	bool_module3();
	bool_module4();
	bool_module5();
	bool_module6();
	bool_module7();
	bool_module8();
	bool_module9();
	bool_module10();
	bool_module11();
	bool_module12();
	bool_module13();
	bool_module14();
	bool_module15();
	bool_module16();
	bool_module17();
	bool_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bool__init(void);
void mercury__bool__init_type_tables(void);
void mercury__bool__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bool__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bool__init_complexity_procs(void);
#endif

void mercury__bool__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bool_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bool__type_ctor_info_bool_0,
		bool__bool_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__, 5) =
			MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__, 6) =
			MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__bool__init_debugger();
}

void mercury__bool__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bool__type_ctor_info_bool_0);
	}
}


void mercury__bool__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bool__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bool);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bool__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
