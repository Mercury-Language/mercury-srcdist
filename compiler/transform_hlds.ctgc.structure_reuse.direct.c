/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module transform_hlds.ctgc.structure_reuse.direct. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.mih"


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
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[2][7];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct",
  (MR_String) "dead_cell_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4)));
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Cond_6)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__Cond_6);
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t|  cond  |\t");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t| always |\t");
    }
    transform_hlds__smm_common__dump_program_point_3_p_0(transform_hlds__ctgc__structure_reuse__direct__PP_5);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__C_6,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__C_6);
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
      *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8;
    else
    {
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__C_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9;

    transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9);
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_7;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5;

    transform_hlds__ctgc__structure_reuse__direct__Var_7 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Var_7)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_6;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_Var_6;

    mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_Var_6, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8);
    transform_hlds__ctgc__structure_reuse__direct__Var_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_Var_6);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__RC_6,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
{
  {
    mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__RC_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_5,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_5, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
    {
      *transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
      transform_hlds__ctgc__structure_reuse__direct__succeeded = MR_TRUE;
    }
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_2);
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_f_0(void)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    return transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 1)));

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_7, transform_hlds__ctgc__structure_reuse__direct__PredId_8, transform_hlds__ctgc__structure_reuse__direct__ProcId_9, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_9,
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds0_13;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred0_14;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs0_15;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc0_16;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc_17;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs_21;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred_22;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds_23;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_28;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16;

    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__ctgc__structure_reuse__direct__Preds0_13);
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__direct__Preds0_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), &transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
    transform_hlds__ctgc__structure_reuse__direct__Pred0_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Procs0_15);
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, transform_hlds__ctgc__structure_reuse__direct__Procs0_15, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, &transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
    transform_hlds__ctgc__structure_reuse__direct__Proc0_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_8, transform_hlds__ctgc__structure_reuse__direct__PredId_9, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, transform_hlds__ctgc__structure_reuse__direct__Proc0_16, &transform_hlds__ctgc__structure_reuse__direct__Proc_17, &transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18);
    {
      transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 1) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
    }
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__Var_28, transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Proc_17)), transform_hlds__ctgc__structure_reuse__direct__Procs0_15, &transform_hlds__ctgc__structure_reuse__direct__Procs_21);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Procs_21, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Pred_22);
    mercury__map__det_update_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Pred_22)), transform_hlds__ctgc__structure_reuse__direct__Preds0_13, &transform_hlds__ctgc__structure_reuse__direct__Preds_23);
    hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Preds_23, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_9,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_10,
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_11,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo_13,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Globals_16;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal0_19;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__Globals_16);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Globals_16, (MR_Integer) 57, &transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Direct reuse analysis of ", transform_hlds__ctgc__structure_reuse__direct__PredId_10, transform_hlds__ctgc__structure_reuse__direct__ProcId_11, transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__ctgc__structure_reuse__direct__Goal0_19);
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__PredInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__SharingTable_9, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23);
    libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, (MR_String) "% reuse analysis done.\n");
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

    transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_6)
{
  switch (transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13;

        mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
        mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__Table_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13);
        mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
      }
      break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Status_9,
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_14;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_15;

    {
      transform_hlds__ctgc__structure_reuse__direct__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_7));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
    }
    {
      transform_hlds__ctgc__structure_reuse__direct__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Status_9));
    }
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__Var_14, transform_hlds__ctgc__structure_reuse__direct__Var_15, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27);
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25));
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13;

    transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13);
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Origin_12;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_13;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__ctgc__structure_reuse__direct__PredId_8, &transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__Origin_12);
    transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__Origin_12)) == (MR_mktag((MR_Integer) 0)));
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
    {
      transform_hlds__ctgc__structure_reuse__direct__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Origin_12, (MR_Integer) 0)));
      transform_hlds__ctgc__structure_reuse__direct__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Origin_12, (MR_Integer) 1)));
      *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20;
      *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18;
    }
    else
    {
      MR_Word transform_hlds__ctgc__structure_reuse__direct__PredStatus_15;
      MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_22;
      MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_16;

      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__PredStatus_15);
      transform_hlds__ctgc__structure_reuse__direct__Var_22 = (MR_Word) transform_hlds__ctgc__structure_reuse__direct__PredStatus_15;
      transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__Var_22)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
      {
        transform_hlds__ctgc__structure_reuse__direct__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__Var_22, (MR_Integer) 0)));
        {
          MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_23;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_24;
          MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_26;
          MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21;

          transform_hlds__ctgc__structure_reuse__direct__Var_26 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
          {
            transform_hlds__ctgc__structure_reuse__direct__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Var_26));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_23, 5) = ((MR_Box) ((MR_Integer) 2));
          }
          transform_hlds__ctgc__structure_reuse__direct__Var_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__Var_23, transform_hlds__ctgc__structure_reuse__direct__Var_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21);
          *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21);
          *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18;
        }
      }
      else
      {
        MR_Word transform_hlds__ctgc__structure_reuse__direct__ProcIds_17;
        MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_28;
        MR_Box transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19;
        MR_Box transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21;

        transform_hlds__ctgc__structure_reuse__direct__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
        {
          transform_hlds__ctgc__structure_reuse__direct__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_28, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
        }
        mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__Var_28, transform_hlds__ctgc__structure_reuse__direct__ProcIds_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18)), &transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21);
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19);
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15);
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13));
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PPIds_8,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_15;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

    {
      transform_hlds__ctgc__structure_reuse__direct__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__Var_15, transform_hlds__ctgc__structure_reuse__direct__PPIds_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21);
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19));
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1));
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0(
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_6,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12,
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13,
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_15;
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Var_16;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9);
    {
      transform_hlds__ctgc__structure_reuse__direct__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11));
    }
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    mercury__list__filter_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__direct__Var_15, transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9, &transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10);
    {
      transform_hlds__ctgc__structure_reuse__direct__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_16, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_16, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Var_16, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_6));
    }
    mercury__list__foldl2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__Var_16, transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

    transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3));
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__direct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.ctgc.structure_reuse.direct. */
