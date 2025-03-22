/*
** Automatically generated from `modecheck_util.m'
** by the Mercury compiler,
** version rotd-2025-03-22
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.polymorphism_goal.mih"
#include "check_hlds.polymorphism_info.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

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

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_modecheck_arg_offset_0[1];

static const MR_NotagFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__notag_functor_desc_modecheck_arg_offset_0;

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
check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word BoundFunctor_8,
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
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31,
  MR_Word STATE_VARIABLE_Expansions_0_32,
  MR_Word * STATE_VARIABLE_Expansions_33);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_acc_bound_head_inst_var_5_p_0(
  MR_Word HeadInstVars_6,
  MR_Word InstVar_7,
  MR_Word Subst_8,
  MR_Word STATE_VARIABLE_BoundInstVars_0_19,
  MR_Word * STATE_VARIABLE_BoundInstVars_20);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_functor_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_insts_loop_9_p_0(
  MR_Word ArgOffset0_10,
  MR_Word Vars0_11,
  MR_Word InitialInsts_12,
  MR_Word FinalInsts_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ExtraGoals_0_28,
  MR_Word * STATE_VARIABLE_ExtraGoals_29,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
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

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____modecheck_arg_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____modecheck_arg_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9];




static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__modecheck_util_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   1 */
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
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row   2 */
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
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0) }
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
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
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

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = { &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = { &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____after_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____after_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "after_goals",
  { check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0 },
  { check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0,

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

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = { &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = { &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____extra_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____extra_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "extra_goals",
  { check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0 },
  { check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "inst_expansions",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_modecheck_arg_offset_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__notag_functor_desc_modecheck_arg_offset_0 = {
  (MR_String) "modecheck_arg_offset",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_modecheck_arg_offset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__modecheck_util____Unify____modecheck_arg_offset_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____modecheck_arg_offset_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "modecheck_arg_offset",
  { &check_hlds__modecheck_util__check_hlds__modecheck_util__notag_functor_desc_modecheck_arg_offset_0 },
  { &check_hlds__modecheck_util__check_hlds__modecheck_util__notag_functor_desc_modecheck_arg_offset_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_modecheck_arg_offset_0,

};

void MR_CALL 
check_hlds__modecheck_util____Compare____modecheck_arg_offset_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____modecheck_arg_offset_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__instmap____Compare____instmap_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
  MR_Word SubInst_5,
  MR_Word InstVar_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.add_constrained_inst\'/4", (MR_String) "SubInst differs");
        return;
      }
    *STATE_VARIABLE_Map_10 = STATE_VARIABLE_Map_0_9;
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_6)), ((MR_Box) (SubInst_5)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_31;
  MR_Word conv0_STATE_VARIABLE_Expansions_33;

  check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_33));
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word BoundFunctor_8,
  MR_Word STATE_VARIABLE_Map_0_13,
  MR_Word * STATE_VARIABLE_Map_14,
  MR_Word STATE_VARIABLE_Expansions_0_15,
  MR_Word * STATE_VARIABLE_Expansions_16)
{
  MR_Word Insts_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
  MR_Word Var_17;
  MR_Box conv3_STATE_VARIABLE_Map_14;
  MR_Box conv2_STATE_VARIABLE_Expansions_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[2]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_17, Insts_12, ((MR_Box) (STATE_VARIABLE_Map_0_13)), &conv3_STATE_VARIABLE_Map_14, ((MR_Box) (STATE_VARIABLE_Expansions_0_15)), &conv2_STATE_VARIABLE_Expansions_16);
  *STATE_VARIABLE_Map_14 = ((MR_Word) (conv3_STATE_VARIABLE_Map_14));
  *STATE_VARIABLE_Expansions_16 = ((MR_Word) (conv2_STATE_VARIABLE_Expansions_16));
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
  MR_Word InitialInst_11;
  MR_Word FinalInst_12;
  MR_Word STATE_VARIABLE_Map_17_17;
  MR_Word STATE_VARIABLE_Expansions_18_18;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_7, Mode_8, &InitialInst_11, &FinalInst_12);
  check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(ModuleInfo_7, InitialInst_11, STATE_VARIABLE_Map_0_13, &STATE_VARIABLE_Map_17_17, STATE_VARIABLE_Expansions_0_15, &STATE_VARIABLE_Expansions_18_18);
  check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(ModuleInfo_7, FinalInst_12, STATE_VARIABLE_Map_17_17, STATE_VARIABLE_Map_14, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_16);
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_Map_14;
  MR_Word conv14_STATE_VARIABLE_Expansions_16;

  check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_Expansions_16);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Map_14));
  *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_Expansions_16));
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Map_10;

  check_hlds__modecheck_util__add_constrained_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Map_10);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Map_10));
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Map_14;
  MR_Word conv8_STATE_VARIABLE_Expansions_16;

  check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Expansions_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Map_14));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Expansions_16));
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
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Map_14;
  MR_Word conv4_STATE_VARIABLE_Expansions_16;

  check_hlds__modecheck_util__get_constrained_insts_in_bound_functor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Expansions_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Map_14));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Expansions_16));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_14;
  MR_Word conv0_STATE_VARIABLE_Expansions_16;

  check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_16));
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31,
  MR_Word STATE_VARIABLE_Expansions_0_32,
  MR_Word * STATE_VARIABLE_Expansions_33)
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
              *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
              *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
              *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_75 = ((MR_Word) ((MR_hl_field(1, Inst_8, (MR_Integer) 1))));

          if ((HOInstInfo_75 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
            *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
          }
          else
          {
            MR_Word PredInstInfo_73 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_75), (MR_Integer) 1));
            MR_Word Modes_85 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_73, (MR_Integer) 1))));
            MR_Word Var_88;
            MR_Box conv17_STATE_VARIABLE_Map_31;
            MR_Box conv16_STATE_VARIABLE_Expansions_33;

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_5));
              MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_88, 3) = ((MR_Box) (ModuleInfo_7));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_88, Modes_85, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv17_STATE_VARIABLE_Map_31, ((MR_Box) (STATE_VARIABLE_Expansions_0_32)), &conv16_STATE_VARIABLE_Expansions_33);
            *STATE_VARIABLE_Map_31 = ((MR_Word) (conv17_STATE_VARIABLE_Map_31));
            *STATE_VARIABLE_Expansions_33 = ((MR_Word) (conv16_STATE_VARIABLE_Expansions_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(2, Inst_8, (MR_Integer) 1))));
          MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_8, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) InstResults_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_37;
                    MR_Box conv7_STATE_VARIABLE_Map_31;
                    MR_Box conv6_STATE_VARIABLE_Expansions_33;

                    {
                      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                      MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2));
                      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_37, 3) = ((MR_Box) (ModuleInfo_7));
                    }
                    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_37, BoundFunctors_13, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv7_STATE_VARIABLE_Map_31, ((MR_Box) (STATE_VARIABLE_Expansions_0_32)), &conv6_STATE_VARIABLE_Expansions_33);
                    *STATE_VARIABLE_Map_31 = ((MR_Word) (conv7_STATE_VARIABLE_Map_31));
                    *STATE_VARIABLE_Expansions_33 = ((MR_Word) (conv6_STATE_VARIABLE_Expansions_33));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
                    *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InstVarsResult_17 = ((MR_Word) ((MR_hl_field(1, InstResults_12, (MR_Integer) 2))));
                MR_Word TypeInfo_50_50;
                MR_Word InstVars_20;

                succeeded = (InstVarsResult_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  InstVars_20 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_17, (MR_Integer) 0))));
                  TypeInfo_50_50 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]);
                  succeeded = mercury__set__is_empty_1_p_0(TypeInfo_50_50, InstVars_20);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
                  *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
                }
                else
                {
                  MR_Word Var_34;
                  MR_Box conv11_STATE_VARIABLE_Map_31;
                  MR_Box conv10_STATE_VARIABLE_Expansions_33;

                  {
                    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                    MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3));
                    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_34, 3) = ((MR_Box) (ModuleInfo_7));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_34, BoundFunctors_13, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv11_STATE_VARIABLE_Map_31, ((MR_Box) (STATE_VARIABLE_Expansions_0_32)), &conv10_STATE_VARIABLE_Expansions_33);
                  *STATE_VARIABLE_Map_31 = ((MR_Word) (conv11_STATE_VARIABLE_Map_31));
                  *STATE_VARIABLE_Expansions_33 = ((MR_Word) (conv10_STATE_VARIABLE_Expansions_33));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_27 = ((MR_Word) ((MR_hl_field(3, Inst_8, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_44_44;

              succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_27)), STATE_VARIABLE_Expansions_0_32, &STATE_VARIABLE_Expansions_44_44);
              if (succeeded)
              {
                MR_Word ExpandedInst_28;
                MR_Word next_value_of_Inst_8;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_32;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_7, InstName_27, &ExpandedInst_28);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_8 = ExpandedInst_28;
                next_value_of_STATE_VARIABLE_Expansions_0_32 = STATE_VARIABLE_Expansions_44_44;
                Inst_8 = next_value_of_Inst_8;
                STATE_VARIABLE_Expansions_0_32 = next_value_of_STATE_VARIABLE_Expansions_0_32;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
                *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_26;
              MR_Word Var_42;
              MR_Word InstVars_49 = ((MR_Word) ((MR_hl_field(3, Inst_8, (MR_Integer) 1))));
              MR_Box conv13_STATE_VARIABLE_Map_31;

              check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_7, Inst_8, &SubInst_26);
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[1]));
                MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_4));
                MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_42, 3) = ((MR_Box) (SubInst_26));
              }
              mercury__set__fold_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), Var_42, InstVars_49, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv13_STATE_VARIABLE_Map_31);
              *STATE_VARIABLE_Map_31 = ((MR_Word) (conv13_STATE_VARIABLE_Map_31));
              *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_22 = ((MR_Word) ((MR_hl_field(3, Inst_8, (MR_Integer) 2))));

              if ((HOInstInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_Map_31 = STATE_VARIABLE_Map_0_30;
                *STATE_VARIABLE_Expansions_33 = STATE_VARIABLE_Expansions_0_32;
              }
              else
              {
                MR_Word PredInstInfo_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_22), (MR_Integer) 1));
                MR_Word Modes_77 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_24, (MR_Integer) 1))));
                MR_Word Var_80;
                MR_Box conv3_STATE_VARIABLE_Map_31;
                MR_Box conv2_STATE_VARIABLE_Expansions_33;

                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_80, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
                  MR_hl_field(0, Var_80, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1));
                  MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_80, 3) = ((MR_Box) (ModuleInfo_7));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_80, Modes_77, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv3_STATE_VARIABLE_Map_31, ((MR_Box) (STATE_VARIABLE_Expansions_0_32)), &conv2_STATE_VARIABLE_Expansions_33);
                *STATE_VARIABLE_Map_31 = ((MR_Word) (conv3_STATE_VARIABLE_Map_31));
                *STATE_VARIABLE_Expansions_33 = ((MR_Word) (conv2_STATE_VARIABLE_Expansions_33));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "inst_var");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_acc_bound_head_inst_var_5_p_0(
  MR_Word HeadInstVars_6,
  MR_Word InstVar_7,
  MR_Word Subst_8,
  MR_Word STATE_VARIABLE_BoundInstVars_0_19,
  MR_Word * STATE_VARIABLE_BoundInstVars_20)
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
    MR_Word BoundFunctors_15;
    MR_Word SubstUniq_16;
    MR_Word SubstBoundFunctors_18;

    succeeded = ((((MR_tag((MR_Word) Subst_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Subst_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      SubstInstVars_11 = ((MR_Word) ((MR_hl_field(3, Subst_8, (MR_Integer) 1))));
      SubstInst_12 = ((MR_Word) ((MR_hl_field(3, Subst_8, (MR_Integer) 2))));
      TypeInfo_23_23 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]);
      succeeded = mercury__set__member_2_p_0(TypeInfo_23_23, ((MR_Box) (InstVar_7)), SubstInstVars_11);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 2);
        if (succeeded)
        {
          Uniq_13 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          BoundFunctors_15 = ((MR_Word) ((MR_hl_field(2, Inst_10, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) SubstInst_12)) == (MR_Integer) 2);
          if (succeeded)
          {
            SubstUniq_16 = ((MR_Unsigned) ((MR_hl_field(2, SubstInst_12, (MR_Integer) 0))) & (MR_Integer) 7);
            SubstBoundFunctors_18 = ((MR_Word) ((MR_hl_field(2, SubstInst_12, (MR_Integer) 2))));
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_25_25;

          succeeded = (Uniq_13 == SubstUniq_16);
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (BoundFunctors_15)), ((MR_Box) (SubstBoundFunctors_18)));
          }
        }
        else
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_10, SubstInst_12);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_BoundInstVars_20 = STATE_VARIABLE_BoundInstVars_0_19;
    else
      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), ((MR_Box) (InstVar_7)), STATE_VARIABLE_BoundInstVars_0_19, STATE_VARIABLE_BoundInstVars_20);
  }
  else
    *STATE_VARIABLE_BoundInstVars_20 = STATE_VARIABLE_BoundInstVars_0_19;
}

void MR_CALL 
check_hlds__modecheck_util__normalise_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.normalise_insts\'/4", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.normalise_insts\'/4", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Inst_23;
      MR_Word Insts_24;

      check_hlds__modecheck_util__normalise_inst_4_p_0(ModuleInfo_1, Var_26, Inst0_21, &Inst_23);
      check_hlds__modecheck_util__normalise_insts_4_p_0(ModuleInfo_1, Var_25, Insts0_22, &Insts_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(
  MR_Word Var_6,
  MR_Word InstMap0_7,
  MR_Word InstMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word InstMapDelta0_13;
  MR_Word Inst0_14;
  MR_Word Inst_15;

  InstMapDelta0_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_12);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_7, Var_6, &Inst0_14);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_6, &Inst_15);
  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_15, Inst0_14);
  if (succeeded)
    *Goal_10 = Goal0_9;
  else
  {
    MR_Word InstMapDelta_16;
    MR_Word GoalInfo_17;

    hlds__instmap__instmap_delta_set_var_4_p_0(Var_6, Inst_15, InstMapDelta0_13, &InstMapDelta_16);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_16, GoalInfo0_12, &GoalInfo_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
    }
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_14;
  MR_Word conv0_STATE_VARIABLE_Expansions_16;

  check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Expansions_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Expansions_16));
}

void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Modes_5,
  MR_Word * Map_6)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Box conv3_Map_6;
  MR_Box conv2__Expansions_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_4));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  Var_10 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_2[0]), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[1]), Var_8, Modes_5, ((MR_Box) (Var_9)), &conv3_Map_6, ((MR_Box) (Var_10)), &conv2__Expansions_7);
  *Map_6 = ((MR_Word) (conv3_Map_6));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word IsLive_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word IsLives_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
            MR_hl_field(1, base, 1) = ((MR_Box) (LiveVars0_19));
          }
          break;
      }
    }
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
  MR_bool succeeded = ((((MR_tag((MR_Word) GoalExpr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word InstMapDelta_12;
  MR_Word Var_19;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
    succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_12);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_7, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
  }
  else
  {
    MR_Word NonLocals_13;
    MR_Word InstMap_14;

    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_15);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_17, &InstMap_14);
    hlds__instmap__compute_instmap_delta_4_p_0(InstMap0_7, InstMap_14, NonLocals_13, &InstMapDelta_12);
    *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_0_17;
  }
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_12, STATE_VARIABLE_GoalInfo_0_15, STATE_VARIABLE_GoalInfo_16);
}

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctor_8;

  conv0_BoundFunctor_8 = check_hlds__modecheck_util__cons_id_to_bound_functor_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctor_8));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0(
  MR_Word Var_6,
  MR_Word MainConsId_7,
  MR_Word OtherConsIds_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word ModuleInfo_10;
  MR_Word VarTable_11;
  MR_Word Type_12;
  MR_Word BoundFunctors_13;
  MR_Word Inst_14;
  MR_Word Var_17;
  MR_Word Var_18;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo_10);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &VarTable_11);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_11, Var_6, &Type_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (Type_12));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MainConsId_7));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (OtherConsIds_8));
  }
  BoundFunctors_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_17, Var_18);
  {
    Inst_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Inst_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, Inst_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Inst_14, 2) = ((MR_Box) (BoundFunctors_13));
  }
  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Var_6, Inst_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_15, STATE_VARIABLE_ModeInfo_16);
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_record_functor_test_4_p_0(
  MR_Word Var_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14)
{
  MR_Word ModuleInfo_8;
  MR_Word VarTable_9;
  MR_Word Type_10;
  MR_Word BoundFunctor_11;
  MR_Word Inst_12;
  MR_Word Var_17;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &ModuleInfo_8);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_13, &VarTable_9);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, Var_5, &Type_10);
  BoundFunctor_11 = check_hlds__modecheck_util__cons_id_to_bound_functor_3_f_0(ModuleInfo_8, Type_10, ConsId_6);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (BoundFunctor_11));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Inst_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Inst_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, Inst_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Inst_12, 2) = ((MR_Box) (Var_17));
  }
  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Var_5, Inst_12, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_13, STATE_VARIABLE_ModeInfo_14);
}

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_functor_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word BoundFunctor_8;
  MR_Integer ConsIdArity_10;
  MR_Word ArgInsts_11;
  MR_Word DuCtor_9;

  if (succeeded)
  {
    DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    ConsIdArity_10 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(ModuleInfo_5, Type_6, DuCtor_9);
  }
  else
    ConsIdArity_10 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_7);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ConsIdArity_10, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_11);
  {
    BoundFunctor_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BoundFunctor_8, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(0, BoundFunctor_8, 1) = ((MR_Box) (ArgInsts_11));
  }
  return BoundFunctor_8;
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(
  MR_Word ArgOffset_9,
  MR_Word Vars0_10,
  MR_Word InitialInsts_11,
  MR_Word FinalInsts_12,
  MR_Word * Vars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17)
{
  check_hlds__modecheck_util__modecheck_set_var_insts_loop_9_p_0(ArgOffset_9, Vars0_10, InitialInsts_11, FinalInsts_12, Vars_13, (MR_Word) ((MR_Unsigned) 0U), ExtraGoals_14, STATE_VARIABLE_ModeInfo_0_16, STATE_VARIABLE_ModeInfo_17);
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_insts_loop_9_p_0(
  MR_Word ArgOffset0_10,
  MR_Word Vars0_11,
  MR_Word InitialInsts_12,
  MR_Word FinalInsts_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ExtraGoals_0_28,
  MR_Word * STATE_VARIABLE_ExtraGoals_29,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  MR_bool succeeded = (Vars0_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar0_17;
  MR_Word TailVars0_18;
  MR_Word HeadInitialInst_19;
  MR_Word TailInitialInsts_20;
  MR_Word HeadFinalInst_21;
  MR_Word TailFinalInsts_22;

  if (succeeded)
  {
    HeadVar0_17 = ((MR_Word) ((MR_hl_field(1, Vars0_11, (MR_Integer) 0))));
    TailVars0_18 = ((MR_Word) ((MR_hl_field(1, Vars0_11, (MR_Integer) 1))));
    succeeded = (InitialInsts_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadInitialInst_19 = ((MR_Word) ((MR_hl_field(1, InitialInsts_12, (MR_Integer) 0))));
      TailInitialInsts_20 = ((MR_Word) ((MR_hl_field(1, InitialInsts_12, (MR_Integer) 1))));
      succeeded = (FinalInsts_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadFinalInst_21 = ((MR_Word) ((MR_hl_field(1, FinalInsts_13, (MR_Integer) 0))));
        TailFinalInsts_22 = ((MR_Word) ((MR_hl_field(1, FinalInsts_13, (MR_Integer) 1))));
      }
    }
  }
  if (succeeded)
  {
    MR_Integer ArgNum0_23 = (MR_Integer) (ArgOffset0_10);
    MR_Integer ArgNum_24 = (MR_Integer) ((MR_Unsigned) ArgNum0_23 + (MR_Unsigned) 1);
    MR_Word ArgOffset_25 = (MR_Word) (ArgNum_24);
    MR_Word HeadVar_26;
    MR_Word TailVars_27;
    MR_Word STATE_VARIABLE_ModeInfo_33_33;
    MR_Word STATE_VARIABLE_ExtraGoals_34_34;
    MR_Word STATE_VARIABLE_ModeInfo_35_35;
    MR_Word InstMap0_40;

    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_24, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_33_33);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &InstMap0_40);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_40);
    if (succeeded)
    {
      MR_Word VarInst0_41;
      MR_Word STATE_VARIABLE_ModeInfo_22_42;
      MR_Word STATE_VARIABLE_ModeInfo_24_44;
      MR_Word ModuleInfo0_47;
      MR_Word InitialInst_48;
      MR_Word VarInst1_49;
      MR_Word VarTable0_50;
      MR_Word VarType_51;
      MR_Word Var_64;
      MR_Word _ModuleInfo_52;
      MR_Word _Sub_53;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_40, HeadVar0_17, &VarInst0_41);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &ModuleInfo0_47);
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_47, HeadInitialInst_19, &InitialInst_48);
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_47, VarInst0_41, &VarInst1_49);
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &VarTable0_50);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_50, HeadVar0_17, &VarType_51);
      Var_64 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
      succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(VarType_51, VarInst1_49, InitialInst_48, ModuleInfo0_47, &_ModuleInfo_52, Var_64, &_Sub_53);
      if (succeeded)
      {
        HeadVar_26 = HeadVar0_17;
        STATE_VARIABLE_ModeInfo_22_42 = STATE_VARIABLE_ModeInfo_33_33;
        STATE_VARIABLE_ExtraGoals_34_34 = STATE_VARIABLE_ExtraGoals_0_28;
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) InitialInst_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InitialInst_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_47, VarInst1_49);
        if (succeeded)
        {
          MR_Word WaitingVars_56;
          MR_Word ModeError_57;

          HeadVar_26 = HeadVar0_17;
          WaitingVars_56 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar0_17);
          {
            ModeError_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_57, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(3, ModeError_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, ModeError_57, 2) = ((MR_Box) (HeadVar0_17));
            MR_hl_field(3, ModeError_57, 3) = ((MR_Box) (VarInst0_41));
            MR_hl_field(3, ModeError_57, 4) = ((MR_Box) (InitialInst_48));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_56, ModeError_57, STATE_VARIABLE_ModeInfo_33_33, &STATE_VARIABLE_ModeInfo_22_42);
          STATE_VARIABLE_ExtraGoals_34_34 = STATE_VARIABLE_ExtraGoals_0_28;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo0_47, InitialInst_48);
          if (succeeded)
          {
            MR_Word WaitingVars_70;
            MR_Word ModeError_71;

            HeadVar_26 = HeadVar0_17;
            WaitingVars_70 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar0_17);
            {
              ModeError_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ModeError_71, 0) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(3, ModeError_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(3, ModeError_71, 2) = ((MR_Box) (HeadVar0_17));
              MR_hl_field(3, ModeError_71, 3) = ((MR_Box) (VarInst0_41));
              MR_hl_field(3, ModeError_71, 4) = ((MR_Box) (InitialInst_48));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_70, ModeError_71, STATE_VARIABLE_ModeInfo_33_33, &STATE_VARIABLE_ModeInfo_22_42);
            STATE_VARIABLE_ExtraGoals_34_34 = STATE_VARIABLE_ExtraGoals_0_28;
          }
          else
          {
            MR_Word VarIsDummy_59;
            MR_Word VarEntry_60;
            MR_Word VarTable_61;
            MR_Word ExtraGoal_62;
            MR_Word NewUnifyExtraGoal_63;
            MR_Word Var_68;

            VarIsDummy_59 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo0_47, VarType_51);
            {
              VarEntry_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarEntry_60, 0) = ((MR_Box) ((MR_String) ""));
              MR_hl_field(0, VarEntry_60, 1) = ((MR_Box) (VarType_51));
              MR_hl_field(0, VarEntry_60, 2) = (MR_Box) ((MR_Unsigned) (VarIsDummy_59));
            }
            parse_tree__var_table__add_var_entry_4_p_0(VarEntry_60, &HeadVar_26, VarTable0_50, &VarTable_61);
            check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_61, STATE_VARIABLE_ModeInfo_33_33, &STATE_VARIABLE_ModeInfo_22_42);
            check_hlds__modecheck_util__create_var_var_unification_5_p_0(HeadVar0_17, HeadVar_26, VarType_51, STATE_VARIABLE_ModeInfo_22_42, &ExtraGoal_62);
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (ExtraGoal_62));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              NewUnifyExtraGoal_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NewUnifyExtraGoal_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, NewUnifyExtraGoal_63, 1) = ((MR_Box) (Var_68));
            }
            check_hlds__modecheck_util__append_extra_goals_3_p_0(STATE_VARIABLE_ExtraGoals_0_28, NewUnifyExtraGoal_63, &STATE_VARIABLE_ExtraGoals_34_34);
          }
        }
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(HeadVar0_17, HeadFinalInst_21, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_22_42, &STATE_VARIABLE_ModeInfo_24_44);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), ((MR_Box) (HeadVar_26)), ((MR_Box) (HeadVar0_17)));
      if (succeeded)
        STATE_VARIABLE_ModeInfo_35_35 = STATE_VARIABLE_ModeInfo_24_44;
      else
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(HeadVar_26, HeadFinalInst_21, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_24_44, &STATE_VARIABLE_ModeInfo_35_35);
    }
    else
    {
      HeadVar_26 = HeadVar0_17;
      STATE_VARIABLE_ModeInfo_35_35 = STATE_VARIABLE_ModeInfo_33_33;
      STATE_VARIABLE_ExtraGoals_34_34 = STATE_VARIABLE_ExtraGoals_0_28;
    }
    check_hlds__modecheck_util__modecheck_set_var_insts_loop_9_p_0(ArgOffset_25, TailVars0_18, TailInitialInsts_20, TailFinalInsts_22, &TailVars_27, STATE_VARIABLE_ExtraGoals_34_34, STATE_VARIABLE_ExtraGoals_29, STATE_VARIABLE_ModeInfo_35_35, STATE_VARIABLE_ModeInfo_31);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Vars_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailVars_27));
    }
  }
  else
  {
    succeeded = (Vars0_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (InitialInsts_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (FinalInsts_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *Vars_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_insts_loop\'/9", (MR_String) "length mismatch");
        return;
      }
    *STATE_VARIABLE_ModeInfo_31 = STATE_VARIABLE_ModeInfo_0_30;
    *STATE_VARIABLE_ExtraGoals_29 = STATE_VARIABLE_ExtraGoals_0_28;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
  MR_Word Var0_6,
  MR_Word NewInst0_7,
  MR_Word MaybeUInst_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_33,
  MR_Word * STATE_VARIABLE_ModeInfo_34)
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
    MR_Word VarTable_14;
    MR_Word Type_15;
    MR_Word ModuleInfo_16;
    MR_Word NewInst_17;
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word Var_54;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var0_6, &OldInst_12);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &ModuleInfo0_13);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &VarTable_14);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_14, Var0_6, &Type_15);
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(OldInst_12, NewInst0_7);
    if (succeeded)
    {
      ModuleInfo_16 = ModuleInfo0_13;
      NewInst_17 = NewInst0_7;
    }
    else
    {
      MR_Word UnifyInst_18;
      MR_Word ModuleInfo1_20;
      MR_Word _Det_19;

      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_15, (MR_Integer) 1, (MR_Integer) 1, OldInst_12, NewInst0_7, &UnifyInst_18, &_Det_19, ModuleInfo0_13, &ModuleInfo1_20);
      if (succeeded)
      {
        ModuleInfo_16 = ModuleInfo1_20;
        NewInst_17 = UnifyInst_18;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
          return;
        }
    }
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_16, STATE_VARIABLE_ModeInfo_0_33, &STATE_VARIABLE_ModeInfo_39_39);
    check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_16, NewInst_17, &Var_54);
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) ((MR_Unsigned) 4U), Var_54);
    if (succeeded)
    {
      MR_Word InstMap_21;

      hlds__instmap__init_unreachable_1_p_0(&InstMap_21);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_21, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
    }
    else
    {
      succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_16, Type_15, OldInst_12, NewInst_17);
      if (succeeded)
      {
        MR_Word InstMap_49;

        hlds__instmap__instmap_set_var_4_p_0(Var0_6, NewInst_17, InstMap0_11, &InstMap_49);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_49, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
      }
      else
      {
        MR_Word Reason0_22;
        MR_Word UInst_23;

        succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_16, Type_15, NewInst_17, OldInst_12);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_39_39, Var0_6, &Reason0_22);
          if (succeeded)
          {
            succeeded = (MaybeUInst_8 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UInst_23 = ((MR_Word) ((MR_hl_field(1, MaybeUInst_8, (MR_Integer) 0))));
              succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(ModuleInfo_16, Type_15, NewInst_17, UInst_23);
              if (succeeded)
                succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(ModuleInfo_16, Type_15, NewInst0_7, OldInst_12);
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
            ModeError_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_25, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, ModeError_25, 1) = ((MR_Box) (Reason0_22));
            MR_hl_field(3, ModeError_25, 2) = ((MR_Box) (Var0_6));
            MR_hl_field(3, ModeError_25, 3) = ((MR_Box) (OldInst_12));
            MR_hl_field(3, ModeError_25, 4) = ((MR_Box) (NewInst_17));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_24, ModeError_25, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
        }
        else
        {
          MR_Word DelayInfo0_26;
          MR_Word DelayInfo_27;
          MR_Word STATE_VARIABLE_ModeInfo_44_44;
          MR_Word InstMap_50;

          hlds__instmap__instmap_set_var_4_p_0(Var0_6, NewInst_17, InstMap0_11, &InstMap_50);
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
    MR_Word PVars1_30 = ((MR_Word) ((MR_hl_field(1, PVars0_10, (MR_Integer) 1))));
    MR_Word PVars_32;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, PVars0_10, (MR_Integer) 0))));

    NonLocals_28 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
    Bound0_29 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_28, Var0_6);
    if (succeeded)
    {
      MR_Word Bound_31;
      MR_Word Var_47;

      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_6, Bound0_29, &Bound_31);
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (NonLocals_28));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) (Bound_31));
      }
      {
        PVars_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PVars_32, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, PVars_32, 1) = ((MR_Box) (PVars1_30));
      }
    }
    else
      PVars_32 = PVars0_10;
    check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(PVars_32, STATE_VARIABLE_ModeInfo_41_41, STATE_VARIABLE_ModeInfo_34);
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_var_inst_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Inst_6)
{
  MR_Word ModuleInfo_7;
  MR_Word InstMap_8;
  MR_Word VarTable_9;
  MR_Word Inst0_10;
  MR_Word Type_11;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_4, &ModuleInfo_7);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(ModeInfo_4, &InstMap_8);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(ModeInfo_4, &VarTable_9);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_5, &Inst0_10);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, Var_5, &Type_11);
  check_hlds__modecheck_util__normalise_inst_4_p_0(ModuleInfo_7, Type_11, Inst0_10, Inst_6);
}

void MR_CALL 
check_hlds__modecheck_util__normalise_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * NormalisedInst_8)
{
  MR_bool succeeded;
  MR_Word Inst_9;

  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_5, Inst0_7, &Inst_9);
  succeeded = ((MR_tag((MR_Word) Inst_9)) == (MR_Integer) 2);
  if (succeeded)
  {
    MR_Word Uniq_13;

    succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_5, Type_6, Inst_9);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_5, Inst_9);
        if (succeeded)
        {
          Uniq_13 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(ModuleInfo_5, Inst_9);
          if (succeeded)
          {
            Uniq_13 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(ModuleInfo_5, Type_6, Inst_9);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NormalisedInst_8 = base;
        MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_13));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_5, Type_6, Inst_9);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_5, Inst_9);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(ModuleInfo_5, Type_6, Inst_9);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
        *NormalisedInst_8 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_util_scalar_common_1[5]));
      else
        *NormalisedInst_8 = Inst_9;
    }
  }
  else
    *NormalisedInst_8 = Inst_9;
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word ReqInitialInst_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
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
  succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(Type_7, VarInst_11, ReqInitialInst_8, ModuleInfo0_12, &ModuleInfo_13, Var_19, &_Subst_14);
  if (succeeded)
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_13, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
  else
  {
    MR_Word WaitingVars_15;
    MR_Word ModeError_16;

    WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6);
    {
      ModeError_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, ModeError_16, 1) = ((MR_Box) (Var_6));
      MR_hl_field(3, ModeError_16, 2) = ((MR_Box) (VarInst_11));
      MR_hl_field(3, ModeError_16, 3) = ((MR_Box) (ReqInitialInst_8));
      MR_hl_field(3, ModeError_16, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_15, ModeError_16, STATE_VARIABLE_ModeInfo_0_17, STATE_VARIABLE_ModeInfo_18);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BoundInstVars_20;

  check_hlds__modecheck_util__modecheck_acc_bound_head_inst_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_BoundInstVars_20);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_BoundInstVars_20));
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(
  MR_Word MatchWhat_9,
  MR_Word ArgOffset_10,
  MR_Word Vars_11,
  MR_Word ReqInitialInsts_12,
  MR_Word * Subst_13,
  MR_Word * BoundInstVars_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  MR_bool succeeded;
  MR_Integer ArgNum_16 = (MR_Integer) (ArgOffset_10);
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_ModeInfo_20_20;
  MR_Word HeadInstVars_24;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Box conv1_BoundInstVars_14;

  Var_19 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_loop_7_p_0(Vars_11, ReqInitialInsts_12, ArgNum_16, Var_19, Subst_13, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_20_20);
  check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &HeadInstVars_24);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadInstVars_24));
  }
  Var_32 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]), Var_31, *Subst_13, ((MR_Box) (Var_32)), &conv1_BoundInstVars_14);
  *BoundInstVars_14 = ((MR_Word) (conv1_BoundInstVars_14));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), *BoundInstVars_14);
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_20_20;
  else
  {
    MR_Word InstMap_25;
    MR_Word WaitingVars_26;
    MR_Word Mismatch_27;
    MR_Word ModeError_28;
    MR_Word ModeContext0_29;
    MR_Word STATE_VARIABLE_ModeInfo_32_34;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &InstMap_25);
    WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_11);
    {
      Mismatch_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mismatch_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, Mismatch_27, 1) = ((MR_Box) (ReqInitialInsts_12));
      MR_hl_field(0, Mismatch_27, 2) = ((MR_Box) (*BoundInstVars_14));
    }
    {
      ModeError_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_28, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, ModeError_28, 1) = ((MR_Box) (MatchWhat_9));
      MR_hl_field(3, ModeError_28, 2) = ((MR_Box) (InstMap_25));
      MR_hl_field(3, ModeError_28, 3) = ((MR_Box) (Vars_11));
      MR_hl_field(3, ModeError_28, 4) = ((MR_Box) (Mismatch_27));
      MR_hl_field(3, ModeError_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &ModeContext0_29);
    switch (MR_tag((MR_Word) ModeContext0_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_find_bound_head_inst_vars\'/8", (MR_String) "context says we are not in a call");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallId_41 = ((MR_Word) ((MR_hl_field(1, ModeContext0_29, (MR_Integer) 0))));
          MR_Word Var_42;

          {
            Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_42, 0) = ((MR_Box) (CallId_41));
          }
          check_hlds__mode_info__mode_info_set_mode_context_3_p_0(Var_42, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_32_34);
        }
        break;
      case (MR_Integer) 2:
        check_hlds__mode_info__mode_info_set_mode_context_3_p_0(ModeContext0_29, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_32_34);
        break;
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, ModeError_28, STATE_VARIABLE_ModeInfo_32_34, STATE_VARIABLE_ModeInfo_18);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_have_insts_no_exact_match_loop\'/7", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_have_insts_no_exact_match_loop\'/7", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ReqInitialInst_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ReqInitialInsts_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_44 = (MR_Integer) ((MR_Unsigned) ArgNum0_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_50_50;
        MR_Word STATE_VARIABLE_Subst_51_51;
        MR_Word STATE_VARIABLE_ModeInfo_52_52;
        MR_Word ReqInitialInst_55;
        MR_Word InstMap_56;
        MR_Word VarInst0_57;
        MR_Word VarTable_58;
        MR_Word Type_59;
        MR_Word VarInst_60;
        MR_Word ModuleInfo0_61;
        MR_Word STATE_VARIABLE_ModeInfo_28_68;
        MR_Word ModuleInfo_62;
        MR_Word STATE_VARIABLE_Subst_29_69;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_ArgNum0_3;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_6;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_44, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_50_50);
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(STATE_VARIABLE_Subst_0_4, ReqInitialInst_39, &ReqInitialInst_55);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap_56);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_56, Var_54, &VarInst0_57);
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarTable_58);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_58, Var_54, &Type_59);
        check_hlds__modecheck_util__propagate_type_ho_inst_info_into_inst_3_p_0(Type_59, VarInst0_57, &VarInst_60);
        succeeded = (((MR_Word) VarInst0_57) == ((MR_Word) VarInst_60));
        if (succeeded)
          STATE_VARIABLE_ModeInfo_28_68 = STATE_VARIABLE_ModeInfo_50_50;
        else
        {
          MR_Word InstMap_73;

          hlds__instmap__instmap_set_var_4_p_0(Var_54, VarInst_60, InstMap_56, &InstMap_73);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_73, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_28_68);
        }
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_28_68, &ModuleInfo0_61);
        succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(Type_59, VarInst_60, ReqInitialInst_55, ModuleInfo0_61, &ModuleInfo_62, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_29_69);
        if (succeeded)
        {
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_29_69;
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_62, STATE_VARIABLE_ModeInfo_28_68, &STATE_VARIABLE_ModeInfo_52_52);
        }
        else
        {
          MR_Word MultiModeErrorMap_63;
          MR_Word MaybeMultiModeError_65;
          MR_Word WaitingVars_66;
          MR_Word ModeError_67;
          MR_Word MultiModeError_64;
          MR_Box conv0_MultiModeError_64;

          check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_28_68, &MultiModeErrorMap_63);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), MultiModeErrorMap_63, ((MR_Box) (Var_54)), &conv0_MultiModeError_64);
          if (succeeded)
          {
            MultiModeError_64 = ((MR_Word) (conv0_MultiModeError_64));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MaybeMultiModeError_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeMultiModeError_65, 0) = ((MR_Box) (MultiModeError_64));
            }
          else
            MaybeMultiModeError_65 = (MR_Word) ((MR_Unsigned) 0U);
          WaitingVars_66 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
          {
            ModeError_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, ModeError_67, 1) = ((MR_Box) (Var_54));
            MR_hl_field(3, ModeError_67, 2) = ((MR_Box) (VarInst_60));
            MR_hl_field(3, ModeError_67, 3) = ((MR_Box) (ReqInitialInst_55));
            MR_hl_field(3, ModeError_67, 4) = ((MR_Box) (MaybeMultiModeError_65));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_66, ModeError_67, STATE_VARIABLE_ModeInfo_28_68, &STATE_VARIABLE_ModeInfo_52_52);
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_53;
        next_value_of_HeadVar__2_2 = ReqInitialInsts_40;
        next_value_of_ArgNum0_3 = ArgNum_44;
        next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_51_51;
        next_value_of_STATE_VARIABLE_ModeInfo_0_6 = STATE_VARIABLE_ModeInfo_52_52;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        ArgNum0_3 = next_value_of_ArgNum0_3;
        STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
        STATE_VARIABLE_ModeInfo_0_6 = next_value_of_STATE_VARIABLE_ModeInfo_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BoundInstVars_20;

  check_hlds__modecheck_util__modecheck_acc_bound_head_inst_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_BoundInstVars_20);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_BoundInstVars_20));
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_8_p_0(
  MR_Word MatchWhat_9,
  MR_Word ArgOffset_10,
  MR_Word Vars_11,
  MR_Word ReqInitialInsts_12,
  MR_Word * Subst_13,
  MR_Word * BoundInstVars_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  MR_bool succeeded;
  MR_Integer ArgNum_16 = (MR_Integer) (ArgOffset_10);
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_ModeInfo_20_20;
  MR_Word HeadInstVars_24;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Box conv1_BoundInstVars_14;

  Var_19 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_loop_7_p_0(Vars_11, ReqInitialInsts_12, ArgNum_16, Var_19, Subst_13, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_20_20);
  check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &HeadInstVars_24);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_8_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadInstVars_24));
  }
  Var_32 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_util_scalar_common_1[3]), Var_31, *Subst_13, ((MR_Box) (Var_32)), &conv1_BoundInstVars_14);
  *BoundInstVars_14 = ((MR_Word) (conv1_BoundInstVars_14));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[0]), *BoundInstVars_14);
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_20_20;
  else
  {
    MR_Word InstMap_25;
    MR_Word WaitingVars_26;
    MR_Word Mismatch_27;
    MR_Word ModeError_28;
    MR_Word ModeContext0_29;
    MR_Word STATE_VARIABLE_ModeInfo_32_34;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &InstMap_25);
    WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_11);
    {
      Mismatch_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mismatch_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Mismatch_27, 1) = ((MR_Box) (ReqInitialInsts_12));
      MR_hl_field(0, Mismatch_27, 2) = ((MR_Box) (*BoundInstVars_14));
    }
    {
      ModeError_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_28, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, ModeError_28, 1) = ((MR_Box) (MatchWhat_9));
      MR_hl_field(3, ModeError_28, 2) = ((MR_Box) (InstMap_25));
      MR_hl_field(3, ModeError_28, 3) = ((MR_Box) (Vars_11));
      MR_hl_field(3, ModeError_28, 4) = ((MR_Box) (Mismatch_27));
      MR_hl_field(3, ModeError_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(STATE_VARIABLE_ModeInfo_20_20, &ModeContext0_29);
    switch (MR_tag((MR_Word) ModeContext0_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_find_bound_head_inst_vars\'/8", (MR_String) "context says we are not in a call");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallId_41 = ((MR_Word) ((MR_hl_field(1, ModeContext0_29, (MR_Integer) 0))));
          MR_Word Var_42;

          {
            Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_42, 0) = ((MR_Box) (CallId_41));
          }
          check_hlds__mode_info__mode_info_set_mode_context_3_p_0(Var_42, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_32_34);
        }
        break;
      case (MR_Integer) 2:
        check_hlds__mode_info__mode_info_set_mode_context_3_p_0(ModeContext0_29, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_32_34);
        break;
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, ModeError_28, STATE_VARIABLE_ModeInfo_32_34, STATE_VARIABLE_ModeInfo_18);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_have_insts_exact_match_loop\'/7", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_have_insts_exact_match_loop\'/7", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ReqInitialInst_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ReqInitialInsts_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer ArgNum_44 = (MR_Integer) ((MR_Unsigned) ArgNum0_3 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_ModeInfo_50_50;
        MR_Word STATE_VARIABLE_Subst_51_51;
        MR_Word STATE_VARIABLE_ModeInfo_52_52;
        MR_Word ReqInitialInst_55;
        MR_Word InstMap_56;
        MR_Word VarInst0_57;
        MR_Word VarTable_58;
        MR_Word Type_59;
        MR_Word VarInst_60;
        MR_Word ModuleInfo0_61;
        MR_Word STATE_VARIABLE_ModeInfo_28_68;
        MR_Word ModuleInfo_62;
        MR_Word STATE_VARIABLE_Subst_29_69;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_ArgNum0_3;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_6;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_44, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_50_50);
        parse_tree__prog_mode__inst_apply_substitution_3_p_0(STATE_VARIABLE_Subst_0_4, ReqInitialInst_39, &ReqInitialInst_55);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap_56);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_56, Var_54, &VarInst0_57);
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarTable_58);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_58, Var_54, &Type_59);
        check_hlds__modecheck_util__propagate_type_ho_inst_info_into_inst_3_p_0(Type_59, VarInst0_57, &VarInst_60);
        succeeded = (((MR_Word) VarInst0_57) == ((MR_Word) VarInst_60));
        if (succeeded)
          STATE_VARIABLE_ModeInfo_28_68 = STATE_VARIABLE_ModeInfo_50_50;
        else
        {
          MR_Word InstMap_73;

          hlds__instmap__instmap_set_var_4_p_0(Var_54, VarInst_60, InstMap_56, &InstMap_73);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_73, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_28_68);
        }
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_28_68, &ModuleInfo0_61);
        succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(Type_59, VarInst_60, ReqInitialInst_55, ModuleInfo0_61, &ModuleInfo_62, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_29_69);
        if (succeeded)
        {
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_29_69;
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_62, STATE_VARIABLE_ModeInfo_28_68, &STATE_VARIABLE_ModeInfo_52_52);
        }
        else
        {
          MR_Word MultiModeErrorMap_63;
          MR_Word MaybeMultiModeError_65;
          MR_Word WaitingVars_66;
          MR_Word ModeError_67;
          MR_Word MultiModeError_64;
          MR_Box conv0_MultiModeError_64;

          check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_28_68, &MultiModeErrorMap_63);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__modecheck_util_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), MultiModeErrorMap_63, ((MR_Box) (Var_54)), &conv0_MultiModeError_64);
          if (succeeded)
          {
            MultiModeError_64 = ((MR_Word) (conv0_MultiModeError_64));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MaybeMultiModeError_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeMultiModeError_65, 0) = ((MR_Box) (MultiModeError_64));
            }
          else
            MaybeMultiModeError_65 = (MR_Word) ((MR_Unsigned) 0U);
          WaitingVars_66 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
          {
            ModeError_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, ModeError_67, 1) = ((MR_Box) (Var_54));
            MR_hl_field(3, ModeError_67, 2) = ((MR_Box) (VarInst_60));
            MR_hl_field(3, ModeError_67, 3) = ((MR_Box) (ReqInitialInst_55));
            MR_hl_field(3, ModeError_67, 4) = ((MR_Box) (MaybeMultiModeError_65));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_66, ModeError_67, STATE_VARIABLE_ModeInfo_28_68, &STATE_VARIABLE_ModeInfo_52_52);
          STATE_VARIABLE_Subst_51_51 = STATE_VARIABLE_Subst_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_53;
        next_value_of_HeadVar__2_2 = ReqInitialInsts_40;
        next_value_of_ArgNum0_3 = ArgNum_44;
        next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_51_51;
        next_value_of_STATE_VARIABLE_ModeInfo_0_6 = STATE_VARIABLE_ModeInfo_52_52;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        ArgNum0_3 = next_value_of_ArgNum0_3;
        STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
        STATE_VARIABLE_ModeInfo_0_6 = next_value_of_STATE_VARIABLE_ModeInfo_0_6;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_util__propagate_type_ho_inst_info_into_inst_3_p_0(
  MR_Word Type_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Type_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Inst1_14;
  MR_Word TypeHOInstInfo_9;

  if (succeeded)
  {
    TypeHOInstInfo_9 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 3))));
    succeeded = (TypeHOInstInfo_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Inst0_5)) == (MR_Integer) 1))
      {
        MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);

        {
          Inst1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Inst1_14, 0) = (MR_Box) ((MR_Unsigned) (Uniq_12));
          MR_hl_field(1, Inst1_14, 1) = ((MR_Box) (TypeHOInstInfo_9));
        }
        succeeded = MR_TRUE;
      }
      else
      if (((((MR_tag((MR_Word) Inst0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        MR_Word Uniq_16 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);

        {
          Inst1_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Inst1_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Inst1_14, 1) = (MR_Box) ((MR_Unsigned) (Uniq_16));
          MR_hl_field(3, Inst1_14, 2) = ((MR_Box) (TypeHOInstInfo_9));
        }
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    *Inst_6 = Inst1_14;
  else
    *Inst_6 = Inst0_5;
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(
  MR_Word ArgOffset0_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_are_live_no_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_are_live_no_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word IsLive_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word IsLives_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Integer ArgNum0_32 = (MR_Integer) (ArgOffset0_1);
        MR_Integer ArgNum_33 = (MR_Integer) ((MR_Unsigned) ArgNum0_32 + (MR_Unsigned) 1);
        MR_Word ArgOffset_34 = (MR_Word) (ArgNum_33);
        MR_Word STATE_VARIABLE_ModeInfo_38_38;
        MR_Word STATE_VARIABLE_ModeInfo_39_39;
        MR_Word VarIsLive_42;
        MR_Word next_value_of_ArgOffset0_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_33, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_38_38);
        check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_38_38, Var_41, &VarIsLive_42);
        succeeded = (IsLive_29 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (VarIsLive_42 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word WaitingVars_43;
          MR_Word ModeError_44;

          WaitingVars_43 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
          {
            ModeError_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, ModeError_44, 1) = ((MR_Box) (Var_41));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_43, ModeError_44, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_39_39);
        }
        else
          STATE_VARIABLE_ModeInfo_39_39 = STATE_VARIABLE_ModeInfo_38_38;
        // direct tailcall eliminated
        ;
        next_value_of_ArgOffset0_1 = ArgOffset_34;
        next_value_of_HeadVar__2_2 = Var_40;
        next_value_of_HeadVar__3_3 = IsLives_30;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_39_39;
        ArgOffset0_1 = next_value_of_ArgOffset0_1;
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
check_hlds__modecheck_util__modecheck_vars_are_live_exact_match_5_p_0(
  MR_Word ArgOffset0_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_are_live_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.modecheck_vars_are_live_exact_match\'/5", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word IsLive_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word IsLives_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Integer ArgNum0_32 = (MR_Integer) (ArgOffset0_1);
        MR_Integer ArgNum_33 = (MR_Integer) ((MR_Unsigned) ArgNum0_32 + (MR_Unsigned) 1);
        MR_Word ArgOffset_34 = (MR_Word) (ArgNum_33);
        MR_Word STATE_VARIABLE_ModeInfo_38_38;
        MR_Word STATE_VARIABLE_ModeInfo_39_39;
        MR_Word VarIsLive_42;
        MR_Word next_value_of_ArgOffset0_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(ArgNum_33, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_38_38);
        check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_38_38, Var_41, &VarIsLive_42);
        succeeded = (VarIsLive_42 == IsLive_29);
        if (succeeded)
          STATE_VARIABLE_ModeInfo_39_39 = STATE_VARIABLE_ModeInfo_38_38;
        else
        {
          MR_Word WaitingVars_43;
          MR_Word ModeError_44;

          WaitingVars_43 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
          {
            ModeError_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, ModeError_44, 1) = ((MR_Box) (Var_41));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_43, ModeError_44, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_39_39);
        }
        // direct tailcall eliminated
        ;
        next_value_of_ArgOffset0_1 = ArgOffset_34;
        next_value_of_HeadVar__2_2 = Var_40;
        next_value_of_HeadVar__3_3 = IsLives_30;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_39_39;
        ArgOffset0_1 = next_value_of_ArgOffset0_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

MR_Word MR_CALL 
check_hlds__modecheck_util__higher_order_modecheck_arg_offset_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 1)));
}

MR_Word MR_CALL 
check_hlds__modecheck_util__compute_pred_modecheck_arg_offset_1_f_0(
  MR_Word PredInfo_3)
{
  MR_Word ArgOffset_4;
  MR_Integer PredFormArityInt_5;
  MR_Word ArgTypes_6;
  MR_Integer CurrentArity_7;
  MR_Word Var_8;
  MR_Integer Var_9;

  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_3, &Var_8);
  PredFormArityInt_5 = (MR_Integer) (Var_8);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_3, &ArgTypes_6);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &CurrentArity_7);
  Var_9 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_5 - (MR_Unsigned) CurrentArity_7);
  ArgOffset_4 = (MR_Word) (Var_9);
  return ArgOffset_4;
}

void MR_CALL 
check_hlds__modecheck_util__create_var_var_unification_5_p_0(
  MR_Word Var0_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word ModeInfo_9,
  MR_Word * Goal_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11;
  MR_Word GoalInfo_12;
  MR_Word Context_13;
  MR_Word ModeContext_14;
  MR_Word UnifyContext_15;
  MR_Word MainContext_16;
  MR_Word SubContexts_17;
  MR_Word GoalExpr0_18;
  MR_Word GoalInfo0_19;
  MR_Word NonLocals_20;
  MR_Word GoalInfo1_21;
  MR_Word GoalInfo2_22;
  MR_Word ModuleInfo_23;
  MR_Word PredId_24;
  MR_Integer ProcId_25;
  MR_Word ProcInfo_27;
  MR_Word RttiVarMaps_28;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word _PredInfo_26;
  MR_Word X_29;
  MR_Word Y_30;
  MR_Word Mode_31;
  MR_Word Unification0_32;
  MR_Word FinalUnifyContext_33;

  check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_9, &Context_13);
  check_hlds__mode_info__mode_info_get_mode_context_2_p_0(ModeInfo_9, &ModeContext_14);
  check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(ModeInfo_9, ModeContext_14, &UnifyContext_15);
  MainContext_16 = ((MR_Word) ((MR_hl_field(0, UnifyContext_15, (MR_Integer) 0))));
  SubContexts_17 = ((MR_Word) ((MR_hl_field(0, UnifyContext_15, (MR_Integer) 1))));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (Var_7));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var0_6, Var_35, Context_13, MainContext_16, SubContexts_17, &Var_36);
  GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var0_6));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37, &NonLocals_20);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_20, GoalInfo0_19, &GoalInfo1_21);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo1_21, &GoalInfo2_22);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_9, &ModuleInfo_23);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(ModeInfo_9, &PredId_24);
  check_hlds__mode_info__mode_info_get_proc_id_2_p_0(ModeInfo_9, &ProcId_25);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_23, PredId_24, ProcId_25, &_PredInfo_26, &ProcInfo_27);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_27, &RttiVarMaps_28);
  succeeded = ((MR_tag((MR_Word) GoalExpr0_18)) == (MR_Integer) 1);
  if (succeeded)
  {
    X_29 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 0))));
    Y_30 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 1))));
    Mode_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 2))));
    Unification0_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 3))));
    FinalUnifyContext_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 4))));
    {
      MR_Word Unification_34;

      check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0(Type_8, RttiVarMaps_28, Unification0_32, &Unification_34, GoalInfo2_22, &GoalInfo_12);
      {
        GoalExpr_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_11, 0) = ((MR_Box) (X_29));
        MR_hl_field(1, GoalExpr_11, 1) = ((MR_Box) (Y_30));
        MR_hl_field(1, GoalExpr_11, 2) = ((MR_Box) (Mode_31));
        MR_hl_field(1, GoalExpr_11, 3) = ((MR_Box) (Unification_34));
        MR_hl_field(1, GoalExpr_11, 4) = ((MR_Box) (FinalUnifyContext_33));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "context not call or unify");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModeCallId_8 = ((MR_Word) ((MR_hl_field(1, ModeContext_5, (MR_Integer) 0))));
        MR_Integer Arg_9 = ((MR_Integer) ((MR_hl_field(1, ModeContext_5, (MR_Integer) 1))));
        MR_Word CallId_10;
        MR_Word Var_12;

        CallId_10 = check_hlds__modecheck_util__mode_call_id_to_call_id_2_f_0(ModeInfo_4, ModeCallId_8);
        {
          Var_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_12, 0) = ((MR_Box) (CallId_10));
          MR_hl_field(2, Var_12, 1) = ((MR_Box) (Arg_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *UnifyContext_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "context is *all* of a call");
        return;
      }
      break;
    case (MR_Integer) 3:
      *UnifyContext_6 = ((MR_Word) ((MR_hl_field(3, ModeContext_5, (MR_Integer) 0))));
      break;
  }
}

MR_Word MR_CALL 
check_hlds__modecheck_util__mode_call_id_to_call_id_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word ModeCallId_5)
{
  MR_Word CallId_6;

  if (((MR_tag((MR_Word) ModeCallId_5)) == (MR_Integer) 1))
  {
    MR_Word GenericCall_9 = ((MR_Word) ((MR_hl_field(1, ModeCallId_5, (MR_Integer) 0))));
    MR_Word VarTable_10;
    MR_Word Var_11;

    check_hlds__mode_info__mode_info_get_var_table_2_p_0(ModeInfo_4, &VarTable_10);
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (VarTable_10));
    }
    {
      CallId_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallId_6, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, CallId_6, 1) = ((MR_Box) (GenericCall_9));
    }
  }
  else
  {
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, ModeCallId_5, (MR_Integer) 0))));
    MR_Word PFSymNameArity_8;

    check_hlds__mode_info__mode_info_get_pf_sym_name_arity_3_p_0(ModeInfo_4, PredId_7, &PFSymNameArity_8);
    {
      CallId_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallId_6, 0) = ((MR_Box) (PFSymNameArity_8));
    }
  }
  return CallId_6;
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
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = MainGoal_1;
    *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
  }
  else
  {
    MR_Word BeforeGoals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word AfterGoals0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
        MR_hl_field(0, Goal0_35, 0) = ((MR_Box) (MainGoal_1));
        MR_hl_field(0, Goal0_35, 1) = ((MR_Box) (GoalInfo_34));
      }
      Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadVar__3_3);
      check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(BeforeGoals0_19, Context_36, &BeforeGoals_37);
      check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(AfterGoals0_20, Context_36, &AfterGoals_38);
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Goal0_35));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (AfterGoals_38));
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
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, base, 2) = ((MR_Box) (GoalList_41));
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
    MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
    MR_Word GoalInfo_12;

    hlds__hlds_goal__goal_info_set_context_3_p_0(HeadVar__2_2, GoalInfo0_11, &GoalInfo_12);
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_8, 0) = ((MR_Box) (GoalExpr_10));
      MR_hl_field(0, Goal_8, 1) = ((MR_Box) (GoalInfo_12));
    }
    check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(Goals0_6, HeadVar__2_2, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_9));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_4 = STATE_VARIABLE_ModeInfo_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_17_17;
      MR_Word ConjGoals_10;
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
      MR_Word Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_16 = ((MR_Unsigned) ((MR_hl_field(3, Var_15, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_10 = ((MR_Word) ((MR_hl_field(3, Var_15, (MR_Integer) 2))));
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
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word ConjGoals_13;
      MR_Word Var_19;
      MR_Word Var_20;

      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(HeadVar__1_1, Goals_11, STATE_VARIABLE_ModeInfo_0_3, &STATE_VARIABLE_ModeInfo_18_18);
      Var_19 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_20 = ((MR_Unsigned) ((MR_hl_field(3, Var_19, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_13 = ((MR_Word) ((MR_hl_field(3, Var_19, (MR_Integer) 2))));
        succeeded = (HeadVar__1_1 == Var_20);
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
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word BeforeGoals1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word AfterGoals1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word BeforeGoals_11;
      MR_Word AfterGoals_12;

      BeforeGoals_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_15, BeforeGoals1_9);
      AfterGoals_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_14, AfterGoals1_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BeforeGoals_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (AfterGoals_12));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_util____Compare____after_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_util____Compare____extra_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____inst_expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_util____Compare____inst_expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____modecheck_arg_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____modecheck_arg_offset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____modecheck_arg_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_util____Compare____modecheck_arg_offset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_modecheck_arg_offset_0);
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
