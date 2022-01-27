/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 146 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 149 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 152 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 155 "transform_hlds.ctgc.structure_reuse.direct.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
#line 158 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 160 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2);

#line 163 "transform_hlds.ctgc.structure_reuse.direct.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
#line 166 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 168 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 170 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);

#line 273 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 273 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

#line 249 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 249 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

#line 106 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 106 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 106 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 102 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 102 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);

#line 120 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 120 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 120 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 80 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 80 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 80 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 76 "structure_reuse.direct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
#line 76 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 76 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1);


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
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1)),
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 410 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 419 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 428 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 437 "transform_hlds.ctgc.structure_reuse.direct.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 454 "transform_hlds.ctgc.structure_reuse.direct.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
#line 457 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 459 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2)
#line 461 "transform_hlds.ctgc.structure_reuse.direct.c"
{
#line 463 "transform_hlds.ctgc.structure_reuse.direct.c"
  {
#line 465 "transform_hlds.ctgc.structure_reuse.direct.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 468 "transform_hlds.ctgc.structure_reuse.direct.c"
    {
#line 470 "transform_hlds.ctgc.structure_reuse.direct.c"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
    }
#line 473 "transform_hlds.ctgc.structure_reuse.direct.c"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 475 "transform_hlds.ctgc.structure_reuse.direct.c"
  }
#line 477 "transform_hlds.ctgc.structure_reuse.direct.c"
}

#line 480 "transform_hlds.ctgc.structure_reuse.direct.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
#line 483 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 485 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 487 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
#line 489 "transform_hlds.ctgc.structure_reuse.direct.c"
{
#line 491 "transform_hlds.ctgc.structure_reuse.direct.c"
  {
#line 493 "transform_hlds.ctgc.structure_reuse.direct.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1;

#line 496 "transform_hlds.ctgc.structure_reuse.direct.c"
    {
#line 498 "transform_hlds.ctgc.structure_reuse.direct.c"
      transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3));
    }
#line 501 "transform_hlds.ctgc.structure_reuse.direct.c"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1));
#line 503 "transform_hlds.ctgc.structure_reuse.direct.c"
  }
#line 505 "transform_hlds.ctgc.structure_reuse.direct.c"
}

#line 202 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(
#line 202 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
#line 202 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
#line 202 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3)
#line 202 "structure_reuse.direct.m"
{
#line 202 "structure_reuse.direct.m"
  {
#line 202 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 202 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;
#line 202 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3;

#line 202 "structure_reuse.direct.m"
    {
#line 202 "structure_reuse.direct.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5)));
#line 202 "structure_reuse.direct.m"
      return;
    }
#line 202 "structure_reuse.direct.m"
  }
#line 202 "structure_reuse.direct.m"
}

#line 202 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(
#line 202 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
#line 202 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2)
#line 202 "structure_reuse.direct.m"
{
#line 202 "structure_reuse.direct.m"
  {
#line 202 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 202 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
#line 202 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;

#line 202 "structure_reuse.direct.m"
    {
#line 202 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4)));
    }
#line 202 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 202 "structure_reuse.direct.m"
  }
#line 202 "structure_reuse.direct.m"
}

#line 277 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(
#line 277 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 277 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Cond_6)
#line 277 "structure_reuse.direct.m"
{
#line 280 "structure_reuse.direct.m"
  {
#line 280 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 281 "structure_reuse.direct.m"
    {
#line 281 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__Cond_6);
    }
#line 283 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 282 "structure_reuse.direct.m"
      {
#line 282 "structure_reuse.direct.m"
        {
#line 282 "structure_reuse.direct.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t|  cond  |\t");
        }
#line 282 "structure_reuse.direct.m"
      }
#line 283 "structure_reuse.direct.m"
    else
#line 284 "structure_reuse.direct.m"
      {
#line 284 "structure_reuse.direct.m"
        {
#line 284 "structure_reuse.direct.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t| always |\t");
        }
#line 284 "structure_reuse.direct.m"
      }
#line 286 "structure_reuse.direct.m"
    {
#line 286 "structure_reuse.direct.m"
      transform_hlds__smm_common__dump_program_point_3_p_0(transform_hlds__ctgc__structure_reuse__direct__PP_5);
    }
#line 287 "structure_reuse.direct.m"
    {
#line 287 "structure_reuse.direct.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 287 "structure_reuse.direct.m"
      return;
    }
#line 280 "structure_reuse.direct.m"
  }
#line 277 "structure_reuse.direct.m"
}

#line 273 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 273 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 273 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
#line 273 "structure_reuse.direct.m"
{
#line 273 "structure_reuse.direct.m"
  {
#line 273 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

#line 273 "structure_reuse.direct.m"
    {
#line 273 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
#line 273 "structure_reuse.direct.m"
      return;
    }
#line 273 "structure_reuse.direct.m"
  }
#line 273 "structure_reuse.direct.m"
}

#line 264 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(
#line 264 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5,
#line 264 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_6)
#line 264 "structure_reuse.direct.m"
{
#line 269 "structure_reuse.direct.m"
  {
#line 269 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 269 "structure_reuse.direct.m"
#line 269 "structure_reuse.direct.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5) {
#line 269 "structure_reuse.direct.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "structure_reuse.direct.m"
      case (MR_Integer) 0:
#line 269 "structure_reuse.direct.m"
        {
#line 269 "structure_reuse.direct.m"
        }
#line 269 "structure_reuse.direct.m"
        break;
#line 269 "structure_reuse.direct.m"
      case (MR_Integer) 1:
#line 271 "structure_reuse.direct.m"
        {
#line 273 "structure_reuse.direct.m"
          MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13;

#line 272 "structure_reuse.direct.m"
          {
#line 272 "structure_reuse.direct.m"
            mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
          }
#line 273 "structure_reuse.direct.m"
          {
#line 273 "structure_reuse.direct.m"
            mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__direct__Table_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13);
          }
#line 274 "structure_reuse.direct.m"
          {
#line 274 "structure_reuse.direct.m"
            mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
#line 274 "structure_reuse.direct.m"
            return;
          }
#line 271 "structure_reuse.direct.m"
        }
#line 269 "structure_reuse.direct.m"
        break;
#line 269 "structure_reuse.direct.m"
    }
#line 269 "structure_reuse.direct.m"
  }
#line 264 "structure_reuse.direct.m"
}

#line 252 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(
#line 252 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 252 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__C_6,
#line 252 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
#line 252 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
#line 252 "structure_reuse.direct.m"
{
#line 258 "structure_reuse.direct.m"
  {
#line 258 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 256 "structure_reuse.direct.m"
    {
#line 256 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__C_6);
    }
#line 258 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 258 "structure_reuse.direct.m"
      *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8;
#line 258 "structure_reuse.direct.m"
    else
#line 232 "structure_reuse.direct.m"
      {
#line 232 "structure_reuse.direct.m"
        {
#line 232 "structure_reuse.direct.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__C_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
#line 232 "structure_reuse.direct.m"
          return;
        }
#line 232 "structure_reuse.direct.m"
      }
#line 258 "structure_reuse.direct.m"
  }
#line 252 "structure_reuse.direct.m"
}

#line 249 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 249 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 249 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
#line 249 "structure_reuse.direct.m"
{
#line 249 "structure_reuse.direct.m"
  {
#line 249 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 249 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9;

#line 249 "structure_reuse.direct.m"
    {
#line 249 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9);
    }
#line 249 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9));
#line 249 "structure_reuse.direct.m"
  }
#line 249 "structure_reuse.direct.m"
}

#line 245 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(
#line 245 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4,
#line 245 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5)
#line 245 "structure_reuse.direct.m"
{
#line 248 "structure_reuse.direct.m"
  {
#line 248 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 248 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_7_7;
#line 249 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5;

#line 208 "structure_reuse.direct.m"
    {
#line 208 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_7_7 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    }
#line 249 "structure_reuse.direct.m"
    {
#line 249 "structure_reuse.direct.m"
      mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__V_7_7)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
    }
#line 249 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
#line 248 "structure_reuse.direct.m"
  }
#line 245 "structure_reuse.direct.m"
}

#line 236 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(
#line 236 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
#line 236 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7,
#line 236 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8)
#line 236 "structure_reuse.direct.m"
{
#line 240 "structure_reuse.direct.m"
  {
#line 240 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 240 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_6_6;
#line 240 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6;

#line 240 "structure_reuse.direct.m"
    {
#line 240 "structure_reuse.direct.m"
      mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8);
    }
#line 240 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__V_6_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6);
#line 240 "structure_reuse.direct.m"
  }
#line 236 "structure_reuse.direct.m"
}

#line 228 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_p_0(
#line 228 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 228 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__RC_6,
#line 228 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
#line 228 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
#line 228 "structure_reuse.direct.m"
{
#line 232 "structure_reuse.direct.m"
  {
#line 232 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 232 "structure_reuse.direct.m"
    {
#line 232 "structure_reuse.direct.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__RC_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
#line 232 "structure_reuse.direct.m"
      return;
    }
#line 232 "structure_reuse.direct.m"
  }
#line 228 "structure_reuse.direct.m"
}

#line 220 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(
#line 220 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
#line 220 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_5,
#line 220 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6)
#line 220 "structure_reuse.direct.m"
{
#line 224 "structure_reuse.direct.m"
  {
#line 224 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 224 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6;

#line 224 "structure_reuse.direct.m"
    {
#line 224 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_5, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
    }
#line 224 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 224 "structure_reuse.direct.m"
      {
#line 224 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
#line 224 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__succeeded = MR_TRUE;
#line 224 "structure_reuse.direct.m"
      }
#line 224 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 224 "structure_reuse.direct.m"
  }
#line 220 "structure_reuse.direct.m"
}

#line 212 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(
#line 212 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_2)
#line 212 "structure_reuse.direct.m"
{
#line 215 "structure_reuse.direct.m"
  {
#line 215 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 215 "structure_reuse.direct.m"
    {
#line 215 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_2);
    }
#line 215 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 215 "structure_reuse.direct.m"
  }
#line 212 "structure_reuse.direct.m"
}

#line 206 "structure_reuse.direct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_f_0(void)
#line 206 "structure_reuse.direct.m"
{
#line 208 "structure_reuse.direct.m"
  {
#line 208 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 208 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;

#line 208 "structure_reuse.direct.m"
    {
#line 208 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    }
#line 208 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
#line 208 "structure_reuse.direct.m"
  }
#line 206 "structure_reuse.direct.m"
}

#line 157 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(
#line 157 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_9,
#line 157 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_10,
#line 157 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_11,
#line 157 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12,
#line 157 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo_13,
#line 157 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22,
#line 157 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23,
#line 157 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15)
#line 157 "structure_reuse.direct.m"
{
#line 162 "structure_reuse.direct.m"
  {
#line 162 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 162 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Globals_16;
#line 162 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17;
#line 162 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal0_19;
#line 162 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20;
#line 162 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal_21;

#line 163 "structure_reuse.direct.m"
    {
#line 163 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__Globals_16);
    }
#line 164 "structure_reuse.direct.m"
    {
#line 164 "structure_reuse.direct.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Globals_16, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17);
    }
#line 167 "structure_reuse.direct.m"
    {
#line 167 "structure_reuse.direct.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Direct reuse analysis of ", transform_hlds__ctgc__structure_reuse__direct__PredId_10, transform_hlds__ctgc__structure_reuse__direct__ProcId_11, transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12);
    }
#line 171 "structure_reuse.direct.m"
    {
#line 171 "structure_reuse.direct.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__ctgc__structure_reuse__direct__Goal0_19);
    }
#line 176 "structure_reuse.direct.m"
    {
#line 176 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__PredInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__SharingTable_9, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    }
#line 179 "structure_reuse.direct.m"
    {
#line 179 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    }
#line 185 "structure_reuse.direct.m"
    {
#line 185 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15);
    }
#line 188 "structure_reuse.direct.m"
    {
#line 188 "structure_reuse.direct.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23);
    }
#line 191 "structure_reuse.direct.m"
    {
#line 191 "structure_reuse.direct.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, (MR_String) "% reuse analysis done.\n");
#line 191 "structure_reuse.direct.m"
      return;
    }
#line 162 "structure_reuse.direct.m"
  }
#line 157 "structure_reuse.direct.m"
}

#line 134 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(
#line 134 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_8,
#line 134 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_9,
#line 134 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
#line 134 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24,
#line 134 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25,
#line 134 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26,
#line 134 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27)
#line 134 "structure_reuse.direct.m"
{
#line 139 "structure_reuse.direct.m"
  {
#line 139 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_33_33;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds0_13;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred0_14;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs0_15;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc0_16;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc_17;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs_21;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred_22;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds_23;
#line 139 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_28_28;
#line 141 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14;
#line 143 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16;

#line 140 "structure_reuse.direct.m"
    {
#line 140 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__ctgc__structure_reuse__direct__Preds0_13);
    }
#line 1137 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1139 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 141 "structure_reuse.direct.m"
    {
#line 141 "structure_reuse.direct.m"
      mercury__map__lookup_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__direct__Preds0_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), &transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
    }
#line 141 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__Pred0_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
#line 142 "structure_reuse.direct.m"
    {
#line 142 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Procs0_15);
    }
#line 1153 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 1155 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 143 "structure_reuse.direct.m"
    {
#line 143 "structure_reuse.direct.m"
      mercury__map__lookup_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, transform_hlds__ctgc__structure_reuse__direct__Procs0_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10)), &transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
    }
#line 143 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__Proc0_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
#line 145 "structure_reuse.direct.m"
    {
#line 145 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_8, transform_hlds__ctgc__structure_reuse__direct__PredId_9, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, transform_hlds__ctgc__structure_reuse__direct__Proc0_16, &transform_hlds__ctgc__structure_reuse__direct__Proc_17, &transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18);
    }
#line 149 "structure_reuse.direct.m"
    {
#line 149 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18));
#line 149 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 1) = ((MR_Box) ((MR_Integer) 2));
#line 149 "structure_reuse.direct.m"
    }
#line 150 "structure_reuse.direct.m"
    {
#line 150 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9));
#line 150 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
#line 150 "structure_reuse.direct.m"
    }
#line 150 "structure_reuse.direct.m"
    {
#line 150 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__V_28_28, transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27);
    }
#line 152 "structure_reuse.direct.m"
    {
#line 152 "structure_reuse.direct.m"
      mercury__map__det_update_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_33_33, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Proc_17)), transform_hlds__ctgc__structure_reuse__direct__Procs0_15, &transform_hlds__ctgc__structure_reuse__direct__Procs_21);
    }
#line 153 "structure_reuse.direct.m"
    {
#line 153 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Procs_21, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Pred_22);
    }
#line 154 "structure_reuse.direct.m"
    {
#line 154 "structure_reuse.direct.m"
      mercury__map__det_update_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Pred_22)), transform_hlds__ctgc__structure_reuse__direct__Preds0_13, &transform_hlds__ctgc__structure_reuse__direct__Preds_23);
    }
#line 155 "structure_reuse.direct.m"
    {
#line 155 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Preds_23, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25);
#line 155 "structure_reuse.direct.m"
      return;
    }
#line 139 "structure_reuse.direct.m"
  }
#line 134 "structure_reuse.direct.m"
}

#line 123 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(
#line 123 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
#line 123 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
#line 123 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12,
#line 123 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13,
#line 123 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14,
#line 123 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15)
#line 123 "structure_reuse.direct.m"
{
#line 128 "structure_reuse.direct.m"
  {
#line 128 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 128 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "structure_reuse.direct.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 1)));

#line 129 "structure_reuse.direct.m"
    {
#line 129 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_7, transform_hlds__ctgc__structure_reuse__direct__PredId_8, transform_hlds__ctgc__structure_reuse__direct__ProcId_9, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15);
#line 129 "structure_reuse.direct.m"
      return;
    }
#line 128 "structure_reuse.direct.m"
  }
#line 123 "structure_reuse.direct.m"
}

#line 110 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
#line 110 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_7,
#line 110 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8,
#line 110 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Status_9,
#line 110 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
#line 110 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12,
#line 110 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13)
#line 110 "structure_reuse.direct.m"
{
#line 114 "structure_reuse.direct.m"
  {
#line 114 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 114 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_14_14;
#line 114 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;

#line 115 "structure_reuse.direct.m"
    {
#line 115 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_7));
#line 115 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
#line 115 "structure_reuse.direct.m"
    }
#line 116 "structure_reuse.direct.m"
    {
#line 116 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 116 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8));
#line 116 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Status_9));
#line 116 "structure_reuse.direct.m"
    }
#line 115 "structure_reuse.direct.m"
    {
#line 115 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__V_14_14, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13);
#line 115 "structure_reuse.direct.m"
      return;
    }
#line 114 "structure_reuse.direct.m"
  }
#line 110 "structure_reuse.direct.m"
}

#line 106 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 106 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 106 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 106 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 106 "structure_reuse.direct.m"
{
#line 106 "structure_reuse.direct.m"
  {
#line 106 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 106 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25;
#line 106 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27;

#line 106 "structure_reuse.direct.m"
    {
#line 106 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27);
    }
#line 106 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25));
#line 106 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27));
#line 106 "structure_reuse.direct.m"
  }
#line 106 "structure_reuse.direct.m"
}

#line 102 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 102 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 102 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
#line 102 "structure_reuse.direct.m"
{
#line 102 "structure_reuse.direct.m"
  {
#line 102 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 102 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13;

#line 102 "structure_reuse.direct.m"
    {
#line 102 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13);
    }
#line 102 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13));
#line 102 "structure_reuse.direct.m"
  }
#line 102 "structure_reuse.direct.m"
}

#line 83 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(
#line 83 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
#line 83 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8,
#line 83 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_16,
#line 83 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_17,
#line 83 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_18,
#line 83 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_19)
#line 83 "structure_reuse.direct.m"
{
#line 87 "structure_reuse.direct.m"
  {
#line 87 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 87 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11;
#line 90 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Origin_12;
#line 91 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_13_13;

#line 88 "structure_reuse.direct.m"
    {
#line 88 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ctgc__structure_reuse__direct__PredId_8, &transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
    }
#line 90 "structure_reuse.direct.m"
    {
#line 90 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__Origin_12);
    }
#line 91 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 91 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 91 "structure_reuse.direct.m"
      {
#line 91 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Origin_12, (MR_Integer) 0)));
#line 94 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_19 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_18;
#line 94 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_17 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_16;
#line 91 "structure_reuse.direct.m"
      }
#line 91 "structure_reuse.direct.m"
    else
#line 104 "structure_reuse.direct.m"
      {
#line 96 "structure_reuse.direct.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__V_42_42;
#line 96 "structure_reuse.direct.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__V_44_44;

#line 96 "structure_reuse.direct.m"
        {
#line 96 "structure_reuse.direct.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__V_42_42);
        }
#line 96 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 96 "structure_reuse.direct.m"
        if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 96 "structure_reuse.direct.m"
          {
#line 96 "structure_reuse.direct.m"
            transform_hlds__ctgc__structure_reuse__direct__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__V_42_42, (MR_Integer) 0)));
#line 101 "structure_reuse.direct.m"
            {
#line 101 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_21_21;
#line 101 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_22_22;
#line 101 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_24_24;
#line 101 "structure_reuse.direct.m"
              MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_19;

#line 102 "structure_reuse.direct.m"
              {
#line 102 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_24_24 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
              }
#line 102 "structure_reuse.direct.m"
              {
#line 102 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[2]));
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1));
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__V_24_24));
#line 102 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_21_21, 5) = ((MR_Box) ((MR_Integer) 2));
#line 102 "structure_reuse.direct.m"
              }
#line 103 "structure_reuse.direct.m"
              {
#line 103 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_22_22 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
              }
#line 101 "structure_reuse.direct.m"
              {
#line 101 "structure_reuse.direct.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_21_21, transform_hlds__ctgc__structure_reuse__direct__V_22_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_18)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_19);
              }
#line 101 "structure_reuse.direct.m"
              *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_19);
#line 101 "structure_reuse.direct.m"
              *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_17 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_16;
#line 101 "structure_reuse.direct.m"
            }
#line 96 "structure_reuse.direct.m"
          }
#line 96 "structure_reuse.direct.m"
        else
#line 105 "structure_reuse.direct.m"
          {
#line 105 "structure_reuse.direct.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__ProcIds_15;
#line 105 "structure_reuse.direct.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__V_26_26;
#line 106 "structure_reuse.direct.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_17;
#line 106 "structure_reuse.direct.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_19;

#line 105 "structure_reuse.direct.m"
            {
#line 105 "structure_reuse.direct.m"
              transform_hlds__ctgc__structure_reuse__direct__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
            }
#line 106 "structure_reuse.direct.m"
            {
#line 106 "structure_reuse.direct.m"
              transform_hlds__ctgc__structure_reuse__direct__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 106 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_26_26, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[0]));
#line 106 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_26_26, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2));
#line 106 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 106 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_26_26, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
#line 106 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_26_26, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
#line 106 "structure_reuse.direct.m"
            }
#line 106 "structure_reuse.direct.m"
            {
#line 106 "structure_reuse.direct.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_26_26, transform_hlds__ctgc__structure_reuse__direct__ProcIds_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_16)), &transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_18)), &transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_19);
            }
#line 106 "structure_reuse.direct.m"
            *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_17);
#line 106 "structure_reuse.direct.m"
            *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_19);
#line 105 "structure_reuse.direct.m"
          }
#line 104 "structure_reuse.direct.m"
      }
#line 87 "structure_reuse.direct.m"
  }
#line 83 "structure_reuse.direct.m"
}

#line 120 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 120 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 120 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 120 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 120 "structure_reuse.direct.m"
{
#line 120 "structure_reuse.direct.m"
  {
#line 120 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 120 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13;
#line 120 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15;

#line 120 "structure_reuse.direct.m"
    {
#line 120 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15);
    }
#line 120 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13));
#line 120 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15));
#line 120 "structure_reuse.direct.m"
  }
#line 120 "structure_reuse.direct.m"
}

#line 45 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0(
#line 45 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
#line 45 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PPIds_8,
#line 45 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11,
#line 45 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12,
#line 45 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13,
#line 45 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14)
#line 45 "structure_reuse.direct.m"
{
#line 119 "structure_reuse.direct.m"
  {
#line 119 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 119 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;
#line 120 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 120 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

#line 120 "structure_reuse.direct.m"
    {
#line 120 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 120 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1]));
#line 120 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1));
#line 120 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 120 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
#line 120 "structure_reuse.direct.m"
    }
#line 120 "structure_reuse.direct.m"
    {
#line 120 "structure_reuse.direct.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__PPIds_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    }
#line 120 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 120 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
#line 119 "structure_reuse.direct.m"
  }
#line 45 "structure_reuse.direct.m"
}

#line 80 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 80 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 80 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 80 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 80 "structure_reuse.direct.m"
{
#line 80 "structure_reuse.direct.m"
  {
#line 80 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 80 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_17;
#line 80 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_19;

#line 80 "structure_reuse.direct.m"
    {
#line 80 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_19);
    }
#line 80 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_17));
#line 80 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_19));
#line 80 "structure_reuse.direct.m"
  }
#line 80 "structure_reuse.direct.m"
}

#line 76 "structure_reuse.direct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
#line 76 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 76 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1)
#line 76 "structure_reuse.direct.m"
{
#line 76 "structure_reuse.direct.m"
  {
#line 76 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 76 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

#line 76 "structure_reuse.direct.m"
    {
#line 76 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1));
    }
#line 76 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 76 "structure_reuse.direct.m"
  }
#line 76 "structure_reuse.direct.m"
}

#line 39 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0(
#line 39 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_6,
#line 39 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11,
#line 39 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12,
#line 39 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13,
#line 39 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14)
#line 39 "structure_reuse.direct.m"
{
#line 73 "structure_reuse.direct.m"
  {
#line 73 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 73 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20;
#line 73 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9;
#line 73 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10;
#line 73 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;
#line 73 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_16_16;
#line 80 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 80 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

#line 75 "structure_reuse.direct.m"
    {
#line 75 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9);
    }
#line 76 "structure_reuse.direct.m"
    {
#line 76 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 76 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[0]));
#line 76 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1));
#line 76 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 76 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11));
#line 76 "structure_reuse.direct.m"
    }
#line 1784 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 76 "structure_reuse.direct.m"
    {
#line 76 "structure_reuse.direct.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9, &transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10);
    }
#line 80 "structure_reuse.direct.m"
    {
#line 80 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 80 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[0]));
#line 80 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2));
#line 80 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 80 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_6));
#line 80 "structure_reuse.direct.m"
    }
#line 80 "structure_reuse.direct.m"
    {
#line 80 "structure_reuse.direct.m"
      mercury__list__foldl2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_16_16, transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    }
#line 80 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 80 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
#line 73 "structure_reuse.direct.m"
  }
#line 39 "structure_reuse.direct.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.direct. */
