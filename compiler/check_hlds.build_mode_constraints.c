/*
** Automatically generated from `build_mode_constraints.m'
** by the Mercury compiler,
** version 2018-02-19
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


// :- module check_hlds.build_mode_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__build_mode_constraints__init
ENDINIT
*/

#include "check_hlds.build_mode_constraints.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0[2];

static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0[1];

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0[1];

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0[1];

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0[2];

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0;

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0[1];

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0[1];

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0[1];

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0[1];

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0[2];

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0;

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0[1];

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0[1];

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0[1];

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0[2];

static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0[1];

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0[1];

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(
  MR_Word ProgVarset_10,
  MR_Word PredId_11,
  MR_Word SubIds_13,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28,
  MR_Word LambdaHeadVar__3_29,
  MR_Word * LambdaHeadVar__4_30);

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word GoalId_11,
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21,
  MR_Word LambdaHeadVar__3_22,
  MR_Word * LambdaHeadVar__4_23);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(
  MR_Word LambdaHeadVar__1_204,
  MR_Word LambdaHeadVar__2_205);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(
  MR_Word LambdaHeadVar__1_185,
  MR_Word LambdaHeadVar__2_186,
  MR_Word LambdaHeadVar__3_187);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(
  MR_Word ThenNonlocals_115,
  MR_Word HeadVar__2_390);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(
  MR_Word CondNonlocals_114,
  MR_Word HeadVar__2_387);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(
  MR_Word HeadVar__1_359,
  MR_Word HeadVar__2_360);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(
  MR_Word HeadVar__1_18,
  MR_Word HeadVar__2_28);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(
  MR_Word LambdaHeadVar__1_88);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word GoalId_9,
  MR_Word ProgVar_10,
  MR_Word MCVars0_11,
  MR_Word * MCVars_12);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(
  MR_Word VarMap_6,
  MR_Word PredId_7,
  MR_Word GoalId_8,
  MR_Word ProgVar_9);

static void MR_CALL 
check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word _ProgVar_9,
  MR_Word ProgVarAtConjuncts_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13);

static void MR_CALL 
check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word ProgVarAtConjuncts_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13);

static void MR_CALL 
check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(
  MR_Word ProgVarset_11,
  MR_Word PredId_12,
  MR_Word Context_13,
  MR_Word GoalId_14,
  MR_Word ProgVar_15,
  MR_Word ProgVarAtConjuncts_16,
  MR_Word STATE_VARIABLE_VarInfo_0_20,
  MR_Word * STATE_VARIABLE_VarInfo_21,
  MR_Word STATE_VARIABLE_Constraints_0_22,
  MR_Word * STATE_VARIABLE_Constraints_23);

static void MR_CALL 
check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word GoalId_9,
  MR_Word ProgVar_10,
  MR_Word STATE_VARIABLE_ConjunctProductionMap_0_13,
  MR_Word * STATE_VARIABLE_ConjunctProductionMap_14);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word Nonlocals_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConjConstraintsInfo_0_19,
  MR_Word * STATE_VARIABLE_ConjConstraintsInfo_20);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word MCVar_6,
  MR_Word Mode_7);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(
  MR_Word ProgVarset_6,
  MR_Word PredId_7,
  MR_Word HeadVar_8,
  MR_Word STATE_VARIABLE_VarInfo_0_11,
  MR_Word * STATE_VARIABLE_VarInfo_12);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_VarInfo_0_12,
  MR_Word * STATE_VARIABLE_VarInfo_13);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConstraintVars_6,
  MR_Word ArgModes_7);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_9,
  MR_Word tscc_proc_1_input_2_ProgVarset_10,
  MR_Word tscc_proc_1_input_3_PredId_11,
  MR_Word tscc_proc_1_input_4_Goal_12,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Constraints_25);

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(
  MR_Word tscc_proc_2_input_1_ModuleInfo_12,
  MR_Word tscc_proc_2_input_2_ProgVarset_13,
  MR_Word tscc_proc_2_input_3_PredId_14,
  MR_Word tscc_proc_2_input_4_GoalExpr_15,
  MR_Word tscc_proc_2_input_5_Context_16,
  MR_Word tscc_proc_2_input_6_GoalId_17,
  MR_Word tscc_proc_2_input_7_Nonlocals_18,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Constraints_25);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(
  MR_Word ProgVarset_10,
  MR_Word PredId_11,
  MR_Word GoalId_12,
  MR_Word SubIds_13,
  MR_Word Nonlocals_14,
  MR_Word * NonlocalsAtId_15,
  MR_Word * NonlocalsAtSubIds_16,
  MR_Word STATE_VARIABLE_VarInfo_0_22,
  MR_Word * STATE_VARIABLE_VarInfo_23);

static void MR_CALL 
check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word ProgVar_10,
  MR_Word GoalId_11,
  MR_Word * MCVar_12,
  MR_Word STATE_VARIABLE_VarInfo_0_18,
  MR_Word * STATE_VARIABLE_VarInfo_19);

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0(void);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(
  MR_Word ProgVarset_12,
  MR_Word Context_13,
  MR_Word GoalId_14,
  MR_Word CallerPredId_15,
  MR_Word CallArgs_16,
  MR_Word CalleePredId_17,
  MR_Word CalleeHeadVars_18,
  MR_Word STATE_VARIABLE_VarInfo_0_26,
  MR_Word * STATE_VARIABLE_VarInfo_27,
  MR_Word STATE_VARIABLE_Constraints_0_28,
  MR_Word * STATE_VARIABLE_Constraints_29);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ProgVarset_13,
  MR_Word CallContext_14,
  MR_Word CallingPred_15,
  MR_Word Decls_16,
  MR_Word GoalId_17,
  MR_Word CallArgs_18,
  MR_Word STATE_VARIABLE_VarInfo_0_24,
  MR_Word * STATE_VARIABLE_VarInfo_25,
  MR_Word STATE_VARIABLE_Constraints_0_26,
  MR_Word * STATE_VARIABLE_Constraints_27);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word ProgVars_10,
  MR_Word GoalId_11,
  MR_Word * MCVars_12,
  MR_Word STATE_VARIABLE_VarInfo_0_16,
  MR_Word * STATE_VARIABLE_VarInfo_17);

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_2[12][3];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_3[4][7];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_4[3][10];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_5[6][8];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_6[7][5];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_7[3][6];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_8[6][9];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_9[1][11];

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_10[1][13];




static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[1])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[3])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[1])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[2])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[5])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[6])),
    ((MR_Box) (check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_4[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_5[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_6[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_8[6][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__build_mode_constraints_scalar_common_10[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__build_mode_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____args_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____args_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__build_mode_constraints__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0[2] = {
  (MR_String) "locals_positions",
  (MR_String) "nonlocals_positions"
};

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0 = {
  (MR_String) "conj_constraints_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_conj_constraints_info_0_0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_conj_constraints_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0
};

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_conj_constraints_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_conj_constraints_info_0_0
};

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "conj_constraints_info",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_conj_constraints_info_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_conj_constraints_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_conj_constraints_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "conjunct_production_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0 = {
  (MR_String) "in",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_prog_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0
};

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_prog_var_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_prog_var_0_0
};

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_prog_var",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_prog_var_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_prog_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_prog_var_0
};

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0 = {
  (MR_String) "at",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_rep_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0
};

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_rep_var_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_rep_var_0_0
};

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_rep_var",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_rep_var_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_rep_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_rep_var_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_ConstString check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0[2] = {
  (MR_String) "mc_varset",
  (MR_String) "rep_var_map"
};

static const MR_DuFunctorDesc check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0 = {
  (MR_String) "mc_var_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_types_mc_var_info_0_0,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__field_names_mc_var_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0
};

static const MR_DuPtagLayout check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_stag_ordered_mc_var_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0[1] = {
  &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_functor_desc_mc_var_info_0_0
};

static const MR_Integer check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_var_info",
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_name_ordered_mc_var_info_0 },
  {     check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__du_ptag_ordered_mc_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__functor_number_map_mc_var_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mc_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__bimap__ti_bimap_2check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "mode_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001)),
  ((MR_Box) (check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001)),
  (MR_String) "check_hlds.build_mode_constraints",
  (MR_String) "nonlocals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MCVar_12;
    MR_Word conv0_STATE_VARIABLE_VarInfo_19;

    check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_MCVar_12, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_VarInfo_19);
    *wrapper_arg_2 = ((MR_Box) (conv1_MCVar_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarInfo_19));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(
  MR_Word ProgVarset_10,
  MR_Word PredId_11,
  MR_Word SubIds_13,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28,
  MR_Word LambdaHeadVar__3_29,
  MR_Word * LambdaHeadVar__4_30)
{
  {
    MR_Word Var_50;
    MR_Box conv2_LambdaHeadVar__4_30;

    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ProgVarset_10));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (LambdaHeadVar__1_27));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_50, SubIds_13, LambdaHeadVar__2_28, ((MR_Box) (LambdaHeadVar__3_29)), &conv2_LambdaHeadVar__4_30);
    *LambdaHeadVar__4_30 = ((MR_Word) conv2_LambdaHeadVar__4_30);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word GoalId_11,
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21,
  MR_Word LambdaHeadVar__3_22,
  MR_Word * LambdaHeadVar__4_23)
{
  check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_8, PredId_9, LambdaHeadVar__1_20, GoalId_11, LambdaHeadVar__2_21, LambdaHeadVar__3_22, LambdaHeadVar__4_23);
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36)
{
  {
    MR_Word LambdaHeadVar__3_37;
    MR_Word Var_38;

    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LambdaHeadVar__2_36));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      LambdaHeadVar__3_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__3_37, 0) = ((MR_Box) (LambdaHeadVar__1_35));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__3_37, 1) = ((MR_Box) (Var_38));
    }
    return LambdaHeadVar__3_37;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(
  MR_Word LambdaHeadVar__1_204,
  MR_Word LambdaHeadVar__2_205)
{
  {
    MR_Word LambdaHeadVar__3_206;
    MR_Word Var_207;

    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (LambdaHeadVar__2_205));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      LambdaHeadVar__3_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__3_206, 0) = ((MR_Box) (LambdaHeadVar__1_204));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__3_206, 1) = ((MR_Box) (Var_207));
    }
    return LambdaHeadVar__3_206;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(
  MR_Word LambdaHeadVar__1_185,
  MR_Word LambdaHeadVar__2_186,
  MR_Word LambdaHeadVar__3_187)
{
  {
    MR_Word LambdaHeadVar__4_188;
    MR_Word Var_189;
    MR_Word Var_190;

    {
      Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (LambdaHeadVar__3_187));
      MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (LambdaHeadVar__2_186));
      MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_190));
    }
    {
      LambdaHeadVar__4_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__4_188, 0) = ((MR_Box) (LambdaHeadVar__1_185));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__4_188, 1) = ((MR_Box) (Var_189));
    }
    return LambdaHeadVar__4_188;
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(
  MR_Word ThenNonlocals_115,
  MR_Word HeadVar__2_390)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ThenNonlocals_115, HeadVar__2_390);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(
  MR_Word CondNonlocals_114,
  MR_Word HeadVar__2_387)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, CondNonlocals_114, HeadVar__2_387);
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(
  MR_Word HeadVar__1_359,
  MR_Word HeadVar__2_360)
{
  {
    MR_Word HeadVar__3_361;

    HeadVar__3_361 = mercury__list__cons_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (HeadVar__1_359)), HeadVar__2_360);
    return HeadVar__3_361;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(
  MR_Word HeadVar__1_18,
  MR_Word HeadVar__2_28)
{
  {
    MR_Word HeadVar__3_29;

    HeadVar__3_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], HeadVar__1_18, HeadVar__2_28);
    return HeadVar__3_29;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(
  MR_Word LambdaHeadVar__1_88)
{
  {
    MR_Word LambdaHeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 2)));
    MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 0)));
    MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 1)));

    return LambdaHeadVar__2_89;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[7], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[6], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0(
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
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[6], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ArgX2_6;
        MR_Integer Var_14 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_10;
      MR_Integer Var_11;

      succeeded = check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        Var_10 = (MR_Integer) ArgX2_5;
        Var_11 = (MR_Integer) ArgY2_6;
        succeeded = (Var_10 == Var_11);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(
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
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word GoalId_9,
  MR_Word ProgVar_10,
  MR_Word MCVars0_11,
  MR_Word * MCVars_12)
{
  {
    MR_Word MCVar_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv0_MCVar_13;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (ProgVar_10));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (PredId_8));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (GoalId_9));
    }
    conv0_MCVar_13 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], VarMap_7, ((MR_Box) (Var_18)));
    MCVar_13 = ((MR_Word) conv0_MCVar_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *MCVars_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCVar_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MCVars0_11));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(
  MR_Word VarMap_6,
  MR_Word PredId_7,
  MR_Word GoalId_8,
  MR_Word ProgVar_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Box conv0_HeadVar__5_5;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (ProgVar_9));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (PredId_7));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (GoalId_8));
    }
    conv0_HeadVar__5_5 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], VarMap_6, ((MR_Box) (Var_10)));
    HeadVar__5_5 = ((MR_Word) conv0_HeadVar__5_5);
    return HeadVar__5_5;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word _ProgVar_9,
  MR_Word ProgVarAtConjuncts_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(MCVarSet_7, Context_8, ProgVarAtConjuncts_10, STATE_VARIABLE_Constraints_0_12, STATE_VARIABLE_Constraints_13);
}

static void MR_CALL 
check_hlds__build_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_108_111_99_97_108_95_118_97_114_95_99_111_110_106_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word ProgVarAtConjuncts_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  check_hlds__abstract_mode_constraints__exactly_one_5_p_0(MCVarSet_7, Context_8, ProgVarAtConjuncts_10, STATE_VARIABLE_Constraints_0_12, STATE_VARIABLE_Constraints_13);
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(
  MR_Word ProgVarset_11,
  MR_Word PredId_12,
  MR_Word Context_13,
  MR_Word GoalId_14,
  MR_Word ProgVar_15,
  MR_Word ProgVarAtConjuncts_16,
  MR_Word STATE_VARIABLE_VarInfo_0_20,
  MR_Word * STATE_VARIABLE_VarInfo_21,
  MR_Word STATE_VARIABLE_Constraints_0_22,
  MR_Word * STATE_VARIABLE_Constraints_23)
{
  {
    MR_Word ProgVarAtGoalId_19;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_20, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_Constraints_25_25;
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_20, (MR_Integer) 1)));

    check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_11, PredId_12, ProgVar_15, GoalId_14, &ProgVarAtGoalId_19, STATE_VARIABLE_VarInfo_0_20, STATE_VARIABLE_VarInfo_21);
    check_hlds__abstract_mode_constraints__equiv_disj_6_p_0(Var_24, Context_13, ProgVarAtGoalId_19, ProgVarAtConjuncts_16, STATE_VARIABLE_Constraints_0_22, &STATE_VARIABLE_Constraints_25_25);
    check_hlds__abstract_mode_constraints__at_most_one_5_p_0(Var_24, Context_13, ProgVarAtConjuncts_16, STATE_VARIABLE_Constraints_25_25, STATE_VARIABLE_Constraints_23);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word GoalId_9,
  MR_Word ProgVar_10,
  MR_Word STATE_VARIABLE_ConjunctProductionMap_0_13,
  MR_Word * STATE_VARIABLE_ConjunctProductionMap_14)
{
  {
    MR_Word MCVar_12;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Box conv0_MCVar_12;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (ProgVar_10));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (PredId_8));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (GoalId_9));
    }
    conv0_MCVar_12 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], VarMap_7, ((MR_Box) (Var_22)));
    MCVar_12 = ((MR_Word) conv0_MCVar_12);
    mercury__multi_map__set_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (ProgVar_10)), ((MR_Box) (MCVar_12)), STATE_VARIABLE_ConjunctProductionMap_0_13, STATE_VARIABLE_ConjunctProductionMap_14);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ConjunctProductionMap_14;

    check_hlds__build_mode_constraints__add_variable_to_conjunct_production_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ConjunctProductionMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ConjunctProductionMap_14));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word Nonlocals_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConjConstraintsInfo_0_19,
  MR_Word * STATE_VARIABLE_ConjConstraintsInfo_20)
{
  {
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeInfo_39_39;
    MR_Word SubGoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word SubGoalNonlocals_13;
    MR_Word SubGoalId_14;
    MR_Word Nonlocal_15;
    MR_Word Local_16;
    MR_Word STATE_VARIABLE_LocalsMap_21_21;
    MR_Word STATE_VARIABLE_NonlocalsMap_22_22;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_LocalsMap_24_24;
    MR_Word STATE_VARIABLE_NonlocalsMap_26_26;
    MR_Word _SubGoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0)));
    MR_Box conv1_STATE_VARIABLE_LocalsMap_24_24;
    MR_Box conv2_STATE_VARIABLE_NonlocalsMap_26_26;

    SubGoalNonlocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(SubGoalInfo_11);
    SubGoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(SubGoalInfo_11);
    TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Nonlocal_15 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_35_35, SubGoalNonlocals_13, Nonlocals_9);
    Local_16 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_35_35, SubGoalNonlocals_13, Nonlocals_9);
    STATE_VARIABLE_LocalsMap_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjConstraintsInfo_0_19, (MR_Integer) 0)));
    STATE_VARIABLE_NonlocalsMap_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjConstraintsInfo_0_19, (MR_Integer) 1)));
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (VarMap_7));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (SubGoalId_14));
    }
    TypeInfo_39_39 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[0];
    parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_35_35, TypeInfo_39_39, Var_23, Local_16, ((MR_Box) (STATE_VARIABLE_LocalsMap_21_21)), &conv1_STATE_VARIABLE_LocalsMap_24_24);
    STATE_VARIABLE_LocalsMap_24_24 = ((MR_Word) conv1_STATE_VARIABLE_LocalsMap_24_24);
    parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_35_35, TypeInfo_39_39, Var_23, Nonlocal_15, ((MR_Box) (STATE_VARIABLE_NonlocalsMap_22_22)), &conv2_STATE_VARIABLE_NonlocalsMap_26_26);
    STATE_VARIABLE_NonlocalsMap_26_26 = ((MR_Word) conv2_STATE_VARIABLE_NonlocalsMap_26_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ConjConstraintsInfo_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_LocalsMap_24_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_NonlocalsMap_26_26));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word MCVar_6,
  MR_Word Mode_7)
{
  {
    MR_bool succeeded;
    MR_Word Constraint_8;
    MR_Word InitialInst_9;
    MR_Word FinalInst_10;
    MR_Word IsProduced_11;
    MR_Word Var_12;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode_7, &InitialInst_9, &FinalInst_10);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, InitialInst_9);
    succeeded = !(succeeded);
    if (succeeded)
      IsProduced_11 = (MR_Integer) 0;
    else
    {
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, FinalInst_10);
      succeeded = !(succeeded);
      if (succeeded)
        IsProduced_11 = (MR_Integer) 1;
      else
        IsProduced_11 = (MR_Integer) 0;
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (MCVar_6));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (IsProduced_11));
    }
    {
      Constraint_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_8, 0) = ((MR_Box) (Var_12));
    }
    return Constraint_8;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(
  MR_Word ProgVarset_6,
  MR_Word PredId_7,
  MR_Word HeadVar_8,
  MR_Word STATE_VARIABLE_VarInfo_0_11,
  MR_Word * STATE_VARIABLE_VarInfo_12)
{
  {
    MR_Word Var_10;

    check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_6, PredId_7, HeadVar_8, (MR_Word) ((MR_Box) ((MR_Integer) 0)), &Var_10, STATE_VARIABLE_VarInfo_0_11, STATE_VARIABLE_VarInfo_12);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_VarInfo_12;

    check_hlds__build_mode_constraints__add_mc_var_for_pred_head_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_VarInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarInfo_12));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_VarInfo_0_12,
  MR_Word * STATE_VARIABLE_VarInfo_13)
{
  {
    MR_Word PredInfo_8;
    MR_Word ClausesInfo_9;
    MR_Word HeadVars_10;
    MR_Word ProgVarset_11;
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_VarInfo_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClausesInfo_9);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_9, &HeadVars_10);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_9, &ProgVarset_11);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ProgVarset_11));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_14, HeadVars_10, ((MR_Box) (STATE_VARIABLE_VarInfo_0_12)), &conv1_STATE_VARIABLE_VarInfo_13);
    *STATE_VARIABLE_VarInfo_13 = ((MR_Word) conv1_STATE_VARIABLE_VarInfo_13);
  }
}

MR_Word MR_CALL 
check_hlds__build_mode_constraints__var_info_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;

    Var_2 = mercury__varset__init_0_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
    Var_3 = mercury__bimap__init_0_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2]);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__6_6;

    check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__6_6));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_21;
    MR_Word conv0_LambdaHeadVar__4_23;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_21, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_23));
  }
}

void MR_CALL 
check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Decl_13,
  MR_Word Args_14,
  MR_Word STATE_VARIABLE_VarInfo_0_22,
  MR_Word * STATE_VARIABLE_VarInfo_23,
  MR_Word STATE_VARIABLE_Constraints_0_24,
  MR_Word * STATE_VARIABLE_Constraints_25)
{
  {
    MR_Word ProcInfo_17;
    MR_Word ProgVarset_18;
    MR_Word Context_19;
    MR_Word ArgsAtHead_20;
    MR_Word DeclConstraints_21;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_48;
    MR_Box conv2_STATE_VARIABLE_VarInfo_23;
    MR_Word Var_32;
    MR_Box conv4_STATE_VARIABLE_Constraints_25;

    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_10, PredId_11, ProcId_12, &ProcInfo_17);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_17, &ProgVarset_18);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_19);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ProgVarset_18));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_48, Args_14, &ArgsAtHead_20, ((MR_Box) (STATE_VARIABLE_VarInfo_0_22)), &conv2_STATE_VARIABLE_VarInfo_23);
    *STATE_VARIABLE_VarInfo_23 = ((MR_Word) conv2_STATE_VARIABLE_VarInfo_23);
    DeclConstraints_21 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(ModuleInfo_10, ArgsAtHead_20, Decl_13);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_23, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_23, (MR_Integer) 1)));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (ProcId_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_29, DeclConstraints_21, ((MR_Box) (STATE_VARIABLE_Constraints_0_24)), &conv4_STATE_VARIABLE_Constraints_25);
    *STATE_VARIABLE_Constraints_25 = ((MR_Word) conv4_STATE_VARIABLE_Constraints_25);
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_Constraint_8;

    conv0_Constraint_8 = check_hlds__build_mode_constraints__single_mode_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_Constraint_8));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConstraintVars_6,
  MR_Word ArgModes_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    }
    Var_9 = mercury__list__map_corresponding_3_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, Var_10, ConstraintVars_6, ArgModes_7);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_29;

    conv1_HeadVar__3_29 = check_hlds__build_mode_constraints__IntroducedFrom__func__mode_decls_constraints__689__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_29));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    conv0_HeadVar__5_5 = check_hlds__build_mode_constraints__lookup_prog_var_at_path_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarMap_8,
  MR_Word PredId_9,
  MR_Word Decls_10,
  MR_Word HeadVarsList_11,
  MR_Word * Constraints_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_27_27 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
    MR_Word HeadVarsMCVars_13;
    MR_Word ConstraintsList_14;
    MR_Word Constraints0_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word OneModeOnlyConstraints_16;
    MR_Word Var_22;
    MR_Word Var_23;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarMap_8));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Var_18));
    }
    HeadVarsMCVars_13 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[1], TypeInfo_27_27, Var_17, HeadVarsList_11);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__build_mode_constraints__mode_decls_constraints_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
    }
    ConstraintsList_14 = mercury__list__map_corresponding_3_f_0(TypeInfo_27_27, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[5], Var_21, HeadVarsMCVars_13, Decls_10);
    Constraints0_15 = mercury__list__condense_1_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, ConstraintsList_14);
    succeeded = ((MR_tag((MR_Word) Constraints0_15)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constraints0_15, (MR_Integer) 0)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constraints0_15, (MR_Integer) 1)));
      succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          OneModeOnlyConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_22, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      *Constraints_12 = OneModeOnlyConstraints_16;
    else
    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Constraints0_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Constraints_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_VarInfo_67;

    check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_VarInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarInfo_67));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_VarInfo_0_25,
  MR_Word * STATE_VARIABLE_VarInfo_26,
  MR_Word STATE_VARIABLE_Constraints_0_27,
  MR_Word * STATE_VARIABLE_Constraints_28)
{
  {
    MR_Word ClausesInfo_13;
    MR_Word HeadVars_14;
    MR_Word ClausesRep_15;
    MR_Word Clauses_17;
    MR_Word ProgVarset_18;
    MR_Word _ItemNumbers_16;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &ClausesInfo_13);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo_13, &HeadVars_14);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_13, &ClausesRep_15, &_ItemNumbers_16);
    hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_15, &Clauses_17);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_13, &ProgVarset_18);
    if ((Clauses_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_VarInfo_26 = STATE_VARIABLE_VarInfo_0_25;
      *STATE_VARIABLE_Constraints_28 = STATE_VARIABLE_Constraints_0_27;
    }
    else
    {
      MR_Word TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      MR_Word FirstClause_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_17, (MR_Integer) 0)));
      MR_Word Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause_19, (MR_Integer) 3)));
      MR_Word Goals_22;
      MR_Word MainGoal_23;
      MR_Word Nonlocals_24;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_VarInfo_31_31;
      MR_Word Var_32;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_17, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause_19, (MR_Integer) 0)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause_19, (MR_Integer) 1)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause_19, (MR_Integer) 2)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause_19, (MR_Integer) 4)));
      MR_Box conv2_STATE_VARIABLE_VarInfo_31_31;

      Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, TypeCtorInfo_42_42, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[11], Clauses_17);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PredId_9));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (ProgVarset_18));
      }
      mercury__list__foldl_4_p_0(TypeCtorInfo_42_42, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_30, Goals_22, ((MR_Box) (STATE_VARIABLE_VarInfo_0_25)), &conv2_STATE_VARIABLE_VarInfo_31_31);
      STATE_VARIABLE_VarInfo_31_31 = ((MR_Word) conv2_STATE_VARIABLE_VarInfo_31_31);
      {
        MainGoal_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MainGoal_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), MainGoal_23, 1) = ((MR_Box) (Goals_22));
      }
      Var_32 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], HeadVars_14);
      Nonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_32);
      check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(ModuleInfo_8, ProgVarset_18, PredId_9, MainGoal_23, Context_21, (MR_Word) ((MR_Box) ((MR_Integer) 0)), Nonlocals_24, STATE_VARIABLE_VarInfo_31_31, STATE_VARIABLE_VarInfo_26, STATE_VARIABLE_Constraints_0_27, STATE_VARIABLE_Constraints_28);
    }
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv37_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv37_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv37_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv36_LambdaHeadVar__3_206;

    conv36_LambdaHeadVar__3_206 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__577__1_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv36_LambdaHeadVar__3_206));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv35_HeadVar__2_2;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(((MR_Word) wrapper_arg_1), &conv35_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv35_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv33_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equiv_no_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv33_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv33_HeadVar__5_5));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv31_MCVars_12;

    check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv31_MCVars_12);
    *wrapper_arg_3 = ((MR_Box) (conv31_MCVars_12));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv29_MCVars_12;

    check_hlds__build_mode_constraints__cons_prog_var_at_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv29_MCVars_12);
    *wrapper_arg_3 = ((MR_Box) (conv29_MCVars_12));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv27_HeadVar__6_6;

    check_hlds__abstract_mode_constraints__xor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv27_HeadVar__6_6);
    *wrapper_arg_4 = ((MR_Box) (conv27_HeadVar__6_6));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv25_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equiv_no_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv25_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv25_HeadVar__5_5));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv23_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv23_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv23_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv22_LambdaHeadVar__4_188;

    conv22_LambdaHeadVar__4_188 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__629__1_3_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv22_LambdaHeadVar__4_188));
    return wrapper_arg_4;
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__611__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__build_mode_constraints__IntroducedFrom__pred__add_goal_expr_constraints__609__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv20_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv20_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__3_361;

    conv19_HeadVar__3_361 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_goal_expr_constraints__541__1_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_361));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_VarInfo_23;
    MR_Word conv15_STATE_VARIABLE_Constraints_25;

    check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv16_STATE_VARIABLE_VarInfo_23, ((MR_Word) wrapper_arg_4), &conv15_STATE_VARIABLE_Constraints_25);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_VarInfo_23));
    *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_Constraints_25));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_2;

    conv14_HeadVar__2_2 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__2_2;

    conv13_HeadVar__2_2 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_VarInfo_21;
    MR_Word conv9_STATE_VARIABLE_Constraints_23;

    check_hlds__build_mode_constraints__add_nonlocal_var_conj_constraints_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv10_STATE_VARIABLE_VarInfo_21, ((MR_Word) wrapper_arg_5), &conv9_STATE_VARIABLE_Constraints_23);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_VarInfo_21));
    *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Constraints_23));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Constraints_13;

    check_hlds__build_mode_constraints__add_local_var_conj_constraints_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv7_STATE_VARIABLE_Constraints_13);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_Constraints_13));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_VarInfo_23;
    MR_Word conv3_STATE_VARIABLE_Constraints_25;

    check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_VarInfo_23, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_Constraints_25);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_VarInfo_23));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Constraints_25));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConjConstraintsInfo_20;

    check_hlds__build_mode_constraints__add_goal_nonlocals_to_conjunct_production_maps_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ConjConstraintsInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConjConstraintsInfo_20));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_9,
  MR_Word tscc_proc_1_input_2_ProgVarset_10,
  MR_Word tscc_proc_1_input_3_PredId_11,
  MR_Word tscc_proc_1_input_4_Goal_12,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Constraints_25)
{
  {
    MR_Word tscc_proc_2_input_1_ModuleInfo_12;
    MR_Word tscc_proc_2_input_2_ProgVarset_13;
    MR_Word tscc_proc_2_input_3_PredId_14;
    MR_Word tscc_proc_2_input_4_GoalExpr_15;
    MR_Word tscc_proc_2_input_5_Context_16;
    MR_Word tscc_proc_2_input_6_GoalId_17;
    MR_Word tscc_proc_2_input_7_Nonlocals_18;
    MR_Word tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
    MR_Word tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;
    MR_Word tscc_output_1_STATE_VARIABLE_VarInfo_23;
    MR_Word tscc_output_2_STATE_VARIABLE_Constraints_25;

    // The code for TSCC PROC 1: pred check_hlds.build_mode_constraints.add_goal_constraints/8-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred check_hlds.build_mode_constraints.add_goal_constraints/8-0
    // proc 2 in TSCC: pred check_hlds.build_mode_constraints.add_goal_expr_constraints/11-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word ModuleInfo_9 = tscc_proc_1_input_1_ModuleInfo_9;
      MR_Word ProgVarset_10 = tscc_proc_1_input_2_ProgVarset_10;
      MR_Word PredId_11 = tscc_proc_1_input_3_PredId_11;
      MR_Word Goal_12 = tscc_proc_1_input_4_Goal_12;
      MR_Word STATE_VARIABLE_VarInfo_0_22 = tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
      MR_Word STATE_VARIABLE_VarInfo_23;
      MR_Word STATE_VARIABLE_Constraints_0_24 = tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;
      MR_Word STATE_VARIABLE_Constraints_25;
      MR_Word GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0)));
      MR_Word GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1)));
      MR_Word Nonlocals_17;
      MR_Word GoalId_18;
      MR_Word Context_19;
      MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_12;
      MR_Word next_value_of_tscc_proc_2_input_2_ProgVarset_13;
      MR_Word next_value_of_tscc_proc_2_input_3_PredId_14;
      MR_Word next_value_of_tscc_proc_2_input_4_GoalExpr_15;
      MR_Word next_value_of_tscc_proc_2_input_5_Context_16;
      MR_Word next_value_of_tscc_proc_2_input_6_GoalId_17;
      MR_Word next_value_of_tscc_proc_2_input_7_Nonlocals_18;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;

      Nonlocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
      GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_16);
      Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      // direct tailcall eliminated
      next_value_of_tscc_proc_2_input_1_ModuleInfo_12 = ModuleInfo_9;
      next_value_of_tscc_proc_2_input_2_ProgVarset_13 = ProgVarset_10;
      next_value_of_tscc_proc_2_input_3_PredId_14 = PredId_11;
      next_value_of_tscc_proc_2_input_4_GoalExpr_15 = GoalExpr_15;
      next_value_of_tscc_proc_2_input_5_Context_16 = Context_19;
      next_value_of_tscc_proc_2_input_6_GoalId_17 = GoalId_18;
      next_value_of_tscc_proc_2_input_7_Nonlocals_18 = Nonlocals_17;
      next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148 = STATE_VARIABLE_VarInfo_0_22;
      next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150 = STATE_VARIABLE_Constraints_0_24;
      tscc_proc_2_input_1_ModuleInfo_12 = next_value_of_tscc_proc_2_input_1_ModuleInfo_12;
      tscc_proc_2_input_2_ProgVarset_13 = next_value_of_tscc_proc_2_input_2_ProgVarset_13;
      tscc_proc_2_input_3_PredId_14 = next_value_of_tscc_proc_2_input_3_PredId_14;
      tscc_proc_2_input_4_GoalExpr_15 = next_value_of_tscc_proc_2_input_4_GoalExpr_15;
      tscc_proc_2_input_5_Context_16 = next_value_of_tscc_proc_2_input_5_Context_16;
      tscc_proc_2_input_6_GoalId_17 = next_value_of_tscc_proc_2_input_6_GoalId_17;
      tscc_proc_2_input_7_Nonlocals_18 = next_value_of_tscc_proc_2_input_7_Nonlocals_18;
      tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_VarInfo_23 = STATE_VARIABLE_VarInfo_23;
      tscc_output_2_STATE_VARIABLE_Constraints_25 = STATE_VARIABLE_Constraints_25;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ModuleInfo_12 = tscc_proc_2_input_1_ModuleInfo_12;
      MR_Word ProgVarset_13 = tscc_proc_2_input_2_ProgVarset_13;
      MR_Word PredId_14 = tscc_proc_2_input_3_PredId_14;
      MR_Word GoalExpr_15 = tscc_proc_2_input_4_GoalExpr_15;
      MR_Word Context_16 = tscc_proc_2_input_5_Context_16;
      MR_Word GoalId_17 = tscc_proc_2_input_6_GoalId_17;
      MR_Word Nonlocals_18 = tscc_proc_2_input_7_Nonlocals_18;
      MR_Word STATE_VARIABLE_VarInfo_0_148 = tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      MR_Word STATE_VARIABLE_VarInfo_149;
      MR_Word STATE_VARIABLE_Constraints_0_150 = tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;
      MR_Word STATE_VARIABLE_Constraints_151;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtorInfo_369_369;
            MR_Word TypeInfo_370_370;
            MR_Word Goal_84 = (MR_Word) MR_body(((MR_Word) GoalExpr_15), (MR_Integer) 0);
            MR_Word NegatedGoalInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_84, (MR_Integer) 1)));
            MR_Word NegatedGoalId_87;
            MR_Word NonlocalsAtId_88;
            MR_Word NonlocalsConstraintVars_89;
            MR_Word Var_214;
            MR_Word Var_216;
            MR_Word STATE_VARIABLE_Constraints_218_218;
            MR_Word Var_219;
            MR_Word Var_221;
            MR_Word VarMap_287;
            MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_84, (MR_Integer) 0)));
            MR_Word Var_308;
            MR_Box conv30_NonlocalsAtId_88;
            MR_Box conv32_NonlocalsConstraintVars_89;
            MR_Word Var_309;
            MR_Box conv34_STATE_VARIABLE_Constraints_151;

            NegatedGoalId_87 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(NegatedGoalInfo_86);
            Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
            VarMap_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
            {
              Var_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_214, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[3]));
              MR_hl_field(MR_mktag(0), Var_214, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17));
              MR_hl_field(MR_mktag(0), Var_214, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_214, 3) = ((MR_Box) (VarMap_287));
              MR_hl_field(MR_mktag(0), Var_214, 4) = ((MR_Box) (PredId_14));
              MR_hl_field(MR_mktag(0), Var_214, 5) = ((MR_Box) (GoalId_17));
            }
            TypeCtorInfo_369_369 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            TypeInfo_370_370 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
            parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_369_369, TypeInfo_370_370, Var_214, Nonlocals_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv30_NonlocalsAtId_88);
            NonlocalsAtId_88 = ((MR_Word) conv30_NonlocalsAtId_88);
            {
              Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[3]));
              MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18));
              MR_hl_field(MR_mktag(0), Var_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_216, 3) = ((MR_Box) (VarMap_287));
              MR_hl_field(MR_mktag(0), Var_216, 4) = ((MR_Box) (PredId_14));
              MR_hl_field(MR_mktag(0), Var_216, 5) = ((MR_Box) (NegatedGoalId_87));
            }
            parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_369_369, TypeInfo_370_370, Var_216, Nonlocals_18, ((MR_Box) (NonlocalsAtId_88)), &conv32_NonlocalsConstraintVars_89);
            NonlocalsConstraintVars_89 = ((MR_Word) conv32_NonlocalsConstraintVars_89);
            check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Goal_84, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_218_218);
            Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
            Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
            {
              Var_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[3]));
              MR_hl_field(MR_mktag(0), Var_219, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19));
              MR_hl_field(MR_mktag(0), Var_219, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_219, 3) = ((MR_Box) (Var_221));
              MR_hl_field(MR_mktag(0), Var_219, 4) = ((MR_Box) (Context_16));
            }
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_219, NonlocalsConstraintVars_89, ((MR_Box) (STATE_VARIABLE_Constraints_218_218)), &conv34_STATE_VARIABLE_Constraints_151);
            STATE_VARIABLE_Constraints_151 = ((MR_Word) conv34_STATE_VARIABLE_Constraints_151);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LHSvar_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 0)));
            MR_Word RHS_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 1)));
            MR_Word LHSvarProducedHere_61;
            MR_Word STATE_VARIABLE_VarInfo_232_232;
            MR_Word _Mode_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 2)));
            MR_Word _Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 3)));
            MR_Word _UnifyContext_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 4)));

            check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_13, PredId_14, LHSvar_56, GoalId_17, &LHSvarProducedHere_61, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_232_232);
            switch (MR_tag((MR_Word) RHS_57)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word RHSvar_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_57, (MR_Integer) 0)));
                  MR_Word RHSvarProducedHere_63;
                  MR_Word Var_246;
                  MR_Word Var_303;

                  check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_13, PredId_14, RHSvar_62, GoalId_17, &RHSvarProducedHere_63, STATE_VARIABLE_VarInfo_232_232, &STATE_VARIABLE_VarInfo_149);
                  Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                  Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                  check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_246, Context_16, LHSvarProducedHere_61, RHSvarProducedHere_63, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgsProducedHere_66;
                  MR_Word Args_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 2)));
                  MR_Word _Functor_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 0)));
                  MR_Word _IsExistConstr_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 1)));

                  check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, Args_283, GoalId_17, &ArgsProducedHere_66, STATE_VARIABLE_VarInfo_232_232, &STATE_VARIABLE_VarInfo_149);
                  if ((ArgsProducedHere_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    STATE_VARIABLE_Constraints_151 = STATE_VARIABLE_Constraints_0_150;
                  else
                  {
                    MR_Word Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgsProducedHere_66, (MR_Integer) 1)));
                    MR_Word Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgsProducedHere_66, (MR_Integer) 0)));
                    MR_Word Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                    MR_Word Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));

                    if ((Var_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_413, Context_16, LHSvarProducedHere_61, Var_411, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                    else
                    {
                      MR_Word STATE_VARIABLE_Constraints_242_242;
                      MR_Word Var_243;
                      MR_Word Var_305;

                      check_hlds__abstract_mode_constraints__equivalent_5_p_0(Var_413, Context_16, ArgsProducedHere_66, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_242_242);
                      Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                      Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                      check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_243, Context_16, LHSvarProducedHere_61, Var_411, STATE_VARIABLE_Constraints_242_242, &STATE_VARIABLE_Constraints_151);
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "unify with lambda goal");
                    return;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 0)));
            MR_Word Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 2)));
            MR_Word CalleePredInfo_31;
            MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 1)));
            MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 3)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 4)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 5)));

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, CalleePredId_25, &CalleePredInfo_31);
            succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(CalleePredInfo_31);
            if (succeeded)
            {
              MR_Word CalleeClausesInfo_33;
              MR_Word CalleeHeadVars_34;
              MR_Word STATE_VARIABLE_Constraints_260_260;

              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(CalleePredInfo_31, &CalleeClausesInfo_33);
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(CalleeClausesInfo_33, &CalleeHeadVars_34);
              check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(CalleePredId_25, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_260_260);
              check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(ProgVarset_13, Context_16, GoalId_17, PredId_14, Args_27, CalleePredId_25, CalleeHeadVars_34, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_260_260, &STATE_VARIABLE_Constraints_151);
            }
            else
            {
              MR_Word TypeCtorInfo_339_339;
              MR_Word CalleeProcTable_35;
              MR_Word CalleeProcInfos_36;
              MR_Word CalleeArgModeDecls_37;

              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(CalleePredInfo_31, &CalleeProcTable_35);
              TypeCtorInfo_339_339 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
              mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, TypeCtorInfo_339_339, CalleeProcTable_35, &CalleeProcInfos_36);
              mercury__list__map_3_p_0(TypeCtorInfo_339_339, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[9], CalleeProcInfos_36, &CalleeArgModeDecls_37);
              check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(ModuleInfo_12, ProgVarset_13, Context_16, PredId_14, CalleeArgModeDecls_37, GoalId_17, Args_27, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Details_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 5)));

                switch (MR_tag((MR_Word) Details_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "higher_order generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "class_method generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "event_call generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                    }
                    break;
                }
                STATE_VARIABLE_VarInfo_149 = STATE_VARIABLE_VarInfo_0_148;
                STATE_VARIABLE_Constraints_151 = STATE_VARIABLE_Constraints_0_150;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CalledPred_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Integer ProcId_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word ForeignArgs_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word CallArgs_130;
                MR_Word ProcInfo_132;
                MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 5)));
                MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 6)));
                MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 7)));
                MR_Word Var_131;
                MR_Word Var_162;
                MR_Word Var_409;
                MR_Word _OrigDecl_133;

                CallArgs_130 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[4], ForeignArgs_126);
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_12, CalledPred_124, ProcId_125, &Var_131, &ProcInfo_132);
                {
                  Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_162, 0) = NULL;
                }
                hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_132, &Var_409);
                succeeded = check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], Var_162, Var_409);
                if (succeeded)
                {
                  MR_Word Decl_134;
                  MR_Word Var_163;

                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_132, &Decl_134);
                  {
                    Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Decl_134));
                    MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(ModuleInfo_12, ProgVarset_13, Context_16, PredId_14, Var_163, GoalId_17, CallArgs_130, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "no mode declaration for foreign proc");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));

                switch (ConjType_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "par_conj");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word TypeCtorInfo_317_317;
                      MR_Word TypeCtorInfo_324_324;
                      MR_Word TypeCtorInfo_325_325;
                      MR_Word TypeInfo_330_330;
                      MR_Word TypeInfo_331_331;
                      MR_Word VarMap_23;
                      MR_Word ConjConstraintsInfo_24;
                      MR_Word Var_269;
                      MR_Word Var_270;
                      MR_Word Var_271;
                      MR_Word STATE_VARIABLE_VarInfo_272_272;
                      MR_Word STATE_VARIABLE_Constraints_273_273;
                      MR_Word Var_274;
                      MR_Word Var_275;
                      MR_Word STATE_VARIABLE_Constraints_276_276;
                      MR_Word Var_277;
                      MR_Word Var_278;
                      MR_Word Var_279;
                      MR_Word Var_299;
                      MR_Box conv2_ConjConstraintsInfo_24;
                      MR_Box conv6_STATE_VARIABLE_VarInfo_272_272;
                      MR_Box conv5_STATE_VARIABLE_Constraints_273_273;
                      MR_Word Var_300;
                      MR_Word Var_301;
                      MR_Box conv8_STATE_VARIABLE_Constraints_276_276;
                      MR_Word Var_302;
                      MR_Box conv12_STATE_VARIABLE_VarInfo_149;
                      MR_Box conv11_STATE_VARIABLE_Constraints_151;

                      Var_270 = check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0();
                      TypeCtorInfo_317_317 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                      Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
                      VarMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
                      {
                        Var_269 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_269, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[0]));
                        MR_hl_field(MR_mktag(0), Var_269, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_269, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_269, 3) = ((MR_Box) (VarMap_23));
                        MR_hl_field(MR_mktag(0), Var_269, 4) = ((MR_Box) (PredId_14));
                        MR_hl_field(MR_mktag(0), Var_269, 5) = ((MR_Box) (Nonlocals_18));
                      }
                      mercury__list__foldl_4_p_0(TypeCtorInfo_317_317, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0, Var_269, Goals_22, ((MR_Box) (Var_270)), &conv2_ConjConstraintsInfo_24);
                      ConjConstraintsInfo_24 = ((MR_Word) conv2_ConjConstraintsInfo_24);
                      {
                        Var_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_271, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), Var_271, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3));
                        MR_hl_field(MR_mktag(0), Var_271, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_271, 3) = ((MR_Box) (ModuleInfo_12));
                        MR_hl_field(MR_mktag(0), Var_271, 4) = ((MR_Box) (ProgVarset_13));
                        MR_hl_field(MR_mktag(0), Var_271, 5) = ((MR_Box) (PredId_14));
                      }
                      TypeCtorInfo_324_324 = (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
                      TypeCtorInfo_325_325 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                      mercury__list__foldl2_6_p_0(TypeCtorInfo_317_317, TypeCtorInfo_324_324, TypeCtorInfo_325_325, Var_271, Goals_22, ((MR_Box) (STATE_VARIABLE_VarInfo_0_148)), &conv6_STATE_VARIABLE_VarInfo_272_272, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv5_STATE_VARIABLE_Constraints_273_273);
                      STATE_VARIABLE_VarInfo_272_272 = ((MR_Word) conv6_STATE_VARIABLE_VarInfo_272_272);
                      STATE_VARIABLE_Constraints_273_273 = ((MR_Word) conv5_STATE_VARIABLE_Constraints_273_273);
                      Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 0)));
                      Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 1)));
                      {
                        Var_274 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[1]));
                        MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_274, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_274, 3) = ((MR_Box) (Var_277));
                        MR_hl_field(MR_mktag(0), Var_274, 4) = ((MR_Box) (Context_16));
                      }
                      Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 0)));
                      Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 1)));
                      TypeInfo_330_330 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
                      TypeInfo_331_331 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                      mercury__map__foldl_4_p_0(TypeInfo_330_330, TypeInfo_331_331, TypeCtorInfo_325_325, Var_274, Var_275, ((MR_Box) (STATE_VARIABLE_Constraints_273_273)), &conv8_STATE_VARIABLE_Constraints_276_276);
                      STATE_VARIABLE_Constraints_276_276 = ((MR_Word) conv8_STATE_VARIABLE_Constraints_276_276);
                      {
                        Var_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_10[0]));
                        MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5));
                        MR_hl_field(MR_mktag(0), Var_278, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(0), Var_278, 3) = ((MR_Box) (ProgVarset_13));
                        MR_hl_field(MR_mktag(0), Var_278, 4) = ((MR_Box) (PredId_14));
                        MR_hl_field(MR_mktag(0), Var_278, 5) = ((MR_Box) (Context_16));
                        MR_hl_field(MR_mktag(0), Var_278, 6) = ((MR_Box) (GoalId_17));
                      }
                      Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 0)));
                      Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 1)));
                      mercury__map__foldl2_6_p_0(TypeInfo_330_330, TypeInfo_331_331, TypeCtorInfo_324_324, TypeCtorInfo_325_325, Var_278, Var_279, ((MR_Box) (STATE_VARIABLE_VarInfo_272_272)), &conv12_STATE_VARIABLE_VarInfo_149, ((MR_Box) (STATE_VARIABLE_Constraints_276_276)), &conv11_STATE_VARIABLE_Constraints_151);
                      STATE_VARIABLE_VarInfo_149 = ((MR_Word) conv12_STATE_VARIABLE_VarInfo_149);
                      STATE_VARIABLE_Constraints_151 = ((MR_Word) conv11_STATE_VARIABLE_Constraints_151);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_343_343 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word TypeCtorInfo_344_344 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
                MR_Word TypeCtorInfo_356_356;
                MR_Word TypeInfo_358_358;
                MR_Word DisjunctGoalIds_79;
                MR_Word NonlocalsHere_80;
                MR_Word NonlocalsAtDisjuncts_81;
                MR_Word GoalInfos_82;
                MR_Word EquivVarss_83;
                MR_Word STATE_VARIABLE_VarInfo_222_222;
                MR_Word Var_225;
                MR_Word STATE_VARIABLE_Constraints_227_227;
                MR_Word Var_229;
                MR_Word Var_231;
                MR_Word Goals_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Box conv18_STATE_VARIABLE_VarInfo_149;
                MR_Box conv17_STATE_VARIABLE_Constraints_227_227;
                MR_Word Var_307;
                MR_Box conv21_STATE_VARIABLE_Constraints_151;

                GoalInfos_82 = mercury__list__map_2_f_0(TypeCtorInfo_343_343, TypeCtorInfo_344_344, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[5], Goals_286);
                DisjunctGoalIds_79 = mercury__list__map_2_f_0(TypeCtorInfo_344_344, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[6], GoalInfos_82);
                check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(ProgVarset_13, PredId_14, GoalId_17, DisjunctGoalIds_79, Nonlocals_18, &NonlocalsHere_80, &NonlocalsAtDisjuncts_81, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_222_222);
                {
                  Var_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_225, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), Var_225, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_225, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_225, 3) = ((MR_Box) (ModuleInfo_12));
                  MR_hl_field(MR_mktag(0), Var_225, 4) = ((MR_Box) (ProgVarset_13));
                  MR_hl_field(MR_mktag(0), Var_225, 5) = ((MR_Box) (PredId_14));
                }
                TypeCtorInfo_356_356 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                mercury__list__foldl2_6_p_0(TypeCtorInfo_343_343, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, TypeCtorInfo_356_356, Var_225, Goals_286, ((MR_Box) (STATE_VARIABLE_VarInfo_222_222)), &conv18_STATE_VARIABLE_VarInfo_149, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv17_STATE_VARIABLE_Constraints_227_227);
                STATE_VARIABLE_VarInfo_149 = ((MR_Word) conv18_STATE_VARIABLE_VarInfo_149);
                STATE_VARIABLE_Constraints_227_227 = ((MR_Word) conv17_STATE_VARIABLE_Constraints_227_227);
                TypeInfo_358_358 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_83 = mercury__list__map_corresponding_3_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], TypeInfo_358_358, TypeInfo_358_358, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[7], NonlocalsHere_80, NonlocalsAtDisjuncts_81);
                Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_229, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10));
                  MR_hl_field(MR_mktag(0), Var_229, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_229, 3) = ((MR_Box) (Var_231));
                  MR_hl_field(MR_mktag(0), Var_229, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_358_358, TypeCtorInfo_356_356, Var_229, EquivVarss_83, ((MR_Box) (STATE_VARIABLE_Constraints_227_227)), &conv21_STATE_VARIABLE_Constraints_151);
                STATE_VARIABLE_Constraints_151 = ((MR_Word) conv21_STATE_VARIABLE_Constraints_151);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "switch");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_380_380;
                MR_Word TypeInfo_381_381;
                MR_Word SomeGoalInfo_92;
                MR_Word SomeGoalId_93;
                MR_Word NonlocalsList_94;
                MR_Word NonlocalsAtSubGoal_95;
                MR_Word STATE_VARIABLE_VarInfo_201_201;
                MR_Word STATE_VARIABLE_VarInfo_202_202;
                MR_Word Var_209;
                MR_Word STATE_VARIABLE_Constraints_210_210;
                MR_Word Var_211;
                MR_Word NonlocalsHere_290;
                MR_Word EquivVarss_291;
                MR_Word Goal_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word _Reason_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_292, (MR_Integer) 0)));
                MR_Word Var_310;
                MR_Box conv38_STATE_VARIABLE_Constraints_210_210;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_9;
                MR_Word next_value_of_tscc_proc_1_input_2_ProgVarset_10;
                MR_Word next_value_of_tscc_proc_1_input_3_PredId_11;
                MR_Word next_value_of_tscc_proc_1_input_4_Goal_12;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;

                SomeGoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_292, (MR_Integer) 1)));
                SomeGoalId_93 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(SomeGoalInfo_92);
                NonlocalsList_94 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_18);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_94, GoalId_17, &NonlocalsHere_290, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_201_201);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_94, SomeGoalId_93, &NonlocalsAtSubGoal_95, STATE_VARIABLE_VarInfo_201_201, &STATE_VARIABLE_VarInfo_202_202);
                TypeInfo_380_380 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
                TypeInfo_381_381 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_291 = mercury__list__map_corresponding_3_f_0(TypeInfo_380_380, TypeInfo_380_380, TypeInfo_381_381, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[10], NonlocalsHere_290, NonlocalsAtSubGoal_95);
                Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 0)));
                Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 1)));
                {
                  Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_209, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_209, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22));
                  MR_hl_field(MR_mktag(0), Var_209, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_209, 3) = ((MR_Box) (Var_211));
                  MR_hl_field(MR_mktag(0), Var_209, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_381_381, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_209, EquivVarss_291, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv38_STATE_VARIABLE_Constraints_210_210);
                STATE_VARIABLE_Constraints_210_210 = ((MR_Word) conv38_STATE_VARIABLE_Constraints_210_210);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_ModuleInfo_9 = ModuleInfo_12;
                next_value_of_tscc_proc_1_input_2_ProgVarset_10 = ProgVarset_13;
                next_value_of_tscc_proc_1_input_3_PredId_11 = PredId_14;
                next_value_of_tscc_proc_1_input_4_Goal_12 = Goal_292;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22 = STATE_VARIABLE_VarInfo_202_202;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24 = STATE_VARIABLE_Constraints_210_210;
                tscc_proc_1_input_1_ModuleInfo_9 = next_value_of_tscc_proc_1_input_1_ModuleInfo_9;
                tscc_proc_1_input_2_ProgVarset_10 = next_value_of_tscc_proc_1_input_2_ProgVarset_10;
                tscc_proc_1_input_3_PredId_11 = next_value_of_tscc_proc_1_input_3_PredId_11;
                tscc_proc_1_input_4_Goal_12 = next_value_of_tscc_proc_1_input_4_Goal_12;
                tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
                tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word TypeInfo_389_389;
                MR_Word TypeInfo_392_392;
                MR_Word TypeInfo_393_393;
                MR_Word TypeCtorInfo_397_397;
                MR_Word ExistVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Cond_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word Then_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word Else_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word CondInfo_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_99, (MR_Integer) 1)));
                MR_Word ThenInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_100, (MR_Integer) 1)));
                MR_Word ElseInfo_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_101, (MR_Integer) 1)));
                MR_Word CondId_108;
                MR_Word ThenId_109;
                MR_Word ElseId_110;
                MR_Word NonlocalsAtCond_111;
                MR_Word NonlocalsAtThen_112;
                MR_Word NonlocalsAtElse_113;
                MR_Word CondNonlocals_114;
                MR_Word ThenNonlocals_115;
                MR_Word NonlocalToCond_116;
                MR_Word LocalAndShared_117;
                MR_Word LocalAndSharedAtCond_118;
                MR_Word LocalAndSharedAtThen_119;
                MR_Word STATE_VARIABLE_VarInfo_170_170;
                MR_Word STATE_VARIABLE_VarInfo_171_171;
                MR_Word STATE_VARIABLE_VarInfo_172_172;
                MR_Word STATE_VARIABLE_VarInfo_173_173;
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word STATE_VARIABLE_VarInfo_176_176;
                MR_Word STATE_VARIABLE_VarInfo_177_177;
                MR_Word STATE_VARIABLE_VarInfo_178_178;
                MR_Word STATE_VARIABLE_Constraints_179_179;
                MR_Word STATE_VARIABLE_VarInfo_180_180;
                MR_Word STATE_VARIABLE_Constraints_181_181;
                MR_Word STATE_VARIABLE_Constraints_183_183;
                MR_Word Var_192;
                MR_Word STATE_VARIABLE_Constraints_193_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word STATE_VARIABLE_Constraints_196_196;
                MR_Word Var_197;
                MR_Word Var_198;
                MR_Word Var_200;
                MR_Word NonlocalsHere_296;
                MR_Word EquivVarss_297;
                MR_Word NonlocalsList_298;
                MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_99, (MR_Integer) 0)));
                MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_100, (MR_Integer) 0)));
                MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_101, (MR_Integer) 0)));
                MR_Word Var_311;
                MR_Box conv24_STATE_VARIABLE_Constraints_193_193;
                MR_Word Var_312;
                MR_Box conv26_STATE_VARIABLE_Constraints_196_196;
                MR_Word Var_313;
                MR_Box conv28_STATE_VARIABLE_Constraints_151;

                CondId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(CondInfo_103);
                ThenId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ThenInfo_105);
                ElseId_110 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ElseInfo_107);
                NonlocalsList_298 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_18);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, GoalId_17, &NonlocalsHere_296, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_170_170);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, CondId_108, &NonlocalsAtCond_111, STATE_VARIABLE_VarInfo_170_170, &STATE_VARIABLE_VarInfo_171_171);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, ThenId_109, &NonlocalsAtThen_112, STATE_VARIABLE_VarInfo_171_171, &STATE_VARIABLE_VarInfo_172_172);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, ElseId_110, &NonlocalsAtElse_113, STATE_VARIABLE_VarInfo_172_172, &STATE_VARIABLE_VarInfo_173_173);
                CondNonlocals_114 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CondInfo_103);
                ThenNonlocals_115 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ThenInfo_105);
                {
                  Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[4]));
                  MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11));
                  MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (CondNonlocals_114));
                }
                TypeInfo_389_389 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
                mercury__list__filter_3_p_0(TypeInfo_389_389, Var_174, ExistVars_98, &NonlocalToCond_116);
                {
                  Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[4]));
                  MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12));
                  MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (ThenNonlocals_115));
                }
                mercury__list__filter_3_p_0(TypeInfo_389_389, Var_175, NonlocalToCond_116, &LocalAndShared_117);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, LocalAndShared_117, CondId_108, &LocalAndSharedAtCond_118, STATE_VARIABLE_VarInfo_173_173, &STATE_VARIABLE_VarInfo_176_176);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, LocalAndShared_117, ThenId_109, &LocalAndSharedAtThen_119, STATE_VARIABLE_VarInfo_176_176, &STATE_VARIABLE_VarInfo_177_177);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Cond_99, STATE_VARIABLE_VarInfo_177_177, &STATE_VARIABLE_VarInfo_178_178, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_179_179);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Then_100, STATE_VARIABLE_VarInfo_178_178, &STATE_VARIABLE_VarInfo_180_180, STATE_VARIABLE_Constraints_179_179, &STATE_VARIABLE_Constraints_181_181);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Else_101, STATE_VARIABLE_VarInfo_180_180, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_181_181, &STATE_VARIABLE_Constraints_183_183);
                TypeInfo_392_392 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
                TypeInfo_393_393 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_297 = mercury__list__map_corresponding3_4_f_0(TypeInfo_392_392, TypeInfo_392_392, TypeInfo_392_392, TypeInfo_393_393, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[8], NonlocalsHere_296, NonlocalsAtThen_112, NonlocalsAtElse_113);
                Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14));
                  MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_192, 3) = ((MR_Box) (Var_194));
                  MR_hl_field(MR_mktag(0), Var_192, 4) = ((MR_Box) (Context_16));
                }
                TypeCtorInfo_397_397 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                mercury__list__foldl_4_p_0(TypeInfo_393_393, TypeCtorInfo_397_397, Var_192, EquivVarss_297, ((MR_Box) (STATE_VARIABLE_Constraints_183_183)), &conv24_STATE_VARIABLE_Constraints_193_193);
                STATE_VARIABLE_Constraints_193_193 = ((MR_Word) conv24_STATE_VARIABLE_Constraints_193_193);
                Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15));
                  MR_hl_field(MR_mktag(0), Var_195, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_195, 3) = ((MR_Box) (Var_197));
                  MR_hl_field(MR_mktag(0), Var_195, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_392_392, TypeCtorInfo_397_397, Var_195, NonlocalsAtCond_111, ((MR_Box) (STATE_VARIABLE_Constraints_193_193)), &conv26_STATE_VARIABLE_Constraints_196_196);
                STATE_VARIABLE_Constraints_196_196 = ((MR_Word) conv26_STATE_VARIABLE_Constraints_196_196);
                Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_198, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[2]));
                  MR_hl_field(MR_mktag(0), Var_198, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16));
                  MR_hl_field(MR_mktag(0), Var_198, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_198, 3) = ((MR_Box) (Var_200));
                  MR_hl_field(MR_mktag(0), Var_198, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_corresponding_5_p_0(TypeInfo_392_392, TypeInfo_392_392, TypeCtorInfo_397_397, Var_198, LocalAndSharedAtCond_118, LocalAndSharedAtThen_119, ((MR_Box) (STATE_VARIABLE_Constraints_196_196)), &conv28_STATE_VARIABLE_Constraints_151);
                STATE_VARIABLE_Constraints_151 = ((MR_Word) conv28_STATE_VARIABLE_Constraints_151);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) Shorthand_135)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "shorthand goal");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: atomic_goal");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: try_goal");
                        return;
                      }
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_VarInfo_23 = STATE_VARIABLE_VarInfo_149;
      tscc_output_2_STATE_VARIABLE_Constraints_25 = STATE_VARIABLE_Constraints_151;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23 = tscc_output_1_STATE_VARIABLE_VarInfo_23;
    *tscc_output_ptr_2_STATE_VARIABLE_Constraints_25 = tscc_output_2_STATE_VARIABLE_Constraints_25;
    return;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0(
  MR_Word tscc_proc_2_input_1_ModuleInfo_12,
  MR_Word tscc_proc_2_input_2_ProgVarset_13,
  MR_Word tscc_proc_2_input_3_PredId_14,
  MR_Word tscc_proc_2_input_4_GoalExpr_15,
  MR_Word tscc_proc_2_input_5_Context_16,
  MR_Word tscc_proc_2_input_6_GoalId_17,
  MR_Word tscc_proc_2_input_7_Nonlocals_18,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Constraints_25)
{
  {
    MR_Word tscc_proc_1_input_1_ModuleInfo_9;
    MR_Word tscc_proc_1_input_2_ProgVarset_10;
    MR_Word tscc_proc_1_input_3_PredId_11;
    MR_Word tscc_proc_1_input_4_Goal_12;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;
    MR_Word tscc_output_1_STATE_VARIABLE_VarInfo_23;
    MR_Word tscc_output_2_STATE_VARIABLE_Constraints_25;

    // The code for TSCC PROC 2: pred check_hlds.build_mode_constraints.add_goal_expr_constraints/11-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred check_hlds.build_mode_constraints.add_goal_constraints/8-0
    // proc 2 in TSCC: pred check_hlds.build_mode_constraints.add_goal_expr_constraints/11-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word ModuleInfo_9 = tscc_proc_1_input_1_ModuleInfo_9;
      MR_Word ProgVarset_10 = tscc_proc_1_input_2_ProgVarset_10;
      MR_Word PredId_11 = tscc_proc_1_input_3_PredId_11;
      MR_Word Goal_12 = tscc_proc_1_input_4_Goal_12;
      MR_Word STATE_VARIABLE_VarInfo_0_22 = tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
      MR_Word STATE_VARIABLE_VarInfo_23;
      MR_Word STATE_VARIABLE_Constraints_0_24 = tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;
      MR_Word STATE_VARIABLE_Constraints_25;
      MR_Word GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0)));
      MR_Word GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1)));
      MR_Word Nonlocals_17;
      MR_Word GoalId_18;
      MR_Word Context_19;
      MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_12;
      MR_Word next_value_of_tscc_proc_2_input_2_ProgVarset_13;
      MR_Word next_value_of_tscc_proc_2_input_3_PredId_14;
      MR_Word next_value_of_tscc_proc_2_input_4_GoalExpr_15;
      MR_Word next_value_of_tscc_proc_2_input_5_Context_16;
      MR_Word next_value_of_tscc_proc_2_input_6_GoalId_17;
      MR_Word next_value_of_tscc_proc_2_input_7_Nonlocals_18;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;

      Nonlocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
      GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_16);
      Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      // direct tailcall eliminated
      next_value_of_tscc_proc_2_input_1_ModuleInfo_12 = ModuleInfo_9;
      next_value_of_tscc_proc_2_input_2_ProgVarset_13 = ProgVarset_10;
      next_value_of_tscc_proc_2_input_3_PredId_14 = PredId_11;
      next_value_of_tscc_proc_2_input_4_GoalExpr_15 = GoalExpr_15;
      next_value_of_tscc_proc_2_input_5_Context_16 = Context_19;
      next_value_of_tscc_proc_2_input_6_GoalId_17 = GoalId_18;
      next_value_of_tscc_proc_2_input_7_Nonlocals_18 = Nonlocals_17;
      next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148 = STATE_VARIABLE_VarInfo_0_22;
      next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150 = STATE_VARIABLE_Constraints_0_24;
      tscc_proc_2_input_1_ModuleInfo_12 = next_value_of_tscc_proc_2_input_1_ModuleInfo_12;
      tscc_proc_2_input_2_ProgVarset_13 = next_value_of_tscc_proc_2_input_2_ProgVarset_13;
      tscc_proc_2_input_3_PredId_14 = next_value_of_tscc_proc_2_input_3_PredId_14;
      tscc_proc_2_input_4_GoalExpr_15 = next_value_of_tscc_proc_2_input_4_GoalExpr_15;
      tscc_proc_2_input_5_Context_16 = next_value_of_tscc_proc_2_input_5_Context_16;
      tscc_proc_2_input_6_GoalId_17 = next_value_of_tscc_proc_2_input_6_GoalId_17;
      tscc_proc_2_input_7_Nonlocals_18 = next_value_of_tscc_proc_2_input_7_Nonlocals_18;
      tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_VarInfo_23 = STATE_VARIABLE_VarInfo_23;
      tscc_output_2_STATE_VARIABLE_Constraints_25 = STATE_VARIABLE_Constraints_25;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ModuleInfo_12 = tscc_proc_2_input_1_ModuleInfo_12;
      MR_Word ProgVarset_13 = tscc_proc_2_input_2_ProgVarset_13;
      MR_Word PredId_14 = tscc_proc_2_input_3_PredId_14;
      MR_Word GoalExpr_15 = tscc_proc_2_input_4_GoalExpr_15;
      MR_Word Context_16 = tscc_proc_2_input_5_Context_16;
      MR_Word GoalId_17 = tscc_proc_2_input_6_GoalId_17;
      MR_Word Nonlocals_18 = tscc_proc_2_input_7_Nonlocals_18;
      MR_Word STATE_VARIABLE_VarInfo_0_148 = tscc_proc_2_input_8_STATE_VARIABLE_VarInfo_0_148;
      MR_Word STATE_VARIABLE_VarInfo_149;
      MR_Word STATE_VARIABLE_Constraints_0_150 = tscc_proc_2_input_9_STATE_VARIABLE_Constraints_0_150;
      MR_Word STATE_VARIABLE_Constraints_151;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtorInfo_369_369;
            MR_Word TypeInfo_370_370;
            MR_Word Goal_84 = (MR_Word) MR_body(((MR_Word) GoalExpr_15), (MR_Integer) 0);
            MR_Word NegatedGoalInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_84, (MR_Integer) 1)));
            MR_Word NegatedGoalId_87;
            MR_Word NonlocalsAtId_88;
            MR_Word NonlocalsConstraintVars_89;
            MR_Word Var_214;
            MR_Word Var_216;
            MR_Word STATE_VARIABLE_Constraints_218_218;
            MR_Word Var_219;
            MR_Word Var_221;
            MR_Word VarMap_287;
            MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_84, (MR_Integer) 0)));
            MR_Word Var_308;
            MR_Box conv30_NonlocalsAtId_88;
            MR_Box conv32_NonlocalsConstraintVars_89;
            MR_Word Var_309;
            MR_Box conv34_STATE_VARIABLE_Constraints_151;

            NegatedGoalId_87 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(NegatedGoalInfo_86);
            Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
            VarMap_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
            {
              Var_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_214, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[3]));
              MR_hl_field(MR_mktag(0), Var_214, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_17));
              MR_hl_field(MR_mktag(0), Var_214, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_214, 3) = ((MR_Box) (VarMap_287));
              MR_hl_field(MR_mktag(0), Var_214, 4) = ((MR_Box) (PredId_14));
              MR_hl_field(MR_mktag(0), Var_214, 5) = ((MR_Box) (GoalId_17));
            }
            TypeCtorInfo_369_369 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            TypeInfo_370_370 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
            parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_369_369, TypeInfo_370_370, Var_214, Nonlocals_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv30_NonlocalsAtId_88);
            NonlocalsAtId_88 = ((MR_Word) conv30_NonlocalsAtId_88);
            {
              Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[3]));
              MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_18));
              MR_hl_field(MR_mktag(0), Var_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_216, 3) = ((MR_Box) (VarMap_287));
              MR_hl_field(MR_mktag(0), Var_216, 4) = ((MR_Box) (PredId_14));
              MR_hl_field(MR_mktag(0), Var_216, 5) = ((MR_Box) (NegatedGoalId_87));
            }
            parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_369_369, TypeInfo_370_370, Var_216, Nonlocals_18, ((MR_Box) (NonlocalsAtId_88)), &conv32_NonlocalsConstraintVars_89);
            NonlocalsConstraintVars_89 = ((MR_Word) conv32_NonlocalsConstraintVars_89);
            check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Goal_84, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_218_218);
            Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
            Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
            {
              Var_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[3]));
              MR_hl_field(MR_mktag(0), Var_219, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_19));
              MR_hl_field(MR_mktag(0), Var_219, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_219, 3) = ((MR_Box) (Var_221));
              MR_hl_field(MR_mktag(0), Var_219, 4) = ((MR_Box) (Context_16));
            }
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_219, NonlocalsConstraintVars_89, ((MR_Box) (STATE_VARIABLE_Constraints_218_218)), &conv34_STATE_VARIABLE_Constraints_151);
            STATE_VARIABLE_Constraints_151 = ((MR_Word) conv34_STATE_VARIABLE_Constraints_151);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LHSvar_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 0)));
            MR_Word RHS_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 1)));
            MR_Word LHSvarProducedHere_61;
            MR_Word STATE_VARIABLE_VarInfo_232_232;
            MR_Word _Mode_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 2)));
            MR_Word _Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 3)));
            MR_Word _UnifyContext_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 4)));

            check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_13, PredId_14, LHSvar_56, GoalId_17, &LHSvarProducedHere_61, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_232_232);
            switch (MR_tag((MR_Word) RHS_57)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word RHSvar_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_57, (MR_Integer) 0)));
                  MR_Word RHSvarProducedHere_63;
                  MR_Word Var_246;
                  MR_Word Var_303;

                  check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(ProgVarset_13, PredId_14, RHSvar_62, GoalId_17, &RHSvarProducedHere_63, STATE_VARIABLE_VarInfo_232_232, &STATE_VARIABLE_VarInfo_149);
                  Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                  Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                  check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_246, Context_16, LHSvarProducedHere_61, RHSvarProducedHere_63, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgsProducedHere_66;
                  MR_Word Args_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 2)));
                  MR_Word _Functor_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 0)));
                  MR_Word _IsExistConstr_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_57, (MR_Integer) 1)));

                  check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, Args_283, GoalId_17, &ArgsProducedHere_66, STATE_VARIABLE_VarInfo_232_232, &STATE_VARIABLE_VarInfo_149);
                  if ((ArgsProducedHere_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    STATE_VARIABLE_Constraints_151 = STATE_VARIABLE_Constraints_0_150;
                  else
                  {
                    MR_Word Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgsProducedHere_66, (MR_Integer) 1)));
                    MR_Word Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgsProducedHere_66, (MR_Integer) 0)));
                    MR_Word Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                    MR_Word Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));

                    if ((Var_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_413, Context_16, LHSvarProducedHere_61, Var_411, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                    else
                    {
                      MR_Word STATE_VARIABLE_Constraints_242_242;
                      MR_Word Var_243;
                      MR_Word Var_305;

                      check_hlds__abstract_mode_constraints__equivalent_5_p_0(Var_413, Context_16, ArgsProducedHere_66, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_242_242);
                      Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                      Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                      check_hlds__abstract_mode_constraints__not_both_6_p_0(Var_243, Context_16, LHSvarProducedHere_61, Var_411, STATE_VARIABLE_Constraints_242_242, &STATE_VARIABLE_Constraints_151);
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "unify with lambda goal");
                    return;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 0)));
            MR_Word Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 2)));
            MR_Word CalleePredInfo_31;
            MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 1)));
            MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 3)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 4)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 5)));

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, CalleePredId_25, &CalleePredInfo_31);
            succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(CalleePredInfo_31);
            if (succeeded)
            {
              MR_Word CalleeClausesInfo_33;
              MR_Word CalleeHeadVars_34;
              MR_Word STATE_VARIABLE_Constraints_260_260;

              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(CalleePredInfo_31, &CalleeClausesInfo_33);
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(CalleeClausesInfo_33, &CalleeHeadVars_34);
              check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(CalleePredId_25, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_260_260);
              check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(ProgVarset_13, Context_16, GoalId_17, PredId_14, Args_27, CalleePredId_25, CalleeHeadVars_34, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_260_260, &STATE_VARIABLE_Constraints_151);
            }
            else
            {
              MR_Word TypeCtorInfo_339_339;
              MR_Word CalleeProcTable_35;
              MR_Word CalleeProcInfos_36;
              MR_Word CalleeArgModeDecls_37;

              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(CalleePredInfo_31, &CalleeProcTable_35);
              TypeCtorInfo_339_339 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
              mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, TypeCtorInfo_339_339, CalleeProcTable_35, &CalleeProcInfos_36);
              mercury__list__map_3_p_0(TypeCtorInfo_339_339, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[9], CalleeProcInfos_36, &CalleeArgModeDecls_37);
              check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(ModuleInfo_12, ProgVarset_13, Context_16, PredId_14, CalleeArgModeDecls_37, GoalId_17, Args_27, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Details_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 5)));

                switch (MR_tag((MR_Word) Details_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "higher_order generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "class_method generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "event_call generic_call");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                    }
                    break;
                }
                STATE_VARIABLE_VarInfo_149 = STATE_VARIABLE_VarInfo_0_148;
                STATE_VARIABLE_Constraints_151 = STATE_VARIABLE_Constraints_0_150;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CalledPred_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Integer ProcId_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word ForeignArgs_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word CallArgs_130;
                MR_Word ProcInfo_132;
                MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 5)));
                MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 6)));
                MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 7)));
                MR_Word Var_131;
                MR_Word Var_162;
                MR_Word Var_409;
                MR_Word _OrigDecl_133;

                CallArgs_130 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[4], ForeignArgs_126);
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_12, CalledPred_124, ProcId_125, &Var_131, &ProcInfo_132);
                {
                  Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_162, 0) = NULL;
                }
                hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_132, &Var_409);
                succeeded = check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], Var_162, Var_409);
                if (succeeded)
                {
                  MR_Word Decl_134;
                  MR_Word Var_163;

                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_132, &Decl_134);
                  {
                    Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Decl_134));
                    MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(ModuleInfo_12, ProgVarset_13, Context_16, PredId_14, Var_163, GoalId_17, CallArgs_130, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_151);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "no mode declaration for foreign proc");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));

                switch (ConjType_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "par_conj");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word TypeCtorInfo_317_317;
                      MR_Word TypeCtorInfo_324_324;
                      MR_Word TypeCtorInfo_325_325;
                      MR_Word TypeInfo_330_330;
                      MR_Word TypeInfo_331_331;
                      MR_Word VarMap_23;
                      MR_Word ConjConstraintsInfo_24;
                      MR_Word Var_269;
                      MR_Word Var_270;
                      MR_Word Var_271;
                      MR_Word STATE_VARIABLE_VarInfo_272_272;
                      MR_Word STATE_VARIABLE_Constraints_273_273;
                      MR_Word Var_274;
                      MR_Word Var_275;
                      MR_Word STATE_VARIABLE_Constraints_276_276;
                      MR_Word Var_277;
                      MR_Word Var_278;
                      MR_Word Var_279;
                      MR_Word Var_299;
                      MR_Box conv2_ConjConstraintsInfo_24;
                      MR_Box conv6_STATE_VARIABLE_VarInfo_272_272;
                      MR_Box conv5_STATE_VARIABLE_Constraints_273_273;
                      MR_Word Var_300;
                      MR_Word Var_301;
                      MR_Box conv8_STATE_VARIABLE_Constraints_276_276;
                      MR_Word Var_302;
                      MR_Box conv12_STATE_VARIABLE_VarInfo_149;
                      MR_Box conv11_STATE_VARIABLE_Constraints_151;

                      Var_270 = check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0();
                      TypeCtorInfo_317_317 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                      Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 0)));
                      VarMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_148, (MR_Integer) 1)));
                      {
                        Var_269 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_269, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[0]));
                        MR_hl_field(MR_mktag(0), Var_269, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_269, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_269, 3) = ((MR_Box) (VarMap_23));
                        MR_hl_field(MR_mktag(0), Var_269, 4) = ((MR_Box) (PredId_14));
                        MR_hl_field(MR_mktag(0), Var_269, 5) = ((MR_Box) (Nonlocals_18));
                      }
                      mercury__list__foldl_4_p_0(TypeCtorInfo_317_317, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0, Var_269, Goals_22, ((MR_Box) (Var_270)), &conv2_ConjConstraintsInfo_24);
                      ConjConstraintsInfo_24 = ((MR_Word) conv2_ConjConstraintsInfo_24);
                      {
                        Var_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_271, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), Var_271, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_3));
                        MR_hl_field(MR_mktag(0), Var_271, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_271, 3) = ((MR_Box) (ModuleInfo_12));
                        MR_hl_field(MR_mktag(0), Var_271, 4) = ((MR_Box) (ProgVarset_13));
                        MR_hl_field(MR_mktag(0), Var_271, 5) = ((MR_Box) (PredId_14));
                      }
                      TypeCtorInfo_324_324 = (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0;
                      TypeCtorInfo_325_325 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                      mercury__list__foldl2_6_p_0(TypeCtorInfo_317_317, TypeCtorInfo_324_324, TypeCtorInfo_325_325, Var_271, Goals_22, ((MR_Box) (STATE_VARIABLE_VarInfo_0_148)), &conv6_STATE_VARIABLE_VarInfo_272_272, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv5_STATE_VARIABLE_Constraints_273_273);
                      STATE_VARIABLE_VarInfo_272_272 = ((MR_Word) conv6_STATE_VARIABLE_VarInfo_272_272);
                      STATE_VARIABLE_Constraints_273_273 = ((MR_Word) conv5_STATE_VARIABLE_Constraints_273_273);
                      Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 0)));
                      Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_272_272, (MR_Integer) 1)));
                      {
                        Var_274 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[1]));
                        MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_274, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_274, 3) = ((MR_Box) (Var_277));
                        MR_hl_field(MR_mktag(0), Var_274, 4) = ((MR_Box) (Context_16));
                      }
                      Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 0)));
                      Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 1)));
                      TypeInfo_330_330 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
                      TypeInfo_331_331 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                      mercury__map__foldl_4_p_0(TypeInfo_330_330, TypeInfo_331_331, TypeCtorInfo_325_325, Var_274, Var_275, ((MR_Box) (STATE_VARIABLE_Constraints_273_273)), &conv8_STATE_VARIABLE_Constraints_276_276);
                      STATE_VARIABLE_Constraints_276_276 = ((MR_Word) conv8_STATE_VARIABLE_Constraints_276_276);
                      {
                        Var_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_10[0]));
                        MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_5));
                        MR_hl_field(MR_mktag(0), Var_278, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(0), Var_278, 3) = ((MR_Box) (ProgVarset_13));
                        MR_hl_field(MR_mktag(0), Var_278, 4) = ((MR_Box) (PredId_14));
                        MR_hl_field(MR_mktag(0), Var_278, 5) = ((MR_Box) (Context_16));
                        MR_hl_field(MR_mktag(0), Var_278, 6) = ((MR_Box) (GoalId_17));
                      }
                      Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 0)));
                      Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjConstraintsInfo_24, (MR_Integer) 1)));
                      mercury__map__foldl2_6_p_0(TypeInfo_330_330, TypeInfo_331_331, TypeCtorInfo_324_324, TypeCtorInfo_325_325, Var_278, Var_279, ((MR_Box) (STATE_VARIABLE_VarInfo_272_272)), &conv12_STATE_VARIABLE_VarInfo_149, ((MR_Box) (STATE_VARIABLE_Constraints_276_276)), &conv11_STATE_VARIABLE_Constraints_151);
                      STATE_VARIABLE_VarInfo_149 = ((MR_Word) conv12_STATE_VARIABLE_VarInfo_149);
                      STATE_VARIABLE_Constraints_151 = ((MR_Word) conv11_STATE_VARIABLE_Constraints_151);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_343_343 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word TypeCtorInfo_344_344 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
                MR_Word TypeCtorInfo_356_356;
                MR_Word TypeInfo_358_358;
                MR_Word DisjunctGoalIds_79;
                MR_Word NonlocalsHere_80;
                MR_Word NonlocalsAtDisjuncts_81;
                MR_Word GoalInfos_82;
                MR_Word EquivVarss_83;
                MR_Word STATE_VARIABLE_VarInfo_222_222;
                MR_Word Var_225;
                MR_Word STATE_VARIABLE_Constraints_227_227;
                MR_Word Var_229;
                MR_Word Var_231;
                MR_Word Goals_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Box conv18_STATE_VARIABLE_VarInfo_149;
                MR_Box conv17_STATE_VARIABLE_Constraints_227_227;
                MR_Word Var_307;
                MR_Box conv21_STATE_VARIABLE_Constraints_151;

                GoalInfos_82 = mercury__list__map_2_f_0(TypeCtorInfo_343_343, TypeCtorInfo_344_344, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[5], Goals_286);
                DisjunctGoalIds_79 = mercury__list__map_2_f_0(TypeCtorInfo_344_344, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[6], GoalInfos_82);
                check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(ProgVarset_13, PredId_14, GoalId_17, DisjunctGoalIds_79, Nonlocals_18, &NonlocalsHere_80, &NonlocalsAtDisjuncts_81, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_222_222);
                {
                  Var_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_225, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), Var_225, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_225, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_225, 3) = ((MR_Box) (ModuleInfo_12));
                  MR_hl_field(MR_mktag(0), Var_225, 4) = ((MR_Box) (ProgVarset_13));
                  MR_hl_field(MR_mktag(0), Var_225, 5) = ((MR_Box) (PredId_14));
                }
                TypeCtorInfo_356_356 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                mercury__list__foldl2_6_p_0(TypeCtorInfo_343_343, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, TypeCtorInfo_356_356, Var_225, Goals_286, ((MR_Box) (STATE_VARIABLE_VarInfo_222_222)), &conv18_STATE_VARIABLE_VarInfo_149, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv17_STATE_VARIABLE_Constraints_227_227);
                STATE_VARIABLE_VarInfo_149 = ((MR_Word) conv18_STATE_VARIABLE_VarInfo_149);
                STATE_VARIABLE_Constraints_227_227 = ((MR_Word) conv17_STATE_VARIABLE_Constraints_227_227);
                TypeInfo_358_358 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_83 = mercury__list__map_corresponding_3_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], TypeInfo_358_358, TypeInfo_358_358, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[7], NonlocalsHere_80, NonlocalsAtDisjuncts_81);
                Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_229, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_10));
                  MR_hl_field(MR_mktag(0), Var_229, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_229, 3) = ((MR_Box) (Var_231));
                  MR_hl_field(MR_mktag(0), Var_229, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_358_358, TypeCtorInfo_356_356, Var_229, EquivVarss_83, ((MR_Box) (STATE_VARIABLE_Constraints_227_227)), &conv21_STATE_VARIABLE_Constraints_151);
                STATE_VARIABLE_Constraints_151 = ((MR_Word) conv21_STATE_VARIABLE_Constraints_151);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "switch");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_380_380;
                MR_Word TypeInfo_381_381;
                MR_Word SomeGoalInfo_92;
                MR_Word SomeGoalId_93;
                MR_Word NonlocalsList_94;
                MR_Word NonlocalsAtSubGoal_95;
                MR_Word STATE_VARIABLE_VarInfo_201_201;
                MR_Word STATE_VARIABLE_VarInfo_202_202;
                MR_Word Var_209;
                MR_Word STATE_VARIABLE_Constraints_210_210;
                MR_Word Var_211;
                MR_Word NonlocalsHere_290;
                MR_Word EquivVarss_291;
                MR_Word Goal_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word _Reason_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_292, (MR_Integer) 0)));
                MR_Word Var_310;
                MR_Box conv38_STATE_VARIABLE_Constraints_210_210;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_9;
                MR_Word next_value_of_tscc_proc_1_input_2_ProgVarset_10;
                MR_Word next_value_of_tscc_proc_1_input_3_PredId_11;
                MR_Word next_value_of_tscc_proc_1_input_4_Goal_12;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;

                SomeGoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_292, (MR_Integer) 1)));
                SomeGoalId_93 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(SomeGoalInfo_92);
                NonlocalsList_94 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_18);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_94, GoalId_17, &NonlocalsHere_290, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_201_201);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_94, SomeGoalId_93, &NonlocalsAtSubGoal_95, STATE_VARIABLE_VarInfo_201_201, &STATE_VARIABLE_VarInfo_202_202);
                TypeInfo_380_380 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
                TypeInfo_381_381 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_291 = mercury__list__map_corresponding_3_f_0(TypeInfo_380_380, TypeInfo_380_380, TypeInfo_381_381, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[10], NonlocalsHere_290, NonlocalsAtSubGoal_95);
                Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 0)));
                Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_202_202, (MR_Integer) 1)));
                {
                  Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_209, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_209, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_22));
                  MR_hl_field(MR_mktag(0), Var_209, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_209, 3) = ((MR_Box) (Var_211));
                  MR_hl_field(MR_mktag(0), Var_209, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_381_381, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_209, EquivVarss_291, ((MR_Box) (STATE_VARIABLE_Constraints_0_150)), &conv38_STATE_VARIABLE_Constraints_210_210);
                STATE_VARIABLE_Constraints_210_210 = ((MR_Word) conv38_STATE_VARIABLE_Constraints_210_210);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_ModuleInfo_9 = ModuleInfo_12;
                next_value_of_tscc_proc_1_input_2_ProgVarset_10 = ProgVarset_13;
                next_value_of_tscc_proc_1_input_3_PredId_11 = PredId_14;
                next_value_of_tscc_proc_1_input_4_Goal_12 = Goal_292;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22 = STATE_VARIABLE_VarInfo_202_202;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24 = STATE_VARIABLE_Constraints_210_210;
                tscc_proc_1_input_1_ModuleInfo_9 = next_value_of_tscc_proc_1_input_1_ModuleInfo_9;
                tscc_proc_1_input_2_ProgVarset_10 = next_value_of_tscc_proc_1_input_2_ProgVarset_10;
                tscc_proc_1_input_3_PredId_11 = next_value_of_tscc_proc_1_input_3_PredId_11;
                tscc_proc_1_input_4_Goal_12 = next_value_of_tscc_proc_1_input_4_Goal_12;
                tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_VarInfo_0_22;
                tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Constraints_0_24;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word TypeInfo_389_389;
                MR_Word TypeInfo_392_392;
                MR_Word TypeInfo_393_393;
                MR_Word TypeCtorInfo_397_397;
                MR_Word ExistVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));
                MR_Word Cond_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2)));
                MR_Word Then_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3)));
                MR_Word Else_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4)));
                MR_Word CondInfo_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_99, (MR_Integer) 1)));
                MR_Word ThenInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_100, (MR_Integer) 1)));
                MR_Word ElseInfo_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_101, (MR_Integer) 1)));
                MR_Word CondId_108;
                MR_Word ThenId_109;
                MR_Word ElseId_110;
                MR_Word NonlocalsAtCond_111;
                MR_Word NonlocalsAtThen_112;
                MR_Word NonlocalsAtElse_113;
                MR_Word CondNonlocals_114;
                MR_Word ThenNonlocals_115;
                MR_Word NonlocalToCond_116;
                MR_Word LocalAndShared_117;
                MR_Word LocalAndSharedAtCond_118;
                MR_Word LocalAndSharedAtThen_119;
                MR_Word STATE_VARIABLE_VarInfo_170_170;
                MR_Word STATE_VARIABLE_VarInfo_171_171;
                MR_Word STATE_VARIABLE_VarInfo_172_172;
                MR_Word STATE_VARIABLE_VarInfo_173_173;
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word STATE_VARIABLE_VarInfo_176_176;
                MR_Word STATE_VARIABLE_VarInfo_177_177;
                MR_Word STATE_VARIABLE_VarInfo_178_178;
                MR_Word STATE_VARIABLE_Constraints_179_179;
                MR_Word STATE_VARIABLE_VarInfo_180_180;
                MR_Word STATE_VARIABLE_Constraints_181_181;
                MR_Word STATE_VARIABLE_Constraints_183_183;
                MR_Word Var_192;
                MR_Word STATE_VARIABLE_Constraints_193_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word STATE_VARIABLE_Constraints_196_196;
                MR_Word Var_197;
                MR_Word Var_198;
                MR_Word Var_200;
                MR_Word NonlocalsHere_296;
                MR_Word EquivVarss_297;
                MR_Word NonlocalsList_298;
                MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_99, (MR_Integer) 0)));
                MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_100, (MR_Integer) 0)));
                MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_101, (MR_Integer) 0)));
                MR_Word Var_311;
                MR_Box conv24_STATE_VARIABLE_Constraints_193_193;
                MR_Word Var_312;
                MR_Box conv26_STATE_VARIABLE_Constraints_196_196;
                MR_Word Var_313;
                MR_Box conv28_STATE_VARIABLE_Constraints_151;

                CondId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(CondInfo_103);
                ThenId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ThenInfo_105);
                ElseId_110 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ElseInfo_107);
                NonlocalsList_298 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_18);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, GoalId_17, &NonlocalsHere_296, STATE_VARIABLE_VarInfo_0_148, &STATE_VARIABLE_VarInfo_170_170);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, CondId_108, &NonlocalsAtCond_111, STATE_VARIABLE_VarInfo_170_170, &STATE_VARIABLE_VarInfo_171_171);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, ThenId_109, &NonlocalsAtThen_112, STATE_VARIABLE_VarInfo_171_171, &STATE_VARIABLE_VarInfo_172_172);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, NonlocalsList_298, ElseId_110, &NonlocalsAtElse_113, STATE_VARIABLE_VarInfo_172_172, &STATE_VARIABLE_VarInfo_173_173);
                CondNonlocals_114 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CondInfo_103);
                ThenNonlocals_115 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ThenInfo_105);
                {
                  Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[4]));
                  MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_11));
                  MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (CondNonlocals_114));
                }
                TypeInfo_389_389 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
                mercury__list__filter_3_p_0(TypeInfo_389_389, Var_174, ExistVars_98, &NonlocalToCond_116);
                {
                  Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_6[4]));
                  MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_12));
                  MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (ThenNonlocals_115));
                }
                mercury__list__filter_3_p_0(TypeInfo_389_389, Var_175, NonlocalToCond_116, &LocalAndShared_117);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, LocalAndShared_117, CondId_108, &LocalAndSharedAtCond_118, STATE_VARIABLE_VarInfo_173_173, &STATE_VARIABLE_VarInfo_176_176);
                check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_13, PredId_14, LocalAndShared_117, ThenId_109, &LocalAndSharedAtThen_119, STATE_VARIABLE_VarInfo_176_176, &STATE_VARIABLE_VarInfo_177_177);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Cond_99, STATE_VARIABLE_VarInfo_177_177, &STATE_VARIABLE_VarInfo_178_178, STATE_VARIABLE_Constraints_0_150, &STATE_VARIABLE_Constraints_179_179);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Then_100, STATE_VARIABLE_VarInfo_178_178, &STATE_VARIABLE_VarInfo_180_180, STATE_VARIABLE_Constraints_179_179, &STATE_VARIABLE_Constraints_181_181);
                check_hlds__build_mode_constraints__add_goal_constraints_8_p_0(ModuleInfo_12, ProgVarset_13, PredId_14, Else_101, STATE_VARIABLE_VarInfo_180_180, &STATE_VARIABLE_VarInfo_149, STATE_VARIABLE_Constraints_181_181, &STATE_VARIABLE_Constraints_183_183);
                TypeInfo_392_392 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
                TypeInfo_393_393 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
                EquivVarss_297 = mercury__list__map_corresponding3_4_f_0(TypeInfo_392_392, TypeInfo_392_392, TypeInfo_392_392, TypeInfo_393_393, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[8], NonlocalsHere_296, NonlocalsAtThen_112, NonlocalsAtElse_113);
                Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_14));
                  MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_192, 3) = ((MR_Box) (Var_194));
                  MR_hl_field(MR_mktag(0), Var_192, 4) = ((MR_Box) (Context_16));
                }
                TypeCtorInfo_397_397 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;
                mercury__list__foldl_4_p_0(TypeInfo_393_393, TypeCtorInfo_397_397, Var_192, EquivVarss_297, ((MR_Box) (STATE_VARIABLE_Constraints_183_183)), &conv24_STATE_VARIABLE_Constraints_193_193);
                STATE_VARIABLE_Constraints_193_193 = ((MR_Word) conv24_STATE_VARIABLE_Constraints_193_193);
                Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_15));
                  MR_hl_field(MR_mktag(0), Var_195, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_195, 3) = ((MR_Box) (Var_197));
                  MR_hl_field(MR_mktag(0), Var_195, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_4_p_0(TypeInfo_392_392, TypeCtorInfo_397_397, Var_195, NonlocalsAtCond_111, ((MR_Box) (STATE_VARIABLE_Constraints_193_193)), &conv26_STATE_VARIABLE_Constraints_196_196);
                STATE_VARIABLE_Constraints_196_196 = ((MR_Word) conv26_STATE_VARIABLE_Constraints_196_196);
                Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 0)));
                Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_149, (MR_Integer) 1)));
                {
                  Var_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_198, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_8[2]));
                  MR_hl_field(MR_mktag(0), Var_198, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_goal_expr_constraints_11_p_0_16));
                  MR_hl_field(MR_mktag(0), Var_198, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_198, 3) = ((MR_Box) (Var_200));
                  MR_hl_field(MR_mktag(0), Var_198, 4) = ((MR_Box) (Context_16));
                }
                mercury__list__foldl_corresponding_5_p_0(TypeInfo_392_392, TypeInfo_392_392, TypeCtorInfo_397_397, Var_198, LocalAndSharedAtCond_118, LocalAndSharedAtThen_119, ((MR_Box) (STATE_VARIABLE_Constraints_196_196)), &conv28_STATE_VARIABLE_Constraints_151);
                STATE_VARIABLE_Constraints_151 = ((MR_Word) conv28_STATE_VARIABLE_Constraints_151);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) Shorthand_135)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "shorthand goal");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: atomic_goal");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_goal_expr_constraints\'/11", (MR_String) "NYI: try_goal");
                        return;
                      }
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_VarInfo_23 = STATE_VARIABLE_VarInfo_149;
      tscc_output_2_STATE_VARIABLE_Constraints_25 = STATE_VARIABLE_Constraints_151;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_VarInfo_23 = tscc_output_1_STATE_VARIABLE_VarInfo_23;
    *tscc_output_ptr_2_STATE_VARIABLE_Constraints_25 = tscc_output_2_STATE_VARIABLE_Constraints_25;
    return;
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____maybe__maybe_1_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ArgX1_5;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_21;
    MR_Word conv2_LambdaHeadVar__4_23;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv3_LambdaHeadVar__2_21, ((MR_Word) wrapper_arg_3), &conv2_LambdaHeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_23));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_28;
    MR_Word conv0_LambdaHeadVar__4_30;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__nonlocals_at_path_and_subpaths__1082__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_28, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_30);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_28));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_30));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0(
  MR_Word ProgVarset_10,
  MR_Word PredId_11,
  MR_Word GoalId_12,
  MR_Word SubIds_13,
  MR_Word Nonlocals_14,
  MR_Word * NonlocalsAtId_15,
  MR_Word * NonlocalsAtSubIds_16,
  MR_Word STATE_VARIABLE_VarInfo_0_22,
  MR_Word * STATE_VARIABLE_VarInfo_23)
{
  {
    MR_Word NonlocalsList_18;
    MR_Word STATE_VARIABLE_VarInfo_24_24;
    MR_Word Var_25;
    MR_Word Var_52;
    MR_Box conv4_STATE_VARIABLE_VarInfo_24_24;
    MR_Box conv5_STATE_VARIABLE_VarInfo_23;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ProgVarset_10));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (SubIds_13));
    }
    NonlocalsList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_14);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (check_hlds__build_mode_constraints__nonlocals_at_path_and_subpaths_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ProgVarset_10));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (GoalId_12));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_52, NonlocalsList_18, NonlocalsAtId_15, ((MR_Box) (STATE_VARIABLE_VarInfo_0_22)), &conv4_STATE_VARIABLE_VarInfo_24_24);
    STATE_VARIABLE_VarInfo_24_24 = ((MR_Word) conv4_STATE_VARIABLE_VarInfo_24_24);
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_25, NonlocalsList_18, NonlocalsAtSubIds_16, ((MR_Box) (STATE_VARIABLE_VarInfo_24_24)), &conv5_STATE_VARIABLE_VarInfo_23);
    *STATE_VARIABLE_VarInfo_23 = ((MR_Word) conv5_STATE_VARIABLE_VarInfo_23);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__prog_var_at_path_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word ProgVar_10,
  MR_Word GoalId_11,
  MR_Word * MCVar_12,
  MR_Word STATE_VARIABLE_VarInfo_0_18,
  MR_Word * STATE_VARIABLE_VarInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word MCVarset0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_18, (MR_Integer) 0)));
    MR_Word VarMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_18, (MR_Integer) 1)));
    MR_Word MCVarset_16;
    MR_Word VarMap_17;
    MR_Word RepVar_31;
    MR_Word Var_35;
    MR_Word Var_32;
    MR_Box conv0_Var_32;
    MR_Box conv1_MCVar_12;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ProgVar_10));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (PredId_9));
    }
    {
      RepVar_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RepVar_31, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), RepVar_31, 1) = ((MR_Box) (GoalId_11));
    }
    succeeded = mercury__bimap__search_3_p_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], VarMap0_15, ((MR_Box) (RepVar_31)), &conv0_Var_32);
    if (succeeded)
    {
      Var_32 = ((MR_Word) conv0_Var_32);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      VarMap_17 = VarMap0_15;
      MCVarset_16 = MCVarset0_14;
    }
    else
    {
      MR_String MCVarName_33;
      MR_Word NewMCVar_34;

      MCVarName_33 = check_hlds__build_mode_constraints__rep_var_to_string_2_f_0(ProgVarset_8, RepVar_31);
      mercury__varset__new_named_var_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, MCVarName_33, &NewMCVar_34, MCVarset0_14, &MCVarset_16);
      mercury__bimap__det_insert_4_p_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], ((MR_Box) (RepVar_31)), ((MR_Box) (NewMCVar_34)), VarMap0_15, &VarMap_17);
    }
    conv1_MCVar_12 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], VarMap_17, ((MR_Box) (RepVar_31)));
    *MCVar_12 = ((MR_Word) conv1_MCVar_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VarInfo_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MCVarset_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarMap_17));
    }
  }
}

MR_String MR_CALL 
check_hlds__build_mode_constraints__rep_var_to_string_2_f_0(
  MR_Word ProgVarset_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String RepString_8;
    MR_Word ProgVar_5;
    MR_Word GoalId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer GoalIdNum_9;
    MR_String GoalIdString_10;
    MR_String ProgVarString_11;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_String Var_13;
    MR_Word Var_6;

    ProgVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
    GoalIdNum_9 = (MR_Integer) GoalId_7;
    GoalIdString_10 = mercury__string__int_to_string_1_f_0(GoalIdNum_9);
    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ProgVarset_4, ProgVar_5, &ProgVarString_11);
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) ".", GoalIdString_10);
    RepString_8 = mercury__string__f_43_43_2_f_0(ProgVarString_11, Var_13);
    return RepString_8;
  }
}

static MR_Word MR_CALL 
check_hlds__build_mode_constraints__conj_constraints_info_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word TypeInfo_4_4 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0];
    MR_Word TypeInfo_5_5 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
    MR_Word Var_2;
    MR_Word Var_3;

    Var_2 = mercury__multi_map__init_0_f_0(TypeInfo_4_4, TypeInfo_5_5);
    Var_3 = mercury__multi_map__init_0_f_0(TypeInfo_4_4, TypeInfo_5_5);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__equivalent_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__3_37;

    conv3_LambdaHeadVar__3_37 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_call_headvar_constraints__794__1_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_37));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_21;
    MR_Word conv0_LambdaHeadVar__4_23;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_21, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_23));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0(
  MR_Word ProgVarset_12,
  MR_Word Context_13,
  MR_Word GoalId_14,
  MR_Word CallerPredId_15,
  MR_Word CallArgs_16,
  MR_Word CalleePredId_17,
  MR_Word CalleeHeadVars_18,
  MR_Word STATE_VARIABLE_VarInfo_0_26,
  MR_Word * STATE_VARIABLE_VarInfo_27,
  MR_Word STATE_VARIABLE_Constraints_0_28,
  MR_Word * STATE_VARIABLE_Constraints_29)
{
  {
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word HeadVarsAtHead_21;
    MR_Word CallArgsHere_22;
    MR_Word EquivVarss_23;
    MR_Word STATE_VARIABLE_VarInfo_31_31;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_62;
    MR_Box conv2_STATE_VARIABLE_VarInfo_31_31;
    MR_Word Var_45;
    MR_Box conv5_STATE_VARIABLE_Constraints_29;

    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ProgVarset_12));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (CalleePredId_17));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_62, CalleeHeadVars_18, &HeadVarsAtHead_21, ((MR_Box) (STATE_VARIABLE_VarInfo_0_26)), &conv2_STATE_VARIABLE_VarInfo_31_31);
    STATE_VARIABLE_VarInfo_31_31 = ((MR_Word) conv2_STATE_VARIABLE_VarInfo_31_31);
    check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_12, CallerPredId_15, CallArgs_16, GoalId_14, &CallArgsHere_22, STATE_VARIABLE_VarInfo_31_31, STATE_VARIABLE_VarInfo_27);
    TypeInfo_46_46 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2];
    TypeInfo_47_47 = (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[3];
    EquivVarss_23 = mercury__list__map_corresponding_3_f_0(TypeInfo_46_46, TypeInfo_46_46, TypeInfo_47_47, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[3], HeadVarsAtHead_21, CallArgsHere_22);
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_27, (MR_Integer) 0)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_27, (MR_Integer) 1)));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_headvar_constraints_11_p_0_3));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Context_13));
    }
    mercury__list__foldl_4_p_0(TypeInfo_47_47, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_40, EquivVarss_23, ((MR_Box) (STATE_VARIABLE_Constraints_0_28)), &conv5_STATE_VARIABLE_Constraints_29);
    *STATE_VARIABLE_Constraints_29 = ((MR_Word) conv5_STATE_VARIABLE_Constraints_29);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__5_5;

    check_hlds__abstract_mode_constraints__add_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    conv3_HeadVar__4_4 = check_hlds__build_mode_constraints__mode_decl_constraints_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_21;
    MR_Word conv0_LambdaHeadVar__4_23;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_21, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_23));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ProgVarset_13,
  MR_Word CallContext_14,
  MR_Word CallingPred_15,
  MR_Word Decls_16,
  MR_Word GoalId_17,
  MR_Word CallArgs_18,
  MR_Word STATE_VARIABLE_VarInfo_0_24,
  MR_Word * STATE_VARIABLE_VarInfo_25,
  MR_Word STATE_VARIABLE_Constraints_0_26,
  MR_Word * STATE_VARIABLE_Constraints_27)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41;
    MR_Word CallArgsHere_21;
    MR_Word ModeSpecificConstraints_22;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_51;
    MR_Word Var_62;
    MR_Box conv2_STATE_VARIABLE_VarInfo_25;
    MR_Word Var_50;
    MR_Word OneModeOnlyConstraints_23;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ProgVarset_13));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (CallingPred_15));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (GoalId_17));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_62, CallArgs_18, &CallArgsHere_21, ((MR_Box) (STATE_VARIABLE_VarInfo_0_24)), &conv2_STATE_VARIABLE_VarInfo_25);
    *STATE_VARIABLE_VarInfo_25 = ((MR_Word) conv2_STATE_VARIABLE_VarInfo_25);
    TypeCtorInfo_41_41 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (CallArgsHere_21));
    }
    Var_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[5], Var_30, Decls_16);
    ModeSpecificConstraints_22 = mercury__list__condense_1_f_0(TypeCtorInfo_41_41, Var_29);
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_25, (MR_Integer) 0)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_VarInfo_25, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) ModeSpecificConstraints_22)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModeSpecificConstraints_22, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModeSpecificConstraints_22, (MR_Integer) 1)));
      succeeded = (Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          OneModeOnlyConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_31, (MR_Integer) 0)));
      }
    }
    if (succeeded)
    {
      MR_Word Var_33;
      MR_Box conv5_STATE_VARIABLE_Constraints_27;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_call_mode_decls_constraints_11_p_0_3));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (CallContext_14));
      }
      mercury__list__foldl_4_p_0(TypeCtorInfo_41_41, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, Var_33, OneModeOnlyConstraints_23, ((MR_Box) (STATE_VARIABLE_Constraints_0_26)), &conv5_STATE_VARIABLE_Constraints_27);
      *STATE_VARIABLE_Constraints_27 = ((MR_Word) conv5_STATE_VARIABLE_Constraints_27);
    }
    else
    {
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ModeSpecificConstraints_22));
      }
      check_hlds__abstract_mode_constraints__add_constraint_5_p_0(Var_51, CallContext_14, Var_37, STATE_VARIABLE_Constraints_0_26, STATE_VARIABLE_Constraints_27);
    }
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_VarInfo_67;

    check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_VarInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_VarInfo_67));
  }
}

static MR_Box MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_89;

    conv6_LambdaHeadVar__2_89 = check_hlds__build_mode_constraints__IntroducedFrom__func__add_mc_vars_for_goal__299__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_89));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_VarInfo_67;

    check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_VarInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_VarInfo_67));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_VarInfo_67;

    check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_VarInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarInfo_67));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_VarInfo_67;

    check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_VarInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarInfo_67));
  }
}

void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0(
  MR_Word PredId_6,
  MR_Word ProgVarset_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_VarInfo_0_66,
  MR_Word * STATE_VARIABLE_VarInfo_67)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0)));
    MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1)));
    MR_Word Nonlocals_12;
    MR_Word GoalId_13;
    MR_Word NlsList_14;
    MR_Word STATE_VARIABLE_VarInfo_68_68;
    MR_Word Var_15;

    // setup for model_det tailcalls optimized into a loop
    Nonlocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_12, &NlsList_14);
    check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(ProgVarset_7, PredId_6, NlsList_14, GoalId_13, &Var_15, STATE_VARIABLE_VarInfo_0_66, &STATE_VARIABLE_VarInfo_68_68);
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_24 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);
          MR_Word next_value_of_Goal_8 = SubGoal_24;
          MR_Word next_value_of_STATE_VARIABLE_VarInfo_0_66 = STATE_VARIABLE_VarInfo_68_68;

          // direct tailcall eliminated
          Goal_8 = next_value_of_Goal_8;
          STATE_VARIABLE_VarInfo_0_66 = next_value_of_STATE_VARIABLE_VarInfo_0_66;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_VarInfo_67 = STATE_VARIABLE_VarInfo_68_68;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_VarInfo_67 = STATE_VARIABLE_VarInfo_68_68;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_VarInfo_67 = STATE_VARIABLE_VarInfo_68_68;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_VarInfo_67 = STATE_VARIABLE_VarInfo_68_68;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

              switch (ConjType_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_VarInfo_67 = STATE_VARIABLE_VarInfo_68_68;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_92;
                    MR_Box conv1_STATE_VARIABLE_VarInfo_67;

                    {
                      Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0]));
                      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (PredId_6));
                      MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (ProgVarset_7));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_92, Goals_17, ((MR_Box) (STATE_VARIABLE_VarInfo_68_68)), &conv1_STATE_VARIABLE_VarInfo_67);
                    *STATE_VARIABLE_VarInfo_67 = ((MR_Word) conv1_STATE_VARIABLE_VarInfo_67);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_85;
              MR_Word Goals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Box conv3_STATE_VARIABLE_VarInfo_67;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (PredId_6));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (ProgVarset_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_85, Goals_100, ((MR_Box) (STATE_VARIABLE_VarInfo_68_68)), &conv3_STATE_VARIABLE_VarInfo_67);
              *STATE_VARIABLE_VarInfo_67 = ((MR_Word) conv3_STATE_VARIABLE_VarInfo_67);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
              MR_Word Var_90;
              MR_Word Goals_99;
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Box conv8_STATE_VARIABLE_VarInfo_67;

              Goals_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, TypeCtorInfo_110_110, (MR_Word) &check_hlds__build_mode_constraints_scalar_common_2[2], Cases_20);
              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_5));
                MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (PredId_6));
                MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (ProgVarset_7));
              }
              mercury__list__foldl_4_p_0(TypeCtorInfo_110_110, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_90, Goals_99, ((MR_Box) (STATE_VARIABLE_VarInfo_68_68)), &conv8_STATE_VARIABLE_VarInfo_67);
              *STATE_VARIABLE_VarInfo_67 = ((MR_Word) conv8_STATE_VARIABLE_VarInfo_67);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word next_value_of_Goal_8 = SubGoal_101;
              MR_Word next_value_of_STATE_VARIABLE_VarInfo_0_66 = STATE_VARIABLE_VarInfo_68_68;

              // direct tailcall eliminated
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_VarInfo_0_66 = next_value_of_STATE_VARIABLE_VarInfo_0_66;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word Then_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
              MR_Word Else_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_81;
              MR_Word Goals_102;
              MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Box conv5_STATE_VARIABLE_VarInfo_67;

              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Else_29));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Then_28));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
              }
              {
                Goals_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Goals_102, 0) = ((MR_Box) (Cond_27));
                MR_hl_field(MR_mktag(1), Goals_102, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_goal_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (PredId_6));
                MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (ProgVarset_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_81, Goals_102, ((MR_Box) (STATE_VARIABLE_VarInfo_68_68)), &conv5_STATE_VARIABLE_VarInfo_67);
              *STATE_VARIABLE_VarInfo_67 = ((MR_Word) conv5_STATE_VARIABLE_VarInfo_67);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ShortHand_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "NYI: atomic_goal");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.build_mode_constraints", (MR_String) "predicate \140check_hlds.build_mode_constraints.add_mc_vars_for_goal\'/5", (MR_String) "try_goal");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_21;
    MR_Word conv0_LambdaHeadVar__4_23;

    check_hlds__build_mode_constraints__IntroducedFrom__pred__prog_vars_at_path__1010__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_21, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_23));
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0(
  MR_Word ProgVarset_8,
  MR_Word PredId_9,
  MR_Word ProgVars_10,
  MR_Word GoalId_11,
  MR_Word * MCVars_12,
  MR_Word STATE_VARIABLE_VarInfo_0_16,
  MR_Word * STATE_VARIABLE_VarInfo_17)
{
  {
    MR_Word Var_18;
    MR_Box conv2_STATE_VARIABLE_VarInfo_17;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__build_mode_constraints__prog_vars_at_path_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ProgVarset_8));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (GoalId_11));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[0], (MR_Word) &check_hlds__build_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_18, ProgVars_10, MCVars_12, ((MR_Box) (STATE_VARIABLE_VarInfo_0_16)), &conv2_STATE_VARIABLE_VarInfo_17);
    *STATE_VARIABLE_VarInfo_17 = ((MR_Word) conv2_STATE_VARIABLE_VarInfo_17);
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_VarInfo_13;

    check_hlds__build_mode_constraints__add_mc_vars_for_pred_head_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_VarInfo_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarInfo_13));
  }
}

void MR_CALL 
check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredIds_6,
  MR_Word STATE_VARIABLE_VarInfo_0_8,
  MR_Word * STATE_VARIABLE_VarInfo_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_VarInfo_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__build_mode_constraints_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, Var_10, PredIds_6, ((MR_Box) (STATE_VARIABLE_VarInfo_0_8)), &conv1_STATE_VARIABLE_VarInfo_9);
    *STATE_VARIABLE_VarInfo_9 = ((MR_Word) conv1_STATE_VARIABLE_VarInfo_9);
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____args_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____args_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____conj_constraints_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____conj_constraints_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____conjunct_production_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____conjunct_production_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____mc_prog_var_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____mc_prog_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____mc_rep_var_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____mc_rep_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____mc_var_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____mc_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____mc_var_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____mc_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____mode_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____mode_constraints_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____mode_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____mode_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__build_mode_constraints____Unify____nonlocals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__build_mode_constraints____Unify____nonlocals_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__build_mode_constraints____Compare____nonlocals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__build_mode_constraints____Compare____nonlocals_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__build_mode_constraints__init(void)
{
}

void mercury__check_hlds__build_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_args_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conj_constraints_info_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_conjunct_production_map_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_prog_var_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_map_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mode_constraints_0);
	MR_register_type_ctor_info(&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_nonlocals_0);
}

void mercury__check_hlds__build_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__build_mode_constraints__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.build_mode_constraints.
