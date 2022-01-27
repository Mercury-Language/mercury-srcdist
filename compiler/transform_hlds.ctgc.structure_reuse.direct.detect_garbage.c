/*
** Automatically generated from `structure_reuse.direct.detect_garbage.m'
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


/* :- module transform_hlds.ctgc.structure_reuse.direct.detect_garbage. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0[5];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_stag_ordered_detect_bg_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_ptag_ordered_detect_bg_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_name_ordered_detect_bg_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__functor_number_map_detect_bg_info_0[1];

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__140__1_1_f_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__1_80);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_11,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PP_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Sharing_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GenDetails_11,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallArgs_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Modes_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_31,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_32);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingBeforeDisj_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goal_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_15,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_11,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_14);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_16);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_2[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_4[1][10];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0[5] = {
  (MR_String) "dbgi_module_info",
  (MR_String) "dbgi_pred_info",
  (MR_String) "dbgi_proc_info",
  (MR_String) "dbgi_sharing_table",
  (MR_String) "dbgi_very_verbose"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0 = {
  (MR_String) "detect_bg_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_stag_ordered_detect_bg_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_ptag_ordered_detect_bg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_stag_ordered_detect_bg_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_name_ordered_detect_bg_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__functor_number_map_detect_bg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
  (MR_String) "detect_bg_info",
  {     transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_name_ordered_detect_bg_info_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_ptag_ordered_detect_bg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__functor_number_map_detect_bg_info_0
};

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2));
    }
    return transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3));
    }
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__140__1_1_f_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__1_80)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__1_80, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__1_80, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__1_80, (MR_Integer) 1)));

    return transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LambdaHeadVar__2_81;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Compare____detect_bg_info_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3;

    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastX_18 == transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastY_19);
    if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
      *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_4_4, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_9_9);
        }
        transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14 == (MR_Integer) 0);
        transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
        if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
          *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14;
        else
          {
            MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15;

            {
              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_5_5, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_10_10);
            }
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15 == (MR_Integer) 0);
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
            if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
              *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15;
            else
              {
                MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_16_16;

                {
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_16_16, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_6_6, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_11_11);
                }
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_16_16 == (MR_Integer) 0);
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
                if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                  *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_16_16;
                else
                  {
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[1], &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_12_12)));
                    }
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17 == (MR_Integer) 0);
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
                    if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                      *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17;
                    else
                      {
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_25_25 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_8_8;
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_26_26 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_13_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_25_25, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_26_26);
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage____Unify____detect_bg_info_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1;
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2;

    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastX_13 == transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CastY_14);
    if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TypeInfo_18_18;
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_3_3, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_8_8);
        }
        if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
          {
            {
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_4_4, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_9_9);
            }
            if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
              {
                {
                  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_5_5, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_10_10);
                }
                if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TypeInfo_18_18 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[1];
                    {
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TypeInfo_18_18, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_11_11)));
                    }
                    if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_7_7 == transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_12_12);
                  }
              }
          }
      }
    return transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_11,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PP_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Sharing_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44;
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 0)));
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 1)));
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LFU_22;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LBU_23;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 2)));
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 3)));
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 4)));
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 5)));
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Arity_25;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VarTypes_27;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Type_28;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LiveData_55;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NotLive_56;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_59_59;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_60_60;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_61_61;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_65_65;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_26_26;

          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LFU_22 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_11);
          }
          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LBU_23 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_11);
          }
          transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
            {
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17, (MR_Integer) 1)));
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17, (MR_Integer) 2)));
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ConsId_17, (MR_Integer) 3)));
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Arity_25 == (MR_Integer) 0);
              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
              if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                {
                  {
                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VarTypes_27);
                  }
                  {
                    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VarTypes_27, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Var_16, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Type_28);
                  }
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = check_hlds__type_util__type_is_no_tag_type_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Type_28);
                  }
                  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
                  if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                    {
                      {
                        transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Sharing_14);
                      }
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded);
                      if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                        {
                          {
                            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LiveData_55 = transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_11, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Sharing_14);
                          }
                          {
                            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_60_60 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Var_16);
                          }
                          transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_59_59, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_60_60));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_59_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_61_61));
                          }
                          {
                            transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_59_59, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LiveData_55, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NotLive_56);
                          }
                          transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NotLive_56)) == (MR_mktag((MR_Integer) 1)));
                          if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                            {
                              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NotLive_56, (MR_Integer) 0)));
                              transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                }
            }
          if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
            {
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NewCondition_29;

              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NewCondition_29 = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Var_16, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LFU_22, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__LBU_23, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Sharing_14);
              }
              {
                transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PP_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__NewCondition_29, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45);
              }
            }
          else
            *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44;
        }
        break;
      case (MR_Integer) 2:
        *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_45 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_44;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.detect_garbage", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.detect_garbage.unification_verify_reuse\'/8", (MR_String) "complicated_unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GenDetails_11,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallArgs_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Modes_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_31,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_32)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GenDetails_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallerVarTypes_24;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ActualTypes_25;

          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_10, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallerVarTypes_24);
          }
          {
            hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallerVarTypes_24, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallArgs_12, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ActualTypes_25);
          }
          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Modes_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ActualTypes_25);
          }
          if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
            *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_32 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_31;
          else
            {
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_39;
              MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_40;
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_41_41;
              MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_42_42;
              MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_44_44;

              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_14);
              }
              {
                parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_39, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_40);
              }
              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_44_44 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_40, (MR_String) ")");
              }
              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_44_44);
              }
              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_41_41, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_42_42));
              }
              {
                *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_32 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_41_41, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_31);
              }
            }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_29;
          MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_30;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_34_34;
          MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_35_35;
          MR_String transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_37_37;

          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_14);
          }
          {
            parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_29, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_30);
          }
          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_37_37 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ContextString_30, (MR_String) ")");
          }
          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_37_37);
          }
          {
            transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_34_34, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_35_35));
          }
          {
            *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_32 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_34_34, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_31);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingBeforeDisj_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goal_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_15,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_16,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_17)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalSharing_13;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_20_20;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_22_22;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_25_25;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goal_10, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingBeforeDisj_9, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalSharing_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_16, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_17);
    }
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, (MR_Integer) 1)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, (MR_Integer) 2)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, (MR_Integer) 3)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_8, (MR_Integer) 4)));
    {
      *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_15 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_20_20, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalSharing_13);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_15;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_17;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_15, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_17);
    }
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_15));
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_11,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_14)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_12;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_14;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_11));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_15_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_11)), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_14);
    }
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_12);
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_14);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_14,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_16)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 4)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 3)));

    switch (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_char_3_p_0((MR_Char) 46);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_16);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv4_LambdaHeadVar__2_81;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv4_LambdaHeadVar__2_81 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__140__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1));
    }
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv4_LambdaHeadVar__2_81));
    return transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_14;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_16;

    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_14, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_16);
    }
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv1_STATE_VARIABLE_SharingAs_14));
    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv0_STATE_VARIABLE_DeadCellTable_16));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 0)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, (MR_Integer) 4)));

        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61;
              *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_84_84;
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 0)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 4)));

              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_84_84 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12);
              }
              {
                transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_33, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_84_84, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64);
              }
              {
                *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Unification_33, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 0)));
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ActualVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 4)));
              MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 5)));

              {
                transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredInfo_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingTable_16, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredId_19, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcId_20, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ActualVars_21, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62);
              }
              *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GenDetails_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Modes_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage___MaybeArgRegs_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage___Detism_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 5)));

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GenDetails_25, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CallArgs_26, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Modes_27, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62);
                  }
                  *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Attributes_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
                  MR_Integer transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPPId_58;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_59;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage___ExtraArgs_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 5)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage___MaybeTraceRuntimeCond_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 6)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage___Impl_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 7)));

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPPId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPPId_58, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPredId_52));
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPPId_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignProcId_53));
                  }
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalInfo_12);
                  }
                  {
                    transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredInfo_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ForeignPPId_58, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Attributes_51, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Args_54, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Context_59, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62);
                  }
                  *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
                  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_62;
                  MR_Box transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_64;

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0_1));
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7));
                  }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_89_89, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_18, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61)), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_62, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63)), &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_64);
                  }
                  *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv3_STATE_VARIABLE_SharingAs_62);
                  *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__conv2_STATE_VARIABLE_DeadCellTable_64);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goals_92, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Cases_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_76_76;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_76_76 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__detect_garbage_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Cases_37);
                  }
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_76_76, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SubGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_73_73;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_43_43;

                  transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                    {
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Reason_41, (MR_Integer) 1)));
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Reason_41, (MR_Integer) 2)));
                      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded = (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_73_73 == (MR_Integer) 1);
                    }
                  if (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded)
                    {
                      *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63;
                      *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal__tmp_copy_8 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SubGoal_42;

                        transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal_8 = transform_hlds__ctgc__structure_reuse__direct__detect_garbage__TopGoal__tmp_copy_8;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CondGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ThenGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ElseGoal_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CondSharingAs_48;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ThenSharingAs_49;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ElseSharingAs_50;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_69_69;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_70_70;
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__GoalExpr_11, (MR_Integer) 1)));

                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CondGoal_45, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CondSharingAs_48, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_0_63, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_69_69);
                  }
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ThenGoal_46, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__CondSharingAs_48, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ThenSharingAs_49, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_69_69, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_70_70);
                  }
                  {
                    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_7, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ElseGoal_47, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_0_61, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ElseSharingAs_50, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_70_70, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_DeadCellTable_64);
                  }
                  {
                    *transform_hlds__ctgc__structure_reuse__direct__detect_garbage__STATE_VARIABLE_SharingAs_62 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_15, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ThenSharingAs_49, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ElseSharingAs_50);
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.detect_garbage", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.detect_garbage.determine_dead_deconstructions_2\'/6", (MR_String) "shorthand");
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

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredInfo_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingTable_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goal_11,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__detect_garbage__DeadCellTable_12)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__detect_garbage__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_15;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_18_18;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Globals_30;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_31;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_21_21;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_22_22;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_7, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Globals_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Globals_30, (MR_Integer) 48, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_31);
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__PredInfo_8));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__ProcInfo_9));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__SharingTable_10));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_31));
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_18_18 = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_f_0();
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Goal_11, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_17_17, &transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_14_14, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_18_18, transform_hlds__ctgc__structure_reuse__direct__detect_garbage__DeadCellTable_12);
    }
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, (MR_Integer) 1)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, (MR_Integer) 2)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, (MR_Integer) 3)));
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__detect_garbage__Background_13, (MR_Integer) 4)));
    switch (transform_hlds__ctgc__structure_reuse__direct__detect_garbage__VeryVerbose_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__nl_2_p_0();
        }
        break;
    }
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__detect_garbage__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.direct.detect_garbage. */
