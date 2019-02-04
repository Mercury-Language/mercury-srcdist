/*
** Automatically generated from `modecheck_util.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module check_hlds.modecheck_util. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
  MR_Word check_hlds__modecheck_util__SubInst_5,
  MR_Word check_hlds__modecheck_util__InstVar_6,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__BoundInst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__Inst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__Mode_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(
  MR_Word check_hlds__modecheck_util__Var0_9,
  MR_Word check_hlds__modecheck_util__InitialInst_10,
  MR_Word check_hlds__modecheck_util__FinalInst_11,
  MR_Word * check_hlds__modecheck_util__Var_12,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
  MR_Word check_hlds__modecheck_util__InstVar_7,
  MR_Word check_hlds__modecheck_util__Subst_8);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
  MR_Word check_hlds__modecheck_util__Type_6,
  MR_Word check_hlds__modecheck_util__ConsId_7);

static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);


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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 = {
  (MR_String) "no_after_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2] = {
  (MR_String) "after_instmap",
  (MR_String) "after_goals"
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 = {
  (MR_String) "after_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____after_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____after_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "after_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 = {
  (MR_String) "no_extra_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2] = {
  (MR_String) "extra_before_main",
  (MR_String) "extra_after_main"
};

static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 = {
  (MR_String) "extra_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____extra_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____extra_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "extra_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "inst_expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_util____Compare____after_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_util____Compare____extra_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____inst_expansions_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_util____Compare____inst_expansions_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word check_hlds__modecheck_util__ModeContext_5,
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__modecheck_util__ModeContext_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "uninitialized context");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_util__CallId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
          MR_Integer check_hlds__modecheck_util__Arg_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_util__V_13_13;

          {
            check_hlds__modecheck_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 0) = ((MR_Box) (check_hlds__modecheck_util__CallId_8));
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 1) = ((MR_Box) (check_hlds__modecheck_util__Arg_9));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__modecheck_util__UnifyContext_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_13_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__modecheck_util__V_7_7;

          *check_hlds__modecheck_util__UnifyContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
          check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_4 = check_hlds__modecheck_util__HeadVar__2_2;
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_5 = check_hlds__modecheck_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_3 = check_hlds__modecheck_util__HeadVar__1_1;
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_4 = check_hlds__modecheck_util__HeadVar__2_2;

    {
      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_4)));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
    if (check_hlds__modecheck_util__succeeded)
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_12_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], &check_hlds__modecheck_util__V_12_12, ((MR_Box) (check_hlds__modecheck_util__V_18_18)), ((MR_Box) (check_hlds__modecheck_util__V_10_10)));
            }
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
            if (check_hlds__modecheck_util__succeeded)
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
    if (check_hlds__modecheck_util__succeeded)
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    else
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
      }
    else
      {
        MR_Word check_hlds__modecheck_util__TypeInfo_11_11;
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_7_7;
        MR_Word check_hlds__modecheck_util__V_8_8;

        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__modecheck_util__TypeInfo_11_11 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
            {
              check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_11_11, ((MR_Box) (check_hlds__modecheck_util__V_5_5)), ((MR_Box) (check_hlds__modecheck_util__V_7_7)));
            }
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
                {
                  check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
              }
          }
      }
    return check_hlds__modecheck_util__succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
    if (check_hlds__modecheck_util__succeeded)
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_12_12;

            {
              hlds__instmap____Compare____instmap_0_0(&check_hlds__modecheck_util__V_12_12, check_hlds__modecheck_util__V_18_18, check_hlds__modecheck_util__V_10_10);
            }
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
            if (check_hlds__modecheck_util__succeeded)
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
    if (check_hlds__modecheck_util__succeeded)
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    else
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
      }
    else
      {
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_7_7;
        MR_Word check_hlds__modecheck_util__V_8_8;

        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__modecheck_util__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__modecheck_util__V_5_5, check_hlds__modecheck_util__V_7_7);
            }
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
                {
                  check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
              }
          }
      }
    return check_hlds__modecheck_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
  MR_Word check_hlds__modecheck_util__SubInst_5,
  MR_Word check_hlds__modecheck_util__InstVar_6,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__SubInst0_8;
    MR_Box check_hlds__modecheck_util__conv0_SubInst0_8;

    {
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), &check_hlds__modecheck_util__conv0_SubInst0_8);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        check_hlds__modecheck_util__SubInst0_8 = ((MR_Word) check_hlds__modecheck_util__conv0_SubInst0_8);
        check_hlds__modecheck_util__succeeded = MR_TRUE;
      }
    if (check_hlds__modecheck_util__succeeded)
      {
        {
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__SubInst0_8, check_hlds__modecheck_util__SubInst_5);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.add_constrained_inst\'/4", (MR_String) "SubInst differs");
              return;
            }
          }
        *check_hlds__modecheck_util__STATE_VARIABLE_Map_10 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9;
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), ((MR_Box) (check_hlds__modecheck_util__SubInst_5)), check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, check_hlds__modecheck_util__STATE_VARIABLE_Map_10);
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

    {
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_util__V_19_19;
    MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 3)));
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16;
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18;

    {
      check_hlds__modecheck_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_19_19, check_hlds__modecheck_util__Modes_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
    }
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_16 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16);
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34;
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36;

    {
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34));
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__BoundInst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_util__V_17_17;
    MR_Word check_hlds__modecheck_util___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 0)));
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14;
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16;

    {
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__Insts_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
    }
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_14 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14);
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10;

    {
      check_hlds__modecheck_util__add_constrained_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14;
    MR_Word check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16;

    {
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14));
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

    {
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__Inst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__modecheck_util__Inst_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__modecheck_util__Inst_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
              *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_util__HOInstInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)));

              if ((check_hlds__modecheck_util__HOInstInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                }
              else
                {
                  MR_Word check_hlds__modecheck_util__PredInstInfo_25 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_23), (MR_Integer) 1);

                  {
                    check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_25, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__modecheck_util__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_util__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 3)));
                  MR_Word check_hlds__modecheck_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__modecheck_util__InstResults_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(check_hlds__modecheck_util__InstResults_13)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word check_hlds__modecheck_util__V_50_50;
                            MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34;
                            MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36;

                            {
                              check_hlds__modecheck_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
                            }
                            {
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_50_50, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
                            }
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34);
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__modecheck_util__InstVarsResult_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 3)));
                        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 0)));
                        MR_Word check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 1)));
                        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 2)));
                        MR_Word check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 4)));
                        MR_Word check_hlds__modecheck_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 5)));
                        MR_Word check_hlds__modecheck_util__TypeInfo_57_57;
                        MR_Word check_hlds__modecheck_util__InstVars_21;

                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InstVarsResult_18)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__modecheck_util__succeeded)
                          {
                            check_hlds__modecheck_util__InstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstVarsResult_18, (MR_Integer) 0)));
                            check_hlds__modecheck_util__TypeInfo_57_57 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
                            {
                              check_hlds__modecheck_util__succeeded = mercury__set__is_empty_1_p_0(check_hlds__modecheck_util__TypeInfo_57_57, check_hlds__modecheck_util__InstVars_21);
                            }
                          }
                        if (check_hlds__modecheck_util__succeeded)
                          {
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                          }
                        else
                          {
                            MR_Word check_hlds__modecheck_util__V_53_53;
                            MR_Box check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34;
                            MR_Box check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36;

                            {
                              check_hlds__modecheck_util__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
                            }
                            {
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_53_53, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
                            }
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34);
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
                          }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__modecheck_util__HOInstInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

                  if ((check_hlds__modecheck_util__HOInstInfo_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                    }
                  else
                    {
                      MR_Word check_hlds__modecheck_util__PredInstInfo_80 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_82), (MR_Integer) 1);

                      {
                        check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_80, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "inst_var");
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__modecheck_util__SubInst_27;
                  MR_Word check_hlds__modecheck_util__V_46_46;
                  MR_Word check_hlds__modecheck_util__InstVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
                  MR_Word check_hlds__modecheck_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
                  MR_Box check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34;

                  {
                    check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Inst_8, &check_hlds__modecheck_util__SubInst_27);
                  }
                  {
                    check_hlds__modecheck_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_util__SubInst_27));
                  }
                  {
                    mercury__set__fold_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], check_hlds__modecheck_util__V_46_46, check_hlds__modecheck_util__InstVars_56, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
                  }
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__modecheck_util__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

                  {
                    check_hlds__modecheck_util__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__modecheck_util__InstName_28)), check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43);
                  }
                  if (check_hlds__modecheck_util__succeeded)
                    {
                      MR_Word check_hlds__modecheck_util__ExpandedInst_29;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InstName_28, &check_hlds__modecheck_util__ExpandedInst_29);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__modecheck_util__Inst__tmp_copy_8 = check_hlds__modecheck_util__ExpandedInst_29;
                        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

                        check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35;
                        check_hlds__modecheck_util__Inst_8 = check_hlds__modecheck_util__Inst__tmp_copy_8;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
                    }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__require__sorry_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "abstract_inst");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
  MR_Word check_hlds__modecheck_util__Mode_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__InitialInst_11;
    MR_Word check_hlds__modecheck_util__FinalInst_12;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Mode_8, &check_hlds__modecheck_util__InitialInst_11, &check_hlds__modecheck_util__FinalInst_12);
    }
    {
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InitialInst_11, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13, &check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18);
    }
    {
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__FinalInst_12, check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Map_14, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(
  MR_Word check_hlds__modecheck_util__Var0_9,
  MR_Word check_hlds__modecheck_util__InitialInst_10,
  MR_Word check_hlds__modecheck_util__FinalInst_11,
  MR_Word * check_hlds__modecheck_util__Var_12,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__InstMap0_15;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__InstMap0_15);
    }
    {
      check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_15);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        MR_Word check_hlds__modecheck_util__VarInst0_16;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_24;
        MR_Word check_hlds__modecheck_util__ModuleInfo0_38;
        MR_Word check_hlds__modecheck_util__InitialInst_39;
        MR_Word check_hlds__modecheck_util__VarInst1_40;
        MR_Word check_hlds__modecheck_util__VarTypes0_41;
        MR_Word check_hlds__modecheck_util__VarType_42;
        MR_Word check_hlds__modecheck_util__V_54_54;
        MR_Word check_hlds__modecheck_util___ModuleInfo_43;
        MR_Word check_hlds__modecheck_util___Sub_44;

        {
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_15, check_hlds__modecheck_util__Var0_9, &check_hlds__modecheck_util__VarInst0_16);
        }
        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__ModuleInfo0_38);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_38, check_hlds__modecheck_util__InitialInst_10, &check_hlds__modecheck_util__InitialInst_39);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_38, check_hlds__modecheck_util__VarInst0_16, &check_hlds__modecheck_util__VarInst1_40);
        }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__VarTypes0_41);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes0_41, check_hlds__modecheck_util__Var0_9, &check_hlds__modecheck_util__VarType_42);
        }
        {
          check_hlds__modecheck_util__V_54_54 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
        {
          check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst1_40, check_hlds__modecheck_util__InitialInst_39, check_hlds__modecheck_util__VarType_42, check_hlds__modecheck_util__ModuleInfo0_38, &check_hlds__modecheck_util___ModuleInfo_43, check_hlds__modecheck_util__V_54_54, &check_hlds__modecheck_util___Sub_44);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
            *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
            check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19;
            *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17;
          }
        else
          {
            MR_Word check_hlds__modecheck_util__V_45_45;
            MR_Word check_hlds__modecheck_util__V_46_46;

            check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InitialInst_39)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_39, (MR_Integer) 0)));
                check_hlds__modecheck_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_39, (MR_Integer) 1)));
                {
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modecheck_util__ModuleInfo0_38, check_hlds__modecheck_util__VarInst1_40);
                }
              }
            if (check_hlds__modecheck_util__succeeded)
              {
                MR_Word check_hlds__modecheck_util__WaitingVars_47;
                MR_Word check_hlds__modecheck_util__ModeError_48;

                *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
                {
                  check_hlds__modecheck_util__WaitingVars_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
                {
                  check_hlds__modecheck_util__ModeError_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_48, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_48, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_16));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_48, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_39));
                }
                {
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_47, check_hlds__modecheck_util__ModeError_48, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22);
                }
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17;
              }
            else
              {
                {
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__modecheck_util__ModuleInfo0_38, check_hlds__modecheck_util__InitialInst_39);
                }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_63;
                    MR_Word check_hlds__modecheck_util__ModeError_64;

                    *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
                    {
                      check_hlds__modecheck_util__WaitingVars_63 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_64, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_64, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_16));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_64, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_39));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_63, check_hlds__modecheck_util__ModeError_64, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22);
                    }
                    *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17;
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_util__VarSet0_49;
                    MR_Word check_hlds__modecheck_util__VarSet_50;
                    MR_Word check_hlds__modecheck_util__VarTypes_51;
                    MR_Word check_hlds__modecheck_util__ExtraGoal_52;
                    MR_Word check_hlds__modecheck_util__NewUnifyExtraGoal_53;
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_57;
                    MR_Word check_hlds__modecheck_util__V_60_60;

                    {
                      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__VarSet0_49);
                    }
                    {
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarSet0_49, &check_hlds__modecheck_util__VarSet_50);
                    }
                    {
                      hlds__vartypes__add_var_type_4_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_42, check_hlds__modecheck_util__VarTypes0_41, &check_hlds__modecheck_util__VarTypes_51);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_57);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_57, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22);
                    }
                    {
                      check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_util__Var0_9, *check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_42, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modecheck_util__ExtraGoal_52);
                    }
                    {
                      check_hlds__modecheck_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_60_60, 0) = ((MR_Box) (check_hlds__modecheck_util__ExtraGoal_52));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__modecheck_util__NewUnifyExtraGoal_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_53, 1) = ((MR_Box) (check_hlds__modecheck_util__V_60_60));
                    }
                    {
                      check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17, check_hlds__modecheck_util__NewUnifyExtraGoal_53, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18);
                    }
                  }
              }
          }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var0_9, check_hlds__modecheck_util__FinalInst_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_24);
        }
        {
          check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[4], ((MR_Box) (*check_hlds__modecheck_util__Var_12)), ((MR_Box) (check_hlds__modecheck_util__Var0_9)));
        }
        if (check_hlds__modecheck_util__succeeded)
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_24;
        else
          {
            {
              check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__FinalInst_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_24, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20);
            }
          }
      }
    else
      {
        *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_19;
        *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_18 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_17;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__modecheck_util__succeeded)
              {
                *check_hlds__modecheck_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
                check_hlds__modecheck_util__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word check_hlds__modecheck_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__Vars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__InitialInst_19;
        MR_Word check_hlds__modecheck_util__InitialInsts_20;
        MR_Word check_hlds__modecheck_util__FinalInst_21;
        MR_Word check_hlds__modecheck_util__FinalInsts_22;
        MR_Word check_hlds__modecheck_util__Var_24;
        MR_Word check_hlds__modecheck_util__Vars_25;
        MR_Integer check_hlds__modecheck_util__ArgNum_28;
        MR_Integer check_hlds__modecheck_util__V_33_33;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36;

        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__InitialInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_util__InitialInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__FinalInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__modecheck_util__FinalInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
                check_hlds__modecheck_util__V_33_33 = (MR_Integer) 1;
                check_hlds__modecheck_util__ArgNum_28 = (check_hlds__modecheck_util__ArgNum0_4 + check_hlds__modecheck_util__V_33_33);
                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_28, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34);
                }
                {
                  check_hlds__modecheck_util__modecheck_set_var_inst_call_8_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__InitialInst_19, check_hlds__modecheck_util__FinalInst_21, &check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36);
                }
                {
                  check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_18, check_hlds__modecheck_util__InitialInsts_20, check_hlds__modecheck_util__FinalInsts_22, check_hlds__modecheck_util__ArgNum_28, &check_hlds__modecheck_util__Vars_25, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
                }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__modecheck_util__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_24));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_25));
                    }
                    check_hlds__modecheck_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__modecheck_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
  MR_Word check_hlds__modecheck_util__InstVar_7,
  MR_Word check_hlds__modecheck_util__Subst_8)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Inst_10;
    MR_Box check_hlds__modecheck_util__conv0_Inst_10;

    {
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__HeadInstVars_6, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), &check_hlds__modecheck_util__conv0_Inst_10);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        check_hlds__modecheck_util__Inst_10 = ((MR_Word) check_hlds__modecheck_util__conv0_Inst_10);
        check_hlds__modecheck_util__succeeded = MR_TRUE;
      }
    if (check_hlds__modecheck_util__succeeded)
      {
        MR_Word check_hlds__modecheck_util__TypeInfo_23_23;
        MR_Word check_hlds__modecheck_util__SubstInstVars_11;
        MR_Word check_hlds__modecheck_util__SubstInst_12;
        MR_Word check_hlds__modecheck_util__Uniq_13;
        MR_Word check_hlds__modecheck_util__BoundInsts_15;
        MR_Word check_hlds__modecheck_util__SubstUniq_16;
        MR_Word check_hlds__modecheck_util__SubstBoundInsts_18;
        MR_Word check_hlds__modecheck_util__V_14_14;
        MR_Word check_hlds__modecheck_util__V_17_17;

        check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Subst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__SubstInstVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 1)));
            check_hlds__modecheck_util__SubstInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 2)));
            check_hlds__modecheck_util__TypeInfo_23_23 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
            {
              check_hlds__modecheck_util__succeeded = mercury__set__member_2_p_0(check_hlds__modecheck_util__TypeInfo_23_23, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), check_hlds__modecheck_util__SubstInstVars_11);
            }
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (check_hlds__modecheck_util__succeeded)
                  {
                    check_hlds__modecheck_util__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 1)));
                    check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 2)));
                    check_hlds__modecheck_util__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 3)));
                    check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__SubstInst_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (check_hlds__modecheck_util__succeeded)
                      {
                        check_hlds__modecheck_util__SubstUniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 1)));
                        check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 2)));
                        check_hlds__modecheck_util__SubstBoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 3)));
                      }
                  }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    MR_Word check_hlds__modecheck_util__TypeInfo_24_24;

                    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Uniq_13 == check_hlds__modecheck_util__SubstUniq_16);
                    if (check_hlds__modecheck_util__succeeded)
                      {
                        check_hlds__modecheck_util__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[3];
                        {
                          check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_24_24, ((MR_Box) (check_hlds__modecheck_util__BoundInsts_15)), ((MR_Box) (check_hlds__modecheck_util__SubstBoundInsts_18)));
                        }
                      }
                  }
                else
                  {
                    check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__Inst_10, check_hlds__modecheck_util__SubstInst_12);
                  }
              }
          }
      }
    else
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    if (check_hlds__modecheck_util__succeeded)
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    return check_hlds__modecheck_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
                MR_Word check_hlds__modecheck_util__Inst_67;
                MR_Word check_hlds__modecheck_util__InstMap_68;
                MR_Word check_hlds__modecheck_util__VarInst_69;
                MR_Word check_hlds__modecheck_util__VarTypes_70;
                MR_Word check_hlds__modecheck_util__Type_71;
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
                {
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
                {
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
                {
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
                {
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
                    {
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
                    MR_Word check_hlds__modecheck_util__ModeError_75;

                    {
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
                MR_Word check_hlds__modecheck_util__Inst_67;
                MR_Word check_hlds__modecheck_util__InstMap_68;
                MR_Word check_hlds__modecheck_util__VarInst_69;
                MR_Word check_hlds__modecheck_util__VarTypes_70;
                MR_Word check_hlds__modecheck_util__Type_71;
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
                {
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
                {
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
                {
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
                {
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
                    {
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
                    MR_Word check_hlds__modecheck_util__ModeError_75;

                    {
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
  MR_Word check_hlds__modecheck_util__Type_6,
  MR_Word check_hlds__modecheck_util__ConsId_7)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__BoundInst_8;
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_9;
    MR_Word check_hlds__modecheck_util__ArgInsts_10;

    {
      check_hlds__modecheck_util__ConsIdAdjustedArity_9 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_5, check_hlds__modecheck_util__Type_6, check_hlds__modecheck_util__ConsId_7);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_10);
    }
    {
      check_hlds__modecheck_util__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_7));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_10));
    }
    return check_hlds__modecheck_util__BoundInst_8;
  }
}

static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__modecheck_util__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__Goal_8;
        MR_Word check_hlds__modecheck_util__Goals_9;
        MR_Word check_hlds__modecheck_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__GoalInfo_12;

        {
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__HeadVar__2_2, check_hlds__modecheck_util__GoalInfo0_11, &check_hlds__modecheck_util__GoalInfo_12);
        }
        {
          check_hlds__modecheck_util__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 0) = ((MR_Box) (check_hlds__modecheck_util__GoalExpr_10));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_12));
        }
        {
          check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__Goals0_6, check_hlds__modecheck_util__HeadVar__2_2, &check_hlds__modecheck_util__Goals_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_9));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__modecheck_util__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__Goal_10;
        MR_Word check_hlds__modecheck_util__Goals_11;
        MR_Word check_hlds__modecheck_util__NonLocals_13;
        MR_Word check_hlds__modecheck_util__InstMap_14;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

        {
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal0_8);
        }
        {
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_util__Goal0_8, &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__modecheck_util__InstMap_14);
        }
        {
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_util__InstMap_14);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
            {
              check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__Goals0_9, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
            }
            check_hlds__modecheck_util__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__Goals0_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
{
  {
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

    {
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(
  MR_Word check_hlds__modecheck_util__ModuleInfo_4,
  MR_Word check_hlds__modecheck_util__Modes_5,
  MR_Word * check_hlds__modecheck_util__Map_6)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__V_8_8;
    MR_Word check_hlds__modecheck_util__V_9_9;
    MR_Word check_hlds__modecheck_util__V_10_10;
    MR_Word check_hlds__modecheck_util___Expansions_7;
    MR_Box check_hlds__modecheck_util__conv3_Map_6;
    MR_Box check_hlds__modecheck_util__conv2__Expansions_7;

    {
      check_hlds__modecheck_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_4));
    }
    {
      check_hlds__modecheck_util__V_9_9 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      check_hlds__modecheck_util__V_10_10 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_8_8, check_hlds__modecheck_util__Modes_5, ((MR_Box) (check_hlds__modecheck_util__V_9_9)), &check_hlds__modecheck_util__conv3_Map_6, ((MR_Box) (check_hlds__modecheck_util__V_10_10)), &check_hlds__modecheck_util__conv2__Expansions_7);
    }
    *check_hlds__modecheck_util__Map_6 = ((MR_Word) check_hlds__modecheck_util__conv3_Map_6);
    check_hlds__modecheck_util___Expansions_7 = ((MR_Word) check_hlds__modecheck_util__conv2__Expansions_7);
  }
}

void MR_CALL 
check_hlds__modecheck_util__get_live_vars_3_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_util__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__LiveVars0_21;

            {
              check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_util__V_22_22, check_hlds__modecheck_util__IsLives_19, &check_hlds__modecheck_util__LiveVars0_21);
            }
            switch (check_hlds__modecheck_util__IsLive_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__LiveVars0_21;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__modecheck_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_23_23));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__LiveVars0_21));
                }
                break;
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(
  MR_Word check_hlds__modecheck_util___ModeInfo_4,
  MR_Word check_hlds__modecheck_util__ModeContext_5,
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    {
      check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_5, check_hlds__modecheck_util__UnifyContext_6);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(
  MR_Word check_hlds__modecheck_util__InstMap0_7,
  MR_Word check_hlds__modecheck_util__GoalExpr_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_util__DeltaInstMap_12;
    MR_Word check_hlds__modecheck_util__V_19_19;
    MR_Word check_hlds__modecheck_util__V_11_11;

    if (check_hlds__modecheck_util__succeeded)
      {
        check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 1)));
        check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 2)));
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__modecheck_util__succeeded)
      {
        {
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__modecheck_util__DeltaInstMap_12);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_util__NonLocals_13;
        MR_Word check_hlds__modecheck_util__InstMap_14;

        {
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_14);
        }
        {
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__InstMap_14, check_hlds__modecheck_util__NonLocals_13, &check_hlds__modecheck_util__DeltaInstMap_12);
        }
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17;
      }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__DeltaInstMap_12, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modecheck_util__wrapper_arg_2;
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
    MR_Word check_hlds__modecheck_util__conv0_BoundInst_8;

    {
      check_hlds__modecheck_util__conv0_BoundInst_8 = check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1));
    }
    check_hlds__modecheck_util__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_util__conv0_BoundInst_8));
    return check_hlds__modecheck_util__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0(
  MR_Word check_hlds__modecheck_util__Var_6,
  MR_Word check_hlds__modecheck_util__MainConsId_7,
  MR_Word check_hlds__modecheck_util__OtherConsIds_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__ModuleInfo_10;
    MR_Word check_hlds__modecheck_util__VarTypes_11;
    MR_Word check_hlds__modecheck_util__Type_12;
    MR_Word check_hlds__modecheck_util__BoundInsts_13;
    MR_Word check_hlds__modecheck_util__Inst_14;
    MR_Word check_hlds__modecheck_util__V_17_17;
    MR_Word check_hlds__modecheck_util__V_18_18;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__ModuleInfo_10);
    }
    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__VarTypes_11);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_11, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__Type_12);
    }
    {
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 4) = ((MR_Box) (check_hlds__modecheck_util__Type_12));
    }
    {
      check_hlds__modecheck_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 0) = ((MR_Box) (check_hlds__modecheck_util__MainConsId_7));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_util__OtherConsIds_8));
    }
    {
      check_hlds__modecheck_util__BoundInsts_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__V_18_18);
    }
    {
      check_hlds__modecheck_util__Inst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 3) = ((MR_Box) (check_hlds__modecheck_util__BoundInsts_13));
    }
    {
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_6, check_hlds__modecheck_util__Inst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_functor_test_4_p_0(
  MR_Word check_hlds__modecheck_util__Var_5,
  MR_Word check_hlds__modecheck_util__ConsId_6,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__ModuleInfo_8;
    MR_Word check_hlds__modecheck_util__VarTypes_9;
    MR_Word check_hlds__modecheck_util__Type_10;
    MR_Word check_hlds__modecheck_util__BoundInst_11;
    MR_Word check_hlds__modecheck_util__Inst_12;
    MR_Word check_hlds__modecheck_util__V_17_17;
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_25;
    MR_Word check_hlds__modecheck_util__ArgInsts_26;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__ModuleInfo_8);
    }
    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__VarTypes_9);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_9, check_hlds__modecheck_util__Var_5, &check_hlds__modecheck_util__Type_10);
    }
    {
      check_hlds__modecheck_util__ConsIdAdjustedArity_25 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_8, check_hlds__modecheck_util__Type_10, check_hlds__modecheck_util__ConsId_6);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_26);
    }
    {
      check_hlds__modecheck_util__BoundInst_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_6));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_26));
    }
    {
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (check_hlds__modecheck_util__BoundInst_11));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_util__Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 3) = ((MR_Box) (check_hlds__modecheck_util__V_17_17));
    }
    {
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_5, check_hlds__modecheck_util__Inst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2;
        else
          {
            MR_Word check_hlds__modecheck_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
            MR_Word check_hlds__modecheck_util__ConjGoals_10;
            MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__V_16_16;
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 1)));

            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 1)));
                check_hlds__modecheck_util__ConjGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 2)));
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_16_16 == (MR_Integer) 0);
              }
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__ConjGoals_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
              }
            else
              {
                MR_Word check_hlds__modecheck_util__NonLocals_12;

                {
                  check_hlds__modecheck_util__NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_7);
                }
                {
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__Goals_8;
              MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;

              check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
              check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
        else
          {
            MR_Word check_hlds__modecheck_util__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;
            MR_Word check_hlds__modecheck_util__ConjGoals_13;
            MR_Word check_hlds__modecheck_util__V_19_19;
            MR_Word check_hlds__modecheck_util__V_22_22;
            MR_Word check_hlds__modecheck_util__V_14_14;

            {
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_util__HeadVar__1_1, check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
            }
            check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 0)));
            check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 1)));
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 1)));
                check_hlds__modecheck_util__ConjGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 2)));
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__1_1 == check_hlds__modecheck_util__V_22_22);
              }
            if (check_hlds__modecheck_util__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__ConjGoals_13;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3;
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__modecheck_util__NonLocals_15;

                {
                  check_hlds__modecheck_util__NonLocals_15 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_10);
                }
                {
                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(
  MR_Word check_hlds__modecheck_util__Vars0_9,
  MR_Word check_hlds__modecheck_util__InitialInsts_10,
  MR_Word check_hlds__modecheck_util__FinalInsts_11,
  MR_Integer check_hlds__modecheck_util__ArgOffset_12,
  MR_Word * check_hlds__modecheck_util__Vars_13,
  MR_Word * check_hlds__modecheck_util__Goals_14,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__Vars1_16;
    MR_Word check_hlds__modecheck_util__Goals1_17;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_9, check_hlds__modecheck_util__InitialInsts_10, check_hlds__modecheck_util__FinalInsts_11, check_hlds__modecheck_util__ArgOffset_12, &check_hlds__modecheck_util__Vars1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goals1_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;
        *check_hlds__modecheck_util__Vars_13 = check_hlds__modecheck_util__Vars1_16;
        *check_hlds__modecheck_util__Goals_14 = check_hlds__modecheck_util__Goals1_17;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst_list\'/8", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
  MR_Word check_hlds__modecheck_util__Var0_6,
  MR_Word check_hlds__modecheck_util__NewInst_7,
  MR_Word check_hlds__modecheck_util__MaybeUInst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__PVars0_10;
    MR_Word check_hlds__modecheck_util__InstMap0_11;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;

    {
      check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__PVars0_10);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__InstMap0_11);
    }
    {
      check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_11);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        MR_Word check_hlds__modecheck_util__OldInst_12;
        MR_Word check_hlds__modecheck_util__ModuleInfo0_13;
        MR_Word check_hlds__modecheck_util__ModuleInfo_14;
        MR_Word check_hlds__modecheck_util__Inst_15;
        MR_Word check_hlds__modecheck_util__VarTypes_19;
        MR_Word check_hlds__modecheck_util__Type_20;
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40;
        MR_Word check_hlds__modecheck_util__V_57_57;

        {
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_11, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__OldInst_12);
        }
        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__ModuleInfo0_13);
        }
        {
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
            check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo0_13;
            check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__OldInst_12;
          }
        else
          {
            MR_Word check_hlds__modecheck_util__UnifyInst_16;
            MR_Word check_hlds__modecheck_util__ModuleInfo1_18;
            MR_Word check_hlds__modecheck_util___Det_17;

            {
              check_hlds__modecheck_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7, (MR_Integer) 1, &check_hlds__modecheck_util__UnifyInst_16, &check_hlds__modecheck_util___Det_17, check_hlds__modecheck_util__ModuleInfo0_13, &check_hlds__modecheck_util__ModuleInfo1_18);
            }
            if (check_hlds__modecheck_util__succeeded)
              {
                check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo1_18;
                check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__UnifyInst_16;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
                  return;
                }
              }
          }
        {
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40);
        }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__VarTypes_19);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_19, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Type_20);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__Inst_15, &check_hlds__modecheck_util__V_57_57);
        }
        {
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_util__V_57_57);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
            MR_Word check_hlds__modecheck_util__InstMap_21;

            {
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_util__InstMap_21);
            }
            {
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_21, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
            }
          }
        else
          {
            {
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
            }
            if (check_hlds__modecheck_util__succeeded)
              {
                MR_Word check_hlds__modecheck_util__InstMap_50;

                {
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_50);
                }
                {
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_util__Reason0_22;
                MR_Word check_hlds__modecheck_util__UInst_23;

                {
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                }
                check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
                if (check_hlds__modecheck_util__succeeded)
                  {
                    {
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Reason0_22);
                    }
                    if (check_hlds__modecheck_util__succeeded)
                      {
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__MaybeUInst_8)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__modecheck_util__succeeded)
                          {
                            check_hlds__modecheck_util__UInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__MaybeUInst_8, (MR_Integer) 0)));
                            {
                              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__UInst_23, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                            }
                            if (check_hlds__modecheck_util__succeeded)
                              {
                                check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                              }
                          }
                        check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
                      }
                  }
                if (check_hlds__modecheck_util__succeeded)
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_24;
                    MR_Word check_hlds__modecheck_util__ModeError_25;

                    {
                      check_hlds__modecheck_util__WaitingVars_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 1) = ((MR_Box) (check_hlds__modecheck_util__Reason0_22));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 2) = ((MR_Box) (check_hlds__modecheck_util__Var0_6));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 3) = ((MR_Box) (check_hlds__modecheck_util__OldInst_12));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 4) = ((MR_Box) (check_hlds__modecheck_util__Inst_15));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_24, check_hlds__modecheck_util__ModeError_25, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_util__DelayInfo0_26;
                    MR_Word check_hlds__modecheck_util__DelayInfo_27;
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45;
                    MR_Word check_hlds__modecheck_util__InstMap_51;

                    {
                      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_51);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45);
                    }
                    {
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__DelayInfo0_26);
                    }
                    {
                      check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__DelayInfo0_26, &check_hlds__modecheck_util__DelayInfo_27);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_util__DelayInfo_27, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
                  }
              }
          }
      }
    else
      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33;
    if ((check_hlds__modecheck_util__PVars0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;
    else
      {
        MR_Word check_hlds__modecheck_util__NonLocals_28;
        MR_Word check_hlds__modecheck_util__Bound0_29;
        MR_Word check_hlds__modecheck_util__PVars1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__PVars_32;
        MR_Word check_hlds__modecheck_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 0)));

        check_hlds__modecheck_util__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 0)));
        check_hlds__modecheck_util__Bound0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 1)));
        {
          check_hlds__modecheck_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__NonLocals_28, check_hlds__modecheck_util__Var0_6);
        }
        if (check_hlds__modecheck_util__succeeded)
          {
            MR_Word check_hlds__modecheck_util__Bound_31;
            MR_Word check_hlds__modecheck_util__V_48_48;

            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Bound0_29, &check_hlds__modecheck_util__Bound_31);
            }
            {
              check_hlds__modecheck_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 0) = ((MR_Box) (check_hlds__modecheck_util__NonLocals_28));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_util__Bound_31));
            }
            {
              check_hlds__modecheck_util__PVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 0) = ((MR_Box) (check_hlds__modecheck_util__V_48_48));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 1) = ((MR_Box) (check_hlds__modecheck_util__PVars1_30));
            }
          }
        else
          check_hlds__modecheck_util__PVars_32 = check_hlds__modecheck_util__PVars0_10;
        {
          check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(check_hlds__modecheck_util__PVars_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34);
        }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
  MR_Word check_hlds__modecheck_util__Var_6,
  MR_Word check_hlds__modecheck_util__Type_7,
  MR_Word check_hlds__modecheck_util__Inst_8,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__InstMap_10;
    MR_Word check_hlds__modecheck_util__VarInst_11;
    MR_Word check_hlds__modecheck_util__ModuleInfo0_12;
    MR_Word check_hlds__modecheck_util__ModuleInfo_13;
    MR_Word check_hlds__modecheck_util__V_19_19;
    MR_Word check_hlds__modecheck_util___Subst_14;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_10);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_10, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__VarInst_11);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__ModuleInfo0_12);
    }
    {
      check_hlds__modecheck_util__V_19_19 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_11, check_hlds__modecheck_util__Inst_8, check_hlds__modecheck_util__Type_7, check_hlds__modecheck_util__ModuleInfo0_12, &check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__V_19_19, &check_hlds__modecheck_util___Subst_14);
    }
    if (check_hlds__modecheck_util__succeeded)
      {
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
      }
    else
      {
        MR_Word check_hlds__modecheck_util__WaitingVars_15;
        MR_Word check_hlds__modecheck_util__ModeError_16;

        {
          check_hlds__modecheck_util__WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_6);
        }
        {
          check_hlds__modecheck_util__ModeError_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 1) = ((MR_Box) (check_hlds__modecheck_util__Var_6));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_11));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_8));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_15, check_hlds__modecheck_util__ModeError_16, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(
  MR_Word check_hlds__modecheck_util__Vars_7,
  MR_Word check_hlds__modecheck_util__Insts_8,
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
  MR_Word * check_hlds__modecheck_util__Subst_10,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__V_14_14;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
    MR_Word check_hlds__modecheck_util__V_30_30;
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

    {
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
    {
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
    }
    {
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
    if (check_hlds__modecheck_util__succeeded)
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    if (check_hlds__modecheck_util__succeeded)
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
    else
      {
        MR_Word check_hlds__modecheck_util__InstMap_26;
        MR_Word check_hlds__modecheck_util__VarInsts_27;
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
        MR_Word check_hlds__modecheck_util__ModeError_29;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
        {
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
        {
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
  MR_Box check_hlds__modecheck_util__closure_arg,
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

    {
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
    return check_hlds__modecheck_util__succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(
  MR_Word check_hlds__modecheck_util__Vars_7,
  MR_Word check_hlds__modecheck_util__Insts_8,
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
  MR_Word * check_hlds__modecheck_util__Subst_10,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Word check_hlds__modecheck_util__V_14_14;
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
    MR_Word check_hlds__modecheck_util__V_30_30;
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

    {
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
    {
      check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
    {
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
    }
    {
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
    if (check_hlds__modecheck_util__succeeded)
      check_hlds__modecheck_util__succeeded = MR_TRUE;
    if (check_hlds__modecheck_util__succeeded)
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
    else
      {
        MR_Word check_hlds__modecheck_util__InstMap_26;
        MR_Word check_hlds__modecheck_util__VarInsts_27;
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
        MR_Word check_hlds__modecheck_util__ModeError_29;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
        {
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
        {
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
        }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
                {
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__IsLive_30 == (MR_Integer) 1);
                if (check_hlds__modecheck_util__succeeded)
                  check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == (MR_Integer) 0);
                if (check_hlds__modecheck_util__succeeded)
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
                    MR_Word check_hlds__modecheck_util__ModeError_50;

                    {
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
                  }
                else
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_util__succeeded;

        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
                {
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == check_hlds__modecheck_util__IsLive_30);
                if (check_hlds__modecheck_util__succeeded)
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
                else
                  {
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
                    MR_Word check_hlds__modecheck_util__ModeError_50;

                    {
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
                    {
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modecheck_util__compute_arg_offset_2_p_0(
  MR_Word check_hlds__modecheck_util__PredInfo_3,
  MR_Integer * check_hlds__modecheck_util__ArgOffset_4)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;
    MR_Integer check_hlds__modecheck_util__OrigArity_5;
    MR_Word check_hlds__modecheck_util__ArgTypes_6;
    MR_Integer check_hlds__modecheck_util__CurrentArity_7;

    {
      check_hlds__modecheck_util__OrigArity_5 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modecheck_util__PredInfo_3);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_util__PredInfo_3, &check_hlds__modecheck_util__ArgTypes_6);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__modecheck_util__ArgTypes_6, &check_hlds__modecheck_util__CurrentArity_7);
    }
    *check_hlds__modecheck_util__ArgOffset_4 = (check_hlds__modecheck_util__OrigArity_5 - check_hlds__modecheck_util__CurrentArity_7);
  }
}

void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_9_p_0(
  MR_Word check_hlds__modecheck_util__MainGoal_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
  MR_Word check_hlds__modecheck_util__HeadVar__4_4,
  MR_Word check_hlds__modecheck_util__HeadVar__5_5,
  MR_Word check_hlds__modecheck_util__HeadVar__6_6,
  MR_Word * check_hlds__modecheck_util__HeadVar__7_7,
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
      }
    else
      {
        MR_Word check_hlds__modecheck_util__BeforeGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_util__AfterGoals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__Errors_27;

        {
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__Errors_27);
        }
        {
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__HeadVar__6_6);
        }
        if (check_hlds__modecheck_util__succeeded)
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Errors_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_util__succeeded)
          {
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_57_57;
            MR_Word check_hlds__modecheck_util__NonLocals0_28;
            MR_Word check_hlds__modecheck_util__OldArgVars_29;
            MR_Word check_hlds__modecheck_util__NewArgVars_30;
            MR_Word check_hlds__modecheck_util__IntroducedVars_31;
            MR_Word check_hlds__modecheck_util__OutsideVars_32;
            MR_Word check_hlds__modecheck_util__NonLocals_33;
            MR_Word check_hlds__modecheck_util__GoalInfo_34;
            MR_Word check_hlds__modecheck_util__Goal0_35;
            MR_Word check_hlds__modecheck_util__Context_36;
            MR_Word check_hlds__modecheck_util__BeforeGoals_37;
            MR_Word check_hlds__modecheck_util__AfterGoals_38;
            MR_Word check_hlds__modecheck_util__GoalList0_39;
            MR_Word check_hlds__modecheck_util__MayChangeCalledProc0_40;
            MR_Word check_hlds__modecheck_util__GoalList_41;
            MR_Word check_hlds__modecheck_util__V_44_44;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55;

            {
              check_hlds__modecheck_util__NonLocals0_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
            check_hlds__modecheck_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__4_4, &check_hlds__modecheck_util__OldArgVars_29);
            }
            {
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__5_5, &check_hlds__modecheck_util__NewArgVars_30);
            }
            {
              parse_tree__set_of_var__difference_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NewArgVars_30, check_hlds__modecheck_util__OldArgVars_29, &check_hlds__modecheck_util__IntroducedVars_31);
            }
            {
              parse_tree__set_of_var__union_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NonLocals0_28, check_hlds__modecheck_util__IntroducedVars_31, &check_hlds__modecheck_util__OutsideVars_32);
            }
            {
              parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__OutsideVars_32, check_hlds__modecheck_util__NewArgVars_30, &check_hlds__modecheck_util__NonLocals_33);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_33, check_hlds__modecheck_util__HeadVar__3_3, &check_hlds__modecheck_util__GoalInfo_34);
            }
            {
              check_hlds__modecheck_util__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 0) = ((MR_Box) (check_hlds__modecheck_util__MainGoal_1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_34));
            }
            {
              check_hlds__modecheck_util__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
            {
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__BeforeGoals0_19, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__BeforeGoals_37);
            }
            {
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__AfterGoals0_20, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__AfterGoals_38);
            }
            {
              check_hlds__modecheck_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal0_35));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_38));
            }
            {
              check_hlds__modecheck_util__GoalList0_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_util__BeforeGoals_37, check_hlds__modecheck_util__V_44_44);
            }
            {
              check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__MayChangeCalledProc0_40);
            }
            {
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46);
            }
            {
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48);
            }
            {
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__HeadVar__6_6, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49);
            }
            {
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0((MR_Integer) 0, check_hlds__modecheck_util__GoalList0_39, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51);
            }
            {
              check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__GoalList0_39, &check_hlds__modecheck_util__GoalList_41, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_util__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_util__GoalList_41));
            }
            {
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55);
            }
            {
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(check_hlds__modecheck_util__MayChangeCalledProc0_40, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
            }
          }
        else
          {
            *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
          }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_util__append_extra_goals_3_p_0(
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_util__succeeded;

    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__2_2;
    else
      {
        MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__1_1;
        else
          {
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Word check_hlds__modecheck_util__BeforeGoals1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_util__AfterGoals1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_util__BeforeGoals_11;
            MR_Word check_hlds__modecheck_util__AfterGoals_12;

            {
              check_hlds__modecheck_util__BeforeGoals_11 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_15_15, check_hlds__modecheck_util__BeforeGoals1_9);
            }
            {
              check_hlds__modecheck_util__AfterGoals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__AfterGoals1_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__BeforeGoals_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_12));
            }
          }
      }
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

/* :- end_module check_hlds.modecheck_util. */
