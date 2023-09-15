/*
** Automatically generated from `hlds_call_tree.m'
** by the Mercury compiler,
** version rotd-2023-09-15
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


// :- module hlds.hlds_call_tree.
// :- implementation.

/*
INIT mercury__hlds__hlds_call_tree__init
ENDINIT
*/

#include "hlds.hlds_call_tree.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0[1];

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__394__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__390__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_26_26,
  MR_Word HeadVar__2_33);

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__312__1_1_f_0(
  MR_Word LambdaHeadVar__1_97);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__227__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_43_43,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__214__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_55);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree__write_pred_order_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8);

static void MR_CALL 
hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8);

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredCallees_10,
  MR_Word STATE_VARIABLE_IsFirst_0_17,
  MR_Word * STATE_VARIABLE_IsFirst_18);

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_HandledPredIds_0_3,
  MR_Word STATE_VARIABLE_PredIdCord_0_4,
  MR_Word * STATE_VARIABLE_PredIdCord_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_PredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_PredCalleeMap_8);

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenPredIds_0_2,
  MR_Word STATE_VARIABLE_CordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CordWithoutDuplicates_4);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_85,
  MR_Word * STATE_VARIABLE_CalleeCord_86);

static void MR_CALL 
hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_12,
  MR_Word * STATE_VARIABLE_CalleeCord_13);

static void MR_CALL 
hlds__hlds_call_tree__find_local_preds_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalPredIds_0_2,
  MR_Word * STATE_VARIABLE_LocalPredIds_3,
  MR_Word STATE_VARIABLE_ExportMap_0_4,
  MR_Word * STATE_VARIABLE_ExportMap_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[2][6];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[5][3];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[1][10];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 = {
  (MR_String) "pred_callees",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____pred_callees_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____pred_callees_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "pred_callees",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0,

};

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__394__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_36;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadVar__2_35)), &conv0_HeadVar__3_36);
  if (succeeded)
  {
    *HeadVar__3_36 = ((MR_Word) (conv0_HeadVar__3_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__390__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_26_26,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_HandledPredIds_26_26, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__312__1_1_f_0(
  MR_Word LambdaHeadVar__1_97)
{
  MR_Word LambdaHeadVar__2_98 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_97, (MR_Integer) 2))));

  return LambdaHeadVar__2_98;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__227__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_43_43,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_HandledPredIds_43_43, ((MR_Box) (HeadVar__2_58)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__214__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_55)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__write_pred_order_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8)
{
  MR_String PredDesc_10;

  PredDesc_10 = hlds__hlds_desc__describe_pred_from_id_3_f_0((MR_Integer) 0, ModuleInfo_7, PredId_8);
  mercury__io__write_string_4_p_0(Stream_6, PredDesc_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8)
{
  MR_Word PredInfo_10;
  MR_String PredDesc_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_10);
  PredDesc_11 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "    ");
  mercury__io__write_string_4_p_0(Stream_6, PredDesc_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredCallees_10,
  MR_Word STATE_VARIABLE_IsFirst_0_17,
  MR_Word * STATE_VARIABLE_IsFirst_18)
{
  MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(0, PredCallees_10, (MR_Integer) 1))));
  MR_Word Callees_15 = ((MR_Word) ((MR_hl_field(0, PredCallees_10, (MR_Integer) 2))));
  MR_String PredDesc_16;
  MR_Word Var_29;
  MR_Box conv0_STATE_VARIABLE_IO_20;

  PredDesc_16 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_14);
  switch (STATE_VARIABLE_IsFirst_0_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__nl_3_p_0(Stream_8);
        *STATE_VARIABLE_IsFirst_18 = STATE_VARIABLE_IsFirst_0_17;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_IsFirst_18 = (MR_Integer) 0;
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, PredDesc_16);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Callees_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
}

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_call_tree__write_pred_order_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IsFirst_18;

  hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IsFirst_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IsFirst_18));
}

void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_5_p_0(
  MR_Word TreeStream_6,
  MR_Word OrderStream_7,
  MR_Word ModuleInfo_8)
{
  MR_Word PredIdTable_10;
  MR_Word PredIdsInfos_11;
  MR_Word LocalPredIds_12;
  MR_Word ExportLineMap_13;
  MR_Word ExportLineList_14;
  MR_Word ExportList_15;
  MR_Word PredCallesCord_16;
  MR_Word PredCalleeMap_17;
  MR_Word PredCallesList_18;
  MR_Word PredIdCord_20;
  MR_Word PredIdList_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Box conv2__First_19;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;
  MR_Box conv3_STATE_VARIABLE_IO_23;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_8, &PredIdTable_10);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_10, &PredIdsInfos_11);
  Var_24 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_25 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__find_local_preds_exports_5_p_0(PredIdsInfos_11, Var_24, &LocalPredIds_12, Var_25, &ExportLineMap_13);
  mercury__one_or_more_map__to_flat_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineMap_13, &ExportLineList_14);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineList_14, &ExportList_15);
  Var_26 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_27 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  Var_28 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  hlds__hlds_call_tree__gather_pred_callees_8_p_0(PredIdTable_10, LocalPredIds_12, ExportList_15, Var_26, Var_27, &PredCallesCord_16, Var_28, &PredCalleeMap_17);
  PredCallesList_18 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCallesCord_16);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__write_local_call_tree_5_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (TreeStream_6));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (ModuleInfo_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, PredCallesList_18, ((MR_Box) ((MR_Integer) 1)), &conv2__First_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  Var_32 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_33 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(PredCalleeMap_17, PredCallesList_18, Var_32, Var_33, &PredIdCord_20);
  PredIdList_21 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdCord_20);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[0]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (hlds__hlds_call_tree__write_local_call_tree_5_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (OrderStream_7));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (ModuleInfo_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, PredIdList_21, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23);
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_36;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__394__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_36);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__390__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_HandledPredIds_0_3,
  MR_Word STATE_VARIABLE_PredIdCord_0_4,
  MR_Word * STATE_VARIABLE_PredIdCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredIdCord_5 = STATE_VARIABLE_PredIdCord_0_4;
    else
    {
      MR_Word HeadPredCallees_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailPredCallees_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, (MR_Integer) 0))));
      MR_Word Callees_18 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, (MR_Integer) 2))));
      MR_Word NextPredCallees_22;
      MR_Word STATE_VARIABLE_PredIdCord_27_27;
      MR_Word STATE_VARIABLE_HandledPredIds_30_30;
      MR_Word STATE_VARIABLE_HandledPredIds_26_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredIdCord_0_4;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_HandledPredIds_0_3, &STATE_VARIABLE_HandledPredIds_26_26);
      if (succeeded)
      {
        MR_Word NewCallees_20;
        MR_Word NewPredCallees_21;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word _OldCallees_19;

        STATE_VARIABLE_HandledPredIds_30_30 = STATE_VARIABLE_HandledPredIds_26_26;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_PredIdCord_0_4, &STATE_VARIABLE_PredIdCord_27_27);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[1]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (STATE_VARIABLE_HandledPredIds_26_26));
        }
        mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_28, Callees_18, &_OldCallees_19, &NewCallees_20);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_2[1]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (PredCalleeMap_1));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), Var_29, NewCallees_20, &NewPredCallees_21);
        NextPredCallees_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), NewPredCallees_21, TailPredCallees_13);
      }
      else
      {
        NextPredCallees_22 = TailPredCallees_13;
        STATE_VARIABLE_PredIdCord_27_27 = STATE_VARIABLE_PredIdCord_0_4;
        STATE_VARIABLE_HandledPredIds_30_30 = STATE_VARIABLE_HandledPredIds_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = NextPredCallees_22;
      next_value_of_STATE_VARIABLE_HandledPredIds_0_3 = STATE_VARIABLE_HandledPredIds_30_30;
      next_value_of_STATE_VARIABLE_PredIdCord_0_4 = STATE_VARIABLE_PredIdCord_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HandledPredIds_0_3 = next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      STATE_VARIABLE_PredIdCord_0_4 = next_value_of_STATE_VARIABLE_PredIdCord_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__227__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__214__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_PredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_PredCalleeMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PredCalleeMap_8 = STATE_VARIABLE_PredCalleeMap_0_7;
      *STATE_VARIABLE_PredCalleesCord_6 = STATE_VARIABLE_PredCalleesCord_0_5;
    }
    else
    {
      MR_Word HeadPredId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NextPredIds_37;
      MR_Word STATE_VARIABLE_PredCalleesCord_46_46;
      MR_Word STATE_VARIABLE_PredCalleeMap_47_47;
      MR_Word STATE_VARIABLE_HandledPredIds_49_49;
      MR_Word STATE_VARIABLE_HandledPredIds_43_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PredCalleeMap_0_7;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_20)), HeadVar__4_4, &STATE_VARIABLE_HandledPredIds_43_43);
      if (succeeded)
      {
        MR_Word PredInfo_25;
        MR_Word ProcTable_26;
        MR_Word ProcIdsInfos_27;
        MR_Box conv0_PredInfo_25;
        MR_Word ValidProcInfo_28;
        MR_Word Var_63;

        STATE_VARIABLE_HandledPredIds_49_49 = STATE_VARIABLE_HandledPredIds_43_43;
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (HeadPredId_20)), &conv0_PredInfo_25);
        PredInfo_25 = ((MR_Word) (conv0_PredInfo_25));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_25, &ProcTable_26);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_26, &ProcIdsInfos_27);
        succeeded = (ProcIdsInfos_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_63 = ((MR_Word) ((MR_hl_field(1, ProcIdsInfos_27, (MR_Integer) 0))));
          ValidProcInfo_28 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Goal_29;
          MR_Word AllCalleesCord_30;
          MR_Word AllCalleesList_31;
          MR_Word LocalCalleesList0_32;
          MR_Word LocalCalleesList_33;
          MR_Word PredCallees_34;
          MR_Word NewLocalCalleesList_36;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word SeenPredIds0_65;
          MR_Word CordWithoutDuplicates_66;
          MR_Word Var_67;
          MR_Word _OldLocalCalleesList_35;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ValidProcInfo_28, &Goal_29);
          Var_44 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          hlds__hlds_call_tree__acc_goal_callees_3_p_0(Goal_29, Var_44, &AllCalleesCord_30);
          AllCalleesList_31 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllCalleesCord_30);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[1]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__hlds_call_tree__gather_pred_callees_8_p_0_1));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (HeadVar__2_2));
          }
          mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_45, AllCalleesList_31, &LocalCalleesList0_32);
          SeenPredIds0_65 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          Var_67 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(LocalCalleesList0_32, SeenPredIds0_65, Var_67, &CordWithoutDuplicates_66);
          LocalCalleesList_33 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CordWithoutDuplicates_66);
          {
            PredCallees_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredCallees_34, 0) = ((MR_Box) (HeadPredId_20));
            MR_hl_field(0, PredCallees_34, 1) = ((MR_Box) (PredInfo_25));
            MR_hl_field(0, PredCallees_34, 2) = ((MR_Box) (LocalCalleesList_33));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (PredCallees_34)), STATE_VARIABLE_PredCalleesCord_0_5, &STATE_VARIABLE_PredCalleesCord_46_46);
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (HeadPredId_20)), ((MR_Box) (PredCallees_34)), STATE_VARIABLE_PredCalleeMap_0_7, &STATE_VARIABLE_PredCalleeMap_47_47);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[1]));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (hlds__hlds_call_tree__gather_pred_callees_8_p_0_2));
            MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_48, 3) = ((MR_Box) (STATE_VARIABLE_HandledPredIds_43_43));
          }
          mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_48, LocalCalleesList_33, &_OldLocalCalleesList_35, &NewLocalCalleesList_36);
          NextPredIds_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleesList_36, TailPredIds_21);
        }
        else
        {
          NextPredIds_37 = TailPredIds_21;
          STATE_VARIABLE_PredCalleeMap_47_47 = STATE_VARIABLE_PredCalleeMap_0_7;
          STATE_VARIABLE_PredCalleesCord_46_46 = STATE_VARIABLE_PredCalleesCord_0_5;
        }
      }
      else
      {
        NextPredIds_37 = TailPredIds_21;
        STATE_VARIABLE_PredCalleeMap_47_47 = STATE_VARIABLE_PredCalleeMap_0_7;
        STATE_VARIABLE_PredCalleesCord_46_46 = STATE_VARIABLE_PredCalleesCord_0_5;
        STATE_VARIABLE_HandledPredIds_49_49 = HeadVar__4_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_37;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_HandledPredIds_49_49;
      next_value_of_STATE_VARIABLE_PredCalleesCord_0_5 = STATE_VARIABLE_PredCalleesCord_46_46;
      next_value_of_STATE_VARIABLE_PredCalleeMap_0_7 = STATE_VARIABLE_PredCalleeMap_47_47;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredCalleesCord_0_5 = next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      STATE_VARIABLE_PredCalleeMap_0_7 = next_value_of_STATE_VARIABLE_PredCalleeMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenPredIds_0_2,
  MR_Word STATE_VARIABLE_CordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CordWithoutDuplicates_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CordWithoutDuplicates_4 = STATE_VARIABLE_CordWithoutDuplicates_0_3;
    else
    {
      MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CordWithoutDuplicates_17_17;
      MR_Word STATE_VARIABLE_SeenPredIds_18_18;
      MR_Word STATE_VARIABLE_SeenPredIds_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_SeenPredIds_0_2, &STATE_VARIABLE_SeenPredIds_16_16);
      if (succeeded)
      {
        STATE_VARIABLE_SeenPredIds_18_18 = STATE_VARIABLE_SeenPredIds_16_16;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_CordWithoutDuplicates_0_3, &STATE_VARIABLE_CordWithoutDuplicates_17_17);
      }
      else
      {
        STATE_VARIABLE_CordWithoutDuplicates_17_17 = STATE_VARIABLE_CordWithoutDuplicates_0_3;
        STATE_VARIABLE_SeenPredIds_18_18 = STATE_VARIABLE_SeenPredIds_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_10;
      next_value_of_STATE_VARIABLE_SeenPredIds_0_2 = STATE_VARIABLE_SeenPredIds_18_18;
      next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3 = STATE_VARIABLE_CordWithoutDuplicates_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SeenPredIds_0_2 = next_value_of_STATE_VARIABLE_SeenPredIds_0_2;
      STATE_VARIABLE_CordWithoutDuplicates_0_3 = next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_CalleeCord_86));
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_98;

  conv6_LambdaHeadVar__2_98 = hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__312__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_98));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_85,
  MR_Word * STATE_VARIABLE_CalleeCord_86)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_116 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_116;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_CalleeCord_87_87;

          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word UnifyConsId_14 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 1))));
                MR_Word ShroudedPredProcId_144;

                succeeded = ((((MR_tag((MR_Word) UnifyConsId_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnifyConsId_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ShroudedPredProcId_144 = ((MR_Word) ((MR_hl_field(3, UnifyConsId_14, (MR_Integer) 1))));
                  {
                    MR_Integer PredIdInt_146 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_144, (MR_Integer) 0))));
                    MR_Word ShroudedPredId_148 = (MR_Word) (PredIdInt_146);
                    MR_Word PredId_149;

                    PredId_149 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_148);
                    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_149)), STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_87_87);
                  }
                }
                else
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
                  break;
              }
              break;
          }
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_CalleeCord_86 = STATE_VARIABLE_CalleeCord_87_87;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSConsId_34 = ((MR_Word) ((MR_hl_field(1, RHS_9, (MR_Integer) 0))));

                hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(RHSConsId_34, STATE_VARIABLE_CalleeCord_87_87, STATE_VARIABLE_CalleeCord_86);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoal_44 = ((MR_Word) ((MR_hl_field(2, RHS_9, (MR_Integer) 5))));
                MR_Word next_value_of_Goal_4 = SubGoal_44;
                MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_85 = STATE_VARIABLE_CalleeCord_87_87;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_CalleeCord_0_85 = next_value_of_STATE_VARIABLE_CalleeCord_0_85;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));

          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_45)), STATE_VARIABLE_CalleeCord_0_85, STATE_VARIABLE_CalleeCord_86);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_CalleeCord_86 = STATE_VARIABLE_CalleeCord_0_85;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_112 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_112)), STATE_VARIABLE_CalleeCord_0_85, STATE_VARIABLE_CalleeCord_86);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_CalleeCord_86;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), SubGoals_63, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv1_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv1_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_CalleeCord_86;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), SubGoals_113, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv3_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv3_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word SubGoals_115;
              MR_Box conv8_STATE_VARIABLE_CalleeCord_86;

              SubGoals_115 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_3[3]), Cases_66);
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_3[4]), SubGoals_115, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv8_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv8_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4 = SubGoal_117;

              // direct tailcall eliminated
              ;
              Goal_4 = next_value_of_Goal_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_CalleeCord_103_103;
              MR_Word STATE_VARIABLE_CalleeCord_104_104;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_85;

              hlds__hlds_call_tree__acc_goal_callees_3_p_0(Cond_70, STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_103_103);
              hlds__hlds_call_tree__acc_goal_callees_3_p_0(Then_71, STATE_VARIABLE_CalleeCord_103_103, &STATE_VARIABLE_CalleeCord_104_104);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_72;
              next_value_of_STATE_VARIABLE_CalleeCord_0_85 = STATE_VARIABLE_CalleeCord_104_104;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_CalleeCord_0_85 = next_value_of_STATE_VARIABLE_CalleeCord_0_85;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_call_tree.acc_goal_callees\'/3", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_80 = ((MR_Word) ((MR_hl_field(1, Shorthand_73, (MR_Integer) 4))));
                    MR_Word OrElseGoals_81 = ((MR_Word) ((MR_hl_field(1, Shorthand_73, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_CalleeCord_108_108;
                    MR_Box conv5_STATE_VARIABLE_CalleeCord_86;

                    hlds__hlds_call_tree__acc_goal_callees_3_p_0(MainGoal_80, STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_108_108);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_3[2]), OrElseGoals_81, ((MR_Box) (STATE_VARIABLE_CalleeCord_108_108)), &conv5_STATE_VARIABLE_CalleeCord_86);
                    *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv5_STATE_VARIABLE_CalleeCord_86));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_118 = ((MR_Word) ((MR_hl_field(2, Shorthand_73, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_118;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
                    continue;
                  }
                  break;
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
hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_12,
  MR_Word * STATE_VARIABLE_CalleeCord_13)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word ShroudedPredProcId_6;

  if (succeeded)
  {
    ShroudedPredProcId_6 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
    {
      MR_Integer PredIdInt_8 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_6, (MR_Integer) 0))));
      MR_Word ShroudedPredId_10 = (MR_Word) (PredIdInt_8);
      MR_Word PredId_11;

      PredId_11 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_10);
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_11)), STATE_VARIABLE_CalleeCord_0_12, STATE_VARIABLE_CalleeCord_13);
    }
  }
  else
    *STATE_VARIABLE_CalleeCord_13 = STATE_VARIABLE_CalleeCord_0_12;
}

static void MR_CALL 
hlds__hlds_call_tree__find_local_preds_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalPredIds_0_2,
  MR_Word * STATE_VARIABLE_LocalPredIds_3,
  MR_Word STATE_VARIABLE_ExportMap_0_4,
  MR_Word * STATE_VARIABLE_ExportMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ExportMap_5 = STATE_VARIABLE_ExportMap_0_4;
      *STATE_VARIABLE_LocalPredIds_3 = STATE_VARIABLE_LocalPredIds_0_2;
    }
    else
    {
      MR_Word PredId_12;
      MR_Word PredInfo_13;
      MR_Word PredIdsInfos_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredStatus_17;
      MR_Word IsLocal_18;
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_LocalPredIds_37_37;
      MR_Word STATE_VARIABLE_ExportMap_38_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ExportMap_0_4;

      PredId_12 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
      PredInfo_13 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_17);
      IsLocal_18 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_17);
      switch (IsLocal_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
            STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Origin_19;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Origin_19);
            switch (MR_tag((MR_Word) Origin_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word IsExported_29;

                  mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_LocalPredIds_0_2, &STATE_VARIABLE_LocalPredIds_37_37);
                  IsExported_29 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_17);
                  switch (IsExported_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Context_30;
                        MR_Integer LineNumber_31;

                        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_13, &Context_30);
                        LineNumber_31 = mercury__term_context__context_line_1_f_0(Context_30);
                        mercury__one_or_more_map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (LineNumber_31)), ((MR_Box) (PredId_12)), STATE_VARIABLE_ExportMap_0_4, &STATE_VARIABLE_ExportMap_38_38);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 3:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIdsInfos_14;
      next_value_of_STATE_VARIABLE_LocalPredIds_0_2 = STATE_VARIABLE_LocalPredIds_37_37;
      next_value_of_STATE_VARIABLE_ExportMap_0_4 = STATE_VARIABLE_ExportMap_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocalPredIds_0_2 = next_value_of_STATE_VARIABLE_LocalPredIds_0_2;
      STATE_VARIABLE_ExportMap_0_4 = next_value_of_STATE_VARIABLE_ExportMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____pred_callees_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____pred_callees_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_call_tree__init(void)
{
}

void mercury__hlds__hlds_call_tree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0);
}

void mercury__hlds__hlds_call_tree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_call_tree__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_call_tree.
