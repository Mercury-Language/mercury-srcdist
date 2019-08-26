/*
** Automatically generated from `modecheck_util.m'
** by the Mercury compiler,
** version rotd-2019-08-26
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


// :- module check_hlds.modecheck_util.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_util__init
ENDINIT
*/

#include "check_hlds.modecheck_util.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "int.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2];

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2];

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2];

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2];

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2];

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2];

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2];

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0;

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
  MR_Word SubInst_5,
  MR_Word InstVar_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word BoundInst_8,
  MR_Word STATE_VARIABLE_Map_0_13,
  MR_Word * STATE_VARIABLE_Map_14,
  MR_Word STATE_VARIABLE_Expansions_0_15,
  MR_Word * STATE_VARIABLE_Expansions_16);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Mode_8,
  MR_Word STATE_VARIABLE_Map_0_13,
  MR_Word * STATE_VARIABLE_Map_14,
  MR_Word STATE_VARIABLE_Expansions_0_15,
  MR_Word * STATE_VARIABLE_Expansions_16);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Map_0_33,
  MR_Word * STATE_VARIABLE_Map_34,
  MR_Word STATE_VARIABLE_Expansions_0_35,
  MR_Word * STATE_VARIABLE_Expansions_36);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInstInfo_8,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Word STATE_VARIABLE_Expansions_0_17,
  MR_Word * STATE_VARIABLE_Expansions_18);

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
  MR_Word HeadInstVars_6,
  MR_Word InstVar_7,
  MR_Word Subst_8);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ExtraGoals_0_6,
  MR_Word * STATE_VARIABLE_ExtraGoals_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(
  MR_Word Var0_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_ExtraGoals_0_17,
  MR_Word * STATE_VARIABLE_ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9];




static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)
  }
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 = {
  (MR_String) "no_after_goals",
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

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2] = {
  (MR_String) "after_instmap",
  (MR_String) "after_goals"
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 = {
  (MR_String) "after_goals",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____after_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____after_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "after_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 = {
  (MR_String) "no_extra_goals",
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

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2] = {
  (MR_String) "extra_before_main",
  (MR_String) "extra_after_main"
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 = {
  (MR_String) "extra_goals",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____extra_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____extra_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "extra_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "inst_expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
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
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
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
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        hlds__instmap____Compare____instmap_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
  MR_Word SubInst_5,
  MR_Word InstVar_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word SubInst0_8;
    MR_Box conv0_SubInst0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Map_0_9, ((MR_Box) (InstVar_6)), &conv0_SubInst0_8);
    if (succeeded)
    {
      SubInst0_8 = ((MR_Word) (conv0_SubInst0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(SubInst0_8, SubInst_5);
      if (!(succeeded))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.add_constrained_inst\'/4", (MR_String) "SubInst differs");
          return;
        }
      }
      *STATE_VARIABLE_Map_10 = STATE_VARIABLE_Map_0_9;
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_6)), ((MR_Box) (SubInst_5)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_34;
    MR_Word conv0_STATE_VARIABLE_Expansions_36;

    check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_36);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_34));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_36));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word BoundInst_8,
  MR_Word STATE_VARIABLE_Map_0_13,
  MR_Word * STATE_VARIABLE_Map_14,
  MR_Word STATE_VARIABLE_Expansions_0_15,
  MR_Word * STATE_VARIABLE_Expansions_16)
{
  {
    MR_Word Insts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));
    MR_Word Var_17;
    MR_Box conv3_STATE_VARIABLE_Map_14;
    MR_Box conv2_STATE_VARIABLE_Expansions_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_17, Insts_12, ((MR_Box) (STATE_VARIABLE_Map_0_13)), &conv3_STATE_VARIABLE_Map_14, ((MR_Box) (STATE_VARIABLE_Expansions_0_15)), &conv2_STATE_VARIABLE_Expansions_16);
    *STATE_VARIABLE_Map_14 = ((MR_Word) (conv3_STATE_VARIABLE_Map_14));
    *STATE_VARIABLE_Expansions_16 = ((MR_Word) (conv2_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Mode_8,
  MR_Word STATE_VARIABLE_Map_0_13,
  MR_Word * STATE_VARIABLE_Map_14,
  MR_Word STATE_VARIABLE_Expansions_0_15,
  MR_Word * STATE_VARIABLE_Expansions_16)
{
  {
    MR_Word InitialInst_11;
    MR_Word FinalInst_12;
    MR_Word STATE_VARIABLE_Map_17_17;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_7, Mode_8, &InitialInst_11, &FinalInst_12);
    check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(ModuleInfo_7, InitialInst_11, STATE_VARIABLE_Map_0_13, &STATE_VARIABLE_Map_17_17, STATE_VARIABLE_Expansions_0_15, &STATE_VARIABLE_Expansions_18_18);
    check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(ModuleInfo_7, FinalInst_12, STATE_VARIABLE_Map_17_17, STATE_VARIABLE_Map_14, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_16);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Map_10;

    check_hlds__modecheck_util__add_constrained_inst_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Map_10);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Map_10));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Map_14;
    MR_Word conv4_STATE_VARIABLE_Expansions_16;

    check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Expansions_16);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Map_14));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_14;
    MR_Word conv0_STATE_VARIABLE_Expansions_16;

    check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Map_0_33,
  MR_Word * STATE_VARIABLE_Map_34,
  MR_Word STATE_VARIABLE_Expansions_0_35,
  MR_Word * STATE_VARIABLE_Expansions_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
              *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
              *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
          *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word HOInstInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 1))));

          if ((HOInstInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
            *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
          }
          else
          {
            MR_Word PredInstInfo_25 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_23), (MR_Integer) 1));

            check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(ModuleInfo_7, PredInstInfo_25, STATE_VARIABLE_Map_0_33, STATE_VARIABLE_Map_34, STATE_VARIABLE_Expansions_0_35, STATE_VARIABLE_Expansions_36);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2))));
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_48;
                        MR_Box conv3_STATE_VARIABLE_Map_34;
                        MR_Box conv2_STATE_VARIABLE_Expansions_36;

                        {
                          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ModuleInfo_7));
                        }
                        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_48, BoundInsts_14, ((MR_Box) (STATE_VARIABLE_Map_0_33)), &conv3_STATE_VARIABLE_Map_34, ((MR_Box) (STATE_VARIABLE_Expansions_0_35)), &conv2_STATE_VARIABLE_Expansions_36);
                        *STATE_VARIABLE_Map_34 = ((MR_Word) (conv3_STATE_VARIABLE_Map_34));
                        *STATE_VARIABLE_Expansions_36 = ((MR_Word) (conv2_STATE_VARIABLE_Expansions_36));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
                        *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsResult_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_13, (MR_Integer) 2))));
                    MR_Word TypeInfo_55_55;
                    MR_Word InstVars_21;

                    succeeded = (InstVarsResult_18 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      InstVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_18, (MR_Integer) 0))));
                      TypeInfo_55_55 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]);
                      succeeded = mercury__set__is_empty_1_p_0(TypeInfo_55_55, InstVars_21);
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
                      *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
                    }
                    else
                    {
                      MR_Word Var_51;
                      MR_Box conv7_STATE_VARIABLE_Map_34;
                      MR_Box conv6_STATE_VARIABLE_Expansions_36;

                      {
                        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_7));
                      }
                      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_51, BoundInsts_14, ((MR_Box) (STATE_VARIABLE_Map_0_33)), &conv7_STATE_VARIABLE_Map_34, ((MR_Box) (STATE_VARIABLE_Expansions_0_35)), &conv6_STATE_VARIABLE_Expansions_36);
                      *STATE_VARIABLE_Map_34 = ((MR_Word) (conv7_STATE_VARIABLE_Map_34));
                      *STATE_VARIABLE_Expansions_36 = ((MR_Word) (conv6_STATE_VARIABLE_Expansions_36));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2))));

              if ((HOInstInfo_80 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
                *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
              }
              else
              {
                MR_Word PredInstInfo_78 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_80), (MR_Integer) 1));

                check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(ModuleInfo_7, PredInstInfo_78, STATE_VARIABLE_Map_0_33, STATE_VARIABLE_Map_34, STATE_VARIABLE_Expansions_0_35, STATE_VARIABLE_Expansions_36);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "inst_var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_27;
              MR_Word Var_44;
              MR_Word InstVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1))));
              MR_Box conv9_STATE_VARIABLE_Map_34;

              check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_7, Inst_8, &SubInst_27);
              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (SubInst_27));
              }
              mercury__set__fold_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), Var_44, InstVars_54, ((MR_Box) (STATE_VARIABLE_Map_0_33)), &conv9_STATE_VARIABLE_Map_34);
              *STATE_VARIABLE_Map_34 = ((MR_Word) (conv9_STATE_VARIABLE_Map_34));
              *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_41_41;

              succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_28)), STATE_VARIABLE_Expansions_0_35, &STATE_VARIABLE_Expansions_41_41);
              if (succeeded)
              {
                MR_Word ExpandedInst_29;
                MR_Word next_value_of_Inst_8;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_35;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_7, InstName_28, &ExpandedInst_29);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_8 = ExpandedInst_29;
                next_value_of_STATE_VARIABLE_Expansions_0_35 = STATE_VARIABLE_Expansions_41_41;
                Inst_8 = next_value_of_Inst_8;
                STATE_VARIABLE_Expansions_0_35 = next_value_of_STATE_VARIABLE_Expansions_0_35;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_36 = STATE_VARIABLE_Expansions_0_35;
                *STATE_VARIABLE_Map_34 = STATE_VARIABLE_Map_0_33;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "abstract_inst");
                return;
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
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_14;
    MR_Word conv0_STATE_VARIABLE_Expansions_16;

    check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInstInfo_8,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Word STATE_VARIABLE_Expansions_0_17,
  MR_Word * STATE_VARIABLE_Expansions_18)
{
  {
    MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_8, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Box conv3_STATE_VARIABLE_Map_16;
    MR_Box conv2_STATE_VARIABLE_Expansions_18;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_19, Modes_12, ((MR_Box) (STATE_VARIABLE_Map_0_15)), &conv3_STATE_VARIABLE_Map_16, ((MR_Box) (STATE_VARIABLE_Expansions_0_17)), &conv2_STATE_VARIABLE_Expansions_18);
    *STATE_VARIABLE_Map_16 = ((MR_Word) (conv3_STATE_VARIABLE_Map_16));
    *STATE_VARIABLE_Expansions_18 = ((MR_Word) (conv2_STATE_VARIABLE_Expansions_18));
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7)
{
  {
    MR_Word BoundInst_8;
    MR_Integer ConsIdAdjustedArity_9;
    MR_Word ArgInsts_10;

    ConsIdAdjustedArity_9 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(ModuleInfo_5, Type_6, ConsId_7);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ConsIdAdjustedArity_9, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_10);
    {
      BoundInst_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_8, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), BoundInst_8, 1) = ((MR_Box) (ArgInsts_10));
    }
    return BoundInst_8;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
  MR_Word HeadInstVars_6,
  MR_Word InstVar_7,
  MR_Word Subst_8)
{
  {
    MR_bool succeeded;
    MR_Word Inst_10;
    MR_Box conv0_Inst_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadInstVars_6, ((MR_Box) (InstVar_7)), &conv0_Inst_10);
    if (succeeded)
    {
      Inst_10 = ((MR_Word) (conv0_Inst_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_23_23;
      MR_Word SubstInstVars_11;
      MR_Word SubstInst_12;
      MR_Word Uniq_13;
      MR_Word BoundInsts_15;
      MR_Word SubstUniq_16;
      MR_Word SubstBoundInsts_18;

      succeeded = ((((MR_tag((MR_Word) Subst_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Subst_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SubstInstVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Subst_8, (MR_Integer) 1))));
        SubstInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Subst_8, (MR_Integer) 2))));
        TypeInfo_23_23 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]);
        succeeded = mercury__set__member_2_p_0(TypeInfo_23_23, ((MR_Box) (InstVar_7)), SubstInstVars_11);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
            BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 3))));
            succeeded = ((((MR_tag((MR_Word) SubstInst_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubstInst_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              SubstUniq_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubstInst_12, (MR_Integer) 1))) & (MR_Integer) 7);
              SubstBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubstInst_12, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word TypeInfo_24_24;

            succeeded = (Uniq_13 == SubstUniq_16);
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (BoundInsts_15)), ((MR_Box) (SubstBoundInsts_18)));
            }
          }
          else
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_10, SubstInst_12);
        }
      }
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_14;
    MR_Word conv0_STATE_VARIABLE_Expansions_16;

    check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_16));
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Modes_5,
  MR_Word * Map_6)
{
  {
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Box conv3_Map_6;
    MR_Box conv2__Expansions_7;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_4));
    }
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    Var_10 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_8, Modes_5, ((MR_Box) (Var_9)), &conv3_Map_6, ((MR_Box) (Var_10)), &conv2__Expansions_7);
    *Map_6 = ((MR_Word) (conv3_Map_6));
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word IsLive_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word IsLives_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word LiveVars0_19;

      check_hlds__modecheck_util__get_live_vars_3_p_0(Var_20, IsLives_17, &LiveVars0_19);
      switch (IsLive_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *HeadVar__3_3 = LiveVars0_19;
          break;
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LiveVars0_19));
          }
          break;
      }
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word ModeContext_5,
  MR_Word * UnifyContext_6)
{
  switch (MR_tag((MR_Word) ModeContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "uninitialized context");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModeCallId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeContext_5, (MR_Integer) 0))));
        MR_Integer Arg_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ModeContext_5, (MR_Integer) 1))));
        MR_Word CallId_12;
        MR_Word Var_16;

        if (((MR_tag((MR_Word) ModeCallId_8)) == (MR_Integer) 1))
        {
          MR_Word GenericCallId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeCallId_8, (MR_Integer) 0))));

          {
            CallId_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallId_12, 0) = ((MR_Box) (GenericCallId_13));
          }
        }
        else
        {
          MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCallId_8, (MR_Integer) 0))));
          MR_Word SimpleCallId_11;

          check_hlds__mode_info__mode_info_get_simple_call_id_3_p_0(ModeInfo_4, PredId_10, &SimpleCallId_11);
          {
            CallId_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallId_12, 0) = ((MR_Box) (SimpleCallId_11));
          }
        }
        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (CallId_12));
          MR_hl_field(MR_mktag(2), Var_16, 1) = ((MR_Box) (Arg_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *UnifyContext_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      *UnifyContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeContext_5, (MR_Integer) 0))));
      break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(
  MR_Word InstMap0_7,
  MR_Word GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_15,
  MR_Word * STATE_VARIABLE_GoalInfo_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) GoalExpr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word DeltaInstMap_12;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&DeltaInstMap_12);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_7, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
    }
    else
    {
      MR_Word NonLocals_13;
      MR_Word InstMap_14;

      NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_15);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_17, &InstMap_14);
      hlds__instmap__compute_instmap_delta_4_p_0(InstMap0_7, InstMap_14, NonLocals_13, &DeltaInstMap_12);
      *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_0_17;
    }
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(DeltaInstMap_12, STATE_VARIABLE_GoalInfo_0_15, STATE_VARIABLE_GoalInfo_16);
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_8;

    conv0_BoundInst_8 = check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0(
  MR_Word Var_6,
  MR_Word MainConsId_7,
  MR_Word OtherConsIds_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word VarTypes_11;
    MR_Word Type_12;
    MR_Word BoundInsts_13;
    MR_Word Inst_14;
    MR_Word Var_17;
    MR_Word Var_18;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo_10);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &VarTypes_11);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_11, Var_6, &Type_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Type_12));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (OtherConsIds_8));
    }
    BoundInsts_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_17, Var_18);
    {
      Inst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Inst_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_14, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Inst_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_14, 3) = ((MR_Box) (BoundInsts_13));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Var_6, Inst_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_15, STATE_VARIABLE_ModeInfo_16);
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_functor_test_4_p_0(
  MR_Word Var_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14)
{
  {
    MR_Word ModuleInfo_8;
    MR_Word VarTypes_9;
    MR_Word Type_10;
    MR_Word BoundInst_11;
    MR_Word Inst_12;
    MR_Word Var_17;
    MR_Integer ConsIdAdjustedArity_25;
    MR_Word ArgInsts_26;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ModuleInfo_8);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &VarTypes_9);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, Var_5, &Type_10);
    ConsIdAdjustedArity_25 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(ModuleInfo_8, Type_10, ConsId_6);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ConsIdAdjustedArity_25, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_26);
    {
      BoundInst_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_11, 0) = ((MR_Box) (ConsId_6));
      MR_hl_field(MR_mktag(0), BoundInst_11, 1) = ((MR_Box) (ArgInsts_26));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (BoundInst_11));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Inst_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_12, 3) = ((MR_Box) (Var_17));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Var_5, Inst_12, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_13, STATE_VARIABLE_ModeInfo_14);
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(
  MR_Word Vars0_9,
  MR_Word InitialInsts_10,
  MR_Word FinalInsts_11,
  MR_Integer ArgOffset_12,
  MR_Word * Vars_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word Vars1_16;
    MR_Word Goals1_17;
    MR_Word STATE_VARIABLE_ModeInfo_21_21;

    succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(Vars0_9, InitialInsts_10, FinalInsts_11, ArgOffset_12, &Vars1_16, (MR_Word) ((MR_Unsigned) 0U), &Goals1_17, STATE_VARIABLE_ModeInfo_0_18, &STATE_VARIABLE_ModeInfo_21_21);
    if (succeeded)
    {
      *STATE_VARIABLE_ModeInfo_19 = STATE_VARIABLE_ModeInfo_21_21;
      *Vars_13 = Vars1_16;
      *Goals_14 = Goals1_17;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst_list\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ExtraGoals_0_6,
  MR_Word * STATE_VARIABLE_ExtraGoals_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
          *STATE_VARIABLE_ExtraGoals_7 = STATE_VARIABLE_ExtraGoals_0_6;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InitialInst_19;
      MR_Word InitialInsts_20;
      MR_Word FinalInst_21;
      MR_Word FinalInsts_22;
      MR_Word Var_24;
      MR_Word Vars_25;
      MR_Integer ArgNum_28;
      MR_Integer Var_33;
      MR_Word STATE_VARIABLE_ModeInfo_34_34;
      MR_Word STATE_VARIABLE_ExtraGoals_35_35;
      MR_Word STATE_VARIABLE_ModeInfo_36_36;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InitialInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        InitialInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FinalInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          FinalInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          Var_33 = (MR_Integer) 1;
          ArgNum_28 = (MR_Integer) ((MR_Unsigned) ArgNum0_4 + (MR_Unsigned) Var_33);
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_28, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_34_34);
          check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(Var0_17, InitialInst_19, FinalInst_21, &Var_24, STATE_VARIABLE_ExtraGoals_0_6, &STATE_VARIABLE_ExtraGoals_35_35, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_36_36);
          succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(Vars0_18, InitialInsts_20, FinalInsts_22, ArgNum_28, &Vars_25, STATE_VARIABLE_ExtraGoals_35_35, STATE_VARIABLE_ExtraGoals_7, STATE_VARIABLE_ModeInfo_36_36, STATE_VARIABLE_ModeInfo_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_25));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(
  MR_Word Var0_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_ExtraGoals_0_17,
  MR_Word * STATE_VARIABLE_ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_15;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &InstMap0_15);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_15);
    if (succeeded)
    {
      MR_Word VarInst0_16;
      MR_Word STATE_VARIABLE_ModeInfo_22_22;
      MR_Word STATE_VARIABLE_ModeInfo_24_24;
      MR_Word ModuleInfo0_38;
      MR_Word InitialInst_39;
      MR_Word VarInst1_40;
      MR_Word VarTypes0_41;
      MR_Word VarType_42;
      MR_Word Var_54;
      MR_Word _ModuleInfo_43;
      MR_Word _Sub_44;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_15, Var0_9, &VarInst0_16);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo0_38);
      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo0_38, InitialInst_10, &InitialInst_39);
      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo0_38, VarInst0_16, &VarInst1_40);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &VarTypes0_41);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_41, Var0_9, &VarType_42);
      Var_54 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
      succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(VarInst1_40, InitialInst_39, VarType_42, ModuleInfo0_38, &_ModuleInfo_43, Var_54, &_Sub_44);
      if (succeeded)
      {
        *Var_12 = Var0_9;
        STATE_VARIABLE_ModeInfo_22_22 = STATE_VARIABLE_ModeInfo_0_19;
        *STATE_VARIABLE_ExtraGoals_18 = STATE_VARIABLE_ExtraGoals_0_17;
      }
      else
      {
        succeeded = ((MR_tag((MR_Word) InitialInst_39)) == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_38, VarInst1_40);
        }
        if (succeeded)
        {
          MR_Word WaitingVars_47;
          MR_Word ModeError_48;

          *Var_12 = Var0_9;
          WaitingVars_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_9);
          {
            ModeError_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), ModeError_48, 1) = ((MR_Box) (Var0_9));
            MR_hl_field(MR_mktag(3), ModeError_48, 2) = ((MR_Box) (VarInst0_16));
            MR_hl_field(MR_mktag(3), ModeError_48, 3) = ((MR_Box) (InitialInst_39));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_47, ModeError_48, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_22_22);
          *STATE_VARIABLE_ExtraGoals_18 = STATE_VARIABLE_ExtraGoals_0_17;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo0_38, InitialInst_39);
          if (succeeded)
          {
            MR_Word WaitingVars_63;
            MR_Word ModeError_64;

            *Var_12 = Var0_9;
            WaitingVars_63 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_9);
            {
              ModeError_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ModeError_64, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ModeError_64, 1) = ((MR_Box) (Var0_9));
              MR_hl_field(MR_mktag(3), ModeError_64, 2) = ((MR_Box) (VarInst0_16));
              MR_hl_field(MR_mktag(3), ModeError_64, 3) = ((MR_Box) (InitialInst_39));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_63, ModeError_64, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_22_22);
            *STATE_VARIABLE_ExtraGoals_18 = STATE_VARIABLE_ExtraGoals_0_17;
          }
          else
          {
            MR_Word VarSet0_49;
            MR_Word VarSet_50;
            MR_Word VarTypes_51;
            MR_Word ExtraGoal_52;
            MR_Word NewUnifyExtraGoal_53;
            MR_Word STATE_VARIABLE_ModeInfo_38_57;
            MR_Word Var_60;

            check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &VarSet0_49);
            mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, VarSet0_49, &VarSet_50);
            hlds__vartypes__add_var_type_4_p_0(*Var_12, VarType_42, VarTypes0_41, &VarTypes_51);
            check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_50, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_38_57);
            check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_51, STATE_VARIABLE_ModeInfo_38_57, &STATE_VARIABLE_ModeInfo_22_22);
            check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Var0_9, *Var_12, VarType_42, STATE_VARIABLE_ModeInfo_22_22, &ExtraGoal_52);
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ExtraGoal_52));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              NewUnifyExtraGoal_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NewUnifyExtraGoal_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), NewUnifyExtraGoal_53, 1) = ((MR_Box) (Var_60));
            }
            check_hlds__modecheck_util__append_extra_goals_3_p_0(STATE_VARIABLE_ExtraGoals_0_17, NewUnifyExtraGoal_53, STATE_VARIABLE_ExtraGoals_18);
          }
        }
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Var0_9, FinalInst_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_24_24);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), ((MR_Box) (*Var_12)), ((MR_Box) (Var0_9)));
      if (succeeded)
        *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_24_24;
      else
      {
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(*Var_12, FinalInst_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_24_24, STATE_VARIABLE_ModeInfo_20);
      }
    }
    else
    {
      *Var_12 = Var0_9;
      *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
      *STATE_VARIABLE_ExtraGoals_18 = STATE_VARIABLE_ExtraGoals_0_17;
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
  MR_Word Var0_6,
  MR_Word NewInst_7,
  MR_Word MaybeUInst_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_33,
  MR_Word * STATE_VARIABLE_ModeInfo_34)
{
  {
    MR_bool succeeded;
    MR_Word PVars0_10;
    MR_Word InstMap0_11;
    MR_Word STATE_VARIABLE_ModeInfo_41_41;

    check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &PVars0_10);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &InstMap0_11);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_11);
    if (succeeded)
    {
      MR_Word OldInst_12;
      MR_Word ModuleInfo0_13;
      MR_Word ModuleInfo_14;
      MR_Word Inst_15;
      MR_Word VarTypes_19;
      MR_Word Type_20;
      MR_Word STATE_VARIABLE_ModeInfo_39_39;
      MR_Word Var_56;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var0_6, &OldInst_12);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &ModuleInfo0_13);
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(OldInst_12, NewInst_7);
      if (succeeded)
      {
        ModuleInfo_14 = ModuleInfo0_13;
        Inst_15 = OldInst_12;
      }
      else
      {
        MR_Word UnifyInst_16;
        MR_Word ModuleInfo1_18;
        MR_Word _Det_17;

        succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, OldInst_12, NewInst_7, (MR_Integer) 1, &UnifyInst_16, &_Det_17, ModuleInfo0_13, &ModuleInfo1_18);
        if (succeeded)
        {
          ModuleInfo_14 = ModuleInfo1_18;
          Inst_15 = UnifyInst_16;
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
            return;
          }
        }
      }
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_14, STATE_VARIABLE_ModeInfo_0_33, &STATE_VARIABLE_ModeInfo_39_39);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &VarTypes_19);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var0_6, &Type_20);
      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_14, Inst_15, &Var_56);
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) ((MR_Unsigned) 4U), Var_56);
      if (succeeded)
      {
        MR_Word InstMap_21;

        hlds__instmap__init_unreachable_1_p_0(&InstMap_21);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_21, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
      }
      else
      {
        succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(OldInst_12, Inst_15, Type_20, ModuleInfo_14);
        if (succeeded)
        {
          MR_Word InstMap_49;

          hlds__instmap__instmap_set_var_4_p_0(Var0_6, Inst_15, InstMap0_11, &InstMap_49);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_49, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
        }
        else
        {
          MR_Word Reason0_22;
          MR_Word UInst_23;

          succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(Inst_15, OldInst_12, Type_20, ModuleInfo_14);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_39_39, Var0_6, &Reason0_22);
            if (succeeded)
            {
              succeeded = (MaybeUInst_8 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                UInst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUInst_8, (MR_Integer) 0))));
                succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(Inst_15, UInst_23, Type_20, ModuleInfo_14);
                if (succeeded)
                  succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(Inst_15, OldInst_12, Type_20, ModuleInfo_14);
              }
              succeeded = !(succeeded);
            }
          }
          if (succeeded)
          {
            MR_Word WaitingVars_24;
            MR_Word ModeError_25;

            WaitingVars_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_6);
            {
              ModeError_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ModeError_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), ModeError_25, 1) = ((MR_Box) (Reason0_22));
              MR_hl_field(MR_mktag(3), ModeError_25, 2) = ((MR_Box) (Var0_6));
              MR_hl_field(MR_mktag(3), ModeError_25, 3) = ((MR_Box) (OldInst_12));
              MR_hl_field(MR_mktag(3), ModeError_25, 4) = ((MR_Box) (Inst_15));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_24, ModeError_25, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
          }
          else
          {
            MR_Word DelayInfo0_26;
            MR_Word DelayInfo_27;
            MR_Word STATE_VARIABLE_ModeInfo_44_44;
            MR_Word InstMap_50;

            hlds__instmap__instmap_set_var_4_p_0(Var0_6, Inst_15, InstMap0_11, &InstMap_50);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_50, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_44_44);
            check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_44_44, &DelayInfo0_26);
            check_hlds__delay_info__delay_info_bind_var_3_p_0(Var0_6, DelayInfo0_26, &DelayInfo_27);
            check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_27, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_41_41);
          }
        }
      }
    }
    else
      STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_0_33;
    if ((PVars0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_41_41;
    else
    {
      MR_Word NonLocals_28;
      MR_Word Bound0_29;
      MR_Word PVars1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PVars0_10, (MR_Integer) 1))));
      MR_Word PVars_32;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PVars0_10, (MR_Integer) 0))));

      NonLocals_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
      Bound0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1))));
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_28, Var0_6);
      if (succeeded)
      {
        MR_Word Bound_31;
        MR_Word Var_47;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_6, Bound0_29, &Bound_31);
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (NonLocals_28));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Bound_31));
        }
        {
          PVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PVars_32, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), PVars_32, 1) = ((MR_Box) (PVars1_30));
        }
      }
      else
        PVars_32 = PVars0_10;
      check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(PVars_32, STATE_VARIABLE_ModeInfo_41_41, STATE_VARIABLE_ModeInfo_34);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_var_inst_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Inst_6)
{
  {
    MR_Word ModuleInfo_7;
    MR_Word InstMap_8;
    MR_Word VarTypes_9;
    MR_Word Inst0_10;
    MR_Word Type_11;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_4, &ModuleInfo_7);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(ModeInfo_4, &InstMap_8);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(ModeInfo_4, &VarTypes_9);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_5, &Inst0_10);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, Var_5, &Type_11);
    check_hlds__mode_util__normalise_inst_4_p_0(ModuleInfo_7, Type_11, Inst0_10, Inst_6);
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word InstMap_10;
    MR_Word VarInst_11;
    MR_Word ModuleInfo0_12;
    MR_Word ModuleInfo_13;
    MR_Word Var_19;
    MR_Word _Subst_14;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_17, &InstMap_10);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_10, Var_6, &VarInst_11);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_17, &ModuleInfo0_12);
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(VarInst_11, Inst_8, Type_7, ModuleInfo0_12, &ModuleInfo_13, Var_19, &_Subst_14);
    if (succeeded)
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_13, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
    else
    {
      MR_Word WaitingVars_15;
      MR_Word ModeError_16;

      WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6);
      {
        ModeError_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), ModeError_16, 1) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(3), ModeError_16, 2) = ((MR_Box) (VarInst_11));
        MR_hl_field(MR_mktag(3), ModeError_16, 3) = ((MR_Box) (Inst_8));
        MR_hl_field(MR_mktag(3), ModeError_16, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_15, ModeError_16, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(
  MR_Word Vars_7,
  MR_Word Insts_8,
  MR_Integer ArgNum_9,
  MR_Word * Subst_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_ModeInfo_15_15;
    MR_Word HeadInstVars_24;
    MR_Word Var_30;
    MR_Box conv0_Var_25;

    Var_14 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(Vars_7, Insts_8, ArgNum_9, Var_14, Subst_10, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_15_15);
    check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &HeadInstVars_24);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (HeadInstVars_24));
    }
    succeeded = mercury__map__foldl_4_p_3((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Var_30, *Subst_10, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_25);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *STATE_VARIABLE_ModeInfo_13 = STATE_VARIABLE_ModeInfo_15_15;
    else
    {
      MR_Word InstMap_26;
      MR_Word VarInsts_27;
      MR_Word WaitingVars_28;
      MR_Word ModeError_29;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &InstMap_26);
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_26, Vars_7, &VarInsts_27);
      WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_7);
      {
        ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), ModeError_29, 1) = ((MR_Box) (Vars_7));
        MR_hl_field(MR_mktag(3), ModeError_29, 2) = ((MR_Box) (VarInsts_27));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, ModeError_29, STATE_VARIABLE_ModeInfo_15_15, STATE_VARIABLE_ModeInfo_13);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModeInfo_7 = STATE_VARIABLE_ModeInfo_0_6;
        *STATE_VARIABLE_Subst_5 = STATE_VARIABLE_Subst_0_4;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Inst_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Insts_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_44 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_50_50;
        MR_Word STATE_VARIABLE_Subst_51_51;
        MR_Word STATE_VARIABLE_ModeInfo_52_52;
        MR_Word Inst_65;
        MR_Word InstMap_66;
        MR_Word VarInst_67;
        MR_Word VarTypes_68;
        MR_Word Type_69;
        MR_Word ModuleInfo0_70;
        MR_Word ModuleInfo_71;
        MR_Word STATE_VARIABLE_Subst_27_77;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_6;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_44, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_50_50);
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(STATE_VARIABLE_Subst_0_4, Inst_39, &Inst_65);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap_66);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_66, Var_56, &VarInst_67);
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarTypes_68);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_68, Var_56, &Type_69);
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &ModuleInfo0_70);
        succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(VarInst_67, Inst_65, Type_69, ModuleInfo0_70, &ModuleInfo_71, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_27_77);
        if (succeeded)
        {
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_27_77;
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_71, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_52_52);
        }
        else
        {
          MR_Word MultiModeMap_72;
          MR_Word MaybeMultiModeError_74;
          MR_Word WaitingVars_75;
          MR_Word ModeError_76;
          MR_Word MultiModeError_73;
          MR_Box conv0_MultiModeError_73;

          check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &MultiModeMap_72);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), MultiModeMap_72, ((MR_Box) (Var_56)), &conv0_MultiModeError_73);
          if (succeeded)
          {
            MultiModeError_73 = ((MR_Word) (conv0_MultiModeError_73));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MaybeMultiModeError_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeMultiModeError_74, 0) = ((MR_Box) (MultiModeError_73));
            }
          else
            MaybeMultiModeError_74 = (MR_Word) ((MR_Unsigned) 0U);
          WaitingVars_75 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_56);
          {
            ModeError_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_76, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), ModeError_76, 1) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), ModeError_76, 2) = ((MR_Box) (VarInst_67));
            MR_hl_field(MR_mktag(3), ModeError_76, 3) = ((MR_Box) (Inst_65));
            MR_hl_field(MR_mktag(3), ModeError_76, 4) = ((MR_Box) (MaybeMultiModeError_74));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_75, ModeError_76, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_52_52);
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_55;
        next_value_of_HeadVar__2_2 = Insts_40;
        next_value_of_HeadVar__3_3 = ArgNum_44;
        next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_51_51;
        next_value_of_STATE_VARIABLE_ModeInfo_0_6 = STATE_VARIABLE_ModeInfo_52_52;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
        STATE_VARIABLE_ModeInfo_0_6 = next_value_of_STATE_VARIABLE_ModeInfo_0_6;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(
  MR_Word Vars_7,
  MR_Word Insts_8,
  MR_Integer ArgNum_9,
  MR_Word * Subst_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_ModeInfo_15_15;
    MR_Word HeadInstVars_24;
    MR_Word Var_30;
    MR_Box conv0_Var_25;

    Var_14 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(Vars_7, Insts_8, ArgNum_9, Var_14, Subst_10, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_15_15);
    check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &HeadInstVars_24);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (HeadInstVars_24));
    }
    succeeded = mercury__map__foldl_4_p_3((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Var_30, *Subst_10, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_25);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *STATE_VARIABLE_ModeInfo_13 = STATE_VARIABLE_ModeInfo_15_15;
    else
    {
      MR_Word InstMap_26;
      MR_Word VarInsts_27;
      MR_Word WaitingVars_28;
      MR_Word ModeError_29;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &InstMap_26);
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_26, Vars_7, &VarInsts_27);
      WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_7);
      {
        ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), ModeError_29, 1) = ((MR_Box) (Vars_7));
        MR_hl_field(MR_mktag(3), ModeError_29, 2) = ((MR_Box) (VarInsts_27));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, ModeError_29, STATE_VARIABLE_ModeInfo_15_15, STATE_VARIABLE_ModeInfo_13);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModeInfo_7 = STATE_VARIABLE_ModeInfo_0_6;
        *STATE_VARIABLE_Subst_5 = STATE_VARIABLE_Subst_0_4;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Inst_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Insts_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_44 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_50_50;
        MR_Word STATE_VARIABLE_Subst_51_51;
        MR_Word STATE_VARIABLE_ModeInfo_52_52;
        MR_Word Inst_65;
        MR_Word InstMap_66;
        MR_Word VarInst_67;
        MR_Word VarTypes_68;
        MR_Word Type_69;
        MR_Word ModuleInfo0_70;
        MR_Word ModuleInfo_71;
        MR_Word STATE_VARIABLE_Subst_27_77;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_6;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_44, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_50_50);
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(STATE_VARIABLE_Subst_0_4, Inst_39, &Inst_65);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap_66);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_66, Var_56, &VarInst_67);
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarTypes_68);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_68, Var_56, &Type_69);
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &ModuleInfo0_70);
        succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(VarInst_67, Inst_65, Type_69, ModuleInfo0_70, &ModuleInfo_71, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_27_77);
        if (succeeded)
        {
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_27_77;
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_71, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_52_52);
        }
        else
        {
          MR_Word MultiModeMap_72;
          MR_Word MaybeMultiModeError_74;
          MR_Word WaitingVars_75;
          MR_Word ModeError_76;
          MR_Word MultiModeError_73;
          MR_Box conv0_MultiModeError_73;

          check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &MultiModeMap_72);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), MultiModeMap_72, ((MR_Box) (Var_56)), &conv0_MultiModeError_73);
          if (succeeded)
          {
            MultiModeError_73 = ((MR_Word) (conv0_MultiModeError_73));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MaybeMultiModeError_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeMultiModeError_74, 0) = ((MR_Box) (MultiModeError_73));
            }
          else
            MaybeMultiModeError_74 = (MR_Word) ((MR_Unsigned) 0U);
          WaitingVars_75 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_56);
          {
            ModeError_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_76, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), ModeError_76, 1) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), ModeError_76, 2) = ((MR_Box) (VarInst_67));
            MR_hl_field(MR_mktag(3), ModeError_76, 3) = ((MR_Box) (Inst_65));
            MR_hl_field(MR_mktag(3), ModeError_76, 4) = ((MR_Box) (MaybeMultiModeError_74));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_75, ModeError_76, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_52_52);
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_55;
        next_value_of_HeadVar__2_2 = Insts_40;
        next_value_of_HeadVar__3_3 = ArgNum_44;
        next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_51_51;
        next_value_of_STATE_VARIABLE_ModeInfo_0_6 = STATE_VARIABLE_ModeInfo_52_52;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
        STATE_VARIABLE_ModeInfo_0_6 = next_value_of_STATE_VARIABLE_ModeInfo_0_6;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word IsLive_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word IsLives_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_32 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_36_36;
        MR_Word STATE_VARIABLE_ModeInfo_37_37;
        MR_Word VarIsLive_46;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_32, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_36_36);
        check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_36_36, Var_40, &VarIsLive_46);
        succeeded = (IsLive_28 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (VarIsLive_46 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word WaitingVars_47;
          MR_Word ModeError_48;

          WaitingVars_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40);
          {
            ModeError_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ModeError_48, 1) = ((MR_Box) (Var_40));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_47, ModeError_48, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_37_37);
        }
        else
          STATE_VARIABLE_ModeInfo_37_37 = STATE_VARIABLE_ModeInfo_36_36;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = IsLives_29;
        next_value_of_HeadVar__3_3 = ArgNum_32;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_37_37;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word IsLive_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word IsLives_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_32 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_36_36;
        MR_Word STATE_VARIABLE_ModeInfo_37_37;
        MR_Word VarIsLive_46;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_32, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_36_36);
        check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_36_36, Var_40, &VarIsLive_46);
        succeeded = (VarIsLive_46 == IsLive_28);
        if (succeeded)
          STATE_VARIABLE_ModeInfo_37_37 = STATE_VARIABLE_ModeInfo_36_36;
        else
        {
          MR_Word WaitingVars_47;
          MR_Word ModeError_48;

          WaitingVars_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40);
          {
            ModeError_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ModeError_48, 1) = ((MR_Box) (Var_40));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_47, ModeError_48, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_37_37);
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = IsLives_29;
        next_value_of_HeadVar__3_3 = ArgNum_32;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_37_37;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__compute_arg_offset_2_p_0(
  MR_Word PredInfo_3,
  MR_Integer * ArgOffset_4)
{
  {
    MR_Integer OrigArity_5;
    MR_Word ArgTypes_6;
    MR_Integer CurrentArity_7;

    OrigArity_5 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_3);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_3, &ArgTypes_6);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &CurrentArity_7);
    *ArgOffset_4 = (MR_Integer) ((MR_Unsigned) OrigArity_5 - (MR_Unsigned) CurrentArity_7);
  }
}

void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_9_p_0(
  MR_Word MainGoal_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = MainGoal_1;
      *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
    }
    else
    {
      MR_Word BeforeGoals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word AfterGoals0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Errors_27;

      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_8, &Errors_27);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(HeadVar__6_6);
      if (succeeded)
        succeeded = (Errors_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word NonLocals0_28;
        MR_Word OldArgVars_29;
        MR_Word NewArgVars_30;
        MR_Word IntroducedVars_31;
        MR_Word OutsideVars_32;
        MR_Word NonLocals_33;
        MR_Word GoalInfo_34;
        MR_Word Goal0_35;
        MR_Word Context_36;
        MR_Word BeforeGoals_37;
        MR_Word AfterGoals_38;
        MR_Word GoalList0_39;
        MR_Word MayChangeCalledProc0_40;
        MR_Word GoalList_41;
        MR_Word Var_44;
        MR_Word STATE_VARIABLE_ModeInfo_46_46;
        MR_Word STATE_VARIABLE_ModeInfo_48_48;
        MR_Word STATE_VARIABLE_ModeInfo_49_49;
        MR_Word STATE_VARIABLE_ModeInfo_51_51;
        MR_Word STATE_VARIABLE_ModeInfo_52_52;
        MR_Word STATE_VARIABLE_ModeInfo_55_55;

        NonLocals0_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(HeadVar__3_3);
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__4_4, &OldArgVars_29);
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__5_5, &NewArgVars_30);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewArgVars_30, OldArgVars_29, &IntroducedVars_31);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_28, IntroducedVars_31, &OutsideVars_32);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_32, NewArgVars_30, &NonLocals_33);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_33, HeadVar__3_3, &GoalInfo_34);
        {
          Goal0_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal0_35, 0) = ((MR_Box) (MainGoal_1));
          MR_hl_field(MR_mktag(0), Goal0_35, 1) = ((MR_Box) (GoalInfo_34));
        }
        Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadVar__3_3);
        check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(BeforeGoals0_19, Context_36, &BeforeGoals_37);
        check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(AfterGoals0_20, Context_36, &AfterGoals_38);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Goal0_35));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (AfterGoals_38));
        }
        GoalList0_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BeforeGoals_37, Var_44);
        check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(STATE_VARIABLE_ModeInfo_0_8, &MayChangeCalledProc0_40);
        check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_46_46);
        check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_46_46, &STATE_VARIABLE_ModeInfo_48_48);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(HeadVar__6_6, STATE_VARIABLE_ModeInfo_48_48, &STATE_VARIABLE_ModeInfo_49_49);
        check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0((MR_Integer) 0, GoalList0_39, STATE_VARIABLE_ModeInfo_49_49, &STATE_VARIABLE_ModeInfo_51_51);
        check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(GoalList0_39, &GoalList_41, STATE_VARIABLE_ModeInfo_51_51, &STATE_VARIABLE_ModeInfo_52_52);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (GoalList_41));
        }
        check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_52_52, &STATE_VARIABLE_ModeInfo_55_55);
        check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(MayChangeCalledProc0_40, STATE_VARIABLE_ModeInfo_55_55, STATE_VARIABLE_ModeInfo_9);
      }
      else
      {
        *HeadVar__7_7 = MainGoal_1;
        *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word GoalInfo_12;

    hlds__hlds_goal__goal_info_set_context_3_p_0(HeadVar__2_2, GoalInfo0_11, &GoalInfo_12);
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_8, 0) = ((MR_Box) (GoalExpr_10));
      MR_hl_field(MR_mktag(0), Goal_8, 1) = ((MR_Box) (GoalInfo_12));
    }
    check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(Goals0_6, HeadVar__2_2, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_4 = STATE_VARIABLE_ModeInfo_0_3;
    }
    else
    {
      MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_10;
      MR_Word Goals_11;
      MR_Word NonLocals_13;
      MR_Word InstMap_14;
      MR_Word STATE_VARIABLE_ModeInfo_17_17;
      MR_Word STATE_VARIABLE_ModeInfo_18_18;

      NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_8);
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_13, STATE_VARIABLE_ModeInfo_0_3, &STATE_VARIABLE_ModeInfo_17_17);
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_18_18);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_18_18, &InstMap_14);
      succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_14);
      if (succeeded)
      {
        check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals0_9, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_4);
        Goals_11 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
      }
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * STATE_VARIABLE_ModeInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_3 = STATE_VARIABLE_ModeInfo_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_17_17;
      MR_Word ConjGoals_10;
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
      MR_Word Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 2))));
        succeeded = (Var_16 == (MR_Integer) 0);
      }
      if (succeeded)
        check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(ConjGoals_10, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_17_17);
      else
      {
        MR_Word NonLocals_12;

        NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_7);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_12, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_ModeInfo_0_2 = STATE_VARIABLE_ModeInfo_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModeInfo_0_2 = next_value_of_STATE_VARIABLE_ModeInfo_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_4 = STATE_VARIABLE_ModeInfo_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word ConjGoals_13;
      MR_Word Var_19;
      MR_Word Var_22;

      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(HeadVar__1_1, Goals_11, STATE_VARIABLE_ModeInfo_0_3, &STATE_VARIABLE_ModeInfo_18_18);
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 2))));
        succeeded = (HeadVar__1_1 == Var_22);
      }
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = ConjGoals_13;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_3 = STATE_VARIABLE_ModeInfo_18_18;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_ModeInfo_0_3 = next_value_of_STATE_VARIABLE_ModeInfo_0_3;
        continue;
      }
      else
      {
        MR_Word NonLocals_15;

        NonLocals_15 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_10);
        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_15, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_4);
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__append_extra_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = HeadVar__2_2;
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word BeforeGoals1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word AfterGoals1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word BeforeGoals_11;
      MR_Word AfterGoals_12;

      BeforeGoals_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_15, BeforeGoals1_9);
      AfterGoals_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_14, AfterGoals1_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BeforeGoals_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AfterGoals_12));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_util____Compare____after_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_util____Compare____extra_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_util____Unify____inst_expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_util____Compare____inst_expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__modecheck_util__init(void)
{
}

void mercury__check_hlds__modecheck_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0);
}

void mercury__check_hlds__modecheck_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_util.
