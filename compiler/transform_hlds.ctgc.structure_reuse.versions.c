/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.versions.m'
** by the Mercury compiler,
** version rotd-2019-07-09
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


// :- module transform_hlds.ctgc.structure_reuse.versions.
// :- implementation.

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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseMap_7,
  MR_Word ModuleInfo_8,
  MR_Word Case0_9,
  MR_Word * Case_10);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word ReusePPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_69,
  MR_Word * STATE_VARIABLE_Goal_70);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(
  MR_Word ReuseTable_10,
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word PredName_14,
  MR_Word NoClobbers_15,
  MR_Word * ReusePredId_16,
  MR_Integer * ReuseProcId_17,
  MR_Word * ReusePredName_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
  MR_Word ShortReuseDescription_4,
  MR_Word STATE_VARIABLE_Unification_0_15,
  MR_Word * STATE_VARIABLE_Unification_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
  MR_Word PPId_7,
  MR_Word * NewPPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
  MR_Word ExistingReusePPIdsSet_8,
  MR_Word PPId_9,
  MR_Word ReuseAs_Status_10,
  MR_Word STATE_VARIABLE_CondPPIds_0_15,
  MR_Word * STATE_VARIABLE_CondPPIds_16,
  MR_Word STATE_VARIABLE_UncondPPIds_0_17,
  MR_Word * STATE_VARIABLE_UncondPPIds_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__versions__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0 = {
  (MR_String) "convert_potential_reuse",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1 = {
  (MR_String) "leave_potential_reuse",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "convert_potential_reuse",
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0 },
  {     transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__versions__transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.versions",
  (MR_String) "reuse_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseMap_7,
  MR_Word ModuleInfo_8,
  MR_Word Case0_9,
  MR_Word * Case_10)
{
  {
    MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
    MR_Word Goal_14;

    transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseMap_7, ModuleInfo_8, Goal0_13, &Goal_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_14));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word ReusePPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_Word IntermodAnalysis_11;
    MR_Word OpMode_12;
    MR_Word Var_17;
    MR_Word Var_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 353, &IntermodAnalysis_11);
    libs__globals__get_op_mode_2_p_0(Globals_10, &OpMode_12);
    succeeded = (IntermodAnalysis_11 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OpMode_12)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_12, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_17, (MR_Integer) 0))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 8U));
        }
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word IsHarsher_13;

      transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_p_0(STATE_VARIABLE_ModuleInfo_0_14, ReuseTable_7, ReusePPId_8, &IsHarsher_13);
      switch (IsHarsher_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ReusePPId_8, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
          break;
        case (MR_Integer) 1:
          {
            transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0((MR_Integer) 1, ReuseTable_7, ReusePPId_8, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
          }
          break;
      }
    }
    else
      transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ReusePPId_8, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_12;
    MR_Word PredStatus_13;
    MR_Word STATE_VARIABLE_ProcInfo_22_22;
    MR_Word Var_23;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "(reuse version) ", PPId_8, STATE_VARIABLE_ModuleInfo_0_17);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_17, PPId_8, &PredInfo0_12, &STATE_VARIABLE_ProcInfo_22_22);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_12, &PredStatus_13);
    Var_23 = (MR_Word) (PredStatus_13);
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
    }
    else
    {
      MR_Word Goal0_15;
      MR_Word Goal_16;
      MR_Word STATE_VARIABLE_ProcInfo_24_24;
      MR_Word STATE_VARIABLE_ProcInfo_26_26;
      MR_Word STATE_VARIABLE_ProcInfo_28_28;
      MR_Word STATE_VARIABLE_ModuleInfo_29_29;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_22_22, &Goal0_15);
      transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, STATE_VARIABLE_ModuleInfo_0_17, Goal0_15, &Goal_16);
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_16, STATE_VARIABLE_ProcInfo_22_22, &STATE_VARIABLE_ProcInfo_24_24);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_24_24, &STATE_VARIABLE_ProcInfo_26_26);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_26_26, &STATE_VARIABLE_ProcInfo_28_28, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_29_29);
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_8, PredInfo0_12, STATE_VARIABLE_ProcInfo_28_28, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_18);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Case_10;

    transform_hlds__ctgc__structure_reuse__versions__process_case_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Case_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_Case_10));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_70;

    transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_70);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_70));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goal_70;

    transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Goal_70);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_70));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(
  MR_Word ConvertPotentialReuse_6,
  MR_Word ReuseTable_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_69,
  MR_Word * STATE_VARIABLE_Goal_70)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_69, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_69, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 3))));
          MR_Word ReuseDescription0_107;

          ReuseDescription0_107 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo0_11);
          switch (MR_tag((MR_Word) ReuseDescription0_107)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReuseDescription0_107)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReuseDescription0_107, (MR_Integer) 0))));

                switch (ConvertPotentialReuse_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Unification_42;
                      MR_Word GoalExpr_100;
                      MR_Word ReuseDescription_101;
                      MR_Word GoalInfo_102;
                      MR_Word Var_118;
                      MR_Word Var_119;
                      MR_Word Var_120;
                      MR_Word Var_122;

                      {
                        ReuseDescription_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ReuseDescription_101, 0) = ((MR_Box) (Var_153));
                      }
                      transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(Var_153, Unification0_39, &Unification_42);
                      Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 0))));
                      Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 1))));
                      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 2))));
                      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 4))));
                      {
                        GoalExpr_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), GoalExpr_100, 0) = ((MR_Box) (Var_118));
                        MR_hl_field(MR_mktag(1), GoalExpr_100, 1) = ((MR_Box) (Var_119));
                        MR_hl_field(MR_mktag(1), GoalExpr_100, 2) = ((MR_Box) (Var_120));
                        MR_hl_field(MR_mktag(1), GoalExpr_100, 3) = ((MR_Box) (Unification_42));
                        MR_hl_field(MR_mktag(1), GoalExpr_100, 4) = ((MR_Box) (Var_122));
                      }
                      hlds__hlds_goal__goal_info_set_reuse_3_p_0(ReuseDescription_101, GoalInfo0_11, &GoalInfo_102);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_Goal_70 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_100));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_102));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Descr_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReuseDescription0_107, (MR_Integer) 0))));
                MR_Word Unification_144;
                MR_Word GoalExpr_145;
                MR_Word GoalInfo_147;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word Var_137;

                transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(Descr_143, Unification0_39, &Unification_144);
                Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 0))));
                Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 1))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 2))));
                Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 4))));
                {
                  GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GoalExpr_145, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(1), GoalExpr_145, 1) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(1), GoalExpr_145, 2) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(1), GoalExpr_145, 3) = ((MR_Box) (Unification_144));
                  MR_hl_field(MR_mktag(1), GoalExpr_145, 4) = ((MR_Box) (Var_137));
                }
                hlds__hlds_goal__goal_info_set_reuse_3_p_0(ReuseDescription0_107, GoalInfo0_11, &GoalInfo_147);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Goal_70 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_145));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_147));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 0))));
          MR_Integer CalleeProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 1))));
          MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 2))));
          MR_Word BI_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word UC_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 4))));
          MR_Word CalleePredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 5))));
          MR_Word ReuseDescription0_22;
          MR_Word NoClobbers_24;
          MR_Word Var_81;

          ReuseDescription0_22 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo0_11);
          succeeded = ((MR_tag((MR_Word) ReuseDescription0_22)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReuseDescription0_22, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 2);
            if (succeeded)
              NoClobbers_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_81, (MR_Integer) 1))));
          }
          if (succeeded)
          {
            MR_Word ReuseCalleePredId_25;
            MR_Integer ReuseCalleeProcId_26;
            MR_Word ReuseCalleePredName_27;
            MR_Word GoalExpr_88;

            transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(ReuseTable_7, ModuleInfo_8, CalleePredId_16, CalleeProcId_17, CalleePredName_21, NoClobbers_24, &ReuseCalleePredId_25, &ReuseCalleeProcId_26, &ReuseCalleePredName_27);
            {
              GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 0) = ((MR_Box) (ReuseCalleePredId_25));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 1) = ((MR_Box) (ReuseCalleeProcId_26));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 2) = ((MR_Box) (Args_18));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 3) = (MR_Box) ((MR_Unsigned) (BI_19));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 4) = ((MR_Box) (UC_20));
              MR_hl_field(MR_mktag(2), GoalExpr_88, 5) = ((MR_Box) (ReuseCalleePredName_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_70 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_88));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          else
          {
            MR_Word Var_83;
            MR_Word NoClobbers_94;

            succeeded = (ConvertPotentialReuse_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ReuseDescription0_22)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReuseDescription0_22, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2);
                if (succeeded)
                  NoClobbers_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_83, (MR_Integer) 1))));
              }
            }
            if (succeeded)
            {
              MR_Word ReuseDescription_29;
              MR_Word GoalInfo_30;
              MR_Word GoalExpr_89;
              MR_Word ReuseCalleePredId_90;
              MR_Integer ReuseCalleeProcId_91;
              MR_Word ReuseCalleePredName_92;

              transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_p_0(ReuseTable_7, ModuleInfo_8, CalleePredId_16, CalleeProcId_17, CalleePredName_21, NoClobbers_94, &ReuseCalleePredId_90, &ReuseCalleeProcId_91, &ReuseCalleePredName_92);
              {
                GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 0) = ((MR_Box) (ReuseCalleePredId_90));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 1) = ((MR_Box) (ReuseCalleeProcId_91));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 2) = ((MR_Box) (Args_18));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 3) = (MR_Box) ((MR_Unsigned) (BI_19));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 4) = ((MR_Box) (UC_20));
                MR_hl_field(MR_mktag(2), GoalExpr_89, 5) = ((MR_Box) (ReuseCalleePredName_92));
              }
              {
                ReuseDescription_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ReuseDescription_29, 0) = ((MR_Box) (Var_83));
              }
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(ReuseDescription_29, GoalInfo0_11, &GoalInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_89));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
              }
            }
            else
              *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Goals_14;
              MR_Word GoalExpr_15;
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (ReuseTable_7));
                MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (ModuleInfo_8));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_86, Goals0_13, &Goals_14);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_78;
              MR_Word Goals0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Goals_111;
              MR_Word GoalExpr_112;

              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (ReuseTable_7));
                MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (ModuleInfo_8));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_78, Goals0_110, &Goals_111);
              {
                GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 1) = ((MR_Box) (Goals_111));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_112));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word A_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word B_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Cases_48;
              MR_Word Var_76;
              MR_Word GoalExpr_113;

              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ConvertPotentialReuse_6));
                MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (ReuseTable_7));
                MR_hl_field(MR_mktag(0), Var_76, 5) = ((MR_Box) (ModuleInfo_8));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_76, Cases0_47, &Cases_48);
              {
                GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 1) = ((MR_Box) (A_45));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 2) = (MR_Box) ((MR_Unsigned) (B_46));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 3) = ((MR_Box) (Cases_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_113));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word SubGoal0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Var_74;

              succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_74 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_Goal_70 = STATE_VARIABLE_Goal_0_69;
              else
              {
                MR_Word SubGoal_53;
                MR_Word GoalExpr_114;

                transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ModuleInfo_8, SubGoal0_51, &SubGoal_53);
                {
                  GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_114, 1) = ((MR_Box) (Reason_50));
                  MR_hl_field(MR_mktag(3), GoalExpr_114, 2) = ((MR_Box) (SubGoal_53));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Goal_70 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_114));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word IfGoal0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word ThenGoal0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word ElseGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
              MR_Word IfGoal_58;
              MR_Word ThenGoal_59;
              MR_Word ElseGoal_60;
              MR_Word GoalExpr_117;

              transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ModuleInfo_8, IfGoal0_55, &IfGoal_58);
              transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ModuleInfo_8, ThenGoal0_56, &ThenGoal_59);
              transform_hlds__ctgc__structure_reuse__versions__process_goal_5_p_0(ConvertPotentialReuse_6, ReuseTable_7, ModuleInfo_8, ElseGoal0_57, &ElseGoal_60);
              {
                GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 2) = ((MR_Box) (IfGoal_58));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 3) = ((MR_Box) (ThenGoal_59));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 4) = ((MR_Box) (ElseGoal_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_70 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_117));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.process_goal\'/5", (MR_String) "shorthand");
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
  MR_Word ReuseTable_10,
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word PredName_14,
  MR_Word NoClobbers_15,
  MR_Word * ReusePredId_16,
  MR_Integer * ReuseProcId_17,
  MR_Word * ReusePredName_18)
{
  {
    MR_bool succeeded;
    MR_Word Result_19;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ProcId_13));
    }
    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(ReuseTable_10, Var_23, NoClobbers_15, &Result_19);
    if (succeeded)
    {
      MR_Word ReusePredInfo_20;
      MR_Word ModuleName_21;
      MR_String Name_22;

      *ReusePredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_19, (MR_Integer) 0))));
      *ReuseProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Result_19, (MR_Integer) 1))));
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, *ReusePredId_16, &ReusePredInfo_20);
      ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(ReusePredInfo_20);
      Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(ReusePredInfo_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ReusePredName_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_22));
      }
    }
    else
    {
      *ReusePredId_16 = PredId_12;
      *ReuseProcId_17 = ProcId_13;
      *ReusePredName_18 = PredName_14;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_p_0(
  MR_Word ShortReuseDescription_4,
  MR_Word STATE_VARIABLE_Unification_0_15,
  MR_Word * STATE_VARIABLE_Unification_16)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Unification_0_15)) == (MR_Integer) 0);
    MR_Word HowToConstruct0_6;
    MR_Word DeadVar_7;
    MR_Word PossibleConsIds_9;
    MR_Word CellsToUpdate_10;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 1))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 2))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 3))));
      HowToConstruct0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 4))));
      Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 5))) & (MR_Integer) 1);
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_15, (MR_Integer) 6))));
      succeeded = ((MR_tag((MR_Word) ShortReuseDescription_4)) == (MR_Integer) 1);
      if (succeeded)
      {
        DeadVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortReuseDescription_4, (MR_Integer) 0))));
        PossibleConsIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortReuseDescription_4, (MR_Integer) 2))));
        CellsToUpdate_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortReuseDescription_4, (MR_Integer) 3))));
      }
    }
    if (succeeded)
      switch (MR_tag((MR_Word) HowToConstruct0_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HowToConstruct0_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Unification_16 = STATE_VARIABLE_Unification_0_15;
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellToReuse_13;
                MR_Word HowToConstruct_14;

                {
                  CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CellToReuse_13, 0) = ((MR_Box) (DeadVar_7));
                  MR_hl_field(MR_mktag(0), CellToReuse_13, 1) = ((MR_Box) (PossibleConsIds_9));
                  MR_hl_field(MR_mktag(0), CellToReuse_13, 2) = ((MR_Box) (CellsToUpdate_10));
                }
                HowToConstruct_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CellToReuse_13)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Unification_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_14));
                  MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_22));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellToReuse_13;
            MR_Word HowToConstruct_14;

            {
              CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CellToReuse_13, 0) = ((MR_Box) (DeadVar_7));
              MR_hl_field(MR_mktag(0), CellToReuse_13, 1) = ((MR_Box) (PossibleConsIds_9));
              MR_hl_field(MR_mktag(0), CellToReuse_13, 2) = ((MR_Box) (CellsToUpdate_10));
            }
            HowToConstruct_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CellToReuse_13)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Unification_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_14));
              MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_22));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CellToReuse_13;
            MR_Word HowToConstruct_14;

            {
              CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CellToReuse_13, 0) = ((MR_Box) (DeadVar_7));
              MR_hl_field(MR_mktag(0), CellToReuse_13, 1) = ((MR_Box) (PossibleConsIds_9));
              MR_hl_field(MR_mktag(0), CellToReuse_13, 2) = ((MR_Box) (CellsToUpdate_10));
            }
            HowToConstruct_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CellToReuse_13)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Unification_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_14));
              MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_22));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
            }
          }
          break;
      }
    else
      *STATE_VARIABLE_Unification_16 = STATE_VARIABLE_Unification_0_15;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(
  MR_Word PPId_7,
  MR_Word * NewPPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17)
{
  {
    MR_bool succeeded;
    MR_Word Var_12;
    MR_Word ReuseAs_Status_13;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(STATE_VARIABLE_ReuseTable_0_16, PPId_7, (MR_Word) ((MR_Unsigned) 0U), &Var_12);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "procedure already exists");
        return;
      }
    }
    transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(PPId_7, (MR_Word) ((MR_Unsigned) 0U), NewPPId_8, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(STATE_VARIABLE_ReuseTable_0_16, PPId_7, &ReuseAs_Status_13);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_ReuseTable_21_21;

      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(*NewPPId_8, ReuseAs_Status_13, STATE_VARIABLE_ReuseTable_0_16, &STATE_VARIABLE_ReuseTable_21_21);
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(PPId_7, (MR_Word) ((MR_Unsigned) 0U), *NewPPId_8, STATE_VARIABLE_ReuseTable_21_21, STATE_VARIABLE_ReuseTable_17);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", (MR_String) "no reuse information");
        return;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(
  MR_Word ExistingReusePPIdsSet_8,
  MR_Word PPId_9,
  MR_Word ReuseAs_Status_10,
  MR_Word STATE_VARIABLE_CondPPIds_0_15,
  MR_Word * STATE_VARIABLE_CondPPIds_16,
  MR_Word STATE_VARIABLE_UncondPPIds_0_17,
  MR_Word * STATE_VARIABLE_UncondPPIds_18)
{
  {
    MR_bool succeeded;
    MR_Word ReuseAs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_10, (MR_Integer) 0))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ExistingReusePPIdsSet_8, ((MR_Box) (PPId_9)));
    if (succeeded)
    {
      *STATE_VARIABLE_UncondPPIds_18 = STATE_VARIABLE_UncondPPIds_0_17;
      *STATE_VARIABLE_CondPPIds_16 = STATE_VARIABLE_CondPPIds_0_15;
    }
    else
    {
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(ReuseAs_13);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_CondPPIds_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PPId_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_CondPPIds_0_15));
        }
        *STATE_VARIABLE_UncondPPIds_18 = STATE_VARIABLE_UncondPPIds_0_17;
      }
      else
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(ReuseAs_13);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_UncondPPIds_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PPId_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UncondPPIds_0_17));
          }
        else
        {
          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(ReuseAs_13);
          if (!(succeeded))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.versions.divide_reuse_procs\'/7", (MR_String) "conditions failed");
              return;
            }
          }
          *STATE_VARIABLE_UncondPPIds_18 = STATE_VARIABLE_UncondPPIds_0_17;
        }
        *STATE_VARIABLE_CondPPIds_16 = STATE_VARIABLE_CondPPIds_0_15;
      }
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_p_0(
  MR_Word PPId_5,
  MR_Word NoClobbers_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 1))));
    MR_Word OldPredInfo_10;
    MR_Word OldProcInfo_11;
    MR_Word OldPredModule_12;
    MR_String OldPredName_13;
    MR_Word Determinism_14;
    MR_Word NewPPId_15;
    MR_Word Body_18;
    MR_Word GoalInfo0_20;
    MR_Word HeadVars_21;
    MR_Word GoalExpr_22;
    MR_Word GoalInfo_23;
    MR_Word Goal_24;
    MR_Word STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word STATE_VARIABLE_PredInfo_28_28;
    MR_Word STATE_VARIABLE_ProcInfo_29_29;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ProcInfo_33_33;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_25, PPId_5, &OldPredInfo_10, &OldProcInfo_11);
    OldPredModule_12 = hlds__hlds_pred__pred_info_module_1_f_0(OldPredInfo_10);
    OldPredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(OldPredInfo_10);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(OldProcInfo_11, &Determinism_14);
    transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(PPId_5, NoClobbers_6, &NewPPId_15, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_27_27);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_27_27, NewPPId_15, &STATE_VARIABLE_PredInfo_28_28, &STATE_VARIABLE_ProcInfo_29_29);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_29_29, &Body_18);
    GoalInfo0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body_18, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_29_29, &HeadVars_21);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (OldPredModule_12));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (OldPredName_13));
    }
    {
      GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 1) = ((MR_Box) (ProcId_9));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 2) = ((MR_Box) (HeadVars_21));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 5) = ((MR_Box) (Var_32));
    }
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_14, GoalInfo0_20, &GoalInfo_23);
    {
      Goal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_24, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(MR_mktag(0), Goal_24, 1) = ((MR_Box) (GoalInfo_23));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_24, STATE_VARIABLE_ProcInfo_29_29, &STATE_VARIABLE_ProcInfo_33_33);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(NewPPId_15, STATE_VARIABLE_PredInfo_28_28, STATE_VARIABLE_ProcInfo_33_33, STATE_VARIABLE_ModuleInfo_27_27, STATE_VARIABLE_ModuleInfo_26);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(
  MR_Word PPId_6,
  MR_Word NoClobbers_7,
  MR_Word * NewPPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_10;
    MR_Word ProcInfo0_11;
    MR_Word ReusePredName_12;
    MR_Word PredId_13;
    MR_Word ReusePredInfo_15;
    MR_Integer ReuseProcId_16;
    MR_Word ReusePredId_17;
    MR_Word PredTable0_18;
    MR_Word PredTable_19;
    MR_Word ReusePreds0_20;
    MR_Word ReusePreds_21;
    MR_Word STATE_VARIABLE_ModuleInfo_24_24;
    MR_Integer ProcId_32;
    MR_Word PredInfo_33;
    MR_Word PredModule_35;
    MR_Word PredOrFunc_36;
    MR_String PredName_37;
    MR_Integer ProcInt_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word ModuleName_48;
    MR_Word PredOrFunc_49;
    MR_Word ProgContext_50;
    MR_Word PredOrigin_51;
    MR_Word PredStatus0_52;
    MR_Word PredStatus_53;
    MR_Word PredMarkers_54;
    MR_Word MerTypes_55;
    MR_Word TVarset_56;
    MR_Word ExistQTVars_57;
    MR_Word ProgConstraints_58;
    MR_Word AssertIds_59;
    MR_Word VarNameRemap_60;
    MR_Word NewPredOrigin_61;
    MR_Word _ProcInfo_34;
    MR_Word Var_62;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, PPId_6, &PredInfo0_10, &ProcInfo0_11);
    ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 1))));
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, PPId_6, &PredInfo_33, &_ProcInfo_34);
    PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_33);
    PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_33);
    PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_33);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_32, &ProcInt_38);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (PredOrFunc_36));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ProcInt_38));
      MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (NoClobbers_7));
    }
    parse_tree__prog_util__make_pred_name_6_p_0(PredModule_35, (MR_String) "ctgc", Var_40, PredName_37, Var_41, &ReusePredName_12);
    PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 0))));
    ModuleName_48 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_10);
    PredOrFunc_49 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_10);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_10, &ProgContext_50);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &PredOrigin_51);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_10, &PredStatus0_52);
    Var_62 = (MR_Word) (PredStatus0_52);
    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PredStatus_53 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
    else
      PredStatus_53 = PredStatus0_52;
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_10, &PredMarkers_54);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_10, &MerTypes_55);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_10, &TVarset_56);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_10, &ExistQTVars_57);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_10, &ProgConstraints_58);
    hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo0_10, &AssertIds_59);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_10, &VarNameRemap_60);
    {
      NewPredOrigin_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), NewPredOrigin_61, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(2), NewPredOrigin_61, 1) = ((MR_Box) (PredOrigin_51));
      MR_hl_field(MR_mktag(2), NewPredOrigin_61, 2) = ((MR_Box) (PredId_13));
    }
    hlds__hlds_pred__pred_info_create_16_p_0(ModuleName_48, ReusePredName_12, PredOrFunc_49, ProgContext_50, NewPredOrigin_61, PredStatus_53, PredMarkers_54, MerTypes_55, TVarset_56, ExistQTVars_57, ProgConstraints_58, AssertIds_59, VarNameRemap_60, ProcInfo0_11, &ReuseProcId_16, &ReusePredInfo_15);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &PredTable0_18);
    hlds__pred_table__predicate_table_insert_4_p_0(ReusePredInfo_15, &ReusePredId_17, PredTable0_18, &PredTable_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *NewPPId_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ReusePredId_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ReuseProcId_16));
    }
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_19, STATE_VARIABLE_ModuleInfo_0_22, &STATE_VARIABLE_ModuleInfo_24_24);
    hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(STATE_VARIABLE_ModuleInfo_24_24, &ReusePreds0_20);
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (ReusePredId_17)), ReusePreds0_20, &ReusePreds_21);
    hlds__hlds_module__module_info_set_structure_reuse_preds_3_p_0(ReusePreds_21, STATE_VARIABLE_ModuleInfo_24_24, STATE_VARIABLE_ModuleInfo_23);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ModuleInfo_18;

    transform_hlds__ctgc__structure_reuse__versions__process_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_ModuleInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_ModuleInfo_15;

    transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_ModuleInfo_15);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ModuleInfo_15));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_NewPPId_8;
    MR_Word conv5_STATE_VARIABLE_ModuleInfo_15;
    MR_Word conv4_STATE_VARIABLE_ReuseTable_17;

    transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_p_0(((MR_Word) (wrapper_arg_1)), &conv6_NewPPId_8, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_ReuseTable_17);
    *wrapper_arg_2 = ((MR_Box) (conv6_NewPPId_8));
    *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleInfo_15));
    *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_ReuseTable_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CondPPIds_16;
    MR_Word conv0_STATE_VARIABLE_UncondPPIds_18;

    transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CondPPIds_16, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UncondPPIds_18);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CondPPIds_16));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UncondPPIds_18));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0(
  MR_Word STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * STATE_VARIABLE_ReuseTable_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word ExistingReusePPIds_7;
    MR_Word ExistingReusePPIdsSet_8;
    MR_Word CondOrigPPIds_9;
    MR_Word UncondOrigPPIds_10;
    MR_Word ReuseCondPPIds_11;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 1))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_ModuleInfo_25_25;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;
    MR_Box conv3_CondOrigPPIds_9;
    MR_Box conv2_UncondOrigPPIds_10;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_22_22;
    MR_Box conv7_STATE_VARIABLE_ReuseTable_13;
    MR_Box conv10_STATE_VARIABLE_ModuleInfo_25_25;
    MR_Box conv11_STATE_VARIABLE_ModuleInfo_28_28;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_31_31;
    MR_Box conv14_STATE_VARIABLE_ModuleInfo_15;

    ExistingReusePPIds_7 = mercury__bimap__coordinates_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_16);
    ExistingReusePPIdsSet_8 = mercury__set__from_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ExistingReusePPIds_7);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ExistingReusePPIdsSet_8));
    }
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_12, (MR_Integer) 0))));
    mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_1[0]), Var_17, Var_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_CondOrigPPIds_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_UncondOrigPPIds_10);
    CondOrigPPIds_9 = ((MR_Word) (conv3_CondOrigPPIds_9));
    UncondOrigPPIds_10 = ((MR_Word) (conv2_UncondOrigPPIds_10));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_4[0]), CondOrigPPIds_9, &ReuseCondPPIds_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv8_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_12)), &conv7_STATE_VARIABLE_ReuseTable_13);
    STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_22_22));
    *STATE_VARIABLE_ReuseTable_13 = ((MR_Word) (conv7_STATE_VARIABLE_ReuseTable_13));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (*STATE_VARIABLE_ReuseTable_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_24, ReuseCondPPIds_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_22_22)), &conv10_STATE_VARIABLE_ModuleInfo_25_25);
    STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) (conv10_STATE_VARIABLE_ModuleInfo_25_25));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_24, ExistingReusePPIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_25_25)), &conv11_STATE_VARIABLE_ModuleInfo_28_28);
    STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_28_28));
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__versions_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (*STATE_VARIABLE_ReuseTable_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_30, CondOrigPPIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_28_28)), &conv13_STATE_VARIABLE_ModuleInfo_31_31);
    STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_31_31));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_30, UncondOrigPPIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31)), &conv14_STATE_VARIABLE_ModuleInfo_15);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv14_STATE_VARIABLE_ModuleInfo_15));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____convert_potential_reuse_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__versions____Compare____convert_potential_reuse_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__versions____Unify____reuse_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__versions____Compare____reuse_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.ctgc.structure_reuse.versions.
