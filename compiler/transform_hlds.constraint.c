/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version rotd-2022-11-29
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


// :- module transform_hlds.constraint.
// :- implementation.

/*
INIT mercury__transform_hlds__constraint__init
ENDINIT
*/

#include "transform_hlds.constraint.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
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



struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s {
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
  MR_bool transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12;
  jmp_buf transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20;
  MR_Box transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20;
};

struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s {
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
  MR_bool transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18;
  jmp_buf transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31;
  MR_Box transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4];

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0;

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1];

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1];

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1];

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constrained_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constrained_goal_0_0[2];

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0;

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constrained_goal_0_0[1];

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constrained_goal_0[1];

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constrained_goal_0[1];

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constrained_goal_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4];

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0;

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1];

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1];

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1];

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1];

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[4];

static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[4];

static const MR_DuArgLocn transform_hlds__constraint__transform_hlds__constraint__field_locns_constraint_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__353__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word InstMapDelta_21,
  MR_Word LambdaHeadVar__1_39);

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__339__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word InstMapDelta_21,
  MR_Word LambdaHeadVar__1_37);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_case_2_p_0(
  MR_Word Case0_3,
  MR_Word * Case_4);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(
  MR_Word Constraint0_3,
  MR_Word * Constraint_4);

static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
  MR_Word Goal_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint__constraint_goals_to_cord_2_p_0(
  MR_Word Constraint_3,
  MR_Word * GoalCord_4);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsCord_0_2,
  MR_Word * STATE_VARIABLE_GoalsCord_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
  MR_Word Var_1,
  MR_Word Constraints_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
  MR_Word Constraints_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * FinalGoals_8,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSimpleConstraints_0_2,
  MR_Word * STATE_VARIABLE_RevSimpleConstraints_3,
  MR_Word STATE_VARIABLE_RevComplexConstraints_0_4,
  MR_Word * STATE_VARIABLE_RevComplexConstraints_5);

static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
  MR_Word Goal_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word Constraints0_3,
  MR_Word ConstrainedGoals0_4,
  MR_Word * ConstrainedGoals_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
  MR_Word NonLocals_6,
  MR_Word GoalOutputVars_7,
  MR_Word Constraints_8,
  MR_Word * DependentConstraints_9,
  MR_Word * IndependentConstraints_10);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevDependent_0_4,
  MR_Word * STATE_VARIABLE_RevDependent_5,
  MR_Word STATE_VARIABLE_RevIndependent_0_6,
  MR_Word * STATE_VARIABLE_RevIndependent_7);

static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
  MR_Word ConstructVar_1,
  MR_Word Construct0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
  MR_Word Goal_4,
  MR_Word Constraints0_5);

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevAnnotatedGoals_0_5,
  MR_Word * STATE_VARIABLE_RevAnnotatedGoals_6);

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
  MR_Word Constraints0_3,
  MR_Word * Goals_4);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[5][5];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[12][3];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8];




static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__constraint__flatten_constraints_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[1])),
    ((MR_Box) (transform_hlds__constraint__attach_constraints_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__constraint__propagate_conj_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__constraint__propagate_conj_constraints_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[4])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conj",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0 = {
  (MR_String) "annotated_conjunct",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conjunct",
  { transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0 },
  { transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constrained_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____constrained_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constrained_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constrained_conj",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constrained_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constrained_goal_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0)
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0 = {
  (MR_String) "constrained_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__constraint__transform_hlds__constraint__field_types_constrained_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constrained_goal_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constrained_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constrained_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constrained_goal_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0
};

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constrained_goal_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constrained_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constrained_goal_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constrained_goal",
  { transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constrained_goal_0 },
  { transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constrained_goal_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constrained_goal_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0 = {
  (MR_String) "constraint",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint",
  { transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0 },
  { transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0,

};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[4] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_var_table",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

static const MR_DuArgLocn transform_hlds__constraint__transform_hlds__constraint__field_locns_constraint_info_0_0[4] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0 = {
  (MR_String) "constraint_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0,
  transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0,
  transform_hlds__constraint__transform_hlds__constraint__field_locns_constraint_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_info_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint_info",
  { transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0 },
  { transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0,

};

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__353__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word InstMapDelta_21,
  MR_Word LambdaHeadVar__1_39)
{
  MR_bool succeeded;
  MR_Word InstBefore_45;
  MR_Word InstAfter_46;
  MR_Word Type_47;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_3, LambdaHeadVar__1_39, &InstBefore_45);
  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_21, LambdaHeadVar__1_39, &InstAfter_46);
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, LambdaHeadVar__1_39, &Type_47);
    succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_1, Type_47, InstAfter_46, InstBefore_45);
    succeeded = !(succeeded);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__339__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word InstMapDelta_21,
  MR_Word LambdaHeadVar__1_37)
{
  MR_bool succeeded;
  MR_Word InstBefore_27;
  MR_Word InstAfter_28;
  MR_Word Type_29;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_3, LambdaHeadVar__1_37, &InstBefore_27);
  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_21, LambdaHeadVar__1_37, &InstAfter_28);
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, LambdaHeadVar__1_37, &Type_29);
    succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_1, Type_29, InstAfter_28, InstBefore_27);
    succeeded = !(succeeded);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__instmap____Compare____instmap_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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

MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0(
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

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0(
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

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__constraint_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_case_2_p_0(
  MR_Word Case0_3,
  MR_Word * Case_4)
{
  MR_Word MainConsId_5 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 0))));
  MR_Word OtherConsIds_6 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 1))));
  MR_Word SubGoal0_7 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 2))));
  MR_Word SubGoal_8;

  transform_hlds__constraint__strip_constraint_markers_2_p_0(SubGoal0_7, &SubGoal_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (SubGoal_8));
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 1))));
  MR_Word GoalInfo_7;

  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, GoalInfo0_6, &GoalInfo_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_7));
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(
  MR_Word Constraint0_3,
  MR_Word * Constraint_4)
{
  MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(0, Constraint0_3, (MR_Integer) 0))));
  MR_Word ChangedVars_6 = ((MR_Word) ((MR_hl_field(0, Constraint0_3, (MR_Integer) 1))));
  MR_Word IncompatibleInstVars_7 = ((MR_Word) ((MR_hl_field(0, Constraint0_3, (MR_Integer) 2))));
  MR_Word ConstructGoals0_8 = ((MR_Word) ((MR_hl_field(0, Constraint0_3, (MR_Integer) 3))));
  MR_Word Goal_9;
  MR_Word ConstructGoals_10;
  MR_Word GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalInfo_17;

  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, GoalInfo0_16, &GoalInfo_17);
  {
    Goal_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_9, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, Goal_9, 1) = ((MR_Box) (GoalInfo_17));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[11]), ConstructGoals0_8, &ConstructGoals_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Goal_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (ChangedVars_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (IncompatibleInstVars_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (ConstructGoals_10));
  }
}

static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
  MR_Word Goal_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Goal_3));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
transform_hlds__constraint__constraint_goals_to_cord_2_p_0(
  MR_Word Constraint_3,
  MR_Word * GoalCord_4)
{
  MR_Word ConstraintGoal_5 = ((MR_Word) ((MR_hl_field(0, Constraint_3, (MR_Integer) 0))));
  MR_Word ConstructGoals_8 = ((MR_Word) ((MR_hl_field(0, Constraint_3, (MR_Integer) 3))));
  MR_Word Var_9;

  Var_9 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstructGoals_8);
  *GoalCord_4 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_9, ((MR_Box) (ConstraintGoal_5)));
}

void MR_CALL 
transform_hlds__constraint__constraint_info_deconstruct_4_p_0(
  MR_Word ConstraintInfo_5,
  MR_Word * ModuleInfo_6,
  MR_Word * VarTable_7,
  MR_Word * Changed_8)
{
  *ModuleInfo_6 = ((MR_Word) ((MR_hl_field(0, ConstraintInfo_5, (MR_Integer) 0))));
  *VarTable_7 = ((MR_Word) ((MR_hl_field(0, ConstraintInfo_5, (MR_Integer) 1))));
  *Changed_8 = ((MR_Unsigned) ((MR_hl_field(0, ConstraintInfo_5, (MR_Integer) 3))) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__constraint__constraint_info_init_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word InstMap_7,
  MR_Word * ConstraintInfo_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *ConstraintInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (InstMap_7));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
}

void MR_CALL 
transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word Goal1_8;

  transform_hlds__constraint__strip_constraint_markers_2_p_0(Goal0_5, &Goal1_8);
  transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), Goal1_8, Goal_6, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Case_4;

  transform_hlds__constraint__strip_constraint_markers_case_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Case_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_Case_4));
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_4;

  transform_hlds__constraint__strip_constraint_markers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  transform_hlds__constraint__strip_constraint_markers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 1))));
  MR_Word GoalExpr_7;
  MR_Word GoalInfo_8;

  switch (MR_tag((MR_Word) GoalExpr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_18 = (MR_Word) ((MR_Word) (GoalExpr0_5));
        MR_Word SubGoal_19;

        transform_hlds__constraint__strip_constraint_markers_2_p_0(SubGoal0_18, &SubGoal_19);
        GoalExpr_7 = (MR_Word) ((MR_Word) (SubGoal_19));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_7 = GoalExpr0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 7:
          GoalExpr_7 = GoalExpr0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word SubGoals_13;

            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[8]), SubGoals0_12, &SubGoals_13);
            {
              GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) (ConjType_11));
              MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (SubGoals_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word SubGoals_32;

            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[9]), SubGoals0_31, &SubGoals_32);
            {
              GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_7, 1) = ((MR_Box) (SubGoals_32));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word CanFail_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 3))));
            MR_Word Cases_17;

            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[10]), Cases0_16, &Cases_17);
            {
              GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_7, 1) = ((MR_Box) (Var_14));
              MR_hl_field(3, GoalExpr_7, 2) = (MR_Box) ((MR_Unsigned) (CanFail_15));
              MR_hl_field(3, GoalExpr_7, 3) = ((MR_Box) (Cases_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word SubGoal0_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word SubGoal_34;

            transform_hlds__constraint__strip_constraint_markers_2_p_0(SubGoal0_33, &SubGoal_34);
            {
              GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_7, 1) = ((MR_Box) (Reason_20));
              MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (SubGoal_34));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word Cond0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word Then0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 3))));
            MR_Word Else0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 4))));
            MR_Word Cond_25;
            MR_Word Then_26;
            MR_Word Else_27;

            transform_hlds__constraint__strip_constraint_markers_2_p_0(Cond0_22, &Cond_25);
            transform_hlds__constraint__strip_constraint_markers_2_p_0(Then0_23, &Then_26);
            transform_hlds__constraint__strip_constraint_markers_2_p_0(Else0_24, &Else_27);
            {
              GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_7, 1) = ((MR_Box) (Vars_21));
              MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (Cond_25));
              MR_hl_field(3, GoalExpr_7, 3) = ((MR_Box) (Then_26));
              MR_hl_field(3, GoalExpr_7, 4) = ((MR_Box) (Else_27));
            }
          }
          break;
      }
      break;
  }
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_6, (MR_Integer) 0);
  if (succeeded)
    hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, GoalInfo0_6, &GoalInfo_8);
  else
    GoalInfo_8 = GoalInfo0_6;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalCord_4;

  transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalCord_4));
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalsCord_0_2,
  MR_Word * STATE_VARIABLE_GoalsCord_3,
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
      *STATE_VARIABLE_GoalsCord_3 = STATE_VARIABLE_GoalsCord_0_2;
    }
    else
    {
      MR_Word ConstrainedGoal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConstrainedGoals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(0, ConstrainedGoal0_12, (MR_Integer) 0))));
      MR_Word Constraints0_17 = ((MR_Word) ((MR_hl_field(0, ConstrainedGoal0_12, (MR_Integer) 1))));
      MR_Word SimpleConstraints_18;
      MR_Word ComplexConstraints0_19;
      MR_Word GoalAndSimpleConstraints_20;
      MR_Word ComplexConstraints_21;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_GoalsCord_28_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word RevSimpleConstraints_33;
      MR_Word RevComplexConstraints_34;
      MR_Word GoalExpr0_38;
      MR_Word HasSubGoals_40;
      MR_Word STATE_VARIABLE_Info_16_42;
      MR_Word STATE_VARIABLE_Info_17_43;
      MR_Word GoalInfo_59;
      MR_Word InstMap0_60;
      MR_Word InstMapDelta_61;
      MR_Word InstMap_62;
      MR_Word GoalCords_70;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      transform_hlds__constraint__filter_complex_constraints_2_5_p_0(Constraints0_17, (MR_Word) ((MR_Unsigned) 0U), &RevSimpleConstraints_33, (MR_Word) ((MR_Unsigned) 0U), &RevComplexConstraints_34);
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), RevSimpleConstraints_33, &SimpleConstraints_18);
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), RevComplexConstraints_34, &ComplexConstraints0_19);
      GoalExpr0_38 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 0))));
      HasSubGoals_40 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_38);
      switch (HasSubGoals_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_16_42 = STATE_VARIABLE_Info_0_4;
          break;
        case (MR_Integer) 0:
          if ((SimpleConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_16_42 = STATE_VARIABLE_Info_0_4;
          else
          {
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));

            {
              STATE_VARIABLE_Info_16_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_16_42, 0) = ((MR_Box) (Var_54));
              MR_hl_field(0, STATE_VARIABLE_Info_16_42, 1) = ((MR_Box) (Var_55));
              MR_hl_field(0, STATE_VARIABLE_Info_16_42, 2) = ((MR_Box) (Var_56));
              MR_hl_field(0, STATE_VARIABLE_Info_16_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
          }
          break;
      }
      InstMap0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_42, (MR_Integer) 2))));
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(SimpleConstraints_18, Goal_16, &GoalAndSimpleConstraints_20, STATE_VARIABLE_Info_16_42, &STATE_VARIABLE_Info_17_43);
      Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_43, (MR_Integer) 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_43, (MR_Integer) 1))));
      Var_50 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_17_43, (MR_Integer) 3))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (Var_48));
        MR_hl_field(0, STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (InstMap0_60));
        MR_hl_field(0, STATE_VARIABLE_Info_26_26, 3) = (MR_Box) ((MR_Unsigned) (Var_50));
      }
      GoalInfo_59 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 1))));
      InstMapDelta_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_59);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_61, InstMap0_60, &InstMap_62);
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
      Var_69 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (InstMap_62));
        MR_hl_field(0, STATE_VARIABLE_Info_27_27, 3) = (MR_Box) ((MR_Unsigned) (Var_69));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint_scalar_common_1[0]), (MR_Word) (&transform_hlds__constraint_scalar_common_3[7]), ComplexConstraints0_19, &GoalCords_70);
      ComplexConstraints_21 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCords_70);
      Var_30 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalAndSimpleConstraints_20);
      Var_31 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ComplexConstraints_21);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_30, Var_31);
      STATE_VARIABLE_GoalsCord_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalsCord_0_2, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConstrainedGoals0_13;
      next_value_of_STATE_VARIABLE_GoalsCord_0_2 = STATE_VARIABLE_GoalsCord_28_28;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalsCord_0_2 = next_value_of_STATE_VARIABLE_GoalsCord_0_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalCord_4;

  transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalCord_4));
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_20_20;

  if ((Constraints_6 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Info_20_20 = STATE_VARIABLE_Info_0_18;
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));

    {
      STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (Var_41));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
  if ((Goals0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word GoalCords_44;

    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint_scalar_common_1[0]), (MR_Word) (&transform_hlds__constraint_scalar_common_3[6]), Constraints_6, &GoalCords_44);
    *Goals_8 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCords_44);
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_20_20;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, Goals0_7, (MR_Integer) 0))));
    MR_Word GoalsTail0_11 = ((MR_Word) ((MR_hl_field(1, Goals0_7, (MR_Integer) 1))));

    succeeded = (GoalsTail0_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word GoalExpr0_49 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 0))));
      MR_Word HasSubGoals_51;
      MR_Word InstMap0_52;
      MR_Word STATE_VARIABLE_Info_16_53;
      MR_Word STATE_VARIABLE_Info_17_54;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_61;

      HasSubGoals_51 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_49);
      switch (HasSubGoals_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_16_53 = STATE_VARIABLE_Info_20_20;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_16_53 = STATE_VARIABLE_Info_20_20;
          break;
      }
      InstMap0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_53, (MR_Integer) 2))));
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0((MR_Word) ((MR_Unsigned) 0U), Goal0_10, Goals_8, STATE_VARIABLE_Info_16_53, &STATE_VARIABLE_Info_17_54);
      Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_54, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_54, (MR_Integer) 1))));
      Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_17_54, (MR_Integer) 3))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_59));
        MR_hl_field(0, base, 2) = ((MR_Box) (InstMap0_52));
        MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_61));
      }
    }
    else
    {
      MR_Word InstMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 2))));
      MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 0))));
      MR_Word VarTable_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 1))));
      MR_Word RevAnnotatedGoals1_15;
      MR_Word AnnotatedGoals2_16;
      MR_Word GoalsCord_17;
      MR_Word STATE_VARIABLE_Info_25_25;
      MR_Word Var_26;

      transform_hlds__constraint__annotate_conj_output_vars_6_p_0(ModuleInfo_13, VarTable_14, InstMap0_12, Goals0_7, (MR_Word) ((MR_Unsigned) 0U), &RevAnnotatedGoals1_15);
      transform_hlds__constraint__annotate_conj_constraints_7_p_0(ModuleInfo_13, RevAnnotatedGoals1_15, Constraints_6, (MR_Word) ((MR_Unsigned) 0U), &AnnotatedGoals2_16, STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_25_25);
      Var_26 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      transform_hlds__constraint__propagate_conj_constraints_5_p_0(AnnotatedGoals2_16, Var_26, &GoalsCord_17, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_19);
      *Goals_8 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsCord_17);
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
  MR_Word Var_1,
  MR_Word Constraints_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
    MR_Word Goal_23;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word InstMap0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    MR_Word ModuleInfo0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    MR_Word VarTable_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    MR_Word Type_39;
    MR_Word InstMap_40;
    MR_Word ModuleInfo_41;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_38, Var_1, &Type_39);
    hlds__instmap__bind_var_to_functors_8_p_0(Var_1, Type_39, MainConsId_19, OtherConsIds_20, InstMap0_36, &InstMap_40, ModuleInfo0_37, &ModuleInfo_41);
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_55 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (ModuleInfo_41));
      MR_hl_field(0, STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (Var_53));
      MR_hl_field(0, STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (InstMap_40));
      MR_hl_field(0, STATE_VARIABLE_Info_26_26, 3) = (MR_Box) ((MR_Unsigned) (Var_55));
    }
    transform_hlds__constraint__propagate_goal_5_p_0(Constraints_2, Goal0_21, &Goal_23, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_27_27);
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 1))));
    Var_35 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 3))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (InstMap0_36));
      MR_hl_field(0, STATE_VARIABLE_Info_28_28, 3) = (MR_Box) ((MR_Unsigned) (Var_35));
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_23));
    }
    transform_hlds__constraint__propagate_cases_6_p_0(Var_1, Constraints_2, Cases0_15, &Cases_17, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
  MR_Word Constraints_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word InstMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_20_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;

    transform_hlds__constraint__propagate_goal_5_p_0(Constraints_1, Goal0_11, &Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_19_19, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_19_19, (MR_Integer) 1))));
    Var_27 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_19_19, (MR_Integer) 3))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (InstMap0_16));
      MR_hl_field(0, STATE_VARIABLE_Info_20_20, 3) = (MR_Box) ((MR_Unsigned) (Var_27));
    }
    transform_hlds__constraint__propagate_in_independent_goals_5_p_0(Constraints_1, Goals0_12, &Goals_14, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * FinalGoals_8,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83)
{
  MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr_10));
        MR_Word NegGoal_57;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word ConstraintGoals_141;

        transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), NegGoal0_56, &NegGoal_57, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
        transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_141);
        Var_131 = (MR_Word) ((MR_Word) (NegGoal_57));
        {
          Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_130, 0) = ((MR_Box) (Var_131));
          MR_hl_field(0, Var_130, 1) = ((MR_Box) (GoalInfo_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *FinalGoals_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_130));
          MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_141));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word ConstraintGoals_142;

        transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_142);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *FinalGoals_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_142));
        }
        *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word ConstraintGoals_142;

            transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_142);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FinalGoals_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_7));
              MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_142));
            }
            *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

            switch (ConjType_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word MoreGoals_15;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Goals_135;

                  transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &MoreGoals_15);
                  transform_hlds__constraint__propagate_in_independent_goals_5_p_0((MR_Word) ((MR_Unsigned) 0U), Goals0_13, &Goals_135, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  {
                    Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_91, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                    MR_hl_field(3, Var_91, 2) = ((MR_Box) (Goals_135));
                  }
                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_90, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(0, Var_90, 1) = ((MR_Box) (GoalInfo_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *FinalGoals_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
                    MR_hl_field(1, base, 1) = ((MR_Box) (MoreGoals_15));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Goals_14;
                  MR_Word Var_85;
                  MR_Word Var_86;

                  transform_hlds__constraint__propagate_conj_5_p_0(Constraints_6, Goals0_13, &Goals_14, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  {
                    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_86, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                    MR_hl_field(3, Var_86, 2) = ((MR_Box) (Goals_14));
                  }
                  {
                    Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
                    MR_hl_field(0, Var_85, 1) = ((MR_Box) (GoalInfo_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *FinalGoals_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_85));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Goals0_136 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word Goals_137;

            transform_hlds__constraint__propagate_in_independent_goals_5_p_0(Constraints_6, Goals0_136, &Goals_137, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            {
              Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_94, 1) = ((MR_Box) (Goals_137));
            }
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FinalGoals_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_93));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word CanFail_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
            MR_Word Cases_19;
            MR_Word Var_97;
            MR_Word Var_98;

            transform_hlds__constraint__propagate_cases_6_p_0(Var_16, Constraints_6, Cases0_18, &Cases_19, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            {
              Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_98, 1) = ((MR_Box) (Var_16));
              MR_hl_field(3, Var_98, 2) = (MR_Box) ((MR_Unsigned) (CanFail_17));
              MR_hl_field(3, Var_98, 3) = ((MR_Box) (Cases_19));
            }
            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
              MR_hl_field(0, Var_97, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FinalGoals_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_97));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word SubGoal0_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Reason_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word SubGoal_138;

                  transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, SubGoal0_29, &SubGoal_138, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  {
                    Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_117, 1) = ((MR_Box) (Reason_28));
                    MR_hl_field(3, Var_117, 2) = ((MR_Box) (SubGoal_138));
                  }
                  {
                    Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_116, 0) = ((MR_Box) (Var_117));
                    MR_hl_field(0, Var_116, 1) = ((MR_Box) (GoalInfo_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *FinalGoals_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubGoal_32;
                  MR_Word Var_110;
                  MR_Word Var_111;

                  transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, SubGoal0_29, &SubGoal_32, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  {
                    Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_111, 1) = ((MR_Box) (Reason_28));
                    MR_hl_field(3, Var_111, 2) = ((MR_Box) (SubGoal_32));
                  }
                  {
                    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_110, 0) = ((MR_Box) (Var_111));
                    MR_hl_field(0, Var_110, 1) = ((MR_Box) (GoalInfo_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *FinalGoals_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_110));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ConstraintGoals_49;
                  MR_Word Var_121;
                  MR_Word Var_122;
                  MR_Word SubGoal_139;

                  transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), SubGoal0_29, &SubGoal_139, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_49);
                  {
                    Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_122, 1) = ((MR_Box) (Reason_28));
                    MR_hl_field(3, Var_122, 2) = ((MR_Box) (SubGoal_139));
                  }
                  {
                    Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_121, 0) = ((MR_Box) (Var_122));
                    MR_hl_field(0, Var_121, 1) = ((MR_Box) (GoalInfo_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *FinalGoals_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_121));
                    MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_49));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_28, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word ConstraintGoals_49;
                      MR_Word Var_121;
                      MR_Word Var_122;
                      MR_Word SubGoal_139;

                      transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), SubGoal0_29, &SubGoal_139, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_49);
                      {
                        Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, Var_122, 1) = ((MR_Box) (Reason_28));
                        MR_hl_field(3, Var_122, 2) = ((MR_Box) (SubGoal_139));
                      }
                      {
                        Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_121, 0) = ((MR_Box) (Var_122));
                        MR_hl_field(0, Var_121, 1) = ((MR_Box) (GoalInfo_11));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *FinalGoals_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_121));
                        MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_49));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                      return;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_168 = ((MR_Unsigned) ((MR_hl_field(3, Reason_28, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (Var_168) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word ConstraintGoals_140;

                            transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &ConstraintGoals_140);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *FinalGoals_8 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_7));
                              MR_hl_field(1, base, 1) = ((MR_Box) (ConstraintGoals_140));
                            }
                            *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word Var_150;
                            MR_Word Var_151;
                            MR_Word SubGoal_153;

                            transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, SubGoal0_29, &SubGoal_153, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                            {
                              Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, Var_151, 1) = ((MR_Box) (Reason_28));
                              MR_hl_field(3, Var_151, 2) = ((MR_Box) (SubGoal_153));
                            }
                            {
                              Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_150, 0) = ((MR_Box) (Var_151));
                              MR_hl_field(0, Var_150, 1) = ((MR_Box) (GoalInfo_11));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *FinalGoals_8 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (Var_150));
                              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                            return;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word Var_154;
                            MR_Word Var_155;
                            MR_Word SubGoal_157;

                            transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, SubGoal0_29, &SubGoal_157, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                            {
                              Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, Var_155, 1) = ((MR_Box) (Reason_28));
                              MR_hl_field(3, Var_155, 2) = ((MR_Box) (SubGoal_157));
                            }
                            {
                              Var_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_154, 0) = ((MR_Box) (Var_155));
                              MR_hl_field(0, Var_154, 1) = ((MR_Box) (GoalInfo_11));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *FinalGoals_8 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (Var_154));
                              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word Cond0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
            MR_Word Then0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
            MR_Word Else0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
            MR_Word InstMap0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_82, (MR_Integer) 2))));
            MR_Word Cond_25;
            MR_Word Then_26;
            MR_Word Else_27;
            MR_Word STATE_VARIABLE_Info_101_101;
            MR_Word STATE_VARIABLE_Info_102_102;
            MR_Word STATE_VARIABLE_Info_103_103;
            MR_Word STATE_VARIABLE_Info_104_104;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_149;

            transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), Cond0_21, &Cond_25, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_101_101);
            transform_hlds__constraint__constraint_info_update_goal_3_p_0(Cond_25, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
            transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, Then0_22, &Then_26, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_103_103);
            Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_103_103, (MR_Integer) 0))));
            Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_103_103, (MR_Integer) 1))));
            Var_149 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_103_103, (MR_Integer) 3))) & (MR_Integer) 1);
            {
              STATE_VARIABLE_Info_104_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_104_104, 0) = ((MR_Box) (Var_146));
              MR_hl_field(0, STATE_VARIABLE_Info_104_104, 1) = ((MR_Box) (Var_147));
              MR_hl_field(0, STATE_VARIABLE_Info_104_104, 2) = ((MR_Box) (InstMap0_24));
              MR_hl_field(0, STATE_VARIABLE_Info_104_104, 3) = (MR_Box) ((MR_Unsigned) (Var_149));
            }
            transform_hlds__constraint__propagate_goal_5_p_0(Constraints_6, Else0_23, &Else_27, STATE_VARIABLE_Info_104_104, STATE_VARIABLE_Info_83);
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (Vars_20));
              MR_hl_field(3, Var_107, 2) = ((MR_Box) (Cond_25));
              MR_hl_field(3, Var_107, 3) = ((MR_Box) (Then_26));
              MR_hl_field(3, Var_107, 4) = ((MR_Box) (Else_27));
            }
            {
              Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(0, Var_106, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FinalGoals_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_106));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word HasSubGoals_12;
  MR_Word InstMap0_13;
  MR_Word STATE_VARIABLE_Info_16_16;
  MR_Word STATE_VARIABLE_Info_17_17;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_10);
  switch (HasSubGoals_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_Info_16_16 = STATE_VARIABLE_Info_0_14;
      break;
    case (MR_Integer) 0:
      if ((Constraints_6 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_16_16 = STATE_VARIABLE_Info_0_14;
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 1))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));

        {
          STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (Var_28));
          MR_hl_field(0, STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (Var_29));
          MR_hl_field(0, STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (Var_30));
          MR_hl_field(0, STATE_VARIABLE_Info_16_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      break;
  }
  InstMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 2))));
  transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(Constraints_6, Goal0_7, Goals_8, STATE_VARIABLE_Info_16_16, &STATE_VARIABLE_Info_17_17);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_17_17, (MR_Integer) 1))));
  Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (InstMap0_13));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_24));
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
  MR_Word Constraints_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word Features0_12;
  MR_Word Context_13;
  MR_Word Goals0_14;
  MR_Word Goals_15;
  MR_Word NonLocals_16;
  MR_Word Delta_17;
  MR_Word ConjDetism_18;
  MR_Word Purity_19;
  MR_Word GoalInfo1_20;
  MR_Word GoalInfo_21;
  MR_Word STATE_VARIABLE_Info_20_32;

  Features0_12 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_11);
  Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_7, &Goals0_14);
  transform_hlds__constraint__constraint_info_update_changed_3_p_0(Constraints_6, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_20_32);
  if ((Goals0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    transform_hlds__constraint__flatten_constraints_2_p_0(Constraints_6, &Goals_15);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_20_32;
  }
  else
  {
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(1, Goals0_14, (MR_Integer) 0))));
    MR_Word GoalsTail0_25 = ((MR_Word) ((MR_hl_field(1, Goals0_14, (MR_Integer) 1))));

    succeeded = (GoalsTail0_25 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      transform_hlds__constraint__propagate_conj_sub_goal_5_p_0((MR_Word) ((MR_Unsigned) 0U), Goal0_24, &Goals_15, STATE_VARIABLE_Info_20_32, STATE_VARIABLE_Info_23);
    else
    {
      MR_Word InstMap0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_32, (MR_Integer) 2))));
      MR_Word ModuleInfo_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_32, (MR_Integer) 0))));
      MR_Word VarTable_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_32, (MR_Integer) 1))));
      MR_Word RevAnnotatedGoals1_29;
      MR_Word AnnotatedGoals2_30;
      MR_Word GoalsCord_31;
      MR_Word STATE_VARIABLE_Info_25_36;
      MR_Word Var_37;

      transform_hlds__constraint__annotate_conj_output_vars_6_p_0(ModuleInfo_27, VarTable_28, InstMap0_26, Goals0_14, (MR_Word) ((MR_Unsigned) 0U), &RevAnnotatedGoals1_29);
      transform_hlds__constraint__annotate_conj_constraints_7_p_0(ModuleInfo_27, RevAnnotatedGoals1_29, Constraints_6, (MR_Word) ((MR_Unsigned) 0U), &AnnotatedGoals2_30, STATE_VARIABLE_Info_20_32, &STATE_VARIABLE_Info_25_36);
      Var_37 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      transform_hlds__constraint__propagate_conj_constraints_5_p_0(AnnotatedGoals2_30, Var_37, &GoalsCord_31, STATE_VARIABLE_Info_25_36, STATE_VARIABLE_Info_23);
      Goals_15 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsCord_31);
    }
  }
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(Goals_15, &NonLocals_16);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Goals_15, &Delta_17);
  hlds__hlds_goal__goal_list_determinism_2_p_0(Goals_15, &ConjDetism_18);
  hlds__hlds_goal__goal_list_purity_2_p_0(Goals_15, &Purity_19);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_16, Delta_17, ConjDetism_18, Purity_19, Context_13, &GoalInfo1_20);
  hlds__hlds_goal__goal_info_set_features_3_p_0(Features0_12, GoalInfo1_20, &GoalInfo_21);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_15, GoalInfo_21, Goal_8);
}

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word InstMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
  MR_Word InstMapDelta_8;
  MR_Word InstMap_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;

  InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_8, InstMap0_7, &InstMap_9);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
  Var_18 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (InstMap_9));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_18));
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) ((env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20));
  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word EarlierChangedVars_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1))));
    MR_Word ConstraintGoal_32 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0))));
    MR_Word ConstraintGoalInfo_37 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_32, (MR_Integer) 1))));
    MR_Word ConstraintNonLocals_38;
    MR_Word EarlierConstraintIntersection_39;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_32, (MR_Integer) 0))));

    ConstraintNonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConstraintGoalInfo_37);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_29, ConstraintNonLocals_38, &EarlierConstraintIntersection_39);
    (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierConstraintIntersection_39);
    (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), &(env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSimpleConstraints_0_2,
  MR_Word * STATE_VARIABLE_RevSimpleConstraints_3,
  MR_Word STATE_VARIABLE_RevComplexConstraints_0_4,
  MR_Word * STATE_VARIABLE_RevComplexConstraints_5)
{
  struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s env;

  (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = STATE_VARIABLE_RevComplexConstraints_0_4;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevComplexConstraints_5 = (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
      *STATE_VARIABLE_RevSimpleConstraints_3 = STATE_VARIABLE_RevSimpleConstraints_0_2;
    }
    else
    {
      MR_Word Constraints_13;
      MR_Word ConstraintGoal_16;
      MR_Word STATE_VARIABLE_RevSimpleConstraints_25_25;
      MR_Word STATE_VARIABLE_RevComplexConstraints_26_26;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSimpleConstraints_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevComplexConstraints_0_4;

      (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Constraints_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ConstraintGoal_16 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3))));
      (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(ConstraintGoal_16);
      if ((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
      {
        transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&env);
        (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
      }
      if ((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
      {
        {
          STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
          MR_hl_field(1, STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevSimpleConstraints_0_2));
        }
        STATE_VARIABLE_RevComplexConstraints_26_26 = (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
      }
      else
      {
        {
          STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
          MR_hl_field(1, STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
        }
        STATE_VARIABLE_RevSimpleConstraints_25_25 = STATE_VARIABLE_RevSimpleConstraints_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Constraints_13;
      next_value_of_STATE_VARIABLE_RevSimpleConstraints_0_2 = STATE_VARIABLE_RevSimpleConstraints_25_25;
      next_value_of_STATE_VARIABLE_RevComplexConstraints_0_4 = STATE_VARIABLE_RevComplexConstraints_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevSimpleConstraints_0_2 = next_value_of_STATE_VARIABLE_RevSimpleConstraints_0_2;
      (env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = next_value_of_STATE_VARIABLE_RevComplexConstraints_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
  MR_Word Goal_2)
{
  MR_bool succeeded;
  MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) GoalExpr_3)) == (MR_Integer) 0))
  {
    MR_Word SubGoal_5 = (MR_Word) ((MR_Word) (GoalExpr_3));

    succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(SubGoal_5);
  }
  else
  if (((((MR_tag((MR_Word) GoalExpr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
  {
    MR_Word Reason_6 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
    MR_Word SubGoal_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
    MR_Word FGT_8;

    succeeded = ((((MR_tag((MR_Word) Reason_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      FGT_8 = ((MR_Unsigned) ((MR_hl_field(3, Reason_6, (MR_Integer) 2))) & (MR_Integer) 3);
      switch (FGT_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
    }
    if (succeeded)
      succeeded = MR_TRUE;
    else
      succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(SubGoal_10);
  }
  else
    succeeded = MR_FALSE;
  if (!(succeeded))
  {
    MR_Word Var_9;

    Var_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_3);
    succeeded = (Var_9 == (MR_Integer) 1);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalCord_4;

  transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalCord_4));
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word Constraints0_3,
  MR_Word ConstrainedGoals0_4,
  MR_Word * ConstrainedGoals_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Constraints1_13;
      MR_Word NewConstrainedGoals_14;
      MR_Word GoalCords_118;

      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint_scalar_common_1[0]), (MR_Word) (&transform_hlds__constraint_scalar_common_3[2]), Constraints0_3, &GoalCords_118);
      Constraints1_13 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCords_118);
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[3]), Constraints1_13, &NewConstrainedGoals_14);
      *ConstrainedGoals_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), NewConstrainedGoals_14, ConstrainedGoals0_4);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word Conjunct_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RevConjuncts0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(0, Conjunct_19, (MR_Integer) 0))));
      MR_Word ChangedVars_26 = ((MR_Word) ((MR_hl_field(0, Conjunct_19, (MR_Integer) 1))));
      MR_Word OutputVars_27 = ((MR_Word) ((MR_hl_field(0, Conjunct_19, (MR_Integer) 2))));
      MR_Word IncompatibleInstVars_28 = ((MR_Word) ((MR_hl_field(0, Conjunct_19, (MR_Integer) 3))));
      MR_Word GoalInfo_30 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 1))));
      MR_Word NonLocals_31;
      MR_Word CI_ModuleInfo0_32;
      MR_Word GoalCanLoopOrThrow_33;
      MR_Word CI_ModuleInfo_34;
      MR_Word ConstrainedGoals1_36;
      MR_Word Constraints1_38;
      MR_Word STATE_VARIABLE_Info_61_61;
      MR_Word STATE_VARIABLE_Info_70_70;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word TypeCtorInfo_106_106;
      MR_Word Detism_35;
      MR_Word Var_62;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_Constraints0_3;
      MR_Word next_value_of_ConstrainedGoals0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_30);
      CI_ModuleInfo0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
      hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(Goal_25, &GoalCanLoopOrThrow_33, CI_ModuleInfo0_32, &CI_ModuleInfo_34);
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
      Var_97 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_61_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_61_61, 0) = ((MR_Box) (CI_ModuleInfo_34));
        MR_hl_field(0, STATE_VARIABLE_Info_61_61, 1) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_Info_61_61, 2) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_Info_61_61, 3) = (MR_Box) ((MR_Unsigned) (Var_97));
      }
      Detism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_30);
      switch (Detism_35) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        TypeCtorInfo_106_106 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_106_106, OutputVars_27);
        if (succeeded)
        {
          Var_62 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_30);
          succeeded = (Var_62 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (GoalCanLoopOrThrow_33 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Constraint_37;

        ConstrainedGoals1_36 = ConstrainedGoals0_4;
        {
          Constraint_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Constraint_37, 0) = ((MR_Box) (Goal_25));
          MR_hl_field(0, Constraint_37, 1) = ((MR_Box) (ChangedVars_26));
          MR_hl_field(0, Constraint_37, 2) = ((MR_Box) (IncompatibleInstVars_28));
          MR_hl_field(0, Constraint_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Constraints1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Constraints1_38, 0) = ((MR_Box) (Constraint_37));
          MR_hl_field(1, Constraints1_38, 1) = ((MR_Box) (Constraints0_3));
        }
        STATE_VARIABLE_Info_70_70 = STATE_VARIABLE_Info_61_61;
      }
      else
      {
        MR_Word ConstructVar_45;
        MR_Word Var_66;
        MR_Word Unify_42;
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 0))));

        succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1);
        if (succeeded)
        {
          Unify_42 = ((MR_Word) ((MR_hl_field(1, Var_65, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) Unify_42)) == (MR_Integer) 0);
          if (succeeded)
          {
            ConstructVar_45 = ((MR_Word) ((MR_hl_field(0, Unify_42, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(0, Unify_42, (MR_Integer) 2))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_67;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (Goal_25));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (Var_66));
          }
          {
            ConstrainedGoals1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConstrainedGoals1_36, 0) = ((MR_Box) (Var_67));
            MR_hl_field(1, ConstrainedGoals1_36, 1) = ((MR_Box) (ConstrainedGoals0_4));
          }
          transform_hlds__constraint__add_constant_construction_6_p_0(ConstructVar_45, Goal_25, Constraints0_3, &Constraints1_38, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_69_69);
          Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 0))));
          Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 1))));
          Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 2))));
          {
            STATE_VARIABLE_Info_70_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_70_70, 0) = ((MR_Box) (Var_98));
            MR_hl_field(0, STATE_VARIABLE_Info_70_70, 1) = ((MR_Box) (Var_99));
            MR_hl_field(0, STATE_VARIABLE_Info_70_70, 2) = ((MR_Box) (Var_100));
            MR_hl_field(0, STATE_VARIABLE_Info_70_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
        }
        else
        {
          MR_Word Detism_87;
          MR_Word Var_115;
          MR_Word Var_51;

          Detism_87 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_30);
          parse_tree__prog_data__determinism_components_3_p_0(Detism_87, &Var_51, &Var_115);
          succeeded = ((MR_Integer) 0 == Var_115);
          if (succeeded)
          {
            MR_Word Var_74;

            transform_hlds__constraint__constraint_info_update_changed_3_p_0(Constraints0_3, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_70_70);
            Constraints1_38 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_74, 0) = ((MR_Box) (Goal_25));
              MR_hl_field(0, Var_74, 1) = ((MR_Box) (Constraints1_38));
            }
            {
              ConstrainedGoals1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ConstrainedGoals1_36, 0) = ((MR_Box) (Var_74));
              MR_hl_field(1, ConstrainedGoals1_36, 1) = ((MR_Box) (ConstrainedGoals0_4));
            }
          }
          else
          {
            MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 1))));

            succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(GoalInfo_30, Var_116);
            if (succeeded)
            {
              {
                MR_Word Var_76;

                Var_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_30);
                succeeded = (Var_76 == (MR_Integer) 2);
              }
              if (!(succeeded))
                succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_30, (MR_Integer) 20);
            }
            if (succeeded)
            {
              MR_Word ConstraintGoals_53;
              MR_Word NewConstrainedGoals_54;
              MR_Word Var_79;

              Constraints1_38 = (MR_Word) ((MR_Unsigned) 0U);
              transform_hlds__constraint__flatten_constraints_2_p_0(Constraints0_3, &ConstraintGoals_53);
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (Goal_25));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (ConstraintGoals_53));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[4]), Var_79, &NewConstrainedGoals_54);
              ConstrainedGoals1_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), NewConstrainedGoals_54, ConstrainedGoals0_4);
            }
            else
            {
              MR_Word Globals_55;
              MR_Word Var_80;
              MR_Word Var_81;

              succeeded = hlds__goal_form__goal_cannot_loop_or_throw_term_info_2_p_0(ModuleInfo_1, Goal_25);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_55);
                Var_80 = (MR_Integer) 217;
                Var_81 = (MR_Integer) 1;
                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_55, Var_80, Var_81);
              }
              if (succeeded)
              {
                MR_Word DependentConstraints_56;
                MR_Word IndependentConstraints_57;
                MR_Word IndependentConstraintGoals_58;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word NewConstrainedGoals_88;

                transform_hlds__constraint__filter_dependent_constraints_5_p_0(NonLocals_31, ChangedVars_26, Constraints0_3, &DependentConstraints_56, &IndependentConstraints_57);
                transform_hlds__constraint__flatten_constraints_2_p_0(IndependentConstraints_57, &IndependentConstraintGoals_58);
                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[5]), IndependentConstraintGoals_58, &NewConstrainedGoals_88);
                Var_84 = transform_hlds__constraint__attach_constraints_2_f_0(Goal_25, DependentConstraints_56);
                {
                  Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(1, Var_83, 1) = ((MR_Box) (NewConstrainedGoals_88));
                }
                ConstrainedGoals1_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0), Var_83, ConstrainedGoals0_4);
                Constraints1_38 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_85;
                MR_Word DependentConstraints_89;

                transform_hlds__constraint__filter_dependent_constraints_5_p_0(NonLocals_31, OutputVars_27, Constraints0_3, &DependentConstraints_89, &Constraints1_38);
                Var_85 = transform_hlds__constraint__attach_constraints_2_f_0(Goal_25, DependentConstraints_89);
                {
                  ConstrainedGoals1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ConstrainedGoals1_36, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(1, ConstrainedGoals1_36, 1) = ((MR_Box) (ConstrainedGoals0_4));
                }
              }
            }
            STATE_VARIABLE_Info_70_70 = STATE_VARIABLE_Info_61_61;
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RevConjuncts0_20;
      next_value_of_Constraints0_3 = Constraints1_38;
      next_value_of_ConstrainedGoals0_4 = ConstrainedGoals1_36;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_70_70;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      Constraints0_3 = next_value_of_Constraints0_3;
      ConstrainedGoals0_4 = next_value_of_ConstrainedGoals0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  if ((Constraints_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
  MR_Word NonLocals_6,
  MR_Word GoalOutputVars_7,
  MR_Word Constraints_8,
  MR_Word * DependentConstraints_9,
  MR_Word * IndependentConstraints_10)
{
  MR_Word RevDependentConstraints_11;
  MR_Word RevIndependentConstraints_12;

  transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(NonLocals_6, GoalOutputVars_7, Constraints_8, (MR_Word) ((MR_Unsigned) 0U), &RevDependentConstraints_11, (MR_Word) ((MR_Unsigned) 0U), &RevIndependentConstraints_12);
  mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), RevDependentConstraints_11, DependentConstraints_9);
  mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), RevIndependentConstraints_12, IndependentConstraints_10);
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) ((env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31));
  transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word EarlierChangedVars_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1))));
    MR_Word ConstraintGoal_45 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0))));
    MR_Word ConstraintGoalInfo_50 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_45, (MR_Integer) 1))));
    MR_Word ConstraintNonLocals_51;
    MR_Word EarlierConstraintIntersection_52;
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_45, (MR_Integer) 0))));

    ConstraintNonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConstraintGoalInfo_50);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_42, ConstraintNonLocals_51, &EarlierConstraintIntersection_52);
    (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierConstraintIntersection_52);
    (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), &(env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevDependent_0_4,
  MR_Word * STATE_VARIABLE_RevDependent_5,
  MR_Word STATE_VARIABLE_RevIndependent_0_6,
  MR_Word * STATE_VARIABLE_RevIndependent_7)
{
  struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s env;

  (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = STATE_VARIABLE_RevDependent_0_4;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevIndependent_7 = STATE_VARIABLE_RevIndependent_0_6;
      *STATE_VARIABLE_RevDependent_5 = (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
    }
    else
    {
      MR_Word Constraints_19;
      MR_Word ConstraintGoal_22;
      MR_Word IncompatibleInstVars_24;
      MR_Word ConstraintGoalInfo_27;
      MR_Word ConstraintNonLocals_28;
      MR_Word STATE_VARIABLE_RevDependent_36_36;
      MR_Word STATE_VARIABLE_RevIndependent_37_37;
      MR_Word Var_23;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevDependent_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevIndependent_0_6;

      (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      Constraints_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      ConstraintGoal_22 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1))));
      IncompatibleInstVars_24 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_22, (MR_Integer) 0))));
      ConstraintGoalInfo_27 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal_22, (MR_Integer) 1))));
      ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConstraintGoalInfo_27);
      {
        MR_Word OutputVarsUsedByConstraint_29;

        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstraintNonLocals_28, HeadVar__2_2, &OutputVarsUsedByConstraint_29);
        (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsUsedByConstraint_29);
        (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
      }
      if (!((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
      {
        {
          MR_Word IncompatibleInstVarsUsedByGoal_30;

          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, IncompatibleInstVars_24, &IncompatibleInstVarsUsedByGoal_30);
          (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IncompatibleInstVarsUsedByGoal_30);
          (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
        }
        if (!((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&env);
      }
      if ((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
      {
        {
          STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
          MR_hl_field(1, STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
        }
        STATE_VARIABLE_RevIndependent_37_37 = STATE_VARIABLE_RevIndependent_0_6;
      }
      else
      {
        {
          STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
          MR_hl_field(1, STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (STATE_VARIABLE_RevIndependent_0_6));
        }
        STATE_VARIABLE_RevDependent_36_36 = (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints_19;
      next_value_of_STATE_VARIABLE_RevDependent_0_4 = STATE_VARIABLE_RevDependent_36_36;
      next_value_of_STATE_VARIABLE_RevIndependent_0_6 = STATE_VARIABLE_RevIndependent_37_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      (env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = next_value_of_STATE_VARIABLE_RevDependent_0_4;
      STATE_VARIABLE_RevIndependent_0_6 = next_value_of_STATE_VARIABLE_RevIndependent_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
  MR_Word ConstructVar_1,
  MR_Word Construct0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraint_16;
    MR_Word Constraints_17;
    MR_Word ConstraintGoal0_19 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, (MR_Integer) 0))));
    MR_Word ChangedVars_20 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, (MR_Integer) 1))));
    MR_Word IncompatibleInstVars_21 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, (MR_Integer) 2))));
    MR_Word Constructs0_22 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Info_41_41;
    MR_Word ConstraintInfo_24 = ((MR_Word) ((MR_hl_field(0, ConstraintGoal0_19, (MR_Integer) 1))));
    MR_Word ConstraintNonLocals_25;

    ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConstraintInfo_24);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstraintNonLocals_25, ConstructVar_1);
    if (succeeded)
    {
      MR_Word VarTable0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      MR_Word ConstructVarEntry_27;
      MR_Word ConstructVarType_29;
      MR_Word ConstructVarTypeIsDummy_30;
      MR_Word NewVarEntry_31;
      MR_Word NewVar_32;
      MR_Word VarTable_33;
      MR_Word Subn_34;
      MR_Word Construct_35;
      MR_Word Constructs_36;
      MR_Word ConstraintGoal_37;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_26, ConstructVar_1, &ConstructVarEntry_27);
      ConstructVarType_29 = ((MR_Word) ((MR_hl_field(0, ConstructVarEntry_27, (MR_Integer) 1))));
      ConstructVarTypeIsDummy_30 = ((MR_Unsigned) ((MR_hl_field(0, ConstructVarEntry_27, (MR_Integer) 2))) & (MR_Integer) 1);
      {
        NewVarEntry_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewVarEntry_31, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, NewVarEntry_31, 1) = ((MR_Box) (ConstructVarType_29));
        MR_hl_field(0, NewVarEntry_31, 2) = (MR_Box) ((MR_Unsigned) (ConstructVarTypeIsDummy_30));
      }
      parse_tree__var_table__add_var_entry_4_p_0(NewVarEntry_31, &NewVar_32, VarTable0_26, &VarTable_33);
      Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_48 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (Var_45));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (VarTable_33));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_47));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 3) = (MR_Box) ((MR_Unsigned) (Var_48));
      }
      Subn_34 = mercury__map__singleton_2_f_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[1]), (MR_Word) (&transform_hlds__constraint_scalar_common_1[1]), ((MR_Box) (ConstructVar_1)), ((MR_Box) (NewVar_32)));
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subn_34, Construct0_2, &Construct_35);
      {
        Constructs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constructs_36, 0) = ((MR_Box) (Construct_35));
        MR_hl_field(1, Constructs_36, 1) = ((MR_Box) (Constructs0_22));
      }
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subn_34, ConstraintGoal0_19, &ConstraintGoal_37);
      {
        Constraint_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraint_16, 0) = ((MR_Box) (ConstraintGoal_37));
        MR_hl_field(0, Constraint_16, 1) = ((MR_Box) (ChangedVars_20));
        MR_hl_field(0, Constraint_16, 2) = ((MR_Box) (IncompatibleInstVars_21));
        MR_hl_field(0, Constraint_16, 3) = ((MR_Box) (Constructs_36));
      }
    }
    else
    {
      Constraint_16 = Constraint0_14;
      STATE_VARIABLE_Info_41_41 = STATE_VARIABLE_Info_0_5;
    }
    transform_hlds__constraint__add_constant_construction_6_p_0(ConstructVar_1, Construct0_2, Constraints0_15, &Constraints_17, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Constraints_17));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Constraint_4;

  transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Constraint_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Constraint_4));
}

static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
  MR_Word Goal_4,
  MR_Word Constraints0_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word Constraints_6;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

  succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
  if (succeeded)
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint_scalar_common_3[1]), Constraints0_5, &Constraints_6);
  else
    Constraints_6 = Constraints0_5;
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Goal_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Constraints_6));
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__353__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__339__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevAnnotatedGoals_0_5,
  MR_Word * STATE_VARIABLE_RevAnnotatedGoals_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAnnotatedGoals_6 = STATE_VARIABLE_RevAnnotatedGoals_0_5;
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word GoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 1))));
      MR_Word InstMapDelta_21;
      MR_Word InstMap_22;
      MR_Word ChangedVars0_23;
      MR_Word InstMapVars_24;
      MR_Word InCompatible_25;
      MR_Word IncompatibleInstVars_30;
      MR_Word Bound_31;
      MR_Word BoundVars_32;
      MR_Word ChangedVars_33;
      MR_Word AnnotatedConjunct_34;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_RevAnnotatedGoals_41_41;
      MR_Word next_value_of_InstMap0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevAnnotatedGoals_0_5;

      InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_20);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_21, InstMap0_3, &InstMap_22);
      hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_1, VarTable_2, InstMap0_3, InstMap_22, &ChangedVars0_23);
      hlds__instmap__instmap_vars_list_2_p_0(InstMap_22, &InstMapVars_24);
      {
        InCompatible_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
        MR_hl_field(0, InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
        MR_hl_field(0, InCompatible_25, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, InCompatible_25, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, InCompatible_25, 4) = ((MR_Box) (VarTable_2));
        MR_hl_field(0, InCompatible_25, 5) = ((MR_Box) (InstMap0_3));
        MR_hl_field(0, InCompatible_25, 6) = ((MR_Box) (InstMapDelta_21));
      }
      Var_38 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[1]), InCompatible_25, InstMapVars_24);
      IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_38);
      {
        Bound_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
        MR_hl_field(0, Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
        MR_hl_field(0, Bound_31, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Bound_31, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, Bound_31, 4) = ((MR_Box) (VarTable_2));
        MR_hl_field(0, Bound_31, 5) = ((MR_Box) (InstMap0_3));
        MR_hl_field(0, Bound_31, 6) = ((MR_Box) (InstMapDelta_21));
      }
      Var_40 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__constraint_scalar_common_1[1]), Bound_31, InstMapVars_24);
      BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars0_23, BoundVars_32, &ChangedVars_33);
      {
        AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AnnotatedConjunct_34, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(0, AnnotatedConjunct_34, 1) = ((MR_Box) (ChangedVars_33));
        MR_hl_field(0, AnnotatedConjunct_34, 2) = ((MR_Box) (BoundVars_32));
        MR_hl_field(0, AnnotatedConjunct_34, 3) = ((MR_Box) (IncompatibleInstVars_30));
      }
      {
        STATE_VARIABLE_RevAnnotatedGoals_41_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevAnnotatedGoals_41_41, 0) = ((MR_Box) (AnnotatedConjunct_34));
        MR_hl_field(1, STATE_VARIABLE_RevAnnotatedGoals_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevAnnotatedGoals_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_InstMap0_3 = InstMap_22;
      next_value_of_HeadVar__4_4 = Goals_17;
      next_value_of_STATE_VARIABLE_RevAnnotatedGoals_0_5 = STATE_VARIABLE_RevAnnotatedGoals_41_41;
      InstMap0_3 = next_value_of_InstMap0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevAnnotatedGoals_0_5 = next_value_of_STATE_VARIABLE_RevAnnotatedGoals_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalCord_4;

  transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalCord_4));
}

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
  MR_Word Constraints0_3,
  MR_Word * Goals_4)
{
  MR_Word GoalCords_5;

  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__constraint_scalar_common_1[0]), (MR_Word) (&transform_hlds__constraint_scalar_common_3[0]), Constraints0_3, &GoalCords_5);
  *Goals_4 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCords_5);
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____annotated_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____annotated_conjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____constrained_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____constrained_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____constrained_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__constraint____Compare____constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__constraint__init(void)
{
}

void mercury__transform_hlds__constraint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_conj_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_info_0);
}

void mercury__transform_hlds__constraint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__constraint__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.constraint.
