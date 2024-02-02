/*
** Automatically generated from `introduce_parallelism.m'
** by the Mercury compiler,
** version rotd-2024-02-02
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


// :- module transform_hlds.implicit_parallelism.introduce_parallelism.
// :- implementation.

/*
INIT mercury__transform_hlds__implicit_parallelism__introduce_parallelism__init
ENDINIT
*/

#include "transform_hlds.implicit_parallelism.introduce_parallelism.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.implicit_parallelism.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.implicit_parallelism.push_goals_together.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_find_first_goal_result_0_1[3];

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_find_first_goal_result_0_1[3];

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_find_first_goal_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_find_first_goal_result_0[2];

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_find_first_goal_result_0[2];

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_intra_module_proc_label_0_0[4];

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_intra_module_proc_label_0_0[4];

static const MR_DuArgLocn transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_locns_intra_module_proc_label_0_0[4];

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_intra_module_proc_label_0_0;

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_intra_module_proc_label_0_0[1];

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_intra_module_proc_label_0[1];

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_intra_module_proc_label_0[1];

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_intra_module_proc_label_0[1];

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_0;

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_ordinal_ordered_introduced_parallelism_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_name_ordered_introduced_parallelism_0[2];

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_introduced_parallelism_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__ti_tree234_2transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_par_conjunction_and_remaining_goals_0_0[2];

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_par_conjunction_and_remaining_goals_0_0[2];

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_par_conjunction_and_remaining_goals_0_0;

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_par_conjunction_and_remaining_goals_0_0[1];

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_par_conjunction_and_remaining_goals_0[1];

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_par_conjunction_and_remaining_goals_0[1];

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_par_conjunction_and_remaining_goals_0[1];

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_parallelism_info_0_0[2];

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_parallelism_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_parallelism_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_parallelism_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_parallelism_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_parallelism_info_0[1];

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_parallelism_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static MR_Word MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__IntroducedFrom__func__maybe_parallelise_conj__355__1_1_f_0(
  MR_Word LambdaHeadVar__1_34);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__compare_candidate_par_conjunctions_3_p_0(
  MR_Word CPCA_4,
  MR_Word CPCB_5,
  MR_Word * Result_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__compare_goal_paths_3_p_0(
  MR_Word PathA_4,
  MR_Word PathB_5,
  MR_Word * Result_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0(
  MR_Word ProgRepInfo_7,
  MR_Word VarNameTable_8,
  MR_Word CPC_9,
  MR_Word Instmap0_10,
  MR_Word Goal0_11,
  MR_Word * MaybeGoal_12);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjunction_6_p_0(
  MR_Word ProcRepInfo_7,
  MR_Word VarNameTable_8,
  MR_Word Instmap0_9,
  MR_Word STATE_VARIABLE_Goals_0_26,
  MR_Word CPC_11,
  MR_Word * MaybeParConjunction_12);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjuncts_8_p_0(
  MR_Word ProcRepInfo_1,
  MR_Word VarNameTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Goals_0_5,
  MR_Word * STATE_VARIABLE_Goals_6,
  MR_Word STATE_VARIABLE_Instmap_0_7,
  MR_Word * STATE_VARIABLE_Instmap_8);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(
  MR_Word ProcRepInfo_1,
  MR_Word VarNameTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Goals_0_5,
  MR_Word * STATE_VARIABLE_Goals_6,
  MR_Word STATE_VARIABLE_Instmap_0_7,
  MR_Word * STATE_VARIABLE_Instmap_8);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__find_first_goal_6_p_0(
  MR_Word GoalRep_1,
  MR_Word HeadVar__2_2,
  MR_Word ProcRepInfo_3,
  MR_Word VarNameTable_4,
  MR_Word STATE_VARIABLE_Instmap_0_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(
  MR_Word TypeInfo_for_A_45,
  MR_Word TypeInfo_for_B_46,
  MR_Word VarNameTable_4,
  MR_Word GoalA_5,
  MR_Word GoalB_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_52_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__atomic_goal_reps_match_3_p_0(
  MR_Word VarNameTable_4,
  MR_Word AtomicRepA_5,
  MR_Word AtomicRepB_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__var_reps_match_3_p_0(
  MR_Word VarNameTable_4,
  MR_Integer VarA_5,
  MR_Integer VarB_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0(
  MR_Word PredInfo_12,
  MR_Word ProgRepInfo_13,
  MR_Word VarNameTable_14,
  MR_Word Instmap0_15,
  MR_Word CPC_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_IntroducedParallelism_0_26,
  MR_Word * STATE_VARIABLE_IntroducedParallelism_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_proc_12_p_0(
  MR_Word ParallelismInfo_13,
  MR_Word PredInfo_14,
  MR_Word _PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcTable_0_33,
  MR_Word * STATE_VARIABLE_ProcTable_34,
  MR_Word STATE_VARIABLE_AnyProcIntroducedParallelism_0_35,
  MR_Word * STATE_VARIABLE_AnyProcIntroducedParallelism_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0(
  MR_Word ParallelismInfo_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcTable_0_33,
  MR_Word * STATE_VARIABLE_ProcTable_34,
  MR_Word STATE_VARIABLE_AnyProcIntroducedParallelism_0_35,
  MR_Word * STATE_VARIABLE_AnyProcIntroducedParallelism_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0(
  MR_Word ParallelismInfo_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_PredIdTable_0_23,
  MR_Word * STATE_VARIABLE_PredIdTable_24,
  MR_Word STATE_VARIABLE_AnyPredIntroducedParallelism_0_25,
  MR_Word * STATE_VARIABLE_AnyPredIntroducedParallelism_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__cpc_proc_is_in_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[8][3];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[26][2];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_5[1][13];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_6[1][15];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_7[1][14];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_9[1][5];




static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conjunctions feedback information."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "feedback file does not have the candidate parallel"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Implicit parallelism was requested but the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: could not auto-parallelise"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conjunctions, it will not be automatically parallelised."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: this procedure contains explicit parallel"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[17])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not find goal in procedure; perhaps the program has changed"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[15])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[24])))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "The goals before the parallel conjunction do not match those in the feedback file")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "The goals within the parallel conjunction do not match those in the feedback file")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "The goals after the parallel conjunction do not match those in the feedback file")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "Could not find partition within conjunction: perhaps the program has changed")) },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_parallelism_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_6[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_parallelism_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_9[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  { (MR_TypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__pair__pti_pair_2__plain_transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0),
    (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  { (MR_TypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_candidate_par_conjunction_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "candidate_par_conjunction",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_0 = {
  (MR_String) "did_not_find_first_goal",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_find_first_goal_result_0_1[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_find_first_goal_result_0_1[3] = {
  (MR_String) "ffg_goals_before",
  (MR_String) "ffg_goal",
  (MR_String) "ffg_goals_after"
};

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_1 = {
  (MR_String) "found_first_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_find_first_goal_result_0_1,
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_find_first_goal_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_1[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_1 };

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_find_first_goal_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_find_first_goal_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_find_first_goal_result_0[2] = {
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_0,
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_find_first_goal_result_0_1
};

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_find_first_goal_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_find_first_goal_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "find_first_goal_result",
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_find_first_goal_result_0 },
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_find_first_goal_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_find_first_goal_result_0,

};

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_intra_module_proc_label_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_intra_module_proc_label_0_0[4] = {
  (MR_String) "im_pred_name",
  (MR_String) "im_arity",
  (MR_String) "im_pred_or_func",
  (MR_String) "im_mode"
};

static const MR_DuArgLocn transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_locns_intra_module_proc_label_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_intra_module_proc_label_0_0 = {
  (MR_String) "intra_module_proc_label",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_intra_module_proc_label_0_0,
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_intra_module_proc_label_0_0,
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_locns_intra_module_proc_label_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_intra_module_proc_label_0_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_intra_module_proc_label_0_0 };

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_intra_module_proc_label_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_intra_module_proc_label_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_intra_module_proc_label_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_intra_module_proc_label_0_0 };

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_intra_module_proc_label_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "intra_module_proc_label",
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_intra_module_proc_label_0 },
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_intra_module_proc_label_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_intra_module_proc_label_0,

};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_0 = {
  (MR_String) "have_not_introduced_parallelism",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_1 = {
  (MR_String) "introduced_parallelism",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_ordinal_ordered_introduced_parallelism_0[2] = {
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_0,
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_name_ordered_introduced_parallelism_0[2] = {
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_0,
  &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_functor_desc_introduced_parallelism_0_1
};

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_introduced_parallelism_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "introduced_parallelism",
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_name_ordered_introduced_parallelism_0 },
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__enum_ordinal_ordered_introduced_parallelism_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_introduced_parallelism_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__implicit_parallelism__introduce_parallelism__tree234__ti_tree234_2transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0),
    (MR_TypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_module_candidate_par_conjs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "module_candidate_par_conjs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__ti_tree234_2transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_par_conjunction_and_remaining_goals_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_par_conjunction_and_remaining_goals_0_0[2] = {
  (MR_String) "pcrg_par_conjunction",
  (MR_String) "pcrg_remaining_goals"
};

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_par_conjunction_and_remaining_goals_0_0 = {
  (MR_String) "par_conjunction_and_remaining_goals",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_par_conjunction_and_remaining_goals_0_0,
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_par_conjunction_and_remaining_goals_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_par_conjunction_and_remaining_goals_0_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_par_conjunction_and_remaining_goals_0_0 };

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_par_conjunction_and_remaining_goals_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_par_conjunction_and_remaining_goals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_par_conjunction_and_remaining_goals_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_par_conjunction_and_remaining_goals_0_0 };

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_par_conjunction_and_remaining_goals_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_par_conjunction_and_remaining_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "par_conjunction_and_remaining_goals",
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_par_conjunction_and_remaining_goals_0 },
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_par_conjunction_and_remaining_goals_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_par_conjunction_and_remaining_goals_0,

};

static const MR_PseudoTypeInfo transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_parallelism_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0),
  (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__tree234__ti_tree234_2transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
};

static const MR_ConstString transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_parallelism_info_0_0[2] = {
  (MR_String) "pi_parameters",
  (MR_String) "pi_cpc_map"
};

static const MR_DuFunctorDesc transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_parallelism_info_0_0 = {
  (MR_String) "parallelism_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_types_parallelism_info_0_0,
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__field_names_parallelism_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_parallelism_info_0_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_parallelism_info_0_0 };

static const MR_DuPtagLayout transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_parallelism_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_stag_ordered_parallelism_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_parallelism_info_0[1] = { &transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_functor_desc_parallelism_info_0_0 };

static const MR_Integer transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_parallelism_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_parallelism_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "parallelism_info",
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_name_ordered_parallelism_info_0 },
  { transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__du_ptag_ordered_parallelism_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__functor_number_map_parallelism_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_TypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_seq_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.introduce_parallelism",
  (MR_String) "seq_conj",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__implicit_parallelism__introduce_parallelism__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__IntroducedFrom__func__maybe_parallelise_conj__355__1_1_f_0(
  MR_Word LambdaHeadVar__1_34)
{
  MR_Word LambdaHeadVar__2_35;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_34, (MR_Integer) 1))));

  LambdaHeadVar__2_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_36);
  return LambdaHeadVar__2_35;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0(
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

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]), &SubResult1_12, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_11)));
      succeeded = (SubResult1_12 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_12;
      else
      {
        MR_Word SubResult2_15;

        hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult2_15, Var_24, ArgY2_14);
        succeeded = (SubResult2_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_15;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_17)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__compare_candidate_par_conjunctions_3_p_0(
  MR_Word CPCA_4,
  MR_Word CPCB_5,
  MR_Word * Result_6)
{
  MR_Word PathA_7;
  MR_Word PathB_8;
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, CPCA_4, (MR_Integer) 0))));
  MR_String Var_10;

  mdbcomp__goal_path__goal_path_from_string_det_2_p_0(Var_9, &PathA_7);
  Var_10 = ((MR_String) ((MR_hl_field(0, CPCB_5, (MR_Integer) 0))));
  mdbcomp__goal_path__goal_path_from_string_det_2_p_0(Var_10, &PathB_8);
  transform_hlds__implicit_parallelism__introduce_parallelism__compare_goal_paths_3_p_0(PathA_7, PathB_8, Result_6);
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__compare_goal_paths_3_p_0(
  MR_Word PathA_4,
  MR_Word PathB_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((PathA_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((PathB_5 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_6 = (MR_Integer) 0;
      else
        *Result_6 = (MR_Integer) 2;
    else
    {
      MR_Word FirstStepA_7 = ((MR_Word) ((MR_hl_field(1, PathA_4, (MR_Integer) 0))));
      MR_Word LaterPathA_8 = ((MR_Word) ((MR_hl_field(1, PathA_4, (MR_Integer) 1))));

      if ((PathB_5 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_6 = (MR_Integer) 1;
      else
      {
        MR_Word FirstStepB_9 = ((MR_Word) ((MR_hl_field(1, PathB_5, (MR_Integer) 0))));
        MR_Word LaterPathB_10 = ((MR_Word) ((MR_hl_field(1, PathB_5, (MR_Integer) 1))));
        MR_Word Result0_11;

        mdbcomp__goal_path____Compare____goal_path_step_0_0(&Result0_11, FirstStepA_7, FirstStepB_9);
        switch (Result0_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *Result_6 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_PathA_4 = LaterPathA_8;
              MR_Word next_value_of_PathB_5 = LaterPathB_10;

              // direct tailcall eliminated
              ;
              PathA_4 = next_value_of_PathA_4;
              PathB_5 = next_value_of_PathB_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            *Result_6 = (MR_Integer) 1;
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  hlds__instmap__apply_instmap_delta_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_35;

  conv0_LambdaHeadVar__2_35 = transform_hlds__implicit_parallelism__introduce_parallelism__IntroducedFrom__func__maybe_parallelise_conj__355__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0(
  MR_Word ProgRepInfo_7,
  MR_Word VarNameTable_8,
  MR_Word CPC_9,
  MR_Word Instmap0_10,
  MR_Word Goal0_11,
  MR_Word * MaybeGoal_12)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  MR_Word FirstGoalRep_15;
  MR_Word GoalsBefore_53 = ((MR_Word) ((MR_hl_field(0, CPC_9, (MR_Integer) 4))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, CPC_9, (MR_Integer) 6))));
  MR_Word GoalsBefore_18;
  MR_Word FirstGoal_19;
  MR_Word OtherGoals_20;
  MR_Word Conjs0_16;
  MR_Word Conjs1_17;
  MR_Word Var_31;
  MR_Word Var_32;

  if ((GoalsBefore_53 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word FirstGoalPrime_58;
    MR_Word FirstParConj_56;
    MR_Word Var_60;

    succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FirstParConj_56 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 0))));
      Var_60 = (MR_Word) (FirstParConj_56);
      succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        FirstGoalPrime_58 = ((MR_Word) ((MR_hl_field(1, Var_60, (MR_Integer) 0))));
    }
    if (succeeded)
      FirstGoalRep_15 = FirstGoalPrime_58;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.implicit_parallelism.introduce_parallelism.cpc_get_first_goal\'/2", (MR_String) "candidate parallel conjunction is empty");
        return;
      }
  }
  else
    FirstGoalRep_15 = ((MR_Word) ((MR_hl_field(1, GoalsBefore_53, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_31 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
    Conjs0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
    succeeded = (Var_31 == (MR_Integer) 0);
    if (succeeded)
    {
      hlds__goal_util__flatten_conj_2_p_0(Conjs0_16, &Conjs1_17);
      transform_hlds__implicit_parallelism__introduce_parallelism__find_first_goal_6_p_0(FirstGoalRep_15, Conjs1_17, ProgRepInfo_7, VarNameTable_8, Instmap0_10, &Var_32);
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        GoalsBefore_18 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
        FirstGoal_19 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
        OtherGoals_20 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 2))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word GoalsBeforeInstDeltas_21;
    MR_Word Instmap_23;
    MR_Word MaybeParConjunction_24;
    MR_Word Var_38;
    MR_Box conv2_Instmap_23;

    GoalsBeforeInstDeltas_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[6]), GoalsBefore_18);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[7]), GoalsBeforeInstDeltas_21, ((MR_Box) (Instmap0_10)), &conv2_Instmap_23);
    Instmap_23 = ((MR_Word) (conv2_Instmap_23));
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (FirstGoal_19));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (OtherGoals_20));
    }
    transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjunction_6_p_0(ProgRepInfo_7, VarNameTable_8, Instmap_23, Var_38, CPC_9, &MaybeParConjunction_24);
    if (((MR_tag((MR_Word) MaybeParConjunction_24)) == (MR_Integer) 1))
      *MaybeGoal_12 = (MR_Word) (MaybeParConjunction_24);
    else
    {
      MR_Word ParConjAndRemaining_25 = ((MR_Word) ((MR_hl_field(0, MaybeParConjunction_24, (MR_Integer) 0))));
      MR_Word ParConjunction_26 = ((MR_Word) ((MR_hl_field(0, ParConjAndRemaining_25, (MR_Integer) 0))));
      MR_Word RemainingGoals_27 = ((MR_Word) ((MR_hl_field(0, ParConjAndRemaining_25, (MR_Integer) 1))));
      MR_Word Conjuncts_28;
      MR_Word GoalExpr_29;
      MR_Word Var_39;
      MR_Word Var_41;

      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ParConjunction_26, RemainingGoals_27);
      Conjuncts_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsBefore_18, Var_39);
      {
        GoalExpr_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, GoalExpr_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, GoalExpr_29, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, GoalExpr_29, 2) = ((MR_Box) (Conjuncts_28));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (GoalExpr_29));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (GoalInfo0_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
      }
    }
  }
  else
    *MaybeGoal_12 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[4]));
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjunction_6_p_0(
  MR_Word ProcRepInfo_7,
  MR_Word VarNameTable_8,
  MR_Word Instmap0_9,
  MR_Word STATE_VARIABLE_Goals_0_26,
  MR_Word CPC_11,
  MR_Word * MaybeParConjunction_12)
{
  MR_Word GoalRepsBefore_13 = ((MR_Word) ((MR_hl_field(0, CPC_11, (MR_Integer) 4))));
  MR_Word GoalRepsAfter_14 = ((MR_Word) ((MR_hl_field(0, CPC_11, (MR_Integer) 7))));
  MR_Word ParConjReps_15 = ((MR_Word) ((MR_hl_field(0, CPC_11, (MR_Integer) 6))));
  MR_Word MaybeGoalsBefore_17;
  MR_Word MaybeParConjuncts_18;
  MR_Word MaybeGoalsAfter_19;
  MR_Word STATE_VARIABLE_Goals_28_28;
  MR_Word STATE_VARIABLE_Instmap_29_29;
  MR_Word STATE_VARIABLE_Goals_30_30;
  MR_Word STATE_VARIABLE_Instmap_31_31;
  MR_Word STATE_VARIABLE_Goals_32_32;
  MR_Word STATE_VARIABLE_Instmap_33_33;

  transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(ProcRepInfo_7, VarNameTable_8, GoalRepsBefore_13, &MaybeGoalsBefore_17, STATE_VARIABLE_Goals_0_26, &STATE_VARIABLE_Goals_28_28, Instmap0_9, &STATE_VARIABLE_Instmap_29_29);
  transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjuncts_8_p_0(ProcRepInfo_7, VarNameTable_8, ParConjReps_15, &MaybeParConjuncts_18, STATE_VARIABLE_Goals_28_28, &STATE_VARIABLE_Goals_30_30, STATE_VARIABLE_Instmap_29_29, &STATE_VARIABLE_Instmap_31_31);
  transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(ProcRepInfo_7, VarNameTable_8, GoalRepsAfter_14, &MaybeGoalsAfter_19, STATE_VARIABLE_Goals_30_30, &STATE_VARIABLE_Goals_32_32, STATE_VARIABLE_Instmap_31_31, &STATE_VARIABLE_Instmap_33_33);
  if ((MaybeGoalsBefore_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeParConjunction_12 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[1]));
  else
  {
    MR_Word GoalsBefore_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoalsBefore_17, (MR_Integer) 0))));

    if ((MaybeParConjuncts_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeParConjunction_12 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[2]));
    else
    {
      MR_Word ParConjuncts_22 = ((MR_Word) ((MR_hl_field(1, MaybeParConjuncts_18, (MR_Integer) 0))));

      if ((MaybeGoalsAfter_19 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeParConjunction_12 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[3]));
      else
      {
        MR_Word GoalsAfter_23 = ((MR_Word) ((MR_hl_field(1, MaybeGoalsAfter_19, (MR_Integer) 0))));
        MR_Word ParConjunction0_24;
        MR_Word ParConjunction_25;
        MR_Word Var_35;
        MR_Word Var_36;

        hlds__goal_util__create_conj_from_list_3_p_0(ParConjuncts_22, (MR_Integer) 1, &ParConjunction0_24);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (ParConjunction0_24));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (GoalsAfter_23));
        }
        ParConjunction_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsBefore_21, Var_35);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (ParConjunction_25));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (STATE_VARIABLE_Goals_32_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParConjunction_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjuncts_8_p_0(
  MR_Word ProcRepInfo_1,
  MR_Word VarNameTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Goals_0_5,
  MR_Word * STATE_VARIABLE_Goals_6,
  MR_Word STATE_VARIABLE_Instmap_0_7,
  MR_Word * STATE_VARIABLE_Instmap_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[0]));
    *STATE_VARIABLE_Instmap_8 = STATE_VARIABLE_Instmap_0_7;
    *STATE_VARIABLE_Goals_6 = STATE_VARIABLE_Goals_0_5;
  }
  else
  {
    MR_Word GoalRep_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word GoalReps_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SeqConjs_25 = (MR_Word) (GoalRep_20);
    MR_Word MaybeConj_26;
    MR_Word STATE_VARIABLE_Goals_35_35;
    MR_Word STATE_VARIABLE_Instmap_36_36;

    transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(ProcRepInfo_1, VarNameTable_2, SeqConjs_25, &MaybeConj_26, STATE_VARIABLE_Goals_0_5, &STATE_VARIABLE_Goals_35_35, STATE_VARIABLE_Instmap_0_7, &STATE_VARIABLE_Instmap_36_36);
    if ((MaybeConj_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Goals_6 = STATE_VARIABLE_Goals_35_35;
      *STATE_VARIABLE_Instmap_8 = STATE_VARIABLE_Instmap_36_36;
    }
    else
    {
      MR_Word Conj0_27 = ((MR_Word) ((MR_hl_field(1, MaybeConj_26, (MR_Integer) 0))));
      MR_Word Conj_28;
      MR_Word MaybeConjs0_29;

      hlds__goal_util__create_conj_from_list_3_p_0(Conj0_27, (MR_Integer) 0, &Conj_28);
      transform_hlds__implicit_parallelism__introduce_parallelism__build_par_conjuncts_8_p_0(ProcRepInfo_1, VarNameTable_2, GoalReps_21, &MaybeConjs0_29, STATE_VARIABLE_Goals_35_35, STATE_VARIABLE_Goals_6, STATE_VARIABLE_Instmap_36_36, STATE_VARIABLE_Instmap_8);
      if ((MaybeConjs0_29 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Conjs0_30 = ((MR_Word) ((MR_hl_field(1, MaybeConjs0_29, (MR_Integer) 0))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Conj_28));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Conjs0_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(
  MR_Word ProcRepInfo_1,
  MR_Word VarNameTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Goals_0_5,
  MR_Word * STATE_VARIABLE_Goals_6,
  MR_Word STATE_VARIABLE_Instmap_0_7,
  MR_Word * STATE_VARIABLE_Instmap_8)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_3[0]));
    *STATE_VARIABLE_Instmap_8 = STATE_VARIABLE_Instmap_0_7;
    *STATE_VARIABLE_Goals_6 = STATE_VARIABLE_Goals_0_5;
  }
  else
  {
    MR_Word GoalRep_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word GoalReps_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    if ((STATE_VARIABLE_Goals_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Goals_6 = STATE_VARIABLE_Goals_0_5;
      *STATE_VARIABLE_Instmap_8 = STATE_VARIABLE_Instmap_0_7;
    }
    else
    {
      MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Goals_0_5, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Goals_33_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Goals_0_5, (MR_Integer) 1))));
      MR_Word GoalRepB_40;

      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ProcRepInfo_1, STATE_VARIABLE_Instmap_0_7, Goal_25, &GoalRepB_40);
      succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), VarNameTable_2, GoalRep_20, GoalRepB_40);
      if (succeeded)
      {
        MR_Word InstmapDelta_26;
        MR_Word MaybeConjs0_27;
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Instmap_35_35;

        InstmapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_34);
        hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_26, STATE_VARIABLE_Instmap_0_7, &STATE_VARIABLE_Instmap_35_35);
        transform_hlds__implicit_parallelism__introduce_parallelism__build_seq_conjuncts_8_p_0(ProcRepInfo_1, VarNameTable_2, GoalReps_21, &MaybeConjs0_27, STATE_VARIABLE_Goals_33_33, STATE_VARIABLE_Goals_6, STATE_VARIABLE_Instmap_35_35, STATE_VARIABLE_Instmap_8);
        if ((MaybeConjs0_27 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Conjs0_28 = ((MR_Word) ((MR_hl_field(1, MaybeConjs0_27, (MR_Integer) 0))));
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (Goal_25));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Conjs0_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
          }
        }
      }
      else
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Instmap_8 = STATE_VARIABLE_Instmap_0_7;
        *STATE_VARIABLE_Goals_6 = STATE_VARIABLE_Goals_33_33;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__find_first_goal_6_p_0(
  MR_Word GoalRep_1,
  MR_Word HeadVar__2_2,
  MR_Word ProcRepInfo_3,
  MR_Word VarNameTable_4,
  MR_Word STATE_VARIABLE_Instmap_0_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalRepB_32;

    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ProcRepInfo_3, STATE_VARIABLE_Instmap_0_5, Goal_12, &GoalRepB_32);
    succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), VarNameTable_4, GoalRep_1, GoalRepB_32);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goal_12));
        MR_hl_field(1, base, 2) = ((MR_Box) (Goals_13));
      }
    else
    {
      MR_Word InstmapDelta_18;
      MR_Word Result0_19;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Instmap_26_26;

      InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_25);
      hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_18, STATE_VARIABLE_Instmap_0_5, &STATE_VARIABLE_Instmap_26_26);
      transform_hlds__implicit_parallelism__introduce_parallelism__find_first_goal_6_p_0(GoalRep_1, Goals_13, ProcRepInfo_3, VarNameTable_4, STATE_VARIABLE_Instmap_26_26, &Result0_19);
      if ((Result0_19 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word GoalsBefore0_20 = ((MR_Word) ((MR_hl_field(1, Result0_19, (MR_Integer) 0))));
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Result0_19, (MR_Integer) 1))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, Result0_19, (MR_Integer) 2))));
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Goal_12));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (GoalsBefore0_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_21));
          MR_hl_field(1, base, 2) = ((MR_Box) (Var_22));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(
  MR_Word TypeInfo_for_A_45,
  MR_Word TypeInfo_for_B_46,
  MR_Word VarNameTable_4,
  MR_Word GoalA_5,
  MR_Word GoalB_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalRepA_7 = ((MR_Word) ((MR_hl_field(0, GoalA_5, (MR_Integer) 0))));
    MR_Word Detism_8 = ((MR_Unsigned) ((MR_hl_field(0, GoalA_5, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word GoalRepB_10 = ((MR_Word) ((MR_hl_field(0, GoalB_6, (MR_Integer) 0))));
    MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(0, GoalB_6, (MR_Integer) 1))) & (MR_Integer) 7);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (Detism_8 == Var_62);
    if (succeeded)
      switch (MR_tag((MR_Word) GoalRepA_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConjsA_12 = ((MR_Word) ((MR_hl_field(0, GoalRepA_7, (MR_Integer) 0))));
            MR_Word ConjsB_13;

            succeeded = ((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              ConjsB_13 = ((MR_Word) ((MR_hl_field(0, GoalRepB_10, (MR_Integer) 0))));
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_52_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(TypeInfo_for_A_45, TypeInfo_for_B_46, VarNameTable_4, ConjsA_12, ConjsB_13);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DisjsA_14 = ((MR_Word) ((MR_hl_field(1, GoalRepA_7, (MR_Integer) 0))));
            MR_Word DisjsB_15;

            succeeded = ((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 1);
            if (succeeded)
            {
              DisjsB_15 = ((MR_Word) ((MR_hl_field(1, GoalRepB_10, (MR_Integer) 0))));
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_52_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(TypeInfo_for_A_45, TypeInfo_for_B_46, VarNameTable_4, DisjsA_14, DisjsB_15);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorInfo_57_57;
            MR_Word TypeInfo_58_58;
            MR_Word TypeInfo_59_59;
            MR_Integer VarRepA_16 = ((MR_Integer) ((MR_hl_field(2, GoalRepA_7, (MR_Integer) 0))));
            MR_Word CanFail_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalRepA_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word CasesA_18 = ((MR_Word) ((MR_hl_field(2, GoalRepA_7, (MR_Integer) 2))));
            MR_Integer VarRepB_19;
            MR_Word CasesB_20;
            MR_Word SortedCasesA_21;
            MR_Word SortedCasesB_22;
            MR_Word Var_63;
            MR_String Var_65;
            MR_Word conv0_SortedCasesA_21;

            succeeded = ((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 2);
            if (succeeded)
            {
              VarRepB_19 = ((MR_Integer) ((MR_hl_field(2, GoalRepB_10, (MR_Integer) 0))));
              Var_63 = ((MR_Unsigned) ((MR_hl_field(2, GoalRepB_10, (MR_Integer) 1))) & (MR_Integer) 1);
              CasesB_20 = ((MR_Word) ((MR_hl_field(2, GoalRepB_10, (MR_Integer) 2))));
              succeeded = (CanFail_17 == Var_63);
              if (succeeded)
              {
                succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarRepA_16, &Var_65);
                if (succeeded)
                  succeeded = (VarRepA_16 == VarRepB_19);
                else
                  succeeded = MR_TRUE;
                if (succeeded)
                {
                  TypeCtorInfo_57_57 = (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1);
                  {
                    TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_58_58, 0) = ((MR_Box) (TypeCtorInfo_57_57));
                    MR_hl_field(0, TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_for_A_45));
                  }
                  mercury__list__sort_2_p_0(TypeInfo_58_58, (MR_Word) (CasesA_18), &conv0_SortedCasesA_21);
                  SortedCasesA_21 = (MR_Word) (conv0_SortedCasesA_21);
                  {
                    TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_59_59, 0) = ((MR_Box) (TypeCtorInfo_57_57));
                    MR_hl_field(0, TypeInfo_59_59, 1) = ((MR_Box) (TypeInfo_for_B_46));
                  }
                  mercury__list__sort_2_p_0(TypeInfo_59_59, CasesB_20, &SortedCasesB_22);
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(TypeInfo_for_A_45, TypeInfo_for_B_46, VarNameTable_4, SortedCasesA_21, SortedCasesB_22);
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CondA_23 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 1))));
                MR_Word ThenA_24 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 2))));
                MR_Word ElseA_25 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 3))));
                MR_Word CondB_26;
                MR_Word ThenB_27;
                MR_Word ElseB_28;
                MR_Word next_value_of_GoalA_5;
                MR_Word next_value_of_GoalB_6;

                succeeded = ((((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CondB_26 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 1))));
                  ThenB_27 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 2))));
                  ElseB_28 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 3))));
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(TypeInfo_for_A_45, TypeInfo_for_B_46, VarNameTable_4, CondA_23, CondB_26);
                  if (succeeded)
                  {
                    succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(TypeInfo_for_A_45, TypeInfo_for_B_46, VarNameTable_4, ThenA_24, ThenB_27);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_GoalA_5 = ElseA_25;
                      next_value_of_GoalB_6 = ElseB_28;
                      GoalA_5 = next_value_of_GoalA_5;
                      GoalB_6 = next_value_of_GoalB_6;
                      continue;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubGoalA_29 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 1))));
                MR_Word SubGoalB_30;
                MR_Word next_value_of_GoalA_5;
                MR_Word next_value_of_GoalB_6;

                succeeded = ((((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  SubGoalB_30 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_GoalA_5 = SubGoalA_29;
                  next_value_of_GoalB_6 = SubGoalB_30;
                  GoalA_5 = next_value_of_GoalA_5;
                  GoalB_6 = next_value_of_GoalB_6;
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word MaybeCut_31 = ((MR_Unsigned) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word SubGoalA_43 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 1))));
                MR_Word SubGoalB_44;
                MR_Word Var_64;
                MR_Word next_value_of_GoalA_5;
                MR_Word next_value_of_GoalB_6;

                succeeded = ((((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  SubGoalB_44 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 1))));
                  Var_64 = ((MR_Unsigned) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 2))) & (MR_Integer) 1);
                  succeeded = (MaybeCut_31 == Var_64);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_GoalA_5 = SubGoalA_43;
                    next_value_of_GoalB_6 = SubGoalB_44;
                    GoalA_5 = next_value_of_GoalA_5;
                    GoalB_6 = next_value_of_GoalB_6;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word AtomicGoalA_35 = ((MR_Word) ((MR_hl_field(3, GoalRepA_7, (MR_Integer) 4))));
                MR_Word AtomicGoalB_39;

                succeeded = ((((MR_tag((MR_Word) GoalRepB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  AtomicGoalB_39 = ((MR_Word) ((MR_hl_field(3, GoalRepB_10, (MR_Integer) 4))));
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__atomic_goal_reps_match_3_p_0(VarNameTable_4, AtomicGoalA_35, AtomicGoalB_39);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_52_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word A_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word B_8;
      MR_Word Bs_9;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        Bs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(Var_16, Var_17, Var_18, A_6, B_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = As_7;
          next_value_of_HeadVar__3_3 = Bs_9;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeInfo_16_26;
      MR_Word A_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word B_8;
      MR_Word Bs_9;
      MR_Word ConsId_19;
      MR_Word OtherConsIds_20;
      MR_Word GoalRepA_21;
      MR_Word GoalRepB_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        Bs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        ConsId_19 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 0))));
        OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 1))));
        GoalRepA_21 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 2))));
        Var_23 = ((MR_Word) ((MR_hl_field(0, B_8, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(0, B_8, (MR_Integer) 1))));
        GoalRepB_22 = ((MR_Word) ((MR_hl_field(0, B_8, (MR_Integer) 2))));
        succeeded = mdbcomp__program_representation____Unify____cons_id_arity_rep_0_0(ConsId_19, Var_23);
        if (succeeded)
        {
          TypeInfo_16_26 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[22]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_26, ((MR_Box) (OtherConsIds_20)), ((MR_Box) (Var_24)));
          if (succeeded)
          {
            succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__goal_reps_match_3_p_0(Var_16, Var_17, Var_18, GoalRepA_21, GoalRepB_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = As_7;
              next_value_of_HeadVar__3_3 = Bs_9;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__atomic_goal_reps_match_3_p_0(
  MR_Word VarNameTable_4,
  MR_Word AtomicRepA_5,
  MR_Word AtomicRepB_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) AtomicRepA_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ConsId_8 = ((MR_String) ((MR_hl_field(0, AtomicRepA_5, (MR_Integer) 1))));
        MR_String Var_45;
        MR_Integer VarA_95 = ((MR_Integer) ((MR_hl_field(0, AtomicRepA_5, (MR_Integer) 0))));
        MR_Word ArgsA_96 = ((MR_Word) ((MR_hl_field(0, AtomicRepA_5, (MR_Integer) 2))));
        MR_Integer VarB_97;
        MR_Word ArgsB_98;
        MR_String Var_121;

        succeeded = ((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarB_97 = ((MR_Integer) ((MR_hl_field(0, AtomicRepB_6, (MR_Integer) 0))));
          Var_45 = ((MR_String) ((MR_hl_field(0, AtomicRepB_6, (MR_Integer) 1))));
          ArgsB_98 = ((MR_Word) ((MR_hl_field(0, AtomicRepB_6, (MR_Integer) 2))));
          succeeded = (strcmp(ConsId_8, Var_45) == 0);
          if (succeeded)
          {
            succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_95, &Var_121);
            if (succeeded)
              succeeded = (VarA_95 == VarB_97);
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_96, ArgsB_98);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ConsId_25 = ((MR_String) ((MR_hl_field(1, AtomicRepA_5, (MR_Integer) 1))));
        MR_String Var_46;
        MR_Integer VarA_103 = ((MR_Integer) ((MR_hl_field(1, AtomicRepA_5, (MR_Integer) 0))));
        MR_Word ArgsA_104 = ((MR_Word) ((MR_hl_field(1, AtomicRepA_5, (MR_Integer) 2))));
        MR_Integer VarB_105;
        MR_Word ArgsB_106;
        MR_String Var_122;

        succeeded = ((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          VarB_105 = ((MR_Integer) ((MR_hl_field(1, AtomicRepB_6, (MR_Integer) 0))));
          Var_46 = ((MR_String) ((MR_hl_field(1, AtomicRepB_6, (MR_Integer) 1))));
          ArgsB_106 = ((MR_Word) ((MR_hl_field(1, AtomicRepB_6, (MR_Integer) 2))));
          succeeded = (strcmp(ConsId_25, Var_46) == 0);
          if (succeeded)
          {
            succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_103, &Var_122);
            if (succeeded)
              succeeded = (VarA_103 == VarB_105);
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_104, ArgsB_106);
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ConsId_26 = ((MR_String) ((MR_hl_field(2, AtomicRepA_5, (MR_Integer) 1))));
        MR_String Var_48;
        MR_Word MaybeArgsA_71 = ((MR_Word) ((MR_hl_field(2, AtomicRepA_5, (MR_Integer) 2))));
        MR_Word MaybeArgsB_72;
        MR_Integer VarA_74 = ((MR_Integer) ((MR_hl_field(2, AtomicRepA_5, (MR_Integer) 0))));
        MR_Integer VarB_75;
        MR_String Var_118;

        succeeded = ((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 2);
        if (succeeded)
        {
          VarB_75 = ((MR_Integer) ((MR_hl_field(2, AtomicRepB_6, (MR_Integer) 0))));
          Var_48 = ((MR_String) ((MR_hl_field(2, AtomicRepB_6, (MR_Integer) 1))));
          MaybeArgsB_72 = ((MR_Word) ((MR_hl_field(2, AtomicRepB_6, (MR_Integer) 2))));
          succeeded = (strcmp(ConsId_26, Var_48) == 0);
          if (succeeded)
          {
            succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_74, &Var_118);
            if (succeeded)
              succeeded = (VarA_74 == VarB_75);
            else
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, MaybeArgsA_71, MaybeArgsB_72);
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeArgsA_13 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 3))));
            MR_Word MaybeArgsB_14;
            MR_String ConsId_27 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer VarA_29 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Integer VarB_31;
            MR_String Var_49;
            MR_String Var_117;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              VarB_31 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              Var_49 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              MaybeArgsB_14 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 3))));
              succeeded = (strcmp(ConsId_27, Var_49) == 0);
              if (succeeded)
              {
                succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_29, &Var_117);
                if (succeeded)
                  succeeded = (VarA_29 == VarB_31);
                else
                  succeeded = MR_TRUE;
                if (succeeded)
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, MaybeArgsA_13, MaybeArgsB_14);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer VarA1_89 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Integer VarA2_90 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer VarB1_91;
            MR_Integer VarB2_92;
            MR_String Var_119;
            MR_String Var_120;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              VarB1_91 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              VarB2_92 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA1_89, &Var_119);
              if (succeeded)
                succeeded = (VarA1_89 == VarB1_91);
              else
                succeeded = MR_TRUE;
              if (succeeded)
              {
                succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA2_90, &Var_120);
                if (succeeded)
                  succeeded = (VarA2_90 == VarB2_92);
                else
                  succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer VarA1_15 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Integer VarA2_16 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer VarB1_17;
            MR_Integer VarB2_18;
            MR_String Var_113;
            MR_String Var_114;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarB1_17 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              VarB2_18 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA1_15, &Var_113);
              if (succeeded)
                succeeded = (VarA1_15 == VarB1_17);
              else
                succeeded = MR_TRUE;
              if (succeeded)
              {
                succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA2_16, &Var_114);
                if (succeeded)
                  succeeded = (VarA2_16 == VarB2_18);
                else
                  succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer VarA1_109 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Integer VarA2_110 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer VarB1_111;
            MR_Integer VarB2_112;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              VarB1_111 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              VarB2_112 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__var_reps_match_3_p_0(VarNameTable_4, VarA1_109, VarB1_111);
              if (succeeded)
                succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__var_reps_match_3_p_0(VarNameTable_4, VarA2_110, VarB2_112);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ArgsA_86 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Word ArgsB_87;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ArgsB_87 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_86, ArgsB_87);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer VarA_7 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Word ArgsA_9 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer VarB_10;
            MR_Word ArgsB_11;
            MR_String Var_115;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              VarB_10 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              ArgsB_11 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_7, &Var_115);
              if (succeeded)
                succeeded = (VarA_7 == VarB_10);
              else
                succeeded = MR_TRUE;
              if (succeeded)
                succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_9, ArgsB_11);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer MethodNum_12 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Integer Var_47;
            MR_Integer VarA_63 = ((MR_Integer) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_Word ArgsA_64 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 3))));
            MR_Integer VarB_65;
            MR_Word ArgsB_66;
            MR_String Var_116;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              VarB_65 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              Var_47 = ((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              ArgsB_66 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 3))));
              succeeded = (MethodNum_12 == Var_47);
              if (succeeded)
              {
                succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_63, &Var_116);
                if (succeeded)
                  succeeded = (VarA_63 == VarB_65);
                else
                  succeeded = MR_TRUE;
                if (succeeded)
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_64, ArgsB_66);
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String ModuleName_19 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_String PredName_20 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_String Var_50;
            MR_String Var_51;
            MR_Word ArgsA_80 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 3))));
            MR_Word ArgsB_81;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (succeeded)
            {
              Var_50 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              Var_51 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              ArgsB_81 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 3))));
              succeeded = (strcmp(ModuleName_19, Var_50) == 0);
              if (succeeded)
              {
                succeeded = (strcmp(PredName_20, Var_51) == 0);
                if (succeeded)
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_80, ArgsB_81);
              }
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String ModuleName_32 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_String PredName_33 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Word ArgsA_34 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 3))));
            MR_Word ArgsB_35;
            MR_String Var_52;
            MR_String Var_53;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (succeeded)
            {
              Var_52 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              Var_53 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              ArgsB_35 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 3))));
              succeeded = (strcmp(ModuleName_32, Var_52) == 0);
              if (succeeded)
              {
                succeeded = (strcmp(PredName_33, Var_53) == 0);
                if (succeeded)
                  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_34, ArgsB_35);
              }
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String EventName_21 = ((MR_String) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 1))));
            MR_String Var_54;
            MR_Word ArgsA_58 = ((MR_Word) ((MR_hl_field(3, AtomicRepA_5, (MR_Integer) 2))));
            MR_Word ArgsB_59;

            succeeded = ((((MR_tag((MR_Word) AtomicRepB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              Var_54 = ((MR_String) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 1))));
              ArgsB_59 = ((MR_Word) ((MR_hl_field(3, AtomicRepB_6, (MR_Integer) 2))));
              succeeded = (strcmp(EventName_21, Var_54) == 0);
              if (succeeded)
                succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(VarNameTable_4, ArgsA_58, ArgsB_59);
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word A_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word B_8;
      MR_Word Bs_9;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        Bs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        if ((A_6 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = (B_8 == (MR_Word) ((MR_Unsigned) 0U));
        else
        {
          MR_Integer VarA_15 = ((MR_Integer) ((MR_hl_field(1, A_6, (MR_Integer) 0))));
          MR_Integer VarB_16;
          MR_String Var_17;

          succeeded = (B_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarB_16 = ((MR_Integer) ((MR_hl_field(1, B_8, (MR_Integer) 0))));
            succeeded = mdbcomp__program_representation__search_var_name_3_p_0(Var_12, VarA_15, &Var_17);
            if (succeeded)
              succeeded = (VarA_15 == VarB_16);
            else
              succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = As_7;
          next_value_of_HeadVar__3_3 = Bs_9;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_108_108_95_116_114_117_101_95_95_104_111_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Integer A_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer B_8;
      MR_Word Bs_9;
      MR_String Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        Bs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        succeeded = mdbcomp__program_representation__search_var_name_3_p_0(Var_12, A_6, &Var_13);
        if (succeeded)
          succeeded = (A_6 == B_8);
        else
          succeeded = MR_TRUE;
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = As_7;
          next_value_of_HeadVar__3_3 = Bs_9;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__var_reps_match_3_p_0(
  MR_Word VarNameTable_4,
  MR_Integer VarA_5,
  MR_Integer VarB_6)
{
  MR_bool succeeded;
  MR_String Var_7;

  succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_4, VarA_5, &Var_7);
  if (succeeded)
    succeeded = (VarA_5 == VarB_6);
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeGoal_12;

  transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_conj_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeGoal_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeGoal_12));
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0(
  MR_Word PredInfo_12,
  MR_Word ProgRepInfo_13,
  MR_Word VarNameTable_14,
  MR_Word Instmap0_15,
  MR_Word CPC_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_IntroducedParallelism_0_26,
  MR_Word * STATE_VARIABLE_IntroducedParallelism_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_String TargetGoalPathString_21 = ((MR_String) ((MR_hl_field(0, CPC_16, (MR_Integer) 0))));
  MR_Word TargetGoalPath_22;
  MR_Word MaybeGoal_23;
  MR_Word Var_30;

  mdbcomp__goal_path__goal_path_from_string_det_2_p_0(TargetGoalPathString_21, &TargetGoalPath_22);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_8[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgRepInfo_13));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (VarNameTable_14));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (CPC_16));
  }
  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(Var_30, TargetGoalPath_22, Instmap0_15, Goal0_17, &MaybeGoal_23);
  switch (MR_tag((MR_Word) MaybeGoal_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Spec_47;
        MR_Word ModuleName_81;
        MR_String PredName_82;
        MR_Word SymName_83;
        MR_Word PredOrFunc_84;
        MR_Word PredFormArity_85;
        MR_Word PFSNA_86;
        MR_Word Pieces_87;
        MR_Word Context_88;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_96;
        MR_Word Var_98;
        MR_Word Var_101;
        MR_Word Var_102;

        *Goal_18 = Goal0_17;
        ModuleName_81 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
        PredName_82 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
        {
          SymName_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_83, 0) = ((MR_Box) (ModuleName_81));
          MR_hl_field(1, SymName_83, 1) = ((MR_Box) (PredName_82));
        }
        PredOrFunc_84 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &PredFormArity_85);
        {
          PFSNA_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSNA_86, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_84));
          MR_hl_field(0, PFSNA_86, 1) = ((MR_Box) (SymName_83));
          MR_hl_field(0, PFSNA_86, 2) = ((MR_Box) (PredFormArity_85));
        }
        {
          Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_92, 1) = ((MR_Box) (PFSNA_86));
        }
        {
          Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_102, 1) = ((MR_Box) (TargetGoalPathString_21));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[25])));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[14])));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[13])));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
        }
        {
          Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
          MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
        }
        {
          Pieces_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_87, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[12])));
          MR_hl_field(1, Pieces_87, 1) = ((MR_Box) (Var_91));
        }
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_12, &Context_88);
        {
          Spec_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_47, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.implicit_parallelism.introduce_parallelism.report_failed_parallelisation\'/3"));
          MR_hl_field(1, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 100U));
          MR_hl_field(1, Spec_47, 3) = ((MR_Box) (Context_88));
          MR_hl_field(1, Spec_47, 4) = ((MR_Box) (Pieces_87));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_47));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
        }
        *STATE_VARIABLE_IntroducedParallelism_27 = STATE_VARIABLE_IntroducedParallelism_0_26;
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_18 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_23, (MR_Integer) 0))));
        *STATE_VARIABLE_IntroducedParallelism_27 = (MR_Integer) 1;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Error_24 = ((MR_String) ((MR_hl_field(2, MaybeGoal_23, (MR_Integer) 0))));
        MR_Word Spec_25;
        MR_Word ModuleName_48;
        MR_String PredName_49;
        MR_Word SymName_50;
        MR_Word PredOrFunc_51;
        MR_Word PredFormArity_52;
        MR_Word PFSNA_53;
        MR_Word Pieces_54;
        MR_Word Context_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_73;
        MR_Word Var_74;

        *Goal_18 = Goal0_17;
        ModuleName_48 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
        PredName_49 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
        {
          SymName_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_50, 0) = ((MR_Box) (ModuleName_48));
          MR_hl_field(1, SymName_50, 1) = ((MR_Box) (PredName_49));
        }
        PredOrFunc_51 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &PredFormArity_52);
        {
          PFSNA_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSNA_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
          MR_hl_field(0, PFSNA_53, 1) = ((MR_Box) (SymName_50));
          MR_hl_field(0, PFSNA_53, 2) = ((MR_Box) (PredFormArity_52));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (PFSNA_53));
        }
        Var_61 = (MR_Word) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[13]));
        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (TargetGoalPathString_21));
        }
        {
          Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_74, 1) = ((MR_Box) (Error_24));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[15])));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[14])));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
        }
        {
          Pieces_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_54, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[12])));
          MR_hl_field(1, Pieces_54, 1) = ((MR_Box) (Var_58));
        }
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_12, &Context_55);
        {
          Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.implicit_parallelism.introduce_parallelism.report_failed_parallelisation\'/3"));
          MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 100U));
          MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Context_55));
          MR_hl_field(1, Spec_25, 4) = ((MR_Box) (Pieces_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
        }
        *STATE_VARIABLE_IntroducedParallelism_27 = STATE_VARIABLE_IntroducedParallelism_0_26;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_proc_12_p_0(
  MR_Word ParallelismInfo_13,
  MR_Word PredInfo_14,
  MR_Word _PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcTable_0_33,
  MR_Word * STATE_VARIABLE_ProcTable_34,
  MR_Word STATE_VARIABLE_AnyProcIntroducedParallelism_0_35,
  MR_Word * STATE_VARIABLE_AnyProcIntroducedParallelism_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0(ParallelismInfo_13, PredInfo_14, ProcId_16, STATE_VARIABLE_ProcTable_0_33, STATE_VARIABLE_ProcTable_34, STATE_VARIABLE_AnyProcIntroducedParallelism_0_35, STATE_VARIABLE_AnyProcIntroducedParallelism_36, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Goal_18;
  MR_Word conv4_STATE_VARIABLE_IntroducedParallelism_27;
  MR_Word conv3_STATE_VARIABLE_Specs_29;

  transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_goal_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Goal_18, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_IntroducedParallelism_27, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_Goal_18));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_IntroducedParallelism_27));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_29));
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_6;

  transform_hlds__implicit_parallelism__introduce_parallelism__compare_candidate_par_conjunctions_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_Result_6));
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0(
  MR_Word ParallelismInfo_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcTable_0_33,
  MR_Word * STATE_VARIABLE_ProcTable_34,
  MR_Word STATE_VARIABLE_AnyProcIntroducedParallelism_0_35,
  MR_Word * STATE_VARIABLE_AnyProcIntroducedParallelism_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word ProcInfo0_21;
  MR_String Name_22;
  MR_Integer Arity_23;
  MR_Word PredOrFunc_24;
  MR_Integer Mode_25;
  MR_Word IMProcLabel_26;
  MR_Word CPCMap_27;
  MR_Word Var_41;
  MR_Box conv0_ProcInfo0_21;
  MR_Word CPCProc_28;
  MR_Box conv1_CPCProc_28;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_33, ((MR_Box) (ProcId_16)), &conv0_ProcInfo0_21);
  ProcInfo0_21 = ((MR_Word) (conv0_ProcInfo0_21));
  Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_14, &Var_41);
  Arity_23 = (MR_Integer) (Var_41);
  PredOrFunc_24 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_14);
  Mode_25 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_16);
  {
    IMProcLabel_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IMProcLabel_26, 0) = ((MR_Box) (Name_22));
    MR_hl_field(0, IMProcLabel_26, 1) = ((MR_Box) (Arity_23));
    MR_hl_field(0, IMProcLabel_26, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
    MR_hl_field(0, IMProcLabel_26, 3) = ((MR_Box) (Mode_25));
  }
  CPCMap_27 = ((MR_Word) ((MR_hl_field(0, ParallelismInfo_13, (MR_Integer) 1))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[2]), CPCMap_27, ((MR_Box) (IMProcLabel_26)), &conv1_CPCProc_28);
  if (succeeded)
  {
    CPCProc_28 = ((MR_Word) (conv1_CPCProc_28));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word HasParallelConj_29;

    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_21, &HasParallelConj_29);
    switch (HasParallelConj_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ProcIntroducedParallelism_32;
          MR_Word VarNameTable_47 = ((MR_Word) ((MR_hl_field(0, CPCProc_28, (MR_Integer) 0))));
          MR_Word PushGoals_48 = ((MR_Word) ((MR_hl_field(0, CPCProc_28, (MR_Integer) 1))));
          MR_Word CPCs0_49 = ((MR_Word) ((MR_hl_field(0, CPCProc_28, (MR_Integer) 2))));
          MR_Word Goal0_51;
          MR_Word Context_52;
          MR_String FileName_53;
          MR_Word VarTable_54;
          MR_Word HeadVars_56;
          MR_Word VarNumMap_57;
          MR_Word ProgRepInfo_58;
          MR_Word Instmap_59;
          MR_Word CPCs_60;
          MR_Word Goal_61;
          MR_Word STATE_VARIABLE_ProcInfo_39_62;
          MR_Word Var_63;
          MR_Word Var_67;
          MR_Box conv8_Goal_61;
          MR_Box conv7_ProcIntroducedParallelism_32;
          MR_Box conv6_STATE_VARIABLE_Specs_40;

          if ((PushGoals_48 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_ProcInfo_39_62 = ProcInfo0_21;
            *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
          }
          else
          {
            MR_Word _Result_50;

            transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_p_0(PushGoals_48, &_Result_50, ProcInfo0_21, &STATE_VARIABLE_ProcInfo_39_62, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
          }
          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_39_62, &Goal0_51);
          Var_63 = ((MR_Word) ((MR_hl_field(0, Goal0_51, (MR_Integer) 1))));
          Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_63);
          FileName_53 = mercury__term_context__context_file_1_f_0(Context_52);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_39_62, &VarTable_54);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_39_62, &HeadVars_56);
          ll_backend__stack_layout__compute_var_number_map_5_p_0(VarTable_54, HeadVars_56, (MR_Word) ((MR_Unsigned) 0U), Goal0_51, &VarNumMap_57);
          {
            ProgRepInfo_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProgRepInfo_58, 0) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_38));
            MR_hl_field(0, ProgRepInfo_58, 1) = ((MR_Box) (FileName_53));
            MR_hl_field(0, ProgRepInfo_58, 2) = ((MR_Box) (VarTable_54));
            MR_hl_field(0, ProgRepInfo_58, 3) = ((MR_Box) (VarNumMap_57));
            MR_hl_field(0, ProgRepInfo_58, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(*STATE_VARIABLE_ModuleInfo_38, STATE_VARIABLE_ProcInfo_39_62, &Instmap_59);
          mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[3]), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[5]), CPCs0_49, &CPCs_60);
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_7[0]));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_97_114_97_108_108_101_108_105_115_101_95_112_114_111_99_95_95_91_51_93_95_48_12_p_0_2));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_67, 3) = ((MR_Box) (PredInfo_14));
            MR_hl_field(0, Var_67, 4) = ((MR_Box) (ProgRepInfo_58));
            MR_hl_field(0, Var_67, 5) = ((MR_Box) (VarNameTable_47));
            MR_hl_field(0, Var_67, 6) = ((MR_Box) (Instmap_59));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[3]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[0]), Var_67, CPCs_60, ((MR_Box) (Goal0_51)), &conv8_Goal_61, ((MR_Box) ((MR_Integer) 0)), &conv7_ProcIntroducedParallelism_32, ((MR_Box) (STATE_VARIABLE_Specs_0_39)), &conv6_STATE_VARIABLE_Specs_40);
          Goal_61 = ((MR_Word) (conv8_Goal_61));
          ProcIntroducedParallelism_32 = ((MR_Word) (conv7_ProcIntroducedParallelism_32));
          *STATE_VARIABLE_Specs_40 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_40));
          switch (ProcIntroducedParallelism_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_ProcTable_34 = STATE_VARIABLE_ProcTable_0_33;
                *STATE_VARIABLE_AnyProcIntroducedParallelism_36 = STATE_VARIABLE_AnyProcIntroducedParallelism_0_35;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_ProcInfo_48_69;
                MR_Word ProcInfo_92;

                hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_61, STATE_VARIABLE_ProcInfo_39_62, &STATE_VARIABLE_ProcInfo_48_69);
                hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_48_69, &ProcInfo_92);
                *STATE_VARIABLE_AnyProcIntroducedParallelism_36 = (MR_Integer) 1;
                mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (ProcInfo_92)), STATE_VARIABLE_ProcTable_0_33, STATE_VARIABLE_ProcTable_34);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Spec_30;
          MR_Word ModuleName_76;
          MR_String PredName_77;
          MR_Word SymName_78;
          MR_Word PredOrFunc_79;
          MR_Word PredFormArity_80;
          MR_Word PFSNA_81;
          MR_Word Pieces_82;
          MR_Word Context_83;
          MR_Word Var_86;
          MR_Word Var_87;

          ModuleName_76 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
          PredName_77 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
          {
            SymName_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SymName_78, 0) = ((MR_Box) (ModuleName_76));
            MR_hl_field(1, SymName_78, 1) = ((MR_Box) (PredName_77));
          }
          PredOrFunc_79 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_14);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_14, &PredFormArity_80);
          {
            PFSNA_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PFSNA_81, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_79));
            MR_hl_field(0, PFSNA_81, 1) = ((MR_Box) (SymName_78));
            MR_hl_field(0, PFSNA_81, 2) = ((MR_Box) (PredFormArity_80));
          }
          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) (PFSNA_81));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[21])));
          }
          {
            Pieces_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_82, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[12])));
            MR_hl_field(1, Pieces_82, 1) = ((MR_Box) (Var_86));
          }
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_14, &Context_83);
          {
            Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.implicit_parallelism.introduce_parallelism.report_already_parallelised\'/1"));
            MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 100U));
            MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_83));
            MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_40 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
          }
          *STATE_VARIABLE_ProcTable_34 = STATE_VARIABLE_ProcTable_0_33;
          *STATE_VARIABLE_AnyProcIntroducedParallelism_36 = STATE_VARIABLE_AnyProcIntroducedParallelism_0_35;
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    *STATE_VARIABLE_AnyProcIntroducedParallelism_36 = STATE_VARIABLE_AnyProcIntroducedParallelism_0_35;
    *STATE_VARIABLE_ProcTable_34 = STATE_VARIABLE_ProcTable_0_33;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ProcTable_34;
  MR_Word conv3_STATE_VARIABLE_AnyProcIntroducedParallelism_36;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_38;
  MR_Word conv1_STATE_VARIABLE_Specs_40;

  transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ProcTable_34, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_AnyProcIntroducedParallelism_36, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ModuleInfo_38, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_Specs_40);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ProcTable_34));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_AnyProcIntroducedParallelism_36));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_38));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_40));
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0(
  MR_Word ParallelismInfo_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_PredIdTable_0_23,
  MR_Word * STATE_VARIABLE_PredIdTable_24,
  MR_Word STATE_VARIABLE_AnyPredIntroducedParallelism_0_25,
  MR_Word * STATE_VARIABLE_AnyPredIntroducedParallelism_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word PredInfo0_17;
  MR_Word ProcIds_18;
  MR_Word ProcTable0_19;
  MR_Word ProcTable_20;
  MR_Word AnyProcIntroducedParallelism_21;
  MR_Word Var_31;
  MR_Box conv0_PredInfo0_17;
  MR_Box conv8_ProcTable_20;
  MR_Box conv7_AnyProcIntroducedParallelism_21;
  MR_Box conv6_STATE_VARIABLE_ModuleInfo_28;
  MR_Box conv5_STATE_VARIABLE_Specs_30;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredIdTable_0_23, ((MR_Box) (PredId_12)), &conv0_PredInfo0_17);
  PredInfo0_17 = ((MR_Word) (conv0_PredInfo0_17));
  ProcIds_18 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_17);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_19);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_6[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ParallelismInfo_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (PredInfo0_17));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (PredId_12));
  }
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[3]), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[0]), Var_31, ProcIds_18, ((MR_Box) (ProcTable0_19)), &conv8_ProcTable_20, ((MR_Box) ((MR_Integer) 0)), &conv7_AnyProcIntroducedParallelism_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_27)), &conv6_STATE_VARIABLE_ModuleInfo_28, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv5_STATE_VARIABLE_Specs_30);
  ProcTable_20 = ((MR_Word) (conv8_ProcTable_20));
  AnyProcIntroducedParallelism_21 = ((MR_Word) (conv7_AnyProcIntroducedParallelism_21));
  *STATE_VARIABLE_ModuleInfo_28 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_28));
  *STATE_VARIABLE_Specs_30 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_30));
  switch (AnyProcIntroducedParallelism_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_PredIdTable_24 = STATE_VARIABLE_PredIdTable_0_23;
        *STATE_VARIABLE_AnyPredIntroducedParallelism_26 = STATE_VARIABLE_AnyPredIntroducedParallelism_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInfo_22;

        *STATE_VARIABLE_AnyPredIntroducedParallelism_26 = (MR_Integer) 1;
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_20, PredInfo0_17, &PredInfo_22);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_12)), ((MR_Box) (PredInfo_22)), STATE_VARIABLE_PredIdTable_0_23, STATE_VARIABLE_PredIdTable_24);
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__cpc_proc_is_in_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word ProcLabel_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CPC_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word IMProcLabel_7;
  MR_Word PredOrFunc_8;
  MR_String Name_11;
  MR_Integer Arity_12;
  MR_Integer Mode_13;

  if (((MR_tag((MR_Word) ProcLabel_5)) == (MR_Integer) 0))
  {
    MR_String DefModule_10;

    PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 0))) & (MR_Integer) 1);
    DefModule_10 = ((MR_String) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 2))));
    Name_11 = ((MR_String) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 3))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 4))));
    Mode_13 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 5))));
    succeeded = (strcmp(ModuleName_4, DefModule_10) == 0);
  }
  else
  {
    MR_String DefModule_16 = ((MR_String) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 2))));

    Name_11 = ((MR_String) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 3))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 4))));
    Mode_13 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 5))));
    succeeded = (strcmp(ModuleName_4, DefModule_16) == 0);
    if (succeeded)
    {
      PredOrFunc_8 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    {
      IMProcLabel_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IMProcLabel_7, 0) = ((MR_Box) (Name_11));
      MR_hl_field(0, IMProcLabel_7, 1) = ((MR_Box) (Arity_12));
      MR_hl_field(0, IMProcLabel_7, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_8));
      MR_hl_field(0, IMProcLabel_7, 3) = ((MR_Box) (Mode_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (IMProcLabel_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (CPC_6));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PredIdTable_24;
  MR_Word conv3_STATE_VARIABLE_AnyPredIntroducedParallelism_26;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_28;
  MR_Word conv1_STATE_VARIABLE_Specs_30;

  transform_hlds__implicit_parallelism__introduce_parallelism__maybe_parallelise_pred_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PredIdTable_24, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_AnyPredIntroducedParallelism_26, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_Specs_30);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PredIdTable_24));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_AnyPredIntroducedParallelism_26));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_28));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_30));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism__cpc_proc_is_in_module_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0(
  MR_Word * Specs_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_bool succeeded;
  MR_Word Globals0_6;
  MR_Word MaybeFeedbackInfo_7;
  MR_Word ModuleName_8;
  MR_Word ParallelismInfo_10;
  MR_Word TypeInfo_12_61;
  MR_Word TypeInfo_13_62;
  MR_Word TypeCtorInfo_14_63;
  MR_Word TypeInfo_15_64;
  MR_Word FeedbackInfo_9;
  MR_Word MaybeCandidates_53;
  MR_Word Candidates_54;
  MR_Word Parameters_55;
  MR_Word ProcsConjs_56;
  MR_Word CandidateParConjsMap_57;
  MR_String ModuleNameStr_58;
  MR_Word CandidateParConjsAssocList_59;
  MR_Word Var_60;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals0_6);
  libs__globals__get_maybe_feedback_info_2_p_0(Globals0_6, &MaybeFeedbackInfo_7);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &ModuleName_8);
  succeeded = (MaybeFeedbackInfo_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FeedbackInfo_9 = ((MR_Word) ((MR_hl_field(1, MaybeFeedbackInfo_7, (MR_Integer) 0))));
    MaybeCandidates_53 = mdbcomp__feedback__get_feedback_candidate_parallel_conjunctions_1_f_0(FeedbackInfo_9);
    succeeded = (MaybeCandidates_53 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Candidates_54 = ((MR_Word) ((MR_hl_field(1, MaybeCandidates_53, (MR_Integer) 0))));
      Parameters_55 = ((MR_Word) ((MR_hl_field(0, Candidates_54, (MR_Integer) 0))));
      ProcsConjs_56 = ((MR_Word) ((MR_hl_field(0, Candidates_54, (MR_Integer) 1))));
      ModuleNameStr_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
      TypeInfo_12_61 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[1]);
      TypeInfo_13_62 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[2]);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_4[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_1));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (ModuleNameStr_58));
      }
      mercury__list__filter_map_3_p_0(TypeInfo_12_61, TypeInfo_13_62, Var_60, ProcsConjs_56, &CandidateParConjsAssocList_59);
      TypeCtorInfo_14_63 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0);
      TypeInfo_15_64 = (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[2]);
      CandidateParConjsMap_57 = mercury__map__from_assoc_list_1_f_0(TypeCtorInfo_14_63, TypeInfo_15_64, CandidateParConjsAssocList_59);
      {
        ParallelismInfo_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ParallelismInfo_10, 0) = ((MR_Box) (Parameters_55));
        MR_hl_field(0, ParallelismInfo_10, 1) = ((MR_Box) (CandidateParConjsMap_57));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word PredIds_11;
    MR_Word PredIdTable0_12;
    MR_Word PredIdTable_13;
    MR_Word AnyPredIntroducedParallelism_14;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Box conv8_PredIdTable_13;
    MR_Box conv7_AnyPredIntroducedParallelism_14;
    MR_Box conv6_STATE_VARIABLE_ModuleInfo_21_21;
    MR_Box conv5_Specs_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &PredIds_11);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &PredIdTable0_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_5[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (ParallelismInfo_10));
    }
    mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_1[0]), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[0]), Var_19, PredIds_11, ((MR_Box) (PredIdTable0_12)), &conv8_PredIdTable_13, ((MR_Box) ((MR_Integer) 0)), &conv7_AnyPredIntroducedParallelism_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17)), &conv6_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Specs_4);
    PredIdTable_13 = ((MR_Word) (conv8_PredIdTable_13));
    AnyPredIntroducedParallelism_14 = ((MR_Word) (conv7_AnyPredIntroducedParallelism_14));
    STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_21_21));
    *Specs_4 = ((MR_Word) (conv5_Specs_4));
    switch (AnyPredIntroducedParallelism_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_21_21;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ModuleInfo_23_23;

          hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_13, STATE_VARIABLE_ModuleInfo_21_21, &STATE_VARIABLE_ModuleInfo_23_23);
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_ModuleInfo_18);
        }
        break;
    }
  }
  else
  {
    MR_Word Context_15;
    MR_Word Var_34;

    hlds__hlds_module__module_info_get_name_context_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Context_15);
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.implicit_parallelism.introduce_parallelism.apply_implicit_parallelism_transformation\'/3"));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_34, 2) = ((MR_Box) ((MR_Unsigned) 100U));
      MR_hl_field(1, Var_34, 3) = ((MR_Box) (Context_15));
      MR_hl_field(1, Var_34, 4) = ((MR_Box) (MR_mkword(1, &transform_hlds__implicit_parallelism__introduce_parallelism_scalar_common_2[11])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____candidate_par_conjunction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____candidate_par_conjunction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____find_first_goal_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____find_first_goal_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____intra_module_proc_label_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____intra_module_proc_label_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____introduced_parallelism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____introduced_parallelism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____module_candidate_par_conjs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____module_candidate_par_conjs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____par_conjunction_and_remaining_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____par_conjunction_and_remaining_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____parallelism_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____parallelism_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__implicit_parallelism__introduce_parallelism____Unify____seq_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__implicit_parallelism__introduce_parallelism____Compare____seq_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__implicit_parallelism__introduce_parallelism__init(void)
{
}

void mercury__transform_hlds__implicit_parallelism__introduce_parallelism__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_candidate_par_conjunction_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_find_first_goal_result_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_intra_module_proc_label_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_introduced_parallelism_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_module_candidate_par_conjs_map_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_par_conjunction_and_remaining_goals_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_parallelism_info_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__introduce_parallelism__transform_hlds__implicit_parallelism__introduce_parallelism__type_ctor_info_seq_conj_0);
}

void mercury__transform_hlds__implicit_parallelism__introduce_parallelism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__implicit_parallelism__introduce_parallelism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.implicit_parallelism.introduce_parallelism.
