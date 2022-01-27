/*
** Automatically generated from `pd_term.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 143 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 146 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2];

#line 149 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0;

#line 152 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3];

#line 155 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1;

#line 158 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2;

#line 161 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1];

#line 164 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1];

#line 167 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1];

#line 170 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0[3];

#line 173 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3];

#line 176 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3];

#line 179 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 182 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 185 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 188 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 191 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 194 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2];

#line 197 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0;

#line 200 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1];

#line 203 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1];

#line 206 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1];

#line 209 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1];

#line 212 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 215 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 217 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 220 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 223 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 225 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 227 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 230 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 233 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 235 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 238 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 241 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 243 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 245 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 248 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 251 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 253 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 256 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 259 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 261 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 263 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 266 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 269 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 271 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 274 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 277 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 279 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 281 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 284 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 287 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 289 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 292 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 295 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 297 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 299 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 302 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 305 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 307 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 310 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 313 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 315 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 317 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 320 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 323 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 325 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 328 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 331 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 333 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 335 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 223 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 223 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 223 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 223 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 127 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 127 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 127 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 132 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 132 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 132 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 301 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 301 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 301 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 301 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 301 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4);

#line 283 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 283 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 283 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 283 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7);

#line 270 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 270 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 270 "pd_term.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 514 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 522 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 531 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 537 "transform_hlds.pd_term.c"
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

#line 552 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 559 "transform_hlds.pd_term.c"
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

#line 574 "transform_hlds.pd_term.c"
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

#line 589 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2
};

#line 594 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0
};

#line 599 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 604 "transform_hlds.pd_term.c"
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

#line 623 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 630 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 637 "transform_hlds.pd_term.c"
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

#line 654 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 663 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 671 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 680 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 689 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 698 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 704 "transform_hlds.pd_term.c"
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

#line 719 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 724 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0
  }
};

#line 733 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 738 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1] = {
  (MR_Integer) 0
};

#line 743 "transform_hlds.pd_term.c"
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

#line 760 "transform_hlds.pd_term.c"
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

#line 777 "transform_hlds.pd_term.c"
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

#line 794 "transform_hlds.pd_term.c"
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

#line 811 "transform_hlds.pd_term.c"
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

#line 828 "transform_hlds.pd_term.c"
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

#line 845 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 848 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 850 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 852 "transform_hlds.pd_term.c"
{
#line 854 "transform_hlds.pd_term.c"
  {
#line 856 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 859 "transform_hlds.pd_term.c"
    {
#line 861 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_check_result_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 864 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 866 "transform_hlds.pd_term.c"
  }
#line 868 "transform_hlds.pd_term.c"
}

#line 871 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 874 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 876 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 878 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 880 "transform_hlds.pd_term.c"
{
#line 882 "transform_hlds.pd_term.c"
  {
#line 884 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 887 "transform_hlds.pd_term.c"
    {
#line 889 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_check_result_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 892 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 894 "transform_hlds.pd_term.c"
  }
#line 896 "transform_hlds.pd_term.c"
}

#line 899 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 902 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 904 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 906 "transform_hlds.pd_term.c"
{
#line 908 "transform_hlds.pd_term.c"
  {
#line 910 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 913 "transform_hlds.pd_term.c"
    {
#line 915 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 918 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 920 "transform_hlds.pd_term.c"
  }
#line 922 "transform_hlds.pd_term.c"
}

#line 925 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 928 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 930 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 932 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 934 "transform_hlds.pd_term.c"
{
#line 936 "transform_hlds.pd_term.c"
  {
#line 938 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 941 "transform_hlds.pd_term.c"
    {
#line 943 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 946 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 948 "transform_hlds.pd_term.c"
  }
#line 950 "transform_hlds.pd_term.c"
}

#line 953 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 956 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 958 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 960 "transform_hlds.pd_term.c"
{
#line 962 "transform_hlds.pd_term.c"
  {
#line 964 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 967 "transform_hlds.pd_term.c"
    {
#line 969 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____local_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 972 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 974 "transform_hlds.pd_term.c"
  }
#line 976 "transform_hlds.pd_term.c"
}

#line 979 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 982 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 984 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 986 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 988 "transform_hlds.pd_term.c"
{
#line 990 "transform_hlds.pd_term.c"
  {
#line 992 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 995 "transform_hlds.pd_term.c"
    {
#line 997 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____local_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1000 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1002 "transform_hlds.pd_term.c"
  }
#line 1004 "transform_hlds.pd_term.c"
}

#line 1007 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 1010 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1012 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1014 "transform_hlds.pd_term.c"
{
#line 1016 "transform_hlds.pd_term.c"
  {
#line 1018 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1021 "transform_hlds.pd_term.c"
    {
#line 1023 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1026 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1028 "transform_hlds.pd_term.c"
  }
#line 1030 "transform_hlds.pd_term.c"
}

#line 1033 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 1036 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1038 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1040 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1042 "transform_hlds.pd_term.c"
{
#line 1044 "transform_hlds.pd_term.c"
  {
#line 1046 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1049 "transform_hlds.pd_term.c"
    {
#line 1051 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1054 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1056 "transform_hlds.pd_term.c"
  }
#line 1058 "transform_hlds.pd_term.c"
}

#line 1061 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 1064 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1066 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1068 "transform_hlds.pd_term.c"
{
#line 1070 "transform_hlds.pd_term.c"
  {
#line 1072 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1075 "transform_hlds.pd_term.c"
    {
#line 1077 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1080 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1082 "transform_hlds.pd_term.c"
  }
#line 1084 "transform_hlds.pd_term.c"
}

#line 1087 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 1090 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1092 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1094 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1096 "transform_hlds.pd_term.c"
{
#line 1098 "transform_hlds.pd_term.c"
  {
#line 1100 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1103 "transform_hlds.pd_term.c"
    {
#line 1105 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1108 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1110 "transform_hlds.pd_term.c"
  }
#line 1112 "transform_hlds.pd_term.c"
}

#line 1115 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 1118 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1120 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1122 "transform_hlds.pd_term.c"
{
#line 1124 "transform_hlds.pd_term.c"
  {
#line 1126 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1129 "transform_hlds.pd_term.c"
    {
#line 1131 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____proc_pair_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1134 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1136 "transform_hlds.pd_term.c"
  }
#line 1138 "transform_hlds.pd_term.c"
}

#line 1141 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 1144 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1146 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1148 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1150 "transform_hlds.pd_term.c"
{
#line 1152 "transform_hlds.pd_term.c"
  {
#line 1154 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1157 "transform_hlds.pd_term.c"
    {
#line 1159 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____proc_pair_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1162 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1164 "transform_hlds.pd_term.c"
  }
#line 1166 "transform_hlds.pd_term.c"
}

#line 1169 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 1172 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1174 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1176 "transform_hlds.pd_term.c"
{
#line 1178 "transform_hlds.pd_term.c"
  {
#line 1180 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1183 "transform_hlds.pd_term.c"
    {
#line 1185 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____single_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1188 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1190 "transform_hlds.pd_term.c"
  }
#line 1192 "transform_hlds.pd_term.c"
}

#line 1195 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 1198 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1200 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1202 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1204 "transform_hlds.pd_term.c"
{
#line 1206 "transform_hlds.pd_term.c"
  {
#line 1208 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1211 "transform_hlds.pd_term.c"
    {
#line 1213 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____single_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1216 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1218 "transform_hlds.pd_term.c"
  }
#line 1220 "transform_hlds.pd_term.c"
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
#line 154 "pd_term.m"
  {
#line 154 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 154 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 154 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 154 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover_45;
#line 154 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover_47;
#line 208 "pd_term.m"
    MR_Word transform_hlds__pd_term__FirstPredProcId_31;
#line 208 "pd_term.m"
    MR_Word transform_hlds__pd_term__MaybeLastPredProcId_40;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId1_20;
#line 157 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId1_21;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 0)));
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_53_53;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 1)));
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_24_24;
#line 157 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_25_25;

#line 157 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_50_50)) == (MR_mktag((MR_Integer) 2)));
#line 157 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 157 "pd_term.m"
      {
#line 157 "pd_term.m"
        transform_hlds__pd_term__PredId1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 0)));
#line 157 "pd_term.m"
        transform_hlds__pd_term__ProcId1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 1)));
#line 157 "pd_term.m"
        transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 2)));
#line 157 "pd_term.m"
        transform_hlds__pd_term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 3)));
#line 157 "pd_term.m"
        transform_hlds__pd_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 4)));
#line 157 "pd_term.m"
        transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 5)));
#line 161 "pd_term.m"
        {
#line 161 "pd_term.m"
          transform_hlds__pd_term__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 0) = ((MR_Box) (transform_hlds__pd_term__PredId1_20));
#line 161 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId1_21));
#line 161 "pd_term.m"
        }
#line 161 "pd_term.m"
        {
#line 161 "pd_term.m"
          transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho2_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_53_53, &transform_hlds__pd_term__FirstPredProcId_31);
        }
#line 157 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 168 "pd_term.m"
          {
#line 168 "pd_term.m"
            if ((transform_hlds__pd_term__MaybeLaterGoal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "pd_term.m"
              {
#line 170 "pd_term.m"
                transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 170 "pd_term.m"
              }
#line 168 "pd_term.m"
            else
#line 164 "pd_term.m"
              {
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__PredId2_32;
#line 164 "pd_term.m"
                MR_Integer transform_hlds__pd_term__ProcId2_33;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__LastPredProcId_39;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLaterGoal_13, (MR_Integer) 0)));
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 0)));
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_57_57;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 1)));
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_34_34;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_35_35;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_36_36;
#line 164 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_37_37;

#line 164 "pd_term.m"
                transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_55_55)) == (MR_mktag((MR_Integer) 2)));
#line 164 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 164 "pd_term.m"
                  {
#line 164 "pd_term.m"
                    transform_hlds__pd_term__PredId2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 0)));
#line 164 "pd_term.m"
                    transform_hlds__pd_term__ProcId2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 1)));
#line 164 "pd_term.m"
                    transform_hlds__pd_term__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 2)));
#line 164 "pd_term.m"
                    transform_hlds__pd_term__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 3)));
#line 164 "pd_term.m"
                    transform_hlds__pd_term__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 4)));
#line 164 "pd_term.m"
                    transform_hlds__pd_term__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 5)));
#line 165 "pd_term.m"
                    {
#line 165 "pd_term.m"
                      transform_hlds__pd_term__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 0) = ((MR_Box) (transform_hlds__pd_term__PredId2_32));
#line 165 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId2_33));
#line 165 "pd_term.m"
                    }
#line 165 "pd_term.m"
                    {
#line 165 "pd_term.m"
                      transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho1_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_57_57, &transform_hlds__pd_term__LastPredProcId_39);
                    }
#line 164 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 164 "pd_term.m"
                      {
#line 167 "pd_term.m"
                        {
#line 167 "pd_term.m"
                          transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "pd_term.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLastPredProcId_40, 0) = ((MR_Box) (transform_hlds__pd_term__LastPredProcId_39));
#line 167 "pd_term.m"
                        }
#line 167 "pd_term.m"
                        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 164 "pd_term.m"
                      }
#line 164 "pd_term.m"
                  }
#line 164 "pd_term.m"
              }
#line 168 "pd_term.m"
          }
#line 157 "pd_term.m"
      }
#line 208 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 173 "pd_term.m"
      {
#line 173 "pd_term.m"
        MR_Word transform_hlds__pd_term__ProcPair_41;
#line 173 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Length_42;
#line 198 "pd_term.m"
        MR_Integer transform_hlds__pd_term__MaxLength_43;
#line 198 "pd_term.m"
        MR_Word transform_hlds__pd_term__MaybeCoveringPredProcId_44;
#line 176 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_58_58;
#line 176 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_V_58_58;

#line 173 "pd_term.m"
        {
#line 173 "pd_term.m"
          transform_hlds__pd_term__ProcPair_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 173 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 0) = ((MR_Box) (transform_hlds__pd_term__FirstPredProcId_31));
#line 173 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 1) = ((MR_Box) (transform_hlds__pd_term__MaybeLastPredProcId_40));
#line 173 "pd_term.m"
        }
#line 174 "pd_term.m"
        {
#line 174 "pd_term.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__pd_term__BetweenGoals_12, &transform_hlds__pd_term__Length_42);
        }
#line 176 "pd_term.m"
        {
#line 176 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], transform_hlds__pd_term__MultipleGoalCover0_19, ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), &transform_hlds__pd_term__conv0_V_58_58);
        }
#line 176 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 176 "pd_term.m"
          {
#line 176 "pd_term.m"
            transform_hlds__pd_term__V_58_58 = ((MR_Word) transform_hlds__pd_term__conv0_V_58_58);
#line 176 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 176 "pd_term.m"
          }
#line 176 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 176 "pd_term.m"
          {
#line 177 "pd_term.m"
            transform_hlds__pd_term__MaxLength_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 0)));
#line 177 "pd_term.m"
            transform_hlds__pd_term__MaybeCoveringPredProcId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 1)));
#line 177 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 176 "pd_term.m"
          }
#line 198 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 186 "pd_term.m"
          {
#line 180 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 < transform_hlds__pd_term__MaxLength_43);
#line 186 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 182 "pd_term.m"
              {
#line 182 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_59_59;

#line 182 "pd_term.m"
                {
#line 182 "pd_term.m"
                  MR_Word base;
#line 182 "pd_term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "pd_term.m"
                  *transform_hlds__pd_term__Result_17 = base;
#line 182 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 182 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 182 "pd_term.m"
                }
#line 184 "pd_term.m"
                {
#line 184 "pd_term.m"
                  transform_hlds__pd_term__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 184 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "pd_term.m"
                }
#line 184 "pd_term.m"
                {
#line 184 "pd_term.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_59_59)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
                }
#line 182 "pd_term.m"
              }
#line 186 "pd_term.m"
            else
#line 194 "pd_term.m"
              {
#line 194 "pd_term.m"
                MR_Word transform_hlds__pd_term__CoveringPredProcId_46;

#line 187 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 == transform_hlds__pd_term__MaxLength_43);
#line 187 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 187 "pd_term.m"
                  {
#line 188 "pd_term.m"
                    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__MaybeCoveringPredProcId_44)) == (MR_mktag((MR_Integer) 1)));
#line 188 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 188 "pd_term.m"
                      transform_hlds__pd_term__CoveringPredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeCoveringPredProcId_44, (MR_Integer) 0)));
#line 187 "pd_term.m"
                  }
#line 194 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 192 "pd_term.m"
                  {
#line 192 "pd_term.m"
                    {
#line 192 "pd_term.m"
                      MR_Word base;
#line 192 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 192 "pd_term.m"
                      *transform_hlds__pd_term__Result_17 = base;
#line 192 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 192 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 192 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__pd_term__CoveringPredProcId_46));
#line 192 "pd_term.m"
                    }
#line 193 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 192 "pd_term.m"
                  }
#line 194 "pd_term.m"
                else
#line 195 "pd_term.m"
                  {
#line 195 "pd_term.m"
                    *transform_hlds__pd_term__Result_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 195 "pd_term.m"
                  }
#line 194 "pd_term.m"
              }
#line 186 "pd_term.m"
          }
#line 198 "pd_term.m"
        else
#line 201 "pd_term.m"
          {
#line 201 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_61_61;

#line 201 "pd_term.m"
            {
#line 201 "pd_term.m"
              MR_Word base;
#line 201 "pd_term.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "pd_term.m"
              *transform_hlds__pd_term__Result_17 = base;
#line 201 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 201 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 201 "pd_term.m"
            }
#line 204 "pd_term.m"
            {
#line 204 "pd_term.m"
              transform_hlds__pd_term__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 204 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "pd_term.m"
            }
#line 204 "pd_term.m"
            {
#line 204 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_61_61)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
            }
#line 201 "pd_term.m"
          }
#line 207 "pd_term.m"
        transform_hlds__pd_term__SingleGoalCover_47 = transform_hlds__pd_term__SingleGoalCover0_18;
#line 173 "pd_term.m"
      }
#line 208 "pd_term.m"
    else
#line 209 "pd_term.m"
      {
#line 209 "pd_term.m"
        {
#line 209 "pd_term.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.global_check\'/9", (MR_String) "global_check");
#line 209 "pd_term.m"
          return;
        }
#line 209 "pd_term.m"
      }
#line 211 "pd_term.m"
    {
#line 211 "pd_term.m"
      MR_Word base;
#line 211 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_Info_49 = base;
#line 211 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoalCover_47));
#line 211 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoalCover_45));
#line 211 "pd_term.m"
    }
#line 154 "pd_term.m"
  }
#line 62 "pd_term.m"
}

#line 223 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 223 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 223 "pd_term.m"
{
#line 232 "pd_term.m"
  while (MR_TRUE)
#line 232 "pd_term.m"
    {
#line 232 "pd_term.m"
      /* tailcall optimized into a loop */
#line 232 "pd_term.m"
      {
#line 232 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 232 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 228 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 228 "pd_term.m"
        {
#line 228 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 228 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 228 "pd_term.m"
          {
#line 228 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 228 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 228 "pd_term.m"
          }
#line 232 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 229 "pd_term.m"
          {
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 229 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 229 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 159 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_51_51;

#line 159 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Calls_10)) == (MR_mktag((MR_Integer) 1)));
#line 159 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 159 "pd_term.m"
              {
#line 159 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 0)));
#line 159 "pd_term.m"
                transform_hlds__pd_term__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 1)));
#line 231 "pd_term.m"
                /* direct tailcall eliminated */
#line 231 "pd_term.m"
                {
#line 231 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 231 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 231 "pd_term.m"
                }
#line 231 "pd_term.m"
                continue;
#line 159 "pd_term.m"
              }
#line 229 "pd_term.m"
          }
#line 232 "pd_term.m"
        else
#line 233 "pd_term.m"
          {
#line 233 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 233 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 233 "pd_term.m"
          }
#line 232 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 232 "pd_term.m"
      }
#line 232 "pd_term.m"
      break;
#line 232 "pd_term.m"
    }
#line 223 "pd_term.m"
}

#line 223 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 223 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 223 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 223 "pd_term.m"
{
#line 232 "pd_term.m"
  while (MR_TRUE)
#line 232 "pd_term.m"
    {
#line 232 "pd_term.m"
      /* tailcall optimized into a loop */
#line 232 "pd_term.m"
      {
#line 232 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 232 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 228 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 228 "pd_term.m"
        {
#line 228 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 228 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 228 "pd_term.m"
          {
#line 228 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 228 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 228 "pd_term.m"
          }
#line 232 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 229 "pd_term.m"
          {
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 229 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 229 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 229 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 165 "pd_term.m"
            MR_Box transform_hlds__pd_term__conv1_PredProcId1_11;

#line 165 "pd_term.m"
            {
#line 165 "pd_term.m"
              transform_hlds__pd_term__succeeded = mercury__list__last_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_term__Calls_10, &transform_hlds__pd_term__conv1_PredProcId1_11);
            }
#line 165 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 165 "pd_term.m"
              {
#line 165 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) transform_hlds__pd_term__conv1_PredProcId1_11);
#line 165 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 165 "pd_term.m"
              }
#line 229 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 231 "pd_term.m"
              {
#line 231 "pd_term.m"
                /* direct tailcall eliminated */
#line 231 "pd_term.m"
                {
#line 231 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 231 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 231 "pd_term.m"
                }
#line 231 "pd_term.m"
                continue;
#line 231 "pd_term.m"
              }
#line 229 "pd_term.m"
          }
#line 232 "pd_term.m"
        else
#line 233 "pd_term.m"
          {
#line 233 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 233 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 233 "pd_term.m"
          }
#line 232 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 232 "pd_term.m"
      }
#line 232 "pd_term.m"
      break;
#line 232 "pd_term.m"
    }
#line 223 "pd_term.m"
}

#line 127 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 127 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 127 "pd_term.m"
{
#line 127 "pd_term.m"
  {
#line 127 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 127 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 127 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 127 "pd_term.m"
    {
#line 127 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 127 "pd_term.m"
      return;
    }
#line 127 "pd_term.m"
  }
#line 127 "pd_term.m"
}

#line 127 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 127 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 127 "pd_term.m"
{
#line 127 "pd_term.m"
  {
#line 127 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 127 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 127 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 127 "pd_term.m"
    {
#line 127 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 127 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 127 "pd_term.m"
  }
#line 127 "pd_term.m"
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

#line 136 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(
#line 136 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 136 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 136 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 136 "pd_term.m"
{
#line 136 "pd_term.m"
  {
#line 136 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 136 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 136 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 136 "pd_term.m"
    {
#line 136 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 136 "pd_term.m"
      return;
    }
#line 136 "pd_term.m"
  }
#line 136 "pd_term.m"
}

#line 136 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(
#line 136 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 136 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 136 "pd_term.m"
{
#line 136 "pd_term.m"
  {
#line 136 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 136 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 136 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 136 "pd_term.m"
    {
#line 136 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 136 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 136 "pd_term.m"
  }
#line 136 "pd_term.m"
}

#line 132 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 132 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 132 "pd_term.m"
{
#line 132 "pd_term.m"
  {
#line 132 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 132 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 132 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 132 "pd_term.m"
    {
#line 132 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 132 "pd_term.m"
      return;
    }
#line 132 "pd_term.m"
  }
#line 132 "pd_term.m"
}

#line 132 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 132 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 132 "pd_term.m"
{
#line 132 "pd_term.m"
  {
#line 132 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 132 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 132 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 132 "pd_term.m"
    {
#line 132 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 132 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 132 "pd_term.m"
  }
#line 132 "pd_term.m"
}

#line 124 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0(
#line 124 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 124 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 124 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 124 "pd_term.m"
{
#line 124 "pd_term.m"
  {
#line 124 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 124 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 124 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 124 "pd_term.m"
    {
#line 124 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
#line 124 "pd_term.m"
      return;
    }
#line 124 "pd_term.m"
  }
#line 124 "pd_term.m"
}

#line 124 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0(
#line 124 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 124 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 124 "pd_term.m"
{
#line 124 "pd_term.m"
  {
#line 124 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 124 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 124 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 124 "pd_term.m"
    {
#line 124 "pd_term.m"
      return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 124 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 124 "pd_term.m"
  }
#line 124 "pd_term.m"
}

#line 117 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0(
#line 117 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 117 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 117 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 117 "pd_term.m"
{
#line 117 "pd_term.m"
  {
#line 117 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 117 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_9 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
#line 117 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_10 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

#line 117 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_9 == transform_hlds__pd_term__CastY_10);
#line 117 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 2219 "transform_hlds.pd_term.c"
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 117 "pd_term.m"
    else
#line 117 "pd_term.m"
      {
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_8_8;

#line 117 "pd_term.m"
        {
#line 117 "pd_term.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], &transform_hlds__pd_term__V_8_8, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
        }
#line 2241 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == (MR_Integer) 0);
#line 117 "pd_term.m"
        transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 117 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 117 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_8_8;
#line 117 "pd_term.m"
        else
#line 117 "pd_term.m"
          {
#line 117 "pd_term.m"
            {
#line 117 "pd_term.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__V_5_5)), ((MR_Box) (transform_hlds__pd_term__V_7_7)));
#line 117 "pd_term.m"
              return;
            }
#line 117 "pd_term.m"
          }
#line 117 "pd_term.m"
      }
#line 117 "pd_term.m"
  }
#line 117 "pd_term.m"
}

#line 117 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0(
#line 117 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 117 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 117 "pd_term.m"
{
#line 117 "pd_term.m"
  {
#line 117 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 117 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_7 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 117 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_8 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 117 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_7 == transform_hlds__pd_term__CastY_8);
#line 117 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 117 "pd_term.m"
      transform_hlds__pd_term__succeeded = MR_TRUE;
#line 117 "pd_term.m"
    else
#line 117 "pd_term.m"
      {
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__TypeInfo_10_10;
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 117 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));

#line 2308 "transform_hlds.pd_term.c"
        {
#line 2310 "transform_hlds.pd_term.c"
          transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
        }
#line 117 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 117 "pd_term.m"
          {
#line 2317 "transform_hlds.pd_term.c"
            transform_hlds__pd_term__TypeInfo_10_10 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[4];
#line 2319 "transform_hlds.pd_term.c"
            {
#line 2321 "transform_hlds.pd_term.c"
              return transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_10_10, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
            }
#line 117 "pd_term.m"
          }
#line 117 "pd_term.m"
      }
#line 117 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 117 "pd_term.m"
  }
#line 117 "pd_term.m"
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
#line 2359 "transform_hlds.pd_term.c"
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
#line 2383 "transform_hlds.pd_term.c"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "pd_term.m"
              break;
#line 72 "pd_term.m"
            case (MR_Integer) 2:
#line 2389 "transform_hlds.pd_term.c"
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
#line 2413 "transform_hlds.pd_term.c"
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
#line 2433 "transform_hlds.pd_term.c"
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
#line 2456 "transform_hlds.pd_term.c"
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
#line 2484 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "pd_term.m"
                break;
#line 72 "pd_term.m"
              case (MR_Integer) 1:
#line 2490 "transform_hlds.pd_term.c"
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
#line 2512 "transform_hlds.pd_term.c"
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
#line 2532 "transform_hlds.pd_term.c"
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
#line 2639 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2641 "transform_hlds.pd_term.c"
                {
#line 2643 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_17_17, ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
                }
#line 72 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 2648 "transform_hlds.pd_term.c"
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
#line 2687 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2689 "transform_hlds.pd_term.c"
                {
#line 2691 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_term__V_7_7)), ((MR_Box) (transform_hlds__pd_term__V_10_10)));
                }
#line 72 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 72 "pd_term.m"
                  {
#line 2698 "transform_hlds.pd_term.c"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == transform_hlds__pd_term__V_11_11);
#line 72 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 2702 "transform_hlds.pd_term.c"
                      {
#line 2704 "transform_hlds.pd_term.c"
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

#line 301 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 301 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 301 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 301 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 301 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4)
#line 301 "pd_term.m"
{
#line 304 "pd_term.m"
  {
#line 304 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 304 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "pd_term.m"
      {
#line 304 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "pd_term.m"
          {
#line 304 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 304 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "pd_term.m"
          }
#line 304 "pd_term.m"
        else
#line 307 "pd_term.m"
          {
#line 308 "pd_term.m"
            {
#line 308 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 307 "pd_term.m"
          }
#line 304 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 304 "pd_term.m"
      }
#line 304 "pd_term.m"
    else
#line 304 "pd_term.m"
      {
#line 304 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));

#line 304 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pd_term.m"
          {
#line 306 "pd_term.m"
            {
#line 306 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 305 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 305 "pd_term.m"
          }
#line 304 "pd_term.m"
        else
#line 310 "pd_term.m"
          {
#line 310 "pd_term.m"
            MR_Integer transform_hlds__pd_term__Arg_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 0)));
#line 310 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldSize_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 1)));
#line 310 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewSize_23;
#line 310 "pd_term.m"
            MR_Word transform_hlds__pd_term__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "pd_term.m"
            MR_Word transform_hlds__pd_term__FoundDecreasing1_27;
#line 310 "pd_term.m"
            MR_Word transform_hlds__pd_term__NonIncreasing1_28;
#line 310 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 0)));

#line 310 "pd_term.m"
            transform_hlds__pd_term__NewSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 1)));
#line 311 "pd_term.m"
            {
#line 311 "pd_term.m"
              transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__V_32_32, transform_hlds__pd_term__Args_24, &transform_hlds__pd_term__FoundDecreasing1_27, &transform_hlds__pd_term__NonIncreasing1_28);
            }
#line 310 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 310 "pd_term.m"
              {
#line 312 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 <= transform_hlds__pd_term__OldSize_20);
#line 319 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 313 "pd_term.m"
                  {
#line 313 "pd_term.m"
                    MR_Word transform_hlds__pd_term__V_31_31;

#line 313 "pd_term.m"
                    {
#line 313 "pd_term.m"
                      transform_hlds__pd_term__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 0) = ((MR_Box) (transform_hlds__pd_term__Arg_19));
#line 313 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_23));
#line 313 "pd_term.m"
                    }
#line 313 "pd_term.m"
                    {
#line 313 "pd_term.m"
                      MR_Word base;
#line 313 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__4_4 = base;
#line 313 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_31_31));
#line 313 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NonIncreasing1_28));
#line 313 "pd_term.m"
                    }
#line 314 "pd_term.m"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 == transform_hlds__pd_term__OldSize_20);
#line 316 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 315 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 316 "pd_term.m"
                    else
#line 317 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 1;
#line 313 "pd_term.m"
                  }
#line 319 "pd_term.m"
                else
#line 320 "pd_term.m"
                  {
#line 320 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__4_4 = transform_hlds__pd_term__NonIncreasing1_28;
#line 321 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__3_3 = transform_hlds__pd_term__FoundDecreasing1_27;
#line 320 "pd_term.m"
                  }
#line 319 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 310 "pd_term.m"
              }
#line 310 "pd_term.m"
          }
#line 304 "pd_term.m"
      }
#line 304 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 304 "pd_term.m"
  }
#line 301 "pd_term.m"
}

#line 283 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 283 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 283 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 283 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 283 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7)
#line 283 "pd_term.m"
{
#line 287 "pd_term.m"
  {
#line 287 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 287 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "pd_term.m"
      {
#line 287 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (MR_Integer) 0;
#line 287 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (MR_Integer) 0;
#line 287 "pd_term.m"
      }
#line 287 "pd_term.m"
    else
#line 290 "pd_term.m"
      {
#line 290 "pd_term.m"
        MR_Integer transform_hlds__pd_term__ArgNo_14;
#line 290 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldSize_15;
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__OldSizes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 1)));
#line 290 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewSize_17;
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__NewSizes_18;
#line 290 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldTotal1_21;
#line 290 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewTotal1_22;
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_23;
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_24;
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 0)));
#line 290 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_26_26;
#line 293 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_Arg_23;

#line 289 "pd_term.m"
        transform_hlds__pd_term__ArgNo_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 0)));
#line 289 "pd_term.m"
        transform_hlds__pd_term__OldSize_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 1)));
#line 291 "pd_term.m"
        {
#line 291 "pd_term.m"
          transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_3, transform_hlds__pd_term__OldSizes_16, &transform_hlds__pd_term__NewSizes_18, &transform_hlds__pd_term__OldTotal1_21, &transform_hlds__pd_term__NewTotal1_22);
        }
#line 293 "pd_term.m"
        {
#line 293 "pd_term.m"
          mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[2], transform_hlds__pd_term__Args_3, transform_hlds__pd_term__ArgNo_14, &transform_hlds__pd_term__conv0_Arg_23);
        }
#line 293 "pd_term.m"
        transform_hlds__pd_term__Arg_23 = ((MR_Word) transform_hlds__pd_term__conv0_Arg_23);
#line 294 "pd_term.m"
        {
#line 294 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_23, &transform_hlds__pd_term__ArgInst_24);
        }
#line 295 "pd_term.m"
        {
#line 295 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_24, &transform_hlds__pd_term__NewSize_17);
        }
#line 289 "pd_term.m"
        {
#line 289 "pd_term.m"
          transform_hlds__pd_term__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_14));
#line 289 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_17));
#line 289 "pd_term.m"
        }
#line 289 "pd_term.m"
        {
#line 289 "pd_term.m"
          MR_Word base;
#line 289 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 289 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_26_26));
#line 289 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NewSizes_18));
#line 289 "pd_term.m"
        }
#line 296 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (transform_hlds__pd_term__OldTotal1_21 + transform_hlds__pd_term__OldSize_15);
#line 297 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (transform_hlds__pd_term__NewTotal1_22 + transform_hlds__pd_term__NewSize_17);
#line 290 "pd_term.m"
      }
#line 287 "pd_term.m"
  }
#line 283 "pd_term.m"
}

#line 270 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 270 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 270 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 270 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5)
#line 270 "pd_term.m"
{
#line 273 "pd_term.m"
  {
#line 273 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 273 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "pd_term.m"
      *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "pd_term.m"
    else
#line 275 "pd_term.m"
      {
#line 275 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 275 "pd_term.m"
        MR_Word transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Size_14;
#line 275 "pd_term.m"
        MR_Word transform_hlds__pd_term__Sizes_15;
#line 275 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NextArgNo_16 = (transform_hlds__pd_term__ArgNo_4 + (MR_Integer) 1);
#line 275 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_17;
#line 275 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_18_18;

#line 277 "pd_term.m"
        {
#line 277 "pd_term.m"
          transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__NextArgNo_16, &transform_hlds__pd_term__Sizes_15);
        }
#line 278 "pd_term.m"
        {
#line 278 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_11, &transform_hlds__pd_term__ArgInst_17);
        }
#line 279 "pd_term.m"
        {
#line 279 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_17, &transform_hlds__pd_term__Size_14);
        }
#line 275 "pd_term.m"
        {
#line 275 "pd_term.m"
          transform_hlds__pd_term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_4));
#line 275 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 1) = ((MR_Box) (transform_hlds__pd_term__Size_14));
#line 275 "pd_term.m"
        }
#line 275 "pd_term.m"
        {
#line 275 "pd_term.m"
          MR_Word base;
#line 275 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 275 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_18_18));
#line 275 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Sizes_15));
#line 275 "pd_term.m"
        }
#line 275 "pd_term.m"
      }
#line 273 "pd_term.m"
  }
#line 270 "pd_term.m"
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
#line 263 "pd_term.m"
  {
#line 263 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 263 "pd_term.m"
    MR_Word transform_hlds__pd_term__Single_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 0)));
#line 263 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 1)));
#line 263 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple_12;
#line 263 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 263 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16;

#line 265 "pd_term.m"
    {
#line 265 "pd_term.m"
      transform_hlds__pd_term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 265 "pd_term.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_term__V_16_16, 0) = ((MR_Box) (transform_hlds__pd_term__PredProcId_7));
#line 265 "pd_term.m"
    }
#line 265 "pd_term.m"
    {
#line 265 "pd_term.m"
      transform_hlds__pd_term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 0) = ((MR_Box) (transform_hlds__pd_term__Size_8));
#line 265 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 1) = ((MR_Box) (transform_hlds__pd_term__V_16_16));
#line 265 "pd_term.m"
    }
#line 265 "pd_term.m"
    {
#line 265 "pd_term.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_6)), ((MR_Box) (transform_hlds__pd_term__V_15_15)), transform_hlds__pd_term__Multiple0_11, &transform_hlds__pd_term__Multiple_12);
    }
#line 266 "pd_term.m"
    {
#line 266 "pd_term.m"
      MR_Word base;
#line 266 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14 = base;
#line 266 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__Single_10));
#line 266 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__Multiple_12));
#line 266 "pd_term.m"
    }
#line 263 "pd_term.m"
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
#line 149 "pd_term.m"
  {
#line 149 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 149 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_ProcTermInfo_6;

#line 149 "pd_term.m"
    {
#line 149 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_4, ((MR_Box) (transform_hlds__pd_term__PredProcId_5)), &transform_hlds__pd_term__conv0_ProcTermInfo_6);
    }
#line 149 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 149 "pd_term.m"
      {
#line 149 "pd_term.m"
        *transform_hlds__pd_term__ProcTermInfo_6 = ((MR_Word) transform_hlds__pd_term__conv0_ProcTermInfo_6);
#line 149 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 149 "pd_term.m"
      }
#line 149 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 149 "pd_term.m"
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
#line 146 "pd_term.m"
  {
#line 146 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 146 "pd_term.m"
    {
#line 146 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_2);
#line 146 "pd_term.m"
      return;
    }
#line 146 "pd_term.m"
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
#line 140 "pd_term.m"
  {
#line 140 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 140 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoals_3;
#line 140 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoals_4;

#line 141 "pd_term.m"
    {
#line 141 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], &transform_hlds__pd_term__SingleGoals_3);
    }
#line 142 "pd_term.m"
    {
#line 142 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], &transform_hlds__pd_term__MultipleGoals_4);
    }
#line 143 "pd_term.m"
    {
#line 143 "pd_term.m"
      MR_Word base;
#line 143 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 143 "pd_term.m"
      *transform_hlds__pd_term__TermInfo_2 = base;
#line 143 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoals_3));
#line 143 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoals_4));
#line 143 "pd_term.m"
    }
#line 140 "pd_term.m"
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
#line 238 "pd_term.m"
  {
#line 238 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId_10;
#line 238 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId_11;
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__Args_12;
#line 238 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 0)));
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 1)));
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_13_13;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_14_14;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 244 "pd_term.m"
    MR_Word transform_hlds__pd_term__CoveringInstSizes0_17;
#line 244 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeCtorInfo_29_29;
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeInfo_30_30;
#line 240 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_CoveringInstSizes0_17;

#line 239 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 239 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 239 "pd_term.m"
      {
#line 239 "pd_term.m"
        transform_hlds__pd_term__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 0)));
#line 239 "pd_term.m"
        transform_hlds__pd_term__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 1)));
#line 239 "pd_term.m"
        transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 2)));
#line 239 "pd_term.m"
        transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 3)));
#line 239 "pd_term.m"
        transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 4)));
#line 239 "pd_term.m"
        transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 5)));
#line 3355 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3357 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 240 "pd_term.m"
        {
#line 240 "pd_term.m"
          transform_hlds__pd_term__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 240 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 240 "pd_term.m"
        }
#line 240 "pd_term.m"
        {
#line 240 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_term__TypeCtorInfo_29_29, transform_hlds__pd_term__TypeInfo_30_30, transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, ((MR_Box) (transform_hlds__pd_term__V_23_23)), &transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
        }
#line 240 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 240 "pd_term.m"
          {
#line 240 "pd_term.m"
            transform_hlds__pd_term__CoveringInstSizes0_17 = ((MR_Word) transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
#line 240 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 240 "pd_term.m"
          }
#line 244 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 242 "pd_term.m"
          {
#line 242 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeCtorInfo_31_31;
#line 242 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_32_32;
#line 242 "pd_term.m"
            MR_Word transform_hlds__pd_term__CoveringInstSizes_18;
#line 242 "pd_term.m"
            MR_Word transform_hlds__pd_term__NewSizes1_40;
#line 242 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldTotal_41;
#line 242 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewTotal_42;

#line 253 "pd_term.m"
            {
#line 253 "pd_term.m"
              transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__CoveringInstSizes0_17, &transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__OldTotal_41, &transform_hlds__pd_term__NewTotal_42);
            }
#line 255 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewTotal_42 < transform_hlds__pd_term__OldTotal_41);
#line 257 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 256 "pd_term.m"
              {
#line 256 "pd_term.m"
                transform_hlds__pd_term__CoveringInstSizes_18 = transform_hlds__pd_term__NewSizes1_40;
#line 256 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 256 "pd_term.m"
              }
#line 257 "pd_term.m"
            else
#line 258 "pd_term.m"
              {
#line 258 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_44_44;

#line 258 "pd_term.m"
                {
#line 258 "pd_term.m"
                  transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__CoveringInstSizes0_17, transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__V_44_44, &transform_hlds__pd_term__CoveringInstSizes_18);
                }
#line 258 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 258 "pd_term.m"
                  transform_hlds__pd_term__succeeded = ((MR_Integer) 1 == transform_hlds__pd_term__V_44_44);
#line 258 "pd_term.m"
              }
#line 242 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 242 "pd_term.m"
              {
#line 3440 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3442 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 243 "pd_term.m"
                {
#line 243 "pd_term.m"
                  mercury__map__set_4_p_0(transform_hlds__pd_term__TypeCtorInfo_31_31, transform_hlds__pd_term__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_term__V_23_23)), ((MR_Box) (transform_hlds__pd_term__CoveringInstSizes_18)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
                }
#line 243 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 242 "pd_term.m"
              }
#line 242 "pd_term.m"
          }
#line 244 "pd_term.m"
        else
#line 245 "pd_term.m"
          {
#line 245 "pd_term.m"
            MR_Word transform_hlds__pd_term__ArgInstSizes_19;
#line 245 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_27_27;

#line 245 "pd_term.m"
            {
#line 245 "pd_term.m"
              transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, (MR_Integer) 1, &transform_hlds__pd_term__ArgInstSizes_19);
            }
#line 246 "pd_term.m"
            {
#line 246 "pd_term.m"
              transform_hlds__pd_term__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 246 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 246 "pd_term.m"
            }
#line 246 "pd_term.m"
            {
#line 246 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__V_27_27)), ((MR_Box) (transform_hlds__pd_term__ArgInstSizes_19)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
            }
#line 245 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 245 "pd_term.m"
          }
#line 239 "pd_term.m"
      }
#line 238 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 238 "pd_term.m"
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
#line 154 "pd_term.m"
  {
#line 154 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 154 "pd_term.m"
    {
#line 154 "pd_term.m"
      transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(transform_hlds__pd_term__EarlierGoal_11, transform_hlds__pd_term__BetweenGoals_12, transform_hlds__pd_term__MaybeLaterGoal_13, transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, transform_hlds__pd_term__STATE_VARIABLE_Info_49, transform_hlds__pd_term__Result_17);
#line 154 "pd_term.m"
      return;
    }
#line 154 "pd_term.m"
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
