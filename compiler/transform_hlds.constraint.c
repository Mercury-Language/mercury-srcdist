/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module transform_hlds.constraint. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__constraint__init
ENDINIT
*/

#include "transform_hlds.constraint.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

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

static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5];

static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__356__1_5_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__InstMapDelta_21,
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_39);

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__342__1_5_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__InstMapDelta_21,
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_37);

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_case_2_p_0(
  MR_Word transform_hlds__constraint__Case0_3,
  MR_Word * transform_hlds__constraint__Case_4);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_3(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0(
  MR_Word transform_hlds__constraint__Goal0_3,
  MR_Word * transform_hlds__constraint__Goal_4);

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
  MR_Word transform_hlds__constraint__Constraints_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11);

static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
  MR_Word transform_hlds__constraint__Goal_2);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_GoalsCord_0_2,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_GoalsCord_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
  void * transform_hlds__constraint__env_ptr_arg);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7);

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
  MR_Word transform_hlds__constraint__NonLocals_6,
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
  MR_Word transform_hlds__constraint__Constraints_8,
  MR_Word * transform_hlds__constraint__DependentConstraints_9,
  MR_Word * transform_hlds__constraint__IndependentConstraints_10);

static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
  MR_Word transform_hlds__constraint__ConstructVar_1,
  MR_Word transform_hlds__constraint__Construct0_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(
  MR_Word transform_hlds__constraint__Goal0_3,
  MR_Word * transform_hlds__constraint__Goal_4);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(
  MR_Word transform_hlds__constraint__Constraint0_3,
  MR_Word * transform_hlds__constraint__Constraint_4);

static void MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
  MR_Word transform_hlds__constraint__Goal_4,
  MR_Word transform_hlds__constraint__Constraints0_5);

static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
  MR_Word transform_hlds__constraint__Goal_3,
  MR_Word * transform_hlds__constraint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__Constraints0_3,
  MR_Word transform_hlds__constraint__ConstrainedGoals0_4,
  MR_Word * transform_hlds__constraint__ConstrainedGoals_5,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1);

static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_6);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goals0_7,
  MR_Word * transform_hlds__constraint__Goals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
  MR_Word transform_hlds__constraint__Var_1,
  MR_Word transform_hlds__constraint__Constraints_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__constraint__constraint_goals_to_cord_2_p_0(
  MR_Word transform_hlds__constraint__Constraint_3,
  MR_Word * transform_hlds__constraint__GoalCord_4);

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
  MR_Word transform_hlds__constraint__Constraints0_3,
  MR_Word * transform_hlds__constraint__Goals_4);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__FinalGoals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_82,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_83);

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__Goals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__Goal_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24);


static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[5][5];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8];




static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__flatten_constraints_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__propagate_conj_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__constraint__attach_constraints_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conj",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0 = {
  (MR_String) "annotated_conjunct",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conjunct",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constrained_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____constrained_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constrained_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constrained_conj",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constrained_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constrained_goal_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0 = {
  (MR_String) "constrained_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_constrained_goal_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constrained_goal_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constrained_goal_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constrained_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constrained_goal_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constrained_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constrained_goal_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constrained_goal",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constrained_goal_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constrained_goal_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constrained_goal_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0 = {
  (MR_String) "constraint",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_vartypes",
  (MR_String) "constr_varset",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0 = {
  (MR_String) "constraint_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0,
  transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_info_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint_info",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0
};

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____annotated_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____annotated_conjunct_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____constrained_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_goal_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____constrained_goal_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____constraint_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
  MR_Box transform_hlds__constraint__wrapper_arg_2,
  MR_Box transform_hlds__constraint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

    {
      transform_hlds__constraint____Compare____constraint_info_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__356__1_5_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__InstMapDelta_21,
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_39)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__InstBefore_45;
    MR_Word transform_hlds__constraint__InstAfter_46;
    MR_Word transform_hlds__constraint__Type_47;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__InstBefore_45);
    }
    {
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__InstAfter_46);
    }
    if (transform_hlds__constraint__succeeded)
      {
        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__Type_47);
        }
        {
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__constraint__InstAfter_46, transform_hlds__constraint__InstBefore_45, transform_hlds__constraint__Type_47, transform_hlds__constraint__ModuleInfo_2);
        }
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
      }
    return transform_hlds__constraint__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__342__1_5_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__InstMapDelta_21,
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_37)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__InstBefore_27;
    MR_Word transform_hlds__constraint__InstAfter_28;
    MR_Word transform_hlds__constraint__Type_29;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__InstBefore_27);
    }
    {
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__InstAfter_28);
    }
    if (transform_hlds__constraint__succeeded)
      {
        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__Type_29);
        }
        {
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__constraint__InstAfter_28, transform_hlds__constraint__InstBefore_27, transform_hlds__constraint__Type_29, transform_hlds__constraint__ModuleInfo_2);
        }
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
      }
    return transform_hlds__constraint__succeeded;
  }
}

void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_18 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
    MR_Integer transform_hlds__constraint__CastY_19 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_18 == transform_hlds__constraint__CastY_19);
    if (transform_hlds__constraint__succeeded)
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__constraint__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__constraint__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__constraint__Var_14;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__constraint__Var_14, transform_hlds__constraint__ArgX1_4, transform_hlds__constraint__ArgY1_5);
        }
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_14 == (MR_Integer) 0);
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
        if (transform_hlds__constraint__succeeded)
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_14;
        else
          {
            MR_Word transform_hlds__constraint__Var_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_2[0], &transform_hlds__constraint__Var_15, ((MR_Box) (transform_hlds__constraint__ArgX2_6)), ((MR_Box) (transform_hlds__constraint__ArgY2_7)));
            }
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_15 == (MR_Integer) 0);
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
            if (transform_hlds__constraint__succeeded)
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_15;
            else
              {
                MR_Word transform_hlds__constraint__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[7], &transform_hlds__constraint__Var_16, ((MR_Box) (transform_hlds__constraint__ArgX3_8)), ((MR_Box) (transform_hlds__constraint__ArgY3_9)));
                }
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_16 == (MR_Integer) 0);
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
                if (transform_hlds__constraint__succeeded)
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_16;
                else
                  {
                    MR_Word transform_hlds__constraint__Var_17;

                    {
                      hlds__instmap____Compare____instmap_0_0(&transform_hlds__constraint__Var_17, transform_hlds__constraint__ArgX4_10, transform_hlds__constraint__ArgY4_11);
                    }
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_17 == (MR_Integer) 0);
                    transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
                    if (transform_hlds__constraint__succeeded)
                      *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_17;
                    else
                      {
                        MR_Integer transform_hlds__constraint__Var_25 = (MR_Integer) transform_hlds__constraint__ArgX5_12;
                        MR_Integer transform_hlds__constraint__Var_26 = (MR_Integer) transform_hlds__constraint__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__Var_25, transform_hlds__constraint__Var_26);
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_13 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
    MR_Integer transform_hlds__constraint__CastY_14 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_13 == transform_hlds__constraint__CastY_14);
    if (transform_hlds__constraint__succeeded)
      transform_hlds__constraint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
        MR_Word transform_hlds__constraint__TypeInfo_17_17;
        MR_Word transform_hlds__constraint__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__constraint__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__constraint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__constraint__ArgX1_3, transform_hlds__constraint__ArgY1_4);
        }
        if (transform_hlds__constraint__succeeded)
          {
            transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
            {
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__ArgX2_5)), ((MR_Box) (transform_hlds__constraint__ArgY2_6)));
            }
            if (transform_hlds__constraint__succeeded)
              {
                transform_hlds__constraint__TypeInfo_17_17 = (MR_Word) &transform_hlds__constraint_scalar_common_1[7];
                {
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_17_17, ((MR_Box) (transform_hlds__constraint__ArgX3_7)), ((MR_Box) (transform_hlds__constraint__ArgY3_8)));
                }
                if (transform_hlds__constraint__succeeded)
                  {
                    {
                      transform_hlds__constraint__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__constraint__ArgX4_9, transform_hlds__constraint__ArgY4_10);
                    }
                    if (transform_hlds__constraint__succeeded)
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__ArgX5_11 == transform_hlds__constraint__ArgY5_12);
                  }
              }
          }
      }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
    if (transform_hlds__constraint__succeeded)
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__constraint__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__Var_12;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__Var_12, transform_hlds__constraint__ArgX1_4, transform_hlds__constraint__ArgY1_5);
        }
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_12 == (MR_Integer) 0);
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
        if (transform_hlds__constraint__succeeded)
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_12;
        else
          {
            MR_Word transform_hlds__constraint__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[3], &transform_hlds__constraint__Var_13, ((MR_Box) (transform_hlds__constraint__ArgX2_6)), ((MR_Box) (transform_hlds__constraint__ArgY2_7)));
            }
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_13 == (MR_Integer) 0);
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
            if (transform_hlds__constraint__succeeded)
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_13;
            else
              {
                MR_Word transform_hlds__constraint__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[3], &transform_hlds__constraint__Var_14, ((MR_Box) (transform_hlds__constraint__ArgX3_8)), ((MR_Box) (transform_hlds__constraint__ArgY3_9)));
                }
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_14 == (MR_Integer) 0);
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
                if (transform_hlds__constraint__succeeded)
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__ArgX4_10)), ((MR_Box) (transform_hlds__constraint__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
    if (transform_hlds__constraint__succeeded)
      transform_hlds__constraint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
        MR_Word transform_hlds__constraint__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

        {
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__ArgX1_3, transform_hlds__constraint__ArgY1_4);
        }
        if (transform_hlds__constraint__succeeded)
          {
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[3];
            {
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__ArgX2_5)), ((MR_Box) (transform_hlds__constraint__ArgY2_6)));
            }
            if (transform_hlds__constraint__succeeded)
              {
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[3];
                {
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__ArgX3_7)), ((MR_Box) (transform_hlds__constraint__ArgY3_8)));
                }
                if (transform_hlds__constraint__succeeded)
                  {
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[6];
                    {
                      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__ArgX4_9)), ((MR_Box) (transform_hlds__constraint__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_goal_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_9 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
    MR_Integer transform_hlds__constraint__CastY_10 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_9 == transform_hlds__constraint__CastY_10);
    if (transform_hlds__constraint__succeeded)
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__constraint__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Var_8;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__Var_8, transform_hlds__constraint__ArgX1_4, transform_hlds__constraint__ArgY1_5);
        }
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_8 == (MR_Integer) 0);
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
        if (transform_hlds__constraint__succeeded)
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__ArgX2_6)), ((MR_Box) (transform_hlds__constraint__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_goal_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_7 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
    MR_Integer transform_hlds__constraint__CastY_8 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_7 == transform_hlds__constraint__CastY_8);
    if (transform_hlds__constraint__succeeded)
      transform_hlds__constraint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__constraint__TypeInfo_10_10;
        MR_Word transform_hlds__constraint__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__ArgX1_3, transform_hlds__constraint__ArgY1_4);
        }
        if (transform_hlds__constraint__succeeded)
          {
            transform_hlds__constraint__TypeInfo_10_10 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
            {
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_10_10, ((MR_Box) (transform_hlds__constraint__ArgX2_5)), ((MR_Box) (transform_hlds__constraint__ArgY2_6)));
            }
          }
      }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

    {
      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
    if (transform_hlds__constraint__succeeded)
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__constraint__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__Var_12;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__Var_12, transform_hlds__constraint__ArgX1_4, transform_hlds__constraint__ArgY1_5);
        }
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_12 == (MR_Integer) 0);
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
        if (transform_hlds__constraint__succeeded)
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_12;
        else
          {
            MR_Word transform_hlds__constraint__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[3], &transform_hlds__constraint__Var_13, ((MR_Box) (transform_hlds__constraint__ArgX2_6)), ((MR_Box) (transform_hlds__constraint__ArgY2_7)));
            }
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_13 == (MR_Integer) 0);
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
            if (transform_hlds__constraint__succeeded)
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_13;
            else
              {
                MR_Word transform_hlds__constraint__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[3], &transform_hlds__constraint__Var_14, ((MR_Box) (transform_hlds__constraint__ArgX3_8)), ((MR_Box) (transform_hlds__constraint__ArgY3_9)));
                }
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_14 == (MR_Integer) 0);
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
                if (transform_hlds__constraint__succeeded)
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[3], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__ArgX4_10)), ((MR_Box) (transform_hlds__constraint__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
    if (transform_hlds__constraint__succeeded)
      transform_hlds__constraint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
        MR_Word transform_hlds__constraint__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

        {
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__ArgX1_3, transform_hlds__constraint__ArgY1_4);
        }
        if (transform_hlds__constraint__succeeded)
          {
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[3];
            {
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__ArgX2_5)), ((MR_Box) (transform_hlds__constraint__ArgY2_6)));
            }
            if (transform_hlds__constraint__succeeded)
              {
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[3];
                {
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__ArgX3_7)), ((MR_Box) (transform_hlds__constraint__ArgY3_8)));
                }
                if (transform_hlds__constraint__succeeded)
                  {
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[3];
                    {
                      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__ArgX4_9)), ((MR_Box) (transform_hlds__constraint__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[2], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

    {
      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[2], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_case_2_p_0(
  MR_Word transform_hlds__constraint__Case0_3,
  MR_Word * transform_hlds__constraint__Case_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__MainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__OtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__SubGoal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_3, (MR_Integer) 2)));
    MR_Word transform_hlds__constraint__SubGoal_8;

    {
      transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__SubGoal0_7, &transform_hlds__constraint__SubGoal_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__Case_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_8));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_3(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv2_Case_4;

    {
      transform_hlds__constraint__strip_constraint_markers_case_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_Case_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_Case_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv1_Goal_4;

    {
      transform_hlds__constraint__strip_constraint_markers_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_Goal_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_Goal_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_Goal_4;

    {
      transform_hlds__constraint__strip_constraint_markers_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_Goal_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_Goal_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__strip_constraint_markers_2_p_0(
  MR_Word transform_hlds__constraint__Goal0_3,
  MR_Word * transform_hlds__constraint__Goal_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__GoalExpr_7;
    MR_Word transform_hlds__constraint__GoalInfo_8;

    switch (MR_tag((MR_Word) transform_hlds__constraint__GoalExpr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__constraint__SubGoal0_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr0_5), (MR_Integer) 0);
          MR_Word transform_hlds__constraint__SubGoal_21;

          {
            transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__SubGoal0_20, &transform_hlds__constraint__SubGoal_21);
          }
          transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__SubGoal_21);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        transform_hlds__constraint__GoalExpr_7 = transform_hlds__constraint__GoalExpr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 7:
            transform_hlds__constraint__GoalExpr_7 = transform_hlds__constraint__GoalExpr0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__constraint__TypeCtorInfo_55_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__constraint__ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__SubGoals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__SubGoals_15;

              {
                mercury__list__map_3_p_0(transform_hlds__constraint__TypeCtorInfo_55_63, transform_hlds__constraint__TypeCtorInfo_55_63, (MR_Word) &transform_hlds__constraint_scalar_common_2[8], transform_hlds__constraint__SubGoals0_14, &transform_hlds__constraint__SubGoals_15);
              }
              {
                transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_13));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 2) = ((MR_Box) (transform_hlds__constraint__SubGoals_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__constraint__TypeCtorInfo_58_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__constraint__SubGoals0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__SubGoals_58;

              {
                mercury__list__map_3_p_0(transform_hlds__constraint__TypeCtorInfo_58_66, transform_hlds__constraint__TypeCtorInfo_58_66, (MR_Word) &transform_hlds__constraint_scalar_common_2[9], transform_hlds__constraint__SubGoals0_57, &transform_hlds__constraint__SubGoals_58);
              }
              {
                transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 1) = ((MR_Box) (transform_hlds__constraint__SubGoals_58));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__constraint__TypeCtorInfo_61_69 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              MR_Word transform_hlds__constraint__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word transform_hlds__constraint__Cases_19;

              {
                mercury__list__map_3_p_0(transform_hlds__constraint__TypeCtorInfo_61_69, transform_hlds__constraint__TypeCtorInfo_61_69, (MR_Word) &transform_hlds__constraint_scalar_common_2[10], transform_hlds__constraint__Cases0_18, &transform_hlds__constraint__Cases_19);
              }
              {
                transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 1) = ((MR_Box) (transform_hlds__constraint__Var_16));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_17));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 3) = ((MR_Box) (transform_hlds__constraint__Cases_19));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__constraint__Reason_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__SubGoal_60;

              {
                transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__SubGoal0_59, &transform_hlds__constraint__SubGoal_60);
              }
              {
                transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 1) = ((MR_Box) (transform_hlds__constraint__Reason_22));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_60));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__constraint__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word transform_hlds__constraint__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr0_5, (MR_Integer) 4)));
              MR_Word transform_hlds__constraint__Cond_27;
              MR_Word transform_hlds__constraint__Then_28;
              MR_Word transform_hlds__constraint__Else_29;

              {
                transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__Cond0_24, &transform_hlds__constraint__Cond_27);
              }
              {
                transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__Then0_25, &transform_hlds__constraint__Then_28);
              }
              {
                transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__Else0_26, &transform_hlds__constraint__Else_29);
              }
              {
                transform_hlds__constraint__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 1) = ((MR_Box) (transform_hlds__constraint__Vars_23));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 2) = ((MR_Box) (transform_hlds__constraint__Cond_27));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 3) = ((MR_Box) (transform_hlds__constraint__Then_28));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_7, 4) = ((MR_Box) (transform_hlds__constraint__Else_29));
              }
            }
            break;
        }
        break;
    }
    {
      transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo0_6, (MR_Integer) 0);
    }
    if (transform_hlds__constraint__succeeded)
      {
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_6, &transform_hlds__constraint__GoalInfo_8);
        }
      }
    else
      transform_hlds__constraint__GoalInfo_8 = transform_hlds__constraint__GoalInfo0_6;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_8));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
  MR_Word transform_hlds__constraint__Constraints_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    if ((transform_hlds__constraint__Constraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__constraint__STATE_VARIABLE_Info_9 = transform_hlds__constraint__STATE_VARIABLE_Info_0_8;
    else
      {
        MR_Word transform_hlds__constraint__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__constraint__STATE_VARIABLE_Info_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__Var_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__Var_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__Var_15));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__InstMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word transform_hlds__constraint__InstMapDelta_8;
    MR_Word transform_hlds__constraint__InstMap_9;
    MR_Word transform_hlds__constraint__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__constraint__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word transform_hlds__constraint__Var_17;
    MR_Word transform_hlds__constraint__Var_18;
    MR_Word transform_hlds__constraint__Var_19;
    MR_Word transform_hlds__constraint__Var_21;
    MR_Word transform_hlds__constraint__Var_20;

    {
      transform_hlds__constraint__InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_5);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_7, transform_hlds__constraint__InstMapDelta_8, &transform_hlds__constraint__InstMap_9);
    }
    transform_hlds__constraint__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    transform_hlds__constraint__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    transform_hlds__constraint__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    transform_hlds__constraint__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    transform_hlds__constraint__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__Var_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
  MR_Word transform_hlds__constraint__Goal_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word transform_hlds__constraint__SubGoal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_3), (MR_Integer) 0);

        {
          transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_5);
        }
      }
    else
    if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        MR_Word transform_hlds__constraint__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__FGT_8;
        MR_Word transform_hlds__constraint__Var_7;

        transform_hlds__constraint__succeeded = ((((MR_tag((MR_Word) transform_hlds__constraint__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (transform_hlds__constraint__succeeded)
          {
            transform_hlds__constraint__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 1)));
            transform_hlds__constraint__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 2)));
            switch (transform_hlds__constraint__FGT_8) {
              default:
                transform_hlds__constraint__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                transform_hlds__constraint__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                transform_hlds__constraint__succeeded = MR_TRUE;
                break;
            }
          }
        if (transform_hlds__constraint__succeeded)
          transform_hlds__constraint__succeeded = MR_TRUE;
        else
          {
            transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_10);
          }
      }
    else
      transform_hlds__constraint__succeeded = MR_FALSE;
    if (!(transform_hlds__constraint__succeeded))
      {
        MR_Word transform_hlds__constraint__Var_9;

        {
          transform_hlds__constraint__Var_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr_3);
        }
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_9 == (MR_Integer) 1);
      }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20);
    {
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(transform_hlds__constraint__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    {
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_44;
      MR_Word transform_hlds__constraint__EarlierChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__ConstraintGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__ConstraintNonLocals_42;
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_43;
      MR_Word transform_hlds__constraint__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0)));
      MR_Word transform_hlds__constraint__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2)));
      MR_Word transform_hlds__constraint__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3)));
      MR_Word transform_hlds__constraint__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
      MR_Word transform_hlds__constraint__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
      MR_Word transform_hlds__constraint__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 0)));

      {
        transform_hlds__constraint__ConstraintNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_41);
      }
      transform_hlds__constraint__TypeCtorInfo_17_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      {
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierChangedVars_33, transform_hlds__constraint__ConstraintNonLocals_42, &transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
      {
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
        {
          transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(transform_hlds__constraint__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, transform_hlds__constraint__env_ptr);
          }
        }
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5)
{
  {
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s transform_hlds__constraint__env;

    (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
            *transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
          }
        else
          {
            MR_Word transform_hlds__constraint__Constraints_13;
            MR_Word transform_hlds__constraint__ConstraintGoal_16;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;
            MR_Word transform_hlds__constraint__Var_17;
            MR_Word transform_hlds__constraint__Var_18;
            MR_Word transform_hlds__constraint__Var_19;

            (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__constraint__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
            transform_hlds__constraint__ConstraintGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
            transform_hlds__constraint__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
            transform_hlds__constraint__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
            transform_hlds__constraint__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
            {
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__ConstraintGoal_16);
            }
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&transform_hlds__constraint__env);
                }
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
              }
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2));
                }
                transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
              }
            else
              {
                {
                  transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
                }
                transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__constraint__next_value_of_HeadVar__1_1 = transform_hlds__constraint__Constraints_13;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;

              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevComplexConstraints_0_4;
              transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevSimpleConstraints_0_2;
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_GoalsCord_0_2,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_GoalsCord_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__constraint__succeeded;

        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
            *transform_hlds__constraint__STATE_VARIABLE_GoalsCord_3 = transform_hlds__constraint__STATE_VARIABLE_GoalsCord_0_2;
          }
        else
          {
            MR_Word transform_hlds__constraint__TypeCtorInfo_34_34;
            MR_Word transform_hlds__constraint__TypeCtorInfo_11_42;
            MR_Word transform_hlds__constraint__ConstrainedGoal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__ConstrainedGoals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstrainedGoal0_12, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__Constraints0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstrainedGoal0_12, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__SimpleConstraints_18;
            MR_Word transform_hlds__constraint__ComplexConstraints0_19;
            MR_Word transform_hlds__constraint__GoalAndSimpleConstraints_20;
            MR_Word transform_hlds__constraint__ComplexConstraints_21;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_GoalsCord_28_28;
            MR_Word transform_hlds__constraint__Var_29;
            MR_Word transform_hlds__constraint__Var_30;
            MR_Word transform_hlds__constraint__Var_31;
            MR_Word transform_hlds__constraint__RevSimpleConstraints_38;
            MR_Word transform_hlds__constraint__RevComplexConstraints_39;
            MR_Word transform_hlds__constraint__GoalExpr0_49;
            MR_Word transform_hlds__constraint__HasSubGoals_51;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_53;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_54;
            MR_Word transform_hlds__constraint__GoalInfo_81;
            MR_Word transform_hlds__constraint__InstMap0_83;
            MR_Word transform_hlds__constraint__InstMapDelta_84;
            MR_Word transform_hlds__constraint__InstMap_85;
            MR_Word transform_hlds__constraint__Var_50;
            MR_Word transform_hlds__constraint__Var_56;
            MR_Word transform_hlds__constraint__Var_57;
            MR_Word transform_hlds__constraint__Var_58;
            MR_Word transform_hlds__constraint__Var_59;
            MR_Word transform_hlds__constraint__Var_60;
            MR_Word transform_hlds__constraint__Var_61;
            MR_Word transform_hlds__constraint__Var_62;
            MR_Word transform_hlds__constraint__Var_64;
            MR_Word transform_hlds__constraint__Var_63;
            MR_Word transform_hlds__constraint__Var_80;
            MR_Word transform_hlds__constraint__Var_91;
            MR_Word transform_hlds__constraint__Var_92;
            MR_Word transform_hlds__constraint__Var_93;
            MR_Word transform_hlds__constraint__Var_95;
            MR_Word transform_hlds__constraint__Var_94;

            {
              transform_hlds__constraint__filter_complex_constraints_2_5_p_0(transform_hlds__constraint__Constraints0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevSimpleConstraints_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevComplexConstraints_39);
            }
            transform_hlds__constraint__TypeCtorInfo_11_42 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
            {
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_11_42, transform_hlds__constraint__RevSimpleConstraints_38, &transform_hlds__constraint__SimpleConstraints_18);
            }
            {
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_11_42, transform_hlds__constraint__RevComplexConstraints_39, &transform_hlds__constraint__ComplexConstraints0_19);
            }
            transform_hlds__constraint__GoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_16, (MR_Integer) 0)));
            transform_hlds__constraint__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_16, (MR_Integer) 1)));
            {
              transform_hlds__constraint__HasSubGoals_51 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_49);
            }
            switch (transform_hlds__constraint__HasSubGoals_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                transform_hlds__constraint__STATE_VARIABLE_Info_16_53 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
                break;
              case (MR_Integer) 0:
                if ((transform_hlds__constraint__SimpleConstraints_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  transform_hlds__constraint__STATE_VARIABLE_Info_16_53 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
                else
                  {
                    MR_Word transform_hlds__constraint__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    MR_Word transform_hlds__constraint__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    MR_Word transform_hlds__constraint__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    MR_Word transform_hlds__constraint__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
                    MR_Word transform_hlds__constraint__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));

                    {
                      transform_hlds__constraint__STATE_VARIABLE_Info_16_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, 0) = ((MR_Box) (transform_hlds__constraint__Var_73));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, 1) = ((MR_Box) (transform_hlds__constraint__Var_74));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, 2) = ((MR_Box) (transform_hlds__constraint__Var_75));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, 3) = ((MR_Box) (transform_hlds__constraint__Var_76));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                  }
                break;
            }
            transform_hlds__constraint__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, (MR_Integer) 0)));
            transform_hlds__constraint__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, (MR_Integer) 1)));
            transform_hlds__constraint__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, (MR_Integer) 2)));
            transform_hlds__constraint__InstMap0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, (MR_Integer) 3)));
            transform_hlds__constraint__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_53, (MR_Integer) 4)));
            {
              transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__SimpleConstraints_18, transform_hlds__constraint__Goal_16, &transform_hlds__constraint__GoalAndSimpleConstraints_20, transform_hlds__constraint__STATE_VARIABLE_Info_16_53, &transform_hlds__constraint__STATE_VARIABLE_Info_17_54);
            }
            transform_hlds__constraint__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_54, (MR_Integer) 0)));
            transform_hlds__constraint__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_54, (MR_Integer) 1)));
            transform_hlds__constraint__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_54, (MR_Integer) 2)));
            transform_hlds__constraint__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_54, (MR_Integer) 3)));
            transform_hlds__constraint__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_54, (MR_Integer) 4)));
            {
              transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__Var_60));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__Var_61));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__Var_62));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_83));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__Var_64));
            }
            transform_hlds__constraint__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_16, (MR_Integer) 0)));
            transform_hlds__constraint__GoalInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_16, (MR_Integer) 1)));
            {
              transform_hlds__constraint__InstMapDelta_84 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_81);
            }
            {
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_83, transform_hlds__constraint__InstMapDelta_84, &transform_hlds__constraint__InstMap_85);
            }
            transform_hlds__constraint__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
            transform_hlds__constraint__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
            transform_hlds__constraint__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
            transform_hlds__constraint__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
            transform_hlds__constraint__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
            {
              transform_hlds__constraint__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__constraint__Var_91));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__constraint__Var_92));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__constraint__Var_93));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_85));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__constraint__Var_95));
            }
            {
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__ComplexConstraints0_19, &transform_hlds__constraint__ComplexConstraints_21);
            }
            transform_hlds__constraint__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              transform_hlds__constraint__Var_30 = mercury__cord__from_list_1_f_0(transform_hlds__constraint__TypeCtorInfo_34_34, transform_hlds__constraint__GoalAndSimpleConstraints_20);
            }
            {
              transform_hlds__constraint__Var_31 = mercury__cord__from_list_1_f_0(transform_hlds__constraint__TypeCtorInfo_34_34, transform_hlds__constraint__ComplexConstraints_21);
            }
            {
              transform_hlds__constraint__Var_29 = mercury__cord__f_43_43_2_f_0(transform_hlds__constraint__TypeCtorInfo_34_34, transform_hlds__constraint__Var_30, transform_hlds__constraint__Var_31);
            }
            {
              transform_hlds__constraint__STATE_VARIABLE_GoalsCord_28_28 = mercury__cord__f_43_43_2_f_0(transform_hlds__constraint__TypeCtorInfo_34_34, transform_hlds__constraint__STATE_VARIABLE_GoalsCord_0_2, transform_hlds__constraint__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__constraint__next_value_of_HeadVar__1_1 = transform_hlds__constraint__ConstrainedGoals0_13;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_GoalsCord_0_2 = transform_hlds__constraint__STATE_VARIABLE_GoalsCord_28_28;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__STATE_VARIABLE_Info_27_27;

              transform_hlds__constraint__STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_Info_0_4;
              transform_hlds__constraint__STATE_VARIABLE_GoalsCord_0_2 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_GoalsCord_0_2;
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31);
    {
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(transform_hlds__constraint__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    {
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_57;
      MR_Word transform_hlds__constraint__EarlierChangedVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__ConstraintGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__ConstraintNonLocals_55;
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_56;
      MR_Word transform_hlds__constraint__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0)));
      MR_Word transform_hlds__constraint__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2)));
      MR_Word transform_hlds__constraint__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3)));
      MR_Word transform_hlds__constraint__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
      MR_Word transform_hlds__constraint__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
      MR_Word transform_hlds__constraint__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
      MR_Word transform_hlds__constraint__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 0)));

      {
        transform_hlds__constraint__ConstraintNonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_54);
      }
      transform_hlds__constraint__TypeCtorInfo_17_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      {
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierChangedVars_46, transform_hlds__constraint__ConstraintNonLocals_55, &transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
      {
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
        {
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(transform_hlds__constraint__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
  void * transform_hlds__constraint__env_ptr_arg)
{
  {
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, transform_hlds__constraint__env_ptr);
          }
        }
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7)
{
  {
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s transform_hlds__constraint__env;

    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
            *transform_hlds__constraint__STATE_VARIABLE_RevDependent_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
          }
        else
          {
            MR_Word transform_hlds__constraint__Constraints_19;
            MR_Word transform_hlds__constraint__ConstraintGoal_22;
            MR_Word transform_hlds__constraint__IncompatibleInstVars_24;
            MR_Word transform_hlds__constraint__ConstraintGoalInfo_27;
            MR_Word transform_hlds__constraint__ConstraintNonLocals_28;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;
            MR_Word transform_hlds__constraint__Var_23;
            MR_Word transform_hlds__constraint__Var_25;
            MR_Word transform_hlds__constraint__Var_26;

            (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
            transform_hlds__constraint__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
            transform_hlds__constraint__ConstraintGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
            transform_hlds__constraint__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
            transform_hlds__constraint__IncompatibleInstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
            transform_hlds__constraint__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
            transform_hlds__constraint__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 0)));
            transform_hlds__constraint__ConstraintGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 1)));
            {
              transform_hlds__constraint__ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_27);
            }
            {
              MR_Word transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word transform_hlds__constraint__OutputVarsUsedByConstraint_29;

              {
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__ConstraintNonLocals_28, transform_hlds__constraint__HeadVar__2_2, &transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
              {
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
            }
            if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
              {
                {
                  MR_Word transform_hlds__constraint__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  MR_Word transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30;

                  {
                    parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__IncompatibleInstVars_24, &transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
                  {
                    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
                  (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
                }
                if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
                  {
                    {
                      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&transform_hlds__constraint__env);
                    }
                  }
              }
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
                }
                transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
              }
            else
              {
                {
                  transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6));
                }
                transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__constraint__next_value_of_HeadVar__3_3 = transform_hlds__constraint__Constraints_19;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;

              transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevIndependent_0_6;
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevDependent_0_4;
              transform_hlds__constraint__HeadVar__3_3 = transform_hlds__constraint__next_value_of_HeadVar__3_3;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
  MR_Word transform_hlds__constraint__NonLocals_6,
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
  MR_Word transform_hlds__constraint__Constraints_8,
  MR_Word * transform_hlds__constraint__DependentConstraints_9,
  MR_Word * transform_hlds__constraint__IndependentConstraints_10)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__TypeCtorInfo_15_15;
    MR_Word transform_hlds__constraint__RevDependentConstraints_11;
    MR_Word transform_hlds__constraint__RevIndependentConstraints_12;

    {
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(transform_hlds__constraint__NonLocals_6, transform_hlds__constraint__GoalOutputVars_7, transform_hlds__constraint__Constraints_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevDependentConstraints_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevIndependentConstraints_12);
    }
    transform_hlds__constraint__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
    {
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevDependentConstraints_11, transform_hlds__constraint__DependentConstraints_9);
    }
    {
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevIndependentConstraints_12, transform_hlds__constraint__IndependentConstraints_10);
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
  MR_Word transform_hlds__constraint__ConstructVar_1,
  MR_Word transform_hlds__constraint__Construct0_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word transform_hlds__constraint__Constraint0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Constraints0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Constraint_16;
        MR_Word transform_hlds__constraint__Constraints_17;
        MR_Word transform_hlds__constraint__ConstraintGoal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__ChangedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__IncompatibleInstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Constructs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_39_39;
        MR_Word transform_hlds__constraint__ConstraintInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__ConstraintNonLocals_25;
        MR_Word transform_hlds__constraint__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 0)));

        {
          transform_hlds__constraint__ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintInfo_24);
        }
        {
          transform_hlds__constraint__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__constraint__ConstraintNonLocals_25, transform_hlds__constraint__ConstructVar_1);
        }
        if (transform_hlds__constraint__succeeded)
          {
            MR_Word transform_hlds__constraint__TypeInfo_61_61;
            MR_Word transform_hlds__constraint__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
            MR_Word transform_hlds__constraint__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__NewVar_28;
            MR_Word transform_hlds__constraint__VarSet_29;
            MR_Word transform_hlds__constraint__VarType_30;
            MR_Word transform_hlds__constraint__VarTypes_31;
            MR_Word transform_hlds__constraint__Subn_32;
            MR_Word transform_hlds__constraint__Construct_33;
            MR_Word transform_hlds__constraint__Constructs_34;
            MR_Word transform_hlds__constraint__ConstraintGoal_35;
            MR_Word transform_hlds__constraint__Var_49;
            MR_Word transform_hlds__constraint__Var_52;
            MR_Word transform_hlds__constraint__Var_53;
            MR_Word transform_hlds__constraint__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
            MR_Word transform_hlds__constraint__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
            MR_Word transform_hlds__constraint__Var_50;
            MR_Word transform_hlds__constraint__Var_51;

            {
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarSet0_26, &transform_hlds__constraint__VarSet_29);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes0_27, transform_hlds__constraint__ConstructVar_1, &transform_hlds__constraint__VarType_30);
            }
            {
              hlds__vartypes__add_var_type_4_p_0(transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarType_30, transform_hlds__constraint__VarTypes0_27, &transform_hlds__constraint__VarTypes_31);
            }
            transform_hlds__constraint__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
            transform_hlds__constraint__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
            transform_hlds__constraint__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
            transform_hlds__constraint__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
            transform_hlds__constraint__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
            {
              transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (transform_hlds__constraint__Var_49));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_31));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_29));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (transform_hlds__constraint__Var_52));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (transform_hlds__constraint__Var_53));
            }
            transform_hlds__constraint__TypeInfo_61_61 = (MR_Word) &transform_hlds__constraint_scalar_common_1[1];
            {
              transform_hlds__constraint__Subn_32 = mercury__map__singleton_2_f_0(transform_hlds__constraint__TypeInfo_61_61, transform_hlds__constraint__TypeInfo_61_61, ((MR_Box) (transform_hlds__constraint__ConstructVar_1)), ((MR_Box) (transform_hlds__constraint__NewVar_28)));
            }
            {
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__Construct0_2, &transform_hlds__constraint__Construct_33);
            }
            {
              transform_hlds__constraint__Constructs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 0) = ((MR_Box) (transform_hlds__constraint__Construct_33));
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 1) = ((MR_Box) (transform_hlds__constraint__Constructs0_22));
            }
            {
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__ConstraintGoal0_19, &transform_hlds__constraint__ConstraintGoal_35);
            }
            {
              transform_hlds__constraint__Constraint_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 0) = ((MR_Box) (transform_hlds__constraint__ConstraintGoal_35));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_20));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_21));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 3) = ((MR_Box) (transform_hlds__constraint__Constructs_34));
            }
          }
        else
          {
            transform_hlds__constraint__Constraint_16 = transform_hlds__constraint__Constraint0_14;
            transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
          }
        {
          transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_1, transform_hlds__constraint__Construct0_2, transform_hlds__constraint__Constraints0_15, &transform_hlds__constraint__Constraints_17, transform_hlds__constraint__STATE_VARIABLE_Info_39_39, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__constraint__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_17));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(
  MR_Word transform_hlds__constraint__Goal0_3,
  MR_Word * transform_hlds__constraint__Goal_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__GoalInfo_7;

    {
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_6, &transform_hlds__constraint__GoalInfo_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_Goal_4;

    {
      transform_hlds__constraint__add_constraint_feature_to_goal_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_Goal_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_Goal_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(
  MR_Word transform_hlds__constraint__Constraint0_3,
  MR_Word * transform_hlds__constraint__Constraint_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__TypeCtorInfo_14_14;
    MR_Word transform_hlds__constraint__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__ChangedVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__IncompatibleInstVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_3, (MR_Integer) 2)));
    MR_Word transform_hlds__constraint__ConstructGoals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_3, (MR_Integer) 3)));
    MR_Word transform_hlds__constraint__Goal_9;
    MR_Word transform_hlds__constraint__ConstructGoals_10;
    MR_Word transform_hlds__constraint__GoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__GoalInfo_19;

    {
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_18, &transform_hlds__constraint__GoalInfo_19);
    }
    {
      transform_hlds__constraint__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_9, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_17));
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_9, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_19));
    }
    transform_hlds__constraint__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      mercury__list__map_3_p_0(transform_hlds__constraint__TypeCtorInfo_14_14, transform_hlds__constraint__TypeCtorInfo_14_14, (MR_Word) &transform_hlds__constraint_scalar_common_2[7], transform_hlds__constraint__ConstructGoals0_8, &transform_hlds__constraint__ConstructGoals_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__Constraint_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__ConstructGoals_10));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_Constraint_4;

    {
      transform_hlds__constraint__add_constraint_feature_to_constraint_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_Constraint_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_Constraint_4));
  }
}

static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
  MR_Word transform_hlds__constraint__Goal_4,
  MR_Word transform_hlds__constraint__Constraints0_5)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__HeadVar__3_3;
    MR_Word transform_hlds__constraint__Constraints_6;
    MR_Word transform_hlds__constraint__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__Var_7;
    MR_Integer transform_hlds__constraint__Var_8;
    MR_Word transform_hlds__constraint__Var_9;
    MR_Word transform_hlds__constraint__Var_10;
    MR_Word transform_hlds__constraint__Var_11;
    MR_Word transform_hlds__constraint__Var_12;

    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Var_14)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__constraint__succeeded)
      {
        transform_hlds__constraint__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 0)));
        transform_hlds__constraint__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 1)));
        transform_hlds__constraint__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 2)));
        transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 3)));
        transform_hlds__constraint__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 4)));
        transform_hlds__constraint__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__Var_14, (MR_Integer) 5)));
        {
          MR_Word transform_hlds__constraint__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;

          {
            mercury__list__map_3_p_0(transform_hlds__constraint__TypeCtorInfo_18_18, transform_hlds__constraint__TypeCtorInfo_18_18, (MR_Word) &transform_hlds__constraint_scalar_common_2[6], transform_hlds__constraint__Constraints0_5, &transform_hlds__constraint__Constraints_6);
          }
        }
      }
    else
      transform_hlds__constraint__Constraints_6 = transform_hlds__constraint__Constraints0_5;
    {
      transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__constraint__Goal_4));
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_6));
    }
    return transform_hlds__constraint__HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
  MR_Word transform_hlds__constraint__Goal_3,
  MR_Word * transform_hlds__constraint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_2;

    {
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_HeadVar__2_2);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

    {
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_HeadVar__2_2);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

    {
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_2);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word transform_hlds__constraint__Constraints0_3,
  MR_Word transform_hlds__constraint__ConstrainedGoals0_4,
  MR_Word * transform_hlds__constraint__ConstrainedGoals_5,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__constraint__succeeded;

        if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__constraint__TypeCtorInfo_111_111;
            MR_Word transform_hlds__constraint__Constraints1_13;
            MR_Word transform_hlds__constraint__NewConstrainedGoals_14;

            {
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_13);
            }
            transform_hlds__constraint__TypeCtorInfo_111_111 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0;
            {
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeCtorInfo_111_111, (MR_Word) &transform_hlds__constraint_scalar_common_2[3], transform_hlds__constraint__Constraints1_13, &transform_hlds__constraint__NewConstrainedGoals_14);
            }
            {
              *transform_hlds__constraint__ConstrainedGoals_5 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeCtorInfo_111_111, transform_hlds__constraint__NewConstrainedGoals_14, transform_hlds__constraint__ConstrainedGoals0_4);
            }
            *transform_hlds__constraint__STATE_VARIABLE_Info_7 = transform_hlds__constraint__STATE_VARIABLE_Info_0_6;
          }
        else
          {
            MR_Word transform_hlds__constraint__Conjunct_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__RevConjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_19, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__ChangedVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_19, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__OutputVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_19, (MR_Integer) 2)));
            MR_Word transform_hlds__constraint__IncompatibleInstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_19, (MR_Integer) 3)));
            MR_Word transform_hlds__constraint__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__NonLocals_31;
            MR_Word transform_hlds__constraint__CI_ModuleInfo0_32;
            MR_Word transform_hlds__constraint__GoalCanLoopOrThrow_33;
            MR_Word transform_hlds__constraint__CI_ModuleInfo_34;
            MR_Word transform_hlds__constraint__ConstrainedGoals1_36;
            MR_Word transform_hlds__constraint__Constraints1_38;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_61_61;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_70_70;
            MR_Word transform_hlds__constraint__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__Var_94;
            MR_Word transform_hlds__constraint__Var_95;
            MR_Word transform_hlds__constraint__Var_96;
            MR_Word transform_hlds__constraint__Var_97;
            MR_Word transform_hlds__constraint__Var_99;
            MR_Word transform_hlds__constraint__Var_100;
            MR_Word transform_hlds__constraint__Var_101;
            MR_Word transform_hlds__constraint__Var_102;
            MR_Word transform_hlds__constraint__Var_98;
            MR_Word transform_hlds__constraint__TypeCtorInfo_112_112;
            MR_Word transform_hlds__constraint__Detism_35;
            MR_Word transform_hlds__constraint__Var_62;

            {
              transform_hlds__constraint__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__GoalInfo_30);
            }
            transform_hlds__constraint__CI_ModuleInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
            transform_hlds__constraint__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
            transform_hlds__constraint__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
            transform_hlds__constraint__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
            transform_hlds__constraint__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
            {
              hlds__goal_form__goal_can_loop_or_throw_4_p_0(transform_hlds__constraint__Goal_25, &transform_hlds__constraint__GoalCanLoopOrThrow_33, transform_hlds__constraint__CI_ModuleInfo0_32, &transform_hlds__constraint__CI_ModuleInfo_34);
            }
            transform_hlds__constraint__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
            transform_hlds__constraint__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
            transform_hlds__constraint__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
            transform_hlds__constraint__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
            transform_hlds__constraint__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
            {
              transform_hlds__constraint__STATE_VARIABLE_Info_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_61_61, 0) = ((MR_Box) (transform_hlds__constraint__CI_ModuleInfo_34));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_61_61, 1) = ((MR_Box) (transform_hlds__constraint__Var_99));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_61_61, 2) = ((MR_Box) (transform_hlds__constraint__Var_100));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_61_61, 3) = ((MR_Box) (transform_hlds__constraint__Var_101));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_61_61, 4) = ((MR_Box) (transform_hlds__constraint__Var_102));
            }
            {
              transform_hlds__constraint__Detism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_30);
            }
            switch (transform_hlds__constraint__Detism_35) {
              default:
                transform_hlds__constraint__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 7:
                transform_hlds__constraint__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                transform_hlds__constraint__succeeded = MR_TRUE;
                break;
            }
            if (transform_hlds__constraint__succeeded)
              {
                transform_hlds__constraint__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  transform_hlds__constraint__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_112_112, transform_hlds__constraint__OutputVars_27);
                }
                if (transform_hlds__constraint__succeeded)
                  {
                    {
                      transform_hlds__constraint__Var_62 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_30);
                    }
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_62 == (MR_Integer) 0);
                    if (transform_hlds__constraint__succeeded)
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalCanLoopOrThrow_33 == (MR_Integer) 1);
                  }
              }
            if (transform_hlds__constraint__succeeded)
              {
                MR_Word transform_hlds__constraint__Constraint_37;

                transform_hlds__constraint__ConstrainedGoals1_36 = transform_hlds__constraint__ConstrainedGoals0_4;
                {
                  transform_hlds__constraint__Constraint_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_37, 0) = ((MR_Box) (transform_hlds__constraint__Goal_25));
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_37, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_26));
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_37, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_28));
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__constraint__Constraints1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_38, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_37));
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_38, 1) = ((MR_Box) (transform_hlds__constraint__Constraints0_3));
                }
                transform_hlds__constraint__STATE_VARIABLE_Info_70_70 = transform_hlds__constraint__STATE_VARIABLE_Info_61_61;
              }
            else
              {
                MR_Word transform_hlds__constraint__ConstructVar_45;
                MR_Word transform_hlds__constraint__Unify_42;
                MR_Word transform_hlds__constraint__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 0)));
                MR_Word transform_hlds__constraint__Var_66;
                MR_Word transform_hlds__constraint__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 1)));
                MR_Word transform_hlds__constraint__Var_39;
                MR_Word transform_hlds__constraint__Var_40;
                MR_Word transform_hlds__constraint__Var_41;
                MR_Word transform_hlds__constraint__Var_43;
                MR_Word transform_hlds__constraint__Var_46;
                MR_Word transform_hlds__constraint__Var_47;
                MR_Word transform_hlds__constraint__Var_48;
                MR_Word transform_hlds__constraint__Var_49;
                MR_Word transform_hlds__constraint__Var_50;

                transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Var_65)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__constraint__succeeded)
                  {
                    transform_hlds__constraint__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_65, (MR_Integer) 0)));
                    transform_hlds__constraint__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_65, (MR_Integer) 1)));
                    transform_hlds__constraint__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_65, (MR_Integer) 2)));
                    transform_hlds__constraint__Unify_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_65, (MR_Integer) 3)));
                    transform_hlds__constraint__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_65, (MR_Integer) 4)));
                    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Unify_42)) == (MR_mktag((MR_Integer) 0)));
                    if (transform_hlds__constraint__succeeded)
                      {
                        transform_hlds__constraint__ConstructVar_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 0)));
                        transform_hlds__constraint__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 1)));
                        transform_hlds__constraint__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 2)));
                        transform_hlds__constraint__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 3)));
                        transform_hlds__constraint__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 4)));
                        transform_hlds__constraint__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 5)));
                        transform_hlds__constraint__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_42, (MR_Integer) 6)));
                        transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (transform_hlds__constraint__succeeded)
                  {
                    MR_Word transform_hlds__constraint__Var_67;
                    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_69_69;
                    MR_Word transform_hlds__constraint__Var_103;
                    MR_Word transform_hlds__constraint__Var_104;
                    MR_Word transform_hlds__constraint__Var_105;
                    MR_Word transform_hlds__constraint__Var_106;
                    MR_Word transform_hlds__constraint__Var_107;

                    {
                      transform_hlds__constraint__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_67, 0) = ((MR_Box) (transform_hlds__constraint__Goal_25));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      transform_hlds__constraint__ConstrainedGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 0) = ((MR_Box) (transform_hlds__constraint__Var_67));
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 1) = ((MR_Box) (transform_hlds__constraint__ConstrainedGoals0_4));
                    }
                    {
                      transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_45, transform_hlds__constraint__Goal_25, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_38, transform_hlds__constraint__STATE_VARIABLE_Info_61_61, &transform_hlds__constraint__STATE_VARIABLE_Info_69_69);
                    }
                    transform_hlds__constraint__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_69_69, (MR_Integer) 0)));
                    transform_hlds__constraint__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_69_69, (MR_Integer) 1)));
                    transform_hlds__constraint__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_69_69, (MR_Integer) 2)));
                    transform_hlds__constraint__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_69_69, (MR_Integer) 3)));
                    transform_hlds__constraint__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_69_69, (MR_Integer) 4)));
                    {
                      transform_hlds__constraint__STATE_VARIABLE_Info_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_70_70, 0) = ((MR_Box) (transform_hlds__constraint__Var_103));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_70_70, 1) = ((MR_Box) (transform_hlds__constraint__Var_104));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_70_70, 2) = ((MR_Box) (transform_hlds__constraint__Var_105));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_70_70, 3) = ((MR_Box) (transform_hlds__constraint__Var_106));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_70_70, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                  }
                else
                  {
                    MR_Word transform_hlds__constraint__Detism_87;
                    MR_Word transform_hlds__constraint__Var_121;
                    MR_Word transform_hlds__constraint__Var_51;

                    {
                      transform_hlds__constraint__Detism_87 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_30);
                    }
                    {
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__constraint__Detism_87, &transform_hlds__constraint__Var_51, &transform_hlds__constraint__Var_121);
                    }
                    transform_hlds__constraint__succeeded = ((MR_Integer) 0 == transform_hlds__constraint__Var_121);
                    if (transform_hlds__constraint__succeeded)
                      {
                        MR_Word transform_hlds__constraint__Var_74;

                        {
                          transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints0_3, transform_hlds__constraint__STATE_VARIABLE_Info_61_61, &transform_hlds__constraint__STATE_VARIABLE_Info_70_70);
                        }
                        transform_hlds__constraint__Constraints1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          transform_hlds__constraint__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_74, 0) = ((MR_Box) (transform_hlds__constraint__Goal_25));
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__constraint__ConstrainedGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 0) = ((MR_Box) (transform_hlds__constraint__Var_74));
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 1) = ((MR_Box) (transform_hlds__constraint__ConstrainedGoals0_4));
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__constraint__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 1)));
                        MR_Word transform_hlds__constraint__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_25, (MR_Integer) 0)));

                        {
                          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__constraint__GoalInfo_30, transform_hlds__constraint__Var_122);
                        }
                        if (transform_hlds__constraint__succeeded)
                          {
                            {
                              MR_Word transform_hlds__constraint__Var_77;

                              {
                                transform_hlds__constraint__Var_77 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_30);
                              }
                              transform_hlds__constraint__succeeded = (transform_hlds__constraint__Var_77 == (MR_Integer) 2);
                            }
                            if (!(transform_hlds__constraint__succeeded))
                              {
                                {
                                  transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo_30, (MR_Integer) 18);
                                }
                              }
                          }
                        if (transform_hlds__constraint__succeeded)
                          {
                            MR_Word transform_hlds__constraint__TypeCtorInfo_116_116;
                            MR_Word transform_hlds__constraint__ConstraintGoals_53;
                            MR_Word transform_hlds__constraint__NewConstrainedGoals_54;
                            MR_Word transform_hlds__constraint__Var_79;

                            transform_hlds__constraint__Constraints1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__ConstraintGoals_53);
                            }
                            {
                              transform_hlds__constraint__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_79, 0) = ((MR_Box) (transform_hlds__constraint__Goal_25));
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_79, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_53));
                            }
                            transform_hlds__constraint__TypeCtorInfo_116_116 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0;
                            {
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeCtorInfo_116_116, (MR_Word) &transform_hlds__constraint_scalar_common_2[4], transform_hlds__constraint__Var_79, &transform_hlds__constraint__NewConstrainedGoals_54);
                            }
                            {
                              transform_hlds__constraint__ConstrainedGoals1_36 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeCtorInfo_116_116, transform_hlds__constraint__NewConstrainedGoals_54, transform_hlds__constraint__ConstrainedGoals0_4);
                            }
                          }
                        else
                          {
                            MR_Word transform_hlds__constraint__Globals_55;
                            MR_Word transform_hlds__constraint__Var_80;
                            MR_Word transform_hlds__constraint__Var_81;

                            {
                              transform_hlds__constraint__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(transform_hlds__constraint__ModuleInfo_1, transform_hlds__constraint__Goal_25);
                            }
                            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
                            if (transform_hlds__constraint__succeeded)
                              {
                                {
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__constraint__ModuleInfo_1, &transform_hlds__constraint__Globals_55);
                                }
                                transform_hlds__constraint__Var_80 = (MR_Integer) 176;
                                transform_hlds__constraint__Var_81 = (MR_Integer) 1;
                                {
                                  transform_hlds__constraint__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__constraint__Globals_55, transform_hlds__constraint__Var_80, transform_hlds__constraint__Var_81);
                                }
                              }
                            if (transform_hlds__constraint__succeeded)
                              {
                                MR_Word transform_hlds__constraint__TypeCtorInfo_120_120;
                                MR_Word transform_hlds__constraint__DependentConstraints_56;
                                MR_Word transform_hlds__constraint__IndependentConstraints_57;
                                MR_Word transform_hlds__constraint__IndependentConstraintGoals_58;
                                MR_Word transform_hlds__constraint__Var_83;
                                MR_Word transform_hlds__constraint__Var_84;
                                MR_Word transform_hlds__constraint__NewConstrainedGoals_88;

                                {
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_31, transform_hlds__constraint__ChangedVars_26, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_56, &transform_hlds__constraint__IndependentConstraints_57);
                                }
                                {
                                  transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__IndependentConstraints_57, &transform_hlds__constraint__IndependentConstraintGoals_58);
                                }
                                transform_hlds__constraint__TypeCtorInfo_120_120 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_goal_0;
                                {
                                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeCtorInfo_120_120, (MR_Word) &transform_hlds__constraint_scalar_common_2[5], transform_hlds__constraint__IndependentConstraintGoals_58, &transform_hlds__constraint__NewConstrainedGoals_88);
                                }
                                {
                                  transform_hlds__constraint__Var_84 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_25, transform_hlds__constraint__DependentConstraints_56);
                                }
                                {
                                  transform_hlds__constraint__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_83, 0) = ((MR_Box) (transform_hlds__constraint__Var_84));
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Var_83, 1) = ((MR_Box) (transform_hlds__constraint__NewConstrainedGoals_88));
                                }
                                {
                                  transform_hlds__constraint__ConstrainedGoals1_36 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeCtorInfo_120_120, transform_hlds__constraint__Var_83, transform_hlds__constraint__ConstrainedGoals0_4);
                                }
                                transform_hlds__constraint__Constraints1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              }
                            else
                              {
                                MR_Word transform_hlds__constraint__Var_85;
                                MR_Word transform_hlds__constraint__DependentConstraints_89;

                                {
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_31, transform_hlds__constraint__OutputVars_27, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_89, &transform_hlds__constraint__Constraints1_38);
                                }
                                {
                                  transform_hlds__constraint__Var_85 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_25, transform_hlds__constraint__DependentConstraints_89);
                                }
                                {
                                  transform_hlds__constraint__ConstrainedGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 0) = ((MR_Box) (transform_hlds__constraint__Var_85));
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__ConstrainedGoals1_36, 1) = ((MR_Box) (transform_hlds__constraint__ConstrainedGoals0_4));
                                }
                              }
                          }
                        transform_hlds__constraint__STATE_VARIABLE_Info_70_70 = transform_hlds__constraint__STATE_VARIABLE_Info_61_61;
                      }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__constraint__next_value_of_HeadVar__2_2 = transform_hlds__constraint__RevConjuncts0_20;
              MR_Word transform_hlds__constraint__next_value_of_Constraints0_3 = transform_hlds__constraint__Constraints1_38;
              MR_Word transform_hlds__constraint__next_value_of_ConstrainedGoals0_4 = transform_hlds__constraint__ConstrainedGoals1_36;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__STATE_VARIABLE_Info_70_70;

              transform_hlds__constraint__STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_Info_0_6;
              transform_hlds__constraint__ConstrainedGoals0_4 = transform_hlds__constraint__next_value_of_ConstrainedGoals0_4;
              transform_hlds__constraint__Constraints0_3 = transform_hlds__constraint__next_value_of_Constraints0_3;
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__356__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

    {
      transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__342__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
    return transform_hlds__constraint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
  MR_Word transform_hlds__constraint__HeadVar__1_1,
  MR_Word transform_hlds__constraint__ModuleInfo_2,
  MR_Word transform_hlds__constraint__VarTypes_3,
  MR_Word transform_hlds__constraint__InstMap0_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__constraint__succeeded;

        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_6 = transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_0_5;
        else
          {
            MR_Word transform_hlds__constraint__TypeCtorInfo_54_54;
            MR_Word transform_hlds__constraint__TypeInfo_55_55;
            MR_Word transform_hlds__constraint__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__InstMapDelta_21;
            MR_Word transform_hlds__constraint__InstMap_22;
            MR_Word transform_hlds__constraint__ChangedVars0_23;
            MR_Word transform_hlds__constraint__InstMapVars_24;
            MR_Word transform_hlds__constraint__InCompatible_25;
            MR_Word transform_hlds__constraint__IncompatibleInstVars_30;
            MR_Word transform_hlds__constraint__Bound_31;
            MR_Word transform_hlds__constraint__BoundVars_32;
            MR_Word transform_hlds__constraint__ChangedVars_33;
            MR_Word transform_hlds__constraint__AnnotatedConjunct_34;
            MR_Word transform_hlds__constraint__Var_38;
            MR_Word transform_hlds__constraint__Var_40;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_41_41;
            MR_Word transform_hlds__constraint__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 0)));

            {
              transform_hlds__constraint__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_20);
            }
            {
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMapDelta_21, &transform_hlds__constraint__InstMap_22);
            }
            {
              hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMap_22, transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__ModuleInfo_2, &transform_hlds__constraint__ChangedVars0_23);
            }
            {
              hlds__instmap__instmap_vars_list_2_p_0(transform_hlds__constraint__InstMap_22, &transform_hlds__constraint__InstMapVars_24);
            }
            {
              transform_hlds__constraint__InCompatible_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
            }
            transform_hlds__constraint__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            transform_hlds__constraint__TypeInfo_55_55 = (MR_Word) &transform_hlds__constraint_scalar_common_1[1];
            {
              transform_hlds__constraint__Var_38 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__InCompatible_25, transform_hlds__constraint__InstMapVars_24);
            }
            {
              transform_hlds__constraint__IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__Var_38);
            }
            {
              transform_hlds__constraint__Bound_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
            }
            {
              transform_hlds__constraint__Var_40 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__Bound_31, transform_hlds__constraint__InstMapVars_24);
            }
            {
              transform_hlds__constraint__BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__Var_40);
            }
            {
              parse_tree__set_of_var__union_3_p_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__ChangedVars0_23, transform_hlds__constraint__BoundVars_32, &transform_hlds__constraint__ChangedVars_33);
            }
            {
              transform_hlds__constraint__AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 2) = ((MR_Box) (transform_hlds__constraint__BoundVars_32));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 3) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_30));
            }
            {
              transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_41_41, 0) = ((MR_Box) (transform_hlds__constraint__AnnotatedConjunct_34));
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_41_41, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_0_5));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__constraint__next_value_of_HeadVar__1_1 = transform_hlds__constraint__Goals_14;
              MR_Word transform_hlds__constraint__next_value_of_InstMap0_4 = transform_hlds__constraint__InstMap_22;
              MR_Word transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevAnnotatedGoals_0_5 = transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_41_41;

              transform_hlds__constraint__STATE_VARIABLE_RevAnnotatedGoals_0_5 = transform_hlds__constraint__next_value_of_STATE_VARIABLE_RevAnnotatedGoals_0_5;
              transform_hlds__constraint__InstMap0_4 = transform_hlds__constraint__next_value_of_InstMap0_4;
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_GoalCord_4;

    {
      transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_GoalCord_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_GoalCord_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goals0_7,
  MR_Word * transform_hlds__constraint__Goals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_19)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;

    if ((transform_hlds__constraint__Constraints_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = transform_hlds__constraint__STATE_VARIABLE_Info_0_18;
    else
      {
        MR_Word transform_hlds__constraint__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));

        {
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__Var_49));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__Var_50));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__Var_51));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__Var_52));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) ((MR_Integer) 1));
        }
      }
    if ((transform_hlds__constraint__Goals0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__constraint__GoalCords_56;

        {
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[0], (MR_Word) &transform_hlds__constraint_scalar_common_2[2], transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__GoalCords_56);
        }
        {
          *transform_hlds__constraint__Goals_8 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalCords_56);
        }
        *transform_hlds__constraint__STATE_VARIABLE_Info_19 = transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
      }
    else
      {
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_7, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__GoalsTail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_7, (MR_Integer) 1)));

        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__constraint__succeeded)
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__constraint__succeeded)
          {
            {
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal0_10, transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, transform_hlds__constraint__STATE_VARIABLE_Info_19);
            }
          }
        else
          {
            MR_Word transform_hlds__constraint__TypeCtorInfo_40_40;
            MR_Word transform_hlds__constraint__InstMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, (MR_Integer) 3)));
            MR_Word transform_hlds__constraint__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__RevAnnotatedGoals1_15;
            MR_Word transform_hlds__constraint__AnnotatedGoals2_16;
            MR_Word transform_hlds__constraint__GoalsCord_17;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_25_25;
            MR_Word transform_hlds__constraint__Var_26;
            MR_Word transform_hlds__constraint__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, (MR_Integer) 2)));
            MR_Word transform_hlds__constraint__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, (MR_Integer) 4)));

            {
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_7, transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__VarTypes_14, transform_hlds__constraint__InstMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevAnnotatedGoals1_15);
            }
            {
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__RevAnnotatedGoals1_15, transform_hlds__constraint__Constraints_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__AnnotatedGoals2_16, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, &transform_hlds__constraint__STATE_VARIABLE_Info_25_25);
            }
            transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              transform_hlds__constraint__Var_26 = mercury__cord__init_0_f_0(transform_hlds__constraint__TypeCtorInfo_40_40);
            }
            {
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__AnnotatedGoals2_16, transform_hlds__constraint__Var_26, &transform_hlds__constraint__GoalsCord_17, transform_hlds__constraint__STATE_VARIABLE_Info_25_25, transform_hlds__constraint__STATE_VARIABLE_Info_19);
            }
            {
              *transform_hlds__constraint__Goals_8 = mercury__cord__list_1_f_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__GoalsCord_17);
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
  MR_Word transform_hlds__constraint__Var_1,
  MR_Word transform_hlds__constraint__Constraints_2,
  MR_Word transform_hlds__constraint__HeadVar__3_3,
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word transform_hlds__constraint__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Case_16;
        MR_Word transform_hlds__constraint__Cases_17;
        MR_Word transform_hlds__constraint__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Goal_23;
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_28_28;
        MR_Word transform_hlds__constraint__InstMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__ModuleInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Type_48;
        MR_Word transform_hlds__constraint__InstMap_49;
        MR_Word transform_hlds__constraint__ModuleInfo_50;
        MR_Word transform_hlds__constraint__Var_66;
        MR_Word transform_hlds__constraint__Var_67;
        MR_Word transform_hlds__constraint__Var_69;
        MR_Word transform_hlds__constraint__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
        MR_Word transform_hlds__constraint__Var_65;
        MR_Word transform_hlds__constraint__Var_68;
        MR_Word transform_hlds__constraint__Var_34;
        MR_Word transform_hlds__constraint__Var_35;
        MR_Word transform_hlds__constraint__Var_36;
        MR_Word transform_hlds__constraint__Var_38;
        MR_Word transform_hlds__constraint__Var_37;

        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_47, transform_hlds__constraint__Var_1, &transform_hlds__constraint__Type_48);
        }
        {
          hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Type_48, transform_hlds__constraint__MainConsId_19, transform_hlds__constraint__OtherConsIds_20, transform_hlds__constraint__InstMap0_45, &transform_hlds__constraint__InstMap_49, transform_hlds__constraint__ModuleInfo0_46, &transform_hlds__constraint__ModuleInfo_50);
        }
        transform_hlds__constraint__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        transform_hlds__constraint__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        transform_hlds__constraint__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        transform_hlds__constraint__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        transform_hlds__constraint__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
        {
          transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_50));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__Var_66));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__Var_67));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_49));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__Var_69));
        }
        {
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Goal0_21, &transform_hlds__constraint__Goal_23, transform_hlds__constraint__STATE_VARIABLE_Info_26_26, &transform_hlds__constraint__STATE_VARIABLE_Info_27_27);
        }
        transform_hlds__constraint__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
        transform_hlds__constraint__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
        transform_hlds__constraint__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
        transform_hlds__constraint__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
        transform_hlds__constraint__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
        {
          transform_hlds__constraint__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (transform_hlds__constraint__Var_34));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (transform_hlds__constraint__Var_35));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (transform_hlds__constraint__Var_36));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_45));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (transform_hlds__constraint__Var_38));
        }
        {
          transform_hlds__constraint__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_19));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_20));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 2) = ((MR_Box) (transform_hlds__constraint__Goal_23));
        }
        {
          transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Cases0_15, &transform_hlds__constraint__Cases_17, transform_hlds__constraint__STATE_VARIABLE_Info_28_28, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__constraint__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Case_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Cases_17));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_1,
  MR_Word transform_hlds__constraint__HeadVar__2_2,
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word transform_hlds__constraint__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Goal_13;
        MR_Word transform_hlds__constraint__Goals_14;
        MR_Word transform_hlds__constraint__InstMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
        MR_Word transform_hlds__constraint__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
        MR_Word transform_hlds__constraint__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
        MR_Word transform_hlds__constraint__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
        MR_Word transform_hlds__constraint__Var_26;
        MR_Word transform_hlds__constraint__Var_27;
        MR_Word transform_hlds__constraint__Var_28;
        MR_Word transform_hlds__constraint__Var_30;
        MR_Word transform_hlds__constraint__Var_29;

        {
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_1, transform_hlds__constraint__Goal0_11, &transform_hlds__constraint__Goal_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_4, &transform_hlds__constraint__STATE_VARIABLE_Info_19_19);
        }
        transform_hlds__constraint__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
        transform_hlds__constraint__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
        transform_hlds__constraint__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
        transform_hlds__constraint__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
        transform_hlds__constraint__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
        {
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__Var_26));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__Var_27));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__Var_28));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_16));
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (transform_hlds__constraint__Var_30));
        }
        {
          transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Constraints_1, transform_hlds__constraint__Goals0_12, &transform_hlds__constraint__Goals_14, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, transform_hlds__constraint__STATE_VARIABLE_Info_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__constraint__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Goals_14));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__constraint__constraint_goals_to_cord_2_p_0(
  MR_Word transform_hlds__constraint__Constraint_3,
  MR_Word * transform_hlds__constraint__GoalCord_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__TypeCtorInfo_10_10 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word transform_hlds__constraint__ConstraintGoal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_3, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__ConstructGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_3, (MR_Integer) 3)));
    MR_Word transform_hlds__constraint__Var_9;
    MR_Word transform_hlds__constraint__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_3, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_3, (MR_Integer) 2)));

    {
      transform_hlds__constraint__Var_9 = mercury__cord__from_list_1_f_0(transform_hlds__constraint__TypeCtorInfo_10_10, transform_hlds__constraint__ConstructGoals_8);
    }
    {
      *transform_hlds__constraint__GoalCord_4 = mercury__cord__snoc_2_f_0(transform_hlds__constraint__TypeCtorInfo_10_10, transform_hlds__constraint__Var_9, ((MR_Box) (transform_hlds__constraint__ConstraintGoal_5)));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
  MR_Box transform_hlds__constraint__closure_arg,
  MR_Box transform_hlds__constraint__wrapper_arg_1,
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
    MR_Word transform_hlds__constraint__conv0_GoalCord_4;

    {
      transform_hlds__constraint__constraint_goals_to_cord_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_GoalCord_4);
    }
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_GoalCord_4));
  }
}

static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
  MR_Word transform_hlds__constraint__Constraints0_3,
  MR_Word * transform_hlds__constraint__Goals_4)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalCords_5;

    {
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[0], (MR_Word) &transform_hlds__constraint_scalar_common_2[1], transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__GoalCords_5);
    }
    {
      *transform_hlds__constraint__Goals_4 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalCords_5);
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__FinalGoals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_82,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_83)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__constraint__NegGoal0_56 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_10), (MR_Integer) 0);
          MR_Word transform_hlds__constraint__NegGoal_57;
          MR_Word transform_hlds__constraint__Var_90;
          MR_Word transform_hlds__constraint__Var_91;
          MR_Word transform_hlds__constraint__ConstraintGoals_143;

          {
            transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__NegGoal0_56, &transform_hlds__constraint__NegGoal_57, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
          }
          {
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_143);
          }
          transform_hlds__constraint__Var_91 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__NegGoal_57);
          {
            transform_hlds__constraint__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_90, 0) = ((MR_Box) (transform_hlds__constraint__Var_91));
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_90, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__constraint__FinalGoals_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_90));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_143));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__constraint__ConstraintGoals_144;

          {
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_144);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__constraint__FinalGoals_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal0_7));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_144));
          }
          *transform_hlds__constraint__STATE_VARIABLE_Info_83 = transform_hlds__constraint__STATE_VARIABLE_Info_0_82;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__constraint__ConstraintGoals_144;

              {
                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_144);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__constraint__FinalGoals_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal0_7));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_144));
              }
              *transform_hlds__constraint__STATE_VARIABLE_Info_83 = transform_hlds__constraint__STATE_VARIABLE_Info_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__constraint__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 2)));

              switch (transform_hlds__constraint__ConjType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__constraint__MoreGoals_15;
                    MR_Word transform_hlds__constraint__Var_131;
                    MR_Word transform_hlds__constraint__Var_132;
                    MR_Word transform_hlds__constraint__Goals_137;

                    {
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__MoreGoals_15);
                    }
                    {
                      transform_hlds__constraint__propagate_in_independent_goals_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals0_13, &transform_hlds__constraint__Goals_137, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                    }
                    {
                      transform_hlds__constraint__Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_132, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_12));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_132, 2) = ((MR_Box) (transform_hlds__constraint__Goals_137));
                    }
                    {
                      transform_hlds__constraint__Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_131, 0) = ((MR_Box) (transform_hlds__constraint__Var_132));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_131, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__constraint__FinalGoals_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_131));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__MoreGoals_15));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__constraint__Goals_14;
                    MR_Word transform_hlds__constraint__Var_134;
                    MR_Word transform_hlds__constraint__Var_135;

                    {
                      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Goals0_13, &transform_hlds__constraint__Goals_14, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                    }
                    {
                      transform_hlds__constraint__Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_135, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_12));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_135, 2) = ((MR_Box) (transform_hlds__constraint__Goals_14));
                    }
                    {
                      transform_hlds__constraint__Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_134, 0) = ((MR_Box) (transform_hlds__constraint__Var_135));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_134, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__constraint__FinalGoals_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_134));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__constraint__Var_126;
              MR_Word transform_hlds__constraint__Var_127;
              MR_Word transform_hlds__constraint__Goals0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__Goals_139;

              {
                transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Goals0_138, &transform_hlds__constraint__Goals_139, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
              }
              {
                transform_hlds__constraint__Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_127, 1) = ((MR_Box) (transform_hlds__constraint__Goals_139));
              }
              {
                transform_hlds__constraint__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_126, 0) = ((MR_Box) (transform_hlds__constraint__Var_127));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_126, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__constraint__FinalGoals_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_126));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__constraint__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 3)));
              MR_Word transform_hlds__constraint__Cases_19;
              MR_Word transform_hlds__constraint__Var_122;
              MR_Word transform_hlds__constraint__Var_123;

              {
                transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_16, transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Cases0_18, &transform_hlds__constraint__Cases_19, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
              }
              {
                transform_hlds__constraint__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_123, 1) = ((MR_Box) (transform_hlds__constraint__Var_16));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_123, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_17));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_123, 3) = ((MR_Box) (transform_hlds__constraint__Cases_19));
              }
              {
                transform_hlds__constraint__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_122, 0) = ((MR_Box) (transform_hlds__constraint__Var_123));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_122, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__constraint__FinalGoals_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_122));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__constraint__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__SubGoal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) transform_hlds__constraint__Reason_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__constraint__Var_105;
                    MR_Word transform_hlds__constraint__Var_106;
                    MR_Word transform_hlds__constraint__SubGoal_140;

                    {
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_140, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                    }
                    {
                      transform_hlds__constraint__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_106, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_106, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_140));
                    }
                    {
                      transform_hlds__constraint__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_105, 0) = ((MR_Box) (transform_hlds__constraint__Var_106));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_105, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__constraint__FinalGoals_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_105));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__constraint__SubGoal_32;
                    MR_Word transform_hlds__constraint__Var_109;
                    MR_Word transform_hlds__constraint__Var_110;

                    {
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_32, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                    }
                    {
                      transform_hlds__constraint__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_110, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_110, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_32));
                    }
                    {
                      transform_hlds__constraint__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_109, 0) = ((MR_Box) (transform_hlds__constraint__Var_110));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_109, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__constraint__FinalGoals_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_109));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__constraint__ConstraintGoals_49;
                    MR_Word transform_hlds__constraint__Var_100;
                    MR_Word transform_hlds__constraint__Var_101;
                    MR_Word transform_hlds__constraint__SubGoal_141;

                    {
                      transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_141, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                    }
                    {
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_49);
                    }
                    {
                      transform_hlds__constraint__Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_141));
                    }
                    {
                      transform_hlds__constraint__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_100, 0) = ((MR_Box) (transform_hlds__constraint__Var_101));
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_100, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__constraint__FinalGoals_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_100));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_49));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_28, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      {
                        MR_Word transform_hlds__constraint__ConstraintGoals_49;
                        MR_Word transform_hlds__constraint__Var_100;
                        MR_Word transform_hlds__constraint__Var_101;
                        MR_Word transform_hlds__constraint__SubGoal_141;

                        {
                          transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_141, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                        }
                        {
                          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_49);
                        }
                        {
                          transform_hlds__constraint__Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_101, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_141));
                        }
                        {
                          transform_hlds__constraint__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_100, 0) = ((MR_Box) (transform_hlds__constraint__Var_101));
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_100, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *transform_hlds__constraint__FinalGoals_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_100));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_49));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word transform_hlds__constraint__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_28, (MR_Integer) 2)));
                        MR_Word transform_hlds__constraint__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_28, (MR_Integer) 1)));

                        switch (transform_hlds__constraint__Var_175) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word transform_hlds__constraint__ConstraintGoals_142;

                              {
                                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__ConstraintGoals_142);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *transform_hlds__constraint__FinalGoals_8 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal0_7));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_142));
                              }
                              *transform_hlds__constraint__STATE_VARIABLE_Info_83 = transform_hlds__constraint__STATE_VARIABLE_Info_0_82;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word transform_hlds__constraint__Var_154;
                              MR_Word transform_hlds__constraint__Var_155;
                              MR_Word transform_hlds__constraint__SubGoal_157;

                              {
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_157, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                              }
                              {
                                transform_hlds__constraint__Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_155, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_155, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_157));
                              }
                              {
                                transform_hlds__constraint__Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_154, 0) = ((MR_Box) (transform_hlds__constraint__Var_155));
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_154, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *transform_hlds__constraint__FinalGoals_8 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_154));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word transform_hlds__constraint__Var_158;
                              MR_Word transform_hlds__constraint__Var_159;
                              MR_Word transform_hlds__constraint__SubGoal_161;

                              {
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__SubGoal0_29, &transform_hlds__constraint__SubGoal_161, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, transform_hlds__constraint__STATE_VARIABLE_Info_83);
                              }
                              {
                                transform_hlds__constraint__Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_159, 1) = ((MR_Box) (transform_hlds__constraint__Reason_28));
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_159, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_161));
                              }
                              {
                                transform_hlds__constraint__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_158, 0) = ((MR_Box) (transform_hlds__constraint__Var_159));
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_158, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *transform_hlds__constraint__FinalGoals_8 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_158));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_Word transform_hlds__constraint__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 3)));
              MR_Word transform_hlds__constraint__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_10, (MR_Integer) 4)));
              MR_Word transform_hlds__constraint__InstMap0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_82, (MR_Integer) 3)));
              MR_Word transform_hlds__constraint__Cond_25;
              MR_Word transform_hlds__constraint__Then_26;
              MR_Word transform_hlds__constraint__Else_27;
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_113_113;
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_114_114;
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_115_115;
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_116_116;
              MR_Word transform_hlds__constraint__Var_118;
              MR_Word transform_hlds__constraint__Var_119;
              MR_Word transform_hlds__constraint__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_82, (MR_Integer) 0)));
              MR_Word transform_hlds__constraint__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_82, (MR_Integer) 1)));
              MR_Word transform_hlds__constraint__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_82, (MR_Integer) 2)));
              MR_Word transform_hlds__constraint__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_82, (MR_Integer) 4)));
              MR_Word transform_hlds__constraint__Var_149;
              MR_Word transform_hlds__constraint__Var_150;
              MR_Word transform_hlds__constraint__Var_151;
              MR_Word transform_hlds__constraint__Var_153;
              MR_Word transform_hlds__constraint__Var_152;

              {
                transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Cond0_21, &transform_hlds__constraint__Cond_25, transform_hlds__constraint__STATE_VARIABLE_Info_0_82, &transform_hlds__constraint__STATE_VARIABLE_Info_113_113);
              }
              {
                transform_hlds__constraint__constraint_info_update_goal_3_p_0(transform_hlds__constraint__Cond_25, transform_hlds__constraint__STATE_VARIABLE_Info_113_113, &transform_hlds__constraint__STATE_VARIABLE_Info_114_114);
              }
              {
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Then0_22, &transform_hlds__constraint__Then_26, transform_hlds__constraint__STATE_VARIABLE_Info_114_114, &transform_hlds__constraint__STATE_VARIABLE_Info_115_115);
              }
              transform_hlds__constraint__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_115_115, (MR_Integer) 0)));
              transform_hlds__constraint__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_115_115, (MR_Integer) 1)));
              transform_hlds__constraint__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_115_115, (MR_Integer) 2)));
              transform_hlds__constraint__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_115_115, (MR_Integer) 3)));
              transform_hlds__constraint__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_115_115, (MR_Integer) 4)));
              {
                transform_hlds__constraint__STATE_VARIABLE_Info_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_116_116, 0) = ((MR_Box) (transform_hlds__constraint__Var_149));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_116_116, 1) = ((MR_Box) (transform_hlds__constraint__Var_150));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_116_116, 2) = ((MR_Box) (transform_hlds__constraint__Var_151));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_116_116, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_24));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_116_116, 4) = ((MR_Box) (transform_hlds__constraint__Var_153));
              }
              {
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Else0_23, &transform_hlds__constraint__Else_27, transform_hlds__constraint__STATE_VARIABLE_Info_116_116, transform_hlds__constraint__STATE_VARIABLE_Info_83);
              }
              {
                transform_hlds__constraint__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_119, 1) = ((MR_Box) (transform_hlds__constraint__Vars_20));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_119, 2) = ((MR_Box) (transform_hlds__constraint__Cond_25));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_119, 3) = ((MR_Box) (transform_hlds__constraint__Then_26));
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__Var_119, 4) = ((MR_Box) (transform_hlds__constraint__Else_27));
              }
              {
                transform_hlds__constraint__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_118, 0) = ((MR_Box) (transform_hlds__constraint__Var_119));
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__Var_118, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__constraint__FinalGoals_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_118));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__Goals_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__constraint__HasSubGoals_12;
    MR_Word transform_hlds__constraint__InstMap0_13;
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_16;
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_17;
    MR_Word transform_hlds__constraint__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__Var_19;
    MR_Word transform_hlds__constraint__Var_20;
    MR_Word transform_hlds__constraint__Var_21;
    MR_Word transform_hlds__constraint__Var_22;
    MR_Word transform_hlds__constraint__Var_23;
    MR_Word transform_hlds__constraint__Var_24;
    MR_Word transform_hlds__constraint__Var_25;
    MR_Word transform_hlds__constraint__Var_27;
    MR_Word transform_hlds__constraint__Var_26;

    {
      transform_hlds__constraint__HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_10);
    }
    switch (transform_hlds__constraint__HasSubGoals_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
        break;
      case (MR_Integer) 0:
        if ((transform_hlds__constraint__Constraints_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
        else
          {
            MR_Word transform_hlds__constraint__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
            MR_Word transform_hlds__constraint__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
            MR_Word transform_hlds__constraint__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));

            {
              transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (transform_hlds__constraint__Var_36));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (transform_hlds__constraint__Var_37));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (transform_hlds__constraint__Var_38));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (transform_hlds__constraint__Var_39));
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) ((MR_Integer) 1));
            }
          }
        break;
    }
    transform_hlds__constraint__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 0)));
    transform_hlds__constraint__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 1)));
    transform_hlds__constraint__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 2)));
    transform_hlds__constraint__InstMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 3)));
    transform_hlds__constraint__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 4)));
    {
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__Goal0_7, transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_16_16, &transform_hlds__constraint__STATE_VARIABLE_Info_17_17);
    }
    transform_hlds__constraint__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
    transform_hlds__constraint__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
    transform_hlds__constraint__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
    transform_hlds__constraint__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
    transform_hlds__constraint__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__Var_27));
    }
  }
}

static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
  MR_Word transform_hlds__constraint__Constraints_6,
  MR_Word transform_hlds__constraint__Goal0_7,
  MR_Word * transform_hlds__constraint__Goal_8,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__constraint__Features0_12;
    MR_Word transform_hlds__constraint__Context_13;
    MR_Word transform_hlds__constraint__Goals0_14;
    MR_Word transform_hlds__constraint__Goals_15;
    MR_Word transform_hlds__constraint__NonLocals_16;
    MR_Word transform_hlds__constraint__Delta_17;
    MR_Word transform_hlds__constraint__ConjDetism_18;
    MR_Word transform_hlds__constraint__Purity_19;
    MR_Word transform_hlds__constraint__GoalInfo1_20;
    MR_Word transform_hlds__constraint__GoalInfo2_21;
    MR_Word transform_hlds__constraint__GoalInfo_22;
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_41;
    MR_Word transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_7, (MR_Integer) 0)));

    {
      transform_hlds__constraint__Features0_12 = hlds__hlds_goal__goal_info_get_features_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
    {
      transform_hlds__constraint__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__constraint__Goal0_7, &transform_hlds__constraint__Goals0_14);
    }
    {
      transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints_6, transform_hlds__constraint__STATE_VARIABLE_Info_0_23, &transform_hlds__constraint__STATE_VARIABLE_Info_20_41);
    }
    if ((transform_hlds__constraint__Goals0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_6, &transform_hlds__constraint__Goals_15);
        }
        *transform_hlds__constraint__STATE_VARIABLE_Info_24 = transform_hlds__constraint__STATE_VARIABLE_Info_20_41;
      }
    else
      {
        MR_Word transform_hlds__constraint__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_14, (MR_Integer) 0)));
        MR_Word transform_hlds__constraint__GoalsTail0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_14, (MR_Integer) 1)));

        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__constraint__succeeded)
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__constraint__succeeded)
          {
            {
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal0_33, &transform_hlds__constraint__Goals_15, transform_hlds__constraint__STATE_VARIABLE_Info_20_41, transform_hlds__constraint__STATE_VARIABLE_Info_24);
            }
          }
        else
          {
            MR_Word transform_hlds__constraint__TypeCtorInfo_40_61;
            MR_Word transform_hlds__constraint__InstMap0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_41, (MR_Integer) 3)));
            MR_Word transform_hlds__constraint__ModuleInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_41, (MR_Integer) 0)));
            MR_Word transform_hlds__constraint__VarTypes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_41, (MR_Integer) 1)));
            MR_Word transform_hlds__constraint__RevAnnotatedGoals1_38;
            MR_Word transform_hlds__constraint__AnnotatedGoals2_39;
            MR_Word transform_hlds__constraint__GoalsCord_40;
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_25_46;
            MR_Word transform_hlds__constraint__Var_47;
            MR_Word transform_hlds__constraint__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_41, (MR_Integer) 2)));
            MR_Word transform_hlds__constraint__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_41, (MR_Integer) 4)));

            {
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_14, transform_hlds__constraint__ModuleInfo_36, transform_hlds__constraint__VarTypes_37, transform_hlds__constraint__InstMap0_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevAnnotatedGoals1_38);
            }
            {
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_36, transform_hlds__constraint__RevAnnotatedGoals1_38, transform_hlds__constraint__Constraints_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__AnnotatedGoals2_39, transform_hlds__constraint__STATE_VARIABLE_Info_20_41, &transform_hlds__constraint__STATE_VARIABLE_Info_25_46);
            }
            transform_hlds__constraint__TypeCtorInfo_40_61 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              transform_hlds__constraint__Var_47 = mercury__cord__init_0_f_0(transform_hlds__constraint__TypeCtorInfo_40_61);
            }
            {
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__AnnotatedGoals2_39, transform_hlds__constraint__Var_47, &transform_hlds__constraint__GoalsCord_40, transform_hlds__constraint__STATE_VARIABLE_Info_25_46, transform_hlds__constraint__STATE_VARIABLE_Info_24);
            }
            {
              transform_hlds__constraint__Goals_15 = mercury__cord__list_1_f_0(transform_hlds__constraint__TypeCtorInfo_40_61, transform_hlds__constraint__GoalsCord_40);
            }
          }
      }
    {
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__NonLocals_16);
    }
    {
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Delta_17);
    }
    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__ConjDetism_18);
    }
    {
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Purity_19);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__constraint__NonLocals_16, transform_hlds__constraint__Delta_17, transform_hlds__constraint__ConjDetism_18, (MR_Integer) 0, transform_hlds__constraint__Context_13, &transform_hlds__constraint__GoalInfo1_20);
    }
    {
      hlds__hlds_goal__goal_info_set_features_3_p_0(transform_hlds__constraint__Features0_12, transform_hlds__constraint__GoalInfo1_20, &transform_hlds__constraint__GoalInfo2_21);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__constraint__Purity_19, transform_hlds__constraint__GoalInfo2_21, &transform_hlds__constraint__GoalInfo_22);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__constraint__Goals_15, transform_hlds__constraint__GoalInfo_22, transform_hlds__constraint__Goal_8);
    }
  }
}

void MR_CALL 
transform_hlds__constraint__constraint_info_deconstruct_5_p_0(
  MR_Word transform_hlds__constraint__ConstraintInfo_6,
  MR_Word * transform_hlds__constraint__ModuleInfo_7,
  MR_Word * transform_hlds__constraint__VarTypes_8,
  MR_Word * transform_hlds__constraint__VarSet_9,
  MR_Word * transform_hlds__constraint__Changed_10)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Var_11;

    *transform_hlds__constraint__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 0)));
    *transform_hlds__constraint__VarTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 1)));
    *transform_hlds__constraint__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 2)));
    transform_hlds__constraint__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 3)));
    *transform_hlds__constraint__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 4)));
  }
}

void MR_CALL 
transform_hlds__constraint__constraint_info_init_5_p_0(
  MR_Word transform_hlds__constraint__ModuleInfo_6,
  MR_Word transform_hlds__constraint__VarTypes_7,
  MR_Word transform_hlds__constraint__VarSet_8,
  MR_Word transform_hlds__constraint__InstMap_9,
  MR_Word * transform_hlds__constraint__ConstraintInfo_10)
{
  {
    MR_bool transform_hlds__constraint__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__constraint__ConstraintInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void MR_CALL 
transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(
  MR_Word transform_hlds__constraint__Goal0_5,
  MR_Word * transform_hlds__constraint__Goal_6,
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_9,
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_10)
{
  {
    MR_bool transform_hlds__constraint__succeeded;
    MR_Word transform_hlds__constraint__Goal1_8;

    {
      transform_hlds__constraint__strip_constraint_markers_2_p_0(transform_hlds__constraint__Goal0_5, &transform_hlds__constraint__Goal1_8);
    }
    {
      transform_hlds__constraint__propagate_goal_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal1_8, transform_hlds__constraint__Goal_6, transform_hlds__constraint__STATE_VARIABLE_Info_0_9, transform_hlds__constraint__STATE_VARIABLE_Info_10);
    }
  }
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

/* :- end_module transform_hlds.constraint. */
