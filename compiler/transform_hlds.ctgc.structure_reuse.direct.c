/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 150 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 153 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 156 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 159 "transform_hlds.ctgc.structure_reuse.direct.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
#line 162 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 164 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2);

#line 167 "transform_hlds.ctgc.structure_reuse.direct.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
#line 170 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 172 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 174 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);

#line 275 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 275 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

#line 251 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 251 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4);

#line 108 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 108 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 108 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 104 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 104 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3);

#line 122 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 122 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 122 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 81 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 81 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 81 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5);

#line 77 "structure_reuse.direct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
#line 77 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 77 "structure_reuse.direct.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 406 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 415 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 424 "transform_hlds.ctgc.structure_reuse.direct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 433 "transform_hlds.ctgc.structure_reuse.direct.c"
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

#line 450 "transform_hlds.ctgc.structure_reuse.direct.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
#line 453 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 455 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2)
#line 457 "transform_hlds.ctgc.structure_reuse.direct.c"
{
#line 459 "transform_hlds.ctgc.structure_reuse.direct.c"
  {
#line 461 "transform_hlds.ctgc.structure_reuse.direct.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 464 "transform_hlds.ctgc.structure_reuse.direct.c"
    {
#line 466 "transform_hlds.ctgc.structure_reuse.direct.c"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
    }
#line 469 "transform_hlds.ctgc.structure_reuse.direct.c"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 471 "transform_hlds.ctgc.structure_reuse.direct.c"
  }
#line 473 "transform_hlds.ctgc.structure_reuse.direct.c"
}

#line 476 "transform_hlds.ctgc.structure_reuse.direct.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
#line 479 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 481 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 483 "transform_hlds.ctgc.structure_reuse.direct.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
#line 485 "transform_hlds.ctgc.structure_reuse.direct.c"
{
#line 487 "transform_hlds.ctgc.structure_reuse.direct.c"
  {
#line 489 "transform_hlds.ctgc.structure_reuse.direct.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1;

#line 492 "transform_hlds.ctgc.structure_reuse.direct.c"
    {
#line 494 "transform_hlds.ctgc.structure_reuse.direct.c"
      transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3));
    }
#line 497 "transform_hlds.ctgc.structure_reuse.direct.c"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_HeadVar__1_1));
#line 499 "transform_hlds.ctgc.structure_reuse.direct.c"
  }
#line 501 "transform_hlds.ctgc.structure_reuse.direct.c"
}

#line 204 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(
#line 204 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
#line 204 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
#line 204 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3)
#line 204 "structure_reuse.direct.m"
{
#line 204 "structure_reuse.direct.m"
  {
#line 204 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 204 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;
#line 204 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__3_3;

#line 204 "structure_reuse.direct.m"
    {
#line 204 "structure_reuse.direct.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_5)));
#line 204 "structure_reuse.direct.m"
      return;
    }
#line 204 "structure_reuse.direct.m"
  }
#line 204 "structure_reuse.direct.m"
}

#line 204 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(
#line 204 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1,
#line 204 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2)
#line 204 "structure_reuse.direct.m"
{
#line 204 "structure_reuse.direct.m"
  {
#line 204 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 204 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
#line 204 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2;

#line 204 "structure_reuse.direct.m"
    {
#line 204 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Cast_HeadVar2_4)));
    }
#line 204 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 204 "structure_reuse.direct.m"
  }
#line 204 "structure_reuse.direct.m"
}

#line 279 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(
#line 279 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 279 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Cond_6)
#line 279 "structure_reuse.direct.m"
{
#line 282 "structure_reuse.direct.m"
  {
#line 282 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 283 "structure_reuse.direct.m"
    {
#line 283 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__Cond_6);
    }
#line 285 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 284 "structure_reuse.direct.m"
      {
#line 284 "structure_reuse.direct.m"
        {
#line 284 "structure_reuse.direct.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t|  cond  |\t");
        }
#line 284 "structure_reuse.direct.m"
      }
#line 285 "structure_reuse.direct.m"
    else
#line 286 "structure_reuse.direct.m"
      {
#line 286 "structure_reuse.direct.m"
        {
#line 286 "structure_reuse.direct.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t| always |\t");
        }
#line 286 "structure_reuse.direct.m"
      }
#line 288 "structure_reuse.direct.m"
    {
#line 288 "structure_reuse.direct.m"
      transform_hlds__smm_common__dump_program_point_3_p_0(transform_hlds__ctgc__structure_reuse__direct__PP_5);
    }
#line 289 "structure_reuse.direct.m"
    {
#line 289 "structure_reuse.direct.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 289 "structure_reuse.direct.m"
      return;
    }
#line 282 "structure_reuse.direct.m"
  }
#line 279 "structure_reuse.direct.m"
}

#line 275 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 275 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 275 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
#line 275 "structure_reuse.direct.m"
{
#line 275 "structure_reuse.direct.m"
  {
#line 275 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

#line 275 "structure_reuse.direct.m"
    {
#line 275 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2));
#line 275 "structure_reuse.direct.m"
      return;
    }
#line 275 "structure_reuse.direct.m"
  }
#line 275 "structure_reuse.direct.m"
}

#line 266 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(
#line 266 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5,
#line 266 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_6)
#line 266 "structure_reuse.direct.m"
{
#line 271 "structure_reuse.direct.m"
  {
#line 271 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 271 "structure_reuse.direct.m"
#line 271 "structure_reuse.direct.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__MaybeDump_5) {
#line 271 "structure_reuse.direct.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 271 "structure_reuse.direct.m"
      case (MR_Integer) 0:
#line 271 "structure_reuse.direct.m"
        {
#line 271 "structure_reuse.direct.m"
        }
#line 271 "structure_reuse.direct.m"
        break;
#line 271 "structure_reuse.direct.m"
      case (MR_Integer) 1:
#line 273 "structure_reuse.direct.m"
        {
#line 275 "structure_reuse.direct.m"
          MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13;

#line 274 "structure_reuse.direct.m"
          {
#line 274 "structure_reuse.direct.m"
            mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
          }
#line 275 "structure_reuse.direct.m"
          {
#line 275 "structure_reuse.direct.m"
            mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__direct__Table_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_IO_13_13);
          }
#line 276 "structure_reuse.direct.m"
          {
#line 276 "structure_reuse.direct.m"
            mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
#line 276 "structure_reuse.direct.m"
            return;
          }
#line 273 "structure_reuse.direct.m"
        }
#line 271 "structure_reuse.direct.m"
        break;
#line 271 "structure_reuse.direct.m"
    }
#line 271 "structure_reuse.direct.m"
  }
#line 266 "structure_reuse.direct.m"
}

#line 254 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(
#line 254 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 254 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__C_6,
#line 254 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
#line 254 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
#line 254 "structure_reuse.direct.m"
{
#line 260 "structure_reuse.direct.m"
  {
#line 260 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 258 "structure_reuse.direct.m"
    {
#line 258 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__C_6);
    }
#line 260 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 260 "structure_reuse.direct.m"
      *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8;
#line 260 "structure_reuse.direct.m"
    else
#line 234 "structure_reuse.direct.m"
      {
#line 234 "structure_reuse.direct.m"
        {
#line 234 "structure_reuse.direct.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__C_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
#line 234 "structure_reuse.direct.m"
          return;
        }
#line 234 "structure_reuse.direct.m"
      }
#line 260 "structure_reuse.direct.m"
  }
#line 254 "structure_reuse.direct.m"
}

#line 251 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 251 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 251 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4)
#line 251 "structure_reuse.direct.m"
{
#line 251 "structure_reuse.direct.m"
  {
#line 251 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 251 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9;

#line 251 "structure_reuse.direct.m"
    {
#line 251 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9);
    }
#line 251 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_Table_9));
#line 251 "structure_reuse.direct.m"
  }
#line 251 "structure_reuse.direct.m"
}

#line 247 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(
#line 247 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4,
#line 247 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5)
#line 247 "structure_reuse.direct.m"
{
#line 250 "structure_reuse.direct.m"
  {
#line 250 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 250 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_7_7;
#line 251 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5;

#line 210 "structure_reuse.direct.m"
    {
#line 210 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_7_7 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    }
#line 251 "structure_reuse.direct.m"
    {
#line 251 "structure_reuse.direct.m"
      mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_4, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__V_7_7)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
    }
#line 251 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_5 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_Table_5);
#line 250 "structure_reuse.direct.m"
  }
#line 247 "structure_reuse.direct.m"
}

#line 238 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(
#line 238 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
#line 238 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7,
#line 238 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8)
#line 238 "structure_reuse.direct.m"
{
#line 242 "structure_reuse.direct.m"
  {
#line 242 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 242 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_6_6;
#line 242 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6;

#line 242 "structure_reuse.direct.m"
    {
#line 242 "structure_reuse.direct.m"
      mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_7, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_8);
    }
#line 242 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__V_6_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_V_6_6);
#line 242 "structure_reuse.direct.m"
  }
#line 238 "structure_reuse.direct.m"
}

#line 230 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_p_0(
#line 230 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_5,
#line 230 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__RC_6,
#line 230 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8,
#line 230 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9)
#line 230 "structure_reuse.direct.m"
{
#line 234 "structure_reuse.direct.m"
  {
#line 234 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 234 "structure_reuse.direct.m"
    {
#line 234 "structure_reuse.direct.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__RC_6)), transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_Table_9);
#line 234 "structure_reuse.direct.m"
      return;
    }
#line 234 "structure_reuse.direct.m"
  }
#line 230 "structure_reuse.direct.m"
}

#line 222 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(
#line 222 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PP_4,
#line 222 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_5,
#line 222 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6)
#line 222 "structure_reuse.direct.m"
{
#line 226 "structure_reuse.direct.m"
  {
#line 226 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 226 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6;

#line 226 "structure_reuse.direct.m"
    {
#line 226 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_5, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PP_4)), &transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
    }
#line 226 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 226 "structure_reuse.direct.m"
      {
#line 226 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__ReuseCond_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_ReuseCond_6);
#line 226 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__succeeded = MR_TRUE;
#line 226 "structure_reuse.direct.m"
      }
#line 226 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 226 "structure_reuse.direct.m"
  }
#line 222 "structure_reuse.direct.m"
}

#line 214 "structure_reuse.direct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(
#line 214 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Table_2)
#line 214 "structure_reuse.direct.m"
{
#line 217 "structure_reuse.direct.m"
  {
#line 217 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;

#line 217 "structure_reuse.direct.m"
    {
#line 217 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0, transform_hlds__ctgc__structure_reuse__direct__Table_2);
    }
#line 217 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 217 "structure_reuse.direct.m"
  }
#line 214 "structure_reuse.direct.m"
}

#line 208 "structure_reuse.direct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_f_0(void)
#line 208 "structure_reuse.direct.m"
{
#line 210 "structure_reuse.direct.m"
  {
#line 210 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 210 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;

#line 210 "structure_reuse.direct.m"
    {
#line 210 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
    }
#line 210 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__HeadVar__1_1;
#line 210 "structure_reuse.direct.m"
  }
#line 208 "structure_reuse.direct.m"
}

#line 159 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(
#line 159 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_9,
#line 159 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_10,
#line 159 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_11,
#line 159 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12,
#line 159 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo_13,
#line 159 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22,
#line 159 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23,
#line 159 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15)
#line 159 "structure_reuse.direct.m"
{
#line 164 "structure_reuse.direct.m"
  {
#line 164 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 164 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Globals_16;
#line 164 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17;
#line 164 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal0_19;
#line 164 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20;
#line 164 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Goal_21;

#line 165 "structure_reuse.direct.m"
    {
#line 165 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__Globals_16);
    }
#line 166 "structure_reuse.direct.m"
    {
#line 166 "structure_reuse.direct.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Globals_16, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17);
    }
#line 169 "structure_reuse.direct.m"
    {
#line 169 "structure_reuse.direct.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Direct reuse analysis of ", transform_hlds__ctgc__structure_reuse__direct__PredId_10, transform_hlds__ctgc__structure_reuse__direct__ProcId_11, transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12);
    }
#line 173 "structure_reuse.direct.m"
    {
#line 173 "structure_reuse.direct.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__ctgc__structure_reuse__direct__Goal0_19);
    }
#line 178 "structure_reuse.direct.m"
    {
#line 178 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__PredInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__SharingTable_9, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    }
#line 181 "structure_reuse.direct.m"
    {
#line 181 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20);
    }
#line 187 "structure_reuse.direct.m"
    {
#line 187 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(transform_hlds__ctgc__structure_reuse__direct__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__DeadCellTable_20, transform_hlds__ctgc__structure_reuse__direct__Goal0_19, &transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__ReuseAs_15);
    }
#line 190 "structure_reuse.direct.m"
    {
#line 190 "structure_reuse.direct.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Goal_21, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ProcInfo_23);
    }
#line 193 "structure_reuse.direct.m"
    {
#line 193 "structure_reuse.direct.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__VeryVerbose_17, (MR_String) "% reuse analysis done.\n");
#line 193 "structure_reuse.direct.m"
      return;
    }
#line 164 "structure_reuse.direct.m"
  }
#line 159 "structure_reuse.direct.m"
}

#line 136 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(
#line 136 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_8,
#line 136 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_9,
#line 136 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
#line 136 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24,
#line 136 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25,
#line 136 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26,
#line 136 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27)
#line 136 "structure_reuse.direct.m"
{
#line 141 "structure_reuse.direct.m"
  {
#line 141 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds0_13;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred0_14;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs0_15;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc0_16;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Proc_17;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Procs_21;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Pred_22;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Preds_23;
#line 141 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_28_28;
#line 143 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14;
#line 145 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16;

#line 142 "structure_reuse.direct.m"
    {
#line 142 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__ctgc__structure_reuse__direct__Preds0_13);
    }
#line 1131 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1133 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 143 "structure_reuse.direct.m"
    {
#line 143 "structure_reuse.direct.m"
      mercury__map__lookup_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, transform_hlds__ctgc__structure_reuse__direct__Preds0_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), &transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
    }
#line 143 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__Pred0_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv0_Pred0_14);
#line 144 "structure_reuse.direct.m"
    {
#line 144 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Procs0_15);
    }
#line 1147 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 145 "structure_reuse.direct.m"
    {
#line 145 "structure_reuse.direct.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, transform_hlds__ctgc__structure_reuse__direct__Procs0_15, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, &transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
    }
#line 145 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__Proc0_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_Proc0_16);
#line 147 "structure_reuse.direct.m"
    {
#line 147 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_8, transform_hlds__ctgc__structure_reuse__direct__PredId_9, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, transform_hlds__ctgc__structure_reuse__direct__Proc0_16, &transform_hlds__ctgc__structure_reuse__direct__Proc_17, &transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18);
    }
#line 151 "structure_reuse.direct.m"
    {
#line 151 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 151 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_18));
#line 151 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, 1) = ((MR_Box) ((MR_Integer) 2));
#line 151 "structure_reuse.direct.m"
    }
#line 152 "structure_reuse.direct.m"
    {
#line 152 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9));
#line 152 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
#line 152 "structure_reuse.direct.m"
    }
#line 152 "structure_reuse.direct.m"
    {
#line 152 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__V_28_28, transform_hlds__ctgc__structure_reuse__direct__AsAndStatus_20, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_26, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_27);
    }
#line 154 "structure_reuse.direct.m"
    {
#line 154 "structure_reuse.direct.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_34_34, transform_hlds__ctgc__structure_reuse__direct__ProcId_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Proc_17)), transform_hlds__ctgc__structure_reuse__direct__Procs0_15, &transform_hlds__ctgc__structure_reuse__direct__Procs_21);
    }
#line 155 "structure_reuse.direct.m"
    {
#line 155 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Procs_21, transform_hlds__ctgc__structure_reuse__direct__Pred0_14, &transform_hlds__ctgc__structure_reuse__direct__Pred_22);
    }
#line 156 "structure_reuse.direct.m"
    {
#line 156 "structure_reuse.direct.m"
      mercury__map__det_update_4_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Pred_22)), transform_hlds__ctgc__structure_reuse__direct__Preds0_13, &transform_hlds__ctgc__structure_reuse__direct__Preds_23);
    }
#line 157 "structure_reuse.direct.m"
    {
#line 157 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__ctgc__structure_reuse__direct__Preds_23, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_25);
#line 157 "structure_reuse.direct.m"
      return;
    }
#line 141 "structure_reuse.direct.m"
  }
#line 136 "structure_reuse.direct.m"
}

#line 125 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(
#line 125 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
#line 125 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2,
#line 125 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12,
#line 125 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13,
#line 125 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14,
#line 125 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15)
#line 125 "structure_reuse.direct.m"
{
#line 130 "structure_reuse.direct.m"
  {
#line 130 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 130 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "structure_reuse.direct.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__HeadVar__2_2, (MR_Integer) 1)));

#line 131 "structure_reuse.direct.m"
    {
#line 131 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(transform_hlds__ctgc__structure_reuse__direct__SharingTable_7, transform_hlds__ctgc__structure_reuse__direct__PredId_8, transform_hlds__ctgc__structure_reuse__direct__ProcId_9, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_13, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_14, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_15);
#line 131 "structure_reuse.direct.m"
      return;
    }
#line 130 "structure_reuse.direct.m"
  }
#line 125 "structure_reuse.direct.m"
}

#line 112 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
#line 112 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_7,
#line 112 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8,
#line 112 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__Status_9,
#line 112 "structure_reuse.direct.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__ProcId_10,
#line 112 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12,
#line 112 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13)
#line 112 "structure_reuse.direct.m"
{
#line 116 "structure_reuse.direct.m"
  {
#line 116 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 116 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_14_14;
#line 116 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;

#line 117 "structure_reuse.direct.m"
    {
#line 117 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_14_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_7));
#line 117 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ProcId_10));
#line 117 "structure_reuse.direct.m"
    }
#line 118 "structure_reuse.direct.m"
    {
#line 118 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__ReuseAs_8));
#line 118 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__Status_9));
#line 118 "structure_reuse.direct.m"
    }
#line 117 "structure_reuse.direct.m"
    {
#line 117 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__direct__V_14_14, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_12, transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_13);
#line 117 "structure_reuse.direct.m"
      return;
    }
#line 116 "structure_reuse.direct.m"
  }
#line 112 "structure_reuse.direct.m"
}

#line 108 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 108 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 108 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 108 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 108 "structure_reuse.direct.m"
{
#line 108 "structure_reuse.direct.m"
  {
#line 108 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 108 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25;
#line 108 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27;

#line 108 "structure_reuse.direct.m"
    {
#line 108 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27);
    }
#line 108 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_25));
#line 108 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_27));
#line 108 "structure_reuse.direct.m"
  }
#line 108 "structure_reuse.direct.m"
}

#line 104 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 104 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 104 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3)
#line 104 "structure_reuse.direct.m"
{
#line 104 "structure_reuse.direct.m"
  {
#line 104 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 104 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13;

#line 104 "structure_reuse.direct.m"
    {
#line 104 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13);
    }
#line 104 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_13));
#line 104 "structure_reuse.direct.m"
  }
#line 104 "structure_reuse.direct.m"
}

#line 84 "structure_reuse.direct.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(
#line 84 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__SharingTable_7,
#line 84 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__PredId_8,
#line 84 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18,
#line 84 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19,
#line 84 "structure_reuse.direct.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20,
#line 84 "structure_reuse.direct.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21)
#line 84 "structure_reuse.direct.m"
{
#line 88 "structure_reuse.direct.m"
  {
#line 88 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 88 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11;
#line 91 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__Origin_12;
#line 92 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_13_13;
#line 92 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_14_14;

#line 89 "structure_reuse.direct.m"
    {
#line 89 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__ctgc__structure_reuse__direct__PredId_8, &transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
    }
#line 91 "structure_reuse.direct.m"
    {
#line 91 "structure_reuse.direct.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__Origin_12);
    }
#line 92 "structure_reuse.direct.m"
    transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 92 "structure_reuse.direct.m"
    if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 92 "structure_reuse.direct.m"
      {
#line 92 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Origin_12, (MR_Integer) 0)));
#line 92 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__Origin_12, (MR_Integer) 1)));
#line 95 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20;
#line 95 "structure_reuse.direct.m"
        *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18;
#line 92 "structure_reuse.direct.m"
      }
#line 92 "structure_reuse.direct.m"
    else
#line 106 "structure_reuse.direct.m"
      {
#line 97 "structure_reuse.direct.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__PredStatus_15;
#line 97 "structure_reuse.direct.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__V_22_22;
#line 98 "structure_reuse.direct.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__V_16_16;

#line 97 "structure_reuse.direct.m"
        {
#line 97 "structure_reuse.direct.m"
          hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11, &transform_hlds__ctgc__structure_reuse__direct__PredStatus_15);
        }
#line 98 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__V_22_22 = (MR_Word) transform_hlds__ctgc__structure_reuse__direct__PredStatus_15;
#line 98 "structure_reuse.direct.m"
        transform_hlds__ctgc__structure_reuse__direct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 98 "structure_reuse.direct.m"
        if (transform_hlds__ctgc__structure_reuse__direct__succeeded)
#line 98 "structure_reuse.direct.m"
          {
#line 98 "structure_reuse.direct.m"
            transform_hlds__ctgc__structure_reuse__direct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__V_22_22, (MR_Integer) 0)));
#line 103 "structure_reuse.direct.m"
            {
#line 103 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_23_23;
#line 103 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_24_24;
#line 103 "structure_reuse.direct.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__V_26_26;
#line 103 "structure_reuse.direct.m"
              MR_Box transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21;

#line 104 "structure_reuse.direct.m"
              {
#line 104 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_26_26 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
              }
#line 104 "structure_reuse.direct.m"
              {
#line 104 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[2]));
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1));
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__V_26_26));
#line 104 "structure_reuse.direct.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_23_23, 5) = ((MR_Box) ((MR_Integer) 2));
#line 104 "structure_reuse.direct.m"
              }
#line 105 "structure_reuse.direct.m"
              {
#line 105 "structure_reuse.direct.m"
                transform_hlds__ctgc__structure_reuse__direct__V_24_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
              }
#line 103 "structure_reuse.direct.m"
              {
#line 103 "structure_reuse.direct.m"
                mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_23_23, transform_hlds__ctgc__structure_reuse__direct__V_24_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21);
              }
#line 103 "structure_reuse.direct.m"
              *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ReuseTable_21);
#line 103 "structure_reuse.direct.m"
              *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18;
#line 103 "structure_reuse.direct.m"
            }
#line 98 "structure_reuse.direct.m"
          }
#line 98 "structure_reuse.direct.m"
        else
#line 107 "structure_reuse.direct.m"
          {
#line 107 "structure_reuse.direct.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__ProcIds_17;
#line 107 "structure_reuse.direct.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__V_28_28;
#line 108 "structure_reuse.direct.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19;
#line 108 "structure_reuse.direct.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21;

#line 107 "structure_reuse.direct.m"
            {
#line 107 "structure_reuse.direct.m"
              transform_hlds__ctgc__structure_reuse__direct__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__PredInfo0_11);
            }
#line 108 "structure_reuse.direct.m"
            {
#line 108 "structure_reuse.direct.m"
              transform_hlds__ctgc__structure_reuse__direct__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 108 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[0]));
#line 108 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2));
#line 108 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
#line 108 "structure_reuse.direct.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_28_28, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__PredId_8));
#line 108 "structure_reuse.direct.m"
            }
#line 108 "structure_reuse.direct.m"
            {
#line 108 "structure_reuse.direct.m"
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_28_28, transform_hlds__ctgc__structure_reuse__direct__ProcIds_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_18)), &transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21);
            }
#line 108 "structure_reuse.direct.m"
            *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv5_STATE_VARIABLE_ModuleInfo_19);
#line 108 "structure_reuse.direct.m"
            *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv4_STATE_VARIABLE_ReuseTable_21);
#line 107 "structure_reuse.direct.m"
          }
#line 106 "structure_reuse.direct.m"
      }
#line 88 "structure_reuse.direct.m"
  }
#line 84 "structure_reuse.direct.m"
}

#line 122 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 122 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 122 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 122 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 122 "structure_reuse.direct.m"
{
#line 122 "structure_reuse.direct.m"
  {
#line 122 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 122 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13;
#line 122 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15;

#line 122 "structure_reuse.direct.m"
    {
#line 122 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15);
    }
#line 122 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_13));
#line 122 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_15));
#line 122 "structure_reuse.direct.m"
  }
#line 122 "structure_reuse.direct.m"
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
#line 121 "structure_reuse.direct.m"
  {
#line 121 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 121 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;
#line 122 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 122 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

#line 122 "structure_reuse.direct.m"
    {
#line 122 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 122 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1]));
#line 122 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1));
#line 122 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 122 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_7));
#line 122 "structure_reuse.direct.m"
    }
#line 122 "structure_reuse.direct.m"
    {
#line 122 "structure_reuse.direct.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__PPIds_8, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    }
#line 122 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 122 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
#line 121 "structure_reuse.direct.m"
  }
#line 45 "structure_reuse.direct.m"
}

#line 81 "structure_reuse.direct.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2,
#line 81 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3,
#line 81 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4,
#line 81 "structure_reuse.direct.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5)
#line 81 "structure_reuse.direct.m"
{
#line 81 "structure_reuse.direct.m"
  {
#line 81 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;
#line 81 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19;
#line 81 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21;

#line 81 "structure_reuse.direct.m"
    {
#line 81 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21);
    }
#line 81 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv1_STATE_VARIABLE_ModuleInfo_19));
#line 81 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__conv0_STATE_VARIABLE_ReuseTable_21));
#line 81 "structure_reuse.direct.m"
  }
#line 81 "structure_reuse.direct.m"
}

#line 77 "structure_reuse.direct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
#line 77 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__closure_arg,
#line 77 "structure_reuse.direct.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1)
#line 77 "structure_reuse.direct.m"
{
#line 77 "structure_reuse.direct.m"
  {
#line 77 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 77 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__closure = transform_hlds__ctgc__structure_reuse__direct__closure_arg;

#line 77 "structure_reuse.direct.m"
    {
#line 77 "structure_reuse.direct.m"
      return transform_hlds__ctgc__structure_reuse__direct__succeeded = transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__wrapper_arg_1));
    }
#line 77 "structure_reuse.direct.m"
    return transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 77 "structure_reuse.direct.m"
  }
#line 77 "structure_reuse.direct.m"
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
#line 74 "structure_reuse.direct.m"
  {
#line 74 "structure_reuse.direct.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__succeeded;
#line 74 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20;
#line 74 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9;
#line 74 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10;
#line 74 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_15_15;
#line 74 "structure_reuse.direct.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__V_16_16;
#line 81 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 81 "structure_reuse.direct.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14;

#line 76 "structure_reuse.direct.m"
    {
#line 76 "structure_reuse.direct.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9);
    }
#line 77 "structure_reuse.direct.m"
    {
#line 77 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 77 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[0]));
#line 77 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1));
#line 77 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 77 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_15_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11));
#line 77 "structure_reuse.direct.m"
    }
#line 1784 "transform_hlds.ctgc.structure_reuse.direct.c"
    transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 77 "structure_reuse.direct.m"
    {
#line 77 "structure_reuse.direct.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__direct__V_15_15, transform_hlds__ctgc__structure_reuse__direct__AllPredIds_9, &transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10);
    }
#line 81 "structure_reuse.direct.m"
    {
#line 81 "structure_reuse.direct.m"
      transform_hlds__ctgc__structure_reuse__direct__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 81 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[0]));
#line 81 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2));
#line 81 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 81 "structure_reuse.direct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__V_16_16, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__SharingTable_6));
#line 81 "structure_reuse.direct.m"
    }
#line 81 "structure_reuse.direct.m"
    {
#line 81 "structure_reuse.direct.m"
      mercury__list__foldl2_6_p_0(transform_hlds__ctgc__structure_reuse__direct__TypeCtorInfo_20_20, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__direct__V_16_16, transform_hlds__ctgc__structure_reuse__direct__ToBeAnalysedPredIds_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_0_13)), &transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
    }
#line 81 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 81 "structure_reuse.direct.m"
    *transform_hlds__ctgc__structure_reuse__direct__STATE_VARIABLE_ReuseTable_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__conv2_STATE_VARIABLE_ReuseTable_14);
#line 74 "structure_reuse.direct.m"
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
