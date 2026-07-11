/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version rotd-2026-07-11
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s {
  MR_bool check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_53;
  jmp_buf check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_58;
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_156;
  MR_Box check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_156;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[3];

static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[3];

static const MR_DuArgLocn check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_locns_delay_partial_inst_info_0_0[3];

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
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word Context_10,
  MR_Word LHSVar_11,
  MR_Word RHSVar_12,
  MR_Word UnifyMode_13,
  MR_Word * Goal_14);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word ProcTable_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ChangedProcs_0_30,
  MR_Word * STATE_VARIABLE_ChangedProcs_31);

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
  MR_Word STATE_VARIABLE_ConstructMap_0_119,
  MR_Word * STATE_VARIABLE_ConstructMap_120,
  MR_Word STATE_VARIABLE_DelayInfo_0_121,
  MR_Word * STATE_VARIABLE_DelayInfo_122);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_6_p_0(
  MR_Word ConstructMap_7,
  MR_Word Goal0_8,
  MR_Word LHS_9,
  MR_Word RHS0_10,
  MR_Word Unify_11,
  MR_Word * Goal_12);

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0(
  MR_Word DelayInfo_8,
  MR_Word Goal0_9,
  MR_Word UnifyMode_10,
  MR_Word Unify_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_ConstructMap_0_36,
  MR_Word * STATE_VARIABLE_ConstructMap_37);

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
  MR_Word STATE_VARIABLE_ConstructMap_0_27,
  MR_Word * STATE_VARIABLE_ConstructMap_28,
  MR_Word STATE_VARIABLE_DelayInfo_0_29,
  MR_Word * STATE_VARIABLE_DelayInfo_30);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevChangedPredIds_0_3,
  MR_Word * STATE_VARIABLE_RevChangedPredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

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

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[3][2];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[2][10];




static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1])),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "delay_partial_inst")) },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "canon_vars_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "construct_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[3] = {
  (MR_String) "dpi_module_info",
  (MR_String) "dpi_var_table",
  (MR_String) "dpi_changed"
};

static const MR_DuArgLocn check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_locns_delay_partial_inst_info_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 = {
  (MR_String) "delay_partial_inst_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_locns_delay_partial_inst_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1] = { &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 };

static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1] = { &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 };

static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "delay_partial_inst_info",
  { check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0 },
  { check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0,

};

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
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
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word Context_10,
  MR_Word LHSVar_11,
  MR_Word RHSVar_12,
  MR_Word UnifyMode_13,
  MR_Word * Goal_14)
{
  MR_bool succeeded;
  MR_Word RHSInitInst_17 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 2))));
  MR_Word Type_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, LHSVar_11, &Type_19);
  succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_8, Type_19, RHSInitInst_17);
  if (succeeded)
  {
    Var_21 = (MR_Word) (MR_mkword(3, &check_hlds__delay_partial_inst_scalar_common_3[0]));
    Var_22 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (RHSVar_12));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(LHSVar_11, Var_20, Context_10, Var_21, Var_22, Goal_14);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word ProcTable_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ChangedProcs_0_30,
  MR_Word * STATE_VARIABLE_ChangedProcs_31)
{
  MR_Word VarTable0_16;
  MR_Word InstMap0_17;
  MR_Word Goal0_18;
  MR_Word DelayInfo0_20;
  MR_Word Goal_21;
  MR_Word DelayInfo_23;
  MR_Word VarTable_25;
  MR_Word Changed_26;
  MR_Word STATE_VARIABLE_ProcInfo_1_36;
  MR_Word Var_37;
  MR_Word Var_34;
  MR_Box conv0_STATE_VARIABLE_ProcInfo_1_36;
  MR_Word _ConstructMap_22;

  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (ProcId_12));
  }
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_8, ModuleInfo_9, (MR_String) "Delaying partial instantiations in", Var_34);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_11, ((MR_Box) (ProcId_12)), &conv0_STATE_VARIABLE_ProcInfo_1_36);
  STATE_VARIABLE_ProcInfo_1_36 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_1_36));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_36, &VarTable0_16);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_9, STATE_VARIABLE_ProcInfo_1_36, &InstMap0_17);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_36, &Goal0_18);
  {
    DelayInfo0_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DelayInfo0_20, 0) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, DelayInfo0_20, 1) = ((MR_Box) (VarTable0_16));
    MR_hl_field(0, DelayInfo0_20, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_37 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]));
  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_17, Goal0_18, &Goal_21, Var_37, &_ConstructMap_22, DelayInfo0_20, &DelayInfo_23);
  VarTable_25 = ((MR_Word) ((MR_hl_field(0, DelayInfo_23, 1))));
  Changed_26 = ((MR_Unsigned) ((MR_hl_field(0, DelayInfo_23, 2))) & (MR_Integer) 1);
  switch (Changed_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ChangedProcs_31 = STATE_VARIABLE_ChangedProcs_0_30;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ProcInfo_2_38;
        MR_Word STATE_VARIABLE_ProcInfo_3_39;
        MR_Word STATE_VARIABLE_ProcInfo_4_41;
        MR_Word Var_43;

        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_1_36, &STATE_VARIABLE_ProcInfo_2_38);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_25, STATE_VARIABLE_ProcInfo_2_38, &STATE_VARIABLE_ProcInfo_3_39);
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_3_39, &STATE_VARIABLE_ProcInfo_4_41);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (ProcId_12));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_4_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ChangedProcs_31 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ChangedProcs_0_30));
        }
      }
      break;
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_16, 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_16, 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_ConstructMap_1_30;
    MR_Word STATE_VARIABLE_DelayInfo_1_31;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, Goal0_24, &Goal_25, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_1_30, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_1_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(InstMap0_1, Cases0_17, &Cases_19, STATE_VARIABLE_ConstructMap_1_30, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_1_31, STATE_VARIABLE_DelayInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_ConstructMap_1_26;
    MR_Word STATE_VARIABLE_DelayInfo_1_27;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, Goal0_16, &Goal_18, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_1_26, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_1_27);
    check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_1, Goals0_17, &Goals_19, STATE_VARIABLE_ConstructMap_1_26, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_1_27, STATE_VARIABLE_DelayInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayInfo_7 = STATE_VARIABLE_DelayInfo_0_6;
    *STATE_VARIABLE_ConstructMap_5 = STATE_VARIABLE_ConstructMap_0_4;
  }
  else
  {
    MR_Word HeadGoal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailGoals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word HeadGoal_21;
    MR_Word InstMap1_22;
    MR_Word TailGoals_23;
    MR_Word HeadGoals_24;
    MR_Word STATE_VARIABLE_ConstructMap_1_29;
    MR_Word STATE_VARIABLE_DelayInfo_1_30;

    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_1, HeadGoal0_16, &HeadGoal_21, STATE_VARIABLE_ConstructMap_0_4, &STATE_VARIABLE_ConstructMap_1_29, STATE_VARIABLE_DelayInfo_0_6, &STATE_VARIABLE_DelayInfo_1_30);
    hlds__goal_util__apply_goal_instmap_delta_3_p_0(HeadGoal0_16, InstMap0_1, &InstMap1_22);
    check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(InstMap1_22, TailGoals0_17, &TailGoals_23, STATE_VARIABLE_ConstructMap_1_29, STATE_VARIABLE_ConstructMap_5, STATE_VARIABLE_DelayInfo_1_30, STATE_VARIABLE_DelayInfo_7);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(HeadGoal_21, &HeadGoals_24);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_24, TailGoals_23);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_156 = ((MR_Word) ((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_156));
  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_58 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgMode_156, 3))));
    (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_53, (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RHSFinalInst_58);
    if ((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), &(env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_ArgMode_156, (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47, check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3, env_ptr);
      (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_119,
  MR_Word * STATE_VARIABLE_ConstructMap_120,
  MR_Word STATE_VARIABLE_DelayInfo_0_121,
  MR_Word * STATE_VARIABLE_DelayInfo_122)
{
  struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s env;

  {
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_18 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word NegGoal_19;
          MR_Word Var_130;
          MR_Word Var_20;

          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, NegGoal0_18, &NegGoal_19, STATE_VARIABLE_ConstructMap_0_119, &Var_20, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
          Var_130 = (MR_Word) ((MR_Word) (NegGoal_19));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
          }
          *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 0))));
          MR_Word RHS0_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 1))));
          MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 2))));
          MR_Word Unify_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 3))));
          MR_Word Context_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 4))));

          switch (MR_tag((MR_Word) Unify_42)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_45 = ((MR_Word) ((MR_hl_field(0, Unify_42, 1))));
                MR_Word _Var_44;
                MR_Word _Args_46;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_168;
                MR_Word Var_169;

                (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ArgModes_47 = ((MR_Word) ((MR_hl_field(0, Unify_42, 3))));
                if (((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 1))
                  (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, 0)))) == (MR_Integer) 4))))
                  (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
                else
                  (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
                if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                {
                  (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_121, 0))));
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(&env);
                }
                if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
                  check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(GoalInfo0_14, Unify_42, Goal_10, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
                else
                {
                  switch (MR_tag((MR_Word) RHS0_40)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        *Goal_10 = Goal0_9;
                        *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Purity_59 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_40, 0))) >> 2)) & (MR_Integer) 3);
                        MR_Word Groundness_60 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_40, 0))) >> 1)) & (MR_Integer) 1);
                        MR_Word PredOrFunc_61 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_40, 0))) & (MR_Integer) 1);
                        MR_Word NonLocals_62 = ((MR_Word) ((MR_hl_field(2, RHS0_40, 1))));
                        MR_Word LambdaArgVarsModes_63 = ((MR_Word) ((MR_hl_field(2, RHS0_40, 2))));
                        MR_Word Detism_64 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_40, 3))) & (MR_Integer) 7);
                        MR_Word LambdaGoal0_65 = ((MR_Word) ((MR_hl_field(2, RHS0_40, 4))));
                        MR_Word LambdaGoal_66;
                        MR_Word RHS_68;
                        MR_Word GoalExpr_69;
                        MR_Word Var_145;
                        MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(2, RHS0_40, 0)));
                        MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(2, RHS0_40, 3)));
                        MR_Word _ConstructMap_67;

                        Var_145 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]));
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, LambdaGoal0_65, &LambdaGoal_66, Var_145, &_ConstructMap_67, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
                        {
                          RHS_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, RHS_68, 0) = (MR_Box) (packed_word_4);
                          MR_hl_field(2, RHS_68, 1) = ((MR_Box) (NonLocals_62));
                          MR_hl_field(2, RHS_68, 2) = ((MR_Box) (LambdaArgVarsModes_63));
                          MR_hl_field(2, RHS_68, 3) = (MR_Box) ((MR_Unsigned) (Detism_64));
                          MR_hl_field(2, RHS_68, 4) = ((MR_Box) (LambdaGoal_66));
                        }
                        {
                          GoalExpr_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, GoalExpr_69, 0) = ((MR_Box) (LHS_39));
                          MR_hl_field(1, GoalExpr_69, 1) = ((MR_Box) (RHS_68));
                          MR_hl_field(1, GoalExpr_69, 2) = ((MR_Box) (Mode_41));
                          MR_hl_field(1, GoalExpr_69, 3) = ((MR_Box) (Unify_42));
                          MR_hl_field(1, GoalExpr_69, 4) = ((MR_Box) (Context_43));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_10 = base;
                          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_69));
                          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
                        }
                      }
                      break;
                  }
                  *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0(STATE_VARIABLE_DelayInfo_0_121, Goal0_9, Mode_41, Unify_42, Goal_10, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120);
                *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
              }
              break;
            case (MR_Integer) 2:
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
                *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unify_42, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Goal_10 = Goal0_9;
                    *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
                    *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_6_p_0(STATE_VARIABLE_ConstructMap_0_119, Goal0_9, LHS_39, RHS0_40, Unify_42, Goal_10);
                    *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
                    *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Goal_10 = Goal0_9;
          *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
          *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
              *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
              MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Goals_17;
              MR_Word Var_125;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1)));

              check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(InstMap0_8, Goals0_16, &Goals_17, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
              {
                Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_125, 1) = (MR_Box) ((MR_Unsigned) (ConjType_15));
                MR_hl_field(3, Var_125, 2) = ((MR_Box) (Goals_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_125));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_128;
              MR_Word Goals0_154 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Goals_155;

              check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_8, Goals0_154, &Goals_155, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
              {
                Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_128, 1) = ((MR_Box) (Goals_155));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_128));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word CanFail_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2))) & (MR_Integer) 1);
              MR_Word Cases0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Cases_24;
              MR_Word Var_133;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2)));

              check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(InstMap0_8, Cases0_23, &Cases_24, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
              {
                Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_133, 1) = ((MR_Box) (Var_21));
                MR_hl_field(3, Var_133, 2) = (MR_Box) ((MR_Unsigned) (CanFail_22));
                MR_hl_field(3, Var_133, 3) = ((MR_Box) (Cases_24));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_133));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word SubGoal0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word FGT_36;
              MR_Word Var_35;
              MR_Unsigned packed_word_1;

              (env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_33, 0)))) == (MR_Integer) 6)));
              if ((env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
              {
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Reason_33, 2)));
                FGT_36 = ((MR_Unsigned) ((MR_hl_field(3, Reason_33, 2))) & (MR_Integer) 3);
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
                *STATE_VARIABLE_DelayInfo_122 = STATE_VARIABLE_DelayInfo_0_121;
              }
              else
              {
                MR_Word SubGoal_37;
                MR_Word Var_142;
                MR_Word Var_38;

                check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, SubGoal0_34, &SubGoal_37, STATE_VARIABLE_ConstructMap_0_119, &Var_38, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
                {
                  Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_142, 1) = ((MR_Box) (Reason_33));
                  MR_hl_field(3, Var_142, 2) = ((MR_Box) (SubGoal_37));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_142));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Cond0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Then0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Else0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
              MR_Word InstMapThen_29;
              MR_Word Cond_30;
              MR_Word Then_31;
              MR_Word Else_32;
              MR_Word STATE_VARIABLE_ConstructMap_4_134;
              MR_Word STATE_VARIABLE_DelayInfo_5_135;
              MR_Word STATE_VARIABLE_ConstructMap_5_136;
              MR_Word STATE_VARIABLE_DelayInfo_6_137;
              MR_Word Var_140;

              hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond0_26, InstMap0_8, &InstMapThen_29);
              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, Cond0_26, &Cond_30, STATE_VARIABLE_ConstructMap_0_119, &STATE_VARIABLE_ConstructMap_4_134, STATE_VARIABLE_DelayInfo_0_121, &STATE_VARIABLE_DelayInfo_5_135);
              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMapThen_29, Then0_27, &Then_31, STATE_VARIABLE_ConstructMap_4_134, &STATE_VARIABLE_ConstructMap_5_136, STATE_VARIABLE_DelayInfo_5_135, &STATE_VARIABLE_DelayInfo_6_137);
              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, Else0_28, &Else_32, STATE_VARIABLE_ConstructMap_5_136, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_6_137, STATE_VARIABLE_DelayInfo_122);
              {
                Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_140, 1) = ((MR_Box) (Vars_25));
                MR_hl_field(3, Var_140, 2) = ((MR_Box) (Cond_30));
                MR_hl_field(3, Var_140, 3) = ((MR_Box) (Then_31));
                MR_hl_field(3, Var_140, 4) = ((MR_Box) (Else_32));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_140));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));

              switch (MR_tag((MR_Word) ShortHand0_102)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.delay_partial_inst.delay_partial_inst_in_goal\'/7", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_103 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_102, 0))) & (MR_Integer) 3);
                    MR_Word Outer_104 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 1))));
                    MR_Word Inner_105 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 2))));
                    MR_Word MaybeOutputVars_106 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 3))));
                    MR_Word MainGoal0_107 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 4))));
                    MR_Word OrElseGoals0_108 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 5))));
                    MR_Word OrElseInners_109 = ((MR_Word) ((MR_hl_field(1, ShortHand0_102, 6))));
                    MR_Word MainGoal_110;
                    MR_Word OrElseGoals_112;
                    MR_Word ShortHand_114;
                    MR_Word STATE_VARIABLE_DelayInfo_11_148;
                    MR_Word GoalExpr_163;
                    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, ShortHand0_102, 0)));
                    MR_Word Var_111;
                    MR_Word Var_113;

                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, MainGoal0_107, &MainGoal_110, STATE_VARIABLE_ConstructMap_0_119, &Var_111, STATE_VARIABLE_DelayInfo_0_121, &STATE_VARIABLE_DelayInfo_11_148);
                    check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(InstMap0_8, OrElseGoals0_108, &OrElseGoals_112, STATE_VARIABLE_ConstructMap_0_119, &Var_113, STATE_VARIABLE_DelayInfo_11_148, STATE_VARIABLE_DelayInfo_122);
                    {
                      ShortHand_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_114, 0) = (MR_Box) ((MR_Unsigned) (GoalType_103));
                      MR_hl_field(1, ShortHand_114, 1) = ((MR_Box) (Outer_104));
                      MR_hl_field(1, ShortHand_114, 2) = ((MR_Box) (Inner_105));
                      MR_hl_field(1, ShortHand_114, 3) = ((MR_Box) (MaybeOutputVars_106));
                      MR_hl_field(1, ShortHand_114, 4) = ((MR_Box) (MainGoal_110));
                      MR_hl_field(1, ShortHand_114, 5) = ((MR_Box) (OrElseGoals_112));
                      MR_hl_field(1, ShortHand_114, 6) = ((MR_Box) (OrElseInners_109));
                    }
                    {
                      GoalExpr_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_163, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_163, 1) = ((MR_Box) (ShortHand_114));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_10 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_163));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
                    }
                    *STATE_VARIABLE_ConstructMap_120 = STATE_VARIABLE_ConstructMap_0_119;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_115 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, 0))));
                    MR_Word ResultVar_116 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, 1))));
                    MR_Word SubGoal0_164 = ((MR_Word) ((MR_hl_field(2, ShortHand0_102, 2))));
                    MR_Word SubGoal_165;
                    MR_Word GoalExpr_166;
                    MR_Word ShortHand_167;

                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(InstMap0_8, SubGoal0_164, &SubGoal_165, STATE_VARIABLE_ConstructMap_0_119, STATE_VARIABLE_ConstructMap_120, STATE_VARIABLE_DelayInfo_0_121, STATE_VARIABLE_DelayInfo_122);
                    {
                      ShortHand_167 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_167, 0) = ((MR_Box) (MaybeIO_115));
                      MR_hl_field(2, ShortHand_167, 1) = ((MR_Box) (ResultVar_116));
                      MR_hl_field(2, ShortHand_167, 2) = ((MR_Box) (SubGoal_165));
                    }
                    {
                      GoalExpr_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_166, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_166, 1) = ((MR_Box) (ShortHand_167));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_10 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_166));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
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

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_6_p_0(
  MR_Word ConstructMap_7,
  MR_Word Goal0_8,
  MR_Word LHS_9,
  MR_Word RHS0_10,
  MR_Word Unify_11,
  MR_Word * Goal_12)
{
  MR_bool succeeded;
  MR_Word CanFail_14 = ((MR_Unsigned) ((MR_hl_field(3, Unify_11, 2))) & (MR_Integer) 1);
  MR_Word RHSVar_16;
  MR_Word ConsId_17;
  MR_Word CanonArgs_18;
  MR_Word TypeInfo_19_41;
  MR_Word TypeInfo_20_42;
  MR_Word TypeCtorInfo_21_43;
  MR_Word TypeInfo_22_44;
  MR_Word CanonVarsMap_31;
  MR_Word List_32;
  MR_Word Rest_33;
  MR_Word Var_45;
  MR_Box conv0_CanonVarsMap_31;

  succeeded = (CanFail_14 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) RHS0_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      RHSVar_16 = ((MR_Word) ((MR_hl_field(0, RHS0_10, 0))));
      TypeInfo_19_41 = (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]);
      TypeInfo_20_42 = (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_19_41, TypeInfo_20_42, ConstructMap_7, ((MR_Box) (LHS_9)), &conv0_CanonVarsMap_31);
      if (succeeded)
      {
        CanonVarsMap_31 = ((MR_Word) (conv0_CanonVarsMap_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_21_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
        TypeInfo_22_44 = (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]);
        List_32 = mercury__map__to_assoc_list_1_f_0(TypeCtorInfo_21_43, TypeInfo_22_44, CanonVarsMap_31);
        succeeded = (List_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(1, List_32, 0))));
          Rest_33 = ((MR_Word) ((MR_hl_field(1, List_32, 1))));
          ConsId_17 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
          CanonArgs_18 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
          if (!((Rest_33 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.delay_partial_inst.get_sole_cons_id_and_canon_vars\'/4", (MR_String) "delaying partial instantiations when variable could be bound to multiple functors");
              return;
            }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 1))));
    MR_Word ProgContext_21;
    MR_Word TestGoal_22;
    MR_Word AssignGoal_23;
    MR_Word Var_24;

    ProgContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_20);
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (ConsId_17));
      MR_hl_field(1, Var_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_24, 2) = ((MR_Box) (CanonArgs_18));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(RHSVar_16, Var_24, ProgContext_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &TestGoal_22);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(LHS_9, RHS0_10, ProgContext_21, (MR_Word) (MR_mkword(3, &check_hlds__delay_partial_inst_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_23);
    hlds__hlds_goal__conjoin_goals_3_p_0(TestGoal_22, AssignGoal_23, Goal_12);
  }
  else
    *Goal_12 = Goal0_8;
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_14;

  succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Goal_14);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv2_Goal_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0(
  MR_Word DelayInfo_8,
  MR_Word Goal0_9,
  MR_Word UnifyMode_10,
  MR_Word Unify_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_ConstructMap_0_36,
  MR_Word * STATE_VARIABLE_ConstructMap_37)
{
  MR_bool succeeded;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Unify_11, 0))));
  MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(1, Unify_11, 1))));
  MR_Word Args_16 = ((MR_Word) ((MR_hl_field(1, Unify_11, 2))));
  MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(1, Unify_11, 3))));
  MR_Word CanonVarsMap0_20;
  MR_Word CanonArgs_21;
  MR_Word TypeCtorInfo_48_48;
  MR_Word TypeInfo_49_49;
  MR_Box conv0_CanonVarsMap0_20;
  MR_Box conv1_CanonArgs_21;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), STATE_VARIABLE_ConstructMap_0_36, ((MR_Box) (Var_14)), &conv0_CanonVarsMap0_20);
  if (succeeded)
  {
    CanonVarsMap0_20 = ((MR_Word) (conv0_CanonVarsMap0_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_48_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
    TypeInfo_49_49 = (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_48_48, TypeInfo_49_49, CanonVarsMap0_20, ((MR_Box) (ConsId_15)), &conv1_CanonArgs_21);
    if (succeeded)
    {
      CanonArgs_21 = ((MR_Word) (conv1_CanonArgs_21));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, DelayInfo_8, 0))));
    MR_Word VarTable_23 = ((MR_Word) ((MR_hl_field(0, DelayInfo_8, 1))));
    MR_Word ProgContext_24;
    MR_Word GoalInfo0_25;
    MR_Word SubUnifyGoals_26;
    MR_Word Type_27;
    MR_Word LHSFinalInst_29;
    MR_Word ConjList_34;
    MR_Word Var_38;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_23, Var_14, &Type_27);
    LHSFinalInst_29 = ((MR_Word) ((MR_hl_field(0, UnifyMode_10, 1))));
    GoalInfo0_25 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
    ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_25);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_4[1]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_7_p_0_1));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (ModuleInfo_22));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (VarTable_23));
      MR_hl_field(0, Var_38, 5) = ((MR_Box) (ProgContext_24));
    }
    mercury__list__filter_map_corresponding3_5_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_38, CanonArgs_21, Args_16, ArgModes_17, &SubUnifyGoals_26);
    succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_22, Type_27, LHSFinalInst_29);
    if (succeeded)
    {
      MR_Word ConstructGoal_32;
      MR_Word CanonVarsMap_33;
      MR_Word Var_40;

      hlds__make_goal__construct_functor_4_p_0(Var_14, ConsId_15, CanonArgs_21, &ConstructGoal_32);
      mercury__map__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]), ((MR_Box) (ConsId_15)), CanonVarsMap0_20, &CanonVarsMap_33);
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), ((MR_Box) (Var_14)), ((MR_Box) (CanonVarsMap_33)), STATE_VARIABLE_ConstructMap_0_36, STATE_VARIABLE_ConstructMap_37);
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (ConstructGoal_32));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConjList_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubUnifyGoals_26, Var_40);
    }
    else
    {
      ConjList_34 = SubUnifyGoals_26;
      *STATE_VARIABLE_ConstructMap_37 = STATE_VARIABLE_ConstructMap_0_36;
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjList_34, GoalInfo0_25, Goal_12);
  }
  else
  {
    *Goal_12 = Goal0_9;
    *STATE_VARIABLE_ConstructMap_37 = STATE_VARIABLE_ConstructMap_0_36;
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_14;

  succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_Goal_14);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv3_Goal_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
  MR_Word GoalInfo0_8,
  MR_Word Unify_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ConstructMap_0_27,
  MR_Word * STATE_VARIABLE_ConstructMap_28,
  MR_Word STATE_VARIABLE_DelayInfo_0_29,
  MR_Word * STATE_VARIABLE_DelayInfo_30)
{
  MR_bool succeeded;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Unify_9, 0))));
  MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(0, Unify_9, 1))));
  MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, Unify_9, 2))));
  MR_Word ArgModes_16 = ((MR_Word) ((MR_hl_field(0, Unify_9, 3))));
  MR_Word CanonVars_22;
  MR_Word ModuleInfo_23;
  MR_Word VarTable_24;
  MR_Word ProgContext_25;
  MR_Word SubUnifyGoals_26;
  MR_Word STATE_VARIABLE_DelayInfo_1_31;
  MR_Word Var_33;
  MR_Word CanonVars0_21;
  MR_Word TypeCtorInfo_45_45;
  MR_Word TypeInfo_46_46;
  MR_Word CanonVarsMap0_20;
  MR_Box conv0_CanonVarsMap0_20;
  MR_Box conv1_CanonVars0_21;
  MR_Word Var_40;
  MR_Word Var_41;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), STATE_VARIABLE_ConstructMap_0_27, ((MR_Box) (Var_13)), &conv0_CanonVarsMap0_20);
  if (succeeded)
  {
    CanonVarsMap0_20 = ((MR_Word) (conv0_CanonVarsMap0_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_45_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
    TypeInfo_46_46 = (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_45_45, TypeInfo_46_46, CanonVarsMap0_20, ((MR_Box) (ConsId_14)), &conv1_CanonVars0_21);
    if (succeeded)
    {
      CanonVars0_21 = ((MR_Word) (conv1_CanonVars0_21));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    CanonVars_22 = CanonVars0_21;
    STATE_VARIABLE_DelayInfo_1_31 = STATE_VARIABLE_DelayInfo_0_29;
    *STATE_VARIABLE_ConstructMap_28 = STATE_VARIABLE_ConstructMap_0_27;
  }
  else
  {
    MR_Word VarTable0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_29, 1))));
    MR_Word VarTable_55;
    MR_Word Renaming_56;
    MR_Word Var_58;
    MR_Word ConsIdMap1_68;
    MR_Word ConsIdMap_69;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word ConsIdMap0_67;
    MR_Box conv2_ConsIdMap0_67;

    Var_58 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]));
    hlds__goal_util__clone_variables_6_p_0(Args_15, VarTable0_54, VarTable0_54, &VarTable_55, Var_58, &Renaming_56);
    parse_tree__prog_rename__rename_var_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 0, Renaming_56, Args_15, &CanonVars_22);
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_29, 0))));
    Var_64 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_29, 2))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_DelayInfo_1_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 1) = ((MR_Box) (VarTable_55));
      MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 2) = (MR_Box) ((MR_Unsigned) (Var_64));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), STATE_VARIABLE_ConstructMap_0_27, ((MR_Box) (Var_13)), &conv2_ConsIdMap0_67);
    if (succeeded)
    {
      ConsIdMap0_67 = ((MR_Word) (conv2_ConsIdMap0_67));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConsIdMap1_68 = ConsIdMap0_67;
    else
      ConsIdMap1_68 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]));
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[2]), ((MR_Box) (ConsId_14)), ((MR_Box) (CanonVars_22)), ConsIdMap1_68, &ConsIdMap_69);
    mercury__map__set_4_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_1[1]), ((MR_Box) (Var_13)), ((MR_Box) (ConsIdMap_69)), STATE_VARIABLE_ConstructMap_0_27, STATE_VARIABLE_ConstructMap_28);
  }
  ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 0))));
  VarTable_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 1))));
  ProgContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_8);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_4[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ModuleInfo_23));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (VarTable_24));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) (ProgContext_25));
  }
  mercury__list__filter_map_corresponding3_5_p_0((MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_33, CanonVars_22, Args_15, ArgModes_16, &SubUnifyGoals_26);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(SubUnifyGoals_26, GoalInfo0_8, Goal_10);
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 0))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_1_31, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DelayInfo_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
}

void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word PredIds_7,
  MR_Word * ChangedPredIds_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word RevChangedPredIds_10;

  check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0(ProgressStream_6, PredIds_7, (MR_Word) ((MR_Unsigned) 0U), &RevChangedPredIds_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), RevChangedPredIds_10, ChangedPredIds_8);
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ChangedProcs_31;

  check_hlds__delay_partial_inst__delay_partial_inst_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ChangedProcs_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ChangedProcs_31));
}

static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevChangedPredIds_0_3,
  MR_Word * STATE_VARIABLE_RevChangedPredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_RevChangedPredIds_4 = STATE_VARIABLE_RevChangedPredIds_0_3;
    }
    else
    {
      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo0_19;
      MR_Word ProcTable0_20;
      MR_Word ProcIds_21;
      MR_Word ChangedProcs_22;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_ModuleInfo_1_33;
      MR_Word STATE_VARIABLE_RevChangedPredIds_1_34;
      MR_Box conv1_ChangedProcs_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevChangedPredIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, PredId_15, &PredInfo0_19);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_19, &ProcTable0_20);
      ProcIds_21 = hlds__hlds_pred__pred_info_will_codegen_proc_ids_1_f_0(PredInfo0_19);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_4[0]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_6_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5));
        MR_hl_field(0, Var_31, 5) = ((MR_Box) (PredId_15));
        MR_hl_field(0, Var_31, 6) = ((MR_Box) (ProcTable0_20));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__delay_partial_inst_scalar_common_2[0]), Var_31, ProcIds_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ChangedProcs_22);
      ChangedProcs_22 = ((MR_Word) (conv1_ChangedProcs_22));
      if ((ChangedProcs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_RevChangedPredIds_1_34 = STATE_VARIABLE_RevChangedPredIds_0_3;
        STATE_VARIABLE_ModuleInfo_1_33 = STATE_VARIABLE_ModuleInfo_0_5;
      }
      else
      {
        MR_Word ProcTable_25;
        MR_Word PredInfo_26;

        mercury__map__set_from_assoc_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ChangedProcs_22, ProcTable0_20, &ProcTable_25);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_25, PredInfo0_19, &PredInfo_26);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_15, PredInfo_26, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_1_33);
        {
          STATE_VARIABLE_RevChangedPredIds_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevChangedPredIds_1_34, 0) = ((MR_Box) (PredId_15));
          MR_hl_field(1, STATE_VARIABLE_RevChangedPredIds_1_34, 1) = ((MR_Box) (STATE_VARIABLE_RevChangedPredIds_0_3));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_16;
      next_value_of_STATE_VARIABLE_RevChangedPredIds_0_3 = STATE_VARIABLE_RevChangedPredIds_1_34;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_1_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevChangedPredIds_0_3 = next_value_of_STATE_VARIABLE_RevChangedPredIds_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
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
  MR_bool succeeded;

  succeeded = check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_partial_inst____Unify____construct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_partial_inst____Compare____construct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
