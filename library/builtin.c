/*
** Automatically generated from `builtin.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "builtin.c"
#include "builtin.mh"

#line 28 "builtin.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "builtin.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "builtin.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "builtin.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "builtin.c"
#line 33 "array.int2"
#include "array.mh"

#line 48 "builtin.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "builtin.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "builtin.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "builtin.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "builtin.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "builtin.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 112 "builtin.c"
#line 113 "builtin.c"
#ifndef BUILTIN_DECL_GUARD
#define BUILTIN_DECL_GUARD

#line 117 "builtin.c"
#line 557 "builtin.m"
#include "mercury_type_info.h"
#line 120 "builtin.c"
#line 121 "builtin.c"

#endif
#line 124 "builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_builtin__type_ctor_info_compare_1,
	mercury_data_builtin__type_ctor_info_comparison_func_1,
	mercury_data_builtin__type_ctor_info_comparison_pred_1,
	mercury_data_builtin__type_ctor_info_comparison_result_0,
	mercury_data_builtin__type_ctor_info_unify_1;
MR_decl_label1(f_98_117_105_108_116_105_110_95_95_64_60_2_0, 2)
MR_decl_label1(f_98_117_105_108_116_105_110_95_95_64_61_60_2_0, 3)
MR_decl_label1(f_98_117_105_108_116_105_110_95_95_64_62_2_0, 2)
MR_decl_label1(f_98_117_105_108_116_105_110_95_95_64_62_61_2_0, 3)
MR_decl_label2(builtin__get_one_solution_io_4_0, 2,3)
MR_decl_label2(builtin__promise_only_solution_io_4_0, 2,3)
MR_decl_label1(builtin__semidet_fail_0_0, 1)
MR_decl_label1(builtin__semidet_false_0_0, 1)
MR_decl_label1(builtin__semidet_succeed_0_0, 1)
MR_decl_label1(builtin__semidet_true_0_0, 1)
MR_decl_label2(fn__builtin__get_one_solution_1_0, 2,3)
MR_decl_label3(fn__builtin__get_one_solution_1_1, 2,4,1)
MR_decl_label2(fn__builtin__promise_only_solution_1_0, 2,3)
MR_decl_label2(fn__builtin__promise_only_solution_1_1, 2,3)
MR_decl_label3(fn__builtin__promise_only_solution_1_2, 2,4,1)
MR_decl_label3(fn__builtin__promise_only_solution_1_3, 2,4,1)
MR_decl_label2(__Compare___builtin__comparison_result_0_0, 2,3)
MR_def_extern_entry(builtin__copy_2_0)
MR_def_extern_entry(builtin__copy_2_1)
MR_def_extern_entry(fn__builtin__unsafe_promise_unique_1_0)
MR_def_extern_entry(builtin__unsafe_promise_unique_2_0)
MR_def_extern_entry(builtin__false_0_0)
MR_def_extern_entry(fn__builtin__unsafe_cast_any_to_ground_1_0)
MR_def_extern_entry(builtin__impure_true_0_0)
MR_def_extern_entry(fn__builtin__get_one_solution_1_0)
MR_def_extern_entry(fn__builtin__get_one_solution_1_1)
MR_def_extern_entry(fn__builtin__promise_only_solution_1_0)
MR_def_extern_entry(fn__builtin__promise_only_solution_1_1)
MR_def_extern_entry(fn__builtin__promise_only_solution_1_2)
MR_def_extern_entry(fn__builtin__promise_only_solution_1_3)
MR_def_extern_entry(builtin__get_one_solution_io_4_0)
MR_def_extern_entry(builtin__promise_only_solution_io_4_0)
MR_def_extern_entry(fn__builtin__ordering_2_0)
MR_def_extern_entry(f_98_117_105_108_116_105_110_95_95_64_60_2_0)
MR_def_extern_entry(f_98_117_105_108_116_105_110_95_95_64_61_60_2_0)
MR_def_extern_entry(f_98_117_105_108_116_105_110_95_95_64_62_2_0)
MR_def_extern_entry(f_98_117_105_108_116_105_110_95_95_64_62_61_2_0)
MR_def_extern_entry(builtin__semidet_succeed_0_0)
MR_def_extern_entry(builtin__semidet_fail_0_0)
MR_def_extern_entry(builtin__semidet_true_0_0)
MR_def_extern_entry(builtin__semidet_false_0_0)
MR_def_extern_entry(builtin__cc_multi_equal_2_0)
MR_def_extern_entry(builtin__cc_multi_equal_2_1)
MR_def_extern_entry(builtin__semipure_true_0_0)
MR_def_extern_entry(builtin__dynamic_cast_2_0)
MR_def_extern_entry(builtin__call_rtti_generic_unify_2_0)
MR_def_extern_entry(builtin__call_rtti_generic_compare_3_0)
MR_def_extern_entry(__Unify___builtin__compare_1_0)
MR_def_extern_entry(__Compare___builtin__compare_1_0)
MR_def_extern_entry(__Unify___builtin__comparison_func_1_0)
MR_def_extern_entry(__Compare___builtin__comparison_func_1_0)
MR_def_extern_entry(__Unify___builtin__comparison_pred_1_0)
MR_def_extern_entry(__Compare___builtin__comparison_pred_1_0)
MR_def_extern_entry(__Unify___builtin__comparison_result_0_0)
MR_def_extern_entry(__Compare___builtin__comparison_result_0_0)
MR_def_extern_entry(__Unify___builtin__unify_1_0)
MR_def_extern_entry(__Compare___builtin__unify_1_0)
MR_decl_static(fn__f_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_comparison_result_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_compare_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___builtin__compare_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___builtin__compare_1_0)),
	"builtin",
	"compare",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_comparison_result_0
}};

const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_func_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___builtin__comparison_func_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___builtin__comparison_func_1_0)),
	"builtin",
	"comparison_func",
	{ 0 },
	{ (void *)&mercury_data___vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_comparison_result_0
}};

const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_pred_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___builtin__comparison_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___builtin__comparison_pred_1_0)),
	"builtin",
	"comparison_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_builtin__enum_functor_desc_comparison_result_0_0 = {
	"=",
	0
};

static const MR_EnumFunctorDesc mercury_data_builtin__enum_functor_desc_comparison_result_0_1 = {
	"<",
	1
};

static const MR_EnumFunctorDesc mercury_data_builtin__enum_functor_desc_comparison_result_0_2 = {
	">",
	2
};

const MR_EnumFunctorDescPtr mercury_data_builtin__enum_value_ordered_comparison_result_0[] = {
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_0,
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_1,
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_2
};

const MR_EnumFunctorDescPtr mercury_data_builtin__enum_name_ordered_comparison_result_0[] = {
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_1,
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_0,
	&mercury_data_builtin__enum_functor_desc_comparison_result_0_2
};

const MR_Integer mercury_data_builtin__functor_number_map_comparison_result_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___builtin__comparison_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___builtin__comparison_result_0_0)),
	"builtin",
	"comparison_result",
	{ (void *)mercury_data_builtin__enum_name_ordered_comparison_result_0 },
	{ (void *)mercury_data_builtin__enum_value_ordered_comparison_result_0 },
	3,
	4,
	mercury_data_builtin__functor_number_map_comparison_result_0
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_unify_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___builtin__unify_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___builtin__unify_1_0)),
	"builtin",
	"unify",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_2__pseudo_1__pseudo_1 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(builtin_module0)
	MR_init_entry1(builtin__copy_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__copy_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__copy_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__builtin__copy_2_0
	TypeInfo_for_T = MR_r1;
	Value = MR_r2;
{
#line 871 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 373 "builtin.c"
	MR_r1 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module1)
	MR_init_entry1(builtin__copy_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__copy_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__copy_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__builtin__copy_2_1
	TypeInfo_for_T = MR_r1;
	Value = MR_r2;
{
#line 881 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 412 "builtin.c"
	MR_r1 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module2)
	MR_init_entry1(fn__builtin__unsafe_promise_unique_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__unsafe_promise_unique_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_promise_unique'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__unsafe_promise_unique_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module3)
	MR_init_entry1(builtin__unsafe_promise_unique_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__unsafe_promise_unique_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_promise_unique'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__unsafe_promise_unique_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module4)
	MR_init_entry1(builtin__false_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__false_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'false'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__false_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module5)
	MR_init_entry1(fn__builtin__unsafe_cast_any_to_ground_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__unsafe_cast_any_to_ground_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_cast_any_to_ground'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__unsafe_cast_any_to_ground_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__fn__builtin__unsafe_cast_any_to_ground_1_0
	X = MR_r2;
{
#line 1255 "builtin.m"

    Y = X;
;}
#line 511 "builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__imp_0_0);

MR_BEGIN_MODULE(builtin_module6)
	MR_init_entry1(builtin__impure_true_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__impure_true_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'impure_true'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__impure_true_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__imp_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(builtin_module7)
	MR_init_entry1(fn__builtin__get_one_solution_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__get_one_solution_1_0);
	MR_init_label2(fn__builtin__get_one_solution_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_solution'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__get_one_solution_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__get_one_solution_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__get_one_solution_1_0_i2);
MR_def_label(fn__builtin__get_one_solution_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__get_one_solution_1_0_i3);
MR_def_label(fn__builtin__get_one_solution_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module8)
	MR_init_entry1(fn__builtin__get_one_solution_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__get_one_solution_1_1);
	MR_init_label3(fn__builtin__get_one_solution_1_1,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_solution'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__get_one_solution_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__get_one_solution_1_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__get_one_solution_1_1_i2);
MR_def_label(fn__builtin__get_one_solution_1_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__builtin__get_one_solution_1_1_i1);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__get_one_solution_1_1_i4);
MR_def_label(fn__builtin__get_one_solution_1_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__builtin__get_one_solution_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module9)
	MR_init_entry1(fn__builtin__promise_only_solution_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__promise_only_solution_1_0);
	MR_init_label2(fn__builtin__promise_only_solution_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_only_solution'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__promise_only_solution_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__promise_only_solution_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__promise_only_solution_1_0_i2);
MR_def_label(fn__builtin__promise_only_solution_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__promise_only_solution_1_0_i3);
MR_def_label(fn__builtin__promise_only_solution_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module10)
	MR_init_entry1(fn__builtin__promise_only_solution_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__promise_only_solution_1_1);
	MR_init_label2(fn__builtin__promise_only_solution_1_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_only_solution'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__promise_only_solution_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__promise_only_solution_1_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__promise_only_solution_1_1_i2);
MR_def_label(fn__builtin__promise_only_solution_1_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__promise_only_solution_1_1_i3);
MR_def_label(fn__builtin__promise_only_solution_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module11)
	MR_init_entry1(fn__builtin__promise_only_solution_1_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__promise_only_solution_1_2);
	MR_init_label3(fn__builtin__promise_only_solution_1_2,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_only_solution'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__promise_only_solution_1_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__promise_only_solution_1_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__promise_only_solution_1_2_i2);
MR_def_label(fn__builtin__promise_only_solution_1_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__builtin__promise_only_solution_1_2_i1);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__promise_only_solution_1_2_i4);
MR_def_label(fn__builtin__promise_only_solution_1_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__builtin__promise_only_solution_1_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module12)
	MR_init_entry1(fn__builtin__promise_only_solution_1_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__promise_only_solution_1_3);
	MR_init_label3(fn__builtin__promise_only_solution_1_3,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_only_solution'/2 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__promise_only_solution_1_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__builtin__promise_only_solution_1_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__builtin__promise_only_solution_1_3_i2);
MR_def_label(fn__builtin__promise_only_solution_1_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__builtin__promise_only_solution_1_3_i1);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		fn__builtin__promise_only_solution_1_3_i4);
MR_def_label(fn__builtin__promise_only_solution_1_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__builtin__promise_only_solution_1_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(builtin_module13)
	MR_init_entry1(builtin__get_one_solution_io_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__get_one_solution_io_4_0);
	MR_init_label2(builtin__get_one_solution_io_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_one_solution_io'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__get_one_solution_io_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(builtin__get_one_solution_io_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__builtin__get_one_solution_io_4_0_i2);
MR_def_label(builtin__get_one_solution_io_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		builtin__get_one_solution_io_4_0_i3);
MR_def_label(builtin__get_one_solution_io_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module14)
	MR_init_entry1(builtin__promise_only_solution_io_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__promise_only_solution_io_4_0);
	MR_init_label2(builtin__promise_only_solution_io_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_only_solution_io'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__promise_only_solution_io_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(builtin__promise_only_solution_io_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__builtin__promise_only_solution_io_4_0_i2);
MR_def_label(builtin__promise_only_solution_io_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(private_builtin__imp_0_0,
		builtin__promise_only_solution_io_4_0_i3);
MR_def_label(builtin__promise_only_solution_io_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(builtin_module15)
	MR_init_entry1(fn__builtin__ordering_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__builtin__ordering_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ordering'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__builtin__ordering_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module16)
	MR_init_entry1(f_98_117_105_108_116_105_110_95_95_64_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_117_105_108_116_105_110_95_95_64_60_2_0);
	MR_init_label1(f_98_117_105_108_116_105_110_95_95_64_60_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '@<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_117_105_108_116_105_110_95_95_64_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_98_117_105_108_116_105_110_95_95_64_60_2_0_i2);
MR_def_label(f_98_117_105_108_116_105_110_95_95_64_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module17)
	MR_init_entry1(f_98_117_105_108_116_105_110_95_95_64_61_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_117_105_108_116_105_110_95_95_64_61_60_2_0);
	MR_init_label1(f_98_117_105_108_116_105_110_95_95_64_61_60_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '@=<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_117_105_108_116_105_110_95_95_64_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_98_117_105_108_116_105_110_95_95_64_61_60_2_0_i3);
MR_def_label(f_98_117_105_108_116_105_110_95_95_64_61_60_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 2 != (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module18)
	MR_init_entry1(f_98_117_105_108_116_105_110_95_95_64_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_117_105_108_116_105_110_95_95_64_62_2_0);
	MR_init_label1(f_98_117_105_108_116_105_110_95_95_64_62_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '@>'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_117_105_108_116_105_110_95_95_64_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_98_117_105_108_116_105_110_95_95_64_62_2_0_i2);
MR_def_label(f_98_117_105_108_116_105_110_95_95_64_62_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 2 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module19)
	MR_init_entry1(f_98_117_105_108_116_105_110_95_95_64_62_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_117_105_108_116_105_110_95_95_64_62_61_2_0);
	MR_init_label1(f_98_117_105_108_116_105_110_95_95_64_62_61_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '@>='/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_117_105_108_116_105_110_95_95_64_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_98_117_105_108_116_105_110_95_95_64_62_61_2_0_i3);
MR_def_label(f_98_117_105_108_116_105_110_95_95_64_62_61_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 != (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module20)
	MR_init_entry1(builtin__semidet_succeed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__semidet_succeed_0_0);
	MR_init_label1(builtin__semidet_succeed_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_succeed'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__semidet_succeed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__builtin__semidet_succeed_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1122 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 1039 "builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(builtin__semidet_succeed_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(builtin__semidet_succeed_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module21)
	MR_init_entry1(builtin__semidet_fail_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__semidet_fail_0_0);
	MR_init_label1(builtin__semidet_fail_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_fail'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__semidet_fail_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__builtin__semidet_fail_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1129 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1082 "builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(builtin__semidet_fail_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(builtin__semidet_fail_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module22)
	MR_init_entry1(builtin__semidet_true_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__semidet_true_0_0);
	MR_init_label1(builtin__semidet_true_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_true'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__semidet_true_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__builtin__semidet_true_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1122 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 1125 "builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(builtin__semidet_true_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(builtin__semidet_true_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module23)
	MR_init_entry1(builtin__semidet_false_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__semidet_false_0_0);
	MR_init_label1(builtin__semidet_false_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_false'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__semidet_false_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__builtin__semidet_false_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1129 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1168 "builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(builtin__semidet_false_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(builtin__semidet_false_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module24)
	MR_init_entry1(builtin__cc_multi_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__cc_multi_equal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cc_multi_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__cc_multi_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__builtin__cc_multi_equal_2_0
	X = MR_r2;
{
#line 1199 "builtin.m"

    Y = X;
;}
#line 1210 "builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module25)
	MR_init_entry1(builtin__cc_multi_equal_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__cc_multi_equal_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cc_multi_equal'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__cc_multi_equal_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__builtin__cc_multi_equal_2_1
	X = MR_r2;
{
#line 1192 "builtin.m"

    Y = X;
;}
#line 1245 "builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module26)
	MR_init_entry1(builtin__semipure_true_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__semipure_true_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semipure_true'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__semipure_true_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(builtin_module27)
	MR_init_entry1(builtin__dynamic_cast_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__dynamic_cast_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__dynamic_cast_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__typed_unify_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(rtti_implementation__generic_unify_2_0);

MR_BEGIN_MODULE(builtin_module28)
	MR_init_entry1(builtin__call_rtti_generic_unify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__call_rtti_generic_unify_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_rtti_generic_unify'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__call_rtti_generic_unify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtti_implementation__generic_unify_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(rtti_implementation__generic_compare_3_0);

MR_BEGIN_MODULE(builtin_module29)
	MR_init_entry1(builtin__call_rtti_generic_compare_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__builtin__call_rtti_generic_compare_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_rtti_generic_compare'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__builtin__call_rtti_generic_compare_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtti_implementation__generic_compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(builtin_module30)
	MR_init_entry1(__Unify___builtin__compare_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___builtin__compare_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___builtin__compare_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(builtin_module31)
	MR_init_entry1(__Compare___builtin__compare_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___builtin__compare_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___builtin__compare_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module32)
	MR_init_entry1(__Unify___builtin__comparison_func_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___builtin__comparison_func_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___builtin__comparison_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module33)
	MR_init_entry1(__Compare___builtin__comparison_func_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___builtin__comparison_func_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___builtin__comparison_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module34)
	MR_init_entry1(__Unify___builtin__comparison_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___builtin__comparison_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___builtin__comparison_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module35)
	MR_init_entry1(__Compare___builtin__comparison_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___builtin__comparison_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___builtin__comparison_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module36)
	MR_init_entry1(__Unify___builtin__comparison_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___builtin__comparison_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___builtin__comparison_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module37)
	MR_init_entry1(__Compare___builtin__comparison_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___builtin__comparison_result_0_0);
	MR_init_label2(__Compare___builtin__comparison_result_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___builtin__comparison_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___builtin__comparison_result_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___builtin__comparison_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___builtin__comparison_result_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___builtin__comparison_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module38)
	MR_init_entry1(__Unify___builtin__unify_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___builtin__unify_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___builtin__unify_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module39)
	MR_init_entry1(__Compare___builtin__unify_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___builtin__unify_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___builtin__unify_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(builtin_module40)
	MR_init_entry1(fn__f_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__builtin_maybe_bunch_0(void)
{
	builtin_module0();
	builtin_module1();
	builtin_module2();
	builtin_module3();
	builtin_module4();
	builtin_module5();
	builtin_module6();
	builtin_module7();
	builtin_module8();
	builtin_module9();
	builtin_module10();
	builtin_module11();
	builtin_module12();
	builtin_module13();
	builtin_module14();
	builtin_module15();
	builtin_module16();
	builtin_module17();
	builtin_module18();
	builtin_module19();
	builtin_module20();
	builtin_module21();
	builtin_module22();
	builtin_module23();
	builtin_module24();
	builtin_module25();
	builtin_module26();
	builtin_module27();
	builtin_module28();
	builtin_module29();
	builtin_module30();
	builtin_module31();
	builtin_module32();
	builtin_module33();
	builtin_module34();
	builtin_module35();
	builtin_module36();
	builtin_module37();
	builtin_module38();
	builtin_module39();
}

static void mercury__builtin_maybe_bunch_1(void)
{
	builtin_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__builtin__init(void);
void mercury__builtin__init_type_tables(void);
void mercury__builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__builtin__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__builtin__init_threadscope_string_table(void);
#endif

void mercury__builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__builtin_maybe_bunch_0();
	mercury__builtin_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_builtin__type_ctor_info_compare_1,
		builtin__compare_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_builtin__type_ctor_info_comparison_func_1,
		builtin__comparison_func_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_builtin__type_ctor_info_comparison_pred_1,
		builtin__comparison_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_builtin__type_ctor_info_comparison_result_0,
		builtin__comparison_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_builtin__type_ctor_info_unify_1,
		builtin__unify_1_0);
	mercury__builtin__init_debugger();
}

void mercury__builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_builtin__type_ctor_info_compare_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_builtin__type_ctor_info_comparison_func_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_builtin__type_ctor_info_comparison_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_builtin__type_ctor_info_comparison_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_builtin__type_ctor_info_unify_1);
	}
}


void mercury__builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__builtin__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__builtin__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
