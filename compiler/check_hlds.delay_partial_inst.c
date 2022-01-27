/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module check_hlds.delay_partial_inst. */
/* :- implementation. */

/*
INIT mercury__check_hlds__delay_partial_inst__init
ENDINIT
*/

#include "check_hlds.delay_partial_inst.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s {
  MR_bool check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55;
  jmp_buf check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_61;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165;
  MR_Box check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_165;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4];

static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1];

static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1];

static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1];

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
  MR_Word check_hlds__delay_partial_inst__Goal0_10,
  MR_Word check_hlds__delay_partial_inst__LHS_11,
  MR_Word check_hlds__delay_partial_inst__RHS0_12,
  MR_Word check_hlds__delay_partial_inst__Unify_13,
  MR_Word * check_hlds__delay_partial_inst__Goal_14,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
  MR_Word check_hlds__delay_partial_inst__Context_8,
  MR_Word check_hlds__delay_partial_inst__LHSVar_9,
  MR_Word check_hlds__delay_partial_inst__RHSVar_10,
  MR_Word check_hlds__delay_partial_inst__UnifyMode_11,
  MR_Word * check_hlds__delay_partial_inst__Goal_12);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
  MR_Word check_hlds__delay_partial_inst__UnifyMode_10,
  MR_Word check_hlds__delay_partial_inst__Unify_11,
  MR_Word * check_hlds__delay_partial_inst__Goal_12,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_36,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_38);

static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
  MR_Word check_hlds__delay_partial_inst__Var_6,
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
  MR_Word check_hlds__delay_partial_inst__GoalInfo0_8,
  MR_Word check_hlds__delay_partial_inst__Unify_9,
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
  void * check_hlds__delay_partial_inst__env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
  void * check_hlds__delay_partial_inst__env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
  void * check_hlds__delay_partial_inst__env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
  void * check_hlds__delay_partial_inst__env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
  MR_Word check_hlds__delay_partial_inst__PredId_8,
  MR_Word check_hlds__delay_partial_inst__ProcTable_9,
  MR_Integer check_hlds__delay_partial_inst__ProcId_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5);


static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[4][2];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1];




static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1])),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "delay_partial_inst"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "canon_vars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "construct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4] = {
  (MR_String) "dpi_module_info",
  (MR_String) "dpi_varset",
  (MR_String) "dpi_vartypes",
  (MR_String) "dpi_changed"
};

static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 = {
  (MR_String) "delay_partial_inst_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "delay_partial_inst_info",
  {     check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0 },
  {     check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0
};

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

    {
      check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____construct_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

    {
      check_hlds__delay_partial_inst____Compare____construct_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

    {
      check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Integer check_hlds__delay_partial_inst__CastX_15 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;
    MR_Integer check_hlds__delay_partial_inst__CastY_16 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__3_3;

    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_15 == check_hlds__delay_partial_inst__CastY_16);
    if (check_hlds__delay_partial_inst__succeeded)
      *check_hlds__delay_partial_inst__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__delay_partial_inst__V_12_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__delay_partial_inst__V_12_12, check_hlds__delay_partial_inst__V_4_4, check_hlds__delay_partial_inst__V_8_8);
        }
        check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_12_12 == (MR_Integer) 0);
        check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
        if (check_hlds__delay_partial_inst__succeeded)
          *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_12_12;
        else
          {
            MR_Word check_hlds__delay_partial_inst__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3], &check_hlds__delay_partial_inst__V_13_13, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
            }
            check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_13_13 == (MR_Integer) 0);
            check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
            if (check_hlds__delay_partial_inst__succeeded)
              *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_13_13;
            else
              {
                MR_Word check_hlds__delay_partial_inst__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[3], &check_hlds__delay_partial_inst__V_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_6_6)), ((MR_Box) (check_hlds__delay_partial_inst__V_10_10)));
                }
                check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_14_14 == (MR_Integer) 0);
                check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
                if (check_hlds__delay_partial_inst__succeeded)
                  *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_14_14;
                else
                  {
                    MR_Integer check_hlds__delay_partial_inst__V_21_21 = (MR_Integer) check_hlds__delay_partial_inst__V_7_7;
                    MR_Integer check_hlds__delay_partial_inst__V_22_22 = (MR_Integer) check_hlds__delay_partial_inst__V_11_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_partial_inst__HeadVar__1_1, check_hlds__delay_partial_inst__V_21_21, check_hlds__delay_partial_inst__V_22_22);
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Integer check_hlds__delay_partial_inst__CastX_11 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__1_1;
    MR_Integer check_hlds__delay_partial_inst__CastY_12 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;

    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_11 == check_hlds__delay_partial_inst__CastY_12);
    if (check_hlds__delay_partial_inst__succeeded)
      check_hlds__delay_partial_inst__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__delay_partial_inst__TypeInfo_14_14;
        MR_Word check_hlds__delay_partial_inst__TypeInfo_15_15;
        MR_Word check_hlds__delay_partial_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__delay_partial_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__delay_partial_inst__V_3_3, check_hlds__delay_partial_inst__V_7_7);
        }
        if (check_hlds__delay_partial_inst__succeeded)
          {
            check_hlds__delay_partial_inst__TypeInfo_14_14 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3];
            {
              check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeInfo_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_4_4)), ((MR_Box) (check_hlds__delay_partial_inst__V_8_8)));
            }
            if (check_hlds__delay_partial_inst__succeeded)
              {
                check_hlds__delay_partial_inst__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[3];
                {
                  check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
                }
                if (check_hlds__delay_partial_inst__succeeded)
                  check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_6_6 == check_hlds__delay_partial_inst__V_10_10);
              }
          }
      }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

    {
      check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

    {
      check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
  MR_Word check_hlds__delay_partial_inst__Goal0_10,
  MR_Word check_hlds__delay_partial_inst__LHS_11,
  MR_Word check_hlds__delay_partial_inst__RHS0_12,
  MR_Word check_hlds__delay_partial_inst__Unify_13,
  MR_Word * check_hlds__delay_partial_inst__Goal_14,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 2)));
    MR_Word check_hlds__delay_partial_inst___Mode_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 1)));
    MR_Word check_hlds__delay_partial_inst___TypeInfos_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 3)));
    MR_Word check_hlds__delay_partial_inst__RHSVar_20;
    MR_Word check_hlds__delay_partial_inst__ConsId_21;
    MR_Word check_hlds__delay_partial_inst__CanonArgs_22;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_20_54;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_21_55;
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_22_56;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_23_57;
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap_43;
    MR_Word check_hlds__delay_partial_inst__List_44;
    MR_Word check_hlds__delay_partial_inst__Rest_45;
    MR_Word check_hlds__delay_partial_inst__V_58_58;
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap_43;

    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CanFail_18 == (MR_Integer) 0);
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_12)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__delay_partial_inst__succeeded)
          {
            check_hlds__delay_partial_inst__RHSVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__RHS0_12, (MR_Integer) 0)));
            check_hlds__delay_partial_inst__TypeInfo_20_54 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
            check_hlds__delay_partial_inst__TypeInfo_21_55 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
            {
              check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeInfo_20_54, check_hlds__delay_partial_inst__TypeInfo_21_55, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28, ((MR_Box) (check_hlds__delay_partial_inst__LHS_11)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap_43);
            }
            if (check_hlds__delay_partial_inst__succeeded)
              {
                check_hlds__delay_partial_inst__CanonVarsMap_43 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap_43);
                check_hlds__delay_partial_inst__succeeded = MR_TRUE;
              }
            if (check_hlds__delay_partial_inst__succeeded)
              {
                check_hlds__delay_partial_inst__TypeCtorInfo_22_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                check_hlds__delay_partial_inst__TypeInfo_23_57 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
                {
                  check_hlds__delay_partial_inst__List_44 = mercury__map__to_assoc_list_1_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_22_56, check_hlds__delay_partial_inst__TypeInfo_23_57, check_hlds__delay_partial_inst__CanonVarsMap_43);
                }
                check_hlds__delay_partial_inst__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__List_44)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__delay_partial_inst__succeeded)
                  {
                    check_hlds__delay_partial_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_44, (MR_Integer) 0)));
                    check_hlds__delay_partial_inst__Rest_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_44, (MR_Integer) 1)));
                    check_hlds__delay_partial_inst__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_58_58, (MR_Integer) 0)));
                    check_hlds__delay_partial_inst__CanonArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_58_58, (MR_Integer) 1)));
                    if ((check_hlds__delay_partial_inst__Rest_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                      }
                    else
                      {
                        {
                          mercury__require__sorry_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.get_sole_cons_id_and_canon_vars\'/4", (MR_String) "delaying partial instantiations when variable could be bound to multiple functors");
                          return;
                        }
                      }
                    check_hlds__delay_partial_inst__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        MR_Word check_hlds__delay_partial_inst__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_10, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__ProgContext_25;
        MR_Word check_hlds__delay_partial_inst__TestGoal_26;
        MR_Word check_hlds__delay_partial_inst__AssignGoal_27;
        MR_Word check_hlds__delay_partial_inst__V_32_32;
        MR_Word check_hlds__delay_partial_inst__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_10, (MR_Integer) 0)));

        {
          check_hlds__delay_partial_inst__ProgContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_24);
        }
        {
          check_hlds__delay_partial_inst__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConsId_21));
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanonArgs_22));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__RHSVar_20, check_hlds__delay_partial_inst__V_32_32, check_hlds__delay_partial_inst__ProgContext_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__TestGoal_26);
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LHS_11, check_hlds__delay_partial_inst__RHS0_12, check_hlds__delay_partial_inst__ProgContext_25, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__AssignGoal_27);
        }
        {
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__delay_partial_inst__TestGoal_26, check_hlds__delay_partial_inst__AssignGoal_27, check_hlds__delay_partial_inst__Goal_14);
        }
      }
    else
      *check_hlds__delay_partial_inst__Goal_14 = check_hlds__delay_partial_inst__Goal0_10;
    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30;
    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
  MR_Word check_hlds__delay_partial_inst__Context_8,
  MR_Word check_hlds__delay_partial_inst__LHSVar_9,
  MR_Word check_hlds__delay_partial_inst__RHSVar_10,
  MR_Word check_hlds__delay_partial_inst__UnifyMode_11,
  MR_Word * check_hlds__delay_partial_inst__Goal_12)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__RHSFromToInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UnifyMode_11, (MR_Integer) 1)));
    MR_Word check_hlds__delay_partial_inst__RHSInitInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__RHSFromToInsts_14, (MR_Integer) 0)));
    MR_Word check_hlds__delay_partial_inst__V_17_17;
    MR_Word check_hlds__delay_partial_inst__V_18_18;
    MR_Word check_hlds__delay_partial_inst__V_19_19;
    MR_String check_hlds__delay_partial_inst__V_20_20;
    MR_Word check_hlds__delay_partial_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UnifyMode_11, (MR_Integer) 0)));
    MR_Word check_hlds__delay_partial_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__RHSFromToInsts_14, (MR_Integer) 1)));

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_7, check_hlds__delay_partial_inst__RHSInitInst_15);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__V_20_20 = (MR_String) "delay_partial_inst";
        check_hlds__delay_partial_inst__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          check_hlds__delay_partial_inst__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_17_17, 0) = ((MR_Box) (check_hlds__delay_partial_inst__RHSVar_10));
        }
        check_hlds__delay_partial_inst__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]);
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LHSVar_9, check_hlds__delay_partial_inst__V_17_17, check_hlds__delay_partial_inst__Context_8, check_hlds__delay_partial_inst__V_18_18, check_hlds__delay_partial_inst__V_19_19, check_hlds__delay_partial_inst__Goal_12);
        }
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
    MR_Word check_hlds__delay_partial_inst__conv2_Goal_12;

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv2_Goal_12);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv2_Goal_12));
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
  MR_Word check_hlds__delay_partial_inst__UnifyMode_10,
  MR_Word check_hlds__delay_partial_inst__Unify_11,
  MR_Word * check_hlds__delay_partial_inst__Goal_12,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_36,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_38)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 0)));
    MR_Word check_hlds__delay_partial_inst__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 1)));
    MR_Word check_hlds__delay_partial_inst__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 2)));
    MR_Word check_hlds__delay_partial_inst__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 3)));
    MR_Word check_hlds__delay_partial_inst___CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 4)));
    MR_Word check_hlds__delay_partial_inst___CanCGC_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 5)));
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_21;
    MR_Word check_hlds__delay_partial_inst__CanonArgs_22;
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_48_48;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_49_49;
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21;
    MR_Box check_hlds__delay_partial_inst__conv1_CanonArgs_22;

    {
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35, ((MR_Box) (check_hlds__delay_partial_inst__Var_15)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__CanonVarsMap0_21 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21);
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        check_hlds__delay_partial_inst__TypeInfo_49_49 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
        {
          check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_48_48, check_hlds__delay_partial_inst__TypeInfo_49_49, check_hlds__delay_partial_inst__CanonVarsMap0_21, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_16)), &check_hlds__delay_partial_inst__conv1_CanonArgs_22);
        }
        if (check_hlds__delay_partial_inst__succeeded)
          {
            check_hlds__delay_partial_inst__CanonArgs_22 = ((MR_Word) check_hlds__delay_partial_inst__conv1_CanonArgs_22);
            check_hlds__delay_partial_inst__succeeded = MR_TRUE;
          }
      }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        MR_Word check_hlds__delay_partial_inst__TypeInfo_50_50 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
        MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        MR_Word check_hlds__delay_partial_inst__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__ProgContext_24;
        MR_Word check_hlds__delay_partial_inst__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_26;
        MR_Word check_hlds__delay_partial_inst__LHSFromToInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UnifyMode_10, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__LHSFinalInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__LHSFromToInsts_27, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__ConjList_33;
        MR_Word check_hlds__delay_partial_inst__V_39_39;
        MR_Word check_hlds__delay_partial_inst__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 3)));
        MR_Word check_hlds__delay_partial_inst___RHSFromToInsts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UnifyMode_10, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__LHSFromToInsts_27, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 0)));

        {
          check_hlds__delay_partial_inst__ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_25);
        }
        {
          check_hlds__delay_partial_inst__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_39_39, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_39_39, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_39_39, 3) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_23));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_39_39, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_24));
        }
        {
          check_hlds__delay_partial_inst__SubUnifyGoals_26 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_50_50, check_hlds__delay_partial_inst__TypeInfo_50_50, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, check_hlds__delay_partial_inst__TypeCtorInfo_52_52, check_hlds__delay_partial_inst__V_39_39, check_hlds__delay_partial_inst__CanonArgs_22, check_hlds__delay_partial_inst__Args_17, check_hlds__delay_partial_inst__ArgModes_18);
        }
        {
          check_hlds__delay_partial_inst__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_23, check_hlds__delay_partial_inst__LHSFinalInst_30);
        }
        if (check_hlds__delay_partial_inst__succeeded)
          {
            MR_Word check_hlds__delay_partial_inst__ConstructGoal_31;
            MR_Word check_hlds__delay_partial_inst__CanonVarsMap_32;
            MR_Word check_hlds__delay_partial_inst__V_41_41;

            {
              hlds__make_goal__construct_functor_4_p_0(check_hlds__delay_partial_inst__Var_15, check_hlds__delay_partial_inst__ConsId_16, check_hlds__delay_partial_inst__CanonArgs_22, &check_hlds__delay_partial_inst__ConstructGoal_31);
            }
            {
              mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_16)), check_hlds__delay_partial_inst__CanonVarsMap0_21, &check_hlds__delay_partial_inst__CanonVarsMap_32);
            }
            {
              mercury__map__det_update_4_p_0(check_hlds__delay_partial_inst__TypeInfo_50_50, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Var_15)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVarsMap_32)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_36);
            }
            {
              check_hlds__delay_partial_inst__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_41_41, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConstructGoal_31));
              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__delay_partial_inst__ConjList_33 = mercury__list__f_43_43_2_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_52_52, check_hlds__delay_partial_inst__SubUnifyGoals_26, check_hlds__delay_partial_inst__V_41_41);
            }
          }
        else
          {
            check_hlds__delay_partial_inst__ConjList_33 = check_hlds__delay_partial_inst__SubUnifyGoals_26;
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_36 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35;
          }
        {
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__ConjList_33, check_hlds__delay_partial_inst__GoalInfo0_25, check_hlds__delay_partial_inst__Goal_12);
        }
      }
    else
      {
        *check_hlds__delay_partial_inst__Goal_12 = check_hlds__delay_partial_inst__Goal0_9;
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_36 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_35;
      }
    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_38 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_37;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
  MR_Word check_hlds__delay_partial_inst__Var_6,
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__ConsIdMap1_11;
    MR_Word check_hlds__delay_partial_inst__ConsIdMap_12;
    MR_Word check_hlds__delay_partial_inst__ConsIdMap0_10;
    MR_Box check_hlds__delay_partial_inst__conv0_ConsIdMap0_10;

    {
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), &check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__ConsIdMap0_10 = ((MR_Word) check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    if (check_hlds__delay_partial_inst__succeeded)
      check_hlds__delay_partial_inst__ConsIdMap1_11 = check_hlds__delay_partial_inst__ConsIdMap0_10;
    else
      {
        {
          check_hlds__delay_partial_inst__ConsIdMap1_11 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2]);
        }
      }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_7)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVars_8)), check_hlds__delay_partial_inst__ConsIdMap1_11, &check_hlds__delay_partial_inst__ConsIdMap_12);
    }
    {
      mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), ((MR_Box) (check_hlds__delay_partial_inst__ConsIdMap_12)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
    MR_Word check_hlds__delay_partial_inst__conv2_Goal_12;

    {
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv2_Goal_12);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv2_Goal_12));
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    return check_hlds__delay_partial_inst__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
  MR_Word check_hlds__delay_partial_inst__GoalInfo0_8,
  MR_Word check_hlds__delay_partial_inst__Unify_9,
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_46_46;
    MR_Word check_hlds__delay_partial_inst__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 0)));
    MR_Word check_hlds__delay_partial_inst__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 1)));
    MR_Word check_hlds__delay_partial_inst__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 2)));
    MR_Word check_hlds__delay_partial_inst__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 3)));
    MR_Word check_hlds__delay_partial_inst__CanonVars_22;
    MR_Word check_hlds__delay_partial_inst__ModuleInfo_23;
    MR_Word check_hlds__delay_partial_inst__ProgContext_24;
    MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_25;
    MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30;
    MR_Word check_hlds__delay_partial_inst__V_32_32;
    MR_Word check_hlds__delay_partial_inst__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 4)));
    MR_Word check_hlds__delay_partial_inst__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 5)));
    MR_Word check_hlds__delay_partial_inst__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 6)));
    MR_Word check_hlds__delay_partial_inst__CanonVars0_21;
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_44_44;
    MR_Word check_hlds__delay_partial_inst__TypeInfo_45_45;
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_20;
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20;
    MR_Box check_hlds__delay_partial_inst__conv1_CanonVars0_21;
    MR_Word check_hlds__delay_partial_inst__V_35_35;
    MR_Word check_hlds__delay_partial_inst__V_36_36;
    MR_Word check_hlds__delay_partial_inst__V_37_37;
    MR_Word check_hlds__delay_partial_inst__V_38_38;
    MR_Word check_hlds__delay_partial_inst__V_39_39;
    MR_Word check_hlds__delay_partial_inst__V_40_40;
    MR_Word check_hlds__delay_partial_inst__V_41_41;

    {
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26, ((MR_Box) (check_hlds__delay_partial_inst__Var_13)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20);
    }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__CanonVarsMap0_20 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20);
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
      }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        check_hlds__delay_partial_inst__TypeInfo_45_45 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
        {
          check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_44_44, check_hlds__delay_partial_inst__TypeInfo_45_45, check_hlds__delay_partial_inst__CanonVarsMap0_20, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_14)), &check_hlds__delay_partial_inst__conv1_CanonVars0_21);
        }
        if (check_hlds__delay_partial_inst__succeeded)
          {
            check_hlds__delay_partial_inst__CanonVars0_21 = ((MR_Word) check_hlds__delay_partial_inst__conv1_CanonVars0_21);
            check_hlds__delay_partial_inst__succeeded = MR_TRUE;
          }
      }
    if (check_hlds__delay_partial_inst__succeeded)
      {
        check_hlds__delay_partial_inst__CanonVars_22 = check_hlds__delay_partial_inst__CanonVars0_21;
        check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28;
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26;
      }
    else
      {
        MR_Word check_hlds__delay_partial_inst__TypeInfo_35_83 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
        MR_Word check_hlds__delay_partial_inst__VarSet0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__VarTypes0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__VarSet_60;
        MR_Word check_hlds__delay_partial_inst__VarTypes_61;
        MR_Word check_hlds__delay_partial_inst__Renaming_62;
        MR_Word check_hlds__delay_partial_inst__V_65_65;
        MR_Word check_hlds__delay_partial_inst__V_75_75;
        MR_Word check_hlds__delay_partial_inst__V_78_78;
        MR_Word check_hlds__delay_partial_inst__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
        MR_Word check_hlds__delay_partial_inst__V_76_76;
        MR_Word check_hlds__delay_partial_inst__V_77_77;

        {
          check_hlds__delay_partial_inst__V_65_65 = mercury__map__init_0_f_0(check_hlds__delay_partial_inst__TypeInfo_35_83, check_hlds__delay_partial_inst__TypeInfo_35_83);
        }
        {
          hlds__goal_util__clone_variables_9_p_0(check_hlds__delay_partial_inst__Args_15, check_hlds__delay_partial_inst__VarSet0_58, check_hlds__delay_partial_inst__VarTypes0_59, check_hlds__delay_partial_inst__VarSet0_58, &check_hlds__delay_partial_inst__VarSet_60, check_hlds__delay_partial_inst__VarTypes0_59, &check_hlds__delay_partial_inst__VarTypes_61, check_hlds__delay_partial_inst__V_65_65, &check_hlds__delay_partial_inst__Renaming_62);
        }
        {
          parse_tree__prog_rename__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 0, check_hlds__delay_partial_inst__Renaming_62, check_hlds__delay_partial_inst__Args_15, &check_hlds__delay_partial_inst__CanonVars_22);
        }
        check_hlds__delay_partial_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
        check_hlds__delay_partial_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
        check_hlds__delay_partial_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
        check_hlds__delay_partial_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
        {
          check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_75_75));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet_60));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes_61));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 3) = ((MR_Box) (check_hlds__delay_partial_inst__V_78_78));
        }
        {
          check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(check_hlds__delay_partial_inst__Var_13, check_hlds__delay_partial_inst__ConsId_14, check_hlds__delay_partial_inst__CanonVars_22, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27);
        }
      }
    check_hlds__delay_partial_inst__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
    check_hlds__delay_partial_inst__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
    check_hlds__delay_partial_inst__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
    check_hlds__delay_partial_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
    {
      check_hlds__delay_partial_inst__ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_8);
    }
    check_hlds__delay_partial_inst__TypeInfo_46_46 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
    {
      check_hlds__delay_partial_inst__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 3) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_23));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_24));
    }
    {
      check_hlds__delay_partial_inst__SubUnifyGoals_25 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_46_46, check_hlds__delay_partial_inst__TypeInfo_46_46, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__V_32_32, check_hlds__delay_partial_inst__CanonVars_22, check_hlds__delay_partial_inst__Args_15, check_hlds__delay_partial_inst__ArgModes_16);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__SubUnifyGoals_25, check_hlds__delay_partial_inst__GoalInfo0_8, check_hlds__delay_partial_inst__Goal_10);
    }
    check_hlds__delay_partial_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
    check_hlds__delay_partial_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
    check_hlds__delay_partial_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
    check_hlds__delay_partial_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_38_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__V_39_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_partial_inst__V_40_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
      }
    else
      {
        MR_Word check_hlds__delay_partial_inst__Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__Case_18;
        MR_Word check_hlds__delay_partial_inst__Cases_19;
        MR_Word check_hlds__delay_partial_inst__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 2)));
        MR_Word check_hlds__delay_partial_inst__Goal_25;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31;

        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_24, &check_hlds__delay_partial_inst__Goal_25, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31);
        }
        {
          check_hlds__delay_partial_inst__Case_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MainConsId_22));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 1) = ((MR_Box) (check_hlds__delay_partial_inst__OtherConsIds_23));
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_25));
        }
        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Cases0_17, &check_hlds__delay_partial_inst__Cases_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Case_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_19));
        }
      }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
      }
    else
      {
        MR_Word check_hlds__delay_partial_inst__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__Goal_18;
        MR_Word check_hlds__delay_partial_inst__Goals_19;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27;

        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_16, &check_hlds__delay_partial_inst__Goal_18, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27);
        }
        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goals0_17, &check_hlds__delay_partial_inst__Goals_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_19));
        }
      }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;

    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
      }
    else
      {
        MR_Word check_hlds__delay_partial_inst__HeadGoal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_partial_inst__TailGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_partial_inst__HeadGoal_21;
        MR_Word check_hlds__delay_partial_inst__InstMap1_22;
        MR_Word check_hlds__delay_partial_inst__TailGoals_23;
        MR_Word check_hlds__delay_partial_inst__HeadGoals_24;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29;
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30;

        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__HeadGoal0_16, &check_hlds__delay_partial_inst__HeadGoal_21, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30);
        }
        {
          hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__HeadGoal0_16, check_hlds__delay_partial_inst__InstMap0_1, &check_hlds__delay_partial_inst__InstMap1_22);
        }
        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap1_22, check_hlds__delay_partial_inst__TailGoals0_17, &check_hlds__delay_partial_inst__TailGoals_23, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__delay_partial_inst__HeadGoal_21, &check_hlds__delay_partial_inst__HeadGoals_24);
        }
        {
          *check_hlds__delay_partial_inst__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__HeadGoals_24, check_hlds__delay_partial_inst__TailGoals_23);
        }
      }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
  void * check_hlds__delay_partial_inst__env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
  void * check_hlds__delay_partial_inst__env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

    (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165 = ((MR_Word) (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_165);
    {
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(check_hlds__delay_partial_inst__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
  void * check_hlds__delay_partial_inst__env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

    {
      MR_Word check_hlds__delay_partial_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165, (MR_Integer) 0)));
      MR_Word check_hlds__delay_partial_inst__V_60_60;

      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165, (MR_Integer) 1)));
      check_hlds__delay_partial_inst__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59, (MR_Integer) 0)));
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59, (MR_Integer) 1)));
      {
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_61);
      }
      if ((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
        {
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(check_hlds__delay_partial_inst__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
  void * check_hlds__delay_partial_inst__env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, &(check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_165, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47, check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3, check_hlds__delay_partial_inst__env_ptr);
          }
        }
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s check_hlds__delay_partial_inst__env;

    {
      MR_Word check_hlds__delay_partial_inst__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 0)));
      MR_Word check_hlds__delay_partial_inst__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__delay_partial_inst__NegGoal0_18 = (MR_Word) MR_body(((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13), (MR_Integer) 0);
            MR_Word check_hlds__delay_partial_inst__NegGoal_19;
            MR_Word check_hlds__delay_partial_inst__V_156_156;
            MR_Word check_hlds__delay_partial_inst__V_20_20;

            {
              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__NegGoal0_18, &check_hlds__delay_partial_inst__NegGoal_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, &check_hlds__delay_partial_inst__V_20_20, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
            }
            check_hlds__delay_partial_inst__V_156_156 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__delay_partial_inst__NegGoal_19);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__delay_partial_inst__Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_156_156));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
            }
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__delay_partial_inst__LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)));
            MR_Word check_hlds__delay_partial_inst__RHS0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
            MR_Word check_hlds__delay_partial_inst__Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
            MR_Word check_hlds__delay_partial_inst__Unify_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
            MR_Word check_hlds__delay_partial_inst__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__Unify_42)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__delay_partial_inst__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 1)));
                  MR_Word check_hlds__delay_partial_inst___Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)));
                  MR_Word check_hlds__delay_partial_inst___Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 2)));
                  MR_Word check_hlds__delay_partial_inst__V_48_48;
                  MR_Word check_hlds__delay_partial_inst__V_49_49;
                  MR_Word check_hlds__delay_partial_inst__V_50_50;
                  MR_Word check_hlds__delay_partial_inst__V_183_183;
                  MR_Word check_hlds__delay_partial_inst__V_184_184;
                  MR_Word check_hlds__delay_partial_inst__V_185_185;

                  (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 3)));
                  check_hlds__delay_partial_inst__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 4)));
                  check_hlds__delay_partial_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 5)));
                  check_hlds__delay_partial_inst__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 6)));
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 2))))
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 3))))
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                    {
                      (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 0)));
                      check_hlds__delay_partial_inst__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 1)));
                      check_hlds__delay_partial_inst__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 2)));
                      check_hlds__delay_partial_inst__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 3)));
                      {
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(&check_hlds__delay_partial_inst__env);
                      }
                    }
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                    {
                      check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(check_hlds__delay_partial_inst__GoalInfo0_14, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                    }
                  else
                    {
                      switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_40)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
                            *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word check_hlds__delay_partial_inst__Purity_62 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) & (MR_Integer) 3);
                            MR_Word check_hlds__delay_partial_inst__Groundness_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            MR_Word check_hlds__delay_partial_inst__PredOrFunc_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            MR_Word check_hlds__delay_partial_inst__NonLocals_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 2)));
                            MR_Word check_hlds__delay_partial_inst__LambdaQuantVars_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 3)));
                            MR_Word check_hlds__delay_partial_inst__Modues_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 4)));
                            MR_Word check_hlds__delay_partial_inst__Detism_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 5)));
                            MR_Word check_hlds__delay_partial_inst__LambdaGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 6)));
                            MR_Word check_hlds__delay_partial_inst__LambdaGoal_71;
                            MR_Word check_hlds__delay_partial_inst__RHS_73;
                            MR_Word check_hlds__delay_partial_inst__GoalExpr_74;
                            MR_Word check_hlds__delay_partial_inst__V_141_141;
                            MR_Word check_hlds__delay_partial_inst___ConstructMap_72;

                            {
                              check_hlds__delay_partial_inst__V_141_141 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
                            }
                            {
                              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__LambdaGoal0_70, &check_hlds__delay_partial_inst__LambdaGoal_71, check_hlds__delay_partial_inst__V_141_141, &check_hlds__delay_partial_inst___ConstructMap_72, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                            }
                            {
                              check_hlds__delay_partial_inst__RHS_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 0) = ((MR_Box) ((check_hlds__delay_partial_inst__Purity_62 | ((((check_hlds__delay_partial_inst__Groundness_63 << (MR_Integer) 2)) | ((check_hlds__delay_partial_inst__PredOrFunc_64 << (MR_Integer) 3)))))));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 1) = (MR_Integer) 0;
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 2) = ((MR_Box) (check_hlds__delay_partial_inst__NonLocals_66));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 3) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaQuantVars_67));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Modues_68));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 5) = ((MR_Box) (check_hlds__delay_partial_inst__Detism_69));
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_73, 6) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaGoal_71));
                            }
                            {
                              check_hlds__delay_partial_inst__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_74, 0) = ((MR_Box) (check_hlds__delay_partial_inst__LHS_39));
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_74, 1) = ((MR_Box) (check_hlds__delay_partial_inst__RHS_73));
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_74, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Mode_41));
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_74, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Unify_42));
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_74, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Context_43));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              *check_hlds__delay_partial_inst__Goal_10 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_74));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                            }
                          }
                          break;
                      }
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(check_hlds__delay_partial_inst__Goal0_9, check_hlds__delay_partial_inst__Mode_41, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                }
                break;
              case (MR_Integer) 2:
                {
                  *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
                  *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
                  *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(check_hlds__delay_partial_inst__Goal0_9, check_hlds__delay_partial_inst__LHS_39, check_hlds__delay_partial_inst__RHS0_40, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
            *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
                *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
                *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__delay_partial_inst__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
                MR_Word check_hlds__delay_partial_inst__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
                MR_Word check_hlds__delay_partial_inst__Goals_17;
                MR_Word check_hlds__delay_partial_inst__V_162_162;

                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_16, &check_hlds__delay_partial_inst__Goals_17, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                }
                {
                  check_hlds__delay_partial_inst__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_162_162, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ConjType_15));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_162_162, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_17));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__delay_partial_inst__Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_162_162));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word check_hlds__delay_partial_inst__V_159_159;
                MR_Word check_hlds__delay_partial_inst__Goals0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
                MR_Word check_hlds__delay_partial_inst__Goals_164;

                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_163, &check_hlds__delay_partial_inst__Goals_164, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                }
                {
                  check_hlds__delay_partial_inst__V_159_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_159_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_159_159, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_164));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__delay_partial_inst__Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_159_159));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word check_hlds__delay_partial_inst__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
                MR_Word check_hlds__delay_partial_inst__CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
                MR_Word check_hlds__delay_partial_inst__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
                MR_Word check_hlds__delay_partial_inst__Cases_24;
                MR_Word check_hlds__delay_partial_inst__V_154_154;

                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cases0_23, &check_hlds__delay_partial_inst__Cases_24, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                }
                {
                  check_hlds__delay_partial_inst__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_154_154, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Var_21));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_154_154, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanFail_22));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_154_154, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_24));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__delay_partial_inst__Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_154_154));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word check_hlds__delay_partial_inst__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
                MR_Word check_hlds__delay_partial_inst__SubGoal0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
                MR_Word check_hlds__delay_partial_inst__FGT_36;
                MR_Word check_hlds__delay_partial_inst__V_35_35;

                (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__delay_partial_inst__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                  {
                    check_hlds__delay_partial_inst__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 1)));
                    check_hlds__delay_partial_inst__FGT_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 2)));
                    switch (check_hlds__delay_partial_inst__FGT_36) {
                      default:
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                  }
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                  {
                    *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126;
                  }
                else
                  {
                    MR_Word check_hlds__delay_partial_inst__SubGoal_37;
                    MR_Word check_hlds__delay_partial_inst__V_144_144;
                    MR_Word check_hlds__delay_partial_inst__V_38_38;

                    {
                      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_34, &check_hlds__delay_partial_inst__SubGoal_37, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, &check_hlds__delay_partial_inst__V_38_38, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                    }
                    {
                      check_hlds__delay_partial_inst__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_144_144, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Reason_33));
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_144_144, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_37));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__delay_partial_inst__Goal_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_144_144));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                    }
                  }
                *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word check_hlds__delay_partial_inst__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
                MR_Word check_hlds__delay_partial_inst__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
                MR_Word check_hlds__delay_partial_inst__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
                MR_Word check_hlds__delay_partial_inst__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));
                MR_Word check_hlds__delay_partial_inst__InstMapThen_29;
                MR_Word check_hlds__delay_partial_inst__Cond_30;
                MR_Word check_hlds__delay_partial_inst__Then_31;
                MR_Word check_hlds__delay_partial_inst__Else_32;
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_145_145;
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_146_146;
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_147_147;
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_148_148;
                MR_Word check_hlds__delay_partial_inst__V_151_151;

                {
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__Cond0_26, check_hlds__delay_partial_inst__InstMap0_8, &check_hlds__delay_partial_inst__InstMapThen_29);
                }
                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cond0_26, &check_hlds__delay_partial_inst__Cond_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_145_145, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_146_146);
                }
                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMapThen_29, check_hlds__delay_partial_inst__Then0_27, &check_hlds__delay_partial_inst__Then_31, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_145_145, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_147_147, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_146_146, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_148_148);
                }
                {
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Else0_28, &check_hlds__delay_partial_inst__Else_32, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_147_147, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_148_148, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                }
                {
                  check_hlds__delay_partial_inst__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_151_151, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Vars_25));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_151_151, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Cond_30));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_151_151, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Then_31));
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_151_151, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Else_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__delay_partial_inst__Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_151_151));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word check_hlds__delay_partial_inst__ShortHand0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__ShortHand0_107)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.delay_partial_inst_in_goal\'/7", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__delay_partial_inst__GoalType_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 0)));
                      MR_Word check_hlds__delay_partial_inst__Outer_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 1)));
                      MR_Word check_hlds__delay_partial_inst__Inner_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 2)));
                      MR_Word check_hlds__delay_partial_inst__MaybeOutputVars_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 3)));
                      MR_Word check_hlds__delay_partial_inst__MainGoal0_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 4)));
                      MR_Word check_hlds__delay_partial_inst__OrElseGoals0_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 5)));
                      MR_Word check_hlds__delay_partial_inst__OrElseInners_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 6)));
                      MR_Word check_hlds__delay_partial_inst__MainGoal_115;
                      MR_Word check_hlds__delay_partial_inst__OrElseGoals_117;
                      MR_Word check_hlds__delay_partial_inst__ShortHand_119;
                      MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_133_133;
                      MR_Word check_hlds__delay_partial_inst__GoalExpr_172;
                      MR_Word check_hlds__delay_partial_inst__V_116_116;
                      MR_Word check_hlds__delay_partial_inst__V_118_118;

                      {
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__MainGoal0_112, &check_hlds__delay_partial_inst__MainGoal_115, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, &check_hlds__delay_partial_inst__V_116_116, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_133_133);
                      }
                      {
                        check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__OrElseGoals0_113, &check_hlds__delay_partial_inst__OrElseGoals_117, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, &check_hlds__delay_partial_inst__V_118_118, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_133_133, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                      }
                      {
                        check_hlds__delay_partial_inst__ShortHand_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalType_108));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Outer_109));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Inner_110));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 3) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeOutputVars_111));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 4) = ((MR_Box) (check_hlds__delay_partial_inst__MainGoal_115));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 5) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseGoals_117));
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_119, 6) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseInners_114));
                      }
                      {
                        check_hlds__delay_partial_inst__GoalExpr_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_172, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_119));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *check_hlds__delay_partial_inst__Goal_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_172));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
                      }
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__delay_partial_inst__MaybeIO_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 0)));
                      MR_Word check_hlds__delay_partial_inst__ResultVar_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 1)));
                      MR_Word check_hlds__delay_partial_inst__SubGoal0_173 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_107, (MR_Integer) 2)));
                      MR_Word check_hlds__delay_partial_inst__SubGoal_174;
                      MR_Word check_hlds__delay_partial_inst__GoalExpr_175;
                      MR_Word check_hlds__delay_partial_inst__ShortHand_176;

                      {
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_173, &check_hlds__delay_partial_inst__SubGoal_174, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_124, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_125, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_127);
                      }
                      {
                        check_hlds__delay_partial_inst__ShortHand_176 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_176, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeIO_120));
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_176, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ResultVar_121));
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_176, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_174));
                      }
                      {
                        check_hlds__delay_partial_inst__GoalExpr_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_175, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_176));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *check_hlds__delay_partial_inst__Goal_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_175));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
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
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
  MR_Word check_hlds__delay_partial_inst__PredId_8,
  MR_Word check_hlds__delay_partial_inst__ProcTable_9,
  MR_Integer check_hlds__delay_partial_inst__ProcId_10,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__VarSet0_14;
    MR_Word check_hlds__delay_partial_inst__VarTypes0_15;
    MR_Word check_hlds__delay_partial_inst__InstMap0_16;
    MR_Word check_hlds__delay_partial_inst__Goal0_17;
    MR_Word check_hlds__delay_partial_inst__DelayInfo0_19;
    MR_Word check_hlds__delay_partial_inst__Goal_20;
    MR_Word check_hlds__delay_partial_inst__DelayInfo_22;
    MR_Word check_hlds__delay_partial_inst__VarSet_24;
    MR_Word check_hlds__delay_partial_inst__VarTypes_25;
    MR_Word check_hlds__delay_partial_inst__Changed_26;
    MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32;
    MR_Word check_hlds__delay_partial_inst__V_33_33;
    MR_Box check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32;
    MR_Word check_hlds__delay_partial_inst___ConstructMap_21;
    MR_Word check_hlds__delay_partial_inst__V_23_23;

    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying partial instantiations in ", check_hlds__delay_partial_inst__PredId_8, check_hlds__delay_partial_inst__ProcId_10, check_hlds__delay_partial_inst__ModuleInfo_7);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__delay_partial_inst__ProcTable_9, check_hlds__delay_partial_inst__ProcId_10, &check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32);
    }
    check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32 = ((MR_Word) check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32);
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__VarSet0_14);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__VarTypes0_15);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, check_hlds__delay_partial_inst__ModuleInfo_7, &check_hlds__delay_partial_inst__InstMap0_16);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__Goal0_17);
    }
    {
      check_hlds__delay_partial_inst__DelayInfo0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet0_14));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes0_15));
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__delay_partial_inst__V_33_33 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
    }
    {
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_16, check_hlds__delay_partial_inst__Goal0_17, &check_hlds__delay_partial_inst__Goal_20, check_hlds__delay_partial_inst__V_33_33, &check_hlds__delay_partial_inst___ConstructMap_21, check_hlds__delay_partial_inst__DelayInfo0_19, &check_hlds__delay_partial_inst__DelayInfo_22);
    }
    check_hlds__delay_partial_inst__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 0)));
    check_hlds__delay_partial_inst__VarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 1)));
    check_hlds__delay_partial_inst__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 2)));
    check_hlds__delay_partial_inst__Changed_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 3)));
    switch (check_hlds__delay_partial_inst__Changed_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28 = check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34;
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35;
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36;
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38;
          MR_Word check_hlds__delay_partial_inst__V_40_40;

          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__delay_partial_inst__Goal_20, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34);
          }
          {
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__delay_partial_inst__VarSet_24, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35);
          }
          {
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__delay_partial_inst__VarTypes_25, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36);
          }
          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38);
          }
          {
            check_hlds__delay_partial_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_40_40, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ProcId_10));
            MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_40_40, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_40_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
  MR_Box check_hlds__delay_partial_inst__closure_arg,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3)
{
  {
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
    MR_Word check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28;

    {
      check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), &check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28);
    }
    *check_hlds__delay_partial_inst__wrapper_arg_3 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28));
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_partial_inst__succeeded;

        if ((check_hlds__delay_partial_inst__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4;
            *check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2;
          }
        else
          {
            MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_37_37;
            MR_Word check_hlds__delay_partial_inst__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_partial_inst__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__delay_partial_inst__PredInfo0_16;
            MR_Word check_hlds__delay_partial_inst__ProcTable0_17;
            MR_Word check_hlds__delay_partial_inst__ProcIds_18;
            MR_Word check_hlds__delay_partial_inst__ChangedProcs_19;
            MR_Word check_hlds__delay_partial_inst__V_28_28;
            MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30;
            MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31;
            MR_Box check_hlds__delay_partial_inst__conv1_ChangedProcs_19;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4, check_hlds__delay_partial_inst__PredId_12, &check_hlds__delay_partial_inst__PredInfo0_16);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__delay_partial_inst__PredInfo0_16, &check_hlds__delay_partial_inst__ProcTable0_17);
            }
            {
              check_hlds__delay_partial_inst__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__delay_partial_inst__PredInfo0_16);
            }
            {
              check_hlds__delay_partial_inst__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 3) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4));
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 4) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_12));
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 5) = ((MR_Box) (check_hlds__delay_partial_inst__ProcTable0_17));
            }
            check_hlds__delay_partial_inst__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__list__foldl_4_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_37_37, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__V_28_28, check_hlds__delay_partial_inst__ProcIds_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__delay_partial_inst__conv1_ChangedProcs_19);
            }
            check_hlds__delay_partial_inst__ChangedProcs_19 = ((MR_Word) check_hlds__delay_partial_inst__conv1_ChangedProcs_19);
            if ((check_hlds__delay_partial_inst__ChangedProcs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2;
                check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4;
              }
            else
              {
                MR_Word check_hlds__delay_partial_inst__ProcTable_22;
                MR_Word check_hlds__delay_partial_inst__PredInfo_23;

                {
                  mercury__map__set_from_assoc_list_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_37_37, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__delay_partial_inst__ChangedProcs_19, check_hlds__delay_partial_inst__ProcTable0_17, &check_hlds__delay_partial_inst__ProcTable_22);
                }
                {
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__delay_partial_inst__ProcTable_22, check_hlds__delay_partial_inst__PredInfo0_16, &check_hlds__delay_partial_inst__PredInfo_23);
                }
                {
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__delay_partial_inst__PredId_12, check_hlds__delay_partial_inst__PredInfo_23, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30);
                }
                {
                  check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31, 0) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_12));
                  MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1 = check_hlds__delay_partial_inst__PredIds_13;
              MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0__tmp_copy_2 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31;
              MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30;

              check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
              check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0__tmp_copy_2;
              check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(
  MR_Word check_hlds__delay_partial_inst__PredIds_5,
  MR_Word * check_hlds__delay_partial_inst__ChangedPredIds_6,
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool check_hlds__delay_partial_inst__succeeded;
    MR_Word check_hlds__delay_partial_inst__RevChangedPredIds_8;

    {
      check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(check_hlds__delay_partial_inst__PredIds_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__RevChangedPredIds_8, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_9, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_10);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__delay_partial_inst__RevChangedPredIds_8, check_hlds__delay_partial_inst__ChangedPredIds_6);
    }
  }
}

void mercury__check_hlds__delay_partial_inst__init(void)
{
}

void mercury__check_hlds__delay_partial_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0);
	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0);
	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0);
}

void mercury__check_hlds__delay_partial_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.delay_partial_inst. */
