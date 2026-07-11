/*
** Automatically generated from `feedback.automatic_parallelism.m'
** by the Mercury compiler,
** version rotd-2026-07-11
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mdbcomp.feedback.automatic_parallelism.
// :- implementation.

/*
INIT mercury__mdbcomp__feedback__automatic_parallelism__init
ENDINIT
*/

#include "mdbcomp.feedback.automatic_parallelism.mih"


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
#include "float.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"




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

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_candidate_par_conjunctions_params_0_0[13];

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

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_cost_above_par_threshold_0[2];

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

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_parallelise_dep_conjs_0_1[1];

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

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_pard_goal_annotation_0_0[4];

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

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_speedup_estimate_alg_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0[2];

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0[2];

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__403__1_6_p_0(
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


static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_1[7][2];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_2[1][3];

static /* final */ const MR_Integer mdbcomp__feedback__automatic_parallelism_scalar_common_3[1][3];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_4[2][8];

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_5[1][9];




static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_2[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Integer mdbcomp__feedback__automatic_parallelism_scalar_common_3[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdbcomp__feedback__automatic_parallelism_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdbcomp__feedback__automatic_parallelism____vpti_pred_3__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_2 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_VA_PseudoTypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_2 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0 = {
  (MR_String) "affbp_complete_branches",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1 = {
  (MR_String) "affbp_complete_size",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_alg_for_finding_best_par_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2 = {
  (MR_String) "affbp_complete",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3 = {
  (MR_String) "affbp_greedy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_0[2] = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_2,
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_3
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_2[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_alg_for_finding_best_par_0_1 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_alg_for_finding_best_par_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_alg_for_finding_best_par_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "alg_for_finding_best_par",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_alg_for_finding_best_par_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_alg_for_finding_best_par_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_alg_for_finding_best_par_0,

};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0 = {
  (MR_String) "unknown_callee",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1[2] = {
  (MR_String) "nc_module_name",
  (MR_String) "nc_proc_name"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1 = {
  (MR_String) "named_callee",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "callee_rep",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0[10] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0)
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
  INT16_C(10),
  UINT16_C(208),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunction",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1,

};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0[13] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0)
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

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_candidate_par_conjunctions_params_0_0[13] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0 = {
  (MR_String) "candidate_par_conjunctions_params",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_candidate_par_conjunctions_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_params",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1)
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0[3] = {
  (MR_String) "cpcp_var_table",
  (MR_String) "cpcp_push_goals",
  (MR_String) "cpcp_par_conjs"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0 = {
  (MR_String) "candidate_par_conjunctions_proc",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_proc",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "candidate_par_conjunctions_proc",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0 = {
  (MR_String) "conjuncts_are_dependent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1 = {
  (MR_String) "conjuncts_are_independent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1 };

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "conjuncts_are_dependent",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0,

};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0 = {
  (MR_String) "cost_above_par_threshold",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1 = {
  (MR_String) "cost_not_above_par_threshold",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_cost_above_par_threshold_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "cost_above_par_threshold",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_cost_above_par_threshold_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0,

};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
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
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "parallel_exec_metrics",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0,

};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0 = {
  (MR_String) "do_not_parallelise_dep_conjs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0) };

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_parallelise_dep_conjs_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1 = {
  (MR_String) "parallelise_dep_conjs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1,
  NULL,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_parallelise_dep_conjs_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "parallelise_dep_conjs",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "pard_goal",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__automatic_parallelism__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0[4] = {
  (MR_String) "pga_cost_percall",
  (MR_String) "pga_coat_above_threshold",
  (MR_String) "pga_var_productions",
  (MR_String) "pga_var_consumptions"
};

static const MR_DuArgLocn mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_pard_goal_annotation_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0 = {
  (MR_String) "pard_goal_annotation",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_locns_pard_goal_annotation_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "pard_goal_annotation",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__automatic_parallelism__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0[4] = {
  (MR_String) "pg_goal_path",
  (MR_String) "pg_pushee_lo",
  (MR_String) "pg_pushee_hi",
  (MR_String) "pg_pushed_into"
};

static const MR_DuFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0 = {
  (MR_String) "push_goal",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0,
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0 };

static const MR_DuPtagLayout mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0[1] = { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0 };

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "push_goal",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0,

};

static const MR_Integer mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 = {
  (MR_String) "seq_conj",
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__list__pti_list_1__pseudo_1),
  (MR_String) "sc_conjs",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "seq_conj",
  { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
  { &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1,

};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0 = {
  (MR_String) "estimate_speedup_naively",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1 = {
  (MR_String) "estimate_speedup_by_overlap",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_speedup_estimate_alg_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0_10001)),
  (MR_String) "mdbcomp.feedback.automatic_parallelism",
  (MR_String) "speedup_estimate_alg",
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0 },
  { mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__enum_ordinal_ordered_speedup_estimate_alg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0,

};

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__403__1_6_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word Conv0_4,
  MR_Word CPC0_5,
  MR_Box LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Conv0_4, 1))));

  func_0(((MR_Box) (Conv0_4)), ((MR_Box) (CPC0_5)), LambdaHeadVar__1_23, LambdaHeadVar__2_24);
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0(
  MR_Word TypeInfo_for_GoalType_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0(
  MR_Word TypeInfo_for_GoalType_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_GoalType_7, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 0)));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[2]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0(
  MR_Word TypeInfo_for_GoalType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word TypeInfo_18_18;

        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1));
          MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_GoalType_14));
        }
        mercury__list____Compare____list_1_0(TypeInfo_18_18, HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0(
  MR_Word TypeInfo_for_GoalType_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeCtorInfo_14_14 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1);
        {
          TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
          MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_GoalType_11));
        }
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_15_15, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 0)));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Float ArgX11_34 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 10)));
    MR_Float ArgY11_35 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 10)));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_57 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_58 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_57 < Var_58);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_57 > Var_58);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                            mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(HeadVar__1_1, ArgX13_40, ArgY13_41);
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
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Float ArgX11_23 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 10)));
    MR_Float ArgY11_24 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 10)));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));

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

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0(
  MR_Word TypeInfo_for_GoalType_35,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
    MR_Float ArgY6_20 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 5)));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Float ArgX9_28 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 8)));
    MR_Float ArgY9_29 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 8)));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_35, &SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Word TypeInfo_44_44;

                {
                  TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_44_44, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1));
                  MR_hl_field(0, TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_GoalType_35));
                }
                mercury__list____Compare____list_1_0(TypeInfo_44_44, &SubResult7_24, (MR_Word) (ArgX7_22), (MR_Word) (ArgY7_23));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__list____Compare____list_1_0(TypeInfo_for_GoalType_35, &SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(HeadVar__1_1, ArgX10_31, ArgY10_32);
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
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 1)));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Float ArgX5_16 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 4)));
    MR_Float ArgY5_17 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 4)));
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
    MR_Float ArgY6_20 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 5)));
    MR_Float ArgX7_22 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 6)));
    MR_Float ArgY7_23 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 6)));
    MR_Float ArgX8_25 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 7)));
    MR_Float ArgY8_26 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 7)));
    MR_Float ArgX9_28 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 8)));
    MR_Float ArgY9_29 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 8)));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX9_28, ArgY9_29);
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
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0(
  MR_Word TypeInfo_for_GoalType_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 5)));
    MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Float ArgX9_19 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 8)));
    MR_Float ArgY9_20 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 8)));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[0]);
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
                TypeCtorInfo_29_29 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1);
                {
                  TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (TypeCtorInfo_29_29));
                  MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_GoalType_25));
                }
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, (MR_Word) (ArgX7_15), (MR_Word) (ArgY7_16));
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

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 1)));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 4)));
    MR_Float ArgY5_12 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 4)));
    MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 5)));
    MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
    MR_Float ArgX7_15 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 6)));
    MR_Float ArgY7_16 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 6)));
    MR_Float ArgX8_17 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 7)));
    MR_Float ArgY8_18 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 7)));
    MR_Float ArgX9_19 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 8)));
    MR_Float ArgY9_20 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 8)));

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

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&mdbcomp__feedback__automatic_parallelism_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_p_0(
  MR_Word TypeInfo_for_A_7,
  MR_Word TypeInfo_for_B_8,
  MR_Word Conv_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Conjs0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Conjs_6;

  mercury__list__map_3_p_0(TypeInfo_for_A_7, TypeInfo_for_B_8, Conv_4, Conjs0_5, &Conjs_6);
  *HeadVar__3_3 = (MR_Word) (Conjs_6);
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__403__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), wrapper_arg_1, wrapper_arg_2);
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word Conv0_4,
  MR_Word CPC0_5,
  MR_Word * CPC_6)
{
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_34_34;
  MR_String GoalPath_7 = ((MR_String) ((MR_hl_field(0, CPC0_5, 0))));
  MR_Word MaybePushGoal_8 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 1))));
  MR_Integer FirstGoalNum_9 = ((MR_Integer) ((MR_hl_field(0, CPC0_5, 2))));
  MR_Word IsDependent_10 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 3))));
  MR_Word GoalsBefore0_11 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 4))));
  MR_Float GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(0, CPC0_5, 5)));
  MR_Word Conjs0_13 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 6))));
  MR_Word GoalsAfter0_14 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 7))));
  MR_Float GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(0, CPC0_5, 8)));
  MR_Word Metrics_16 = ((MR_Word) ((MR_hl_field(0, CPC0_5, 9))));
  MR_Word Conv_17;
  MR_Word Conjs_20;
  MR_Word GoalsBefore_21;
  MR_Word GoalsAfter_22;
  MR_Word Var_25;
  MR_Word conv1_Conjs_20;

  {
    Conv_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Conv_17, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_5[0]));
    MR_hl_field(0, Conv_17, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_1));
    MR_hl_field(0, Conv_17, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Conv_17, 3) = ((MR_Box) (TypeInfo_for_A_28));
    MR_hl_field(0, Conv_17, 4) = ((MR_Box) (TypeInfo_for_B_29));
    MR_hl_field(0, Conv_17, 5) = ((MR_Box) (Conv0_4));
    MR_hl_field(0, Conv_17, 6) = ((MR_Box) (CPC0_5));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_4[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeInfo_for_A_28));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (TypeInfo_for_B_29));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (Conv_17));
  }
  {
    TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1));
    MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_A_28));
  }
  {
    TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1));
    MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_B_29));
  }
  mercury__list__map_3_p_0(TypeInfo_33_33, TypeInfo_34_34, (MR_Word) (Var_25), (MR_Word) (Conjs0_13), &conv1_Conjs_20);
  Conjs_20 = (MR_Word) (conv1_Conjs_20);
  mercury__list__map_3_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, Conv_17, GoalsBefore0_11, &GoalsBefore_21);
  mercury__list__map_3_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, Conv_17, GoalsAfter0_14, &GoalsAfter_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *CPC_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalPath_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybePushGoal_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (FirstGoalNum_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (IsDependent_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (GoalsBefore_21));
    MR_hl_field(0, base, 5) = MR_box_float(GoalsBeforeCost_12);
    MR_hl_field(0, base, 6) = ((MR_Box) (Conjs_20));
    MR_hl_field(0, base, 7) = ((MR_Box) (GoalsAfter_22));
    MR_hl_field(0, base, 8) = MR_box_float(GoalsAfterCost_15);
    MR_hl_field(0, base, 9) = ((MR_Box) (Metrics_16));
  }
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_CPC_6;

  mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_CPC_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_CPC_6));
}

void MR_CALL 
mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0(
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_B_13,
  MR_Word Conv_4,
  MR_Word CPCProcA_5,
  MR_Word * CPCProcB_6)
{
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word VarTable_7 = ((MR_Word) ((MR_hl_field(0, CPCProcA_5, 0))));
  MR_Word PushGoals_8 = ((MR_Word) ((MR_hl_field(0, CPCProcA_5, 1))));
  MR_Word CPCA_9 = ((MR_Word) ((MR_hl_field(0, CPCProcA_5, 2))));
  MR_Word CPCB_10;
  MR_Word Var_11;
  MR_Word conv1_CPCB_10;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (TypeInfo_for_A_12));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (TypeInfo_for_B_13));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (Conv_4));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_A_12));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_B_13));
  }
  mercury__list__map_3_p_0(TypeInfo_17_17, TypeInfo_18_18, (MR_Word) (Var_11), (MR_Word) (CPCA_9), &conv1_CPCB_10);
  CPCB_10 = (MR_Word) (conv1_CPCB_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *CPCProcB_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (PushGoals_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (CPCB_10));
  }
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(
  MR_Word PEM_3)
{
  MR_Float HeadVar__2_2;
  MR_Float SparkCosts_4 = MR_unbox_float((MR_hl_field(0, PEM_3, 3)));
  MR_Float BarrierCosts_5 = MR_unbox_float((MR_hl_field(0, PEM_3, 4)));
  MR_Float SignalCosts_6 = MR_unbox_float((MR_hl_field(0, PEM_3, 5)));
  MR_Float WaitCosts_7 = MR_unbox_float((MR_hl_field(0, PEM_3, 6)));
  MR_Float Var_13;
  MR_Float Var_14 = (SparkCosts_4 + BarrierCosts_5);

  Var_13 = (Var_14 + SignalCosts_6);
  HeadVar__2_2 = (Var_13 + WaitCosts_7);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_f_0(
  MR_Word PEM_3)
{
  MR_Float HeadVar__2_2;
  MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(0, PEM_3, 1)));
  MR_Float Overheads_5;
  MR_Float SparkCosts_14 = MR_unbox_float((MR_hl_field(0, PEM_3, 3)));
  MR_Float BarrierCosts_15 = MR_unbox_float((MR_hl_field(0, PEM_3, 4)));
  MR_Float SignalCosts_16 = MR_unbox_float((MR_hl_field(0, PEM_3, 5)));
  MR_Float WaitCosts_17 = MR_unbox_float((MR_hl_field(0, PEM_3, 6)));
  MR_Float Var_23;
  MR_Float Var_24 = (SparkCosts_14 + BarrierCosts_15);

  Var_23 = (Var_24 + SignalCosts_16);
  Overheads_5 = (Var_23 + WaitCosts_17);
  HeadVar__2_2 = (SeqTime_4 + Overheads_5);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(
  MR_Word PEM_3)
{
  MR_Float HeadVar__2_2;
  MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(0, PEM_3, 1)));
  MR_Float ParTime_5 = MR_unbox_float((MR_hl_field(0, PEM_3, 2)));

  HeadVar__2_2 = (SeqTime_4 - ParTime_5);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(
  MR_Word PEM_3)
{
  MR_Float HeadVar__2_2;
  MR_Float SeqTime_4 = MR_unbox_float((MR_hl_field(0, PEM_3, 1)));
  MR_Float ParTime_5 = MR_unbox_float((MR_hl_field(0, PEM_3, 2)));

  HeadVar__2_2 = mercury__float__f_slash_2_f_0(SeqTime_4, ParTime_5);
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____alg_for_finding_best_par_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____alg_for_finding_best_par_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____callee_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____callee_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunction_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunction_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____cost_above_par_threshold_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____cost_above_par_threshold_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallelise_dep_conjs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____parallelise_dep_conjs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____pard_goal_annotation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____pard_goal_annotation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____push_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____push_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____seq_conj_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____seq_conj_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback__automatic_parallelism____Unify____speedup_estimate_alg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback__automatic_parallelism____Compare____speedup_estimate_alg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdbcomp.feedback.automatic_parallelism.
