/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2026-03-27
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


// :- module transform_hlds.term_constr_build.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_build__init
ENDINIT
*/

#include "transform_hlds.term_constr_build.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.lp_rational.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s {
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__ModuleInfo_8;
  MR_bool transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Args_19;
  jmp_buf transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Arg_22;
  MR_Box transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__conv0_Arg_22;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2];

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1];

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_10,
  MR_Word LambdaHeadVar__1_26,
  MR_Integer LambdaHeadVar__2_27,
  MR_Integer * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1229__1_1_p_0(
  MR_Integer LambdaHeadVar__1_29);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1196__1_3_p_0(
  MR_Word ConsName_46,
  MR_Integer ConsArity_47,
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1194__1_2_p_0(
  MR_Word TypeCtor_43,
  MR_Word ConsTypeCtor_48);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__838__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Integer * HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__476__1_1_f_0(
  MR_Word LambdaHeadVar__1_89);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__242__1_4_f_0(
  MR_Word ModuleInfo_10,
  MR_Word VarTable_23,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0(
  MR_Word SizeVarset_14,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44,
  MR_Word LambdaHeadVar__4_45,
  MR_Word * LambdaHeadVar__5_46);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__179__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
  MR_Word Norm_6,
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word Constructor_9);

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
  MR_Word SizeVarMap_7,
  MR_Word Zeros_8,
  MR_Word Coeff_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Terms_0_13,
  MR_Word * STATE_VARIABLE_Terms_14);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Options_11,
  MR_Word SCC_12,
  MR_Word EntryProcs_13,
  MR_Word PPId_14,
  MR_Word STATE_VARIABLE_SizeVarset_0_45,
  MR_Word * STATE_VARIABLE_SizeVarset_46,
  MR_Word STATE_VARIABLE_AbstractInfo_0_47,
  MR_Word * STATE_VARIABLE_AbstractInfo_48);

static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SizeVarset_0_2,
  MR_Word * STATE_VARIABLE_SizeVarset_3,
  MR_Word STATE_VARIABLE_SizeVarMap_0_4,
  MR_Word * STATE_VARIABLE_SizeVarMap_5);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
  MR_Word SwitchProgVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AbstractGoals_0_3,
  MR_Word * STATE_VARIABLE_AbstractGoals_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractGoals_0_2,
  MR_Word * STATE_VARIABLE_AbstractGoals_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
  MR_Word Type_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
  MR_Word Info_4,
  MR_Word Goal_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word Var_10,
  MR_Word Constructors_11,
  MR_Word * Polyhedron_12);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_3_p_0(
  MR_Word Info_4,
  MR_Word Unification_5,
  MR_Word * AbstractGoal_6);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0(
  MR_Word Info_5,
  MR_Word LeftProgVar_6,
  MR_Word RightProgVar_7,
  MR_Word * Constraints_8);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0(
  MR_Word Info_7,
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Word ArgVars_10,
  MR_Word Modes_11,
  MR_Word * Constraints_12);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_4_p_0(
  MR_Word Info_5,
  MR_Word TermVar_6,
  MR_Word SubGoal_7,
  MR_Word * AbstractGoal_8);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
  MR_Word Constraints_3);

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SizeMap_0_5,
  MR_Word * STATE_VARIABLE_SizeMap_6);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalSize_0_2,
  MR_Integer * STATE_VARIABLE_TotalSize_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word ConsId_3);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word GoalInfo_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
  MR_Word RecType_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
  MR_Word Conjuncts_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
  MR_Word Context_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][7];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[5][5];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[1][4];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[2][6];




static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_2[2]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_unification_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0 = {
  (MR_String) "switch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1 = {
  (MR_String) "non_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1 };

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____disj_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____disj_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "disj_info",
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0 },
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3] = {
  (MR_String) "tbo_functor_info",
  (MR_String) "tbo_failure_constrs",
  (MR_String) "tbo_arg_size_only"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 = {
  (MR_String) "term_build_options",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 };

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 };

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_build_options",
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0 },
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6] = {
  (MR_String) "tsi_scc_ppid",
  (MR_String) "tsi_proc",
  (MR_String) "tsi_size_var_map",
  (MR_String) "tsi_intermod",
  (MR_String) "tsi_accum_errors",
  (MR_String) "tsi_non_zero_heads"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0[6] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 = {
  (MR_String) "term_scc_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 };

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 };

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_scc_info",
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0 },
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15] = {
  (MR_String) "tti_arg_analysis_only",
  (MR_String) "tti_find_fail_constrs",
  (MR_String) "tti_recursion",
  (MR_String) "tti_intermod_status",
  (MR_String) "tti_errors",
  (MR_String) "tti_module_info",
  (MR_String) "tti_norm",
  (MR_String) "tti_ppid",
  (MR_String) "tti_context",
  (MR_String) "tti_var_table",
  (MR_String) "tti_zeros",
  (MR_String) "tti_size_var_map",
  (MR_String) "tti_scc",
  (MR_String) "tti_maxcalls",
  (MR_String) "tti_ho_info"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 = {
  (MR_String) "tti_traversal_info",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 };

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1] = { &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 };

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "tti_traversal_info",
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0 },
  { transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0,

};

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Arg_22 = ((MR_Word) ((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__conv0_Arg_22));
  transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Arg_22, 1))));
    MR_Word Var_48;
    MR_Word Var_49;

    (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__ModuleInfo_8, Var_31);
    (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded)
      transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), &(env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__conv0_Arg_22, (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Args_19, transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_10,
  MR_Word LambdaHeadVar__1_26,
  MR_Integer LambdaHeadVar__2_27,
  MR_Integer * LambdaHeadVar__3_28)
{
  struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0_s env;

  (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__ModuleInfo_8 = ModuleInfo_8;
  {
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_26, 2))));
    MR_Integer Arity_20;
    MR_Word ConsId_23;
    MR_Integer Bound_24;
    MR_Word Var_32;
    uint32_t Var_16;
    MR_Word Var_17;
    MR_Word Var_21;

    (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__Args_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_26, 3))));
    Arity_20 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_26, 4))));
    transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_4(&env);
    (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = !((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded);
    if ((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded)
    {
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (SymName_18));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (Arity_20));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) (TypeCtor_10));
      }
      ConsId_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_32)));
      Bound_24 = transform_hlds__term_norm__functor_lower_bound_4_f_0((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__ModuleInfo_8, Norm_7, TypeCtor_10, ConsId_23);
      (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = (Bound_24 > LambdaHeadVar__2_27);
      if ((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded)
        *LambdaHeadVar__3_28 = Bound_24;
      else
        *LambdaHeadVar__3_28 = LambdaHeadVar__2_27;
      (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded = MR_TRUE;
    }
    return (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1229__1_1_p_0(
  MR_Integer LambdaHeadVar__1_29)
{
  MR_bool succeeded = (LambdaHeadVar__1_29 == (MR_Integer) 0);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1196__1_3_p_0(
  MR_Word ConsName_46,
  MR_Integer ConsArity_47,
  MR_Word LambdaHeadVar__1_69)
{
  MR_bool succeeded;
  MR_Word SymName_53 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_69, 2))));
  MR_Integer Arity_55 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_69, 4))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_53, ConsName_46);
  if (succeeded)
    succeeded = (Arity_55 == ConsArity_47);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1194__1_2_p_0(
  MR_Word TypeCtor_43,
  MR_Word ConsTypeCtor_48)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_43, ConsTypeCtor_48);
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__838__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Integer * HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47)
{
  MR_Box conv0_HeadVar__2_45;

  mercury__map__det_remove_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadVar__1_44)), &conv0_HeadVar__2_45, HeadVar__3_46, HeadVar__4_47);
  *HeadVar__2_45 = ((MR_Integer) (conv0_HeadVar__2_45));
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__476__1_1_f_0(
  MR_Word LambdaHeadVar__1_89)
{
  MR_Word LambdaHeadVar__2_90 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_89, 0))));

  return LambdaHeadVar__2_90;
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__242__1_4_f_0(
  MR_Word ModuleInfo_10,
  MR_Word VarTable_23,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_63;
  MR_Word Type_40;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_23, LambdaHeadVar__1_61, &Type_40);
  succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(ModuleInfo_10, Type_40);
  succeeded = !(succeeded);
  if (succeeded)
    succeeded = hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_10, LambdaHeadVar__2_62);
  if (succeeded)
    LambdaHeadVar__3_63 = (MR_Integer) 1;
  else
    LambdaHeadVar__3_63 = (MR_Integer) 0;
  return LambdaHeadVar__3_63;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_64;

  conv2_LambdaHeadVar__2_64 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__179__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0(
  MR_Word SizeVarset_14,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44,
  MR_Word LambdaHeadVar__4_45,
  MR_Word * LambdaHeadVar__5_46)
{
  MR_bool succeeded;
  MR_Word PredId_20;
  MR_Integer ProcId_21;
  MR_Word AR0_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 1))));
  MR_Word VarMap_23 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 2))));
  MR_Word Status_24 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_42, 3))) & (MR_Integer) 1);
  MR_Word ProcErrors_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 4))));
  MR_Word HeadSizeVars_26 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 5))));
  MR_Word AR_27;
  MR_Word PredInfo0_28;
  MR_Word ProcTable0_29;
  MR_Word ProcInfo0_30;
  MR_Word ProcInfo_34;
  MR_Word ProcTable_35;
  MR_Word PredInfo_36;
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 0))));
  MR_Word STATE_VARIABLE_Term2Info_1_52;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_Term2Info_2_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_Term2Info_3_56;
  MR_Word STATE_VARIABLE_Term2Info_4_57;
  MR_Word STATE_VARIABLE_Term2Info_5_58;
  MR_Word STATE_VARIABLE_Term2Info_6_60;
  MR_Word STATE_VARIABLE_Errors_1_67;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Integer Var_88;
  MR_Word Var_89;
  MR_Unsigned packed_word_1;
  MR_Box conv0_PredInfo0_28;
  MR_Box conv1_ProcInfo0_30;

  PredId_20 = ((MR_Word) ((MR_hl_field(0, Var_51, 0))));
  ProcId_21 = ((MR_Integer) ((MR_hl_field(0, Var_51, 1))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, AR0_22, 0))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, AR0_22, 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, AR0_22, 2))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, AR0_22, 3))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, AR0_22, 4))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, AR0_22, 5))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, AR0_22, 7))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, AR0_22, 8)));
  Var_88 = ((MR_Integer) ((MR_hl_field(0, AR0_22, 9))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, AR0_22, 10))));
  {
    AR_27 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AR_27, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, AR_27, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, AR_27, 2) = ((MR_Box) (Var_80));
    MR_hl_field(0, AR_27, 3) = ((MR_Box) (Var_81));
    MR_hl_field(0, AR_27, 4) = ((MR_Box) (Var_82));
    MR_hl_field(0, AR_27, 5) = ((MR_Box) (Var_83));
    MR_hl_field(0, AR_27, 6) = ((MR_Box) (SizeVarset_14));
    MR_hl_field(0, AR_27, 7) = ((MR_Box) (Var_85));
    MR_hl_field(0, AR_27, 8) = (MR_Box) (packed_word_1);
    MR_hl_field(0, AR_27, 9) = ((MR_Box) (Var_88));
    MR_hl_field(0, AR_27, 10) = ((MR_Box) (Var_89));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), LambdaHeadVar__4_45, ((MR_Box) (PredId_20)), &conv0_PredInfo0_28);
  PredInfo0_28 = ((MR_Word) (conv0_PredInfo0_28));
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_28, &ProcTable0_29);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_29, ((MR_Box) (ProcId_21)), &conv1_ProcInfo0_30);
  ProcInfo0_30 = ((MR_Word) (conv1_ProcInfo0_30));
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_30, &STATE_VARIABLE_Term2Info_1_52);
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Status_24));
  }
  transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(Var_53, STATE_VARIABLE_Term2Info_1_52, &STATE_VARIABLE_Term2Info_2_54);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (AR_27));
  }
  transform_hlds__term_constr_main_types__term2_info_set_abstract_rep_3_p_0(Var_55, STATE_VARIABLE_Term2Info_2_54, &STATE_VARIABLE_Term2Info_3_56);
  transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(VarMap_23, STATE_VARIABLE_Term2Info_3_56, &STATE_VARIABLE_Term2Info_4_57);
  transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_26, STATE_VARIABLE_Term2Info_4_57, &STATE_VARIABLE_Term2Info_5_58);
  succeeded = transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(AR_27);
  if (succeeded)
  {
    MR_Word HorderErrors_32;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_66;

    Var_61 = libs__polyhedron__universe_0_f_0();
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_61));
    }
    transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_59, STATE_VARIABLE_Term2Info_5_58, &STATE_VARIABLE_Term2Info_6_60);
    Var_66 = ((MR_Word) ((MR_hl_field(0, AR_27, 10))));
    HorderErrors_32 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0), (MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[12]), Var_66);
    STATE_VARIABLE_Errors_1_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), HorderErrors_32, LambdaHeadVar__2_43);
  }
  else
  {
    STATE_VARIABLE_Term2Info_6_60 = STATE_VARIABLE_Term2Info_5_58;
    STATE_VARIABLE_Errors_1_67 = LambdaHeadVar__2_43;
  }
  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_6_60, ProcInfo0_30, &ProcInfo_34);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_21)), ((MR_Box) (ProcInfo_34)), ProcTable0_29, &ProcTable_35);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_35, PredInfo0_28, &PredInfo_36);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_20)), ((MR_Box) (PredInfo_36)), LambdaHeadVar__4_45, LambdaHeadVar__5_46);
  *LambdaHeadVar__3_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), ProcErrors_25, STATE_VARIABLE_Errors_1_67);
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__179__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;
  MR_Word Context_72 = (MR_Word) (LambdaHeadVar__1_63);

  {
    LambdaHeadVar__2_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_64, 0) = ((MR_Box) (Context_72));
    MR_hl_field(0, LambdaHeadVar__2_64, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  return LambdaHeadVar__2_64;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word SubResult1_6;
    MR_Integer Var_65 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_66 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_65 < Var_66);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_65 > Var_66);
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
      MR_Integer Var_67 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_68 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_67 < Var_68);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_67 > Var_68);
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
        MR_Integer Var_69 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_70 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_69 < Var_70);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_69 > Var_70);
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
          MR_Integer Var_71 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_72 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_71 < Var_72);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_71 > Var_72);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_module____Compare____module_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                transform_hlds__term_norm____Compare____functor_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__term_context____Compare____term_context_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      parse_tree__var_table____Compare____var_table_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[9]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[10]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              succeeded = (ArgX14_43 < ArgY14_44);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX14_43 > ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
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
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));

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
            TypeInfo_35_35 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                      {
                        TypeInfo_41_41 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[9]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_42_42 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_43_43 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[10]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                TypeInfo_44_44 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[11]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
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
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
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
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_29 < Var_30);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_29 > Var_30);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0(
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
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    transform_hlds__term_norm____Compare____functor_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      TypeInfo_12_12 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
  MR_Word Norm_6,
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word Constructor_9)
{
  MR_Integer LowerBound_10;
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, Constructor_9, 2))));
  MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(0, Constructor_9, 4))));
  MR_Word ConsId_17;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (Arity_15));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) (TypeCtor_8));
  }
  ConsId_17 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_18)));
  LowerBound_10 = transform_hlds__term_norm__functor_lower_bound_4_f_0(ModuleInfo_7, Norm_6, TypeCtor_8, ConsId_17);
  return LowerBound_10;
}

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
  MR_Word SizeVarMap_7,
  MR_Word Zeros_8,
  MR_Word Coeff_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Terms_0_13,
  MR_Word * STATE_VARIABLE_Terms_14)
{
  MR_bool succeeded;
  MR_Word SizeVar_12;

  SizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_7, Var_10);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SizeVar_12)), Zeros_8);
  if (succeeded)
    *STATE_VARIABLE_Terms_14 = STATE_VARIABLE_Terms_0_13;
  else
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (SizeVar_12));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (Coeff_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Terms_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Terms_0_13));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_63;

  conv0_LambdaHeadVar__3_63 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__242__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_63));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Options_11,
  MR_Word SCC_12,
  MR_Word EntryProcs_13,
  MR_Word PPId_14,
  MR_Word STATE_VARIABLE_SizeVarset_0_45,
  MR_Word * STATE_VARIABLE_SizeVarset_46,
  MR_Word STATE_VARIABLE_AbstractInfo_0_47,
  MR_Word * STATE_VARIABLE_AbstractInfo_48)
{
  MR_bool succeeded;
  MR_Word PredInfo_20;
  MR_Word ProcInfo_21;
  MR_Word Context_22;
  MR_Word VarTable_23;
  MR_Word HeadProgVars_24;
  MR_Word ArgModes0_25;
  MR_Word Goal0_26;
  MR_Word Goal_27;
  MR_Word SizeVarMap_28;
  MR_Word Zeros_29;
  MR_Word Info0_30;
  MR_Word AbstractBody0_31;
  MR_Word Info_32;
  MR_Word IntermodStatus_33;
  MR_Word HeadSizeVars_34;
  MR_Word AbstractBody_35;
  MR_Word ChooseArg_36;
  MR_Word Inputs_41;
  MR_Word IsEntryPoint_42;
  MR_Word AbstractProc_43;
  MR_Word ThisProcInfo_44;
  MR_Word Var_58;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_104;
  MR_Integer Var_113;
  MR_Word Var_114;
  MR_Word SizeVarMap0_162;
  MR_Word STATE_VARIABLE_SizeVarset_1_163;
  MR_Word ProgVarsInGoal_164;
  MR_Word ProgVars_165;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_10, PPId_14, &PredInfo_20, &ProcInfo_21);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_20, &Context_22);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_21, &VarTable_23);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_21, &HeadProgVars_24);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_21, &ArgModes0_25);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_21, &Goal0_26);
  Goal_27 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(Goal0_26);
  ProgVarsInGoal_164 = hlds__quantification__free_goal_vars_1_f_0(Goal_27);
  ProgVars_165 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsInGoal_164);
  transform_hlds__term_constr_util__make_size_var_map_alloc_from_4_p_0(ProgVars_165, STATE_VARIABLE_SizeVarset_0_45, &STATE_VARIABLE_SizeVarset_1_163, &SizeVarMap0_162);
  transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(HeadProgVars_24, STATE_VARIABLE_SizeVarset_1_163, STATE_VARIABLE_SizeVarset_46, SizeVarMap0_162, &SizeVarMap_28);
  Zeros_29 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_10, VarTable_23, SizeVarMap_28);
  Var_58 = ((MR_Word) ((MR_hl_field(0, Options_11, 0))));
  Var_81 = ((((MR_Unsigned) ((MR_hl_field(0, Options_11, 1))) >> 1)) & (MR_Integer) 1);
  Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Options_11, 1))) & (MR_Integer) 1);
  {
    Info0_30 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_30, 0) = (MR_Box) (((((MR_Unsigned) (Var_82) << 4)) | (((((MR_Unsigned) (Var_81) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    MR_hl_field(0, Info0_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_30, 2) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Info0_30, 3) = ((MR_Box) (Var_58));
    MR_hl_field(0, Info0_30, 4) = ((MR_Box) (PPId_14));
    MR_hl_field(0, Info0_30, 5) = ((MR_Box) (Context_22));
    MR_hl_field(0, Info0_30, 6) = ((MR_Box) (VarTable_23));
    MR_hl_field(0, Info0_30, 7) = ((MR_Box) (Zeros_29));
    MR_hl_field(0, Info0_30, 8) = ((MR_Box) (SizeVarMap_28));
    MR_hl_field(0, Info0_30, 9) = ((MR_Box) (SCC_12));
    MR_hl_field(0, Info0_30, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info0_30, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Goal_27, &AbstractBody0_31, Info0_30, &Info_32);
  IntermodStatus_33 = ((MR_Unsigned) ((MR_hl_field(0, Info_32, 0))) & (MR_Integer) 1);
  HeadSizeVars_34 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_28, HeadProgVars_24);
  AbstractBody_35 = transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(AbstractBody0_31);
  {
    ChooseArg_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ChooseArg_36, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[1]));
    MR_hl_field(0, ChooseArg_36, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1));
    MR_hl_field(0, ChooseArg_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, ChooseArg_36, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, ChooseArg_36, 4) = ((MR_Box) (VarTable_23));
  }
  Inputs_41 = mercury__list__map_corresponding_3_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ChooseArg_36, HeadProgVars_24, ArgModes0_25);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PPId_14)), EntryProcs_13);
  if (succeeded)
    IsEntryPoint_42 = (MR_Integer) 1;
  else
    IsEntryPoint_42 = (MR_Integer) 0;
  Var_64 = (MR_Word) (PPId_14);
  Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, Info_32, 0))) >> 1)) & (MR_Integer) 3);
  Var_104 = ((MR_Word) ((MR_hl_field(0, Info_32, 1))));
  Var_113 = ((MR_Integer) ((MR_hl_field(0, Info_32, 10))));
  Var_114 = ((MR_Word) ((MR_hl_field(0, Info_32, 11))));
  {
    AbstractProc_43 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AbstractProc_43, 0) = ((MR_Box) (Var_64));
    MR_hl_field(0, AbstractProc_43, 1) = ((MR_Box) (Context_22));
    MR_hl_field(0, AbstractProc_43, 2) = ((MR_Box) (HeadSizeVars_34));
    MR_hl_field(0, AbstractProc_43, 3) = ((MR_Box) (Inputs_41));
    MR_hl_field(0, AbstractProc_43, 4) = ((MR_Box) (AbstractBody_35));
    MR_hl_field(0, AbstractProc_43, 5) = ((MR_Box) (SizeVarMap_28));
    MR_hl_field(0, AbstractProc_43, 6) = ((MR_Box) (*STATE_VARIABLE_SizeVarset_46));
    MR_hl_field(0, AbstractProc_43, 7) = ((MR_Box) (Zeros_29));
    MR_hl_field(0, AbstractProc_43, 8) = (MR_Box) (((((MR_Unsigned) (IsEntryPoint_42) << 2)) | (MR_Unsigned) (Var_65)));
    MR_hl_field(0, AbstractProc_43, 9) = ((MR_Box) (Var_113));
    MR_hl_field(0, AbstractProc_43, 10) = ((MR_Box) (Var_114));
  }
  {
    ThisProcInfo_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ThisProcInfo_44, 0) = ((MR_Box) (PPId_14));
    MR_hl_field(0, ThisProcInfo_44, 1) = ((MR_Box) (AbstractProc_43));
    MR_hl_field(0, ThisProcInfo_44, 2) = ((MR_Box) (SizeVarMap_28));
    MR_hl_field(0, ThisProcInfo_44, 3) = (MR_Box) ((MR_Unsigned) (IntermodStatus_33));
    MR_hl_field(0, ThisProcInfo_44, 4) = ((MR_Box) (Var_104));
    MR_hl_field(0, ThisProcInfo_44, 5) = ((MR_Box) (HeadSizeVars_34));
  }
  mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0), ((MR_Box) (ThisProcInfo_44)), STATE_VARIABLE_AbstractInfo_0_47, STATE_VARIABLE_AbstractInfo_48);
}

static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SizeVarset_0_2,
  MR_Word * STATE_VARIABLE_SizeVarset_3,
  MR_Word STATE_VARIABLE_SizeVarMap_0_4,
  MR_Word * STATE_VARIABLE_SizeVarMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SizeVarMap_5 = STATE_VARIABLE_SizeVarMap_0_4;
      *STATE_VARIABLE_SizeVarset_3 = STATE_VARIABLE_SizeVarset_0_2;
    }
    else
    {
      MR_Word ProgVar_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ProgVars_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box conv0_Var_16;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), STATE_VARIABLE_SizeVarMap_0_4, ((MR_Box) (ProgVar_12)), &conv0_Var_16);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = ProgVars_13;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word SizeVar_17;
        MR_Word STATE_VARIABLE_SizeVarset_2_24;
        MR_Word STATE_VARIABLE_SizeVarMap_2_25;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_SizeVarset_0_2;
        MR_Word next_value_of_STATE_VARIABLE_SizeVarMap_0_4;

        mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &SizeVar_17, STATE_VARIABLE_SizeVarset_0_2, &STATE_VARIABLE_SizeVarset_2_24);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (ProgVar_12)), ((MR_Box) (SizeVar_17)), STATE_VARIABLE_SizeVarMap_0_4, &STATE_VARIABLE_SizeVarMap_2_25);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = ProgVars_13;
        next_value_of_STATE_VARIABLE_SizeVarset_0_2 = STATE_VARIABLE_SizeVarset_2_24;
        next_value_of_STATE_VARIABLE_SizeVarMap_0_4 = STATE_VARIABLE_SizeVarMap_2_25;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_SizeVarset_0_2 = next_value_of_STATE_VARIABLE_SizeVarset_0_2;
        STATE_VARIABLE_SizeVarMap_0_4 = next_value_of_STATE_VARIABLE_SizeVarMap_0_4;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_90;

  conv0_LambdaHeadVar__2_90 = transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__476__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_90));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_109 = (MR_Word) ((MR_Word) (GoalExpr_6));
        MR_Word Var_39;

        transform_hlds__term_constr_build__build_abstract_goal_4_p_0(SubGoal_109, &Var_39, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
        *AbstractGoal_8 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(*STATE_VARIABLE_Info_62, SubGoal_109);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_37 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));

        transform_hlds__term_constr_build__build_abstract_unification_3_p_0(STATE_VARIABLE_Info_0_61, Unification_37, AbstractGoal_8);
        *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallPredId_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 0))));
        MR_Integer CallProcId_28 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, 1))));
        MR_Word CallArgs_29 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));
        MR_Word CallSizeArgs_33;
        MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, 8))));
        MR_Word Var_86;

        CallSizeArgs_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_85, CallArgs_29);
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = ((MR_Box) (CallPredId_27));
          MR_hl_field(0, Var_86, 1) = ((MR_Box) (CallProcId_28));
        }
        transform_hlds__term_constr_build__build_abstract_call_6_p_0(Var_86, CallSizeArgs_33, GoalInfo_7, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_102;
            MR_Word Context_111;

            Context_111 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
            Var_102 = libs__polyhedron__universe_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *AbstractGoal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) (Var_102));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            transform_hlds__term_constr_build__info_update_ho_info_3_p_0(Context_111, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attrs_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
            MR_Word PredId_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
            MR_Integer ProcId_42 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 3))));
            MR_Word Args_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
            MR_Word ExtraArgs_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
            MR_Word ProgVars_49;
            MR_Word SizeVars_50;
            MR_Word Constraints_51;
            MR_Word Polyhedron_54;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;

            Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_43, ExtraArgs_44);
            ProgVars_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[11]), Var_91);
            Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, 8))));
            SizeVars_50 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_92, ProgVars_49);
            Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_61, 7))));
            Constraints_51 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(SizeVars_50, Var_93);
            {
              MR_Word Var_94;

              Var_94 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_40);
              succeeded = (Var_94 == (MR_Integer) 0);
            }
            if (!(succeeded))
            {
              MR_Word Var_95;
              MR_Word Var_96;

              Var_95 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_40);
              succeeded = (Var_95 == (MR_Integer) 2);
              if (succeeded)
              {
                Var_96 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_40);
                succeeded = (Var_96 == (MR_Integer) 1);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            else
            {
              MR_Word Context_52;
              MR_Word Error_53;
              MR_Word Var_97;
              MR_Word Var_98;

              Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_98, 0) = ((MR_Box) (PredId_41));
                MR_hl_field(0, Var_98, 1) = ((MR_Box) (ProcId_42));
              }
              {
                Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_97, 0) = ((MR_Box) (Var_98));
              }
              {
                Error_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Error_53, 0) = ((MR_Box) (Context_52));
                MR_hl_field(0, Error_53, 1) = ((MR_Box) (Var_97));
              }
              transform_hlds__term_constr_build__tti_info_add_error_3_p_0(Error_53, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            Polyhedron_54 = libs__polyhedron__from_constraints_1_f_0(Constraints_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *AbstractGoal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_54));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

            transform_hlds__term_constr_build__build_abstract_conj_4_p_0(Goals_11, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_64;
            MR_Word Goals_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Goals_108));
            }
            transform_hlds__term_constr_build__build_abstract_disj_4_p_0(Var_64, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
            MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
            MR_Word Var_66;

            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (SwitchVar_12));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (Cases_14));
            }
            transform_hlds__term_constr_build__build_abstract_disj_4_p_0(Var_66, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
            MR_Word SubGoal_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
            MR_Word TermVar_26;
            MR_Word Var_83;

            succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_24, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_26 = ((MR_Word) ((MR_hl_field(3, Reason_24, 1))));
              Var_83 = ((MR_Unsigned) ((MR_hl_field(3, Reason_24, 2))) & (MR_Integer) 3);
              succeeded = (Var_83 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_4_p_0(STATE_VARIABLE_Info_0_61, TermVar_26, SubGoal_25, AbstractGoal_8);
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            }
            else
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(SubGoal_25, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
            MR_Word Then_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
            MR_Word Else_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
            MR_Word AbstractSuccessGoal_19;
            MR_Word CondFail_20;
            MR_Word AbstractElse_21;
            MR_Word AbstractFailureGoal_22;
            MR_Word AbstractDisjuncts_23;
            MR_Word Var_68;
            MR_Word STATE_VARIABLE_Info_4_69;
            MR_Word Var_70;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_78;

            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Then_17));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (Cond_16));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
            }
            transform_hlds__term_constr_build__build_abstract_conj_4_p_0(Var_68, &AbstractSuccessGoal_19, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_4_69);
            CondFail_20 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(STATE_VARIABLE_Info_4_69, Cond_16);
            transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Else_18, &AbstractElse_21, STATE_VARIABLE_Info_4_69, STATE_VARIABLE_Info_62);
            {
              Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_74, 0) = ((MR_Box) (AbstractElse_21));
              MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (CondFail_20));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              AbstractFailureGoal_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AbstractFailureGoal_22, 0) = ((MR_Box) (Var_73));
              MR_hl_field(1, AbstractFailureGoal_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, AbstractFailureGoal_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (AbstractFailureGoal_22));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              AbstractDisjuncts_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AbstractDisjuncts_23, 0) = ((MR_Box) (AbstractSuccessGoal_19));
              MR_hl_field(1, AbstractDisjuncts_23, 1) = ((MR_Box) (Var_78));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *AbstractGoal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (AbstractDisjuncts_23));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
  MR_Word SwitchProgVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AbstractGoals_0_3,
  MR_Word * STATE_VARIABLE_AbstractGoals_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_AbstractGoals_4 = STATE_VARIABLE_AbstractGoals_0_3;
    }
    else
    {
      MR_Word Case_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case_15, 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case_15, 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(0, Case_15, 2))));
      MR_Word AbstractGoal0_22;
      MR_Word AbstractGoal_23;
      MR_Word STATE_VARIABLE_Info_1_42;
      MR_Word STATE_VARIABLE_AbstractGoals_1_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_AbstractGoals_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Goal_21, &AbstractGoal0_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_42);
      succeeded = (OtherConsIds_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = transform_hlds__term_constr_build__detect_switch_var_3_p_0(Goal_21, SwitchProgVar_1, MainConsId_19);
      if (succeeded)
        AbstractGoal_23 = AbstractGoal0_22;
      else
      {
        MR_Word VarTable_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_42, 6))));
        MR_Word SizeVarMap_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_42, 8))));
        MR_Word SwitchVarType_26;
        MR_Word SwitchSizeVar_27;
        MR_Word TypeCtor_28;
        MR_Word ModuleInfo_29;
        MR_Word Norm_30;
        MR_Word Zeros_31;
        MR_Integer Size_32;
        MR_Word ExtraConstr_33;
        MR_Word ExtraPoly_36;
        MR_Word ExtraGoal_37;
        MR_Word Var_46;
        MR_Word Var_47;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_24, SwitchProgVar_1, &SwitchVarType_26);
        SwitchSizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_25, SwitchProgVar_1);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(SwitchVarType_26, &TypeCtor_28);
        ModuleInfo_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_42, 2))));
        Norm_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_42, 3))));
        Zeros_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_42, 7))));
        Size_32 = transform_hlds__term_norm__functor_lower_bound_4_f_0(ModuleInfo_29, Norm_30, TypeCtor_28, MainConsId_19);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SwitchSizeVar_27)), Zeros_31);
        if (succeeded)
          ExtraConstr_33 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word SwitchVarConst_34;
          MR_Word SwitchVarConstr_35;

          SwitchVarConst_34 = libs__rat__rat_1_f_0(Size_32);
          succeeded = (Size_32 == (MR_Integer) 0);
          if (succeeded)
            SwitchVarConstr_35 = libs__lp_rational__make_var_const_eq_constraint_2_f_0(SwitchSizeVar_27, SwitchVarConst_34);
          else
            SwitchVarConstr_35 = libs__lp_rational__make_var_const_gte_constraint_2_f_0(SwitchSizeVar_27, SwitchVarConst_34);
          {
            ExtraConstr_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ExtraConstr_33, 0) = ((MR_Box) (SwitchVarConstr_35));
            MR_hl_field(1, ExtraConstr_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        ExtraPoly_36 = libs__polyhedron__from_constraints_1_f_0(ExtraConstr_33);
        {
          ExtraGoal_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ExtraGoal_37, 0) = ((MR_Box) (ExtraPoly_36));
          MR_hl_field(3, ExtraGoal_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ExtraGoal_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (AbstractGoal0_22));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (ExtraGoal_37));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          AbstractGoal_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AbstractGoal_23, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, AbstractGoal_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, AbstractGoal_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (AbstractGoal_23)), STATE_VARIABLE_AbstractGoals_0_3, &STATE_VARIABLE_AbstractGoals_1_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_16;
      next_value_of_STATE_VARIABLE_AbstractGoals_0_3 = STATE_VARIABLE_AbstractGoals_1_51;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_42;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_AbstractGoals_0_3 = next_value_of_STATE_VARIABLE_AbstractGoals_0_3;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractGoals_0_2,
  MR_Word * STATE_VARIABLE_AbstractGoals_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *STATE_VARIABLE_AbstractGoals_3 = STATE_VARIABLE_AbstractGoals_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word AbstractGoal_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word STATE_VARIABLE_AbstractGoals_1_22;
      MR_Word GoalExpr_24 = ((MR_Word) ((MR_hl_field(0, Goal_12, 0))));
      MR_Word GoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));
      MR_Word AbstractGoal0_26;
      MR_Word Locals0_27;
      MR_Word NonLocals0_28;
      MR_Word SizeVarMap_29;
      MR_Word Locals_30;
      MR_Word NonLocals_31;
      MR_Word GoalInfo_47;
      MR_Word NonLocals0_48;
      MR_Word QuantVars_49;
      MR_Word Var_51;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AbstractGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(GoalExpr_24, GoalInfo_25, &AbstractGoal0_26, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_21);
      GoalInfo_47 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));
      NonLocals0_48 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_47);
      QuantVars_49 = hlds__quantification__free_goal_vars_1_f_0(Goal_12);
      Var_51 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantVars_49, NonLocals0_48);
      Locals0_27 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_51);
      NonLocals0_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_48);
      SizeVarMap_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_21, 8))));
      Locals_30 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_29, Locals0_27);
      NonLocals_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_29, NonLocals0_28);
      AbstractGoal_16 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(AbstractGoal0_26, Locals_30, NonLocals_31);
      mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (AbstractGoal_16)), STATE_VARIABLE_AbstractGoals_0_2, &STATE_VARIABLE_AbstractGoals_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_AbstractGoals_0_2 = STATE_VARIABLE_AbstractGoals_1_22;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AbstractGoals_0_2 = next_value_of_STATE_VARIABLE_AbstractGoals_0_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
  MR_Word Type_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word AbstractGoals_9;

  if (((MR_tag((MR_Word) Type_5)) == (MR_Integer) 1))
  {
    MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, Type_5, 0))));

    transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(Goals_8, (MR_Word) ((MR_Unsigned) 0U), &AbstractGoals_9, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
  else
  {
    MR_Word SwitchVar_10 = ((MR_Word) ((MR_hl_field(0, Type_5, 0))));
    MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(0, Type_5, 1))));

    transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(SwitchVar_10, Cases_11, (MR_Word) ((MR_Unsigned) 0U), &AbstractGoals_9, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
  if ((AbstractGoals_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_23;

    Var_23 = libs__polyhedron__universe_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, AbstractGoals_9, 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, AbstractGoals_9, 0))));

    if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
      *AbstractGoal_6 = Var_32;
    else
    {
      MR_Integer DisjSize_16;

      DisjSize_16 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), AbstractGoals_9);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *AbstractGoal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (AbstractGoals_9));
        MR_hl_field(0, base, 1) = ((MR_Box) (DisjSize_16));
        MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
  MR_Word AbstractGoal0_10;
  MR_Word Locals0_11;
  MR_Word NonLocals0_12;
  MR_Word SizeVarMap_13;
  MR_Word Locals_14;
  MR_Word NonLocals_15;
  MR_Word GoalInfo_33;
  MR_Word NonLocals0_34;
  MR_Word QuantVars_35;
  MR_Word Var_37;

  transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(GoalExpr_8, GoalInfo_9, &AbstractGoal0_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  GoalInfo_33 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
  NonLocals0_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_33);
  QuantVars_35 = hlds__quantification__free_goal_vars_1_f_0(Goal_5);
  Var_37 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantVars_35, NonLocals0_34);
  Locals0_11 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37);
  NonLocals0_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_34);
  SizeVarMap_13 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_17, 8))));
  Locals_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_13, Locals0_11);
  NonLocals_15 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_13, NonLocals0_12);
  *AbstractGoal_6 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(AbstractGoal0_10, Locals_14, NonLocals_15);
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
  MR_Word Info_4,
  MR_Word Goal_5)
{
  MR_bool succeeded;
  MR_Word AbstractGoal_6;
  MR_Word AbstractGoal0_7;
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_4, 0))) >> 3)) & (MR_Integer) 1);

  succeeded = (Var_13 == (MR_Integer) 1);
  if (succeeded)
    succeeded = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(Info_4, Goal_5, &AbstractGoal0_7);
  if (succeeded)
    AbstractGoal_6 = AbstractGoal0_7;
  else
  {
    MR_Word NonLocalProgVars0_8;
    MR_Word NonLocalProgVars_9;
    MR_Word NonLocalSizeVars_10;
    MR_Word Constraints_11;
    MR_Word FailPoly_12;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
    MR_Word Var_15;
    MR_Word Var_16;

    NonLocalProgVars0_8 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_14);
    NonLocalProgVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalProgVars0_8);
    Var_15 = ((MR_Word) ((MR_hl_field(0, Info_4, 8))));
    NonLocalSizeVars_10 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_15, NonLocalProgVars_9);
    Var_16 = ((MR_Word) ((MR_hl_field(0, Info_4, 7))));
    Constraints_11 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(NonLocalSizeVars_10, Var_16);
    FailPoly_12 = libs__polyhedron__from_constraints_1_f_0(Constraints_11);
    {
      AbstractGoal_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, AbstractGoal_6, 0) = ((MR_Box) (FailPoly_12));
      MR_hl_field(3, AbstractGoal_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, AbstractGoal_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return AbstractGoal_6;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1196__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1194__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6)
{
  MR_bool succeeded;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
  MR_Word Var_182 = ((MR_Word) ((MR_hl_field(0, Info_4, 8))));
  MR_Word Var_184 = ((MR_Word) ((MR_hl_field(0, Info_4, 6))));

  if (((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 2))
  {
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, 1))));
    MR_Word CallArgs_11 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 2))));
    MR_Word CallSizeArgs0_16;
    MR_Word Zeros_17;
    MR_Word CallSizeArgs_18;
    MR_Word ModuleInfo_19;
    MR_Word ProcInfo_21;
    MR_Word Term2Info_22;
    MR_Word MaybeFailureConstrs_23;
    MR_Word FailureConstraints_24;
    MR_Word FailurePolyhedron_31;
    MR_Word Var_61;
    MR_Word Var_20;

    CallSizeArgs0_16 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_182, CallArgs_11);
    Zeros_17 = ((MR_Word) ((MR_hl_field(0, Info_4, 7))));
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (Zeros_17));
    }
    CallSizeArgs_18 = mercury__list__negated_filter_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), Var_61, CallSizeArgs0_16);
    ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_4, 2))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_19, PredId_9, ProcId_10, &Var_20, &ProcInfo_21);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_21, &Term2Info_22);
    MaybeFailureConstrs_23 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(Term2Info_22);
    if ((MaybeFailureConstrs_23 == (MR_Word) ((MR_Unsigned) 0U)))
      FailureConstraints_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CalleeFailurePolyhedron_25 = ((MR_Word) ((MR_hl_field(1, MaybeFailureConstrs_23, 0))));
      MR_Word CalleeFailureConstraints_26;

      CalleeFailureConstraints_26 = libs__polyhedron__non_false_constraints_1_f_0(CalleeFailurePolyhedron_25);
      if ((CalleeFailureConstraints_26 == (MR_Word) ((MR_Unsigned) 0U)))
        FailureConstraints_24 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word CalleeHeadVars_29;
        MR_Word SubstMap_30;

        CalleeHeadVars_29 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(Term2Info_22);
        SubstMap_30 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(CallSizeArgs_18, CalleeHeadVars_29);
        FailureConstraints_24 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(CalleeFailureConstraints_26, SubstMap_30);
      }
    }
    FailurePolyhedron_31 = libs__polyhedron__from_constraints_1_f_0(FailureConstraints_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) (FailurePolyhedron_31));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = MR_TRUE;
  }
  else
  if (((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 1))
  {
    MR_Word Unification_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 3))));
    MR_Word Var_37;
    MR_Word ConsId_38;
    MR_Word Type_42;
    MR_Word TypeCtor_43;
    MR_Word Constructors0_44;
    MR_Word Constructors_57;
    MR_Word SizeVar_58;
    MR_Word Norm_59;
    MR_Word Polyhedron_60;
    MR_Word Var_64;
    MR_Word Var_72;
    MR_Word SizeVarMap_75;
    MR_Word ModuleInfo_76;
    MR_Word DuCtor_45;

    succeeded = ((MR_tag((MR_Word) Unification_35)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(1, Unification_35, 0))));
      ConsId_38 = ((MR_Word) ((MR_hl_field(1, Unification_35, 1))));
      Var_64 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_35, 4))) >> 1)) & (MR_Integer) 1);
      succeeded = (Var_64 == (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__var_table__lookup_var_type_3_p_0(Var_184, Var_37, &Type_42);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_42, &TypeCtor_43);
        ModuleInfo_76 = ((MR_Word) ((MR_hl_field(0, Info_4, 2))));
        succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_76, Type_42, &Constructors0_44);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ConsId_38)) == (MR_Integer) 1);
          if (succeeded)
          {
            DuCtor_45 = (MR_Word) (MR_body((MR_Word) (ConsId_38), (MR_Integer) 1));
            {
              MR_Word ConsName_46 = ((MR_Word) ((MR_hl_field(0, DuCtor_45, 0))));
              MR_Integer ConsArity_47 = ((MR_Integer) ((MR_hl_field(0, DuCtor_45, 1))));
              MR_Word ConsTypeCtor_48 = ((MR_Word) ((MR_hl_field(0, DuCtor_45, 2))));
              MR_Word FindComplement_49;
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2));
                MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_66, 3) = ((MR_Box) (TypeCtor_43));
                MR_hl_field(0, Var_66, 4) = ((MR_Box) (ConsTypeCtor_48));
              }
              mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "mismatched type_ctors");
              {
                FindComplement_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FindComplement_49, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[1]));
                MR_hl_field(0, FindComplement_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3));
                MR_hl_field(0, FindComplement_49, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, FindComplement_49, 3) = ((MR_Box) (ConsName_46));
                MR_hl_field(0, FindComplement_49, 4) = ((MR_Box) (ConsArity_47));
              }
              mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), FindComplement_49, Constructors0_44, &Constructors_57);
            }
          }
          else
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "non cons cons_id.");
          SizeVarMap_75 = ((MR_Word) ((MR_hl_field(0, Info_4, 8))));
          SizeVar_58 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_75, Var_37);
          Norm_59 = ((MR_Word) ((MR_hl_field(0, Info_4, 3))));
          transform_hlds__term_constr_build__bounds_on_var_6_p_0(Norm_59, ModuleInfo_76, TypeCtor_43, SizeVar_58, Constructors_57, &Polyhedron_60);
          Var_72 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *AbstractGoal_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_60));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_72));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_72));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = mercury__int__min_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv1_LambdaHeadVar__3_28;

  succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1282__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_28);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_28));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1229__1_1_p_0(((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_LowerBound_10;

  conv0_LowerBound_10 = transform_hlds__term_constr_build__lower_bound_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LowerBound_10));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word Var_10,
  MR_Word Constructors_11,
  MR_Word * Polyhedron_12)
{
  MR_bool succeeded;
  MR_Word CtorSizes_13;
  MR_Word ZeroSizeCtors_15;
  MR_Word NonZeroSizeCtors_16;
  MR_Word Constraints_19;
  MR_Word Var_27;

  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[0]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Norm_7));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_27, 5) = ((MR_Box) (TypeCtor_9));
  }
  CtorSizes_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_27, Constructors_11);
  mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[9]), CtorSizes_13, &ZeroSizeCtors_15, &NonZeroSizeCtors_16);
  if ((NonZeroSizeCtors_16 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ZeroSizeCtors_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.bounds_on_var\'/6", (MR_String) "no other constructors for type");
        return;
      }
    else
    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;

      Var_35 = libs__rat__one_0_f_0();
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (Var_10));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_38 = libs__rat__zero_0_f_0();
      Var_32 = libs__lp_rational__construct_constraint_3_f_0(Var_33, (MR_Integer) 1, Var_38);
      {
        Constraints_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraints_19, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  else
  {
    MR_Integer C_20 = ((MR_Integer) ((MR_hl_field(1, NonZeroSizeCtors_16, 0))));
    MR_Word Cs_21 = ((MR_Word) ((MR_hl_field(1, NonZeroSizeCtors_16, 1))));
    MR_Word UpperBoundConstr_22;
    MR_Word LowerBoundConstr_24;
    MR_Word FindUpperBound_66;
    MR_Integer Bound0_67;
    MR_Box conv2_Bound0_67;

    {
      FindUpperBound_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FindUpperBound_66, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[2]));
      MR_hl_field(0, FindUpperBound_66, 1) = ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_3));
      MR_hl_field(0, FindUpperBound_66, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, FindUpperBound_66, 3) = ((MR_Box) (Norm_7));
      MR_hl_field(0, FindUpperBound_66, 4) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, FindUpperBound_66, 5) = ((MR_Box) (TypeCtor_9));
    }
    succeeded = mercury__list__foldl_4_p_3((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FindUpperBound_66, Constructors_11, ((MR_Box) ((MR_Integer) 0)), &conv2_Bound0_67);
    if (succeeded)
    {
      Bound0_67 = ((MR_Integer) (conv2_Bound0_67));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Bound0_67 == (MR_Integer) 0);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", (MR_String) "zero upper bound");
          return;
        }
      else
      {
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;

        Var_74 = libs__rat__one_0_f_0();
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_10));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_77 = libs__rat__rat_1_f_0(Bound0_67);
        Var_71 = libs__lp_rational__construct_constraint_3_f_0(Var_72, (MR_Integer) 0, Var_77);
        {
          UpperBoundConstr_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UpperBoundConstr_22, 0) = ((MR_Box) (Var_71));
          MR_hl_field(1, UpperBoundConstr_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
      UpperBoundConstr_22 = (MR_Word) ((MR_Unsigned) 0U);
    if ((ZeroSizeCtors_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer LowerBound_23;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Box conv4_LowerBound_23;

      conv4_LowerBound_23 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[10]), Cs_21, ((MR_Box) (C_20)));
      LowerBound_23 = ((MR_Integer) (conv4_LowerBound_23));
      Var_44 = libs__rat__one_0_f_0();
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_10));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_47 = libs__rat__rat_1_f_0(LowerBound_23);
      Var_41 = libs__lp_rational__construct_constraint_3_f_0(Var_42, (MR_Integer) 2, Var_47);
      {
        LowerBoundConstr_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LowerBoundConstr_24, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, LowerBoundConstr_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;

      Var_52 = libs__rat__one_0_f_0();
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (Var_10));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_55 = libs__rat__zero_0_f_0();
      Var_49 = libs__lp_rational__construct_constraint_3_f_0(Var_50, (MR_Integer) 2, Var_55);
      {
        LowerBoundConstr_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LowerBoundConstr_24, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, LowerBoundConstr_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), LowerBoundConstr_24, UpperBoundConstr_22);
  }
  *Polyhedron_12 = libs__polyhedron__from_constraints_1_f_0(Constraints_19);
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_3_p_0(
  MR_Word Info_4,
  MR_Word Unification_5,
  MR_Word * AbstractGoal_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Unification_5, 0))));
        MR_Word ConsId_8 = ((MR_Word) ((MR_hl_field(0, Unification_5, 1))));
        MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(0, Unification_5, 2))));
        MR_Word Modes_10 = ((MR_Word) ((MR_hl_field(0, Unification_5, 3))));
        MR_Word Constraints_14;
        MR_Word Polyhedron_79;

        transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0(Info_4, Var_7, ConsId_8, ArgVars_9, Modes_10, &Constraints_14);
        Polyhedron_79 = libs__polyhedron__from_constraints_1_f_0(Constraints_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AbstractGoal_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_79));
          MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_79);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
            return;
          }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Unification_5, 0))));
        MR_Word ConsId_25 = ((MR_Word) ((MR_hl_field(1, Unification_5, 1))));
        MR_Word ArgVars_26 = ((MR_Word) ((MR_hl_field(1, Unification_5, 2))));
        MR_Word Modes_27 = ((MR_Word) ((MR_hl_field(1, Unification_5, 3))));
        MR_Word Constraints_28;
        MR_Word Polyhedron_84;

        transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0(Info_4, Var_24, ConsId_25, ArgVars_26, Modes_27, &Constraints_28);
        Polyhedron_84 = libs__polyhedron__from_constraints_1_f_0(Constraints_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AbstractGoal_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_84));
          MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_84);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
            return;
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LVar_17 = ((MR_Word) ((MR_hl_field(2, Unification_5, 0))));
        MR_Word RVar_18 = ((MR_Word) ((MR_hl_field(2, Unification_5, 1))));
        MR_Word Constraints_29;
        MR_Word SizeVarMap_33 = ((MR_Word) ((MR_hl_field(0, Info_4, 8))));
        MR_Word Zeros_34 = ((MR_Word) ((MR_hl_field(0, Info_4, 7))));
        MR_Word LeftSizeVar_35;
        MR_Word RightSizeVar_36;
        MR_Word Polyhedron_74;

        LeftSizeVar_35 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_33, LVar_17);
        RightSizeVar_36 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_33, RVar_18);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_35)), Zeros_34);
        if (succeeded)
          succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_36)), Zeros_34);
        if (succeeded)
          Constraints_29 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_35)), Zeros_34);
          if (!(succeeded))
            succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_36)), Zeros_34);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/4", (MR_String) "zero unified with non-zero");
              return;
            }
          else
          {
            MR_Word NonNegConstrs_37;
            MR_Word Terms_38;
            MR_Word AssignConstr_39;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_54;
            MR_Word Var_55;

            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (RightSizeVar_36));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (LeftSizeVar_35));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
            }
            NonNegConstrs_37 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[8]), Var_43);
            Var_47 = libs__rat__one_0_f_0();
            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_46, 0) = ((MR_Box) (LeftSizeVar_35));
              MR_hl_field(0, Var_46, 1) = ((MR_Box) (Var_47));
            }
            Var_51 = libs__rat__one_0_f_0();
            Var_50 = libs__rat__f_minus_1_f_0(Var_51);
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_49, 0) = ((MR_Box) (RightSizeVar_36));
              MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Terms_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Terms_38, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, Terms_38, 1) = ((MR_Box) (Var_48));
            }
            Var_54 = libs__rat__zero_0_f_0();
            AssignConstr_39 = libs__lp_rational__construct_constraint_3_f_0(Terms_38, (MR_Integer) 1, Var_54);
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (AssignConstr_39));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) (NonNegConstrs_37));
            }
            Constraints_29 = libs__lp_rational__simplify_constraints_1_f_0(Var_55);
          }
        }
        Polyhedron_74 = libs__polyhedron__from_constraints_1_f_0(Constraints_29);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AbstractGoal_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_74));
          MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_74);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
            return;
          }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Constraints_30;
            MR_Word LVar_31 = ((MR_Word) ((MR_hl_field(3, Unification_5, 1))));
            MR_Word RVar_32 = ((MR_Word) ((MR_hl_field(3, Unification_5, 2))));
            MR_Word Polyhedron_89;

            transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0(Info_4, LVar_31, RVar_32, &Constraints_30);
            Polyhedron_89 = libs__polyhedron__from_constraints_1_f_0(Constraints_30);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *AbstractGoal_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_89));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_89);
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
                return;
              }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/3", (MR_String) "complicated_unify");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_4_p_0(
  MR_Word Info_5,
  MR_Word LeftProgVar_6,
  MR_Word RightProgVar_7,
  MR_Word * Constraints_8)
{
  MR_bool succeeded;
  MR_Word SizeVarMap_9 = ((MR_Word) ((MR_hl_field(0, Info_5, 8))));
  MR_Word Zeros_10 = ((MR_Word) ((MR_hl_field(0, Info_5, 7))));
  MR_Word LeftSizeVar_11;
  MR_Word RightSizeVar_12;

  LeftSizeVar_11 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_9, LeftProgVar_6);
  RightSizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_9, RightProgVar_7);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_11)), Zeros_10);
  if (succeeded)
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_12)), Zeros_10);
  if (succeeded)
    *Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_11)), Zeros_10);
    if (!(succeeded))
      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_12)), Zeros_10);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/4", (MR_String) "zero unified with non-zero");
        return;
      }
    else
    {
      MR_Word NonNegConstrs_13;
      MR_Word Terms_14;
      MR_Word AssignConstr_15;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (RightSizeVar_12));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (LeftSizeVar_11));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
      }
      NonNegConstrs_13 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[7]), Var_19);
      Var_23 = libs__rat__one_0_f_0();
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (LeftSizeVar_11));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (Var_23));
      }
      Var_27 = libs__rat__one_0_f_0();
      Var_26 = libs__rat__f_minus_1_f_0(Var_27);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (RightSizeVar_12));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Terms_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Terms_14, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, Terms_14, 1) = ((MR_Box) (Var_24));
      }
      Var_30 = libs__rat__zero_0_f_0();
      AssignConstr_15 = libs__lp_rational__construct_constraint_3_f_0(Terms_14, (MR_Integer) 1, Var_30);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (AssignConstr_15));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (NonNegConstrs_13));
      }
      *Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(Var_31);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Terms_14;

  transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Terms_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Terms_14));
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0(
  MR_Word Info_7,
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Word ArgVars_10,
  MR_Word Modes_11,
  MR_Word * Constraints_12)
{
  MR_bool succeeded;
  MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(0, Info_7, 6))));
  MR_Word Type_14;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_13, Var_8, &Type_14);
  succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_14);
  if (!(succeeded))
  {
    MR_Integer Var_15;

    succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_9, &Var_15);
  }
  if (succeeded)
    *Constraints_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FixedArgVars_16;
    MR_Word FixedModes_17;
    MR_Word ModuleInfo_18;
    MR_Word Norm_19;
    MR_Word TypeCtor_20;
    MR_Integer Constant_21;
    MR_Word CountedVars_22;
    MR_Word SizeVarMap_24;
    MR_Word Zeros_25;
    MR_Word SizeVar_26;
    MR_Word FirstTerms_27;
    MR_Word Terms_28;
    MR_Word Constraint_29;
    MR_Word SizeVars_32;
    MR_Word NonNegConstraints_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_Args_1_126;
    MR_Word STATE_VARIABLE_Modes_1_127;
    MR_Word Var_23;
    MR_Box conv1_Terms_28;

    succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(VarTable_13, ArgVars_10, &STATE_VARIABLE_Args_1_126, Modes_11, &STATE_VARIABLE_Modes_1_127);
    if (succeeded)
    {
      FixedModes_17 = STATE_VARIABLE_Modes_1_127;
      FixedArgVars_16 = STATE_VARIABLE_Args_1_126;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
        return;
      }
    ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, Info_7, 2))));
    Norm_19 = ((MR_Word) ((MR_hl_field(0, Info_7, 3))));
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_14, &TypeCtor_20);
    transform_hlds__term_norm__functor_norm_9_p_0(ModuleInfo_18, Norm_19, TypeCtor_20, ConsId_9, &Constant_21, FixedArgVars_16, &CountedVars_22, FixedModes_17, &Var_23);
    Zeros_25 = ((MR_Word) ((MR_hl_field(0, Info_7, 7))));
    SizeVarMap_24 = ((MR_Word) ((MR_hl_field(0, Info_7, 8))));
    SizeVar_26 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_24, Var_8);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SizeVar_26)), Zeros_25);
    if (succeeded)
      FirstTerms_27 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_34;
      MR_Word Var_35;

      Var_35 = libs__rat__one_0_f_0();
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (SizeVar_26));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        FirstTerms_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FirstTerms_27, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, FirstTerms_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_39 = libs__rat__one_0_f_0();
    Var_38 = libs__rat__f_minus_1_f_0(Var_39);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[1]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (SizeVarMap_24));
      MR_hl_field(0, Var_37, 4) = ((MR_Box) (Zeros_25));
      MR_hl_field(0, Var_37, 5) = ((MR_Box) (Var_38));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[5]), Var_37, CountedVars_22, ((MR_Box) (FirstTerms_27)), &conv1_Terms_28);
    Terms_28 = ((MR_Word) (conv1_Terms_28));
    Var_41 = libs__rat__rat_1_f_0(Constant_21);
    Constraint_29 = libs__lp_rational__construct_constraint_3_f_0(Terms_28, (MR_Integer) 1, Var_41);
    succeeded = libs__lp_rational__is_false_1_p_0(Constraint_29);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/6", (MR_String) "false constraint from unification");
        return;
      }
    else
    {
      MR_Word SizeVars0_30;
      MR_Word SizeVars1_31;
      MR_Word Var_44;

      SizeVars0_30 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_24, ArgVars_10);
      {
        SizeVars1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SizeVars1_31, 0) = ((MR_Box) (SizeVar_26));
        MR_hl_field(1, SizeVars1_31, 1) = ((MR_Box) (SizeVars0_30));
      }
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_6_p_0_2));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (Zeros_25));
      }
      SizeVars_32 = mercury__list__negated_filter_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), Var_44, SizeVars1_31);
    }
    NonNegConstraints_33 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[6]), SizeVars_32);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Constraints_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (NonNegConstraints_33));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_4_p_0(
  MR_Word Info_5,
  MR_Word TermVar_6,
  MR_Word SubGoal_7,
  MR_Word * AbstractGoal_8)
{
  MR_bool succeeded;
  MR_Word SubGoalExpr_9 = ((MR_Word) ((MR_hl_field(0, SubGoal_7, 0))));
  MR_Word Conjuncts_11;
  MR_Word Var_23;

  succeeded = ((((MR_tag((MR_Word) SubGoalExpr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_9, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_23 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_9, 1))) & (MR_Integer) 1);
    Conjuncts_11 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_9, 2))));
    succeeded = (Var_23 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word SizeVarMap_12 = ((MR_Word) ((MR_hl_field(0, Info_5, 8))));
    MR_Word Zeros_13 = ((MR_Word) ((MR_hl_field(0, Info_5, 7))));
    MR_Word TermSizeVar_14;
    MR_Word Constraints_15;

    TermSizeVar_14 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_12, TermVar_6);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (TermSizeVar_14)), Zeros_13);
    if (succeeded)
      Constraints_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, Info_5, 2))));
      MR_Word Norm_17 = ((MR_Word) ((MR_hl_field(0, Info_5, 3))));
      MR_Word VarTable_18 = ((MR_Word) ((MR_hl_field(0, Info_5, 6))));
      MR_Word SizeMap_19;
      MR_Integer KnownTermVarSize_20;
      MR_Word Terms_21;
      MR_Word Constraint_22;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Box conv0_KnownTermVarSize_20;

      Var_24 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(ModuleInfo_16, Norm_17, VarTable_18, Conjuncts_11, Var_24, &SizeMap_19);
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SizeMap_19, ((MR_Box) (TermVar_6)), &conv0_KnownTermVarSize_20);
      KnownTermVarSize_20 = ((MR_Integer) (conv0_KnownTermVarSize_20));
      Var_26 = libs__rat__one_0_f_0();
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (TermSizeVar_14));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        Terms_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Terms_21, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Terms_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_29 = libs__rat__rat_1_f_0(KnownTermVarSize_20);
      Constraint_22 = libs__lp_rational__construct_constraint_3_f_0(Terms_21, (MR_Integer) 1, Var_29);
      {
        Constraints_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraints_15, 0) = ((MR_Box) (Constraint_22));
        MR_hl_field(1, Constraints_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    *AbstractGoal_8 = transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(Constraints_15);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/4", (MR_String) "not conj");
      return;
    }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
  MR_Word Constraints_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Polyhedron_4;

  Polyhedron_4 = libs__polyhedron__from_constraints_1_f_0(Constraints_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) (Polyhedron_4));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_4);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_45;
  MR_Word conv0_HeadVar__4_47;

  transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__838__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_45, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_47);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_45));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_47));
}

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SizeMap_0_5,
  MR_Word * STATE_VARIABLE_SizeMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SizeMap_6 = STATE_VARIABLE_SizeMap_0_5;
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_SizeMap_1_21;
      MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(0, Goal_16, 0))));
      MR_Word Var_29;
      MR_Word ConsId_30;
      MR_Word ArgVars_31;
      MR_Word Modes_32;
      MR_Word Unify_27;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_SizeMap_0_5;

      succeeded = ((MR_tag((MR_Word) GoalExpr_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unify_27 = ((MR_Word) ((MR_hl_field(1, GoalExpr_22, 3))));
        succeeded = ((MR_tag((MR_Word) Unify_27)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(0, Unify_27, 0))));
          ConsId_30 = ((MR_Word) ((MR_hl_field(0, Unify_27, 1))));
          ArgVars_31 = ((MR_Word) ((MR_hl_field(0, Unify_27, 2))));
          Modes_32 = ((MR_Word) ((MR_hl_field(0, Unify_27, 3))));
        }
      }
      if (succeeded)
      {
        MR_Word FixedArgVars_36;
        MR_Word FixedModes_37;
        MR_Word Type_38;
        MR_Word TypeCtor_39;
        MR_Integer ConsIdSize_40;
        MR_Word CountedVars_41;
        MR_Word ArgSizes_43;
        MR_Integer TotalArgSize_44;
        MR_Integer Size_45;
        MR_Word STATE_VARIABLE_SizeMap_1_47;
        MR_Word STATE_VARIABLE_Args_1_54;
        MR_Word STATE_VARIABLE_Modes_1_55;
        MR_Word Var_42;
        MR_Box conv2_STATE_VARIABLE_SizeMap_1_47;

        succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(HeadVar__3_3, ArgVars_31, &STATE_VARIABLE_Args_1_54, Modes_32, &STATE_VARIABLE_Modes_1_55);
        if (succeeded)
        {
          FixedModes_37 = STATE_VARIABLE_Modes_1_55;
          FixedArgVars_36 = STATE_VARIABLE_Args_1_54;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
            return;
          }
        parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__3_3, Var_29, &Type_38);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_38, &TypeCtor_39);
        transform_hlds__term_norm__functor_norm_9_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtor_39, ConsId_30, &ConsIdSize_40, FixedArgVars_36, &CountedVars_41, FixedModes_37, &Var_42);
        mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[1]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[5]), CountedVars_41, &ArgSizes_43, ((MR_Box) (STATE_VARIABLE_SizeMap_0_5)), &conv2_STATE_VARIABLE_SizeMap_1_47);
        STATE_VARIABLE_SizeMap_1_47 = ((MR_Word) (conv2_STATE_VARIABLE_SizeMap_1_47));
        transform_hlds__term_constr_build__accumulate_sum_3_p_0(ArgSizes_43, (MR_Integer) 0, &TotalArgSize_44);
        Size_45 = (MR_Integer) ((MR_Unsigned) ConsIdSize_40 + (MR_Unsigned) TotalArgSize_44);
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_29)), ((MR_Box) (Size_45)), STATE_VARIABLE_SizeMap_1_47, &STATE_VARIABLE_SizeMap_1_21);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", (MR_String) "malformed conjunct");
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Goals_17;
      next_value_of_STATE_VARIABLE_SizeMap_0_5 = STATE_VARIABLE_SizeMap_1_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_SizeMap_0_5 = next_value_of_STATE_VARIABLE_SizeMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Arg_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Mode_10;
    MR_Word Type_12;
    MR_Word STATE_VARIABLE_Args_0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word STATE_VARIABLE_Modes_0_15;
    MR_Word STATE_VARIABLE_Args_1_17;
    MR_Word STATE_VARIABLE_Modes_1_18;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Mode_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      STATE_VARIABLE_Modes_0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(VarTable_1, STATE_VARIABLE_Args_0_13, &STATE_VARIABLE_Args_1_17, STATE_VARIABLE_Modes_0_15, &STATE_VARIABLE_Modes_1_18);
      if (succeeded)
      {
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Arg_8, &Type_12);
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_12);
        if (succeeded)
        {
          *HeadVar__5_5 = STATE_VARIABLE_Modes_1_18;
          *HeadVar__3_3 = STATE_VARIABLE_Args_1_17;
        }
        else
        {
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), ((MR_Box) (Arg_8)), STATE_VARIABLE_Args_1_17, HeadVar__3_3);
          mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), ((MR_Box) (Mode_10)), STATE_VARIABLE_Modes_1_18, HeadVar__5_5);
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalSize_0_2,
  MR_Integer * STATE_VARIABLE_TotalSize_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TotalSize_3 = STATE_VARIABLE_TotalSize_0_2;
    else
    {
      MR_Integer Size_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Sizes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_TotalSize_1_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_2 + (MR_Unsigned) Size_7);
      MR_Word next_value_of_HeadVar__1_1 = Sizes_8;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_2 = STATE_VARIABLE_TotalSize_1_12;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TotalSize_0_2 = next_value_of_STATE_VARIABLE_TotalSize_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word ConsId_3)
{
  MR_bool succeeded;
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  if (((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1))
  {
    MR_Word Kind_7 = ((MR_Word) ((MR_hl_field(1, Var_43, 3))));

    if (((MR_tag((MR_Word) Kind_7)) == (MR_Integer) 1))
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, Kind_7, 0))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Kind_7, 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), ((MR_Box) (SwitchVar_2)), ((MR_Box) (Var_40)));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_3, Var_41);
    }
    else
    if (((((MR_tag((MR_Word) Kind_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Kind_7, 0)))) == (MR_Integer) 1))))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "complicated_unify");
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  }
  else
  if (((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_43, 0)))) == (MR_Integer) 7))))
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "shorthand");
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word GoalInfo_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word Context_12;
  MR_Word Var_15;

  Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 9))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CalleePPId_7)), Var_15);
  if (succeeded)
  {
    MR_Word CallerPPId_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 4))));
    MR_Word CallerZeros_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 7))));
    MR_Word CallerArgConstrs_33;
    MR_Word CallerArgPoly_34;
    MR_Word STATE_VARIABLE_Info_1_36;
    MR_Word Var_38;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPPId_31, CalleePPId_7);
    if (succeeded)
    {
      MR_Word UpdatedRecType_70;
      MR_Word Var_71 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 0))) >> 1)) & (MR_Integer) 3);
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Integer Var_99;
      MR_Word Var_100;

      UpdatedRecType_70 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(Var_71, (MR_Integer) 1);
      Var_86 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 0))) >> 4)) & (MR_Integer) 1);
      Var_87 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 0))) >> 3)) & (MR_Integer) 1);
      Var_89 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 0))) & (MR_Integer) 1);
      Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 1))));
      Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 2))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 3))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 4))));
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 5))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 6))));
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 7))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 8))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 9))));
      Var_99 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 10))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 11))));
      {
        STATE_VARIABLE_Info_1_36 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 0) = (MR_Box) (((((MR_Unsigned) (Var_86) << 4)) | (((((MR_Unsigned) (Var_87) << 3)) | (((((MR_Unsigned) (UpdatedRecType_70) << 1)) | (MR_Unsigned) (Var_89)))))));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 1) = ((MR_Box) (Var_90));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 2) = ((MR_Box) (Var_91));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 3) = ((MR_Box) (Var_92));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 4) = ((MR_Box) (Var_93));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 5) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 6) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 7) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 8) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 9) = ((MR_Box) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 10) = ((MR_Box) (Var_99));
        MR_hl_field(0, STATE_VARIABLE_Info_1_36, 11) = ((MR_Box) (Var_100));
      }
    }
    else
      transform_hlds__term_constr_build__info_update_recursion_3_p_0((MR_Integer) 2, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_1_36);
    CallerArgConstrs_33 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(CallerArgs_8, CallerZeros_32);
    CallerArgPoly_34 = libs__polyhedron__from_constraints_1_f_0(CallerArgConstrs_33);
    transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(STATE_VARIABLE_Info_1_36, STATE_VARIABLE_Info_14);
    Var_38 = (MR_Word) (CalleePPId_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_10 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(2, base, 1) = ((MR_Box) (Context_12));
      MR_hl_field(2, base, 2) = ((MR_Box) (CallerArgs_8));
      MR_hl_field(2, base, 3) = ((MR_Box) (CallerZeros_32));
      MR_hl_field(2, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, base, 6) = ((MR_Box) (CallerArgPoly_34));
    }
  }
  else
    transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(CalleePPId_7, CallerArgs_8, Context_12, AbstractGoal_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, 2))));
  MR_Word CallerPPId_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, 4))));
  MR_Word ZeroVars_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, 7))));
  MR_Word CalleeProcInfo_16;
  MR_Word CalleeTerm2Info_17;
  MR_Word ArgAnalysisOnly_18;
  MR_Word ArgSizeInfo_24;
  MR_Word Constraints_27;
  MR_Word Polyhedron_33;
  MR_Word Var_15;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, CalleePPId_7, &Var_15, &CalleeProcInfo_16);
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(CalleeProcInfo_16, &CalleeTerm2Info_17);
  ArgAnalysisOnly_18 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, 0))) >> 4)) & (MR_Integer) 1);
  switch (ArgAnalysisOnly_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeTermStatus_19;

        MaybeTermStatus_19 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(CalleeTerm2Info_17);
        if ((MaybeTermStatus_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "callee procedure has no termination status.");
            return;
          }
        else
        {
          MR_Word TermStatus_20 = ((MR_Word) ((MR_hl_field(1, MaybeTermStatus_19, 0))));

          if (((MR_tag((MR_Word) TermStatus_20)) == (MR_Integer) 1))
          {
            MR_Word Error_22;
            MR_Word Var_36;

            {
              Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_36, 0) = ((MR_Box) (CallerPPId_13));
              MR_hl_field(1, Var_36, 1) = ((MR_Box) (CalleePPId_7));
            }
            {
              Error_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_22, 0) = ((MR_Box) (Context_9));
              MR_hl_field(0, Error_22, 1) = ((MR_Box) (Var_36));
            }
            transform_hlds__term_constr_build__tti_info_add_error_3_p_0(Error_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
          }
          else
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      break;
  }
  ArgSizeInfo_24 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(CalleeTerm2Info_17);
  if ((ArgSizeInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "no argument size info for callee proc");
      return;
    }
  else
  {
    MR_Word SizeInfo_25 = ((MR_Word) ((MR_hl_field(1, ArgSizeInfo_24, 0))));
    MR_Word ArgSizeConstrs0_26;

    ArgSizeConstrs0_26 = libs__polyhedron__non_false_constraints_1_f_0(SizeInfo_25);
    if ((ArgSizeConstrs0_26 == (MR_Word) ((MR_Unsigned) 0U)))
      Constraints_27 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CalleeHeadVars_30;
      MR_Word SubstMap_31;
      MR_Word Constraints0_32;

      CalleeHeadVars_30 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(CalleeTerm2Info_17);
      SubstMap_31 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(CallerArgs_8, CalleeHeadVars_30);
      Constraints0_32 = libs__lp_rational__substitute_vars_2_f_0(SubstMap_31, ArgSizeConstrs0_26);
      Constraints_27 = libs__lp_rational__set_vars_to_zero_2_f_0(ZeroVars_14, Constraints0_32);
    }
  }
  Polyhedron_33 = libs__polyhedron__from_constraints_1_f_0(Constraints_27);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *AbstractGoal_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) (Polyhedron_33));
    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
  MR_Word RecType_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_Word UpdatedRecType_6;
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 0))) >> 1)) & (MR_Integer) 3);
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Integer Var_37;
  MR_Word Var_38;

  UpdatedRecType_6 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(Var_9, RecType_4);
  Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 0))) >> 4)) & (MR_Integer) 1);
  Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 0))) >> 3)) & (MR_Integer) 1);
  Var_27 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 0))) & (MR_Integer) 1);
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 8))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 9))));
  Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 10))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_8 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (Var_24) << 4)) | (((((MR_Unsigned) (Var_25) << 3)) | (((((MR_Unsigned) (UpdatedRecType_6) << 1)) | (MR_Unsigned) (Var_27)))))));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_38));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  MR_Integer Var_7;
  MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 10))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 1))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 4))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 5))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 6))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 7))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 8))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 9))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 11))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 0)));

  Var_7 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_5 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_AbstractGoal_6;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  transform_hlds__term_constr_build__build_abstract_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_AbstractGoal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_2 = ((MR_Box) (conv1_AbstractGoal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
  MR_Word Conjuncts_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word AbstractGoals0_8;
  MR_Word AbstractGoals_9;
  MR_Box conv2_STATE_VARIABLE_Info_11;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[4]), Conjuncts_5, &AbstractGoals0_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
  AbstractGoals_9 = transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(AbstractGoals0_8);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *AbstractGoal_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (AbstractGoals_9));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
  MR_Word Context_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9;
  MR_Word Var_10 = (MR_Word) (Context_4);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 11))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 8))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 9))));
  MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0)));

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 7))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 8))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 9))));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 10))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 11))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0)));

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Error_4));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_24));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_44;
  MR_Word conv4_LambdaHeadVar__5_46;

  transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__150__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_44, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_46);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_44));
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_46));
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SizeVarset_46;
  MR_Word conv0_STATE_VARIABLE_AbstractInfo_48;

  transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SizeVarset_46, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_AbstractInfo_48);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SizeVarset_46));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AbstractInfo_48));
}

void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0(
  MR_Word Options_6,
  MR_Word SCCWithEntryPoints_7,
  MR_Word * Errors_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38)
{
  MR_Word SCC_10 = ((MR_Word) ((MR_hl_field(0, SCCWithEntryPoints_7, 0))));
  MR_Word SCCProcsCalledFromHigherSCCs_11 = ((MR_Word) ((MR_hl_field(0, SCCWithEntryPoints_7, 1))));
  MR_Word ExportedSCCProcs_12 = ((MR_Word) ((MR_hl_field(0, SCCWithEntryPoints_7, 2))));
  MR_Word EntryProcs_13;
  MR_Word SizeVarset_14;
  MR_Word AbstractSCC_15;
  MR_Word PredIdTable0_16;
  MR_Word RecordInfo_17;
  MR_Word PredIdTable_19;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Box conv3_SizeVarset_14;
  MR_Box conv2_AbstractSCC_15;
  MR_Box conv7_Errors_8;
  MR_Box conv6_PredIdTable_19;

  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCCProcsCalledFromHigherSCCs_11, ExportedSCCProcs_12, &EntryProcs_13);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_3[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_37));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (Options_6));
    MR_hl_field(0, Var_39, 5) = ((MR_Box) (SCC_10));
    MR_hl_field(0, Var_39, 6) = ((MR_Box) (EntryProcs_13));
  }
  Var_40 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[1]), Var_39, SCC_10, ((MR_Box) (Var_40)), &conv3_SizeVarset_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_AbstractSCC_15);
  SizeVarset_14 = ((MR_Word) (conv3_SizeVarset_14));
  AbstractSCC_15 = ((MR_Word) (conv2_AbstractSCC_15));
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &PredIdTable0_16);
  {
    RecordInfo_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RecordInfo_17, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[0]));
    MR_hl_field(0, RecordInfo_17, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2));
    MR_hl_field(0, RecordInfo_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, RecordInfo_17, 3) = ((MR_Box) (SizeVarset_14));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[0]), RecordInfo_17, AbstractSCC_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_Errors_8, ((MR_Box) (PredIdTable0_16)), &conv6_PredIdTable_19);
  *Errors_8 = ((MR_Word) (conv7_Errors_8));
  PredIdTable_19 = ((MR_Word) (conv6_PredIdTable_19));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_19, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
}

MR_Word MR_CALL 
transform_hlds__term_constr_build__term_build_options_init_3_f_0(
  MR_Word Norm_5,
  MR_Word Failure_6,
  MR_Word ArgSizeOnly_7)
{
  MR_Word HeadVar__4_4;

  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Norm_5));
    MR_hl_field(0, HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (Failure_6) << 1)) | (MR_Unsigned) (ArgSizeOnly_7)));
  }
  return HeadVar__4_4;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_build____Unify____disj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_build____Compare____disj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_build____Unify____term_build_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_build____Compare____term_build_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_build____Unify____term_scc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_build____Compare____term_scc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_constr_build__init(void)
{
}

void mercury__transform_hlds__term_constr_build__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0);
  MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0);
  MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0);
  MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0);
}

void mercury__transform_hlds__term_constr_build__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_build__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_build.
