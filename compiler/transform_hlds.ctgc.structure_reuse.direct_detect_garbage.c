/*
** Automatically generated from `structure_reuse.direct_detect_garbage.m'
** by the Mercury compiler,
** version rotd-2025-10-27
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


// :- module transform_hlds.ctgc.structure_reuse.direct_detect_garbage.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct_detect_garbage.mih"


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
#include "getopt.mih"
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
#include "check_hlds.proc_requests.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.dead_cell_table.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_types_detect_bg_info_0_0[5];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_names_detect_bg_info_0_0[5];

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_locns_detect_bg_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_functor_desc_detect_bg_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_stag_ordered_detect_bg_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_ptag_ordered_detect_bg_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_name_ordered_detect_bg_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__functor_number_map_detect_bg_info_0[1];

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__152__1_1_f_0(
  MR_Word LambdaHeadVar__1_79);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(
  MR_Word Background_8,
  MR_Word SharingBeforeDisj_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_SharingAs_0_14,
  MR_Word * STATE_VARIABLE_SharingAs_15,
  MR_Word STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * STATE_VARIABLE_DeadCellTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(
  MR_Word Background_7,
  MR_Word TopGoal_8,
  MR_Word STATE_VARIABLE_SharingAs_0_14,
  MR_Word * STATE_VARIABLE_SharingAs_15,
  MR_Word STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * STATE_VARIABLE_DeadCellTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(
  MR_Word Background_7,
  MR_Word TopGoal_8,
  MR_Word STATE_VARIABLE_SharingAs_0_61,
  MR_Word * STATE_VARIABLE_SharingAs_62,
  MR_Word STATE_VARIABLE_DeadCellTable_0_63,
  MR_Word * STATE_VARIABLE_DeadCellTable_64);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__unification_verify_reuse_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GoalInfo_11,
  MR_Word Unification_12,
  MR_Word PP_13,
  MR_Word Sharing_14,
  MR_Word STATE_VARIABLE_DeadCellTable_0_44,
  MR_Word * STATE_VARIABLE_DeadCellTable_45);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GenDetails_11,
  MR_Word CallArgs_12,
  MR_Word Modes_13,
  MR_Word GoalInfo_14,
  MR_Word STATE_VARIABLE_SharingAs_0_32,
  MR_Word * STATE_VARIABLE_SharingAs_33);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_2[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_4[1][5];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_2[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__type_ctor_info_detect_bg_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_3[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__type_ctor_info_detect_bg_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_types_detect_bg_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_names_detect_bg_info_0_0[5] = {
  (MR_String) "dbgi_module_info",
  (MR_String) "dbgi_pred_info",
  (MR_String) "dbgi_proc_info",
  (MR_String) "dbgi_sharing_table",
  (MR_String) "dbgi_very_verbose"
};

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_locns_detect_bg_info_0_0[5] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_functor_desc_detect_bg_info_0_0 = {
  (MR_String) "detect_bg_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_types_detect_bg_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_names_detect_bg_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__field_locns_detect_bg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_stag_ordered_detect_bg_info_0_0[1] = { &transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_functor_desc_detect_bg_info_0_0 };

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_ptag_ordered_detect_bg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_stag_ordered_detect_bg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_name_ordered_detect_bg_info_0[1] = { &transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_functor_desc_detect_bg_info_0_0 };

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__functor_number_map_detect_bg_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__type_ctor_info_detect_bg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct_detect_garbage",
  (MR_String) "detect_bg_info",
  { transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_name_ordered_detect_bg_info_0 },
  { transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__du_ptag_ordered_detect_bg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__functor_number_map_detect_bg_info_0,

};

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__152__1_1_f_0(
  MR_Word LambdaHeadVar__1_79)
{
  MR_Word LambdaHeadVar__2_80 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_79, 2))));

  return LambdaHeadVar__2_80;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(
  MR_Word Background_8,
  MR_Word SharingBeforeDisj_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_SharingAs_0_14,
  MR_Word * STATE_VARIABLE_SharingAs_15,
  MR_Word STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * STATE_VARIABLE_DeadCellTable_17)
{
  MR_Word GoalSharing_13;
  MR_Word Var_20;
  MR_Word Var_23;

  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_8, Goal_10, SharingBeforeDisj_9, &GoalSharing_13, STATE_VARIABLE_DeadCellTable_0_16, STATE_VARIABLE_DeadCellTable_17);
  Var_20 = ((MR_Word) ((MR_hl_field(0, Background_8, 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Background_8, 2))));
  *STATE_VARIABLE_SharingAs_15 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(Var_20, Var_23, STATE_VARIABLE_SharingAs_0_14, GoalSharing_13);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(
  MR_Word Background_7,
  MR_Word TopGoal_8,
  MR_Word STATE_VARIABLE_SharingAs_0_14,
  MR_Word * STATE_VARIABLE_SharingAs_15,
  MR_Word STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * STATE_VARIABLE_DeadCellTable_17)
{
  MR_Word VeryVerbose_11 = ((MR_Unsigned) ((MR_hl_field(0, Background_7, 4))) & (MR_Integer) 1);

  switch (VeryVerbose_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StdErr_13;

        mercury__io__stderr_stream_3_p_0(&StdErr_13);
        mercury__io__write_char_4_p_0(StdErr_13, (MR_Char) 46);
        mercury__io__flush_output_3_p_0(StdErr_13);
      }
      break;
  }
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_7, TopGoal_8, STATE_VARIABLE_SharingAs_0_14, STATE_VARIABLE_SharingAs_15, STATE_VARIABLE_DeadCellTable_0_16, STATE_VARIABLE_DeadCellTable_17);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word SharingTable_10,
  MR_Word Goal_11,
  MR_Word * DeadCellTable_12)
{
  MR_Word Background_13;
  MR_Word VeryVerbose_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Globals_27;
  MR_Word VeryVerbose_28;
  MR_Word Var_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_27, (MR_Integer) 132, &VeryVerbose_28);
  {
    Background_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Background_13, 0) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Background_13, 1) = ((MR_Box) (PredInfo_8));
    MR_hl_field(0, Background_13, 2) = ((MR_Box) (ProcInfo_9));
    MR_hl_field(0, Background_13, 3) = ((MR_Box) (SharingTable_10));
    MR_hl_field(0, Background_13, 4) = (MR_Box) ((MR_Unsigned) (VeryVerbose_28));
  }
  Var_18 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
  Var_19 = transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_init_0_f_0();
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_13, Goal_11, Var_18, &Var_14, Var_19, DeadCellTable_12);
  VeryVerbose_15 = ((MR_Unsigned) ((MR_hl_field(0, Background_13, 4))) & (MR_Integer) 1);
  switch (VeryVerbose_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StdErr_17;

        mercury__io__stderr_stream_3_p_0(&StdErr_17);
        mercury__io__nl_3_p_0(StdErr_17);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_SharingAs_15;
  MR_Word conv9_STATE_VARIABLE_DeadCellTable_17;

  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_SharingAs_15, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_DeadCellTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_SharingAs_15));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_DeadCellTable_17));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_80;

  conv8_LambdaHeadVar__2_80 = transform_hlds__ctgc__structure_reuse__direct_detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__152__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_80));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_SharingAs_15;
  MR_Word conv4_STATE_VARIABLE_DeadCellTable_17;

  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_SharingAs_15, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_DeadCellTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_SharingAs_15));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_DeadCellTable_17));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SharingAs_15;
  MR_Word conv0_STATE_VARIABLE_DeadCellTable_17;

  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SharingAs_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DeadCellTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SharingAs_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DeadCellTable_17));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(
  MR_Word Background_7,
  MR_Word TopGoal_8,
  MR_Word STATE_VARIABLE_SharingAs_0_61,
  MR_Word * STATE_VARIABLE_SharingAs_62,
  MR_Word STATE_VARIABLE_DeadCellTable_0_63,
  MR_Word * STATE_VARIABLE_DeadCellTable_64)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, TopGoal_8, 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, TopGoal_8, 1))));
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, Background_7, 0))));
    MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(0, Background_7, 1))));
    MR_Word ProcInfo_15 = ((MR_Word) ((MR_hl_field(0, Background_7, 2))));
    MR_Word SharingTable_16 = ((MR_Word) ((MR_hl_field(0, Background_7, 3))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_SharingAs_62 = STATE_VARIABLE_SharingAs_0_61;
          *STATE_VARIABLE_DeadCellTable_64 = STATE_VARIABLE_DeadCellTable_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, 3))));
          MR_Word Var_70;

          Var_70 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_12);
          transform_hlds__ctgc__structure_reuse__direct_detect_garbage__unification_verify_reuse_8_p_0(ModuleInfo_13, ProcInfo_15, GoalInfo_12, Unification_33, Var_70, STATE_VARIABLE_SharingAs_0_61, STATE_VARIABLE_DeadCellTable_0_63, STATE_VARIABLE_DeadCellTable_64);
          *STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(ModuleInfo_13, ProcInfo_15, Unification_33, GoalInfo_12, STATE_VARIABLE_SharingAs_0_61);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, 0))));
          MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_11, 1))));
          MR_Word ActualVars_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, 2))));

          transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(ModuleInfo_13, PredInfo_14, ProcInfo_15, SharingTable_16, PredId_19, ProcId_20, ActualVars_21, STATE_VARIABLE_SharingAs_0_61, STATE_VARIABLE_SharingAs_62);
          *STATE_VARIABLE_DeadCellTable_64 = STATE_VARIABLE_DeadCellTable_0_63;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenDetails_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word CallArgs_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word Modes_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));

              transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(ModuleInfo_13, ProcInfo_15, GenDetails_25, CallArgs_26, Modes_27, GoalInfo_12, STATE_VARIABLE_SharingAs_0_61, STATE_VARIABLE_SharingAs_62);
              *STATE_VARIABLE_DeadCellTable_64 = STATE_VARIABLE_DeadCellTable_0_63;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word ForeignPredId_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Integer ForeignProcId_53 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word Args_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
              MR_Word ForeignPPId_58;
              MR_Word Context_59;

              {
                ForeignPPId_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ForeignPPId_58, 0) = ((MR_Box) (ForeignPredId_52));
                MR_hl_field(0, ForeignPPId_58, 1) = ((MR_Box) (ForeignProcId_53));
              }
              Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
              transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(ModuleInfo_13, PredInfo_14, ProcInfo_15, ForeignPPId_58, Attributes_51, Args_54, Context_59, STATE_VARIABLE_SharingAs_0_61, STATE_VARIABLE_SharingAs_62);
              *STATE_VARIABLE_DeadCellTable_64 = STATE_VARIABLE_DeadCellTable_0_63;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word Var_65;
              MR_Box conv3_STATE_VARIABLE_SharingAs_62;
              MR_Box conv2_STATE_VARIABLE_DeadCellTable_64;

              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_65, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_2[0]));
                MR_hl_field(0, Var_65, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_1));
                MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_65, 3) = ((MR_Box) (Background_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[0]), Var_65, Goals_18, ((MR_Box) (STATE_VARIABLE_SharingAs_0_61)), &conv3_STATE_VARIABLE_SharingAs_62, ((MR_Box) (STATE_VARIABLE_DeadCellTable_0_63)), &conv2_STATE_VARIABLE_DeadCellTable_64);
              *STATE_VARIABLE_SharingAs_62 = ((MR_Word) (conv3_STATE_VARIABLE_SharingAs_62));
              *STATE_VARIABLE_DeadCellTable_64 = ((MR_Word) (conv2_STATE_VARIABLE_DeadCellTable_64));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word Var_121;
              MR_Box conv7_STATE_VARIABLE_SharingAs_62;
              MR_Box conv6_STATE_VARIABLE_DeadCellTable_64;

              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_121, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_3[0]));
                MR_hl_field(0, Var_121, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_2));
                MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_121, 3) = ((MR_Box) (Background_7));
                MR_hl_field(0, Var_121, 4) = ((MR_Box) (STATE_VARIABLE_SharingAs_0_61));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[0]), Var_121, Goals_91, ((MR_Box) (STATE_VARIABLE_SharingAs_0_61)), &conv7_STATE_VARIABLE_SharingAs_62, ((MR_Box) (STATE_VARIABLE_DeadCellTable_0_63)), &conv6_STATE_VARIABLE_DeadCellTable_64);
              *STATE_VARIABLE_SharingAs_62 = ((MR_Word) (conv7_STATE_VARIABLE_SharingAs_62));
              *STATE_VARIABLE_DeadCellTable_64 = ((MR_Word) (conv6_STATE_VARIABLE_DeadCellTable_64));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word Var_75;
              MR_Word Var_125;
              MR_Box conv12_STATE_VARIABLE_SharingAs_62;
              MR_Box conv11_STATE_VARIABLE_DeadCellTable_64;

              Var_75 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[2]), Cases_37);
              {
                Var_125 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_125, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_3[0]));
                MR_hl_field(0, Var_125, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0_4));
                MR_hl_field(0, Var_125, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_125, 3) = ((MR_Box) (Background_7));
                MR_hl_field(0, Var_125, 4) = ((MR_Box) (STATE_VARIABLE_SharingAs_0_61));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_detect_garbage_scalar_common_1[0]), Var_125, Var_75, ((MR_Box) (STATE_VARIABLE_SharingAs_0_61)), &conv12_STATE_VARIABLE_SharingAs_62, ((MR_Box) (STATE_VARIABLE_DeadCellTable_0_63)), &conv11_STATE_VARIABLE_DeadCellTable_64);
              *STATE_VARIABLE_SharingAs_62 = ((MR_Word) (conv12_STATE_VARIABLE_SharingAs_62));
              *STATE_VARIABLE_DeadCellTable_64 = ((MR_Word) (conv11_STATE_VARIABLE_DeadCellTable_64));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word SubGoal_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word Var_81;

              succeeded = ((((MR_tag((MR_Word) Reason_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_41, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_81 = ((MR_Unsigned) ((MR_hl_field(3, Reason_41, 2))) & (MR_Integer) 3);
                succeeded = (Var_81 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *STATE_VARIABLE_DeadCellTable_64 = STATE_VARIABLE_DeadCellTable_0_63;
                *STATE_VARIABLE_SharingAs_62 = STATE_VARIABLE_SharingAs_0_61;
              }
              else
              {
                MR_Word next_value_of_TopGoal_8 = SubGoal_42;

                // direct tailcall eliminated
                ;
                TopGoal_8 = next_value_of_TopGoal_8;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word ThenGoal_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word ElseGoal_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
              MR_Word CondSharingAs_48;
              MR_Word ThenSharingAs_49;
              MR_Word ElseSharingAs_50;
              MR_Word STATE_VARIABLE_DeadCellTable_6_84;
              MR_Word STATE_VARIABLE_DeadCellTable_7_85;

              transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_7, CondGoal_45, STATE_VARIABLE_SharingAs_0_61, &CondSharingAs_48, STATE_VARIABLE_DeadCellTable_0_63, &STATE_VARIABLE_DeadCellTable_6_84);
              transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_7, ThenGoal_46, CondSharingAs_48, &ThenSharingAs_49, STATE_VARIABLE_DeadCellTable_6_84, &STATE_VARIABLE_DeadCellTable_7_85);
              transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_2_6_p_0(Background_7, ElseGoal_47, STATE_VARIABLE_SharingAs_0_61, &ElseSharingAs_50, STATE_VARIABLE_DeadCellTable_7_85, STATE_VARIABLE_DeadCellTable_64);
              *STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(ModuleInfo_13, ProcInfo_15, ThenSharingAs_49, ElseSharingAs_50);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct_detect_garbage.determine_dead_deconstructions_2\'/6", (MR_String) "shorthand");
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
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__unification_verify_reuse_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GoalInfo_11,
  MR_Word Unification_12,
  MR_Word PP_13,
  MR_Word Sharing_14,
  MR_Word STATE_VARIABLE_DeadCellTable_0_44,
  MR_Word * STATE_VARIABLE_DeadCellTable_45)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_DeadCellTable_45 = STATE_VARIABLE_DeadCellTable_0_44;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, Unification_12, 0))));
        MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(1, Unification_12, 1))));
        MR_Word LFU_22;
        MR_Word LBU_23;
        MR_Integer Arity_25;
        MR_Word VarTable_27;
        MR_Word Type_28;
        MR_Word Var_46;
        MR_Word LiveData_50;
        MR_Word NotLive_51;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_60;

        LFU_22 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo_11);
        LBU_23 = transform_hlds__ctgc__util__goal_info_get_lbu_1_f_0(GoalInfo_11);
        succeeded = ((MR_tag((MR_Word) ConsId_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_46 = (MR_Word) (MR_body((MR_Word) (ConsId_17), (MR_Integer) 1));
          Arity_25 = ((MR_Integer) ((MR_hl_field(0, Var_46, 1))));
          succeeded = (Arity_25 != (MR_Integer) 0);
          if (succeeded)
          {
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_27);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_27, Var_16, &Type_28);
            succeeded = hlds__type_util__type_is_no_tag_type_2_p_0(ModuleInfo_9, Type_28);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(Sharing_14);
              succeeded = !(succeeded);
              if (succeeded)
              {
                LiveData_50 = transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(ModuleInfo_9, VarTable_27, GoalInfo_11, Sharing_14);
                Var_55 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(Var_16);
                Var_56 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
                }
                transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(ModuleInfo_9, VarTable_27, Var_54, LiveData_50, &NotLive_51);
                succeeded = (NotLive_51 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_60 = ((MR_Word) ((MR_hl_field(1, NotLive_51, 0))));
                  succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word NewCondition_29;

          NewCondition_29 = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0(ModuleInfo_9, ProcInfo_10, Var_16, LFU_22, LBU_23, Sharing_14);
          transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_set_4_p_0(PP_13, NewCondition_29, STATE_VARIABLE_DeadCellTable_0_44, STATE_VARIABLE_DeadCellTable_45);
        }
        else
          *STATE_VARIABLE_DeadCellTable_45 = STATE_VARIABLE_DeadCellTable_0_44;
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DeadCellTable_45 = STATE_VARIABLE_DeadCellTable_0_44;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeadCellTable_45 = STATE_VARIABLE_DeadCellTable_0_44;
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct_detect_garbage.unification_verify_reuse\'/8", (MR_String) "complicated_unify");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GenDetails_11,
  MR_Word CallArgs_12,
  MR_Word Modes_13,
  MR_Word GoalInfo_14,
  MR_Word STATE_VARIABLE_SharingAs_0_32,
  MR_Word * STATE_VARIABLE_SharingAs_33)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenDetails_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word CallerVarTable_25;
        MR_Word ActualTypes_26;

        hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &CallerVarTable_25);
        parse_tree__var_table__lookup_var_types_3_p_0(CallerVarTable_25, CallArgs_12, &ActualTypes_26);
        succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(ModuleInfo_9, Modes_13, ActualTypes_26);
        if (succeeded)
          *STATE_VARIABLE_SharingAs_33 = STATE_VARIABLE_SharingAs_0_32;
        else
        {
          MR_Word Context_40;
          MR_String ContextStr_41;
          MR_Word Var_42;
          MR_String Var_43;
          MR_String Var_45;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
          ContextStr_41 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_40);
          Var_45 = mercury__string__f_43_43_2_f_0(ContextStr_41, (MR_String) ")");
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_45);
          {
            Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
          }
          *STATE_VARIABLE_SharingAs_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_42, STATE_VARIABLE_SharingAs_0_32);
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Word Context_30;
        MR_String ContextStr_31;
        MR_Word Var_35;
        MR_String Var_36;
        MR_String Var_38;

        Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
        ContextStr_31 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_30);
        Var_38 = mercury__string__f_43_43_2_f_0(ContextStr_31, (MR_String) ")");
        Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_38);
        {
          Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_35, 0) = ((MR_Box) (Var_36));
        }
        *STATE_VARIABLE_SharingAs_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_35, STATE_VARIABLE_SharingAs_0_32);
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Unify____detect_bg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct_detect_garbage____Compare____detect_bg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct_detect_garbage__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__type_ctor_info_detect_bg_info_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__direct_detect_garbage__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.direct_detect_garbage.
