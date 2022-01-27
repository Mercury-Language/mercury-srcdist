/*
** Automatically generated from `prop_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2021-06-30
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


// :- module check_hlds.prop_mode_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__prop_mode_constraints__init
ENDINIT
*/

#include "check_hlds.prop_mode_constraints.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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

static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ConstraintVarSet_9,
  MR_Word PredConstraints_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ConstraintVarSet_8,
  MR_Word PredConstraintsMap_9,
  MR_Word PredId_10);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
  MR_Word Context_12,
  MR_Word Var0_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_Unifications_0_27,
  MR_Word * STATE_VARIABLE_Unifications_28,
  MR_Word STATE_VARIABLE_SeenSoFar_0_29,
  MR_Word * STATE_VARIABLE_SeenSoFar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34);

static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Goals_0_8,
  MR_Word * STATE_VARIABLE_Goals_9);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
  MR_Word STATE_VARIABLE_Goal_0_78,
  MR_Word * STATE_VARIABLE_Goal_79,
  MR_Word STATE_VARIABLE_SeenSoFar_0_80,
  MR_Word * STATE_VARIABLE_SeenSoFar_81,
  MR_Word STATE_VARIABLE_VarSet_0_82,
  MR_Word * STATE_VARIABLE_VarSet_83,
  MR_Word STATE_VARIABLE_VarTypes_0_84,
  MR_Word * STATE_VARIABLE_VarTypes_85);

static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
  MR_Word CallGoalExpr_7,
  MR_Word Unifications_8,
  MR_Word NewArgs_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
  MR_Word Context_11,
  MR_Word * Unifications_12,
  MR_Word STATE_VARIABLE_Args_0_17,
  MR_Word * STATE_VARIABLE_Args_18,
  MR_Word STATE_VARIABLE_SeenSoFar_0_19,
  MR_Word * STATE_VARIABLE_SeenSoFar_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
  MR_Word STATE_VARIABLE_Goals_0_4,
  MR_Word * STATE_VARIABLE_Goals_5);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18,
  MR_Word STATE_VARIABLE_PredConstraints_0_19,
  MR_Word * STATE_VARIABLE_PredConstraints_20);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_VarInfo_0_16,
  MR_Word * STATE_VARIABLE_VarInfo_17,
  MR_Word STATE_VARIABLE_Constraints_0_18,
  MR_Word * STATE_VARIABLE_Constraints_19);

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[11][3];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_3[9][2];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][1];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][10];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[2][11];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[3][6];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][9];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[1][14];




static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[11][3] = {
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
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[1])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_8[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_8[2])),
    ((MR_Box) (check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__prop_mode_constraints_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Constraints for"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Making call args unique for cbma"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_VA_TypeInfo_Struct2 check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__prop_mode_constraints__check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001)),
  ((MR_Box) (check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001)),
  (MR_String) "check_hlds.prop_mode_constraints",
  (MR_String) "pred_constraints_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36)
{
  {
    MR_Word LambdaHeadVar__3_37;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 0))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 2))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 3))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 4))));

    {
      LambdaHeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 1) = ((MR_Box) (LambdaHeadVar__2_36));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 4) = ((MR_Box) (Var_50));
    }
    return LambdaHeadVar__3_37;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ConstraintVarSet_9,
  MR_Word PredConstraints_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12)
{
  {
    MR_Word Globals_14;
    MR_Word ProcSpecAnnConstraints_15;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4])));
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ProcId_12));
    }
    Var_25 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_8, (MR_Integer) 0, Var_27);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8])));
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_14, Var_23);
    ProcSpecAnnConstraints_15 = check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(ProcId_12, PredConstraints_10);
    check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(Globals_14, ConstraintVarSet_9, ProcSpecAnnConstraints_15);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ConstraintVarSet_8,
  MR_Word PredConstraintsMap_9,
  MR_Word PredId_10)
{
  {
    MR_Word Globals_12;
    MR_Word PredInfo_13;
    MR_Word PredConstraints_15;
    MR_Word AllProcAnnConstraints_16;
    MR_Word Var_24;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Tuple Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Box conv0_Var_37;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4])));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_10, &PredInfo_13);
    Var_31 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_13);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8])));
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[6])), Var_30);
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_12, Var_24);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_2[0]), PredConstraintsMap_9, ((MR_Box) (PredId_10)), &conv0_Var_37);
    Var_37 = ((MR_Tuple) (conv0_Var_37));
    PredConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
    AllProcAnnConstraints_16 = check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(PredConstraints_15);
    check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(Globals_12, ConstraintVarSet_8, AllProcAnnConstraints_16);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ConstraintVarSet_8));
      MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (PredConstraints_15));
      MR_hl_field(MR_mktag(0), Var_39, 6) = ((MR_Box) (PredId_10));
    }
    Var_40 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_13);
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Var_40, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
  MR_Word Context_12,
  MR_Word Var0_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_Unifications_0_27,
  MR_Word * STATE_VARIABLE_Unifications_28,
  MR_Word STATE_VARIABLE_SeenSoFar_0_29,
  MR_Word * STATE_VARIABLE_SeenSoFar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_SeenSoFar_0_29, Var0_13);
    if (succeeded)
    {
      MR_String OldVarName_19;
      MR_Word OldVarType_20;
      MR_String NewVarName_21;
      MR_Word UnificationGoal0_22;
      MR_Word UnificationGoalExpr_23;
      MR_Word UnificationGoalInfo0_24;
      MR_Word UnificationGoalInfo_25;
      MR_Word UnificationGoal_26;
      MR_Word Var_38;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      OldVarName_19 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, Var0_13);
      hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_33, Var0_13, &OldVarType_20);
      NewVarName_21 = mercury__string__f_43_43_2_f_0((MR_String) "Arg_", OldVarName_19);
      mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVarName_21, Var_14, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32);
      hlds__vartypes__add_var_type_4_p_0(*Var_14, OldVarType_20, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (*Var_14));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var0_13, Var_38, Context_12, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_4[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &UnificationGoal0_22);
      UnificationGoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnificationGoal0_22, (MR_Integer) 0))));
      UnificationGoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnificationGoal0_22, (MR_Integer) 1))));
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (*Var_14));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var0_13));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
      }
      Var_43 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_44);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_43, UnificationGoalInfo0_24, &UnificationGoalInfo_25);
      {
        UnificationGoal_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnificationGoal_26, 0) = ((MR_Box) (UnificationGoalExpr_23));
        MR_hl_field(MR_mktag(0), UnificationGoal_26, 1) = ((MR_Box) (UnificationGoalInfo_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Unifications_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnificationGoal_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Unifications_0_27));
      }
    }
    else
    {
      *Var_14 = Var0_13;
      *STATE_VARIABLE_VarTypes_34 = STATE_VARIABLE_VarTypes_0_33;
      *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_0_31;
      *STATE_VARIABLE_Unifications_28 = STATE_VARIABLE_Unifications_0_27;
    }
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_14, STATE_VARIABLE_SeenSoFar_0_29, STATE_VARIABLE_SeenSoFar_30);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Goals_0_8,
  MR_Word * STATE_VARIABLE_Goals_9)
{
  {
    MR_bool succeeded;
    MR_Word SubGoals_6;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
    MR_Word Var_11;

    succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 2))));
      succeeded = (Var_11 == (MR_Integer) 0);
    }
    if (succeeded)
      *STATE_VARIABLE_Goals_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_6, STATE_VARIABLE_Goals_0_8);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Goals_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Goals_0_8));
      }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_Goal_79;
    MR_Word conv23_STATE_VARIABLE_SeenSoFar_81;
    MR_Word conv22_STATE_VARIABLE_VarSet_83;
    MR_Word conv21_STATE_VARIABLE_VarTypes_85;

    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv24_STATE_VARIABLE_Goal_79, ((MR_Word) (wrapper_arg_3)), &conv23_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_VarSet_83, ((MR_Word) (wrapper_arg_7)), &conv21_STATE_VARIABLE_VarTypes_85);
    *wrapper_arg_2 = ((MR_Box) (conv24_STATE_VARIABLE_Goal_79));
    *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_SeenSoFar_81));
    *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_VarSet_83));
    *wrapper_arg_8 = ((MR_Box) (conv21_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_Goal_79;
    MR_Word conv16_STATE_VARIABLE_SeenSoFar_81;
    MR_Word conv15_STATE_VARIABLE_VarSet_83;
    MR_Word conv14_STATE_VARIABLE_VarTypes_85;

    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv17_STATE_VARIABLE_Goal_79, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_VarSet_83, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_VarTypes_85);
    *wrapper_arg_2 = ((MR_Box) (conv17_STATE_VARIABLE_Goal_79));
    *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_SeenSoFar_81));
    *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_VarSet_83));
    *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Goal_79;
    MR_Word conv9_STATE_VARIABLE_SeenSoFar_81;
    MR_Word conv8_STATE_VARIABLE_VarSet_83;
    MR_Word conv7_STATE_VARIABLE_VarTypes_85;

    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_STATE_VARIABLE_Goal_79, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_VarSet_83, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_VarTypes_85);
    *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Goal_79));
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_SeenSoFar_81));
    *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_VarSet_83));
    *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Goal_79;
    MR_Word conv2_STATE_VARIABLE_SeenSoFar_81;
    MR_Word conv1_STATE_VARIABLE_VarSet_83;
    MR_Word conv0_STATE_VARIABLE_VarTypes_85;

    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_79, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarSet_83, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_VarTypes_85);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_79));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_SeenSoFar_81));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_83));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_85));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
  MR_Word STATE_VARIABLE_Goal_0_78,
  MR_Word * STATE_VARIABLE_Goal_79,
  MR_Word STATE_VARIABLE_SeenSoFar_0_80,
  MR_Word * STATE_VARIABLE_SeenSoFar_81,
  MR_Word STATE_VARIABLE_VarSet_0_82,
  MR_Word * STATE_VARIABLE_VarSet_83,
  MR_Word STATE_VARIABLE_VarTypes_0_84,
  MR_Word * STATE_VARIABLE_VarTypes_85)
{
  {
    MR_Word STATE_VARIABLE_GoalExpr_86_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_78, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_GoalInfo_87_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_78, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_GoalInfo_136_136;
    MR_Word STATE_VARIABLE_GoalExpr_147_147;

    switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_86_86)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_9;
          MR_Word Goal0_45 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_86_86));

          check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(Goal0_45, &Goal_9, STATE_VARIABLE_SeenSoFar_0_80, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_0_84, STATE_VARIABLE_VarTypes_85);
          STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) ((MR_Word) (Goal_9));
          STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_SeenSoFar_81 = STATE_VARIABLE_SeenSoFar_0_80;
          *STATE_VARIABLE_VarSet_83 = STATE_VARIABLE_VarSet_0_82;
          *STATE_VARIABLE_VarTypes_85 = STATE_VARIABLE_VarTypes_0_84;
          STATE_VARIABLE_GoalExpr_147_147 = STATE_VARIABLE_GoalExpr_86_86;
          STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0))));
          MR_Integer CalleeProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));
          MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2))));
          MR_Word Builtin_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word UnifyContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4))));
          MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5))));
          MR_Word Context_25;
          MR_Word Unifications_26;
          MR_Word Args_27;

          Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_87_87);
          check_hlds__prop_mode_constraints__make_unifications_10_p_0(Context_25, &Unifications_26, Args0_21, &Args_27, STATE_VARIABLE_SeenSoFar_0_80, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_0_84, STATE_VARIABLE_VarTypes_85);
          if ((Unifications_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_GoalExpr_147_147 = STATE_VARIABLE_GoalExpr_86_86;
            STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
          }
          else
          {
            MR_Word CallGoalExpr_30;

            {
              CallGoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 0) = ((MR_Box) (CalleePredId_19));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 1) = ((MR_Box) (CalleeProcId_20));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 2) = ((MR_Box) (Args_27));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 3) = (MR_Box) ((MR_Unsigned) (Builtin_22));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 4) = ((MR_Box) (UnifyContext_23));
              MR_hl_field(MR_mktag(2), CallGoalExpr_30, 5) = ((MR_Box) (SymName_24));
            }
            check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(CallGoalExpr_30, Unifications_26, Args_27, &STATE_VARIABLE_GoalExpr_147_147, STATE_VARIABLE_GoalInfo_87_87, &STATE_VARIABLE_GoalInfo_136_136);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));
              MR_Word Modes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4))));
              MR_Word Determinism_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Word Args0_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2))));
              MR_Word Context_154;
              MR_Word Unifications_155;
              MR_Word Args_156;

              Context_154 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_87_87);
              check_hlds__prop_mode_constraints__make_unifications_10_p_0(Context_154, &Unifications_155, Args0_153, &Args_156, STATE_VARIABLE_SeenSoFar_0_80, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_0_84, STATE_VARIABLE_VarTypes_85);
              if ((Unifications_155 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_GoalExpr_147_147 = STATE_VARIABLE_GoalExpr_86_86;
                STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
              }
              else
              {
                MR_Word CallGoalExpr_151;

                {
                  CallGoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 1) = ((MR_Box) (Details_31));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 2) = ((MR_Box) (Args_156));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 3) = ((MR_Box) (Modes_32));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 4) = ((MR_Box) (MaybeArgRegs_33));
                  MR_hl_field(MR_mktag(3), CallGoalExpr_151, 5) = (MR_Box) ((MR_Unsigned) (Determinism_34));
                }
                check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(CallGoalExpr_151, Unifications_155, Args_156, &STATE_VARIABLE_GoalExpr_147_147, STATE_VARIABLE_GoalInfo_87_87, &STATE_VARIABLE_GoalInfo_136_136);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_SeenSoFar_81 = STATE_VARIABLE_SeenSoFar_0_80;
              *STATE_VARIABLE_VarSet_83 = STATE_VARIABLE_VarSet_0_82;
              *STATE_VARIABLE_VarTypes_85 = STATE_VARIABLE_VarTypes_0_84;
              STATE_VARIABLE_GoalExpr_147_147 = STATE_VARIABLE_GoalExpr_86_86;
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2))));

              switch (ConjType_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Goals_150;
                    MR_Box conv6_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box conv5_STATE_VARIABLE_VarSet_83;
                    MR_Box conv4_STATE_VARIABLE_VarTypes_85;

                    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[7]), Goals0_16, &Goals_150, ((MR_Box) (STATE_VARIABLE_SeenSoFar_0_80)), &conv6_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (STATE_VARIABLE_VarSet_0_82)), &conv5_STATE_VARIABLE_VarSet_83, ((MR_Box) (STATE_VARIABLE_VarTypes_0_84)), &conv4_STATE_VARIABLE_VarTypes_85);
                    *STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) (conv6_STATE_VARIABLE_SeenSoFar_81));
                    *STATE_VARIABLE_VarSet_83 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_83));
                    *STATE_VARIABLE_VarTypes_85 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_85));
                    {
                      STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 2) = ((MR_Box) (Goals_150));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Goals1_17;
                    MR_Word Goals_18;
                    MR_Box conv13_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box conv12_STATE_VARIABLE_VarSet_83;
                    MR_Box conv11_STATE_VARIABLE_VarTypes_85;

                    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[8]), Goals0_16, &Goals1_17, ((MR_Box) (STATE_VARIABLE_SeenSoFar_0_80)), &conv13_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (STATE_VARIABLE_VarSet_0_82)), &conv12_STATE_VARIABLE_VarSet_83, ((MR_Box) (STATE_VARIABLE_VarTypes_0_84)), &conv11_STATE_VARIABLE_VarTypes_85);
                    *STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) (conv13_STATE_VARIABLE_SeenSoFar_81));
                    *STATE_VARIABLE_VarSet_83 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_83));
                    *STATE_VARIABLE_VarTypes_85 = ((MR_Word) (conv11_STATE_VARIABLE_VarTypes_85));
                    check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(Goals1_17, &Goals_18);
                    {
                      STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 2) = ((MR_Box) (Goals_18));
                    }
                  }
                  break;
              }
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));
              MR_Word Goals_159;
              MR_Box conv20_STATE_VARIABLE_SeenSoFar_81;
              MR_Box conv19_STATE_VARIABLE_VarSet_83;
              MR_Box conv18_STATE_VARIABLE_VarTypes_85;

              mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[9]), Goals0_158, &Goals_159, ((MR_Box) (STATE_VARIABLE_SeenSoFar_0_80)), &conv20_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (STATE_VARIABLE_VarSet_0_82)), &conv19_STATE_VARIABLE_VarSet_83, ((MR_Box) (STATE_VARIABLE_VarTypes_0_84)), &conv18_STATE_VARIABLE_VarTypes_85);
              *STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) (conv20_STATE_VARIABLE_SeenSoFar_81));
              *STATE_VARIABLE_VarSet_83 = ((MR_Word) (conv19_STATE_VARIABLE_VarSet_83));
              *STATE_VARIABLE_VarTypes_85 = ((MR_Word) (conv18_STATE_VARIABLE_VarTypes_85));
              {
                STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = ((MR_Box) (Goals_159));
              }
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "switch");
              return;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));
              MR_Word Goal_160;
              MR_Word Goal0_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2))));

              check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(Goal0_161, &Goal_160, STATE_VARIABLE_SeenSoFar_0_80, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_0_84, STATE_VARIABLE_VarTypes_85);
              {
                STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = ((MR_Box) (Reason_46));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 2) = ((MR_Box) (Goal_160));
              }
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));
              MR_Word Cond0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2))));
              MR_Word Then0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3))));
              MR_Word Else0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4))));
              MR_Word Cond_51;
              MR_Word Then_52;
              MR_Word Else_53;
              MR_Word STATE_VARIABLE_SeenSoFar_102_102;
              MR_Word STATE_VARIABLE_VarSet_103_103;
              MR_Word STATE_VARIABLE_VarTypes_104_104;
              MR_Word STATE_VARIABLE_SeenSoFar_105_105;
              MR_Word STATE_VARIABLE_VarSet_106_106;
              MR_Word STATE_VARIABLE_VarTypes_107_107;

              check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(Cond0_48, &Cond_51, STATE_VARIABLE_SeenSoFar_0_80, &STATE_VARIABLE_SeenSoFar_102_102, STATE_VARIABLE_VarSet_0_82, &STATE_VARIABLE_VarSet_103_103, STATE_VARIABLE_VarTypes_0_84, &STATE_VARIABLE_VarTypes_104_104);
              check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(Then0_49, &Then_52, STATE_VARIABLE_SeenSoFar_102_102, &STATE_VARIABLE_SeenSoFar_105_105, STATE_VARIABLE_VarSet_103_103, &STATE_VARIABLE_VarSet_106_106, STATE_VARIABLE_VarTypes_104_104, &STATE_VARIABLE_VarTypes_107_107);
              check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(Else0_50, &Else_53, STATE_VARIABLE_SeenSoFar_105_105, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_106_106, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_107_107, STATE_VARIABLE_VarTypes_85);
              {
                STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = ((MR_Box) (ExistVars_47));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 2) = ((MR_Box) (Cond_51));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 3) = ((MR_Box) (Then_52));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 4) = ((MR_Box) (Else_53));
              }
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_61)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 1))));
                    MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 3))));
                    MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 5))));
                    MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_61, (MR_Integer) 6))));
                    MR_Word MainGoal_69;
                    MR_Word OrElseGoals_70;
                    MR_Word ShortHand_71;
                    MR_Word STATE_VARIABLE_SeenSoFar_94_94;
                    MR_Word STATE_VARIABLE_VarSet_95_95;
                    MR_Word STATE_VARIABLE_VarTypes_96_96;
                    MR_Box conv27_STATE_VARIABLE_SeenSoFar_81;
                    MR_Box conv26_STATE_VARIABLE_VarSet_83;
                    MR_Box conv25_STATE_VARIABLE_VarTypes_85;

                    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(MainGoal0_66, &MainGoal_69, STATE_VARIABLE_SeenSoFar_0_80, &STATE_VARIABLE_SeenSoFar_94_94, STATE_VARIABLE_VarSet_0_82, &STATE_VARIABLE_VarSet_95_95, STATE_VARIABLE_VarTypes_0_84, &STATE_VARIABLE_VarTypes_96_96);
                    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[10]), OrElseGoals0_67, &OrElseGoals_70, ((MR_Box) (STATE_VARIABLE_SeenSoFar_94_94)), &conv27_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (STATE_VARIABLE_VarSet_95_95)), &conv26_STATE_VARIABLE_VarSet_83, ((MR_Box) (STATE_VARIABLE_VarTypes_96_96)), &conv25_STATE_VARIABLE_VarTypes_85);
                    *STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) (conv27_STATE_VARIABLE_SeenSoFar_81));
                    *STATE_VARIABLE_VarSet_83 = ((MR_Word) (conv26_STATE_VARIABLE_VarSet_83));
                    *STATE_VARIABLE_VarTypes_85 = ((MR_Word) (conv25_STATE_VARIABLE_VarTypes_85));
                    {
                      ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 1) = ((MR_Box) (Outer_63));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 2) = ((MR_Box) (Inner_64));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                      MR_hl_field(MR_mktag(1), ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                    }
                    {
                      STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = ((MR_Box) (ShortHand_71));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_61, (MR_Integer) 0))));
                    MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_61, (MR_Integer) 1))));
                    MR_Word SubGoal0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_61, (MR_Integer) 2))));
                    MR_Word SubGoal_75;
                    MR_Word ShortHand_162;

                    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(SubGoal0_74, &SubGoal_75, STATE_VARIABLE_SeenSoFar_0_80, STATE_VARIABLE_SeenSoFar_81, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_VarTypes_0_84, STATE_VARIABLE_VarTypes_85);
                    {
                      ShortHand_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_162, 0) = ((MR_Box) (MaybeIO_72));
                      MR_hl_field(MR_mktag(2), ShortHand_162, 1) = ((MR_Box) (ResultVar_73));
                      MR_hl_field(MR_mktag(2), ShortHand_162, 2) = ((MR_Box) (SubGoal_75));
                    }
                    {
                      STATE_VARIABLE_GoalExpr_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_147_147, 1) = ((MR_Box) (ShortHand_162));
                    }
                  }
                  break;
              }
              STATE_VARIABLE_GoalInfo_136_136 = STATE_VARIABLE_GoalInfo_87_87;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_79 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_147_147));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_136_136));
    }
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
  MR_Word CallGoalExpr_7,
  MR_Word Unifications_8,
  MR_Word NewArgs_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19)
{
  {
    MR_Word Context_13;
    MR_Word CallNonlocals0_14;
    MR_Word CallNonlocals_15;
    MR_Word CallGoalInfo_16;
    MR_Word Goals_17;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_GoalInfo_22_22;
    MR_Word STATE_VARIABLE_GoalInfo_23_23;

    Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
    CallNonlocals0_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewArgs_9, CallNonlocals0_14, &CallNonlocals_15);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(CallNonlocals_15, STATE_VARIABLE_GoalInfo_0_18, &CallGoalInfo_16);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (CallGoalExpr_7));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (CallGoalInfo_16));
    }
    {
      Goals_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Goals_17, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Goals_17, 1) = ((MR_Box) (Unifications_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_17));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&STATE_VARIABLE_GoalInfo_22_22);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, STATE_VARIABLE_GoalInfo_22_22, &STATE_VARIABLE_GoalInfo_23_23);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(CallNonlocals0_14, STATE_VARIABLE_GoalInfo_23_23, STATE_VARIABLE_GoalInfo_19);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Var_14;
    MR_Word conv3_STATE_VARIABLE_Unifications_28;
    MR_Word conv2_STATE_VARIABLE_SeenSoFar_30;
    MR_Word conv1_STATE_VARIABLE_VarSet_32;
    MR_Word conv0_STATE_VARIABLE_VarTypes_34;

    check_hlds__prop_mode_constraints__make_unification_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Var_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Unifications_28, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_SeenSoFar_30, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_VarSet_32, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_VarTypes_34);
    *wrapper_arg_2 = ((MR_Box) (conv4_Var_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Unifications_28));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_SeenSoFar_30));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_32));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_34));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
  MR_Word Context_11,
  MR_Word * Unifications_12,
  MR_Word STATE_VARIABLE_Args_0_17,
  MR_Word * STATE_VARIABLE_Args_18,
  MR_Word STATE_VARIABLE_SeenSoFar_0_19,
  MR_Word * STATE_VARIABLE_SeenSoFar_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word Var_25;
    MR_Box conv8_Unifications_12;
    MR_Box conv7_STATE_VARIABLE_SeenSoFar_20;
    MR_Box conv6_STATE_VARIABLE_VarSet_22;
    MR_Box conv5_STATE_VARIABLE_VarTypes_24;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__make_unifications_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Context_11));
    }
    mercury__list__map_foldl4_11_p_1((MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[0]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[0]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[3]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_25, STATE_VARIABLE_Args_0_17, STATE_VARIABLE_Args_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_Unifications_12, ((MR_Box) (STATE_VARIABLE_SeenSoFar_0_19)), &conv7_STATE_VARIABLE_SeenSoFar_20, ((MR_Box) (STATE_VARIABLE_VarSet_0_21)), &conv6_STATE_VARIABLE_VarSet_22, ((MR_Box) (STATE_VARIABLE_VarTypes_0_23)), &conv5_STATE_VARIABLE_VarTypes_24);
    *Unifications_12 = ((MR_Word) (conv8_Unifications_12));
    *STATE_VARIABLE_SeenSoFar_20 = ((MR_Word) (conv7_STATE_VARIABLE_SeenSoFar_20));
    *STATE_VARIABLE_VarSet_22 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_22));
    *STATE_VARIABLE_VarTypes_24 = ((MR_Word) (conv5_STATE_VARIABLE_VarTypes_24));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goals_9;

    check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Goals_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Goals_9));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
  MR_Word STATE_VARIABLE_Goals_0_4,
  MR_Word * STATE_VARIABLE_Goals_5)
{
  {
    MR_Box conv1_STATE_VARIABLE_Goals_5;

    mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[3]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[6]), STATE_VARIABLE_Goals_0_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_STATE_VARIABLE_Goals_5);
    *STATE_VARIABLE_Goals_5 = ((MR_Word) (conv1_STATE_VARIABLE_Goals_5));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18,
  MR_Word STATE_VARIABLE_PredConstraints_0_19,
  MR_Word * STATE_VARIABLE_PredConstraints_20)
{
  {
    MR_Word ArgModes_15;
    MR_Word Args_16;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_12, &ArgModes_15);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &Args_16);
    check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0(ModuleInfo_9, PredId_10, ProcId_11, ArgModes_15, Args_16, STATE_VARIABLE_VarInfo_0_17, STATE_VARIABLE_VarInfo_18, STATE_VARIABLE_PredConstraints_0_19, STATE_VARIABLE_PredConstraints_20);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
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
    MR_Word conv2_STATE_VARIABLE_VarInfo_18;
    MR_Word conv1_STATE_VARIABLE_PredConstraints_20;

    check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarInfo_18, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_PredConstraints_20);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarInfo_18));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_PredConstraints_20));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_VarInfo_0_16,
  MR_Word * STATE_VARIABLE_VarInfo_17,
  MR_Word STATE_VARIABLE_Constraints_0_18,
  MR_Word * STATE_VARIABLE_Constraints_19)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_12;
    MR_Word PredInfo_13;
    MR_Word ClausesInfo0_34;
    MR_Word ContainingGoalMap_35;
    MR_Word ClausesInfo_36;
    MR_Word BodyConstraints_37;
    MR_Tuple Var_42;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, &PredInfo0_12);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_12, &ClausesInfo0_34);
    hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(STATE_VARIABLE_ModuleInfo_0_14, &ContainingGoalMap_35, ClausesInfo0_34, &ClausesInfo_36);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_36, PredInfo0_12, &PredInfo_13);
    succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo_13);
    if (succeeded)
    {
      MR_Word Var_40;

      Var_40 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
      check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, PredInfo_13, STATE_VARIABLE_VarInfo_0_16, STATE_VARIABLE_VarInfo_17, Var_40, &BodyConstraints_37);
    }
    else
    {
      MR_Word ProcIds_53;
      MR_Word BodyConstr_54;
      MR_Word ProcInfos_55;
      MR_Word STATE_VARIABLE_VarInfo_17_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Box conv4_STATE_VARIABLE_VarInfo_17;
      MR_Box conv3_BodyConstraints_37;

      ProcIds_53 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_13);
      Var_57 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
      check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, PredInfo_13, STATE_VARIABLE_VarInfo_0_16, &STATE_VARIABLE_VarInfo_17_56, Var_57, &BodyConstr_54);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (PredInfo_13));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_58, ProcIds_53, &ProcInfos_55);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
        MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (PredId_8));
      }
      mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0), Var_59, ProcIds_53, ProcInfos_55, ((MR_Box) (STATE_VARIABLE_VarInfo_17_56)), &conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (BodyConstr_54)), &conv3_BodyConstraints_37);
      *STATE_VARIABLE_VarInfo_17 = ((MR_Word) (conv4_STATE_VARIABLE_VarInfo_17));
      BodyConstraints_37 = ((MR_Word) (conv3_BodyConstraints_37));
    }
    {
      Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (ContainingGoalMap_35));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (BodyConstraints_37));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_2[0]), ((MR_Box) (PredId_8)), ((MR_Box) (Var_42)), STATE_VARIABLE_Constraints_0_18, STATE_VARIABLE_Constraints_19);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ConstraintVarSet_7,
  MR_Word PredConstraintsMap_8)
{
  {
    MR_Word ConstrainedPreds_10;
    MR_Word Var_13;
    MR_Box conv0_STATE_VARIABLE_IO_12;

    ConstrainedPreds_10 = mercury__map__keys_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_2[0]), PredConstraintsMap_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (ConstraintVarSet_7));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (PredConstraintsMap_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ConstrainedPreds_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
  }
}

MR_bool MR_CALL 
check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredId_4)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_5;
    MR_Word Status_6;
    MR_Word Var_7;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_3, PredId_4, &PredInfo_5);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_5, &Status_6);
    Var_7 = hlds__status__pred_status_is_imported_1_f_0(Status_6);
    succeeded = (Var_7 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__3_37;

    conv8_LambdaHeadVar__3_37 = check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv8_LambdaHeadVar__3_37));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Goal_79;
    MR_Word conv3_STATE_VARIABLE_SeenSoFar_81;
    MR_Word conv2_STATE_VARIABLE_VarSet_83;
    MR_Word conv1_STATE_VARIABLE_VarTypes_85;

    check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Goal_79, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_VarSet_83, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_VarTypes_85);
    *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Goal_79));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_SeenSoFar_81));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_83));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_VarTypes_85));
  }
}

static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_Word PredInfo0_6;
    MR_Word ClausesRep0_8;
    MR_Word ItemNumbers_9;
    MR_Word VarSet0_10;
    MR_Word VarTypes0_11;
    MR_Word HeadVars_12;
    MR_Word SeenSoFar_13;
    MR_Word Clauses0_14;
    MR_Word BodyGoals0_15;
    MR_Word BodyGoals_17;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word Clauses_21;
    MR_Word ClausesRep_24;
    MR_Word PredInfo_26;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_ClausesInfo_38_38;
    MR_Word STATE_VARIABLE_ClausesInfo_39_39;
    MR_Word STATE_VARIABLE_ClausesInfo_40_40;
    MR_Word STATE_VARIABLE_ClausesInfo_41_41;
    MR_Box conv7_Var_18;
    MR_Box conv6_VarSet_19;
    MR_Box conv5_VarTypes_20;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_27, PredId_4, &PredInfo0_6);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_6, &STATE_VARIABLE_ClausesInfo_38_38);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_38_38, &ClausesRep0_8, &ItemNumbers_9);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_38_38, &VarSet0_10);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_38_38, &VarTypes0_11);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(STATE_VARIABLE_ClausesInfo_38_38, &HeadVars_12);
    Var_29 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[0]), HeadVars_12);
    SeenSoFar_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_29);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_8, &Clauses0_14);
    BodyGoals0_15 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[3]), Clauses0_14);
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_3[2]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[4]), BodyGoals0_15, &BodyGoals_17, ((MR_Box) (SeenSoFar_13)), &conv7_Var_18, ((MR_Box) (VarSet0_10)), &conv6_VarSet_19, ((MR_Box) (VarTypes0_11)), &conv5_VarTypes_20);
    VarSet_19 = ((MR_Word) (conv6_VarSet_19));
    VarTypes_20 = ((MR_Word) (conv5_VarTypes_20));
    Clauses_21 = mercury__list__map_corresponding_3_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[5]), Clauses0_14, BodyGoals_17);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_21, &ClausesRep_24);
    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_19, STATE_VARIABLE_ClausesInfo_38_38, &STATE_VARIABLE_ClausesInfo_39_39);
    hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_20, STATE_VARIABLE_ClausesInfo_39_39, &STATE_VARIABLE_ClausesInfo_40_40);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_24, ItemNumbers_9, STATE_VARIABLE_ClausesInfo_40_40, &STATE_VARIABLE_ClausesInfo_41_41);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_41_41, PredInfo0_6, &PredInfo_26);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_26, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_15;
    MR_Word conv1_STATE_VARIABLE_VarInfo_17;
    MR_Word conv0_STATE_VARIABLE_Constraints_19;

    check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_VarInfo_17, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Constraints_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_15));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_VarInfo_17));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Constraints_19));
  }
}

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0(
  MR_Word SCC0_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_VarInfo_0_16,
  MR_Word * STATE_VARIABLE_VarInfo_17,
  MR_Word STATE_VARIABLE_Constraints_0_18,
  MR_Word * STATE_VARIABLE_Constraints_19)
{
  {
    MR_bool succeeded;
    MR_Word SCC_13;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_VarInfo_21_21;
    MR_Word Var_12;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_15;
    MR_Box conv4_STATE_VARIABLE_VarInfo_17;
    MR_Box conv3_STATE_VARIABLE_Constraints_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
    }
    mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_20, SCC0_8, &Var_12, &SCC_13);
    check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0(STATE_VARIABLE_ModuleInfo_0_14, SCC_13, STATE_VARIABLE_VarInfo_0_16, &STATE_VARIABLE_VarInfo_21_21);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__prop_mode_constraints_scalar_common_1[2]), SCC_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Box) (STATE_VARIABLE_VarInfo_21_21)), &conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (STATE_VARIABLE_Constraints_0_18)), &conv3_STATE_VARIABLE_Constraints_19);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_15));
    *STATE_VARIABLE_VarInfo_17 = ((MR_Word) (conv4_STATE_VARIABLE_VarInfo_17));
    *STATE_VARIABLE_Constraints_19 = ((MR_Word) (conv3_STATE_VARIABLE_Constraints_19));
  }
}

static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module check_hlds.prop_mode_constraints.
