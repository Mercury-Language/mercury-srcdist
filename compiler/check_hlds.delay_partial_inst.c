/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version rotd-2018-04-05
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


// :- module check_hlds.delay_partial_inst.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Context_8,
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word UnifyMode_11,
  MR_Word * Goal_12);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word ProcTable_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ChangedProcs_0_27,
  MR_Word * STATE_VARIABLE_ChangedProcs_28);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_124,
  MR_Word * STATE_VARIABLE_ConstructMap_125,
  MR_Word STATE_VARIABLE_DelayInfo_0_126,
  MR_Word * STATE_VARIABLE_DelayInfo_127);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
  MR_Word Goal0_10,
  MR_Word LHS_11,
  MR_Word RHS0_12,
  MR_Word Unify_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ConstructMap_0_28,
  MR_Word * STATE_VARIABLE_ConstructMap_29,
  MR_Word STATE_VARIABLE_DelayInfo_0_30,
  MR_Word * STATE_VARIABLE_DelayInfo_31);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
  MR_Word Goal0_9,
  MR_Word UnifyMode_10,
  MR_Word Unify_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_ConstructMap_0_35,
  MR_Word * STATE_VARIABLE_ConstructMap_36,
  MR_Word STATE_VARIABLE_DelayInfo_0_37,
  MR_Word * STATE_VARIABLE_DelayInfo_38);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
  MR_Word GoalInfo0_8,
  MR_Word Unify_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_26,
  MR_Word * STATE_VARIABLE_ConstructMap_27,
  MR_Word STATE_VARIABLE_DelayInfo_0_28,
  MR_Word * STATE_VARIABLE_DelayInfo_29);

static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word CanonVars_8,
  MR_Word STATE_VARIABLE_ConstructMap_0_13,
  MR_Word * STATE_VARIABLE_ConstructMap_14);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChangedPredIds_0_2,
  MR_Word * STATE_VARIABLE_RevChangedPredIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[3][3];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[4][2];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1];




static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      hlds__hlds_module____Compare____module_info_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3], &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Integer Var_21 = (MR_Integer) ArgX4_10;
            MR_Integer Var_22 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeCtorInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_15_15 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Context_8,
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word UnifyMode_11,
  MR_Word * Goal_12)
{
  {
    MR_bool succeeded;
    MR_Word RHSFromToInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_11, (MR_Integer) 1)));
    MR_Word RHSInitInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHSFromToInsts_14, (MR_Integer) 0)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_11, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHSFromToInsts_14, (MR_Integer) 1)));

    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_7, RHSInitInst_15);
    if (succeeded)
    {
      Var_20 = (MR_String) "delay_partial_inst";
      Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (RHSVar_10));
      }
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(LHSVar_9, Var_17, Context_8, Var_18, Var_19, Goal_12);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word ProcTable_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ChangedProcs_0_27,
  MR_Word * STATE_VARIABLE_ChangedProcs_28)
{
  {
    MR_Word VarSet0_14;
    MR_Word VarTypes0_15;
    MR_Word InstMap0_16;
    MR_Word Goal0_17;
    MR_Word DelayInfo0_19;
    MR_Word Goal_20;
    MR_Word DelayInfo_22;
    MR_Word VarSet_24;
    MR_Word VarTypes_25;
    MR_Word Changed_26;
    MR_Word STATE_VARIABLE_ProcInfo_32_32;
    MR_Word Var_33;
    MR_Box conv0_STATE_VARIABLE_ProcInfo_32_32;
    MR_Word _ConstructMap_21;
    MR_Word Var_23;

    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying partial instantiations in ", PredId_8, ProcId_10, ModuleInfo_7);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_9, ((MR_Box) (ProcId_10)), &conv0_STATE_VARIABLE_ProcInfo_32_32);
    STATE_VARIABLE_ProcInfo_32_32 = ((MR_Word) conv0_STATE_VARIABLE_ProcInfo_32_32);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_32_32, &VarSet0_14);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_32_32, &VarTypes0_15);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_32_32, ModuleInfo_7, &InstMap0_16);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_32_32, &Goal0_17);
    {
      DelayInfo0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DelayInfo0_19, 0) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), DelayInfo0_19, 1) = ((MR_Box) (VarSet0_14));
      MR_hl_field(MR_mktag(0), DelayInfo0_19, 2) = ((MR_Box) (VarTypes0_15));
      MR_hl_field(MR_mktag(0), DelayInfo0_19, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_33 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_16, Goal0_17, &Goal_20, Var_33, &_ConstructMap_21, DelayInfo0_19, &DelayInfo_22);
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayInfo_22, (MR_Integer) 0)));
    VarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayInfo_22, (MR_Integer) 1)));
    VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayInfo_22, (MR_Integer) 2)));
    Changed_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayInfo_22, (MR_Integer) 3)));
    switch (Changed_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ChangedProcs_28 = STATE_VARIABLE_ChangedProcs_0_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ProcInfo_34_34;
          MR_Word STATE_VARIABLE_ProcInfo_35_35;
          MR_Word STATE_VARIABLE_ProcInfo_36_36;
          MR_Word STATE_VARIABLE_ProcInfo_38_38;
          MR_Word Var_40;

          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_20, STATE_VARIABLE_ProcInfo_32_32, &STATE_VARIABLE_ProcInfo_34_34);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_24, STATE_VARIABLE_ProcInfo_34_34, &STATE_VARIABLE_ProcInfo_35_35);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_25, STATE_VARIABLE_ProcInfo_35_35, &STATE_VARIABLE_ProcInfo_36_36);
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_38_38);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ProcId_10));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_38_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ChangedProcs_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ChangedProcs_0_27));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 0)));
    MR_Word OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 1)));
    MR_Word Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 2)));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_ConstructMap_30_30;
    MR_Word STATE_VARIABLE_DelayInfo_31_31;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, Goal0_24, &Goal_25, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_30_30, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_18, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(InstMap0_1, Cases0_17, &Cases_19, STATE_VARIABLE_ConstructMap_30_30, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_31_31, STATE_VARIABLE_DelayInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_ConstructMap_26_26;
    MR_Word STATE_VARIABLE_DelayInfo_27_27;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, Goal0_16, &Goal_18, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_26_26, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_27_27);
    check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_1, Goals0_17, &Goals_19, STATE_VARIABLE_ConstructMap_26_26, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_27_27, STATE_VARIABLE_DelayInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ConstructMap_0_4,
  MR_Word * STATE_VARIABLE_ConstructMap_5,
  MR_Word STATE_VARIABLE_DelayInfo_0_6,
  MR_Word * STATE_VARIABLE_DelayInfo_7)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word HeadGoal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word TailGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word HeadGoal_21;
    MR_Word InstMap1_22;
    MR_Word TailGoals_23;
    MR_Word HeadGoals_24;
    MR_Word STATE_VARIABLE_ConstructMap_29_29;
    MR_Word STATE_VARIABLE_DelayInfo_30_30;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, HeadGoal0_16, &HeadGoal_21, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_29_29, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_30_30);
    hlds__goal_util__update_instmap_3_p_0(HeadGoal0_16, InstMap0_1, &InstMap1_22);
    check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(InstMap1_22, TailGoals0_17, &TailGoals_23, STATE_VARIABLE_ConstructMap_29_29, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_30_30, STATE_VARIABLE_DelayInfo_7);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(HeadGoal_21, &HeadGoals_24);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, HeadGoals_24, TailGoals_23);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165 = ((MR_Word) (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_165);
    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165, (MR_Integer) 0)));
      MR_Word Var_60;

      (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_165, (MR_Integer) 1)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59, (MR_Integer) 0)));
      (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFromToInsts_59, (MR_Integer) 1)));
      (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55, (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_61);
      if ((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, &(env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_165, (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47, check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_124,
  MR_Word * STATE_VARIABLE_ConstructMap_125,
  MR_Word STATE_VARIABLE_DelayInfo_0_126,
  MR_Word * STATE_VARIABLE_DelayInfo_127)
{
  {
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s env;

    {
      MR_Word GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
      MR_Word GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NegGoal0_18 = (MR_Word) MR_body(((MR_Word) GoalExpr0_13), (MR_Integer) 0);
            MR_Word NegGoal_19;
            MR_Word Var_156;
            MR_Word Var_20;

            check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, NegGoal0_18, &NegGoal_19, STATE_VARIABLE_ConstructMap_0_124, &Var_20, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
            Var_156 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) NegGoal_19);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_156));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
            *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 0)));
            MR_Word RHS0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 1)));
            MR_Word Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 2)));
            MR_Word Unify_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 3)));
            MR_Word Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) Unify_42)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 1)));
                  MR_Word _Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 0)));
                  MR_Word _Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 2)));
                  MR_Word Var_48;
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_Word Var_183;
                  MR_Word Var_184;
                  MR_Word Var_185;

                  (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 3)));
                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 4)));
                  Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 5)));
                  Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_42, (MR_Integer) 6)));
                  if (((((MR_tag((MR_Word) ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 2))))
                    (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 3))))
                    (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
                  if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                  {
                    (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 0)));
                    Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 1)));
                    Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 2)));
                    Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_126, (MR_Integer) 3)));
                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(&env);
                  }
                  if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                    check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(GoalInfo0_14, Unify_42, Goal_10, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                  else
                  {
                    switch (MR_tag((MR_Word) RHS0_40)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          *Goal_10 = Goal0_9;
                          *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Purity_62 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 0)))) & (MR_Integer) 3);
                          MR_Word Groundness_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          MR_Word PredOrFunc_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          MR_Word NonLocals_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 2)));
                          MR_Word LambdaQuantVars_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 3)));
                          MR_Word Modues_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 4)));
                          MR_Word Detism_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 5)));
                          MR_Word LambdaGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 6)));
                          MR_Word LambdaGoal_71;
                          MR_Word RHS_73;
                          MR_Word GoalExpr_74;
                          MR_Word Var_141;
                          MR_Word _ConstructMap_72;

                          Var_141 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
                          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, LambdaGoal0_70, &LambdaGoal_71, Var_141, &_ConstructMap_72, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                          {
                            RHS_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), RHS_73, 0) = ((MR_Box) ((Purity_62 | ((((Groundness_63 << (MR_Integer) 2)) | ((PredOrFunc_64 << (MR_Integer) 3)))))));
                            MR_hl_field(MR_mktag(2), RHS_73, 1) = NULL;
                            MR_hl_field(MR_mktag(2), RHS_73, 2) = ((MR_Box) (NonLocals_66));
                            MR_hl_field(MR_mktag(2), RHS_73, 3) = ((MR_Box) (LambdaQuantVars_67));
                            MR_hl_field(MR_mktag(2), RHS_73, 4) = ((MR_Box) (Modues_68));
                            MR_hl_field(MR_mktag(2), RHS_73, 5) = ((MR_Box) (Detism_69));
                            MR_hl_field(MR_mktag(2), RHS_73, 6) = ((MR_Box) (LambdaGoal_71));
                          }
                          {
                            GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), GoalExpr_74, 0) = ((MR_Box) (LHS_39));
                            MR_hl_field(MR_mktag(1), GoalExpr_74, 1) = ((MR_Box) (RHS_73));
                            MR_hl_field(MR_mktag(1), GoalExpr_74, 2) = ((MR_Box) (Mode_41));
                            MR_hl_field(MR_mktag(1), GoalExpr_74, 3) = ((MR_Box) (Unify_42));
                            MR_hl_field(MR_mktag(1), GoalExpr_74, 4) = ((MR_Box) (Context_43));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *Goal_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                          }
                        }
                        break;
                    }
                    *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
                  }
                }
                break;
              case (MR_Integer) 1:
                check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(Goal0_9, Mode_41, Unify_42, Goal_10, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                break;
              case (MR_Integer) 2:
                {
                  *Goal_10 = Goal0_9;
                  *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
                  *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unify_42, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *Goal_10 = Goal0_9;
                      *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
                      *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
                    }
                    break;
                  case (MR_Integer) 1:
                    check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(Goal0_9, LHS_39, RHS0_40, Unify_42, Goal_10, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Goal_10 = Goal0_9;
            *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
            *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
                *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));
                MR_Word Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2)));
                MR_Word Goals_17;
                MR_Word Var_162;

                check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(InstMap0_8, Goals0_16, &Goals_17, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                {
                  Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (ConjType_15));
                  MR_hl_field(MR_mktag(3), Var_162, 2) = ((MR_Box) (Goals_17));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_162));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_159;
                MR_Word Goals0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));
                MR_Word Goals_164;

                check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_8, Goals0_163, &Goals_164, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (Goals_164));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_159));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));
                MR_Word CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2)));
                MR_Word Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3)));
                MR_Word Cases_24;
                MR_Word Var_154;

                check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(InstMap0_8, Cases0_23, &Cases_24, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                {
                  Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (Var_21));
                  MR_hl_field(MR_mktag(3), Var_154, 2) = ((MR_Box) (CanFail_22));
                  MR_hl_field(MR_mktag(3), Var_154, 3) = ((MR_Box) (Cases_24));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));
                MR_Word SubGoal0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2)));
                MR_Word FGT_36;
                MR_Word Var_35;

                (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                {
                  Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_33, (MR_Integer) 1)));
                  FGT_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_33, (MR_Integer) 2)));
                  switch (FGT_36) {
                    default:
                      (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                  }
                }
                if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                {
                  *Goal_10 = Goal0_9;
                  *STATE_VARIABLE_DelayInfo_127 = STATE_VARIABLE_DelayInfo_0_126;
                }
                else
                {
                  MR_Word SubGoal_37;
                  MR_Word Var_144;
                  MR_Word Var_38;

                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, SubGoal0_34, &SubGoal_37, STATE_VARIABLE_ConstructMap_0_124, &Var_38, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                  {
                    Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Reason_33));
                    MR_hl_field(MR_mktag(3), Var_144, 2) = ((MR_Box) (SubGoal_37));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                  }
                }
                *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));
                MR_Word Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2)));
                MR_Word Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3)));
                MR_Word Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4)));
                MR_Word InstMapThen_29;
                MR_Word Cond_30;
                MR_Word Then_31;
                MR_Word Else_32;
                MR_Word STATE_VARIABLE_ConstructMap_145_145;
                MR_Word STATE_VARIABLE_DelayInfo_146_146;
                MR_Word STATE_VARIABLE_ConstructMap_147_147;
                MR_Word STATE_VARIABLE_DelayInfo_148_148;
                MR_Word Var_151;

                hlds__goal_util__update_instmap_3_p_0(Cond0_26, InstMap0_8, &InstMapThen_29);
                check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, Cond0_26, &Cond_30, STATE_VARIABLE_ConstructMap_0_124, &STATE_VARIABLE_ConstructMap_145_145, STATE_VARIABLE_DelayInfo_0_126, &STATE_VARIABLE_DelayInfo_146_146);
                check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMapThen_29, Then0_27, &Then_31, STATE_VARIABLE_ConstructMap_145_145, &STATE_VARIABLE_ConstructMap_147_147, STATE_VARIABLE_DelayInfo_146_146, &STATE_VARIABLE_DelayInfo_148_148);
                check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, Else0_28, &Else_32, STATE_VARIABLE_ConstructMap_147_147, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_148_148, STATE_VARIABLE_DelayInfo_127);
                {
                  Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (Vars_25));
                  MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (Cond_30));
                  MR_hl_field(MR_mktag(3), Var_151, 3) = ((MR_Box) (Then_31));
                  MR_hl_field(MR_mktag(3), Var_151, 4) = ((MR_Box) (Else_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand0_107)) {
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
                      MR_Word GoalType_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 0)));
                      MR_Word Outer_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 1)));
                      MR_Word Inner_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 2)));
                      MR_Word MaybeOutputVars_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 3)));
                      MR_Word MainGoal0_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 4)));
                      MR_Word OrElseGoals0_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 5)));
                      MR_Word OrElseInners_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_107, (MR_Integer) 6)));
                      MR_Word MainGoal_115;
                      MR_Word OrElseGoals_117;
                      MR_Word ShortHand_119;
                      MR_Word STATE_VARIABLE_DelayInfo_133_133;
                      MR_Word GoalExpr_172;
                      MR_Word Var_116;
                      MR_Word Var_118;

                      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, MainGoal0_112, &MainGoal_115, STATE_VARIABLE_ConstructMap_0_124, &Var_116, STATE_VARIABLE_DelayInfo_0_126, &STATE_VARIABLE_DelayInfo_133_133);
                      check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_8, OrElseGoals0_113, &OrElseGoals_117, STATE_VARIABLE_ConstructMap_0_124, &Var_118, STATE_VARIABLE_DelayInfo_133_133, STATE_VARIABLE_DelayInfo_127);
                      {
                        ShortHand_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 0) = ((MR_Box) (GoalType_108));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 1) = ((MR_Box) (Outer_109));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 2) = ((MR_Box) (Inner_110));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 3) = ((MR_Box) (MaybeOutputVars_111));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 4) = ((MR_Box) (MainGoal_115));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 5) = ((MR_Box) (OrElseGoals_117));
                        MR_hl_field(MR_mktag(1), ShortHand_119, 6) = ((MR_Box) (OrElseInners_114));
                      }
                      {
                        GoalExpr_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), GoalExpr_172, 1) = ((MR_Box) (ShortHand_119));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_172));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                      }
                      *STATE_VARIABLE_ConstructMap_125 = STATE_VARIABLE_ConstructMap_0_124;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word MaybeIO_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_107, (MR_Integer) 0)));
                      MR_Word ResultVar_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_107, (MR_Integer) 1)));
                      MR_Word SubGoal0_173 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_107, (MR_Integer) 2)));
                      MR_Word SubGoal_174;
                      MR_Word GoalExpr_175;
                      MR_Word ShortHand_176;

                      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, SubGoal0_173, &SubGoal_174, STATE_VARIABLE_ConstructMap_0_124, STATE_VARIABLE_ConstructMap_125, STATE_VARIABLE_DelayInfo_0_126, STATE_VARIABLE_DelayInfo_127);
                      {
                        ShortHand_176 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ShortHand_176, 0) = ((MR_Box) (MaybeIO_120));
                        MR_hl_field(MR_mktag(2), ShortHand_176, 1) = ((MR_Box) (ResultVar_121));
                        MR_hl_field(MR_mktag(2), ShortHand_176, 2) = ((MR_Box) (SubGoal_174));
                      }
                      {
                        GoalExpr_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), GoalExpr_175, 1) = ((MR_Box) (ShortHand_176));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_175));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
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
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
  MR_Word Goal0_10,
  MR_Word LHS_11,
  MR_Word RHS0_12,
  MR_Word Unify_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ConstructMap_0_28,
  MR_Word * STATE_VARIABLE_ConstructMap_29,
  MR_Word STATE_VARIABLE_DelayInfo_0_30,
  MR_Word * STATE_VARIABLE_DelayInfo_31)
{
  {
    MR_bool succeeded;
    MR_Word CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unify_13, (MR_Integer) 2)));
    MR_Word _Mode_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unify_13, (MR_Integer) 1)));
    MR_Word _TypeInfos_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unify_13, (MR_Integer) 3)));
    MR_Word RHSVar_20;
    MR_Word ConsId_21;
    MR_Word CanonArgs_22;
    MR_Word TypeInfo_20_54;
    MR_Word TypeInfo_21_55;
    MR_Word TypeCtorInfo_22_56;
    MR_Word TypeInfo_23_57;
    MR_Word CanonVarsMap_43;
    MR_Word List_44;
    MR_Word Rest_45;
    MR_Word Var_58;
    MR_Box conv0_CanonVarsMap_43;

    succeeded = (CanFail_18 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) RHS0_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        RHSVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS0_12, (MR_Integer) 0)));
        TypeInfo_20_54 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
        TypeInfo_21_55 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
        succeeded = mercury__map__search_3_p_0(TypeInfo_20_54, TypeInfo_21_55, STATE_VARIABLE_ConstructMap_0_28, ((MR_Box) (LHS_11)), &conv0_CanonVarsMap_43);
        if (succeeded)
        {
          CanonVarsMap_43 = ((MR_Word) conv0_CanonVarsMap_43);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_22_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
          TypeInfo_23_57 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
          List_44 = mercury__map__to_assoc_list_1_f_0(TypeCtorInfo_22_56, TypeInfo_23_57, CanonVarsMap_43);
          succeeded = ((MR_tag((MR_Word) List_44)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_44, (MR_Integer) 0)));
            Rest_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_44, (MR_Integer) 1)));
            ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0)));
            CanonArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1)));
            if (!((Rest_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.get_sole_cons_id_and_canon_vars\'/4", (MR_String) "delaying partial instantiations when variable could be bound to multiple functors");
                return;
              }
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1)));
      MR_Word ProgContext_25;
      MR_Word TestGoal_26;
      MR_Word AssignGoal_27;
      MR_Word Var_32;
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0)));

      ProgContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_24);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ConsId_21));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_32, 2) = ((MR_Box) (CanonArgs_22));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(RHSVar_20, Var_32, ProgContext_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &TestGoal_26);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(LHS_11, RHS0_12, ProgContext_25, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &AssignGoal_27);
      hlds__hlds_goal__conjoin_goals_3_p_0(TestGoal_26, AssignGoal_27, Goal_14);
    }
    else
      *Goal_14 = Goal0_10;
    *STATE_VARIABLE_DelayInfo_31 = STATE_VARIABLE_DelayInfo_0_30;
    *STATE_VARIABLE_ConstructMap_29 = STATE_VARIABLE_ConstructMap_0_28;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_12;

    succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_Goal_12);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv2_Goal_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
  MR_Word Goal0_9,
  MR_Word UnifyMode_10,
  MR_Word Unify_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_ConstructMap_0_35,
  MR_Word * STATE_VARIABLE_ConstructMap_36,
  MR_Word STATE_VARIABLE_DelayInfo_0_37,
  MR_Word * STATE_VARIABLE_DelayInfo_38)
{
  {
    MR_bool succeeded;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 0)));
    MR_Word ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 1)));
    MR_Word Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 2)));
    MR_Word ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 3)));
    MR_Word _CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 4)));
    MR_Word _CanCGC_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unify_11, (MR_Integer) 5)));
    MR_Word CanonVarsMap0_21;
    MR_Word CanonArgs_22;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Box conv0_CanonVarsMap0_21;
    MR_Box conv1_CanonArgs_22;

    succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], STATE_VARIABLE_ConstructMap_0_35, ((MR_Box) (Var_15)), &conv0_CanonVarsMap0_21);
    if (succeeded)
    {
      CanonVarsMap0_21 = ((MR_Word) conv0_CanonVarsMap0_21);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
      TypeInfo_49_49 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_48_48, TypeInfo_49_49, CanonVarsMap0_21, ((MR_Box) (ConsId_16)), &conv1_CanonArgs_22);
      if (succeeded)
      {
        CanonArgs_22 = ((MR_Word) conv1_CanonArgs_22);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_50_50 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
      MR_Word TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      MR_Word ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 0)));
      MR_Word ProgContext_24;
      MR_Word GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
      MR_Word SubUnifyGoals_26;
      MR_Word LHSFromToInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_10, (MR_Integer) 0)));
      MR_Word LHSFinalInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHSFromToInsts_27, (MR_Integer) 1)));
      MR_Word ConjList_33;
      MR_Word Var_39;
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 1)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 2)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_37, (MR_Integer) 3)));
      MR_Word _RHSFromToInsts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_10, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHSFromToInsts_27, (MR_Integer) 0)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));

      ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_25);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_23));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ProgContext_24));
      }
      SubUnifyGoals_26 = mercury__list__filter_map_corresponding3_4_f_0(TypeInfo_50_50, TypeInfo_50_50, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, TypeCtorInfo_52_52, Var_39, CanonArgs_22, Args_17, ArgModes_18);
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_23, LHSFinalInst_30);
      if (succeeded)
      {
        MR_Word ConstructGoal_31;
        MR_Word CanonVarsMap_32;
        MR_Word Var_41;

        hlds__make_goal__construct_functor_4_p_0(Var_15, ConsId_16, CanonArgs_22, &ConstructGoal_31);
        mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (ConsId_16)), CanonVarsMap0_21, &CanonVarsMap_32);
        mercury__map__det_update_4_p_0(TypeInfo_50_50, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (Var_15)), ((MR_Box) (CanonVarsMap_32)), STATE_VARIABLE_ConstructMap_0_35, STATE_VARIABLE_ConstructMap_36);
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ConstructGoal_31));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ConjList_33 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_52_52, SubUnifyGoals_26, Var_41);
      }
      else
      {
        ConjList_33 = SubUnifyGoals_26;
        *STATE_VARIABLE_ConstructMap_36 = STATE_VARIABLE_ConstructMap_0_35;
      }
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjList_33, GoalInfo0_25, Goal_12);
    }
    else
    {
      *Goal_12 = Goal0_9;
      *STATE_VARIABLE_ConstructMap_36 = STATE_VARIABLE_ConstructMap_0_35;
    }
    *STATE_VARIABLE_DelayInfo_38 = STATE_VARIABLE_DelayInfo_0_37;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_12;

    succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_Goal_12);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv2_Goal_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
  MR_Word GoalInfo0_8,
  MR_Word Unify_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_26,
  MR_Word * STATE_VARIABLE_ConstructMap_27,
  MR_Word STATE_VARIABLE_DelayInfo_0_28,
  MR_Word * STATE_VARIABLE_DelayInfo_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_46_46;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 0)));
    MR_Word ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 1)));
    MR_Word Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 2)));
    MR_Word ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 3)));
    MR_Word CanonVars_22;
    MR_Word ModuleInfo_23;
    MR_Word ProgContext_24;
    MR_Word SubUnifyGoals_25;
    MR_Word STATE_VARIABLE_DelayInfo_30_30;
    MR_Word Var_32;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 5)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_9, (MR_Integer) 6)));
    MR_Word CanonVars0_21;
    MR_Word TypeCtorInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word CanonVarsMap0_20;
    MR_Box conv0_CanonVarsMap0_20;
    MR_Box conv1_CanonVars0_21;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], STATE_VARIABLE_ConstructMap_0_26, ((MR_Box) (Var_13)), &conv0_CanonVarsMap0_20);
    if (succeeded)
    {
      CanonVarsMap0_20 = ((MR_Word) conv0_CanonVarsMap0_20);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
      TypeInfo_45_45 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_44_44, TypeInfo_45_45, CanonVarsMap0_20, ((MR_Box) (ConsId_14)), &conv1_CanonVars0_21);
      if (succeeded)
      {
        CanonVars0_21 = ((MR_Word) conv1_CanonVars0_21);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      CanonVars_22 = CanonVars0_21;
      STATE_VARIABLE_DelayInfo_30_30 = STATE_VARIABLE_DelayInfo_0_28;
      *STATE_VARIABLE_ConstructMap_27 = STATE_VARIABLE_ConstructMap_0_26;
    }
    else
    {
      MR_Word TypeInfo_35_83 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
      MR_Word VarSet0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
      MR_Word VarTypes0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
      MR_Word VarSet_60;
      MR_Word VarTypes_61;
      MR_Word Renaming_62;
      MR_Word Var_65;
      MR_Word Var_75;
      MR_Word Var_78;
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
      MR_Word Var_76;
      MR_Word Var_77;

      Var_65 = mercury__map__init_0_f_0(TypeInfo_35_83, TypeInfo_35_83);
      hlds__goal_util__clone_variables_9_p_0(Args_15, VarSet0_58, VarTypes0_59, VarSet0_58, &VarSet_60, VarTypes0_59, &VarTypes_61, Var_65, &Renaming_62);
      parse_tree__prog_rename__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 0, Renaming_62, Args_15, &CanonVars_22);
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
      {
        STATE_VARIABLE_DelayInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, 1) = ((MR_Box) (VarSet_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, 2) = ((MR_Box) (VarTypes_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, 3) = ((MR_Box) (Var_78));
      }
      check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(Var_13, ConsId_14, CanonVars_22, STATE_VARIABLE_ConstructMap_0_26, STATE_VARIABLE_ConstructMap_27);
    }
    ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
    ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_8);
    TypeInfo_46_46 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleInfo_23));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ProgContext_24));
    }
    SubUnifyGoals_25 = mercury__list__filter_map_corresponding3_4_f_0(TypeInfo_46_46, TypeInfo_46_46, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Var_32, CanonVars_22, Args_15, ArgModes_16);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(SubUnifyGoals_25, GoalInfo0_8, Goal_10);
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DelayInfo_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word CanonVars_8,
  MR_Word STATE_VARIABLE_ConstructMap_0_13,
  MR_Word * STATE_VARIABLE_ConstructMap_14)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdMap1_11;
    MR_Word ConsIdMap_12;
    MR_Word ConsIdMap0_10;
    MR_Box conv0_ConsIdMap0_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], STATE_VARIABLE_ConstructMap_0_13, ((MR_Box) (Var_6)), &conv0_ConsIdMap0_10);
    if (succeeded)
    {
      ConsIdMap0_10 = ((MR_Word) conv0_ConsIdMap0_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConsIdMap1_11 = ConsIdMap0_10;
    else
    {
      ConsIdMap1_11 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2]);
    }
    mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (ConsId_7)), ((MR_Box) (CanonVars_8)), ConsIdMap1_11, &ConsIdMap_12);
    mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (Var_6)), ((MR_Box) (ConsIdMap_12)), STATE_VARIABLE_ConstructMap_0_13, STATE_VARIABLE_ConstructMap_14);
  }
}

void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(
  MR_Word PredIds_5,
  MR_Word * ChangedPredIds_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word RevChangedPredIds_8;

    check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(PredIds_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevChangedPredIds_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, RevChangedPredIds_8, ChangedPredIds_6);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ChangedProcs_28;

    check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ChangedProcs_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ChangedProcs_28));
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChangedPredIds_0_2,
  MR_Word * STATE_VARIABLE_RevChangedPredIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
      *STATE_VARIABLE_RevChangedPredIds_3 = STATE_VARIABLE_RevChangedPredIds_0_2;
    }
    else
    {
      MR_Word TypeCtorInfo_37_37;
      MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredInfo0_16;
      MR_Word ProcTable0_17;
      MR_Word ProcIds_18;
      MR_Word ChangedProcs_19;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_ModuleInfo_30_30;
      MR_Word STATE_VARIABLE_RevChangedPredIds_31_31;
      MR_Box conv1_ChangedProcs_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevChangedPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, PredId_12, &PredInfo0_16);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_16, &ProcTable0_17);
      ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_16);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_4));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (PredId_12));
        MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (ProcTable0_17));
      }
      TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      mercury__list__foldl_4_p_0(TypeCtorInfo_37_37, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], Var_28, ProcIds_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_ChangedProcs_19);
      ChangedProcs_19 = ((MR_Word) conv1_ChangedProcs_19);
      if ((ChangedProcs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        STATE_VARIABLE_RevChangedPredIds_31_31 = STATE_VARIABLE_RevChangedPredIds_0_2;
        STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_4;
      }
      else
      {
        MR_Word ProcTable_22;
        MR_Word PredInfo_23;

        mercury__map__set_from_assoc_list_3_p_0(TypeCtorInfo_37_37, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ChangedProcs_19, ProcTable0_17, &ProcTable_22);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_22, PredInfo0_16, &PredInfo_23);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_12, PredInfo_23, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_30_30);
        {
          STATE_VARIABLE_RevChangedPredIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChangedPredIds_31_31, 0) = ((MR_Box) (PredId_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChangedPredIds_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevChangedPredIds_0_2));
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PredIds_13;
      next_value_of_STATE_VARIABLE_RevChangedPredIds_0_2 = STATE_VARIABLE_RevChangedPredIds_31_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevChangedPredIds_0_2 = next_value_of_STATE_VARIABLE_RevChangedPredIds_0_2;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__delay_partial_inst____Unify____construct_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__delay_partial_inst____Compare____construct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__delay_partial_inst__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.delay_partial_inst.
