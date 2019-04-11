/*
** Automatically generated from `pd_term.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module transform_hlds.pd_term. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_term__init
ENDINIT
*/

#include "transform_hlds.pd_term.mih"


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
#include "check_hlds.simplify.mih"
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
#include "hlds.pred_table.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2];

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3];

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1;

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2;

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1];

static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0[3];

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3];

static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3];

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1];

static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1];

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
  MR_Word transform_hlds__pd_term__Versions_6,
  MR_Word transform_hlds__pd_term__PredProcId0_7,
  MR_Word * transform_hlds__pd_term__PredProcId_8);

static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
  MR_Word transform_hlds__pd_term__Versions_6,
  MR_Word transform_hlds__pd_term__PredProcId0_7,
  MR_Word * transform_hlds__pd_term__PredProcId_8);

static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
  MR_Word * transform_hlds__pd_term__HeadVar__4_4);

static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
  MR_Word transform_hlds__pd_term__InstMap_2,
  MR_Word transform_hlds__pd_term__Args_3,
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7);

static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
  MR_Word transform_hlds__pd_term__InstMap_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
  MR_Integer transform_hlds__pd_term__ArgNo_4,
  MR_Word * transform_hlds__pd_term__HeadVar__5_5);


static /* final */ const MR_Box transform_hlds__pd_term_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__pd_term_scalar_common_2[5][3];




static /* final */ const MR_Box transform_hlds__pd_term_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_term_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__pd_term_scalar_common_2[1]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1 = {
  (MR_String) "possible_loop",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2 = {
  (MR_String) "loop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_check_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_term____Unify____global_check_result_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____global_check_result_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "global_check_result",
  {     transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0 },
  {     transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0 = {
  (MR_String) "global_term_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_term____Unify____global_term_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____global_term_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "global_term_info",
  {     transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0 },
  {     transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_term____Unify____local_term_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____local_term_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "local_term_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_multiple_covering_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "multiple_covering_goals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_pd_proc_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "pd_proc_term_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_proc_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_term____Unify____proc_pair_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____proc_pair_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "proc_pair",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_single_covering_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001)),
  (MR_String) "transform_hlds.pd_term",
  (MR_String) "single_covering_goals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_check_result_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____global_check_result_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____local_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____local_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____proc_pair_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____proc_pair_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____single_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

    {
      transform_hlds__pd_term____Compare____single_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
  MR_Word transform_hlds__pd_term__Versions_15,
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
  MR_Word * transform_hlds__pd_term__Result_17)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__SingleGoalCover0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_term__MultipleGoalCover0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_term__MultipleGoalCover_45;
    MR_Word transform_hlds__pd_term__SingleGoalCover_47;
    MR_Word transform_hlds__pd_term__FirstPredProcId_31;
    MR_Word transform_hlds__pd_term__MaybeLastPredProcId_40;
    MR_Word transform_hlds__pd_term__PredId1_20;
    MR_Integer transform_hlds__pd_term__ProcId1_21;
    MR_Word transform_hlds__pd_term__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_term__Var_53;
    MR_Word transform_hlds__pd_term__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_term__Var_22;
    MR_Word transform_hlds__pd_term__Var_23;
    MR_Word transform_hlds__pd_term__Var_24;
    MR_Word transform_hlds__pd_term__Var_25;

    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Var_50)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__pd_term__succeeded)
      {
        transform_hlds__pd_term__PredId1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 0)));
        transform_hlds__pd_term__ProcId1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 1)));
        transform_hlds__pd_term__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 2)));
        transform_hlds__pd_term__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 3)));
        transform_hlds__pd_term__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 4)));
        transform_hlds__pd_term__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_50, (MR_Integer) 5)));
        {
          transform_hlds__pd_term__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_53, 0) = ((MR_Box) (transform_hlds__pd_term__PredId1_20));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_53, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId1_21));
        }
        {
          transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho2_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__Var_53, &transform_hlds__pd_term__FirstPredProcId_31);
        }
        if (transform_hlds__pd_term__succeeded)
          {
            if ((transform_hlds__pd_term__MaybeLaterGoal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                transform_hlds__pd_term__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__pd_term__PredId2_32;
                MR_Integer transform_hlds__pd_term__ProcId2_33;
                MR_Word transform_hlds__pd_term__LastPredProcId_39;
                MR_Word transform_hlds__pd_term__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLaterGoal_13, (MR_Integer) 0)));
                MR_Word transform_hlds__pd_term__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_54, (MR_Integer) 0)));
                MR_Word transform_hlds__pd_term__Var_57;
                MR_Word transform_hlds__pd_term__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_54, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_term__Var_34;
                MR_Word transform_hlds__pd_term__Var_35;
                MR_Word transform_hlds__pd_term__Var_36;
                MR_Word transform_hlds__pd_term__Var_37;

                transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Var_55)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__pd_term__succeeded)
                  {
                    transform_hlds__pd_term__PredId2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 0)));
                    transform_hlds__pd_term__ProcId2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 1)));
                    transform_hlds__pd_term__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 2)));
                    transform_hlds__pd_term__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 3)));
                    transform_hlds__pd_term__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 4)));
                    transform_hlds__pd_term__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_55, (MR_Integer) 5)));
                    {
                      transform_hlds__pd_term__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_57, 0) = ((MR_Box) (transform_hlds__pd_term__PredId2_32));
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_57, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId2_33));
                    }
                    {
                      transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho1_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__Var_57, &transform_hlds__pd_term__LastPredProcId_39);
                    }
                    if (transform_hlds__pd_term__succeeded)
                      {
                        {
                          transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLastPredProcId_40, 0) = ((MR_Box) (transform_hlds__pd_term__LastPredProcId_39));
                        }
                        transform_hlds__pd_term__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    if (transform_hlds__pd_term__succeeded)
      {
        MR_Word transform_hlds__pd_term__ProcPair_41;
        MR_Integer transform_hlds__pd_term__Length_42;
        MR_Integer transform_hlds__pd_term__MaxLength_43;
        MR_Word transform_hlds__pd_term__MaybeCoveringPredProcId_44;
        MR_Word transform_hlds__pd_term__Var_58;
        MR_Box transform_hlds__pd_term__conv0_Var_58;

        {
          transform_hlds__pd_term__ProcPair_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 0) = ((MR_Box) (transform_hlds__pd_term__FirstPredProcId_31));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 1) = ((MR_Box) (transform_hlds__pd_term__MaybeLastPredProcId_40));
        }
        {
          mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__pd_term__BetweenGoals_12, &transform_hlds__pd_term__Length_42);
        }
        {
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], transform_hlds__pd_term__MultipleGoalCover0_19, ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), &transform_hlds__pd_term__conv0_Var_58);
        }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__Var_58 = ((MR_Word) transform_hlds__pd_term__conv0_Var_58);
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__MaxLength_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_58, (MR_Integer) 0)));
            transform_hlds__pd_term__MaybeCoveringPredProcId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_58, (MR_Integer) 1)));
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 < transform_hlds__pd_term__MaxLength_43);
            if (transform_hlds__pd_term__succeeded)
              {
                MR_Word transform_hlds__pd_term__Var_59;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__pd_term__Result_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
                }
                {
                  transform_hlds__pd_term__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_59, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__Var_59)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
                }
              }
            else
              {
                MR_Word transform_hlds__pd_term__CoveringPredProcId_46;

                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 == transform_hlds__pd_term__MaxLength_43);
                if (transform_hlds__pd_term__succeeded)
                  {
                    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__MaybeCoveringPredProcId_44)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__pd_term__succeeded)
                      transform_hlds__pd_term__CoveringPredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeCoveringPredProcId_44, (MR_Integer) 0)));
                  }
                if (transform_hlds__pd_term__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__pd_term__Result_17 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__pd_term__CoveringPredProcId_46));
                    }
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
                  }
                else
                  {
                    *transform_hlds__pd_term__Result_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
                  }
              }
          }
        else
          {
            MR_Word transform_hlds__pd_term__Var_61;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__pd_term__Result_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
            }
            {
              transform_hlds__pd_term__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_61, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__Var_61)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
            }
          }
        transform_hlds__pd_term__SingleGoalCover_47 = transform_hlds__pd_term__SingleGoalCover0_18;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.global_check\'/9", (MR_String) "global_check");
          return;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_term__STATE_VARIABLE_Info_49 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoalCover_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoalCover_45));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
  MR_Word transform_hlds__pd_term__Versions_6,
  MR_Word transform_hlds__pd_term__PredProcId0_7,
  MR_Word * transform_hlds__pd_term__PredProcId_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__pd_term__succeeded;
        MR_Word transform_hlds__pd_term__VersionInfo_9;
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

        {
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        if (transform_hlds__pd_term__succeeded)
          {
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_term__PredProcId1_11;
            MR_Word transform_hlds__pd_term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
            MR_Word transform_hlds__pd_term__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
            MR_Word transform_hlds__pd_term__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
            MR_Integer transform_hlds__pd_term__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
            MR_Integer transform_hlds__pd_term__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
            MR_Word transform_hlds__pd_term__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
            MR_Word transform_hlds__pd_term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
            MR_Word transform_hlds__pd_term__Var_51;

            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Calls_10)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 0)));
                transform_hlds__pd_term__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__pd_term__next_value_of_PredProcId0_7 = transform_hlds__pd_term__PredProcId1_11;

                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__next_value_of_PredProcId0_7;
                }
                continue;
              }
          }
        else
          {
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        return transform_hlds__pd_term__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
  MR_Word transform_hlds__pd_term__Versions_6,
  MR_Word transform_hlds__pd_term__PredProcId0_7,
  MR_Word * transform_hlds__pd_term__PredProcId_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__pd_term__succeeded;
        MR_Word transform_hlds__pd_term__VersionInfo_9;
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

        {
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        if (transform_hlds__pd_term__succeeded)
          {
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_term__PredProcId1_11;
            MR_Word transform_hlds__pd_term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
            MR_Word transform_hlds__pd_term__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
            MR_Word transform_hlds__pd_term__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
            MR_Integer transform_hlds__pd_term__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
            MR_Integer transform_hlds__pd_term__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
            MR_Word transform_hlds__pd_term__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
            MR_Word transform_hlds__pd_term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
            MR_Box transform_hlds__pd_term__conv1_PredProcId1_11;

            {
              transform_hlds__pd_term__succeeded = mercury__list__last_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_term__Calls_10, &transform_hlds__pd_term__conv1_PredProcId1_11);
            }
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) transform_hlds__pd_term__conv1_PredProcId1_11);
                transform_hlds__pd_term__succeeded = MR_TRUE;
              }
            if (transform_hlds__pd_term__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__pd_term__next_value_of_PredProcId0_7 = transform_hlds__pd_term__PredProcId1_11;

                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__next_value_of_PredProcId0_7;
                }
                continue;
              }
          }
        else
          {
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        return transform_hlds__pd_term__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

    {
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

    {
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

    {
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

    {
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

    {
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Integer transform_hlds__pd_term__CastX_9 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
    MR_Integer transform_hlds__pd_term__CastY_10 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_9 == transform_hlds__pd_term__CastY_10);
    if (transform_hlds__pd_term__succeeded)
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__pd_term__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_term__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_term__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], &transform_hlds__pd_term__Var_8, ((MR_Box) (transform_hlds__pd_term__ArgX1_4)), ((MR_Box) (transform_hlds__pd_term__ArgY1_5)));
        }
        transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Var_8 == (MR_Integer) 0);
        transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
        if (transform_hlds__pd_term__succeeded)
          *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__ArgX2_6)), ((MR_Box) (transform_hlds__pd_term__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Integer transform_hlds__pd_term__CastX_7 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
    MR_Integer transform_hlds__pd_term__CastY_8 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_7 == transform_hlds__pd_term__CastY_8);
    if (transform_hlds__pd_term__succeeded)
      transform_hlds__pd_term__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__pd_term__TypeInfo_10_10;
        MR_Word transform_hlds__pd_term__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_term__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__ArgX1_3)), ((MR_Box) (transform_hlds__pd_term__ArgY1_4)));
        }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__TypeInfo_10_10 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[4];
            {
              transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_10_10, ((MR_Box) (transform_hlds__pd_term__ArgX2_5)), ((MR_Box) (transform_hlds__pd_term__ArgY2_6)));
            }
          }
      }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0(
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Integer transform_hlds__pd_term__CastX_37 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
    MR_Integer transform_hlds__pd_term__CastY_38 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_37 == transform_hlds__pd_term__CastY_38);
    if (transform_hlds__pd_term__succeeded)
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer transform_hlds__pd_term__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_term__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__pd_term__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer transform_hlds__pd_term__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_term__Var_8;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__Var_8, ((MR_Box) (transform_hlds__pd_term__Var_45)), ((MR_Box) (transform_hlds__pd_term__ArgY1_5)));
                  }
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Var_8 == (MR_Integer) 0);
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
                  if (transform_hlds__pd_term__succeeded)
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__Var_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__Var_44, transform_hlds__pd_term__ArgY2_7);
                    }
                }
                break;
              case (MR_Integer) 2:
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__pd_term__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer transform_hlds__pd_term__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_term__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__pd_term__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer transform_hlds__pd_term__ArgY2_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_term__ArgY3_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_term__Var_27;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__Var_27, ((MR_Box) (transform_hlds__pd_term__Var_48)), ((MR_Box) (transform_hlds__pd_term__ArgY1_22)));
                  }
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Var_27 == (MR_Integer) 0);
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
                  if (transform_hlds__pd_term__succeeded)
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__Var_27;
                  else
                    {
                      MR_Word transform_hlds__pd_term__Var_28;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_term__Var_28, transform_hlds__pd_term__Var_47, transform_hlds__pd_term__ArgY2_24);
                      }
                      transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Var_28 == (MR_Integer) 0);
                      transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
                      if (transform_hlds__pd_term__succeeded)
                        *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__Var_28;
                      else
                        {
                          hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__Var_46, transform_hlds__pd_term__ArgY3_26);
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Integer transform_hlds__pd_term__CastX_15 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
    MR_Integer transform_hlds__pd_term__CastY_16 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_15 == transform_hlds__pd_term__CastY_16);
    if (transform_hlds__pd_term__succeeded)
      transform_hlds__pd_term__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer transform_hlds__pd_term__CastX_13 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
            MR_Integer transform_hlds__pd_term__CastY_14 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastY_14 == transform_hlds__pd_term__CastX_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__pd_term__TypeInfo_17_17;
            MR_Word transform_hlds__pd_term__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_term__ArgY1_4;
            MR_Integer transform_hlds__pd_term__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__pd_term__ArgY2_6;

            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__pd_term__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__pd_term__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
                {
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_17_17, ((MR_Box) (transform_hlds__pd_term__ArgX1_3)), ((MR_Box) (transform_hlds__pd_term__ArgY1_4)));
                }
                if (transform_hlds__pd_term__succeeded)
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__ArgX2_5 == transform_hlds__pd_term__ArgY2_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__pd_term__TypeInfo_18_18;
            MR_Word transform_hlds__pd_term__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_term__ArgY1_8;
            MR_Integer transform_hlds__pd_term__ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__pd_term__ArgY2_10;
            MR_Word transform_hlds__pd_term__ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word transform_hlds__pd_term__ArgY3_12;

            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__pd_term__ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__pd_term__ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
                transform_hlds__pd_term__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
                {
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_term__ArgX1_7)), ((MR_Box) (transform_hlds__pd_term__ArgY1_8)));
                }
                if (transform_hlds__pd_term__succeeded)
                  {
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__ArgX2_9 == transform_hlds__pd_term__ArgY2_10);
                    if (transform_hlds__pd_term__succeeded)
                      {
                        transform_hlds__pd_term__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_term__ArgX3_11, transform_hlds__pd_term__ArgY3_12);
                      }
                  }
              }
          }
          break;
      }
    return transform_hlds__pd_term__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
  MR_Word * transform_hlds__pd_term__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    if ((transform_hlds__pd_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
            *transform_hlds__pd_term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
          }
        transform_hlds__pd_term__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__pd_term__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_term__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer transform_hlds__pd_term__Arg_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_33, (MR_Integer) 0)));
            MR_Integer transform_hlds__pd_term__OldSize_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_33, (MR_Integer) 1)));
            MR_Integer transform_hlds__pd_term__NewSize_23;
            MR_Word transform_hlds__pd_term__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_term__FoundDecreasing1_27;
            MR_Word transform_hlds__pd_term__NonIncreasing1_28;
            MR_Word transform_hlds__pd_term__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer transform_hlds__pd_term__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_30, (MR_Integer) 0)));

            transform_hlds__pd_term__NewSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_30, (MR_Integer) 1)));
            {
              transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__Var_32, transform_hlds__pd_term__Args_24, &transform_hlds__pd_term__FoundDecreasing1_27, &transform_hlds__pd_term__NonIncreasing1_28);
            }
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 <= transform_hlds__pd_term__OldSize_20);
                if (transform_hlds__pd_term__succeeded)
                  {
                    MR_Word transform_hlds__pd_term__Var_31;

                    {
                      transform_hlds__pd_term__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_31, 0) = ((MR_Box) (transform_hlds__pd_term__Arg_19));
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_31, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__pd_term__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__Var_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NonIncreasing1_28));
                    }
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 == transform_hlds__pd_term__OldSize_20);
                    if (transform_hlds__pd_term__succeeded)
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
                    else
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 1;
                  }
                else
                  {
                    *transform_hlds__pd_term__HeadVar__4_4 = transform_hlds__pd_term__NonIncreasing1_28;
                    *transform_hlds__pd_term__HeadVar__3_3 = transform_hlds__pd_term__FoundDecreasing1_27;
                  }
                transform_hlds__pd_term__succeeded = MR_TRUE;
              }
          }
      }
    return transform_hlds__pd_term__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
  MR_Word transform_hlds__pd_term__InstMap_2,
  MR_Word transform_hlds__pd_term__Args_3,
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    if ((transform_hlds__pd_term__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__pd_term__HeadVar__6_6 = (MR_Integer) 0;
        *transform_hlds__pd_term__HeadVar__7_7 = (MR_Integer) 0;
      }
    else
      {
        MR_Integer transform_hlds__pd_term__ArgNo_14;
        MR_Integer transform_hlds__pd_term__OldSize_15;
        MR_Word transform_hlds__pd_term__OldSizes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 1)));
        MR_Integer transform_hlds__pd_term__NewSize_17;
        MR_Word transform_hlds__pd_term__NewSizes_18;
        MR_Integer transform_hlds__pd_term__OldTotal1_21;
        MR_Integer transform_hlds__pd_term__NewTotal1_22;
        MR_Word transform_hlds__pd_term__Arg_23;
        MR_Word transform_hlds__pd_term__ArgInst_24;
        MR_Word transform_hlds__pd_term__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__Var_26;
        MR_Box transform_hlds__pd_term__conv0_Arg_23;

        transform_hlds__pd_term__ArgNo_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_25, (MR_Integer) 0)));
        transform_hlds__pd_term__OldSize_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_25, (MR_Integer) 1)));
        {
          transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_3, transform_hlds__pd_term__OldSizes_16, &transform_hlds__pd_term__NewSizes_18, &transform_hlds__pd_term__OldTotal1_21, &transform_hlds__pd_term__NewTotal1_22);
        }
        {
          mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[2], transform_hlds__pd_term__Args_3, transform_hlds__pd_term__ArgNo_14, &transform_hlds__pd_term__conv0_Arg_23);
        }
        transform_hlds__pd_term__Arg_23 = ((MR_Word) transform_hlds__pd_term__conv0_Arg_23);
        {
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_23, &transform_hlds__pd_term__ArgInst_24);
        }
        {
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_24, &transform_hlds__pd_term__NewSize_17);
        }
        {
          transform_hlds__pd_term__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_26, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_14));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_26, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__pd_term__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__Var_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NewSizes_18));
        }
        *transform_hlds__pd_term__HeadVar__6_6 = (transform_hlds__pd_term__OldTotal1_21 + transform_hlds__pd_term__OldSize_15);
        *transform_hlds__pd_term__HeadVar__7_7 = (transform_hlds__pd_term__NewTotal1_22 + transform_hlds__pd_term__NewSize_17);
      }
  }
}

static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
  MR_Word transform_hlds__pd_term__InstMap_2,
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
  MR_Integer transform_hlds__pd_term__ArgNo_4,
  MR_Word * transform_hlds__pd_term__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    if ((transform_hlds__pd_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__pd_term__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__pd_term__Size_14;
        MR_Word transform_hlds__pd_term__Sizes_15;
        MR_Integer transform_hlds__pd_term__NextArgNo_16 = (transform_hlds__pd_term__ArgNo_4 + (MR_Integer) 1);
        MR_Word transform_hlds__pd_term__ArgInst_17;
        MR_Word transform_hlds__pd_term__Var_18;

        {
          transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__NextArgNo_16, &transform_hlds__pd_term__Sizes_15);
        }
        {
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_11, &transform_hlds__pd_term__ArgInst_17);
        }
        {
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_17, &transform_hlds__pd_term__Size_14);
        }
        {
          transform_hlds__pd_term__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_18, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_4));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_18, 1) = ((MR_Box) (transform_hlds__pd_term__Size_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__pd_term__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__Var_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Sizes_15));
        }
      }
  }
}

void MR_CALL 
transform_hlds__pd_term__update_global_term_info_5_p_0(
  MR_Word transform_hlds__pd_term__ProcPair_6,
  MR_Word transform_hlds__pd_term__PredProcId_7,
  MR_Integer transform_hlds__pd_term__Size_8,
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13,
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__Single_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_term__Multiple0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_term__Multiple_12;
    MR_Word transform_hlds__pd_term__Var_15;
    MR_Word transform_hlds__pd_term__Var_16;

    {
      transform_hlds__pd_term__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Var_16, 0) = ((MR_Box) (transform_hlds__pd_term__PredProcId_7));
    }
    {
      transform_hlds__pd_term__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_15, 0) = ((MR_Box) (transform_hlds__pd_term__Size_8));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_15, 1) = ((MR_Box) (transform_hlds__pd_term__Var_16));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_6)), ((MR_Box) (transform_hlds__pd_term__Var_15)), transform_hlds__pd_term__Multiple0_11, &transform_hlds__pd_term__Multiple_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__Single_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__Multiple_12));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term__get_proc_term_info_3_p_0(
  MR_Word transform_hlds__pd_term__TermInfo_4,
  MR_Word transform_hlds__pd_term__PredProcId_5,
  MR_Word * transform_hlds__pd_term__ProcTermInfo_6)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Box transform_hlds__pd_term__conv0_ProcTermInfo_6;

    {
      transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_4, ((MR_Box) (transform_hlds__pd_term__PredProcId_5)), &transform_hlds__pd_term__conv0_ProcTermInfo_6);
    }
    if (transform_hlds__pd_term__succeeded)
      {
        *transform_hlds__pd_term__ProcTermInfo_6 = ((MR_Word) transform_hlds__pd_term__conv0_ProcTermInfo_6);
        transform_hlds__pd_term__succeeded = MR_TRUE;
      }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term__local_term_info_init_1_p_0(
  MR_Word * transform_hlds__pd_term__TermInfo_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_2);
    }
  }
}

void MR_CALL 
transform_hlds__pd_term__global_term_info_init_1_p_0(
  MR_Word * transform_hlds__pd_term__TermInfo_2)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__SingleGoals_3;
    MR_Word transform_hlds__pd_term__MultipleGoals_4;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], &transform_hlds__pd_term__SingleGoals_3);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], &transform_hlds__pd_term__MultipleGoals_4);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_term__TermInfo_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoals_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoals_4));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_term__local_check_5_p_0(
  MR_Word transform_hlds__pd_term__ModuleInfo_6,
  MR_Word transform_hlds__pd_term__Goal1_7,
  MR_Word transform_hlds__pd_term__InstMap_8,
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20,
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Cover_21)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;
    MR_Word transform_hlds__pd_term__PredId_10;
    MR_Integer transform_hlds__pd_term__ProcId_11;
    MR_Word transform_hlds__pd_term__Args_12;
    MR_Word transform_hlds__pd_term__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_term__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_term__Var_13;
    MR_Word transform_hlds__pd_term__Var_14;
    MR_Word transform_hlds__pd_term__Var_15;
    MR_Word transform_hlds__pd_term__CoveringInstSizes0_17;
    MR_Word transform_hlds__pd_term__Var_23;
    MR_Word transform_hlds__pd_term__TypeCtorInfo_29_29;
    MR_Word transform_hlds__pd_term__TypeInfo_30_30;
    MR_Box transform_hlds__pd_term__conv0_CoveringInstSizes0_17;

    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Var_22)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__pd_term__succeeded)
      {
        transform_hlds__pd_term__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 0)));
        transform_hlds__pd_term__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 1)));
        transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 2)));
        transform_hlds__pd_term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 3)));
        transform_hlds__pd_term__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 4)));
        transform_hlds__pd_term__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__Var_22, (MR_Integer) 5)));
        transform_hlds__pd_term__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        transform_hlds__pd_term__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
        {
          transform_hlds__pd_term__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_23, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_23, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
        }
        {
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_term__TypeCtorInfo_29_29, transform_hlds__pd_term__TypeInfo_30_30, transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, ((MR_Box) (transform_hlds__pd_term__Var_23)), &transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
        }
        if (transform_hlds__pd_term__succeeded)
          {
            transform_hlds__pd_term__CoveringInstSizes0_17 = ((MR_Word) transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
        if (transform_hlds__pd_term__succeeded)
          {
            MR_Word transform_hlds__pd_term__TypeCtorInfo_31_31;
            MR_Word transform_hlds__pd_term__TypeInfo_32_32;
            MR_Word transform_hlds__pd_term__CoveringInstSizes_18;
            MR_Word transform_hlds__pd_term__NewSizes1_40;
            MR_Integer transform_hlds__pd_term__OldTotal_41;
            MR_Integer transform_hlds__pd_term__NewTotal_42;

            {
              transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__CoveringInstSizes0_17, &transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__OldTotal_41, &transform_hlds__pd_term__NewTotal_42);
            }
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewTotal_42 < transform_hlds__pd_term__OldTotal_41);
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__CoveringInstSizes_18 = transform_hlds__pd_term__NewSizes1_40;
                transform_hlds__pd_term__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__pd_term__Var_44;

                {
                  transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__CoveringInstSizes0_17, transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__Var_44, &transform_hlds__pd_term__CoveringInstSizes_18);
                }
                if (transform_hlds__pd_term__succeeded)
                  transform_hlds__pd_term__succeeded = ((MR_Integer) 1 == transform_hlds__pd_term__Var_44);
              }
            if (transform_hlds__pd_term__succeeded)
              {
                transform_hlds__pd_term__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                transform_hlds__pd_term__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
                {
                  mercury__map__set_4_p_0(transform_hlds__pd_term__TypeCtorInfo_31_31, transform_hlds__pd_term__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_term__Var_23)), ((MR_Box) (transform_hlds__pd_term__CoveringInstSizes_18)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
                }
                transform_hlds__pd_term__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word transform_hlds__pd_term__ArgInstSizes_19;
            MR_Word transform_hlds__pd_term__Var_27;

            {
              transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, (MR_Integer) 1, &transform_hlds__pd_term__ArgInstSizes_19);
            }
            {
              transform_hlds__pd_term__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_27, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Var_27, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__Var_27)), ((MR_Box) (transform_hlds__pd_term__ArgInstSizes_19)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
            }
            transform_hlds__pd_term__succeeded = MR_TRUE;
          }
      }
    return transform_hlds__pd_term__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_term__global_check_9_p_0(
  MR_Word transform_hlds__pd_term___ModuleInfo_10,
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
  MR_Word transform_hlds__pd_term___InstMap_14,
  MR_Word transform_hlds__pd_term__Versions_15,
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
  MR_Word * transform_hlds__pd_term__Result_17)
{
  {
    MR_bool transform_hlds__pd_term__succeeded;

    {
      transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(transform_hlds__pd_term__EarlierGoal_11, transform_hlds__pd_term__BetweenGoals_12, transform_hlds__pd_term__MaybeLaterGoal_13, transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, transform_hlds__pd_term__STATE_VARIABLE_Info_49, transform_hlds__pd_term__Result_17);
    }
  }
}

void mercury__transform_hlds__pd_term__init(void)
{
}

void mercury__transform_hlds__pd_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_check_result_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_multiple_covering_goals_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_pd_proc_term_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_proc_pair_0);
	MR_register_type_ctor_info(&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_single_covering_goals_0);
}

void mercury__transform_hlds__pd_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.pd_term. */
