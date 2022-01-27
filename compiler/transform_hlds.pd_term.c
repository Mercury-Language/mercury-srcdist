/*
** Automatically generated from `pd_term.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.simplify.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 145 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 148 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 151 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2];

#line 154 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0;

#line 157 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3];

#line 160 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1;

#line 163 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2;

#line 166 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1];

#line 169 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1];

#line 172 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1];

#line 175 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0[3];

#line 178 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3];

#line 181 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3];

#line 184 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 187 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 190 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 193 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 196 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 199 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2];

#line 202 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0;

#line 205 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1];

#line 208 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1];

#line 211 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1];

#line 214 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1];

#line 217 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 220 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 222 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 225 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 228 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 230 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 232 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 235 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 238 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 240 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 243 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 246 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 248 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 250 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 253 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 256 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 258 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 261 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 264 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 266 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 268 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 271 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 274 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 276 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 279 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 282 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 284 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 286 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 289 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 292 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 294 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 297 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 300 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 302 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 304 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 307 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 310 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 312 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 315 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 318 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 320 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 322 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 325 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 328 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 330 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 333 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 336 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 338 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 340 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 222 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 222 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 222 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 222 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 126 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 126 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 126 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 131 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 131 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 131 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 300 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 300 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 300 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 300 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 300 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4);

#line 282 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 282 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 282 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 282 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7);

#line 269 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 269 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 269 "pd_term.m"
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



#line 511 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 519 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 528 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 534 "transform_hlds.pd_term.c"
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
  NULL
};

#line 549 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 556 "transform_hlds.pd_term.c"
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
  NULL
};

#line 571 "transform_hlds.pd_term.c"
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
  NULL
};

#line 586 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2
};

#line 591 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0
};

#line 596 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 601 "transform_hlds.pd_term.c"
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

#line 620 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 627 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 634 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_check_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 651 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 660 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 668 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 677 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 686 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 695 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 701 "transform_hlds.pd_term.c"
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
  NULL
};

#line 716 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 721 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0
  }
};

#line 730 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 735 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1] = {
  (MR_Integer) 0
};

#line 740 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 757 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 774 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_multiple_covering_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 791 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_pd_proc_term_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 808 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_proc_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 825 "transform_hlds.pd_term.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_single_covering_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 842 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 845 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 847 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 849 "transform_hlds.pd_term.c"
{
#line 851 "transform_hlds.pd_term.c"
  {
#line 853 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 856 "transform_hlds.pd_term.c"
    {
#line 858 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_check_result_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 861 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 863 "transform_hlds.pd_term.c"
  }
#line 865 "transform_hlds.pd_term.c"
}

#line 868 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 871 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 873 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 875 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 877 "transform_hlds.pd_term.c"
{
#line 879 "transform_hlds.pd_term.c"
  {
#line 881 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 884 "transform_hlds.pd_term.c"
    {
#line 886 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_check_result_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 889 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 891 "transform_hlds.pd_term.c"
  }
#line 893 "transform_hlds.pd_term.c"
}

#line 896 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 899 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 901 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 903 "transform_hlds.pd_term.c"
{
#line 905 "transform_hlds.pd_term.c"
  {
#line 907 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 910 "transform_hlds.pd_term.c"
    {
#line 912 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 915 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 917 "transform_hlds.pd_term.c"
  }
#line 919 "transform_hlds.pd_term.c"
}

#line 922 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 925 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 927 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 929 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 931 "transform_hlds.pd_term.c"
{
#line 933 "transform_hlds.pd_term.c"
  {
#line 935 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 938 "transform_hlds.pd_term.c"
    {
#line 940 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 943 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 945 "transform_hlds.pd_term.c"
  }
#line 947 "transform_hlds.pd_term.c"
}

#line 950 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 953 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 955 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 957 "transform_hlds.pd_term.c"
{
#line 959 "transform_hlds.pd_term.c"
  {
#line 961 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 964 "transform_hlds.pd_term.c"
    {
#line 966 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____local_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 969 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 971 "transform_hlds.pd_term.c"
  }
#line 973 "transform_hlds.pd_term.c"
}

#line 976 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 979 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 981 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 983 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 985 "transform_hlds.pd_term.c"
{
#line 987 "transform_hlds.pd_term.c"
  {
#line 989 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 992 "transform_hlds.pd_term.c"
    {
#line 994 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____local_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 997 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 999 "transform_hlds.pd_term.c"
  }
#line 1001 "transform_hlds.pd_term.c"
}

#line 1004 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 1007 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1009 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1011 "transform_hlds.pd_term.c"
{
#line 1013 "transform_hlds.pd_term.c"
  {
#line 1015 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1018 "transform_hlds.pd_term.c"
    {
#line 1020 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1023 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1025 "transform_hlds.pd_term.c"
  }
#line 1027 "transform_hlds.pd_term.c"
}

#line 1030 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 1033 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1035 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1037 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1039 "transform_hlds.pd_term.c"
{
#line 1041 "transform_hlds.pd_term.c"
  {
#line 1043 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1046 "transform_hlds.pd_term.c"
    {
#line 1048 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1051 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1053 "transform_hlds.pd_term.c"
  }
#line 1055 "transform_hlds.pd_term.c"
}

#line 1058 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 1061 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1063 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1065 "transform_hlds.pd_term.c"
{
#line 1067 "transform_hlds.pd_term.c"
  {
#line 1069 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1072 "transform_hlds.pd_term.c"
    {
#line 1074 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1077 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1079 "transform_hlds.pd_term.c"
  }
#line 1081 "transform_hlds.pd_term.c"
}

#line 1084 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 1087 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1089 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1091 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1093 "transform_hlds.pd_term.c"
{
#line 1095 "transform_hlds.pd_term.c"
  {
#line 1097 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1100 "transform_hlds.pd_term.c"
    {
#line 1102 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1105 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1107 "transform_hlds.pd_term.c"
  }
#line 1109 "transform_hlds.pd_term.c"
}

#line 1112 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 1115 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1117 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1119 "transform_hlds.pd_term.c"
{
#line 1121 "transform_hlds.pd_term.c"
  {
#line 1123 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1126 "transform_hlds.pd_term.c"
    {
#line 1128 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____proc_pair_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1131 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1133 "transform_hlds.pd_term.c"
  }
#line 1135 "transform_hlds.pd_term.c"
}

#line 1138 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 1141 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1143 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1145 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1147 "transform_hlds.pd_term.c"
{
#line 1149 "transform_hlds.pd_term.c"
  {
#line 1151 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1154 "transform_hlds.pd_term.c"
    {
#line 1156 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____proc_pair_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1159 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1161 "transform_hlds.pd_term.c"
  }
#line 1163 "transform_hlds.pd_term.c"
}

#line 1166 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 1169 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1171 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1173 "transform_hlds.pd_term.c"
{
#line 1175 "transform_hlds.pd_term.c"
  {
#line 1177 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1180 "transform_hlds.pd_term.c"
    {
#line 1182 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____single_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1185 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1187 "transform_hlds.pd_term.c"
  }
#line 1189 "transform_hlds.pd_term.c"
}

#line 1192 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 1195 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1197 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1199 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1201 "transform_hlds.pd_term.c"
{
#line 1203 "transform_hlds.pd_term.c"
  {
#line 1205 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1208 "transform_hlds.pd_term.c"
    {
#line 1210 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____single_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1213 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1215 "transform_hlds.pd_term.c"
  }
#line 1217 "transform_hlds.pd_term.c"
}

#line 62 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_15,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
#line 62 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
#line 62 "pd_term.m"
  MR_Word * transform_hlds__pd_term__Result_17)
#line 62 "pd_term.m"
{
#line 153 "pd_term.m"
  {
#line 153 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 153 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 153 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 153 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover_45;
#line 153 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover_47;
#line 207 "pd_term.m"
    MR_Word transform_hlds__pd_term__FirstPredProcId_31;
#line 207 "pd_term.m"
    MR_Word transform_hlds__pd_term__MaybeLastPredProcId_40;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId1_20;
#line 156 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId1_21;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 0)));
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_53_53;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 1)));
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_24_24;
#line 156 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_25_25;

#line 156 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_50_50)) == (MR_mktag((MR_Integer) 2)));
#line 156 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 156 "pd_term.m"
      {
#line 156 "pd_term.m"
        transform_hlds__pd_term__PredId1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 0)));
#line 156 "pd_term.m"
        transform_hlds__pd_term__ProcId1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 1)));
#line 156 "pd_term.m"
        transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 2)));
#line 156 "pd_term.m"
        transform_hlds__pd_term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 3)));
#line 156 "pd_term.m"
        transform_hlds__pd_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 4)));
#line 156 "pd_term.m"
        transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 5)));
#line 160 "pd_term.m"
        {
#line 160 "pd_term.m"
          transform_hlds__pd_term__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 0) = ((MR_Box) (transform_hlds__pd_term__PredId1_20));
#line 160 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId1_21));
#line 160 "pd_term.m"
        }
#line 160 "pd_term.m"
        {
#line 160 "pd_term.m"
          transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho2_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_53_53, &transform_hlds__pd_term__FirstPredProcId_31);
        }
#line 156 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 167 "pd_term.m"
          {
#line 167 "pd_term.m"
            if ((transform_hlds__pd_term__MaybeLaterGoal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "pd_term.m"
              {
#line 169 "pd_term.m"
                transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 169 "pd_term.m"
              }
#line 167 "pd_term.m"
            else
#line 163 "pd_term.m"
              {
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__PredId2_32;
#line 163 "pd_term.m"
                MR_Integer transform_hlds__pd_term__ProcId2_33;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__LastPredProcId_39;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLaterGoal_13, (MR_Integer) 0)));
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 0)));
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_57_57;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 1)));
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_34_34;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_35_35;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_36_36;
#line 163 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_37_37;

#line 163 "pd_term.m"
                transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_55_55)) == (MR_mktag((MR_Integer) 2)));
#line 163 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 163 "pd_term.m"
                  {
#line 163 "pd_term.m"
                    transform_hlds__pd_term__PredId2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 0)));
#line 163 "pd_term.m"
                    transform_hlds__pd_term__ProcId2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 1)));
#line 163 "pd_term.m"
                    transform_hlds__pd_term__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 2)));
#line 163 "pd_term.m"
                    transform_hlds__pd_term__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 3)));
#line 163 "pd_term.m"
                    transform_hlds__pd_term__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 4)));
#line 163 "pd_term.m"
                    transform_hlds__pd_term__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 5)));
#line 164 "pd_term.m"
                    {
#line 164 "pd_term.m"
                      transform_hlds__pd_term__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 0) = ((MR_Box) (transform_hlds__pd_term__PredId2_32));
#line 164 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId2_33));
#line 164 "pd_term.m"
                    }
#line 164 "pd_term.m"
                    {
#line 164 "pd_term.m"
                      transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho1_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_57_57, &transform_hlds__pd_term__LastPredProcId_39);
                    }
#line 163 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 163 "pd_term.m"
                      {
#line 166 "pd_term.m"
                        {
#line 166 "pd_term.m"
                          transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "pd_term.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLastPredProcId_40, 0) = ((MR_Box) (transform_hlds__pd_term__LastPredProcId_39));
#line 166 "pd_term.m"
                        }
#line 166 "pd_term.m"
                        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 163 "pd_term.m"
                      }
#line 163 "pd_term.m"
                  }
#line 163 "pd_term.m"
              }
#line 167 "pd_term.m"
          }
#line 156 "pd_term.m"
      }
#line 207 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 172 "pd_term.m"
      {
#line 172 "pd_term.m"
        MR_Word transform_hlds__pd_term__ProcPair_41;
#line 172 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Length_42;
#line 197 "pd_term.m"
        MR_Integer transform_hlds__pd_term__MaxLength_43;
#line 197 "pd_term.m"
        MR_Word transform_hlds__pd_term__MaybeCoveringPredProcId_44;
#line 175 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_58_58;
#line 175 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_V_58_58;

#line 172 "pd_term.m"
        {
#line 172 "pd_term.m"
          transform_hlds__pd_term__ProcPair_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 0) = ((MR_Box) (transform_hlds__pd_term__FirstPredProcId_31));
#line 172 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 1) = ((MR_Box) (transform_hlds__pd_term__MaybeLastPredProcId_40));
#line 172 "pd_term.m"
        }
#line 173 "pd_term.m"
        {
#line 173 "pd_term.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__pd_term__BetweenGoals_12, &transform_hlds__pd_term__Length_42);
        }
#line 175 "pd_term.m"
        {
#line 175 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], transform_hlds__pd_term__MultipleGoalCover0_19, ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), &transform_hlds__pd_term__conv0_V_58_58);
        }
#line 175 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 175 "pd_term.m"
          {
#line 175 "pd_term.m"
            transform_hlds__pd_term__V_58_58 = ((MR_Word) transform_hlds__pd_term__conv0_V_58_58);
#line 175 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 175 "pd_term.m"
          }
#line 175 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 175 "pd_term.m"
          {
#line 176 "pd_term.m"
            transform_hlds__pd_term__MaxLength_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 0)));
#line 176 "pd_term.m"
            transform_hlds__pd_term__MaybeCoveringPredProcId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 1)));
#line 176 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 175 "pd_term.m"
          }
#line 197 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 185 "pd_term.m"
          {
#line 179 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 < transform_hlds__pd_term__MaxLength_43);
#line 185 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 181 "pd_term.m"
              {
#line 181 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_59_59;

#line 181 "pd_term.m"
                {
#line 181 "pd_term.m"
                  MR_Word base;
#line 181 "pd_term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "pd_term.m"
                  *transform_hlds__pd_term__Result_17 = base;
#line 181 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 181 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 181 "pd_term.m"
                }
#line 183 "pd_term.m"
                {
#line 183 "pd_term.m"
                  transform_hlds__pd_term__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 183 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "pd_term.m"
                }
#line 183 "pd_term.m"
                {
#line 183 "pd_term.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_59_59)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
                }
#line 181 "pd_term.m"
              }
#line 185 "pd_term.m"
            else
#line 193 "pd_term.m"
              {
#line 193 "pd_term.m"
                MR_Word transform_hlds__pd_term__CoveringPredProcId_46;

#line 186 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 == transform_hlds__pd_term__MaxLength_43);
#line 186 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 186 "pd_term.m"
                  {
#line 187 "pd_term.m"
                    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__MaybeCoveringPredProcId_44)) == (MR_mktag((MR_Integer) 1)));
#line 187 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 187 "pd_term.m"
                      transform_hlds__pd_term__CoveringPredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeCoveringPredProcId_44, (MR_Integer) 0)));
#line 186 "pd_term.m"
                  }
#line 193 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 191 "pd_term.m"
                  {
#line 191 "pd_term.m"
                    {
#line 191 "pd_term.m"
                      MR_Word base;
#line 191 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "pd_term.m"
                      *transform_hlds__pd_term__Result_17 = base;
#line 191 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 191 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 191 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__pd_term__CoveringPredProcId_46));
#line 191 "pd_term.m"
                    }
#line 192 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 191 "pd_term.m"
                  }
#line 193 "pd_term.m"
                else
#line 194 "pd_term.m"
                  {
#line 194 "pd_term.m"
                    *transform_hlds__pd_term__Result_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 194 "pd_term.m"
                  }
#line 193 "pd_term.m"
              }
#line 185 "pd_term.m"
          }
#line 197 "pd_term.m"
        else
#line 200 "pd_term.m"
          {
#line 200 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_61_61;

#line 200 "pd_term.m"
            {
#line 200 "pd_term.m"
              MR_Word base;
#line 200 "pd_term.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "pd_term.m"
              *transform_hlds__pd_term__Result_17 = base;
#line 200 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 200 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 200 "pd_term.m"
            }
#line 203 "pd_term.m"
            {
#line 203 "pd_term.m"
              transform_hlds__pd_term__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 203 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "pd_term.m"
            }
#line 203 "pd_term.m"
            {
#line 203 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_61_61)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
            }
#line 200 "pd_term.m"
          }
#line 206 "pd_term.m"
        transform_hlds__pd_term__SingleGoalCover_47 = transform_hlds__pd_term__SingleGoalCover0_18;
#line 172 "pd_term.m"
      }
#line 207 "pd_term.m"
    else
#line 208 "pd_term.m"
      {
#line 208 "pd_term.m"
        {
#line 208 "pd_term.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.global_check\'/9", (MR_String) "global_check");
#line 208 "pd_term.m"
          return;
        }
#line 208 "pd_term.m"
      }
#line 210 "pd_term.m"
    {
#line 210 "pd_term.m"
      MR_Word base;
#line 210 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_Info_49 = base;
#line 210 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoalCover_47));
#line 210 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoalCover_45));
#line 210 "pd_term.m"
    }
#line 153 "pd_term.m"
  }
#line 62 "pd_term.m"
}

#line 222 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 222 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 222 "pd_term.m"
{
#line 231 "pd_term.m"
  while (MR_TRUE)
#line 231 "pd_term.m"
    {
#line 231 "pd_term.m"
      /* tailcall optimized into a loop */
#line 231 "pd_term.m"
      {
#line 231 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 231 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 227 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 227 "pd_term.m"
        {
#line 227 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 227 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 227 "pd_term.m"
          {
#line 227 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 227 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 227 "pd_term.m"
          }
#line 231 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 228 "pd_term.m"
          {
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 228 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 228 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 158 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_51_51;

#line 158 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Calls_10)) == (MR_mktag((MR_Integer) 1)));
#line 158 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 158 "pd_term.m"
              {
#line 158 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 0)));
#line 158 "pd_term.m"
                transform_hlds__pd_term__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 1)));
#line 230 "pd_term.m"
                /* direct tailcall eliminated */
#line 230 "pd_term.m"
                {
#line 230 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 230 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 230 "pd_term.m"
                }
#line 230 "pd_term.m"
                continue;
#line 158 "pd_term.m"
              }
#line 228 "pd_term.m"
          }
#line 231 "pd_term.m"
        else
#line 232 "pd_term.m"
          {
#line 232 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 232 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 232 "pd_term.m"
          }
#line 231 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 231 "pd_term.m"
      }
#line 231 "pd_term.m"
      break;
#line 231 "pd_term.m"
    }
#line 222 "pd_term.m"
}

#line 222 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 222 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 222 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 222 "pd_term.m"
{
#line 231 "pd_term.m"
  while (MR_TRUE)
#line 231 "pd_term.m"
    {
#line 231 "pd_term.m"
      /* tailcall optimized into a loop */
#line 231 "pd_term.m"
      {
#line 231 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 231 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 227 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 227 "pd_term.m"
        {
#line 227 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 227 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 227 "pd_term.m"
          {
#line 227 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 227 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 227 "pd_term.m"
          }
#line 231 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 228 "pd_term.m"
          {
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 228 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 228 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 228 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 164 "pd_term.m"
            MR_Box transform_hlds__pd_term__conv1_PredProcId1_11;

#line 164 "pd_term.m"
            {
#line 164 "pd_term.m"
              transform_hlds__pd_term__succeeded = mercury__list__last_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_term__Calls_10, &transform_hlds__pd_term__conv1_PredProcId1_11);
            }
#line 164 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 164 "pd_term.m"
              {
#line 164 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) transform_hlds__pd_term__conv1_PredProcId1_11);
#line 164 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 164 "pd_term.m"
              }
#line 228 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 230 "pd_term.m"
              {
#line 230 "pd_term.m"
                /* direct tailcall eliminated */
#line 230 "pd_term.m"
                {
#line 230 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 230 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 230 "pd_term.m"
                }
#line 230 "pd_term.m"
                continue;
#line 230 "pd_term.m"
              }
#line 228 "pd_term.m"
          }
#line 231 "pd_term.m"
        else
#line 232 "pd_term.m"
          {
#line 232 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 232 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 232 "pd_term.m"
          }
#line 231 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 231 "pd_term.m"
      }
#line 231 "pd_term.m"
      break;
#line 231 "pd_term.m"
    }
#line 222 "pd_term.m"
}

#line 126 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 126 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 126 "pd_term.m"
{
#line 126 "pd_term.m"
  {
#line 126 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 126 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 126 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 126 "pd_term.m"
    {
#line 126 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 126 "pd_term.m"
      return;
    }
#line 126 "pd_term.m"
  }
#line 126 "pd_term.m"
}

#line 126 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 126 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 126 "pd_term.m"
{
#line 126 "pd_term.m"
  {
#line 126 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 126 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 126 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 126 "pd_term.m"
    {
#line 126 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 126 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 126 "pd_term.m"
  }
#line 126 "pd_term.m"
}

#line 70 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0(
#line 70 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 70 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 70 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 70 "pd_term.m"
{
#line 70 "pd_term.m"
  {
#line 70 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 70 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 70 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 70 "pd_term.m"
    {
#line 70 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 70 "pd_term.m"
      return;
    }
#line 70 "pd_term.m"
  }
#line 70 "pd_term.m"
}

#line 70 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0(
#line 70 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 70 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 70 "pd_term.m"
{
#line 70 "pd_term.m"
  {
#line 70 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 70 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 70 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 70 "pd_term.m"
    {
#line 70 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 70 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 70 "pd_term.m"
  }
#line 70 "pd_term.m"
}

#line 135 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(
#line 135 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 135 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 135 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 135 "pd_term.m"
{
#line 135 "pd_term.m"
  {
#line 135 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 135 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 135 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 135 "pd_term.m"
    {
#line 135 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 135 "pd_term.m"
      return;
    }
#line 135 "pd_term.m"
  }
#line 135 "pd_term.m"
}

#line 135 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(
#line 135 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 135 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 135 "pd_term.m"
{
#line 135 "pd_term.m"
  {
#line 135 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 135 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 135 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 135 "pd_term.m"
    {
#line 135 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 135 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 135 "pd_term.m"
  }
#line 135 "pd_term.m"
}

#line 131 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 131 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 131 "pd_term.m"
{
#line 131 "pd_term.m"
  {
#line 131 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 131 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 131 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 131 "pd_term.m"
    {
#line 131 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 131 "pd_term.m"
      return;
    }
#line 131 "pd_term.m"
  }
#line 131 "pd_term.m"
}

#line 131 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 131 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 131 "pd_term.m"
{
#line 131 "pd_term.m"
  {
#line 131 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 131 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 131 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 131 "pd_term.m"
    {
#line 131 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 131 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 131 "pd_term.m"
  }
#line 131 "pd_term.m"
}

#line 123 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0(
#line 123 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 123 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 123 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 123 "pd_term.m"
{
#line 123 "pd_term.m"
  {
#line 123 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 123 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 123 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 123 "pd_term.m"
    {
#line 123 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 123 "pd_term.m"
      return;
    }
#line 123 "pd_term.m"
  }
#line 123 "pd_term.m"
}

#line 123 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0(
#line 123 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 123 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 123 "pd_term.m"
{
#line 123 "pd_term.m"
  {
#line 123 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 123 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 123 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 123 "pd_term.m"
    {
#line 123 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 123 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 123 "pd_term.m"
  }
#line 123 "pd_term.m"
}

#line 116 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0(
#line 116 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 116 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 116 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 116 "pd_term.m"
{
#line 116 "pd_term.m"
  {
#line 116 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 116 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_9 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
#line 116 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_10 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

#line 116 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_9 == transform_hlds__pd_term__CastY_10);
#line 116 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 2216 "transform_hlds.pd_term.c"
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "pd_term.m"
    else
#line 116 "pd_term.m"
      {
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_8_8;

#line 116 "pd_term.m"
        {
#line 116 "pd_term.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], &transform_hlds__pd_term__V_8_8, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
        }
#line 2238 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == (MR_Integer) 0);
#line 116 "pd_term.m"
        transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 116 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 116 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_8_8;
#line 116 "pd_term.m"
        else
#line 116 "pd_term.m"
          {
#line 116 "pd_term.m"
            {
#line 116 "pd_term.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__V_5_5)), ((MR_Box) (transform_hlds__pd_term__V_7_7)));
#line 116 "pd_term.m"
              return;
            }
#line 116 "pd_term.m"
          }
#line 116 "pd_term.m"
      }
#line 116 "pd_term.m"
  }
#line 116 "pd_term.m"
}

#line 116 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0(
#line 116 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 116 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 116 "pd_term.m"
{
#line 116 "pd_term.m"
  {
#line 116 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 116 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_7 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 116 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_8 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 116 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_7 == transform_hlds__pd_term__CastY_8);
#line 116 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 116 "pd_term.m"
      transform_hlds__pd_term__succeeded = MR_TRUE;
#line 116 "pd_term.m"
    else
#line 116 "pd_term.m"
      {
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__TypeInfo_10_10;
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));

#line 2305 "transform_hlds.pd_term.c"
        {
#line 2307 "transform_hlds.pd_term.c"
          transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
        }
#line 116 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 116 "pd_term.m"
          {
#line 2314 "transform_hlds.pd_term.c"
            transform_hlds__pd_term__TypeInfo_10_10 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[4];
#line 2316 "transform_hlds.pd_term.c"
            {
#line 2318 "transform_hlds.pd_term.c"
              return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_10_10, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
            }
#line 116 "pd_term.m"
          }
#line 116 "pd_term.m"
      }
#line 116 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 116 "pd_term.m"
  }
#line 116 "pd_term.m"
}

#line 72 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0(
#line 72 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 72 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 72 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 72 "pd_term.m"
{
#line 72 "pd_term.m"
  {
#line 72 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 72 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_37 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
#line 72 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_38 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

#line 72 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_37 == transform_hlds__pd_term__CastY_38);
#line 72 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 2356 "transform_hlds.pd_term.c"
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "pd_term.m"
    else
#line 72 "pd_term.m"
#line 72 "pd_term.m"
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) {
#line 72 "pd_term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 72 "pd_term.m"
        case (MR_Integer) 0:
#line 72 "pd_term.m"
#line 72 "pd_term.m"
          switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 72 "pd_term.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 72 "pd_term.m"
            case (MR_Integer) 0:
#line 72 "pd_term.m"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "pd_term.m"
              break;
#line 72 "pd_term.m"
            case (MR_Integer) 1:
#line 2380 "transform_hlds.pd_term.c"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "pd_term.m"
              break;
#line 72 "pd_term.m"
            case (MR_Integer) 2:
#line 2386 "transform_hlds.pd_term.c"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "pd_term.m"
              break;
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
        case (MR_Integer) 1:
#line 72 "pd_term.m"
          {
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "pd_term.m"
#line 72 "pd_term.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 72 "pd_term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 72 "pd_term.m"
              case (MR_Integer) 0:
#line 2410 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
              case (MR_Integer) 1:
#line 72 "pd_term.m"
                {
#line 72 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "pd_term.m"
                  MR_Integer transform_hlds__pd_term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_8_8;

#line 72 "pd_term.m"
                  {
#line 72 "pd_term.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__V_8_8, ((MR_Box) (transform_hlds__pd_term__V_45_45)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
                  }
#line 2430 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == (MR_Integer) 0);
#line 72 "pd_term.m"
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 72 "pd_term.m"
                  if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_8_8;
#line 72 "pd_term.m"
                  else
#line 72 "pd_term.m"
                    {
#line 72 "pd_term.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__V_44_44, transform_hlds__pd_term__V_7_7);
#line 72 "pd_term.m"
                      return;
                    }
#line 72 "pd_term.m"
                }
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
              case (MR_Integer) 2:
#line 2453 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
            }
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
        case (MR_Integer) 2:
#line 72 "pd_term.m"
          {
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "pd_term.m"
#line 72 "pd_term.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 72 "pd_term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 72 "pd_term.m"
              case (MR_Integer) 0:
#line 2481 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
              case (MR_Integer) 1:
#line 2487 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
              case (MR_Integer) 2:
#line 72 "pd_term.m"
                {
#line 72 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "pd_term.m"
                  MR_Integer transform_hlds__pd_term__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 2)));
#line 72 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_27_27;

#line 72 "pd_term.m"
                  {
#line 72 "pd_term.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__V_27_27, ((MR_Box) (transform_hlds__pd_term__V_48_48)), ((MR_Box) (transform_hlds__pd_term__V_24_24)));
                  }
#line 2509 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_27_27 == (MR_Integer) 0);
#line 72 "pd_term.m"
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 72 "pd_term.m"
                  if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_27_27;
#line 72 "pd_term.m"
                  else
#line 72 "pd_term.m"
                    {
#line 72 "pd_term.m"
                      MR_Word transform_hlds__pd_term__V_28_28;

#line 72 "pd_term.m"
                      {
#line 72 "pd_term.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_term__V_28_28, transform_hlds__pd_term__V_47_47, transform_hlds__pd_term__V_25_25);
                      }
#line 2529 "transform_hlds.pd_term.c"
                      transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_28_28 == (MR_Integer) 0);
#line 72 "pd_term.m"
                      transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 72 "pd_term.m"
                      if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
                        *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_28_28;
#line 72 "pd_term.m"
                      else
#line 72 "pd_term.m"
                        {
#line 72 "pd_term.m"
                          hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__V_46_46, transform_hlds__pd_term__V_26_26);
#line 72 "pd_term.m"
                          return;
                        }
#line 72 "pd_term.m"
                    }
#line 72 "pd_term.m"
                }
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
            }
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
      }
#line 72 "pd_term.m"
  }
#line 72 "pd_term.m"
}

#line 72 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0(
#line 72 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 72 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 72 "pd_term.m"
{
#line 72 "pd_term.m"
  {
#line 72 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 72 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_15 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 72 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_16 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 72 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_15 == transform_hlds__pd_term__CastY_16);
#line 72 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
      transform_hlds__pd_term__succeeded = MR_TRUE;
#line 72 "pd_term.m"
    else
#line 72 "pd_term.m"
#line 72 "pd_term.m"
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__1_1)) {
#line 72 "pd_term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 72 "pd_term.m"
        case (MR_Integer) 0:
#line 72 "pd_term.m"
          {
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__CastX_13 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__CastY_14 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 72 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastY_14 == transform_hlds__pd_term__CastX_13);
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
        case (MR_Integer) 1:
#line 72 "pd_term.m"
          {
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_17_17;
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_5_5;
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_6_6;

#line 72 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 72 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
              {
#line 72 "pd_term.m"
                transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "pd_term.m"
                transform_hlds__pd_term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 2636 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2638 "transform_hlds.pd_term.c"
                {
#line 2640 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_17_17, ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
                }
#line 72 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 2645 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_4_4 == transform_hlds__pd_term__V_6_6);
#line 72 "pd_term.m"
              }
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
        case (MR_Integer) 2:
#line 72 "pd_term.m"
          {
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_18_18;
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 2)));
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_10_10;
#line 72 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_11_11;
#line 72 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12;

#line 72 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 72 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
              {
#line 72 "pd_term.m"
                transform_hlds__pd_term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "pd_term.m"
                transform_hlds__pd_term__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "pd_term.m"
                transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
#line 2684 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2686 "transform_hlds.pd_term.c"
                {
#line 2688 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_term__V_7_7)), ((MR_Box) (transform_hlds__pd_term__V_10_10)));
                }
#line 72 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
                  {
#line 2695 "transform_hlds.pd_term.c"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == transform_hlds__pd_term__V_11_11);
#line 72 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 2699 "transform_hlds.pd_term.c"
                      {
#line 2701 "transform_hlds.pd_term.c"
                        return transform_hlds__pd_term__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_term__V_9_9, transform_hlds__pd_term__V_12_12);
                      }
#line 72 "pd_term.m"
                  }
#line 72 "pd_term.m"
              }
#line 72 "pd_term.m"
          }
#line 72 "pd_term.m"
          break;
#line 72 "pd_term.m"
      }
#line 72 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 72 "pd_term.m"
  }
#line 72 "pd_term.m"
}

#line 300 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 300 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 300 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 300 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 300 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4)
#line 300 "pd_term.m"
{
#line 303 "pd_term.m"
  {
#line 303 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 303 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "pd_term.m"
      {
#line 303 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "pd_term.m"
          {
#line 303 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 303 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "pd_term.m"
          }
#line 303 "pd_term.m"
        else
#line 306 "pd_term.m"
          {
#line 307 "pd_term.m"
            {
#line 307 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 306 "pd_term.m"
          }
#line 303 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 303 "pd_term.m"
      }
#line 303 "pd_term.m"
    else
#line 303 "pd_term.m"
      {
#line 303 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));

#line 303 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "pd_term.m"
          {
#line 305 "pd_term.m"
            {
#line 305 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 304 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 304 "pd_term.m"
          }
#line 303 "pd_term.m"
        else
#line 309 "pd_term.m"
          {
#line 309 "pd_term.m"
            MR_Integer transform_hlds__pd_term__Arg_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 0)));
#line 309 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldSize_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 1)));
#line 309 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewSize_23;
#line 309 "pd_term.m"
            MR_Word transform_hlds__pd_term__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 309 "pd_term.m"
            MR_Word transform_hlds__pd_term__FoundDecreasing1_27;
#line 309 "pd_term.m"
            MR_Word transform_hlds__pd_term__NonIncreasing1_28;
#line 309 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 309 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 0)));

#line 309 "pd_term.m"
            transform_hlds__pd_term__NewSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 1)));
#line 310 "pd_term.m"
            {
#line 310 "pd_term.m"
              transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__V_32_32, transform_hlds__pd_term__Args_24, &transform_hlds__pd_term__FoundDecreasing1_27, &transform_hlds__pd_term__NonIncreasing1_28);
            }
#line 309 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 309 "pd_term.m"
              {
#line 311 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 <= transform_hlds__pd_term__OldSize_20);
#line 318 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 312 "pd_term.m"
                  {
#line 312 "pd_term.m"
                    MR_Word transform_hlds__pd_term__V_31_31;

#line 312 "pd_term.m"
                    {
#line 312 "pd_term.m"
                      transform_hlds__pd_term__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 0) = ((MR_Box) (transform_hlds__pd_term__Arg_19));
#line 312 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_23));
#line 312 "pd_term.m"
                    }
#line 312 "pd_term.m"
                    {
#line 312 "pd_term.m"
                      MR_Word base;
#line 312 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__4_4 = base;
#line 312 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_31_31));
#line 312 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NonIncreasing1_28));
#line 312 "pd_term.m"
                    }
#line 313 "pd_term.m"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 == transform_hlds__pd_term__OldSize_20);
#line 315 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 314 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 315 "pd_term.m"
                    else
#line 316 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 1;
#line 312 "pd_term.m"
                  }
#line 318 "pd_term.m"
                else
#line 319 "pd_term.m"
                  {
#line 319 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__4_4 = transform_hlds__pd_term__NonIncreasing1_28;
#line 320 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__3_3 = transform_hlds__pd_term__FoundDecreasing1_27;
#line 319 "pd_term.m"
                  }
#line 318 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 309 "pd_term.m"
              }
#line 309 "pd_term.m"
          }
#line 303 "pd_term.m"
      }
#line 303 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 303 "pd_term.m"
  }
#line 300 "pd_term.m"
}

#line 282 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 282 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 282 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 282 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 282 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7)
#line 282 "pd_term.m"
{
#line 286 "pd_term.m"
  {
#line 286 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 286 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "pd_term.m"
      {
#line 286 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (MR_Integer) 0;
#line 286 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (MR_Integer) 0;
#line 286 "pd_term.m"
      }
#line 286 "pd_term.m"
    else
#line 289 "pd_term.m"
      {
#line 289 "pd_term.m"
        MR_Integer transform_hlds__pd_term__ArgNo_14;
#line 289 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldSize_15;
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__OldSizes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 1)));
#line 289 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewSize_17;
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__NewSizes_18;
#line 289 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldTotal1_21;
#line 289 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewTotal1_22;
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_23;
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_24;
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 0)));
#line 289 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_26_26;
#line 292 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_Arg_23;

#line 288 "pd_term.m"
        transform_hlds__pd_term__ArgNo_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 0)));
#line 288 "pd_term.m"
        transform_hlds__pd_term__OldSize_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 1)));
#line 290 "pd_term.m"
        {
#line 290 "pd_term.m"
          transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_3, transform_hlds__pd_term__OldSizes_16, &transform_hlds__pd_term__NewSizes_18, &transform_hlds__pd_term__OldTotal1_21, &transform_hlds__pd_term__NewTotal1_22);
        }
#line 292 "pd_term.m"
        {
#line 292 "pd_term.m"
          mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[2], transform_hlds__pd_term__Args_3, transform_hlds__pd_term__ArgNo_14, &transform_hlds__pd_term__conv0_Arg_23);
        }
#line 292 "pd_term.m"
        transform_hlds__pd_term__Arg_23 = ((MR_Word) transform_hlds__pd_term__conv0_Arg_23);
#line 293 "pd_term.m"
        {
#line 293 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_23, &transform_hlds__pd_term__ArgInst_24);
        }
#line 294 "pd_term.m"
        {
#line 294 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_24, &transform_hlds__pd_term__NewSize_17);
        }
#line 288 "pd_term.m"
        {
#line 288 "pd_term.m"
          transform_hlds__pd_term__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_14));
#line 288 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_17));
#line 288 "pd_term.m"
        }
#line 288 "pd_term.m"
        {
#line 288 "pd_term.m"
          MR_Word base;
#line 288 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 288 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_26_26));
#line 288 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NewSizes_18));
#line 288 "pd_term.m"
        }
#line 295 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (transform_hlds__pd_term__OldTotal1_21 + transform_hlds__pd_term__OldSize_15);
#line 296 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (transform_hlds__pd_term__NewTotal1_22 + transform_hlds__pd_term__NewSize_17);
#line 289 "pd_term.m"
      }
#line 286 "pd_term.m"
  }
#line 282 "pd_term.m"
}

#line 269 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 269 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 269 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 269 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5)
#line 269 "pd_term.m"
{
#line 272 "pd_term.m"
  {
#line 272 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 272 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "pd_term.m"
      *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "pd_term.m"
    else
#line 274 "pd_term.m"
      {
#line 274 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "pd_term.m"
        MR_Word transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Size_14;
#line 274 "pd_term.m"
        MR_Word transform_hlds__pd_term__Sizes_15;
#line 274 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NextArgNo_16 = (transform_hlds__pd_term__ArgNo_4 + (MR_Integer) 1);
#line 274 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_17;
#line 274 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_18_18;

#line 276 "pd_term.m"
        {
#line 276 "pd_term.m"
          transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__NextArgNo_16, &transform_hlds__pd_term__Sizes_15);
        }
#line 277 "pd_term.m"
        {
#line 277 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_11, &transform_hlds__pd_term__ArgInst_17);
        }
#line 278 "pd_term.m"
        {
#line 278 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_17, &transform_hlds__pd_term__Size_14);
        }
#line 274 "pd_term.m"
        {
#line 274 "pd_term.m"
          transform_hlds__pd_term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_4));
#line 274 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 1) = ((MR_Box) (transform_hlds__pd_term__Size_14));
#line 274 "pd_term.m"
        }
#line 274 "pd_term.m"
        {
#line 274 "pd_term.m"
          MR_Word base;
#line 274 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 274 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_18_18));
#line 274 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Sizes_15));
#line 274 "pd_term.m"
        }
#line 274 "pd_term.m"
      }
#line 272 "pd_term.m"
  }
#line 269 "pd_term.m"
}

#line 93 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__update_global_term_info_5_p_0(
#line 93 "pd_term.m"
  MR_Word transform_hlds__pd_term__ProcPair_6,
#line 93 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId_7,
#line 93 "pd_term.m"
  MR_Integer transform_hlds__pd_term__Size_8,
#line 93 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13,
#line 93 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14)
#line 93 "pd_term.m"
{
#line 262 "pd_term.m"
  {
#line 262 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 262 "pd_term.m"
    MR_Word transform_hlds__pd_term__Single_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 0)));
#line 262 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 1)));
#line 262 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple_12;
#line 262 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 262 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16;

#line 264 "pd_term.m"
    {
#line 264 "pd_term.m"
      transform_hlds__pd_term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "pd_term.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_term__V_16_16, 0) = ((MR_Box) (transform_hlds__pd_term__PredProcId_7));
#line 264 "pd_term.m"
    }
#line 264 "pd_term.m"
    {
#line 264 "pd_term.m"
      transform_hlds__pd_term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 0) = ((MR_Box) (transform_hlds__pd_term__Size_8));
#line 264 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 1) = ((MR_Box) (transform_hlds__pd_term__V_16_16));
#line 264 "pd_term.m"
    }
#line 264 "pd_term.m"
    {
#line 264 "pd_term.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_6)), ((MR_Box) (transform_hlds__pd_term__V_15_15)), transform_hlds__pd_term__Multiple0_11, &transform_hlds__pd_term__Multiple_12);
    }
#line 265 "pd_term.m"
    {
#line 265 "pd_term.m"
      MR_Word base;
#line 265 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14 = base;
#line 265 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__Single_10));
#line 265 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__Multiple_12));
#line 265 "pd_term.m"
    }
#line 262 "pd_term.m"
  }
#line 93 "pd_term.m"
}

#line 87 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term__get_proc_term_info_3_p_0(
#line 87 "pd_term.m"
  MR_Word transform_hlds__pd_term__TermInfo_4,
#line 87 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId_5,
#line 87 "pd_term.m"
  MR_Word * transform_hlds__pd_term__ProcTermInfo_6)
#line 87 "pd_term.m"
{
#line 148 "pd_term.m"
  {
#line 148 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 148 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_ProcTermInfo_6;

#line 148 "pd_term.m"
    {
#line 148 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_4, ((MR_Box) (transform_hlds__pd_term__PredProcId_5)), &transform_hlds__pd_term__conv0_ProcTermInfo_6);
    }
#line 148 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 148 "pd_term.m"
      {
#line 148 "pd_term.m"
        *transform_hlds__pd_term__ProcTermInfo_6 = ((MR_Word) transform_hlds__pd_term__conv0_ProcTermInfo_6);
#line 148 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 148 "pd_term.m"
      }
#line 148 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 148 "pd_term.m"
  }
#line 87 "pd_term.m"
}

#line 85 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__local_term_info_init_1_p_0(
#line 85 "pd_term.m"
  MR_Word * transform_hlds__pd_term__TermInfo_2)
#line 85 "pd_term.m"
{
#line 145 "pd_term.m"
  {
#line 145 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 145 "pd_term.m"
    {
#line 145 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_2);
#line 145 "pd_term.m"
      return;
    }
#line 145 "pd_term.m"
  }
#line 85 "pd_term.m"
}

#line 83 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__global_term_info_init_1_p_0(
#line 83 "pd_term.m"
  MR_Word * transform_hlds__pd_term__TermInfo_2)
#line 83 "pd_term.m"
{
#line 139 "pd_term.m"
  {
#line 139 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 139 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoals_3;
#line 139 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoals_4;

#line 140 "pd_term.m"
    {
#line 140 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], &transform_hlds__pd_term__SingleGoals_3);
    }
#line 141 "pd_term.m"
    {
#line 141 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], &transform_hlds__pd_term__MultipleGoals_4);
    }
#line 142 "pd_term.m"
    {
#line 142 "pd_term.m"
      MR_Word base;
#line 142 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "pd_term.m"
      *transform_hlds__pd_term__TermInfo_2 = base;
#line 142 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoals_3));
#line 142 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoals_4));
#line 142 "pd_term.m"
    }
#line 139 "pd_term.m"
  }
#line 83 "pd_term.m"
}

#line 80 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term__local_check_5_p_0(
#line 80 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_6,
#line 80 "pd_term.m"
  MR_Word transform_hlds__pd_term__Goal1_7,
#line 80 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_8,
#line 80 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20,
#line 80 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Cover_21)
#line 80 "pd_term.m"
{
#line 237 "pd_term.m"
  {
#line 237 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 237 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId_10;
#line 237 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId_11;
#line 237 "pd_term.m"
    MR_Word transform_hlds__pd_term__Args_12;
#line 237 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 0)));
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 1)));
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_13_13;
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_14_14;
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 243 "pd_term.m"
    MR_Word transform_hlds__pd_term__CoveringInstSizes0_17;
#line 243 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeCtorInfo_29_29;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeInfo_30_30;
#line 239 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_CoveringInstSizes0_17;

#line 238 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 238 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 238 "pd_term.m"
      {
#line 238 "pd_term.m"
        transform_hlds__pd_term__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 0)));
#line 238 "pd_term.m"
        transform_hlds__pd_term__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 1)));
#line 238 "pd_term.m"
        transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 2)));
#line 238 "pd_term.m"
        transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 3)));
#line 238 "pd_term.m"
        transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 4)));
#line 238 "pd_term.m"
        transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 5)));
#line 3352 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3354 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 239 "pd_term.m"
        {
#line 239 "pd_term.m"
          transform_hlds__pd_term__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 239 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 239 "pd_term.m"
        }
#line 239 "pd_term.m"
        {
#line 239 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_term__TypeCtorInfo_29_29, transform_hlds__pd_term__TypeInfo_30_30, transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, ((MR_Box) (transform_hlds__pd_term__V_23_23)), &transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
        }
#line 239 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 239 "pd_term.m"
          {
#line 239 "pd_term.m"
            transform_hlds__pd_term__CoveringInstSizes0_17 = ((MR_Word) transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
#line 239 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 239 "pd_term.m"
          }
#line 243 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 241 "pd_term.m"
          {
#line 241 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeCtorInfo_31_31;
#line 241 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_32_32;
#line 241 "pd_term.m"
            MR_Word transform_hlds__pd_term__CoveringInstSizes_18;
#line 241 "pd_term.m"
            MR_Word transform_hlds__pd_term__NewSizes1_40;
#line 241 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldTotal_41;
#line 241 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewTotal_42;

#line 252 "pd_term.m"
            {
#line 252 "pd_term.m"
              transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__CoveringInstSizes0_17, &transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__OldTotal_41, &transform_hlds__pd_term__NewTotal_42);
            }
#line 254 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewTotal_42 < transform_hlds__pd_term__OldTotal_41);
#line 256 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 255 "pd_term.m"
              {
#line 255 "pd_term.m"
                transform_hlds__pd_term__CoveringInstSizes_18 = transform_hlds__pd_term__NewSizes1_40;
#line 255 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 255 "pd_term.m"
              }
#line 256 "pd_term.m"
            else
#line 257 "pd_term.m"
              {
#line 257 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_44_44;

#line 257 "pd_term.m"
                {
#line 257 "pd_term.m"
                  transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__CoveringInstSizes0_17, transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__V_44_44, &transform_hlds__pd_term__CoveringInstSizes_18);
                }
#line 257 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 257 "pd_term.m"
                  transform_hlds__pd_term__succeeded = ((MR_Integer) 1 == transform_hlds__pd_term__V_44_44);
#line 257 "pd_term.m"
              }
#line 241 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 241 "pd_term.m"
              {
#line 3437 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3439 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 242 "pd_term.m"
                {
#line 242 "pd_term.m"
                  mercury__map__set_4_p_0(transform_hlds__pd_term__TypeCtorInfo_31_31, transform_hlds__pd_term__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_term__V_23_23)), ((MR_Box) (transform_hlds__pd_term__CoveringInstSizes_18)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
                }
#line 242 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 241 "pd_term.m"
              }
#line 241 "pd_term.m"
          }
#line 243 "pd_term.m"
        else
#line 244 "pd_term.m"
          {
#line 244 "pd_term.m"
            MR_Word transform_hlds__pd_term__ArgInstSizes_19;
#line 244 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_27_27;

#line 244 "pd_term.m"
            {
#line 244 "pd_term.m"
              transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, (MR_Integer) 1, &transform_hlds__pd_term__ArgInstSizes_19);
            }
#line 245 "pd_term.m"
            {
#line 245 "pd_term.m"
              transform_hlds__pd_term__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 245 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 245 "pd_term.m"
            }
#line 245 "pd_term.m"
            {
#line 245 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__V_27_27)), ((MR_Box) (transform_hlds__pd_term__ArgInstSizes_19)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
            }
#line 244 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 244 "pd_term.m"
          }
#line 238 "pd_term.m"
      }
#line 237 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 237 "pd_term.m"
  }
#line 80 "pd_term.m"
}

#line 62 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__global_check_9_p_0(
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term___ModuleInfo_10,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term___InstMap_14,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_15,
#line 62 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
#line 62 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
#line 62 "pd_term.m"
  MR_Word * transform_hlds__pd_term__Result_17)
#line 62 "pd_term.m"
{
#line 153 "pd_term.m"
  {
#line 153 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 153 "pd_term.m"
    {
#line 153 "pd_term.m"
      transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(transform_hlds__pd_term__EarlierGoal_11, transform_hlds__pd_term__BetweenGoals_12, transform_hlds__pd_term__MaybeLaterGoal_13, transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, transform_hlds__pd_term__STATE_VARIABLE_Info_49, transform_hlds__pd_term__Result_17);
#line 153 "pd_term.m"
      return;
    }
#line 153 "pd_term.m"
  }
#line 62 "pd_term.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.pd_term. */
