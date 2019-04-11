/*
** Automatically generated from `prop_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module check_hlds.prop_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__prop_mode_constraints__init
ENDINIT
*/

#include "check_hlds.prop_mode_constraints.mih"


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
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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




static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_VA_TypeInfo_Struct2 check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
  MR_Word check_hlds__prop_mode_constraints__LambdaHeadVar__1_35,
  MR_Word check_hlds__prop_mode_constraints__LambdaHeadVar__2_36);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_8,
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_9,
  MR_Word check_hlds__prop_mode_constraints__PredConstraints_10,
  MR_Word check_hlds__prop_mode_constraints__PredId_11,
  MR_Integer check_hlds__prop_mode_constraints__ProcId_12);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_7,
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_8,
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_9,
  MR_Word check_hlds__prop_mode_constraints__PredId_10);

static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_7,
  MR_Word check_hlds__prop_mode_constraints__Unifications_8,
  MR_Word check_hlds__prop_mode_constraints__NewArgs_9,
  MR_Word * check_hlds__prop_mode_constraints__GoalExpr_10,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
  MR_Word check_hlds__prop_mode_constraints__Context_12,
  MR_Word check_hlds__prop_mode_constraints__Var0_13,
  MR_Word * check_hlds__prop_mode_constraints__Var_14,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_9,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_10);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
  MR_Word check_hlds__prop_mode_constraints__Context_11,
  MR_Word * check_hlds__prop_mode_constraints__Unifications_12,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
  MR_Word check_hlds__prop_mode_constraints__Goal_4,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9);

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_9,
  MR_Word check_hlds__prop_mode_constraints__PredId_10,
  MR_Integer check_hlds__prop_mode_constraints__ProcId_11,
  MR_Word check_hlds__prop_mode_constraints__ProcInfo_12,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
  MR_Word check_hlds__prop_mode_constraints__PredId_8,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[12][3];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_3[9][2];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][10];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][11];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[3][6];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[1][9];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][14];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[2][1];




static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_3[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_4[1])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[2])),
    ((MR_Box) (check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_3[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_3[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__prop_mode_constraints_scalar_common_10[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Constraints for"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Making call args unique for cbma"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_VA_TypeInfo_Struct2 check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__prop_mode_constraints__check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001)),
  ((MR_Box) (check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001)),
  (MR_String) "check_hlds.prop_mode_constraints",
  (MR_String) "pred_constraints_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;

    {
      check_hlds__prop_mode_constraints__succeeded = check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__prop_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(&check_hlds__prop_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
  MR_Word check_hlds__prop_mode_constraints__LambdaHeadVar__1_35,
  MR_Word check_hlds__prop_mode_constraints__LambdaHeadVar__2_36)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__LambdaHeadVar__3_37;
    MR_Word check_hlds__prop_mode_constraints__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__1_35, (MR_Integer) 0)));
    MR_Word check_hlds__prop_mode_constraints__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__1_35, (MR_Integer) 2)));
    MR_Word check_hlds__prop_mode_constraints__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__1_35, (MR_Integer) 3)));
    MR_Word check_hlds__prop_mode_constraints__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__1_35, (MR_Integer) 4)));
    MR_Word check_hlds__prop_mode_constraints__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__1_35, (MR_Integer) 1)));

    {
      check_hlds__prop_mode_constraints__LambdaHeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__3_37, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_46));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__3_37, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__LambdaHeadVar__2_36));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__3_37, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_48));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__3_37, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_49));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__LambdaHeadVar__3_37, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_50));
    }
    return check_hlds__prop_mode_constraints__LambdaHeadVar__3_37;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(
  MR_Word * check_hlds__prop_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__prop_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar1_4 = check_hlds__prop_mode_constraints__HeadVar__2_2;
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar2_5 = check_hlds__prop_mode_constraints__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], check_hlds__prop_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(
  MR_Word check_hlds__prop_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar1_3 = check_hlds__prop_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar2_4 = check_hlds__prop_mode_constraints__HeadVar__2_2;

    {
      check_hlds__prop_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar2_4)));
    }
    return check_hlds__prop_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_8,
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_9,
  MR_Word check_hlds__prop_mode_constraints__PredConstraints_10,
  MR_Word check_hlds__prop_mode_constraints__PredId_11,
  MR_Integer check_hlds__prop_mode_constraints__ProcId_12)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__Globals_14;
    MR_Word check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15;
    MR_Word check_hlds__prop_mode_constraints__Var_23;
    MR_Word check_hlds__prop_mode_constraints__Var_25;
    MR_Word check_hlds__prop_mode_constraints__Var_27;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__prop_mode_constraints__ModuleInfo_8, &check_hlds__prop_mode_constraints__Globals_14);
    }
    {
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_14, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4]));
    }
    {
      check_hlds__prop_mode_constraints__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_27, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_11));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_27, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ProcId_12));
    }
    {
      check_hlds__prop_mode_constraints__Var_25 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(check_hlds__prop_mode_constraints__ModuleInfo_8, (MR_Integer) 0, check_hlds__prop_mode_constraints__Var_27);
    }
    {
      check_hlds__prop_mode_constraints__Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__prop_mode_constraints__Var_25, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8]));
    }
    {
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_14, check_hlds__prop_mode_constraints__Var_23);
    }
    {
      check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15 = check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(check_hlds__prop_mode_constraints__ProcId_12, check_hlds__prop_mode_constraints__PredConstraints_10);
    }
    {
      check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(check_hlds__prop_mode_constraints__Globals_14, check_hlds__prop_mode_constraints__ConstraintVarSet_9, check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

    {
      check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 6))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_7,
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_8,
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_9,
  MR_Word check_hlds__prop_mode_constraints__PredId_10)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_42_42;
    MR_Word check_hlds__prop_mode_constraints__Globals_12;
    MR_Word check_hlds__prop_mode_constraints__PredInfo_13;
    MR_Word check_hlds__prop_mode_constraints__PredConstraints_15;
    MR_Word check_hlds__prop_mode_constraints__AllProcAnnConstraints_16;
    MR_Word check_hlds__prop_mode_constraints__Var_24;
    MR_Word check_hlds__prop_mode_constraints__Var_30;
    MR_Word check_hlds__prop_mode_constraints__Var_31;
    MR_Tuple check_hlds__prop_mode_constraints__Var_37;
    MR_Word check_hlds__prop_mode_constraints__Var_39;
    MR_Word check_hlds__prop_mode_constraints__Var_40;
    MR_Box check_hlds__prop_mode_constraints__conv0_Var_37;
    MR_Word check_hlds__prop_mode_constraints__Var_14;
    MR_Box check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_IO_18;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__prop_mode_constraints__ModuleInfo_7, &check_hlds__prop_mode_constraints__Globals_12);
    }
    {
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_12, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4]));
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__ModuleInfo_7, check_hlds__prop_mode_constraints__PredId_10, &check_hlds__prop_mode_constraints__PredInfo_13);
    }
    check_hlds__prop_mode_constraints__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__prop_mode_constraints__Var_31 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, check_hlds__prop_mode_constraints__PredInfo_13);
    }
    {
      check_hlds__prop_mode_constraints__Var_30 = mercury__list__f_43_43_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_42_42, check_hlds__prop_mode_constraints__Var_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8]));
    }
    {
      check_hlds__prop_mode_constraints__Var_24 = mercury__list__f_43_43_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[6]), check_hlds__prop_mode_constraints__Var_30);
    }
    {
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_12, check_hlds__prop_mode_constraints__Var_24);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], check_hlds__prop_mode_constraints__PredConstraintsMap_9, ((MR_Box) (check_hlds__prop_mode_constraints__PredId_10)), &check_hlds__prop_mode_constraints__conv0_Var_37);
    }
    check_hlds__prop_mode_constraints__Var_37 = ((MR_Tuple) check_hlds__prop_mode_constraints__conv0_Var_37);
    check_hlds__prop_mode_constraints__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_37, (MR_Integer) 0)));
    check_hlds__prop_mode_constraints__PredConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_37, (MR_Integer) 1)));
    {
      check_hlds__prop_mode_constraints__AllProcAnnConstraints_16 = check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(check_hlds__prop_mode_constraints__PredConstraints_15);
    }
    {
      check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(check_hlds__prop_mode_constraints__Globals_12, check_hlds__prop_mode_constraints__ConstraintVarSet_8, check_hlds__prop_mode_constraints__AllProcAnnConstraints_16);
    }
    {
      check_hlds__prop_mode_constraints__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__ConstraintVarSet_8));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__PredConstraints_15));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_39, 6) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_10));
    }
    {
      check_hlds__prop_mode_constraints__Var_40 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__prop_mode_constraints__PredInfo_13);
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__prop_mode_constraints__Var_39, check_hlds__prop_mode_constraints__Var_40, ((MR_Box) ((MR_Integer) 0)), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_IO_18);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_7,
  MR_Word check_hlds__prop_mode_constraints__Unifications_8,
  MR_Word check_hlds__prop_mode_constraints__NewArgs_9,
  MR_Word * check_hlds__prop_mode_constraints__GoalExpr_10,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__Context_13;
    MR_Word check_hlds__prop_mode_constraints__CallNonlocals0_14;
    MR_Word check_hlds__prop_mode_constraints__CallNonlocals_15;
    MR_Word check_hlds__prop_mode_constraints__CallGoalInfo_16;
    MR_Word check_hlds__prop_mode_constraints__Goals_17;
    MR_Word check_hlds__prop_mode_constraints__Var_20;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23;

    {
      check_hlds__prop_mode_constraints__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18);
    }
    {
      check_hlds__prop_mode_constraints__CallNonlocals0_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18);
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__NewArgs_9, check_hlds__prop_mode_constraints__CallNonlocals0_14, &check_hlds__prop_mode_constraints__CallNonlocals_15);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__CallNonlocals_15, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18, &check_hlds__prop_mode_constraints__CallGoalInfo_16);
    }
    {
      check_hlds__prop_mode_constraints__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__CallGoalExpr_7));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__CallGoalInfo_16));
    }
    {
      check_hlds__prop_mode_constraints__Goals_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Goals_17, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_20));
      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Goals_17, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Unifications_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__prop_mode_constraints__GoalExpr_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_17));
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__prop_mode_constraints__Context_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__CallNonlocals0_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
  MR_Word check_hlds__prop_mode_constraints__Context_12,
  MR_Word check_hlds__prop_mode_constraints__Var0_13,
  MR_Word * check_hlds__prop_mode_constraints__Var_14,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;

    {
      check_hlds__prop_mode_constraints__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29, check_hlds__prop_mode_constraints__Var0_13);
    }
    if (check_hlds__prop_mode_constraints__succeeded)
      {
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_String check_hlds__prop_mode_constraints__OldVarName_19;
        MR_Word check_hlds__prop_mode_constraints__OldVarType_20;
        MR_String check_hlds__prop_mode_constraints__NewVarName_21;
        MR_Word check_hlds__prop_mode_constraints__UnificationGoal0_22;
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalExpr_23;
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalInfo0_24;
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalInfo_25;
        MR_Word check_hlds__prop_mode_constraints__UnificationGoal_26;
        MR_Word check_hlds__prop_mode_constraints__Var_38;
        MR_Word check_hlds__prop_mode_constraints__Var_43;
        MR_Word check_hlds__prop_mode_constraints__Var_44;
        MR_Word check_hlds__prop_mode_constraints__Var_45;

        {
          check_hlds__prop_mode_constraints__OldVarName_19 = mercury__varset__lookup_name_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31, check_hlds__prop_mode_constraints__Var0_13);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33, check_hlds__prop_mode_constraints__Var0_13, &check_hlds__prop_mode_constraints__OldVarType_20);
        }
        {
          check_hlds__prop_mode_constraints__NewVarName_21 = mercury__string__f_43_43_2_f_0((MR_String) "Arg_", check_hlds__prop_mode_constraints__OldVarName_19);
        }
        {
          mercury__varset__new_uniquely_named_var_4_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__NewVarName_21, check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__OldVarType_20, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34);
        }
        {
          check_hlds__prop_mode_constraints__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_38, 0) = ((MR_Box) (*check_hlds__prop_mode_constraints__Var_14));
        }
        {
          hlds__make_goal__create_atomic_complicated_unification_7_p_0(check_hlds__prop_mode_constraints__Var0_13, check_hlds__prop_mode_constraints__Var_38, check_hlds__prop_mode_constraints__Context_12, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_10[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, &check_hlds__prop_mode_constraints__UnificationGoal0_22);
        }
        check_hlds__prop_mode_constraints__UnificationGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal0_22, (MR_Integer) 0)));
        check_hlds__prop_mode_constraints__UnificationGoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal0_22, (MR_Integer) 1)));
        {
          check_hlds__prop_mode_constraints__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Var_45, 0) = ((MR_Box) (*check_hlds__prop_mode_constraints__Var_14));
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__prop_mode_constraints__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Var_44, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Var0_13));
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Var_44, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Var_45));
        }
        {
          check_hlds__prop_mode_constraints__Var_43 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__Var_44);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__Var_43, check_hlds__prop_mode_constraints__UnificationGoalInfo0_24, &check_hlds__prop_mode_constraints__UnificationGoalInfo_25);
        }
        {
          check_hlds__prop_mode_constraints__UnificationGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal_26, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoalExpr_23));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal_26, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoalInfo_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoal_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27));
        }
      }
    else
      {
        *check_hlds__prop_mode_constraints__Var_14 = check_hlds__prop_mode_constraints__Var0_13;
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33;
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31;
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28 = check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27;
      }
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_9,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_10)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv4_Var_14;
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28;
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30;
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32;
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34;

    {
      check_hlds__prop_mode_constraints__make_unification_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv4_Var_14, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_9), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv4_Var_14));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32));
    *check_hlds__prop_mode_constraints__wrapper_arg_10 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
  MR_Word check_hlds__prop_mode_constraints__Context_11,
  MR_Word * check_hlds__prop_mode_constraints__Unifications_12,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__TypeInfo_41_41;
    MR_Word check_hlds__prop_mode_constraints__Var_25;
    MR_Box check_hlds__prop_mode_constraints__conv8_Unifications_12;
    MR_Box check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20;
    MR_Box check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22;
    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24;

    {
      check_hlds__prop_mode_constraints__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_25, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_25, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__make_unifications_10_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_25, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Context_11));
    }
    check_hlds__prop_mode_constraints__TypeInfo_41_41 = (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[0];
    {
      mercury__list__map_foldl4_11_p_1(check_hlds__prop_mode_constraints__TypeInfo_41_41, check_hlds__prop_mode_constraints__TypeInfo_41_41, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[3], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], check_hlds__prop_mode_constraints__Var_25, check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17, check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__prop_mode_constraints__conv8_Unifications_12, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19)), &check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21)), &check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24);
    }
    *check_hlds__prop_mode_constraints__Unifications_12 = ((MR_Word) check_hlds__prop_mode_constraints__conv8_Unifications_12);
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20 = ((MR_Word) check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20);
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22);
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
  MR_Word check_hlds__prop_mode_constraints__Goal_4,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__SubGoals_6;
    MR_Word check_hlds__prop_mode_constraints__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Goal_4, (MR_Integer) 0)));
    MR_Word check_hlds__prop_mode_constraints__Var_11;
    MR_Word check_hlds__prop_mode_constraints__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Goal_4, (MR_Integer) 1)));

    check_hlds__prop_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__prop_mode_constraints__Var_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__Var_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__prop_mode_constraints__succeeded)
      {
        check_hlds__prop_mode_constraints__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__Var_10, (MR_Integer) 1)));
        check_hlds__prop_mode_constraints__SubGoals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__Var_10, (MR_Integer) 2)));
        check_hlds__prop_mode_constraints__succeeded = (check_hlds__prop_mode_constraints__Var_11 == (MR_Integer) 0);
      }
    if (check_hlds__prop_mode_constraints__succeeded)
      {
        {
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__prop_mode_constraints__SubGoals_6, check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8);
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Goal_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8));
      }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9;

    {
      check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Box check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5;

    {
      mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[3], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[11], check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5);
    }
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5 = ((MR_Word) check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79;
    MR_Word check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81;
    MR_Word check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83;
    MR_Word check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85;

    {
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79;
    MR_Word check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81;
    MR_Word check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83;
    MR_Word check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85;

    {
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79;
    MR_Word check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81;
    MR_Word check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83;
    MR_Word check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85;

    {
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79;
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81;
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83;
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85;

    {
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78, (MR_Integer) 0)));
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78, (MR_Integer) 1)));
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149;

    switch (MR_tag((MR_Word) check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__prop_mode_constraints__Goal_9;
          MR_Word check_hlds__prop_mode_constraints__Goal0_45 = (MR_Word) MR_body(((MR_Word) check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86), (MR_Integer) 0);

          {
            check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Goal0_45, &check_hlds__prop_mode_constraints__Goal_9, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
          }
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__prop_mode_constraints__Goal_9);
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
        }
        break;
      case (MR_Integer) 1:
        {
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80;
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82;
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84;
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__prop_mode_constraints__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0)));
          MR_Integer check_hlds__prop_mode_constraints__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
          MR_Word check_hlds__prop_mode_constraints__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
          MR_Word check_hlds__prop_mode_constraints__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
          MR_Word check_hlds__prop_mode_constraints__UnifyContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
          MR_Word check_hlds__prop_mode_constraints__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5)));
          MR_Word check_hlds__prop_mode_constraints__Context_25;
          MR_Word check_hlds__prop_mode_constraints__Unifications_26;
          MR_Word check_hlds__prop_mode_constraints__Args_27;

          {
            check_hlds__prop_mode_constraints__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87);
          }
          {
            check_hlds__prop_mode_constraints__make_unifications_10_p_0(check_hlds__prop_mode_constraints__Context_25, &check_hlds__prop_mode_constraints__Unifications_26, check_hlds__prop_mode_constraints__Args0_21, &check_hlds__prop_mode_constraints__Args_27, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
          }
          if ((check_hlds__prop_mode_constraints__Unifications_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
          else
            {
              MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_30;

              {
                check_hlds__prop_mode_constraints__CallGoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__CalleePredId_19));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__CalleeProcId_20));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Args_27));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Builtin_22));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__UnifyContext_23));
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__SymName_24));
              }
              {
                check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(check_hlds__prop_mode_constraints__CallGoalExpr_30, check_hlds__prop_mode_constraints__Unifications_26, check_hlds__prop_mode_constraints__Args_27, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__prop_mode_constraints__Details_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
              MR_Word check_hlds__prop_mode_constraints__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
              MR_Word check_hlds__prop_mode_constraints__MaybeArgRegs_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
              MR_Word check_hlds__prop_mode_constraints__Determinism_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5)));
              MR_Word check_hlds__prop_mode_constraints__Args0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
              MR_Word check_hlds__prop_mode_constraints__Context_156;
              MR_Word check_hlds__prop_mode_constraints__Unifications_157;
              MR_Word check_hlds__prop_mode_constraints__Args_158;

              {
                check_hlds__prop_mode_constraints__Context_156 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87);
              }
              {
                check_hlds__prop_mode_constraints__make_unifications_10_p_0(check_hlds__prop_mode_constraints__Context_156, &check_hlds__prop_mode_constraints__Unifications_157, check_hlds__prop_mode_constraints__Args0_155, &check_hlds__prop_mode_constraints__Args_158, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
              if ((check_hlds__prop_mode_constraints__Unifications_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
                  check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
                }
              else
                {
                  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_153;

                  {
                    check_hlds__prop_mode_constraints__CallGoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Details_31));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Args_158));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Modes_32));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeArgRegs_33));
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__Determinism_34));
                  }
                  {
                    check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(check_hlds__prop_mode_constraints__CallGoalExpr_153, check_hlds__prop_mode_constraints__Unifications_157, check_hlds__prop_mode_constraints__Args_158, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80;
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82;
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84;
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__prop_mode_constraints__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
              MR_Word check_hlds__prop_mode_constraints__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));

              switch (check_hlds__prop_mode_constraints__ConjType_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_185_185 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Word check_hlds__prop_mode_constraints__Goals_152;
                    MR_Box check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83;
                    MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85;

                    {
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_185_185, check_hlds__prop_mode_constraints__TypeCtorInfo_185_185, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[7], check_hlds__prop_mode_constraints__Goals0_16, &check_hlds__prop_mode_constraints__Goals_152, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85);
                    }
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85);
                    {
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_152));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_173_173 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Word check_hlds__prop_mode_constraints__Goals1_17;
                    MR_Word check_hlds__prop_mode_constraints__Goals_18;
                    MR_Box check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83;
                    MR_Box check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85;

                    {
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_173_173, check_hlds__prop_mode_constraints__TypeCtorInfo_173_173, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[8], check_hlds__prop_mode_constraints__Goals0_16, &check_hlds__prop_mode_constraints__Goals1_17, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85);
                    }
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85);
                    {
                      check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(check_hlds__prop_mode_constraints__Goals1_17, &check_hlds__prop_mode_constraints__Goals_18);
                    }
                    {
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_18));
                    }
                  }
                  break;
              }
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_197_197 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word check_hlds__prop_mode_constraints__Goals0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
              MR_Word check_hlds__prop_mode_constraints__Goals_161;
              MR_Box check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81;
              MR_Box check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83;
              MR_Box check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85;

              {
                mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_197_197, check_hlds__prop_mode_constraints__TypeCtorInfo_197_197, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[9], check_hlds__prop_mode_constraints__Goals0_160, &check_hlds__prop_mode_constraints__Goals_161, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85);
              }
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81);
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83);
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85);
              {
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_161));
              }
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.prop_mode_constraints", (MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__prop_mode_constraints__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
              MR_Word check_hlds__prop_mode_constraints__Goal_162;
              MR_Word check_hlds__prop_mode_constraints__Goal0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));

              {
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Goal0_163, &check_hlds__prop_mode_constraints__Goal_162, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
              {
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Reason_46));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goal_162));
              }
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__prop_mode_constraints__ExistVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
              MR_Word check_hlds__prop_mode_constraints__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
              MR_Word check_hlds__prop_mode_constraints__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
              MR_Word check_hlds__prop_mode_constraints__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
              MR_Word check_hlds__prop_mode_constraints__Cond_51;
              MR_Word check_hlds__prop_mode_constraints__Then_52;
              MR_Word check_hlds__prop_mode_constraints__Else_53;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107;
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108;

              {
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Cond0_48, &check_hlds__prop_mode_constraints__Cond_51, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105);
              }
              {
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Then0_49, &check_hlds__prop_mode_constraints__Then_52, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108);
              }
              {
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Else0_50, &check_hlds__prop_mode_constraints__Else_53, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
              {
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ExistVars_47));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Cond_51));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Then_52));
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__Else_53));
              }
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__prop_mode_constraints__ShortHand0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__prop_mode_constraints__ShortHand0_61)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.prop_mode_constraints", (MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_209_209;
                    MR_Word check_hlds__prop_mode_constraints__GoalType_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 0)));
                    MR_Word check_hlds__prop_mode_constraints__Outer_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 1)));
                    MR_Word check_hlds__prop_mode_constraints__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 2)));
                    MR_Word check_hlds__prop_mode_constraints__MaybeOutputVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 3)));
                    MR_Word check_hlds__prop_mode_constraints__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 4)));
                    MR_Word check_hlds__prop_mode_constraints__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 5)));
                    MR_Word check_hlds__prop_mode_constraints__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 6)));
                    MR_Word check_hlds__prop_mode_constraints__MainGoal_69;
                    MR_Word check_hlds__prop_mode_constraints__OrElseGoals_70;
                    MR_Word check_hlds__prop_mode_constraints__ShortHand_71;
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95;
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96;
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97;
                    MR_Box check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83;
                    MR_Box check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85;

                    {
                      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__MainGoal0_66, &check_hlds__prop_mode_constraints__MainGoal_69, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97);
                    }
                    check_hlds__prop_mode_constraints__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_209_209, check_hlds__prop_mode_constraints__TypeCtorInfo_209_209, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[10], check_hlds__prop_mode_constraints__OrElseGoals0_67, &check_hlds__prop_mode_constraints__OrElseGoals_70, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95)), &check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96)), &check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97)), &check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85);
                    }
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83);
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85);
                    {
                      check_hlds__prop_mode_constraints__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__GoalType_62));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Outer_63));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Inner_64));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeOutputVars_65));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__MainGoal_69));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__OrElseGoals_70));
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 6) = ((MR_Box) (check_hlds__prop_mode_constraints__OrElseInners_68));
                    }
                    {
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ShortHand_71));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__prop_mode_constraints__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 0)));
                    MR_Word check_hlds__prop_mode_constraints__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 1)));
                    MR_Word check_hlds__prop_mode_constraints__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 2)));
                    MR_Word check_hlds__prop_mode_constraints__SubGoal_75;
                    MR_Word check_hlds__prop_mode_constraints__ShortHand_164;

                    {
                      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__SubGoal0_74, &check_hlds__prop_mode_constraints__SubGoal_75, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
                    }
                    {
                      check_hlds__prop_mode_constraints__ShortHand_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeIO_72));
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ResultVar_73));
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__SubGoal_75));
                    }
                    {
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ShortHand_164));
                    }
                  }
                  break;
              }
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138));
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_9,
  MR_Word check_hlds__prop_mode_constraints__PredId_10,
  MR_Integer check_hlds__prop_mode_constraints__ProcId_11,
  MR_Word check_hlds__prop_mode_constraints__ProcInfo_12,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__ArgModes_15;
    MR_Word check_hlds__prop_mode_constraints__Args_16;

    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__prop_mode_constraints__ProcInfo_12, &check_hlds__prop_mode_constraints__ArgModes_15);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__prop_mode_constraints__ProcInfo_12, &check_hlds__prop_mode_constraints__Args_16);
    }
    {
      check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0(check_hlds__prop_mode_constraints__ModuleInfo_9, check_hlds__prop_mode_constraints__PredId_10, check_hlds__prop_mode_constraints__ProcId_11, check_hlds__prop_mode_constraints__ArgModes_15, check_hlds__prop_mode_constraints__Args_16, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18, check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19, check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18;
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20;

    {
      check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__3_3;

    {
      hlds__hlds_pred__pred_info_proc_info_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv0_HeadVar__3_3);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
  MR_Word check_hlds__prop_mode_constraints__PredId_8,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__PredInfo0_12;
    MR_Word check_hlds__prop_mode_constraints__PredInfo_13;
    MR_Word check_hlds__prop_mode_constraints__ClausesInfo0_34;
    MR_Word check_hlds__prop_mode_constraints__ContainingGoalMap_35;
    MR_Word check_hlds__prop_mode_constraints__ClausesInfo_36;
    MR_Word check_hlds__prop_mode_constraints__BodyConstraints_37;
    MR_Tuple check_hlds__prop_mode_constraints__Var_42;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, &check_hlds__prop_mode_constraints__PredInfo0_12);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__prop_mode_constraints__PredInfo0_12, &check_hlds__prop_mode_constraints__ClausesInfo0_34);
    }
    {
      hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__prop_mode_constraints__ContainingGoalMap_35, check_hlds__prop_mode_constraints__ClausesInfo0_34, &check_hlds__prop_mode_constraints__ClausesInfo_36);
    }
    {
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__prop_mode_constraints__ClausesInfo_36, check_hlds__prop_mode_constraints__PredInfo0_12, &check_hlds__prop_mode_constraints__PredInfo_13);
    }
    {
      check_hlds__prop_mode_constraints__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__prop_mode_constraints__PredInfo_13);
    }
    if (check_hlds__prop_mode_constraints__succeeded)
      {
        MR_Word check_hlds__prop_mode_constraints__Var_40;

        {
          check_hlds__prop_mode_constraints__Var_40 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
        }
        {
          check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17, check_hlds__prop_mode_constraints__Var_40, &check_hlds__prop_mode_constraints__BodyConstraints_37);
        }
      }
    else
      {
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_24_63;
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_25_64;
        MR_Word check_hlds__prop_mode_constraints__ProcIds_53;
        MR_Word check_hlds__prop_mode_constraints__BodyConstr_54;
        MR_Word check_hlds__prop_mode_constraints__ProcInfos_55;
        MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56;
        MR_Word check_hlds__prop_mode_constraints__Var_57;
        MR_Word check_hlds__prop_mode_constraints__Var_58;
        MR_Word check_hlds__prop_mode_constraints__Var_59;
        MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17;
        MR_Box check_hlds__prop_mode_constraints__conv3_BodyConstraints_37;

        {
          check_hlds__prop_mode_constraints__ProcIds_53 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__prop_mode_constraints__PredInfo_13);
        }
        {
          check_hlds__prop_mode_constraints__Var_57 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
        }
        {
          check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56, check_hlds__prop_mode_constraints__Var_57, &check_hlds__prop_mode_constraints__BodyConstr_54);
        }
        {
          check_hlds__prop_mode_constraints__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_58, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_58, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_58, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__PredInfo_13));
        }
        check_hlds__prop_mode_constraints__TypeCtorInfo_24_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        check_hlds__prop_mode_constraints__TypeCtorInfo_25_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__list__map_3_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_24_63, check_hlds__prop_mode_constraints__TypeCtorInfo_25_64, check_hlds__prop_mode_constraints__Var_58, check_hlds__prop_mode_constraints__ProcIds_53, &check_hlds__prop_mode_constraints__ProcInfos_55);
        }
        {
          check_hlds__prop_mode_constraints__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_59, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_59, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_59, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14));
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_59, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_8));
        }
        {
          mercury__list__foldl2_corresponding_7_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_24_63, check_hlds__prop_mode_constraints__TypeCtorInfo_25_64, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__prop_mode_constraints__Var_59, check_hlds__prop_mode_constraints__ProcIds_53, check_hlds__prop_mode_constraints__ProcInfos_55, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (check_hlds__prop_mode_constraints__BodyConstr_54)), &check_hlds__prop_mode_constraints__conv3_BodyConstraints_37);
        }
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17);
        check_hlds__prop_mode_constraints__BodyConstraints_37 = ((MR_Word) check_hlds__prop_mode_constraints__conv3_BodyConstraints_37);
      }
    {
      check_hlds__prop_mode_constraints__Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_42, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__ContainingGoalMap_35));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_42, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__BodyConstraints_37));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__prop_mode_constraints__PredId_8)), ((MR_Box) (check_hlds__prop_mode_constraints__Var_42)), check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18, check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19);
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

    {
      check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_6,
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_7,
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_8)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__prop_mode_constraints__ConstrainedPreds_10;
    MR_Word check_hlds__prop_mode_constraints__Var_13;
    MR_Box check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_IO_12;

    {
      check_hlds__prop_mode_constraints__ConstrainedPreds_10 = mercury__map__keys_1_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_15_15, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], check_hlds__prop_mode_constraints__PredConstraintsMap_8);
    }
    {
      check_hlds__prop_mode_constraints__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__ConstraintVarSet_7));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_13, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__PredConstraintsMap_8));
    }
    {
      mercury__list__foldl_4_p_2(check_hlds__prop_mode_constraints__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__prop_mode_constraints__Var_13, check_hlds__prop_mode_constraints__ConstrainedPreds_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_IO_12);
    }
  }
}

MR_bool MR_CALL 
check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_3,
  MR_Word check_hlds__prop_mode_constraints__PredId_4)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__PredInfo_5;
    MR_Word check_hlds__prop_mode_constraints__Status_6;
    MR_Word check_hlds__prop_mode_constraints__Var_7;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__ModuleInfo_3, check_hlds__prop_mode_constraints__PredId_4, &check_hlds__prop_mode_constraints__PredInfo_5);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__prop_mode_constraints__PredInfo_5, &check_hlds__prop_mode_constraints__Status_6);
    }
    {
      check_hlds__prop_mode_constraints__Var_7 = hlds__status__pred_status_is_imported_1_f_0(check_hlds__prop_mode_constraints__Status_6);
    }
    check_hlds__prop_mode_constraints__succeeded = (check_hlds__prop_mode_constraints__Var_7 == (MR_Integer) 1);
    return check_hlds__prop_mode_constraints__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2)
{
  {
    MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3;
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv8_LambdaHeadVar__3_37;

    {
      check_hlds__prop_mode_constraints__conv8_LambdaHeadVar__3_37 = check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2));
    }
    check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv8_LambdaHeadVar__3_37));
    return check_hlds__prop_mode_constraints__wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79;
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81;
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83;
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85;

    {
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79));
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81));
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83));
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85));
  }
}

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1)
{
  {
    MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2;
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__2_2;

    {
      check_hlds__prop_mode_constraints__conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
    check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__2_2));
    return check_hlds__prop_mode_constraints__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0(
  MR_Word check_hlds__prop_mode_constraints__PredId_4,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_53_53;
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_54_54;
    MR_Word check_hlds__prop_mode_constraints__PredInfo0_6;
    MR_Word check_hlds__prop_mode_constraints__ClausesRep0_8;
    MR_Word check_hlds__prop_mode_constraints__ItemNumbers_9;
    MR_Word check_hlds__prop_mode_constraints__VarSet0_10;
    MR_Word check_hlds__prop_mode_constraints__VarTypes0_11;
    MR_Word check_hlds__prop_mode_constraints__HeadVars_12;
    MR_Word check_hlds__prop_mode_constraints__SeenSoFar_13;
    MR_Word check_hlds__prop_mode_constraints__Clauses0_14;
    MR_Word check_hlds__prop_mode_constraints__BodyGoals0_15;
    MR_Word check_hlds__prop_mode_constraints__BodyGoals_17;
    MR_Word check_hlds__prop_mode_constraints__VarSet_19;
    MR_Word check_hlds__prop_mode_constraints__VarTypes_20;
    MR_Word check_hlds__prop_mode_constraints__Clauses_21;
    MR_Word check_hlds__prop_mode_constraints__ClausesRep_24;
    MR_Word check_hlds__prop_mode_constraints__PredInfo_26;
    MR_Word check_hlds__prop_mode_constraints__Var_29;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41;
    MR_Word check_hlds__prop_mode_constraints__Var_18;
    MR_Box check_hlds__prop_mode_constraints__conv7_Var_18;
    MR_Box check_hlds__prop_mode_constraints__conv6_VarSet_19;
    MR_Box check_hlds__prop_mode_constraints__conv5_VarTypes_20;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__prop_mode_constraints__PredId_4, &check_hlds__prop_mode_constraints__PredInfo0_6);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__prop_mode_constraints__PredInfo0_6, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38);
    }
    {
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__ClausesRep0_8, &check_hlds__prop_mode_constraints__ItemNumbers_9);
    }
    {
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__VarSet0_10);
    }
    {
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__VarTypes0_11);
    }
    {
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__HeadVars_12);
    }
    {
      check_hlds__prop_mode_constraints__Var_29 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[0], check_hlds__prop_mode_constraints__HeadVars_12);
    }
    {
      check_hlds__prop_mode_constraints__SeenSoFar_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__Var_29);
    }
    {
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__prop_mode_constraints__ClausesRep0_8, &check_hlds__prop_mode_constraints__Clauses0_14);
    }
    check_hlds__prop_mode_constraints__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    check_hlds__prop_mode_constraints__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      check_hlds__prop_mode_constraints__BodyGoals0_15 = mercury__list__map_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[4], check_hlds__prop_mode_constraints__Clauses0_14);
    }
    {
      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[5], check_hlds__prop_mode_constraints__BodyGoals0_15, &check_hlds__prop_mode_constraints__BodyGoals_17, ((MR_Box) (check_hlds__prop_mode_constraints__SeenSoFar_13)), &check_hlds__prop_mode_constraints__conv7_Var_18, ((MR_Box) (check_hlds__prop_mode_constraints__VarSet0_10)), &check_hlds__prop_mode_constraints__conv6_VarSet_19, ((MR_Box) (check_hlds__prop_mode_constraints__VarTypes0_11)), &check_hlds__prop_mode_constraints__conv5_VarTypes_20);
    }
    check_hlds__prop_mode_constraints__Var_18 = ((MR_Word) check_hlds__prop_mode_constraints__conv7_Var_18);
    check_hlds__prop_mode_constraints__VarSet_19 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_VarSet_19);
    check_hlds__prop_mode_constraints__VarTypes_20 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_VarTypes_20);
    {
      check_hlds__prop_mode_constraints__Clauses_21 = mercury__list__map_corresponding_3_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[6], check_hlds__prop_mode_constraints__Clauses0_14, check_hlds__prop_mode_constraints__BodyGoals_17);
    }
    {
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__prop_mode_constraints__Clauses_21, &check_hlds__prop_mode_constraints__ClausesRep_24);
    }
    {
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__prop_mode_constraints__VarSet_19, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39);
    }
    {
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__prop_mode_constraints__VarTypes_20, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40);
    }
    {
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__prop_mode_constraints__ClausesRep_24, check_hlds__prop_mode_constraints__ItemNumbers_9, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41);
    }
    {
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41, check_hlds__prop_mode_constraints__PredInfo0_6, &check_hlds__prop_mode_constraints__PredInfo_26);
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__prop_mode_constraints__PredId_4, check_hlds__prop_mode_constraints__PredInfo_26, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_28);
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_4,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_5,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_6,
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_7)
{
  {
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15;
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17;
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19;

    {
      check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_4), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_6), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19);
    }
    *check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15));
    *check_hlds__prop_mode_constraints__wrapper_arg_5 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17));
    *check_hlds__prop_mode_constraints__wrapper_arg_7 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19));
  }
}

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

    {
      check_hlds__prop_mode_constraints__succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
    return check_hlds__prop_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0(
  MR_Word check_hlds__prop_mode_constraints__SCC0_8,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19)
{
  {
    MR_bool check_hlds__prop_mode_constraints__succeeded;
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_27_27;
    MR_Word check_hlds__prop_mode_constraints__SCC_13;
    MR_Word check_hlds__prop_mode_constraints__Var_20;
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21;
    MR_Word check_hlds__prop_mode_constraints__Var_12;
    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15;
    MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17;
    MR_Box check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19;

    {
      check_hlds__prop_mode_constraints__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Var_20, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14));
    }
    check_hlds__prop_mode_constraints__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    {
      mercury__list__filter_4_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_27_27, check_hlds__prop_mode_constraints__Var_20, check_hlds__prop_mode_constraints__SCC0_8, &check_hlds__prop_mode_constraints__Var_12, &check_hlds__prop_mode_constraints__SCC_13);
    }
    {
      check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__SCC_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21);
    }
    {
      mercury__list__foldl3_8_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[3], check_hlds__prop_mode_constraints__SCC_13, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18)), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19);
    }
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15);
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17);
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19 = ((MR_Word) check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19);
  }
}

void mercury__check_hlds__prop_mode_constraints__init(void)
{
}

void mercury__check_hlds__prop_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__prop_mode_constraints__check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0);
}

void mercury__check_hlds__prop_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__prop_mode_constraints__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.prop_mode_constraints. */
