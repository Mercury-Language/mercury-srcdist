/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__top_level__mercury_compile_middle_passes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "top_level.mercury_compile_middle_passes.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "top_level.mercury_compile_middle_passes.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "top_level.mercury_compile_middle_passes.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "top_level.mercury_compile_middle_passes.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "top_level.mercury_compile_middle_passes.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "top_level.mercury_compile_middle_passes.c"
#line 49 "top_level.mercury_compile_middle_passes.c"
#include "top_level.mercury_compile_middle_passes.mh"

#line 52 "top_level.mercury_compile_middle_passes.c"
#line 53 "top_level.mercury_compile_middle_passes.c"
#ifndef TOP_LEVEL__MERCURY_COMPILE_MIDDLE_PASSES_DECL_GUARD
#define TOP_LEVEL__MERCURY_COMPILE_MIDDLE_PASSES_DECL_GUARD

#line 57 "top_level.mercury_compile_middle_passes.c"
#line 58 "top_level.mercury_compile_middle_passes.c"

#endif
#line 61 "top_level.mercury_compile_middle_passes.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];
MR_decl_label5(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0, 2,3,4,5,6)
MR_decl_label7(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0, 2,3,5,6,7,8,9)
MR_decl_label7(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0, 2,3,5,6,7,8,9)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label5(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0, 23,24,25,26,27)
MR_decl_label7(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0, 2,3,5,6,7,8,9)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0, 2,3,4,5,6,11,13,15,16,17)
MR_decl_label6(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0, 18,19,14,20,21,61)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0, 2,3,4,5,6,12,14,16,17,18)
MR_decl_label6(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0, 19,20,15,21,22,62)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0, 2,3,4,7,14,12,17,11,18,19)
MR_decl_label4(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0, 20,21,22,6)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0, 2,3,4,5,6,11,13,10,15,16)
MR_decl_label4(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0, 17,18,19,8)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label7(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0, 2,3,5,6,7,8,9)
MR_decl_label7(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0, 2,4,5,6,9,10,11)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0, 2,3,4,5,9,11,14,8,16,17)
MR_decl_label4(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0, 18,19,20,7)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0, 2,4,5,6,8,12,13,14,15,16)
MR_decl_label1(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0, 17)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0, 2,3,5,6,7,9,12,16,13,14)
MR_decl_label5(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0, 19,20,21,22,23)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_lco_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0, 2,3,5,6,7,8,9,12,13,14)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0, 2,3,4,5,6,19,7,10,12,14)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0, 2,3,4,8,9,10,11,5)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0, 2,3,4,8,6,11,5,16,17,20)
MR_decl_label3(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0, 21,22,14)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_termination_6_0, 2,3,4,8,9,10,11,12,13,5)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_termination2_6_0, 2,3,4,8,9,10,11,5)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0, 2,3,5,6,7,8,9,10,11,13)
MR_decl_label1(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0, 14)
MR_decl_label10(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0, 2,3,4,5,9,11,8,14,15,16)
MR_decl_label5(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0, 17,18,19,20,7)
MR_decl_label9(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0, 2,3,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 42,43,44,45,46,47,48,49,50,51)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 52,53,54,55,56,57,58,59,60,61)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 62,63,64,65,66,67,68,69,70,71)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0, 72,73,74,75,76,77,78,79,80,81)
MR_decl_label2(top_level__mercury_compile_middle_passes__middle_pass_7_0, 82,83)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0, 12,13,17,16,20,21,22,23,24,25)
MR_decl_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0, 26,27,28,29,15,31,32,35,38,41)
MR_decl_label4(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0, 44,47,50,53)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0, 2,3,4,5,6,10,9,13,8,14)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0, 15,16,17,18,19,20,21,22,23,25)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0, 26,27,28,29,30,31,32,33,24,34)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0, 35,36,37,38,39,40,41,42,43,44)
MR_decl_label2(top_level__mercury_compile_middle_passes__output_analysis_file_5_0, 45,47)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0, 2,3,4,5,6,10,9,13,8,14)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0, 15,16,17,18,19,20,21,22,23,25)
MR_decl_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0, 26,27,28,29,30,31,32,33,24,34)
MR_decl_label8(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0, 35,36,37,38,39,40,41,42)
MR_decl_label5(top_level__mercury_compile_middle_passes__process_lambdas_6_0, 2,3,4,5,6)
MR_decl_label5(top_level__mercury_compile_middle_passes__process_stms_6_0, 2,3,4,5,6)
MR_decl_label7(top_level__mercury_compile_middle_passes__tabling_6_0, 2,3,4,5,6,7,8)
MR_def_extern_entry(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0)
MR_decl_static(top_level__mercury_compile_middle_passes__tabling_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__process_lambdas_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__process_stms_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_termination_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_termination2_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_lco_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0)
MR_decl_static(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0)
MR_def_extern_entry(top_level__mercury_compile_middle_passes__middle_pass_7_0)
MR_def_extern_entry(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0)
MR_def_extern_entry(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0)
MR_def_extern_entry(top_level__mercury_compile_middle_passes__output_analysis_file_5_0)
MR_decl_static(top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__mmc_analysis__type_ctor_info_mmc_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__,
MR_CTOR0_ADDR(transform_hlds__mmc_analysis, mmc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(univ, univ),
MR_CTOR0_ADDR(univ, univ)
}
},
};

MR_decl_entry(transform_hlds__accumulator__accu_transform_proc_8_0);
MR_decl_entry(transform_hlds__loop_inv__hoist_loop_invariants_6_0);
MR_decl_entry(transform_hlds__delay_construct__delay_construct_proc_4_0);
MR_decl_entry(transform_hlds__unneeded_code__unneeded_process_proc_msg_5_0);
MR_decl_entry(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0);
static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__accumulator__accu_transform_proc_8_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__loop_inv__hoist_loop_invariants_6_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(transform_hlds__delay_construct__delay_construct_proc_4_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(transform_hlds__unneeded_code__unneeded_process_proc_msg_5_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__size_prof, construct_transform),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
1,
MR_TAG_COMMON(0,3,1)
},
{
0,
MR_TAG_COMMON(0,3,3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_TAG_COMMON(0,3,2)
},
{
MR_TAG_COMMON(0,3,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
1
},
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_COMMON(11,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.complexity",
"transform_hlds.complexity",
"complexity_process_proc_msg",
7,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
1404,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"size_prof_process_proc_msg",
6,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
1362,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.parallel_to_plain_conj",
"transform_hlds.parallel_to_plain_conj",
"parallel_to_plain_conjs",
3,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
1294,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.unneeded_code",
"transform_hlds.unneeded_code",
"unneeded_process_proc_msg",
5,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
1139,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.delay_construct",
"transform_hlds.delay_construct",
"delay_construct_proc",
4,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
1037,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"hoist_loop_invariants",
6,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
974,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"accu_transform_proc",
8,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
910,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_1 = {
{
MR_PREDICATE,
"top_level.mercury_compile_middle_passes",
"top_level.mercury_compile_middle_passes",
"lambda_mercury_compile_middle_passes_m_790",
2,
0
},
"top_level.mercury_compile_middle_passes",
"mercury_compile_middle_passes.m",
790,
"24"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(transform_hlds__unused_args__unused_args_process_module_6_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module0)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_unused_args_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,2,3,4,5,9,11,8,14,15,16)
	MR_init_label5(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,17,18,19,20,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_unused_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_middle_passes__maybe_unused_args_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 343;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 342;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i7);
	}
	MR_r1 = MR_sv(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Finding unused arguments ...\n", 31);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__unused_args__unused_args_process_module_6_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_unused_args_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(libs__file_util__report_error_3_0);
MR_decl_entry(transform_hlds__complexity__read_spec_file_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module1)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,2,3,4,5,6,19,7,10,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_read_experimental_complexity_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 204;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 205;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i7);
	}
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("the --experimental-complexity option requires a term size profiling grade", 73);
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__complexity__read_spec_file_4_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__table_gen__table_gen_process_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module2)
	MR_init_entry1(top_level__mercury_compile_middle_passes__tabling_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__tabling_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__tabling_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tabling'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__tabling_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Transforming tabled predicates...", 35);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__table_gen__table_gen_process_module_4_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__tabling_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__tabling_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_num_errors_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__lambda__expand_lambdas_in_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module3)
	MR_init_entry1(top_level__mercury_compile_middle_passes__process_lambdas_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__process_lambdas_6_0);
	MR_init_label5(top_level__mercury_compile_middle_passes__process_lambdas_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_lambdas'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__process_lambdas_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Transforming lambda expressions...", 36);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__process_lambdas_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__process_lambdas_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__process_lambdas_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__process_lambdas_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_module_2_0,
		top_level__mercury_compile_middle_passes__process_lambdas_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__process_lambdas_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__process_lambdas_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__process_lambdas_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__process_lambdas_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__process_lambdas_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__stm_expand__stm_process_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module4)
	MR_init_entry1(top_level__mercury_compile_middle_passes__process_stms_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__process_stms_6_0);
	MR_init_label5(top_level__mercury_compile_middle_passes__process_stms_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_stms'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__process_stms_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Transforming stm expressions...", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__process_stms_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__process_stms_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__process_stms_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__process_stms_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_module_2_0,
		top_level__mercury_compile_middle_passes__process_stms_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__process_stms_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__process_stms_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__process_stms_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__process_stms_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__process_stms_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__equiv_type_hlds__replace_in_hlds_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module5)
	MR_init_entry1(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0);
	MR_init_label5(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_equiv_types_hlds'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Fully expanding equivalence types...", 38);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__equiv_type_hlds__replace_in_hlds_2_0,
		top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__closure_analysis__process_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module6)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,2,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_closure_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Analysing closures...\n", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_module_4_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module7)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,2,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_exception_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 421;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Analysing exceptions...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__exception_analysis__analyse_exceptions_in_module_4_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__termination__analyse_termination_in_module_5_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module8)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_termination_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_termination_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_termination_6_0,2,3,4,8,9,10,11,12,13,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_termination'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_termination_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 295;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 406;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_termination_6_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_termination_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Detecting termination...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__termination__analyse_termination_in_module_5_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Termination checking done.\n", 29);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination_6_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_constr_main__pass_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module9)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_termination2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_termination2_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,2,3,4,8,9,10,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_termination2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_termination2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 295;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 413;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Detecting termination 2...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_constr_main__pass_4_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Termination 2 checking done.\n", 31);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_termination2_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__type_ctor_info__generate_hlds_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module10)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_type_ctor_infos'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 267;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Generating type_ctor_info structures...", 41);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__type_ctor_info__generate_hlds_2_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dead_proc_elim__dead_proc_elim_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module11)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0);
	MR_init_label9(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,2,3,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_warn_dead_procs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 29;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Warning about dead procedures...\n", 35);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_num_errors_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0);
MR_decl_entry(hlds__passes_aux__maybe_dump_hlds_7_0);
MR_decl_entry(bytecode_backend__bytecode_gen__gen_module_5_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(bytecode_backend__bytecode__debug_bytecode_file_4_0);
MR_decl_entry(bytecode_backend__bytecode__output_bytecode_file_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module12)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,2,3,5,6,7,8,9,10,11,12)
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label5(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,23,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_bytecodes'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 129;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 505;
	MR_r3 = (MR_Word) MR_string_const("bytecode_args_to_regs", 21);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Generating bytecodes...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_module_5_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(".bytedebug", 10);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Writing bytecodes to \140", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_bytecode_file_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(".mbc", 4);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Writing bytecodes to \140", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i24);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_bytecode_file_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i25);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i26);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0_i27);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__untupling__untuple_arguments_4_0);
MR_decl_entry(top_level__mercury_compile_front_end__maybe_simplify_10_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module13)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,2,3,5,6,7,8,9,10,11,13)
	MR_init_label1(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_untuple_arguments'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 389;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Untupling...\n", 15);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__untupling__untuple_arguments_4_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("top_level.mercury_compile_middle_passes", 39);
	MR_r3 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", 77);
	MR_r4 = (MR_Word) MR_string_const("simplify has errors", 19);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__tupling__tuple_arguments_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module14)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_tuple_arguments'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 390;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Tupling...\n", 13);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__tupling__tuple_arguments_4_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(set__empty_1_0);
MR_decl_entry(transform_hlds__higher_order__specialize_higher_order_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module15)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_higher_order_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,2,3,4,5,9,11,14,8,16,17)
	MR_init_label4(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,18,19,20,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_higher_order'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 344;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 352;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(set__empty_1_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i7);
	}
	MR_r1 = MR_sv(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Specializing higher-order and polymorphic predicates...\n", 58);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__higher_order__specialize_higher_order_4_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_higher_order_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ssdebug__ssdebug_transform_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module16)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_ssdb_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,2,3,4,8,9,10,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_ssdb'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 224;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 128;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i5);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Apply debugging source to source transformation ...\n", 54);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ssdebug__ssdebug_transform_module_4_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_ssdb_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module17)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_implicit_parallelism'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 650;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Applying implicit parallelism...\n", 35);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_update_4_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module18)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,2,3,5,6,7,9,12,16,13,14)
	MR_init_label5(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_introduce_accumulators'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 353;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Attempting to introduce accumulators...\n", 42);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_update_4_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i14);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_middle_passes", 39);
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", 82);
	MR_r3 = (MR_Word) MR_string_const("bad task", 8);
	MR_np_call_localret_ent(require__unexpected_3_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(transform_hlds__inlining__inlining_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module19)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,2,3,4,5,6,11,13,10,15,16)
	MR_init_label4(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,17,18,19,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_do_inlining'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 326;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 328;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 330;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 332;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i8);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i8);
	}
	MR_r1 = MR_sv(6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Inlining...\n", 14);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__inlining__inlining_2_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module20)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,2,3,5,6,7,8,9,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_loop_inv'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 376;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 148;
	MR_r3 = (MR_Word) MR_string_const("mark_static", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Hoisting loop invariants...\n", 30);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__deforest__deforestation_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module21)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_deforestation_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,2,3,4,7,14,12,17,11,18,19)
	MR_init_label4(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,20,21,22,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_deforestation'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 380;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 341;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i7);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i6);
	}
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i12);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Constraint propagation...\n", 28);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_middle_passes", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", 73);
	MR_r3 = (MR_Word) MR_string_const("no no", 5);
	MR_np_call_localret_ent(require__unexpected_3_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Deforestation...\n", 19);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Deforestation and constraint propagation...\n", 46);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__deforest__deforestation_4_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_deforestation_6_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module22)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_delay_construct'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 377;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Delaying construction unifications ...\n", 41);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module23)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_structure_sharing_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 398;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Structure sharing analysis...\n", 32);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module24)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_structure_reuse_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 400;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Structure reuse analysis...\n", 30);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__trailing_analysis__analyse_trail_usage_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module25)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,2,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_analyse_trail_usage'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 385;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Analysing trail usage...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__trailing_analysis__analyse_trail_usage_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Trail usage analysis done.\n", 29);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module26)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_unneeded_code'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 347;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Removing unneeded code from procedure bodies...\n", 50);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__lco__lco_modulo_constructors_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module27)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_lco_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_lco_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_lco_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_lco'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_lco_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 356;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_lco_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Looking for LCO modulo constructor application ...\n", 53);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__lco__lco_modulo_constructors_2_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_lco_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_lco_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module28)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,2,3,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_analyse_mm_tabling'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 388;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Analysing minimal model tabling...\n", 37);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_contains_par_conj_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(transform_hlds__granularity__control_granularity_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module29)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,2,3,4,5,6,12,14,16,17,18)
	MR_init_label6(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,19,20,15,21,22,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_control_granularity'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 208;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 648;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_contains_par_conj_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i62);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i62);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i62);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i62);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("% Granularity control transformation...\n", 40);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__granularity__control_granularity_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__distance_granularity__control_distance_granularity_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module30)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,2,3,4,5,6,11,13,15,16,17)
	MR_init_label6(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,18,19,14,20,21,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_control_distance_granularity'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 208;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 649;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_contains_par_conj_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i61);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i61);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i61);
	}
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("% Distance granularity transformation...\n", 41);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__control_distance_granularity_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i20);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__current_grade_supports_par_conj_2_0);
MR_decl_entry(transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module31)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,2,4,5,6,8,12,13,14,15,16)
	MR_init_label1(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_impl_dependent_par_conjs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_contains_par_conj_2_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__current_grade_supports_par_conj_2_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__passes_aux__process_all_nonimported_procs_3_0);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Dependent parallel conjunction transformation...\n", 51);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__par_loop_control__maybe_par_loop_control_module_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module32)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_par_loop_control'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 652;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Applying parallel loop control transformation...\n", 51);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__par_loop_control__maybe_par_loop_control_module_2_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__size_prof__size_prof_process_proc_msg_6_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module33)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,2,3,4,8,6,11,5,16,17,20)
	MR_init_label3(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,21,22,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_term_size_prof'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 204;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 205;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i6);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i8);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i11);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,10,1);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_middle_passes", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", 74);
	MR_r3 = (MR_Word) MR_string_const("as_words and as_cells", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i14);
	}
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Applying term size profiling transformation...\n", 49);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__size_prof_process_proc_msg_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__deep_profiling__apply_deep_profiling_transform_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module34)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_deep_profiling'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 187;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Applying deep profiling transformation...\n", 44);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_deep_profiling_transform_2_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0);
MR_decl_entry(transform_hlds__complexity__complexity_process_proc_msg_7_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module35)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0);
	MR_init_label7(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,2,4,5,6,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_experimental_complexity'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Applying complexity experiment transformation...\n", 51);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__complexity__complexity_process_proc_msg_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__do_region_analysis_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module36)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_region_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 397;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Analysing regions ...\n", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__do_region_analysis_4_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module37)
	MR_init_entry1(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0);
	MR_init_label8(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_eliminate_dead_procs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 379;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Eliminating dead procedures...\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module38)
	MR_init_entry1(top_level__mercury_compile_middle_passes__middle_pass_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__middle_pass_7_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,32,33,34,35,36,37,38,39,40,41)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,42,43,44,45,46,47,48,49,50,51)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,52,53,54,55,56,57,58,59,60,61)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,62,63,64,65,66,67,68,69,70,71)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_7_0,72,73,74,75,76,77,78,79,80,81)
	MR_init_label2(top_level__mercury_compile_middle_passes__middle_pass_7_0,82,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'middle_pass'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_middle_passes__middle_pass_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 54;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__tabling_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 105;
	MR_r3 = (MR_Word) MR_string_const("tabling", 7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__process_lambdas_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__process_stms_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 113;
	MR_r3 = (MR_Word) MR_string_const("stm", 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 115;
	MR_r3 = (MR_Word) MR_string_const("equiv_types", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 117;
	MR_r3 = (MR_Word) MR_string_const("closure_analysis", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_r3 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 120;
	MR_r3 = (MR_Word) MR_string_const("termination", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 121;
	MR_r3 = (MR_Word) MR_string_const("termination2", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 125;
	MR_r3 = (MR_Word) MR_string_const("type_ctor_infos", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i24);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 130;
	MR_r3 = (MR_Word) MR_string_const("warn_dead_procs", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i25);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_bytecodes_8_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i26);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i27);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = (MR_Word) MR_string_const("untupling", 9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i28);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i29);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 134;
	MR_r3 = (MR_Word) MR_string_const("tupling", 7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i30);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i31);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 135;
	MR_r3 = (MR_Word) MR_string_const("higher_order", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i32);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_ssdb_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i33);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 137;
	MR_r3 = (MR_Word) MR_string_const("ssdb", 4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i34);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i35);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 140;
	MR_r3 = (MR_Word) MR_string_const("accum", 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i36);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i37);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 145;
	MR_r3 = (MR_Word) MR_string_const("inlining", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i38);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i39);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 150;
	MR_r3 = (MR_Word) MR_string_const("loop_inv", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i40);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i41);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 155;
	MR_r3 = (MR_Word) MR_string_const("deforestation", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i42);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_delay_construct_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i43);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 160;
	MR_r3 = (MR_Word) MR_string_const("delay_construct", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i44);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i45);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 162;
	MR_r3 = (MR_Word) MR_string_const("structure_sharing", 17);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i46);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i47);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 163;
	MR_r3 = (MR_Word) MR_string_const("structure_reuse", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i48);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i49);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 165;
	MR_r3 = (MR_Word) MR_string_const("unused_args", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i50);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i51);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 167;
	MR_r3 = (MR_Word) MR_string_const("trail_usage", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i52);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i53);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 170;
	MR_r3 = (MR_Word) MR_string_const("unneeded_code", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i54);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i55);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 172;
	MR_r3 = (MR_Word) MR_string_const("pre_implicit_parallelism_simplify", 33);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i56);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i57);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 173;
	MR_r3 = (MR_Word) MR_string_const("implicit_parallelism", 20);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i58);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i59);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 185;
	MR_r3 = (MR_Word) MR_string_const("mm_tabling_analysis", 19);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i60);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_control_granularity_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i61);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 200;
	MR_r3 = (MR_Word) MR_string_const("granularity", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i62);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i63);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 201;
	MR_r3 = (MR_Word) MR_string_const("distance_granularity", 20);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i64);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i65);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 205;
	MR_r3 = (MR_Word) MR_string_const("dependent_par_conj", 18);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i66);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i67);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 206;
	MR_r3 = (MR_Word) MR_string_const("par_loop_control", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i68);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_lco_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i69);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 210;
	MR_r3 = (MR_Word) MR_string_const("lco", 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i70);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i71);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 215;
	MR_r3 = (MR_Word) MR_string_const("pre_prof_transforms_simplify", 28);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i72);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i73);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 220;
	MR_r3 = (MR_Word) MR_string_const("term_size_prof", 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i74);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i75);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 225;
	MR_r3 = (MR_Word) MR_string_const("deep_profiling", 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i76);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i77);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 230;
	MR_r3 = (MR_Word) MR_string_const("complexity", 10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i78);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_region_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i79);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 240;
	MR_r3 = (MR_Word) MR_string_const("region_analysis", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i80);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i81);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 250;
	MR_r3 = (MR_Word) MR_string_const("dead_procs", 10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i82);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 299;
	MR_r3 = (MR_Word) MR_string_const("middle_pass", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__middle_pass_7_0_i83);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module39)
	MR_init_entry1(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,12,13,17,16,20,21,22,23,24,25)
	MR_init_label10(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,26,27,28,29,15,31,32,35,38,41)
	MR_init_label4(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,44,47,50,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'middle_pass_for_opt_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 343;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 406;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 413;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 398;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 400;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i7);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 421;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i8);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 385;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i10);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 388;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i11);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i12);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 54;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i17);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i15);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Transforming lambda expressions...", 36);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_module_2_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i24);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("% Transforming stm expressions...", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i25);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i26);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_module_2_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i27);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i28);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i29);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i31);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(6),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i32);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i35);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i38);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i41);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i44);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i47);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,
		top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i50);
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0);
	}
MR_def_label(top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__trans_opt__write_trans_opt_file_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module40)
	MR_init_entry1(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,2,3,4,5,6,10,9,13,8,14)
	MR_init_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,15,16,17,18,19,20,21,22,23,25)
	MR_init_label10(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,26,27,28,29,30,31,32,33,24,34)
	MR_init_label8(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,35,36,37,38,39,40,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_trans_opt_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 54;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 398;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i10);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i8);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__process_lambdas_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 110;
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 110;
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 117;
	MR_r3 = (MR_Word) MR_string_const("closure_analysis", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_r3 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 120;
	MR_r3 = (MR_Word) MR_string_const("termination", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 121;
	MR_r3 = (MR_Word) MR_string_const("termination_2", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i25);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i24);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i26);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 135;
	MR_r3 = (MR_Word) MR_string_const("higher_order", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i27);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i28);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 145;
	MR_r3 = (MR_Word) MR_string_const("inlining", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i29);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i30);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 150;
	MR_r3 = (MR_Word) MR_string_const("loop_inv", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i31);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i32);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 155;
	MR_r3 = (MR_Word) MR_string_const("deforestation", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i33);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i34);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 162;
	MR_r3 = (MR_Word) MR_string_const("structure_sharing", 17);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i35);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i36);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 163;
	MR_r3 = (MR_Word) MR_string_const("structure_reuse", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i37);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i38);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 167;
	MR_r3 = (MR_Word) MR_string_const("trail_usage", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i39);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i40);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 185;
	MR_r3 = (MR_Word) MR_string_const("mm_tabling_analysis", 19);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i41);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__trans_opt__write_trans_opt_file_3_0,
		top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0_i42);
MR_def_label(top_level__mercury_compile_middle_passes__output_trans_opt_file_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_analysis_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_all_deps_2_0);
MR_decl_entry(analysis__write_analysis_files_7_0);

MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module41)
	MR_init_entry1(top_level__mercury_compile_middle_passes__output_analysis_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__output_analysis_file_5_0);
	MR_init_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,2,3,4,5,6,10,9,13,8,14)
	MR_init_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,15,16,17,18,19,20,21,22,23,25)
	MR_init_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,26,27,28,29,30,31,32,33,24,34)
	MR_init_label10(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,35,36,37,38,39,40,41,42,43,44)
	MR_init_label2(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,45,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_analysis_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_middle_passes__output_analysis_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i2);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i3);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 54;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i4);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i5);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 398;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i6);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i10);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i9);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i8);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__process_lambdas_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i13);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 110;
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i14);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 110;
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i15);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i16);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 117;
	MR_r3 = (MR_Word) MR_string_const("closure_analysis", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i17);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i18);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_r3 = (MR_Word) MR_string_const("exception_analysis", 18);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i19);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i20);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 120;
	MR_r3 = (MR_Word) MR_string_const("termination", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i21);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_termination2_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i22);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 121;
	MR_r3 = (MR_Word) MR_string_const("termination_2", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i23);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i25);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i24);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_higher_order_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i26);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 135;
	MR_r3 = (MR_Word) MR_string_const("higher_order", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i27);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_do_inlining_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i28);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 145;
	MR_r3 = (MR_Word) MR_string_const("inlining", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i29);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_loop_inv_8_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i30);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 150;
	MR_r3 = (MR_Word) MR_string_const("loop_inv", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i31);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_deforestation_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i32);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 155;
	MR_r3 = (MR_Word) MR_string_const("deforestation", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i33);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i34);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 162;
	MR_r3 = (MR_Word) MR_string_const("structure_sharing", 17);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i35);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i36);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 163;
	MR_r3 = (MR_Word) MR_string_const("structure_reuse", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i37);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_unused_args_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i38);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 165;
	MR_r3 = (MR_Word) MR_string_const("unused_args", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i39);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i40);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 167;
	MR_r3 = (MR_Word) MR_string_const("trail_usage", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i41);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i42);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 185;
	MR_r3 = (MR_Word) MR_string_const("mm_tabling_analysis", 19);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i43);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_analysis_info_2_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i44);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_all_deps_2_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i45);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(analysis__write_analysis_files_7_0,
		top_level__mercury_compile_middle_passes__output_analysis_file_5_0_i47);
MR_def_label(top_level__mercury_compile_middle_passes__output_analysis_file_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_middle_passes_module42)
	MR_init_entry1(top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_untuple_arguments__790__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_level__mercury_compile_middle_passes_maybe_bunch_0(void)
{
	top_level__mercury_compile_middle_passes_module0();
	top_level__mercury_compile_middle_passes_module1();
	top_level__mercury_compile_middle_passes_module2();
	top_level__mercury_compile_middle_passes_module3();
	top_level__mercury_compile_middle_passes_module4();
	top_level__mercury_compile_middle_passes_module5();
	top_level__mercury_compile_middle_passes_module6();
	top_level__mercury_compile_middle_passes_module7();
	top_level__mercury_compile_middle_passes_module8();
	top_level__mercury_compile_middle_passes_module9();
	top_level__mercury_compile_middle_passes_module10();
	top_level__mercury_compile_middle_passes_module11();
	top_level__mercury_compile_middle_passes_module12();
	top_level__mercury_compile_middle_passes_module13();
	top_level__mercury_compile_middle_passes_module14();
	top_level__mercury_compile_middle_passes_module15();
	top_level__mercury_compile_middle_passes_module16();
	top_level__mercury_compile_middle_passes_module17();
	top_level__mercury_compile_middle_passes_module18();
	top_level__mercury_compile_middle_passes_module19();
	top_level__mercury_compile_middle_passes_module20();
	top_level__mercury_compile_middle_passes_module21();
	top_level__mercury_compile_middle_passes_module22();
	top_level__mercury_compile_middle_passes_module23();
	top_level__mercury_compile_middle_passes_module24();
	top_level__mercury_compile_middle_passes_module25();
	top_level__mercury_compile_middle_passes_module26();
	top_level__mercury_compile_middle_passes_module27();
	top_level__mercury_compile_middle_passes_module28();
	top_level__mercury_compile_middle_passes_module29();
	top_level__mercury_compile_middle_passes_module30();
	top_level__mercury_compile_middle_passes_module31();
	top_level__mercury_compile_middle_passes_module32();
	top_level__mercury_compile_middle_passes_module33();
	top_level__mercury_compile_middle_passes_module34();
	top_level__mercury_compile_middle_passes_module35();
	top_level__mercury_compile_middle_passes_module36();
	top_level__mercury_compile_middle_passes_module37();
	top_level__mercury_compile_middle_passes_module38();
	top_level__mercury_compile_middle_passes_module39();
}

static void mercury__top_level__mercury_compile_middle_passes_maybe_bunch_1(void)
{
	top_level__mercury_compile_middle_passes_module40();
	top_level__mercury_compile_middle_passes_module41();
	top_level__mercury_compile_middle_passes_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__mercury_compile_middle_passes__init(void);
void mercury__top_level__mercury_compile_middle_passes__init_type_tables(void);
void mercury__top_level__mercury_compile_middle_passes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__mercury_compile_middle_passes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__mercury_compile_middle_passes__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__top_level__mercury_compile_middle_passes__init_threadscope_string_table(void);
#endif

void mercury__top_level__mercury_compile_middle_passes__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level__mercury_compile_middle_passes_maybe_bunch_0();
	mercury__top_level__mercury_compile_middle_passes_maybe_bunch_1();
	mercury__top_level__mercury_compile_middle_passes__init_debugger();
}

void mercury__top_level__mercury_compile_middle_passes__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__top_level__mercury_compile_middle_passes__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__mercury_compile_middle_passes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level__mercury_compile_middle_passes);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__mercury_compile_middle_passes__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__top_level__mercury_compile_middle_passes__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
