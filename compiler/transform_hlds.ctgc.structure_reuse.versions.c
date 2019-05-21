/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.versions.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module transform_hlds.ctgc.structure_reuse.versions. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__versions__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.versions.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0[2];

static const MR_Integer transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0[2];

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__Case0_9,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__Case_10);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_12,
  MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_13,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredName_14,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16,
  MR_Integer * transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_7,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_9,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[3][8];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0 = {
  (MR_String) "convert_potential_reuse",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1 = {
  (MR_String) "leave_potential_reuse",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0[2] = {
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0[2] = {
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
  &transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "convert_potential_reuse",
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0 },
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "reuse_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3;

    {
      mdbcomp__sym_name____Compare____sym_name_0_0(transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;

    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_3, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_4);
    }
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3)
{
  {
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__versions__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__versions__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__versions__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_1 == transform_hlds__ctgc__structure_reuse__versions__HeadVar__2_2);

    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__Case0_9,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__Case_10)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Case0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_14;

    {
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseMap_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__Goal0_13, &transform_hlds__ctgc__structure_reuse__versions__Goal_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ctgc__structure_reuse__versions__Case_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goal_14));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Globals_10;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OpMode_12;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_17;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_18;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__ctgc__structure_reuse__versions__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Globals_10, (MR_Integer) 337, &transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11);
    }
    {
      libs__globals__get_op_mode_2_p_0(transform_hlds__ctgc__structure_reuse__versions__Globals_10, &transform_hlds__ctgc__structure_reuse__versions__OpMode_12);
    }
    transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__IntermodAnalysis_11 == (MR_Integer) 1);
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__OpMode_12)) == (MR_mktag((MR_Integer) 3)));
      if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
      {
        transform_hlds__ctgc__structure_reuse__versions__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__OpMode_12, (MR_Integer) 0)));
        transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
        {
          transform_hlds__ctgc__structure_reuse__versions__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__Var_17, (MR_Integer) 0)));
          transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        }
      }
      transform_hlds__ctgc__structure_reuse__versions__succeeded = !(transform_hlds__ctgc__structure_reuse__versions__succeeded);
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      MR_Word transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13;

      {
        transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, &transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13);
      }
      switch (transform_hlds__ctgc__structure_reuse__versions__IsHarsher_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
          }
          break;
        case (MR_Integer) 1:
          {
            {
              transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
            }
          }
          break;
      }
    }
    else
      {
        transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ReusePPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
      }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredStatus_13;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_23;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_14;

    {
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "(reuse version) ", transform_hlds__ctgc__structure_reuse__versions__PPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ctgc__structure_reuse__versions__PPId_8, &transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, &transform_hlds__ctgc__structure_reuse__versions__PredStatus_13);
    }
    transform_hlds__ctgc__structure_reuse__versions__Var_23 = (MR_Word) transform_hlds__ctgc__structure_reuse__versions__PredStatus_13;
    transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Var_23)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__Var_23, (MR_Integer) 0)));
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17;
    }
    else
    {
      MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal0_15;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_16;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_24_24;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_26_26;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_29_29;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_28_31;

      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__ctgc__structure_reuse__versions__Goal0_15);
      }
      {
        transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ctgc__structure_reuse__versions__Goal0_15, &transform_hlds__ctgc__structure_reuse__versions__Goal_16);
      }
      {
        hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Goal_16, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_24_24);
      }
      {
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_26_26);
      }
      {
        check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_26_26, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_28_31, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_17, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_29_29);
      }
      {
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_8, transform_hlds__ctgc__structure_reuse__versions__PredInfo0_12, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_28_31, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_29_29, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_18);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10;

    {
      transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv2_Case_10));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70;

    {
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_Goal_70));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70;

    {
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_Goal_70));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108;
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));

          {
            transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11);
          }
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, (MR_Integer) 0)));

                switch (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification_42;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_119;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_120;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_121;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_123;
                      MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_122;

                      {
                        transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_154));
                      }
                      {
                        transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Var_154, transform_hlds__ctgc__structure_reuse__versions__Unification0_39, &transform_hlds__ctgc__structure_reuse__versions__Unification_42);
                      }
                      transform_hlds__ctgc__structure_reuse__versions__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
                      transform_hlds__ctgc__structure_reuse__versions__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
                      transform_hlds__ctgc__structure_reuse__versions__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
                      transform_hlds__ctgc__structure_reuse__versions__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
                      transform_hlds__ctgc__structure_reuse__versions__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
                      {
                        transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_119));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_120));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_121));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Unification_42));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_123));
                      }
                      {
                        hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_102, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_101));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_103));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Descr_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, (MR_Integer) 0)));
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Unification_145;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_134;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_135;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_136;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_138;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_133;

                {
                  transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Descr_144, transform_hlds__ctgc__structure_reuse__versions__Unification0_39, &transform_hlds__ctgc__structure_reuse__versions__Unification_145);
                }
                transform_hlds__ctgc__structure_reuse__versions__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
                transform_hlds__ctgc__structure_reuse__versions__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
                transform_hlds__ctgc__structure_reuse__versions__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
                transform_hlds__ctgc__structure_reuse__versions__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
                transform_hlds__ctgc__structure_reuse__versions__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
                {
                  transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_134));
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_135));
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_136));
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Unification_145));
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_138));
                }
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_108, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_146));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_148));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)));
          MR_Integer transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__BI_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__UC_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 5)));
          MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22;
          MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24;
          MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_82;
          MR_Word transform_hlds__ctgc__structure_reuse__versions___CondDescr_23;

          {
            transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11);
          }
          transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22)) == (MR_mktag((MR_Integer) 3)));
          if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
          {
            transform_hlds__ctgc__structure_reuse__versions__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22, (MR_Integer) 0)));
            transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Var_82)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
            {
              transform_hlds__ctgc__structure_reuse__versions___CondDescr_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__Var_82, (MR_Integer) 0)));
              transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__Var_82, (MR_Integer) 1)));
            }
          }
          if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
          {
            MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25;
            MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89;

            {
              transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16, transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17, transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_24, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27);
            }
            {
              transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_25));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_26));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Args_18));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__BI_19));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__UC_20));
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_89));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
            }
          }
          else
          {
            MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_84;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__CondDescr_28;

            transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6 == (MR_Integer) 0);
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
            {
              transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22)) == (MR_mktag((MR_Integer) 2)));
              if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
              {
                transform_hlds__ctgc__structure_reuse__versions__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription0_22, (MR_Integer) 0)));
                transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Var_84)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
                {
                  transform_hlds__ctgc__structure_reuse__versions__CondDescr_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__Var_84, (MR_Integer) 0)));
                  transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__Var_84, (MR_Integer) 1)));
                }
              }
            }
            if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91;
              MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93;

              {
                transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__CalleePredId_16, transform_hlds__ctgc__structure_reuse__versions__CalleeProcId_17, transform_hlds__ctgc__structure_reuse__versions__CalleePredName_21, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_95, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92, &transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredId_91));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleeProcId_92));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Args_18));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__BI_19));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__UC_20));
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseCalleePredName_93));
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_84));
              }
              {
                hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseDescription_29, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_90));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_30));
              }
            }
            else
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
            break;
          case (MR_Integer) 1:
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals_14;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_87;

              {
                transform_hlds__ctgc__structure_reuse__versions__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_87, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
              }
              transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_126_126, transform_hlds__ctgc__structure_reuse__versions__Var_87, transform_hlds__ctgc__structure_reuse__versions__Goals0_13, &transform_hlds__ctgc__structure_reuse__versions__Goals_14);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConjType_12));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goals_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_15));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_79;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Goals_112;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113;

              {
                transform_hlds__ctgc__structure_reuse__versions__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_79, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
              }
              transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_129_129, transform_hlds__ctgc__structure_reuse__versions__Var_79, transform_hlds__ctgc__structure_reuse__versions__Goals0_111, &transform_hlds__ctgc__structure_reuse__versions__Goals_112);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Goals_112));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_113));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__A_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__B_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Cases0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Cases_48;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_77;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114;

              {
                transform_hlds__ctgc__structure_reuse__versions__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_77, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8));
              }
              transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_132_132, transform_hlds__ctgc__structure_reuse__versions__Var_77, transform_hlds__ctgc__structure_reuse__versions__Cases0_47, &transform_hlds__ctgc__structure_reuse__versions__Cases_48);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__A_45));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__B_46));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Cases_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_114));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__SubGoal0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_75;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_52;

              transform_hlds__ctgc__structure_reuse__versions__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
              {
                transform_hlds__ctgc__structure_reuse__versions__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 1)));
                transform_hlds__ctgc__structure_reuse__versions__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Reason_50, (MR_Integer) 2)));
                transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__Var_75 == (MR_Integer) 1);
              }
              if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_0_69;
              else
              {
                MR_Word transform_hlds__ctgc__structure_reuse__versions__SubGoal_53;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115;

                {
                  transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__SubGoal0_51, &transform_hlds__ctgc__structure_reuse__versions__SubGoal_53);
                }
                {
                  transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Reason_50));
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__SubGoal_53));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_115));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__ctgc__structure_reuse__versions__Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__IfGoal0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ThenGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ElseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word transform_hlds__ctgc__structure_reuse__versions__IfGoal_58;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60;
              MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118;

              {
                transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__IfGoal0_55, &transform_hlds__ctgc__structure_reuse__versions__IfGoal_58);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__ThenGoal0_56, &transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(transform_hlds__ctgc__structure_reuse__versions__ConvertPotentialReuse_6, transform_hlds__ctgc__structure_reuse__versions__ReuseTable_7, transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__versions__ElseGoal0_57, &transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60);
              }
              {
                transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Vars_54));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__IfGoal_58));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ThenGoal_59));
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ElseGoal_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_118));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.process_goal\'/5", (MR_String) "shorthand");
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
transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_12,
  MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_13,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PredName_14,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16,
  MR_Integer * transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Result_19;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_23;

    {
      transform_hlds__ctgc__structure_reuse__versions__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_23, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_12));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcId_13));
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseTable_10, transform_hlds__ctgc__structure_reuse__versions__Var_23, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_15, &transform_hlds__ctgc__structure_reuse__versions__Result_19);
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20;
      MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleName_21;
      MR_String transform_hlds__ctgc__structure_reuse__versions__Name_22;

      *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Result_19, (MR_Integer) 0)));
      *transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Result_19, (MR_Integer) 1)));
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ModuleInfo_11, *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16, &transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
      }
      {
        transform_hlds__ctgc__structure_reuse__versions__ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
      }
      {
        transform_hlds__ctgc__structure_reuse__versions__Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_20);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ModuleName_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Name_22));
      }
    }
    else
    {
      *transform_hlds__ctgc__structure_reuse__versions__ReusePredId_16 = transform_hlds__ctgc__structure_reuse__versions__PredId_12;
      *transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_17 = transform_hlds__ctgc__structure_reuse__versions__ProcId_13;
      *transform_hlds__ctgc__structure_reuse__versions__ReusePredName_18 = transform_hlds__ctgc__structure_reuse__versions__PredName_14;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15)) == (MR_mktag((MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__DeadVar_7;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_18;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_19;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_20;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_21;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_22;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_23;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_8;

    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 0)));
      transform_hlds__ctgc__structure_reuse__versions__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 1)));
      transform_hlds__ctgc__structure_reuse__versions__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 2)));
      transform_hlds__ctgc__structure_reuse__versions__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 3)));
      transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 4)));
      transform_hlds__ctgc__structure_reuse__versions__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 5)));
      transform_hlds__ctgc__structure_reuse__versions__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15, (MR_Integer) 6)));
      transform_hlds__ctgc__structure_reuse__versions__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
      {
        transform_hlds__ctgc__structure_reuse__versions__DeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 0)));
        transform_hlds__ctgc__structure_reuse__versions__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 1)));
        transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 2)));
        transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__ShortReuseDescription_4, (MR_Integer) 3)));
      }
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__versions__HowToConstruct0_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13;
                MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14;

                {
                  transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__DeadVar_7));
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9));
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10));
                }
                transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_18));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_19));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_20));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_21));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_22));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_23));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14;

            {
              transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__DeadVar_7));
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9));
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10));
            }
            transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_18));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_19));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_20));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_21));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_22));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_23));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13;
            MR_Word transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14;

            {
              transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__DeadVar_7));
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PossibleConsIds_9));
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__CellsToUpdate_10));
            }
            transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__ctgc__structure_reuse__versions__CellToReuse_13);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_18));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_19));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_20));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_21));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HowToConstruct_14));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_22));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_23));
            }
          }
          break;
      }
    else
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_Unification_0_15;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_7,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_12;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13;

    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, &transform_hlds__ctgc__structure_reuse__versions__Var_12);
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "procedure already exists");
        return;
      }
    }
    else
    {
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, transform_hlds__ctgc__structure_reuse__versions__PPId_7, &transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13);
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22;

      {
        transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(*transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_13, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_16, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22);
      }
      {
        transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_7, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_11, *transform_hlds__ctgc__structure_reuse__versions__NewPPId_8, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_22_22, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_17);
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "no reuse information");
        return;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_9,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__ReuseAs_Status_10, (MR_Integer) 1)));

    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9)));
    }
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
      *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15;
    }
    else
    {
      {
        transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
      }
      if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15));
        }
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
      }
      else
      {
        {
          transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
        }
        if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PPId_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17));
          }
        else
        {
          {
            transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__versions__ReuseAs_13);
          }
          if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
          {
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.versions", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.divide_reuse_procs\'/7", (MR_String) "conditions failed");
              return;
            }
          }
          *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_18 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_UncondPPIds_0_17;
        }
        *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_16 = transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_CondPPIds_0_15;
      }
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_5,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_5, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_5, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12;
    MR_String transform_hlds__ctgc__structure_reuse__versions__OldPredName_13;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Determinism_14;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NewPPId_15;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Body_18;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__HeadVars_21;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Goal_24;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_32;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_19;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25, transform_hlds__ctgc__structure_reuse__versions__PPId_5, &transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10, &transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__OldPredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__OldPredInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ctgc__structure_reuse__versions__OldProcInfo_11, &transform_hlds__ctgc__structure_reuse__versions__Determinism_14);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(transform_hlds__ctgc__structure_reuse__versions__PPId_5, transform_hlds__ctgc__structure_reuse__versions__NoClobbers_6, &transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_25, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__Body_18);
    }
    transform_hlds__ctgc__structure_reuse__versions__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Body_18, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Body_18, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__HeadVars_21);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__Var_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OldPredModule_12));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__Var_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__OldPredName_13));
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_8));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcId_9));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__HeadVars_21));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__Var_32));
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Determinism_14, transform_hlds__ctgc__structure_reuse__versions__GoalInfo0_20, &transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__Goal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Goal_24, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalExpr_22));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Goal_24, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__GoalInfo_23));
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__versions__Goal_24, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__versions__NewPPId_15, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_PredInfo_28_28, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ProcInfo_33_33, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_26);
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__PPId_6,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__NoClobbers_7,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__NewPPId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredId_13;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15;
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredTable0_18;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredTable_19;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24;
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcId_32;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredInfo_33;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredModule_35;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36;
    MR_String transform_hlds__ctgc__structure_reuse__versions__PredName_37;
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__ProcInt_38;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_40;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_41;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ModuleName_48;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProgContext_50;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredStatus0_52;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredStatus_53;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__MerTypes_55;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TVarset_56;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__AssertIds_59;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_31;
    MR_Word transform_hlds__ctgc__structure_reuse__versions___ProcInfo_34;
    MR_Integer transform_hlds__ctgc__structure_reuse__versions__Var_14;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_62;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__versions__PPId_6, &transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11);
    }
    transform_hlds__ctgc__structure_reuse__versions__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__versions__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 1)));
    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__versions__PPId_6, &transform_hlds__ctgc__structure_reuse__versions__PredInfo_33, &transform_hlds__ctgc__structure_reuse__versions___ProcInfo_34);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo_33);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__ctgc__structure_reuse__versions__ProcId_32, &transform_hlds__ctgc__structure_reuse__versions__ProcInt_38);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__versions__Var_40, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_36));
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Var_41, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ProcInt_38));
      MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__versions__Var_41, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__NoClobbers_7));
    }
    {
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__ctgc__structure_reuse__versions__PredModule_35, (MR_String) "ctgc", transform_hlds__ctgc__structure_reuse__versions__Var_40, transform_hlds__ctgc__structure_reuse__versions__PredName_37, transform_hlds__ctgc__structure_reuse__versions__Var_41, &transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12);
    }
    transform_hlds__ctgc__structure_reuse__versions__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__versions__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__PPId_6, (MR_Integer) 1)));
    {
      transform_hlds__ctgc__structure_reuse__versions__ModuleName_48 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProgContext_50);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__PredStatus0_52);
    }
    transform_hlds__ctgc__structure_reuse__versions__Var_62 = (MR_Word) transform_hlds__ctgc__structure_reuse__versions__PredStatus0_52;
    transform_hlds__ctgc__structure_reuse__versions__succeeded = (transform_hlds__ctgc__structure_reuse__versions__Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (transform_hlds__ctgc__structure_reuse__versions__succeeded)
    {
      transform_hlds__ctgc__structure_reuse__versions__PredStatus_53 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
    }
    else
      transform_hlds__ctgc__structure_reuse__versions__PredStatus_53 = transform_hlds__ctgc__structure_reuse__versions__PredStatus0_52;
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__MerTypes_55);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__TVarset_56);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58);
    }
    {
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__AssertIds_59);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__ctgc__structure_reuse__versions__PredInfo0_10, &transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredOrigin_51));
      MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__PredId_13));
    }
    {
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__ctgc__structure_reuse__versions__ModuleName_48, transform_hlds__ctgc__structure_reuse__versions__ReusePredName_12, transform_hlds__ctgc__structure_reuse__versions__PredOrFunc_49, transform_hlds__ctgc__structure_reuse__versions__ProgContext_50, transform_hlds__ctgc__structure_reuse__versions__NewPredOrigin_61, transform_hlds__ctgc__structure_reuse__versions__PredStatus_53, transform_hlds__ctgc__structure_reuse__versions__PredMarkers_54, transform_hlds__ctgc__structure_reuse__versions__MerTypes_55, transform_hlds__ctgc__structure_reuse__versions__TVarset_56, transform_hlds__ctgc__structure_reuse__versions__ExistQTVars_57, transform_hlds__ctgc__structure_reuse__versions__ProgConstraints_58, transform_hlds__ctgc__structure_reuse__versions__AssertIds_59, transform_hlds__ctgc__structure_reuse__versions__VarNameRemap_60, transform_hlds__ctgc__structure_reuse__versions__ProcInfo0_11, &transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16, &transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__ctgc__structure_reuse__versions__PredTable0_18);
    }
    {
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__ctgc__structure_reuse__versions__ReusePredInfo_15, &transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17, transform_hlds__ctgc__structure_reuse__versions__PredTable0_18, &transform_hlds__ctgc__structure_reuse__versions__PredTable_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ctgc__structure_reuse__versions__NewPPId_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReuseProcId_16));
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__ctgc__structure_reuse__versions__PredTable_19, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24);
    }
    {
      hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20);
    }
    {
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ReusePredId_17)), transform_hlds__ctgc__structure_reuse__versions__ReusePreds0_20, &transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21);
    }
    {
      hlds__hlds_module__module_info_set_structure_reuse_preds_3_p_0(transform_hlds__ctgc__structure_reuse__versions__ReusePreds_21, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_24_24, transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_23);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18;

    {
      transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv12_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15;

    {
      transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv9_STATE_VARIABLE_ModuleInfo_15));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17;

    {
      transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv6_NewPPId_8));
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv5_STATE_VARIABLE_ModuleInfo_15));
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv4_STATE_VARIABLE_ReuseTable_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5,
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__versions__closure = transform_hlds__ctgc__structure_reuse__versions__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18;

    {
      transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18);
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv1_STATE_VARIABLE_CondPPIds_16));
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_STATE_VARIABLE_UncondPPIds_18));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13,
  MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_17;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_18;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_24;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_30;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__structure_reuse__versions__Var_37;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31;
    MR_Box transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15;

    {
      transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7 = mercury__bimap__coordinates_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__Var_16);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8 = mercury__set__from_list_1_f_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7);
    }
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIdsSet_8));
    }
    transform_hlds__ctgc__structure_reuse__versions__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 0)));
    transform_hlds__ctgc__structure_reuse__versions__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 1)));
    transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47 = (MR_Word) &transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[0];
    {
      mercury__map__foldl2_6_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47, transform_hlds__ctgc__structure_reuse__versions__TypeInfo_47_47, transform_hlds__ctgc__structure_reuse__versions__Var_17, transform_hlds__ctgc__structure_reuse__versions__Var_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10);
    }
    transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv3_CondOrigPPIds_9);
    transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv2_UncondOrigPPIds_10);
    transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    {
      mercury__list__map_foldl2_7_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[0], transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9, &transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_0_12)), &transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13);
    }
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv8_STATE_VARIABLE_ModuleInfo_22_22);
    *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv7_STATE_VARIABLE_ReuseTable_13);
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_24, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_24, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_24, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_24, 4) = ((MR_Box) (*transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13));
    }
    {
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__Var_24, transform_hlds__ctgc__structure_reuse__versions__ReuseCondPPIds_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25);
    }
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv10_STATE_VARIABLE_ModuleInfo_25_25);
    {
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__Var_24, transform_hlds__ctgc__structure_reuse__versions__ExistingReusePPIds_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_25_25)), &transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28);
    }
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv11_STATE_VARIABLE_ModuleInfo_28_28);
    {
      transform_hlds__ctgc__structure_reuse__versions__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_30, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__versions__Var_30, 4) = ((MR_Box) (*transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ReuseTable_13));
    }
    {
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__Var_30, transform_hlds__ctgc__structure_reuse__versions__CondOrigPPIds_9, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31);
    }
    transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv13_STATE_VARIABLE_ModuleInfo_31_31);
    {
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_39_39, transform_hlds__ctgc__structure_reuse__versions__TypeCtorInfo_54_54, transform_hlds__ctgc__structure_reuse__versions__Var_30, transform_hlds__ctgc__structure_reuse__versions__UncondOrigPPIds_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15);
    }
    *transform_hlds__ctgc__structure_reuse__versions__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__conv14_STATE_VARIABLE_ModuleInfo_15);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;

    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2));
    }
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(&transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3));
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__versions__succeeded;

    {
      transform_hlds__ctgc__structure_reuse__versions__succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2));
    }
    return transform_hlds__ctgc__structure_reuse__versions__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(&transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_3));
    }
    *transform_hlds__ctgc__structure_reuse__versions__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__versions__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.ctgc.structure_reuse.versions. */
