/*
** Automatically generated from `mdbcomp.feedback.automatic_parallelism.m'
** by the Mercury compiler,
** version rotd-2017-09-02
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module mdbcomp.feedback.automatic_parallelism. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__feedback__automatic_parallelism__init
ENDINIT
*/

#include "mdbcomp.feedback.automatic_parallelism.mih"


#include "mdbcomp.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism____vpti_pred_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_2;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_0[1];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_1[1];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1;

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2;

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_0[2];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_2[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_alg_for_finding_best_par_0[3];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_alg_for_finding_best_par_0[4];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_alg_for_finding_best_par_0[4];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1[2];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1[2];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0[2];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0[2];

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0[10];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0[10];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1[1];

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0[13];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0[13];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0[1];

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0[3];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0[3];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1[1];

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0[1];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0;

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0[2];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0[2];

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0;

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_cost_above_par_threshold_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0[2];

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0[9];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0[9];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0[1];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1[1];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0[2];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0[2];

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0[4];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0[4];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0[1];

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0[4];

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0[4];

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0[1];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1[1];

static const MR_NotagFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1;

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0;

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_speedup_estimate_alg_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0[2];

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0;

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_stat_measure_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_stat_measure_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_stat_measure_0[2];

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__388__1_6_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word Conv0_4,
  MR_Word CPC0_5,
  MR_Box LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____stat_measure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____stat_measure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_1[7][2];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_2[1][3];

static /* final */ const MR_Integer mdbcomp__feedback__automatic_parallelism_scalar_common_3[1][3];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_4[2][8];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_5[1][9];




static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Integer mdbcomp__feedback__automatic_parallelism_scalar_common_3[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_2 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_2 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0 = {
  (MR_String) "affbp_complete_branches",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1 = {
  (MR_String) "affbp_complete_size",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2 = {
  (MR_String) "affbp_complete",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3 = {
  (MR_String) "affbp_greedy",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_2[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_alg_for_finding_best_par_0[3] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_2
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_alg_for_finding_best_par_0[4] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_alg_for_finding_best_par_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "alg_for_finding_best_par",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_alg_for_finding_best_par_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_alg_for_finding_best_par_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_alg_for_finding_best_par_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0 = {
  (MR_String) "unknown_callee",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1[2] = {
  (MR_String) "nc_module_name",
  (MR_String) "nc_proc_name"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1 = {
  (MR_String) "named_callee",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "callee_rep",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0[10] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0[10] = {
  (MR_String) "cpc_goal_path",
  (MR_String) "cpc_maybe_push_goal",
  (MR_String) "cpc_first_conj_num",
  (MR_String) "cpc_is_dependent",
  (MR_String) "cpc_goals_before",
  (MR_String) "cpc_goals_before_cost",
  (MR_String) "cpc_conjs",
  (MR_String) "cpc_goals_after",
  (MR_String) "cpc_goals_after_cost",
  (MR_String) "cpc_par_exec_metrics"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0 = {
  (MR_String) "candidate_par_conjunction",
  (MR_Integer) 10,
  (MR_Integer) 208,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunction",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0[13] = {
  (MR_String) "cpcp_desired_parallelism",
  (MR_String) "cpcp_intermodule_var_use",
  (MR_String) "cpcp_sparking_cost",
  (MR_String) "cpcp_sparking_delay",
  (MR_String) "cpcp_barrier_cost",
  (MR_String) "cpcp_future_signal_cost",
  (MR_String) "cpcp_future_wait_cost",
  (MR_String) "cpcp_context_wakeup_delay",
  (MR_String) "cpcp_clique_threshold",
  (MR_String) "cpcp_call_site_threshold",
  (MR_String) "cpcp_speedup_threshold",
  (MR_String) "cpcp_parallelise_dep_conjs",
  (MR_String) "cpcp_alg_for_best_par"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0 = {
  (MR_String) "candidate_par_conjunctions_params",
  (MR_Integer) 13,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_params",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0[3] = {
  (MR_String) "cpcp_var_table",
  (MR_String) "cpcp_push_goals",
  (MR_String) "cpcp_par_conjs"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0 = {
  (MR_String) "candidate_par_conjunctions_proc",
  (MR_Integer) 3,
  (MR_Integer) 4,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_proc",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_proc",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0 = {
  (MR_String) "conjuncts_are_dependent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1 = {
  (MR_String) "conjuncts_are_independent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "conjuncts_are_dependent",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0 = {
  (MR_String) "cost_above_par_threshold",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1 = {
  (MR_String) "cost_not_above_par_threshold",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_cost_above_par_threshold_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "cost_above_par_threshold",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_cost_above_par_threshold_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0[9] = {
  (MR_String) "pem_num_calls",
  (MR_String) "pem_seq_time",
  (MR_String) "pem_par_time",
  (MR_String) "pem_par_overhead_spark_cost",
  (MR_String) "pem_par_overhead_barrier",
  (MR_String) "pem_par_overhead_signals",
  (MR_String) "pem_par_overhead_waits",
  (MR_String) "pem_first_conj_dead_time",
  (MR_String) "pem_future_dead_time"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0 = {
  (MR_String) "parallel_exec_metrics",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "parallel_exec_metrics",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0 = {
  (MR_String) "do_not_parallelise_dep_conjs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1 = {
  (MR_String) "parallelise_dep_conjs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "parallelise_dep_conjs",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "pard_goal",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0[4] = {
  (MR_String) "pga_cost_percall",
  (MR_String) "pga_coat_above_threshold",
  (MR_String) "pga_var_productions",
  (MR_String) "pga_var_consumptions"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0 = {
  (MR_String) "pard_goal_annotation",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "pard_goal_annotation",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0[4] = {
  (MR_String) "pg_goal_path",
  (MR_String) "pg_pushee_lo",
  (MR_String) "pg_pushee_hi",
  (MR_String) "pg_pushed_into"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0 = {
  (MR_String) "push_goal",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0[1] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "push_goal",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 = {
  (MR_String) "seq_conj",
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1,
  (MR_String) "sc_conjs",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "seq_conj",
  {     &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
  {     &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0 = {
  (MR_String) "estimate_speedup_naively",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1 = {
  (MR_String) "estimate_speedup_by_overlap",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_speedup_estimate_alg_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "speedup_estimate_alg",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_speedup_estimate_alg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0 = {
  (MR_String) "stat_mean",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1 = {
  (MR_String) "stat_median",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_stat_measure_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_stat_measure_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1
};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_stat_measure_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____stat_measure_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____stat_measure_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "stat_measure",
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_stat_measure_0 },
  {     mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_value_ordered_stat_measure_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_stat_measure_0
};

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__388__1_6_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word Conv0_4,
  MR_Word CPC0_5,
  MR_Box LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Conv0_4, (MR_Integer) 1)));

    func_0(((MR_Box) Conv0_4), ((MR_Box) (CPC0_5)), LambdaHeadVar__1_23, LambdaHeadVar__2_24);
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____stat_measure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____stat_measure_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0(
  MR_Word TypeInfo_for_GoalType_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0(
  MR_Word TypeInfo_for_GoalType_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_GoalType_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_13_13 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[6];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) ArgX2_6;
        MR_Integer Var_22 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_21, Var_22);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[5], &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[5];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[5];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0(
  MR_Word TypeInfo_for_GoalType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0, &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[3], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Word TypeInfo_18_18;

          {
            TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1));
            MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_GoalType_14));
          }
          mercury__list____Compare____list_1_0(TypeInfo_18_18, HeadVar__1_1, (MR_Word) ArgX3_8, (MR_Word) ArgY3_9);
        }
      }
    }
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[1], Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0(
  MR_Word TypeInfo_for_GoalType_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeCtorInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
          {
            TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
            MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_GoalType_11));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_15_15, (MR_Word) ArgX3_7, (MR_Word) ArgY3_8);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_42 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_43 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_42 == CastY_43);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Integer ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Integer ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Integer ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Integer ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Float ArgX11_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Float ArgY11_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12)));
      MR_Word Var_30;

      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_30, ArgX1_4, ArgY1_5);
      succeeded = (Var_30 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_30;
      else
      {
        MR_Word Var_31;
        MR_Integer Var_57 = (MR_Integer) ArgX2_6;
        MR_Integer Var_58 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_57, Var_58);
        succeeded = (Var_31 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_31;
        else
        {
          MR_Word Var_32;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, ArgX3_8, ArgY3_9);
          succeeded = (Var_32 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_32;
          else
          {
            MR_Word Var_33;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_33, ArgX4_10, ArgY4_11);
            succeeded = (Var_33 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_33;
            else
            {
              MR_Word Var_34;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, ArgX5_12, ArgY5_13);
              succeeded = (Var_34 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_34;
              else
              {
                MR_Word Var_35;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, ArgX6_14, ArgY6_15);
                succeeded = (Var_35 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_35;
                else
                {
                  MR_Word Var_36;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, ArgX7_16, ArgY7_17);
                  succeeded = (Var_36 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_36;
                  else
                  {
                    MR_Word Var_37;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, ArgX8_18, ArgY8_19);
                    succeeded = (Var_37 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_37;
                    else
                    {
                      MR_Word Var_38;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, ArgX9_20, ArgY9_21);
                      succeeded = (Var_38 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_38;
                      else
                      {
                        MR_Word Var_39;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, ArgX10_22, ArgY10_23);
                        succeeded = (Var_39 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_39;
                        else
                        {
                          MR_Word Var_40;

                          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_40, ArgX11_24, ArgY11_25);
                          succeeded = (Var_40 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_40;
                          else
                          {
                            MR_Word Var_41;

                            mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0(&Var_41, ArgX12_26, ArgY12_27);
                            succeeded = (Var_41 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_41;
                            else
                              mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(HeadVar__1_1, ArgX13_28, ArgY13_29);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer Var_12 = (MR_Integer) Var_11;
        MR_Integer Var_13 = (MR_Integer) ArgY1_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_12, Var_13);
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_30 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Integer ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Integer ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Integer ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Float ArgX11_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Float ArgY11_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0(ArgX12_25, ArgY12_26);
                            if (succeeded)
                              succeeded = mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0(ArgX13_27, ArgY13_28);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0(
  MR_Word TypeInfo_for_GoalType_35,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_34 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Float ArgX6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Float ArgY6_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Float ArgX9_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Float ArgY9_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word Var_24;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;

        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[0], &Var_25, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, ArgX3_8, ArgY3_9);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;

            mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&Var_27, ArgX4_10, ArgY4_11);
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_35, &Var_28, ArgX5_12, ArgY5_13);
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                mercury__private_builtin__builtin_compare_float_3_p_0(&Var_29, ArgX6_14, ArgY6_15);
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;
                  MR_Word TypeInfo_44_44;

                  {
                    TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_44_44, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_GoalType_35));
                  }
                  mercury__list____Compare____list_1_0(TypeInfo_44_44, &Var_30, (MR_Word) ArgX7_16, (MR_Word) ArgY7_17);
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;

                    mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_35, &Var_31, ArgX8_18, ArgY8_19);
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;

                      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_32, ArgX9_20, ArgY9_21);
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                        mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(HeadVar__1_1, ArgX10_22, ArgY10_23);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_31 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Float ArgX2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Float ArgY2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Float ArgX4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Float ArgX5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Float ArgY5_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Float ArgX6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Float ArgY6_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Float ArgX7_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Float ArgY7_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Float ArgX8_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Float ArgY8_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Float ArgX9_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Float ArgY9_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word Var_22;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, ArgX1_4, ArgY1_5);
      succeeded = (Var_22 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_22;
      else
      {
        MR_Word Var_23;

        mercury__private_builtin__builtin_compare_float_3_p_0(&Var_23, ArgX2_6, ArgY2_7);
        succeeded = (Var_23 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_23;
        else
        {
          MR_Word Var_24;

          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_24, ArgX3_8, ArgY3_9);
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_24;
          else
          {
            MR_Word Var_25;

            mercury__private_builtin__builtin_compare_float_3_p_0(&Var_25, ArgX4_10, ArgY4_11);
            succeeded = (Var_25 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_25;
            else
            {
              MR_Word Var_26;

              mercury__private_builtin__builtin_compare_float_3_p_0(&Var_26, ArgX5_12, ArgY5_13);
              succeeded = (Var_26 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_26;
              else
              {
                MR_Word Var_27;

                mercury__private_builtin__builtin_compare_float_3_p_0(&Var_27, ArgX6_14, ArgY6_15);
                succeeded = (Var_27 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_27;
                else
                {
                  MR_Word Var_28;

                  mercury__private_builtin__builtin_compare_float_3_p_0(&Var_28, ArgX7_16, ArgY7_17);
                  succeeded = (Var_28 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_28;
                  else
                  {
                    MR_Word Var_29;

                    mercury__private_builtin__builtin_compare_float_3_p_0(&Var_29, ArgX8_18, ArgY8_19);
                    succeeded = (Var_29 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_29;
                    else
                      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX9_20, ArgY9_21);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0(
  MR_Word TypeInfo_for_GoalType_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeCtorInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Float ArgX9_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Float ArgY9_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_26_26 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_GoalType_25, ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  TypeCtorInfo_29_29 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1;
                  {
                    TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (TypeCtorInfo_29_29));
                    MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_GoalType_25));
                  }
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, (MR_Word) ArgX7_15, (MR_Word) ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_GoalType_25, ArgX8_17, ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                        succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(ArgX10_21, ArgY10_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Float ArgY5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Float ArgX7_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Float ArgY7_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Float ArgX8_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Float ArgY8_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Float ArgX9_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Float ArgY9_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                      succeeded = (ArgX9_19 == ArgY9_20);
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &mdbcomp__feedback__automatic_parallelism_scalar_common_1[4];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String ArgY2_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_12, Var_18, ArgY1_9);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY2_11);
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_20 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_21 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_20 == CastY_21);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_24, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_25, ArgY1_13);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(
  MR_Word PEM_3)
{
  {
    MR_Float HeadVar__2_2;
    MR_Float SparkCosts_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 3)));
    MR_Float BarrierCosts_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 4)));
    MR_Float SignalCosts_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 5)));
    MR_Float WaitCosts_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 6)));
    MR_Float Var_13;
    MR_Float Var_14 = (SparkCosts_4 + BarrierCosts_5);
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 0)));
    MR_Float Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 1)));
    MR_Float Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 2)));
    MR_Float Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 7)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 8)));

    Var_13 = (Var_14 + SignalCosts_6);
    HeadVar__2_2 = (Var_13 + WaitCosts_7);
    return HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_f_0(
  MR_Word PEM_3)
{
  {
    MR_Float HeadVar__2_2;
    MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 1)));
    MR_Float Overheads_5;
    MR_Float SparkCosts_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 3)));
    MR_Float BarrierCosts_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 4)));
    MR_Float SignalCosts_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 5)));
    MR_Float WaitCosts_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 6)));
    MR_Float Var_24;
    MR_Float Var_25 = (SparkCosts_15 + BarrierCosts_16);
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 0)));
    MR_Float Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 2)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 7)));
    MR_Float Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 8)));

    Var_24 = (Var_25 + SignalCosts_17);
    Overheads_5 = (Var_24 + WaitCosts_18);
    HeadVar__2_2 = (SeqTime_4 + Overheads_5);
    return HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(
  MR_Word PEM_3)
{
  {
    MR_Float HeadVar__2_2;
    MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 1)));
    MR_Float ParTime_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 0)));
    MR_Float Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 3)));
    MR_Float Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 4)));
    MR_Float Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 5)));
    MR_Float Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 6)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 7)));
    MR_Float Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 8)));

    HeadVar__2_2 = (SeqTime_4 - ParTime_5);
    return HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(
  MR_Word PEM_3)
{
  {
    MR_Float HeadVar__2_2;
    MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 1)));
    MR_Float ParTime_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 0)));
    MR_Float Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 3)));
    MR_Float Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 4)));
    MR_Float Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 5)));
    MR_Float Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 6)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 7)));
    MR_Float Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_3, (MR_Integer) 8)));

    HeadVar__2_2 = mercury__float__f_slash_2_f_0(SeqTime_4, ParTime_5);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_p_0(
  MR_Word TypeInfo_for_A_7,
  MR_Word TypeInfo_for_B_8,
  MR_Word Conv_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Conjs0_5 = (MR_Word) HeadVar__2_2;
    MR_Word Conjs_6;

    mercury__list__map_3_p_0(TypeInfo_for_A_7, TypeInfo_for_B_8, Conv_4, Conjs0_5, &Conjs_6);
    *HeadVar__3_3 = (MR_Word) Conjs_6;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__388__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), wrapper_arg_1, wrapper_arg_2);
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word Conv0_4,
  MR_Word CPC0_5,
  MR_Word * CPC_6)
{
  {
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_String GoalPath_7 = ((MR_String) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 0)));
    MR_Word MaybePushGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 1)));
    MR_Integer FirstGoalNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 2)));
    MR_Word IsDependent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 3)));
    MR_Word GoalsBefore0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 4)));
    MR_Float GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 5)));
    MR_Word Conjs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 6)));
    MR_Word GoalsAfter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 7)));
    MR_Float GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 8)));
    MR_Word Metrics_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPC0_5, (MR_Integer) 9)));
    MR_Word Conv_17;
    MR_Word Conjs_20;
    MR_Word GoalsBefore_21;
    MR_Word GoalsAfter_22;
    MR_Word Var_25;
    MR_Word conv1_Conjs_20;

    {
      Conv_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Conv_17, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Conv_17, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_1));
      MR_hl_field(MR_mktag(0), Conv_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Conv_17, 3) = ((MR_Box) (TypeInfo_for_A_28));
      MR_hl_field(MR_mktag(0), Conv_17, 4) = ((MR_Box) (TypeInfo_for_B_29));
      MR_hl_field(MR_mktag(0), Conv_17, 5) = ((MR_Box) (Conv0_4));
      MR_hl_field(MR_mktag(0), Conv_17, 6) = ((MR_Box) (CPC0_5));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TypeInfo_for_A_28));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeInfo_for_B_29));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Conv_17));
    }
    TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1;
    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_A_28));
    }
    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_B_29));
    }
    mercury__list__map_3_p_0(TypeInfo_33_33, TypeInfo_34_34, (MR_Word) Var_25, (MR_Word) Conjs0_13, &conv1_Conjs_20);
    Conjs_20 = (MR_Word) conv1_Conjs_20;
    mercury__list__map_3_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, Conv_17, GoalsBefore0_11, &GoalsBefore_21);
    mercury__list__map_3_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, Conv_17, GoalsAfter0_14, &GoalsAfter_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *CPC_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalPath_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePushGoal_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FirstGoalNum_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IsDependent_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (GoalsBefore_21));
      MR_hl_field(MR_mktag(0), base, 5) = MR_box_float(GoalsBeforeCost_12);
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Conjs_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (GoalsAfter_22));
      MR_hl_field(MR_mktag(0), base, 8) = MR_box_float(GoalsAfterCost_15);
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Metrics_16));
    }
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_CPC_6;

    mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_CPC_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_CPC_6));
  }
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0(
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_B_13,
  MR_Word Conv_4,
  MR_Word CPCProcA_5,
  MR_Word * CPCProcB_6)
{
  {
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word VarTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPCProcA_5, (MR_Integer) 0)));
    MR_Word PushGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPCProcA_5, (MR_Integer) 1)));
    MR_Word CPCA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CPCProcA_5, (MR_Integer) 2)));
    MR_Word CPCB_10;
    MR_Word Var_11;
    MR_Word conv1_CPCB_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_A_12));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (TypeInfo_for_B_13));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Conv_4));
    }
    TypeCtorInfo_16_16 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_A_12));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_B_13));
    }
    mercury__list__map_3_p_0(TypeInfo_17_17, TypeInfo_18_18, (MR_Word) Var_11, (MR_Word) CPCA_9, &conv1_CPCB_10);
    CPCB_10 = (MR_Word) conv1_CPCB_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *CPCProcB_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarTable_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PushGoals_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CPCB_10));
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____stat_measure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____stat_measure_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____stat_measure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__feedback__automatic_parallelism____Compare____stat_measure_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdbcomp__feedback__automatic_parallelism__init(void)
{
}

void mercury__mdbcomp__feedback__automatic_parallelism__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0);
}

void mercury__mdbcomp__feedback__automatic_parallelism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__feedback__automatic_parallelism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdbcomp.feedback.automatic_parallelism. */
