/*
** Automatically generated from `pd_term.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.maybe_error.mih"
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




#line 146 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 149 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 152 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2];

#line 155 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0;

#line 158 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3];

#line 161 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1;

#line 164 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2;

#line 167 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1];

#line 170 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1];

#line 173 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1];

#line 176 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_check_result_0[3];

#line 179 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3];

#line 182 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3];

#line 185 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 188 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 191 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 194 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 197 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 200 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2];

#line 203 "transform_hlds.pd_term.c"
static const MR_DuFunctorDesc transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0;

#line 206 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1];

#line 209 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1];

#line 212 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1];

#line 215 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1];

#line 218 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 221 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 223 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 226 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 229 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 231 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 233 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 236 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 239 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 241 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 244 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 247 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 249 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 251 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 254 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 257 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 259 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 262 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 265 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 267 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 269 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 272 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 275 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 277 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 280 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 283 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 285 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 287 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 290 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 293 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 295 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 298 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 301 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 303 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 305 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 308 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 311 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 313 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 316 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 319 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 321 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 323 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 326 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 329 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 331 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2);

#line 334 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 337 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 339 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 341 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3);

#line 224 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 224 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 224 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 224 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8);

#line 128 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 128 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 128 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 133 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 133 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3);

#line 133 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2);

#line 302 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 302 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 302 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 302 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 302 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4);

#line 284 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 284 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 284 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 284 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7);

#line 271 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 271 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 271 "pd_term.m"
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



#line 512 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 520 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 529 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 535 "transform_hlds.pd_term.c"
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

#line 550 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_check_result_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 557 "transform_hlds.pd_term.c"
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

#line 572 "transform_hlds.pd_term.c"
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

#line 587 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2
};

#line 592 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_1[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0
};

#line 597 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_check_result_0_2[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 602 "transform_hlds.pd_term.c"
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

#line 621 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_check_result_0[3] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_2,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_0,
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_check_result_0_1
};

#line 628 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_check_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 635 "transform_hlds.pd_term.c"
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

#line 652 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 661 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 669 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 678 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__pd_term__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 687 "transform_hlds.pd_term.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_term__pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 696 "transform_hlds.pd_term.c"
static const MR_PseudoTypeInfo transform_hlds__pd_term__transform_hlds__pd_term__field_types_global_term_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__tree234__ti_tree234_2pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2builtin__type_ctor_info_int_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 702 "transform_hlds.pd_term.c"
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

#line 717 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 722 "transform_hlds.pd_term.c"
static const MR_DuPtagLayout transform_hlds__pd_term__transform_hlds__pd_term__du_ptag_ordered_global_term_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_term__transform_hlds__pd_term__du_stag_ordered_global_term_info_0_0
  }
};

#line 731 "transform_hlds.pd_term.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_term__transform_hlds__pd_term__du_name_ordered_global_term_info_0[1] = {
  &transform_hlds__pd_term__transform_hlds__pd_term__du_functor_desc_global_term_info_0_0
};

#line 736 "transform_hlds.pd_term.c"
static const MR_Integer transform_hlds__pd_term__transform_hlds__pd_term__functor_number_map_global_term_info_0[1] = {
  (MR_Integer) 0
};

#line 741 "transform_hlds.pd_term.c"
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

#line 758 "transform_hlds.pd_term.c"
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

#line 775 "transform_hlds.pd_term.c"
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

#line 792 "transform_hlds.pd_term.c"
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

#line 809 "transform_hlds.pd_term.c"
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

#line 826 "transform_hlds.pd_term.c"
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

#line 843 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0_10001(
#line 846 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 848 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 850 "transform_hlds.pd_term.c"
{
#line 852 "transform_hlds.pd_term.c"
  {
#line 854 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 857 "transform_hlds.pd_term.c"
    {
#line 859 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_check_result_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 862 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 864 "transform_hlds.pd_term.c"
  }
#line 866 "transform_hlds.pd_term.c"
}

#line 869 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0_10001(
#line 872 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 874 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 876 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 878 "transform_hlds.pd_term.c"
{
#line 880 "transform_hlds.pd_term.c"
  {
#line 882 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 885 "transform_hlds.pd_term.c"
    {
#line 887 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_check_result_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 890 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 892 "transform_hlds.pd_term.c"
  }
#line 894 "transform_hlds.pd_term.c"
}

#line 897 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0_10001(
#line 900 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 902 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 904 "transform_hlds.pd_term.c"
{
#line 906 "transform_hlds.pd_term.c"
  {
#line 908 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 911 "transform_hlds.pd_term.c"
    {
#line 913 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 916 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 918 "transform_hlds.pd_term.c"
  }
#line 920 "transform_hlds.pd_term.c"
}

#line 923 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0_10001(
#line 926 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 928 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 930 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 932 "transform_hlds.pd_term.c"
{
#line 934 "transform_hlds.pd_term.c"
  {
#line 936 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 939 "transform_hlds.pd_term.c"
    {
#line 941 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 944 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 946 "transform_hlds.pd_term.c"
  }
#line 948 "transform_hlds.pd_term.c"
}

#line 951 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0_10001(
#line 954 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 956 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 958 "transform_hlds.pd_term.c"
{
#line 960 "transform_hlds.pd_term.c"
  {
#line 962 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 965 "transform_hlds.pd_term.c"
    {
#line 967 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____local_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 970 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 972 "transform_hlds.pd_term.c"
  }
#line 974 "transform_hlds.pd_term.c"
}

#line 977 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0_10001(
#line 980 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 982 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 984 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 986 "transform_hlds.pd_term.c"
{
#line 988 "transform_hlds.pd_term.c"
  {
#line 990 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 993 "transform_hlds.pd_term.c"
    {
#line 995 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____local_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 998 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1000 "transform_hlds.pd_term.c"
  }
#line 1002 "transform_hlds.pd_term.c"
}

#line 1005 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0_10001(
#line 1008 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1010 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1012 "transform_hlds.pd_term.c"
{
#line 1014 "transform_hlds.pd_term.c"
  {
#line 1016 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1019 "transform_hlds.pd_term.c"
    {
#line 1021 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1024 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1026 "transform_hlds.pd_term.c"
  }
#line 1028 "transform_hlds.pd_term.c"
}

#line 1031 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0_10001(
#line 1034 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1036 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1038 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1040 "transform_hlds.pd_term.c"
{
#line 1042 "transform_hlds.pd_term.c"
  {
#line 1044 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1047 "transform_hlds.pd_term.c"
    {
#line 1049 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1052 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1054 "transform_hlds.pd_term.c"
  }
#line 1056 "transform_hlds.pd_term.c"
}

#line 1059 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0_10001(
#line 1062 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1064 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1066 "transform_hlds.pd_term.c"
{
#line 1068 "transform_hlds.pd_term.c"
  {
#line 1070 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1073 "transform_hlds.pd_term.c"
    {
#line 1075 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1078 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1080 "transform_hlds.pd_term.c"
  }
#line 1082 "transform_hlds.pd_term.c"
}

#line 1085 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0_10001(
#line 1088 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1090 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1092 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1094 "transform_hlds.pd_term.c"
{
#line 1096 "transform_hlds.pd_term.c"
  {
#line 1098 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1101 "transform_hlds.pd_term.c"
    {
#line 1103 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1106 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1108 "transform_hlds.pd_term.c"
  }
#line 1110 "transform_hlds.pd_term.c"
}

#line 1113 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0_10001(
#line 1116 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1118 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1120 "transform_hlds.pd_term.c"
{
#line 1122 "transform_hlds.pd_term.c"
  {
#line 1124 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1127 "transform_hlds.pd_term.c"
    {
#line 1129 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____proc_pair_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1132 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1134 "transform_hlds.pd_term.c"
  }
#line 1136 "transform_hlds.pd_term.c"
}

#line 1139 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0_10001(
#line 1142 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1144 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1146 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1148 "transform_hlds.pd_term.c"
{
#line 1150 "transform_hlds.pd_term.c"
  {
#line 1152 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1155 "transform_hlds.pd_term.c"
    {
#line 1157 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____proc_pair_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1160 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1162 "transform_hlds.pd_term.c"
  }
#line 1164 "transform_hlds.pd_term.c"
}

#line 1167 "transform_hlds.pd_term.c"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0_10001(
#line 1170 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_1,
#line 1172 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2)
#line 1174 "transform_hlds.pd_term.c"
{
#line 1176 "transform_hlds.pd_term.c"
  {
#line 1178 "transform_hlds.pd_term.c"
    MR_bool transform_hlds__pd_term__succeeded;

#line 1181 "transform_hlds.pd_term.c"
    {
#line 1183 "transform_hlds.pd_term.c"
      transform_hlds__pd_term__succeeded = transform_hlds__pd_term____Unify____single_covering_goals_0_0(((MR_Word) transform_hlds__pd_term__wrapper_arg_1), ((MR_Word) transform_hlds__pd_term__wrapper_arg_2));
    }
#line 1186 "transform_hlds.pd_term.c"
    return transform_hlds__pd_term__succeeded;
#line 1188 "transform_hlds.pd_term.c"
  }
#line 1190 "transform_hlds.pd_term.c"
}

#line 1193 "transform_hlds.pd_term.c"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0_10001(
#line 1196 "transform_hlds.pd_term.c"
  MR_Box * transform_hlds__pd_term__wrapper_arg_1,
#line 1198 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_2,
#line 1200 "transform_hlds.pd_term.c"
  MR_Box transform_hlds__pd_term__wrapper_arg_3)
#line 1202 "transform_hlds.pd_term.c"
{
#line 1204 "transform_hlds.pd_term.c"
  {
#line 1206 "transform_hlds.pd_term.c"
    MR_Word transform_hlds__pd_term__conv0_HeadVar__1_1;

#line 1209 "transform_hlds.pd_term.c"
    {
#line 1211 "transform_hlds.pd_term.c"
      transform_hlds__pd_term____Compare____single_covering_goals_0_0(&transform_hlds__pd_term__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_term__wrapper_arg_2), ((MR_Word) transform_hlds__pd_term__wrapper_arg_3));
    }
#line 1214 "transform_hlds.pd_term.c"
    *transform_hlds__pd_term__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_term__conv0_HeadVar__1_1));
#line 1216 "transform_hlds.pd_term.c"
  }
#line 1218 "transform_hlds.pd_term.c"
}

#line 63 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_15,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
#line 63 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
#line 63 "pd_term.m"
  MR_Word * transform_hlds__pd_term__Result_17)
#line 63 "pd_term.m"
{
#line 155 "pd_term.m"
  {
#line 155 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 155 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 155 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 155 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoalCover_45;
#line 155 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoalCover_47;
#line 209 "pd_term.m"
    MR_Word transform_hlds__pd_term__FirstPredProcId_31;
#line 209 "pd_term.m"
    MR_Word transform_hlds__pd_term__MaybeLastPredProcId_40;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId1_20;
#line 158 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId1_21;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 0)));
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_53_53;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__EarlierGoal_11, (MR_Integer) 1)));
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_24_24;
#line 158 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_25_25;

#line 158 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_50_50)) == (MR_mktag((MR_Integer) 2)));
#line 158 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 158 "pd_term.m"
      {
#line 158 "pd_term.m"
        transform_hlds__pd_term__PredId1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 0)));
#line 158 "pd_term.m"
        transform_hlds__pd_term__ProcId1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 1)));
#line 158 "pd_term.m"
        transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 2)));
#line 158 "pd_term.m"
        transform_hlds__pd_term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 3)));
#line 158 "pd_term.m"
        transform_hlds__pd_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 4)));
#line 158 "pd_term.m"
        transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_50_50, (MR_Integer) 5)));
#line 162 "pd_term.m"
        {
#line 162 "pd_term.m"
          transform_hlds__pd_term__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 0) = ((MR_Box) (transform_hlds__pd_term__PredId1_20));
#line 162 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_53_53, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId1_21));
#line 162 "pd_term.m"
        }
#line 162 "pd_term.m"
        {
#line 162 "pd_term.m"
          transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho2_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_53_53, &transform_hlds__pd_term__FirstPredProcId_31);
        }
#line 158 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 169 "pd_term.m"
          {
#line 169 "pd_term.m"
            if ((transform_hlds__pd_term__MaybeLaterGoal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "pd_term.m"
              {
#line 171 "pd_term.m"
                transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 171 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 171 "pd_term.m"
              }
#line 169 "pd_term.m"
            else
#line 165 "pd_term.m"
              {
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__PredId2_32;
#line 165 "pd_term.m"
                MR_Integer transform_hlds__pd_term__ProcId2_33;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__LastPredProcId_39;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLaterGoal_13, (MR_Integer) 0)));
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 0)));
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_57_57;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_54_54, (MR_Integer) 1)));
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_34_34;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_35_35;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_36_36;
#line 165 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_37_37;

#line 165 "pd_term.m"
                transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_55_55)) == (MR_mktag((MR_Integer) 2)));
#line 165 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 165 "pd_term.m"
                  {
#line 165 "pd_term.m"
                    transform_hlds__pd_term__PredId2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 0)));
#line 165 "pd_term.m"
                    transform_hlds__pd_term__ProcId2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 1)));
#line 165 "pd_term.m"
                    transform_hlds__pd_term__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 2)));
#line 165 "pd_term.m"
                    transform_hlds__pd_term__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 3)));
#line 165 "pd_term.m"
                    transform_hlds__pd_term__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 4)));
#line 165 "pd_term.m"
                    transform_hlds__pd_term__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_55_55, (MR_Integer) 5)));
#line 166 "pd_term.m"
                    {
#line 166 "pd_term.m"
                      transform_hlds__pd_term__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 0) = ((MR_Box) (transform_hlds__pd_term__PredId2_32));
#line 166 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_57_57, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId2_33));
#line 166 "pd_term.m"
                    }
#line 166 "pd_term.m"
                    {
#line 166 "pd_term.m"
                      transform_hlds__pd_term__succeeded = transform_hlds__pd_term__expand_calls__ho1_4_p_0(transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__V_57_57, &transform_hlds__pd_term__LastPredProcId_39);
                    }
#line 165 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 165 "pd_term.m"
                      {
#line 168 "pd_term.m"
                        {
#line 168 "pd_term.m"
                          transform_hlds__pd_term__MaybeLastPredProcId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 168 "pd_term.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeLastPredProcId_40, 0) = ((MR_Box) (transform_hlds__pd_term__LastPredProcId_39));
#line 168 "pd_term.m"
                        }
#line 168 "pd_term.m"
                        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 165 "pd_term.m"
                      }
#line 165 "pd_term.m"
                  }
#line 165 "pd_term.m"
              }
#line 169 "pd_term.m"
          }
#line 158 "pd_term.m"
      }
#line 209 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 174 "pd_term.m"
      {
#line 174 "pd_term.m"
        MR_Word transform_hlds__pd_term__ProcPair_41;
#line 174 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Length_42;
#line 199 "pd_term.m"
        MR_Integer transform_hlds__pd_term__MaxLength_43;
#line 199 "pd_term.m"
        MR_Word transform_hlds__pd_term__MaybeCoveringPredProcId_44;
#line 177 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_58_58;
#line 177 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_V_58_58;

#line 174 "pd_term.m"
        {
#line 174 "pd_term.m"
          transform_hlds__pd_term__ProcPair_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 0) = ((MR_Box) (transform_hlds__pd_term__FirstPredProcId_31));
#line 174 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__ProcPair_41, 1) = ((MR_Box) (transform_hlds__pd_term__MaybeLastPredProcId_40));
#line 174 "pd_term.m"
        }
#line 175 "pd_term.m"
        {
#line 175 "pd_term.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__pd_term__BetweenGoals_12, &transform_hlds__pd_term__Length_42);
        }
#line 177 "pd_term.m"
        {
#line 177 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], transform_hlds__pd_term__MultipleGoalCover0_19, ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), &transform_hlds__pd_term__conv0_V_58_58);
        }
#line 177 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 177 "pd_term.m"
          {
#line 177 "pd_term.m"
            transform_hlds__pd_term__V_58_58 = ((MR_Word) transform_hlds__pd_term__conv0_V_58_58);
#line 177 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 177 "pd_term.m"
          }
#line 177 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 177 "pd_term.m"
          {
#line 178 "pd_term.m"
            transform_hlds__pd_term__MaxLength_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 0)));
#line 178 "pd_term.m"
            transform_hlds__pd_term__MaybeCoveringPredProcId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_58_58, (MR_Integer) 1)));
#line 178 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 177 "pd_term.m"
          }
#line 199 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 187 "pd_term.m"
          {
#line 181 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 < transform_hlds__pd_term__MaxLength_43);
#line 187 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 183 "pd_term.m"
              {
#line 183 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_59_59;

#line 183 "pd_term.m"
                {
#line 183 "pd_term.m"
                  MR_Word base;
#line 183 "pd_term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_term.m"
                  *transform_hlds__pd_term__Result_17 = base;
#line 183 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 183 "pd_term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 183 "pd_term.m"
                }
#line 185 "pd_term.m"
                {
#line 185 "pd_term.m"
                  transform_hlds__pd_term__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 185 "pd_term.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "pd_term.m"
                }
#line 185 "pd_term.m"
                {
#line 185 "pd_term.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_59_59)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
                }
#line 183 "pd_term.m"
              }
#line 187 "pd_term.m"
            else
#line 195 "pd_term.m"
              {
#line 195 "pd_term.m"
                MR_Word transform_hlds__pd_term__CoveringPredProcId_46;

#line 188 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__Length_42 == transform_hlds__pd_term__MaxLength_43);
#line 188 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 188 "pd_term.m"
                  {
#line 189 "pd_term.m"
                    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__MaybeCoveringPredProcId_44)) == (MR_mktag((MR_Integer) 1)));
#line 189 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 189 "pd_term.m"
                      transform_hlds__pd_term__CoveringPredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__MaybeCoveringPredProcId_44, (MR_Integer) 0)));
#line 188 "pd_term.m"
                  }
#line 195 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 193 "pd_term.m"
                  {
#line 193 "pd_term.m"
                    {
#line 193 "pd_term.m"
                      MR_Word base;
#line 193 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 193 "pd_term.m"
                      *transform_hlds__pd_term__Result_17 = base;
#line 193 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 193 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 193 "pd_term.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__pd_term__CoveringPredProcId_46));
#line 193 "pd_term.m"
                    }
#line 194 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 193 "pd_term.m"
                  }
#line 195 "pd_term.m"
                else
#line 196 "pd_term.m"
                  {
#line 196 "pd_term.m"
                    *transform_hlds__pd_term__Result_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "pd_term.m"
                    transform_hlds__pd_term__MultipleGoalCover_45 = transform_hlds__pd_term__MultipleGoalCover0_19;
#line 196 "pd_term.m"
                  }
#line 195 "pd_term.m"
              }
#line 187 "pd_term.m"
          }
#line 199 "pd_term.m"
        else
#line 202 "pd_term.m"
          {
#line 202 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_61_61;

#line 202 "pd_term.m"
            {
#line 202 "pd_term.m"
              MR_Word base;
#line 202 "pd_term.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "pd_term.m"
              *transform_hlds__pd_term__Result_17 = base;
#line 202 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__ProcPair_41));
#line 202 "pd_term.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 202 "pd_term.m"
            }
#line 205 "pd_term.m"
            {
#line 205 "pd_term.m"
              transform_hlds__pd_term__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 0) = ((MR_Box) (transform_hlds__pd_term__Length_42));
#line 205 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "pd_term.m"
            }
#line 205 "pd_term.m"
            {
#line 205 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_41)), ((MR_Box) (transform_hlds__pd_term__V_61_61)), transform_hlds__pd_term__MultipleGoalCover0_19, &transform_hlds__pd_term__MultipleGoalCover_45);
            }
#line 202 "pd_term.m"
          }
#line 208 "pd_term.m"
        transform_hlds__pd_term__SingleGoalCover_47 = transform_hlds__pd_term__SingleGoalCover0_18;
#line 174 "pd_term.m"
      }
#line 209 "pd_term.m"
    else
#line 210 "pd_term.m"
      {
#line 210 "pd_term.m"
        {
#line 210 "pd_term.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.global_check\'/9", (MR_String) "global_check");
#line 210 "pd_term.m"
          return;
        }
#line 210 "pd_term.m"
      }
#line 212 "pd_term.m"
    {
#line 212 "pd_term.m"
      MR_Word base;
#line 212 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_Info_49 = base;
#line 212 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoalCover_47));
#line 212 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoalCover_45));
#line 212 "pd_term.m"
    }
#line 155 "pd_term.m"
  }
#line 63 "pd_term.m"
}

#line 224 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho2_4_p_0(
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 224 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 224 "pd_term.m"
{
#line 233 "pd_term.m"
  while (MR_TRUE)
#line 233 "pd_term.m"
    {
#line 233 "pd_term.m"
      /* tailcall optimized into a loop */
#line 233 "pd_term.m"
      {
#line 233 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 233 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 229 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 229 "pd_term.m"
        {
#line 229 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 229 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 229 "pd_term.m"
          {
#line 229 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 229 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 229 "pd_term.m"
          }
#line 233 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 230 "pd_term.m"
          {
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 230 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 230 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 160 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_51_51;

#line 160 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__Calls_10)) == (MR_mktag((MR_Integer) 1)));
#line 160 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 160 "pd_term.m"
              {
#line 160 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 0)));
#line 160 "pd_term.m"
                transform_hlds__pd_term__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__Calls_10, (MR_Integer) 1)));
#line 232 "pd_term.m"
                /* direct tailcall eliminated */
#line 232 "pd_term.m"
                {
#line 232 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 232 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 232 "pd_term.m"
                }
#line 232 "pd_term.m"
                continue;
#line 160 "pd_term.m"
              }
#line 230 "pd_term.m"
          }
#line 233 "pd_term.m"
        else
#line 234 "pd_term.m"
          {
#line 234 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 234 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 234 "pd_term.m"
          }
#line 233 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 233 "pd_term.m"
      }
#line 233 "pd_term.m"
      break;
#line 233 "pd_term.m"
    }
#line 224 "pd_term.m"
}

#line 224 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__expand_calls__ho1_4_p_0(
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_6,
#line 224 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId0_7,
#line 224 "pd_term.m"
  MR_Word * transform_hlds__pd_term__PredProcId_8)
#line 224 "pd_term.m"
{
#line 233 "pd_term.m"
  while (MR_TRUE)
#line 233 "pd_term.m"
    {
#line 233 "pd_term.m"
      /* tailcall optimized into a loop */
#line 233 "pd_term.m"
      {
#line 233 "pd_term.m"
        MR_bool transform_hlds__pd_term__succeeded;
#line 233 "pd_term.m"
        MR_Word transform_hlds__pd_term__VersionInfo_9;
#line 229 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_VersionInfo_9;

#line 229 "pd_term.m"
        {
#line 229 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_term__Versions_6, ((MR_Box) (transform_hlds__pd_term__PredProcId0_7)), &transform_hlds__pd_term__conv0_VersionInfo_9);
        }
#line 229 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 229 "pd_term.m"
          {
#line 229 "pd_term.m"
            transform_hlds__pd_term__VersionInfo_9 = ((MR_Word) transform_hlds__pd_term__conv0_VersionInfo_9);
#line 229 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 229 "pd_term.m"
          }
#line 233 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 230 "pd_term.m"
          {
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__Calls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 1)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__PredProcId1_11;
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 0)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 2)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 3)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 4)));
#line 230 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 5)));
#line 230 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 6)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 7)));
#line 230 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__VersionInfo_9, (MR_Integer) 8)));
#line 166 "pd_term.m"
            MR_Box transform_hlds__pd_term__conv1_PredProcId1_11;

#line 166 "pd_term.m"
            {
#line 166 "pd_term.m"
              transform_hlds__pd_term__succeeded = mercury__list__last_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_term__Calls_10, &transform_hlds__pd_term__conv1_PredProcId1_11);
            }
#line 166 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 166 "pd_term.m"
              {
#line 166 "pd_term.m"
                transform_hlds__pd_term__PredProcId1_11 = ((MR_Word) transform_hlds__pd_term__conv1_PredProcId1_11);
#line 166 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 166 "pd_term.m"
              }
#line 230 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 232 "pd_term.m"
              {
#line 232 "pd_term.m"
                /* direct tailcall eliminated */
#line 232 "pd_term.m"
                {
#line 232 "pd_term.m"
                  MR_Word transform_hlds__pd_term__PredProcId0__tmp_copy_7 = transform_hlds__pd_term__PredProcId1_11;

#line 232 "pd_term.m"
                  transform_hlds__pd_term__PredProcId0_7 = transform_hlds__pd_term__PredProcId0__tmp_copy_7;
#line 232 "pd_term.m"
                }
#line 232 "pd_term.m"
                continue;
#line 232 "pd_term.m"
              }
#line 230 "pd_term.m"
          }
#line 233 "pd_term.m"
        else
#line 234 "pd_term.m"
          {
#line 234 "pd_term.m"
            *transform_hlds__pd_term__PredProcId_8 = transform_hlds__pd_term__PredProcId0_7;
#line 234 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 234 "pd_term.m"
          }
#line 233 "pd_term.m"
        return transform_hlds__pd_term__succeeded;
#line 233 "pd_term.m"
      }
#line 233 "pd_term.m"
      break;
#line 233 "pd_term.m"
    }
#line 224 "pd_term.m"
}

#line 128 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____single_covering_goals_0_0(
#line 128 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 128 "pd_term.m"
{
#line 128 "pd_term.m"
  {
#line 128 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 128 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 128 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 128 "pd_term.m"
    {
#line 128 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
#line 128 "pd_term.m"
  }
#line 128 "pd_term.m"
}

#line 128 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____single_covering_goals_0_0(
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 128 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 128 "pd_term.m"
{
#line 128 "pd_term.m"
  {
#line 128 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 128 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 128 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 128 "pd_term.m"
    {
#line 128 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 128 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 128 "pd_term.m"
  }
#line 128 "pd_term.m"
}

#line 71 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____proc_pair_0_0(
#line 71 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 71 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 71 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 71 "pd_term.m"
{
#line 71 "pd_term.m"
  {
#line 71 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 71 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 71 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 71 "pd_term.m"
    {
#line 71 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
#line 71 "pd_term.m"
  }
#line 71 "pd_term.m"
}

#line 71 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____proc_pair_0_0(
#line 71 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 71 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 71 "pd_term.m"
{
#line 71 "pd_term.m"
  {
#line 71 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 71 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 71 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 71 "pd_term.m"
    {
#line 71 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 71 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 71 "pd_term.m"
  }
#line 71 "pd_term.m"
}

#line 137 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____pd_proc_term_info_0_0(
#line 137 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 137 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 137 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 137 "pd_term.m"
{
#line 137 "pd_term.m"
  {
#line 137 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 137 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 137 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 137 "pd_term.m"
    {
#line 137 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
#line 137 "pd_term.m"
  }
#line 137 "pd_term.m"
}

#line 137 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____pd_proc_term_info_0_0(
#line 137 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 137 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 137 "pd_term.m"
{
#line 137 "pd_term.m"
  {
#line 137 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 137 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 137 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 137 "pd_term.m"
    {
#line 137 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 137 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 137 "pd_term.m"
  }
#line 137 "pd_term.m"
}

#line 133 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term____Compare____multiple_covering_goals_0_0(
#line 133 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 133 "pd_term.m"
{
#line 133 "pd_term.m"
  {
#line 133 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 133 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 133 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 133 "pd_term.m"
    {
#line 133 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
#line 133 "pd_term.m"
  }
#line 133 "pd_term.m"
}

#line 133 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term____Unify____multiple_covering_goals_0_0(
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 133 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 133 "pd_term.m"
{
#line 133 "pd_term.m"
  {
#line 133 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 133 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 133 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 133 "pd_term.m"
    {
#line 133 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 133 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 133 "pd_term.m"
  }
#line 133 "pd_term.m"
}

#line 125 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____local_term_info_0_0(
#line 125 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 125 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 125 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 125 "pd_term.m"
{
#line 125 "pd_term.m"
  {
#line 125 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 125 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_4 = transform_hlds__pd_term__HeadVar__2_2;
#line 125 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_5 = transform_hlds__pd_term__HeadVar__3_3;

#line 125 "pd_term.m"
    {
#line 125 "pd_term.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_5)));
    }
#line 125 "pd_term.m"
  }
#line 125 "pd_term.m"
}

#line 125 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____local_term_info_0_0(
#line 125 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 125 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 125 "pd_term.m"
{
#line 125 "pd_term.m"
  {
#line 125 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 125 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar1_3 = transform_hlds__pd_term__HeadVar__1_1;
#line 125 "pd_term.m"
    MR_Word transform_hlds__pd_term__Cast_HeadVar2_4 = transform_hlds__pd_term__HeadVar__2_2;

#line 125 "pd_term.m"
    {
#line 125 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_term__Cast_HeadVar2_4)));
    }
#line 125 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 125 "pd_term.m"
  }
#line 125 "pd_term.m"
}

#line 118 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____global_term_info_0_0(
#line 118 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 118 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 118 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 118 "pd_term.m"
{
#line 118 "pd_term.m"
  {
#line 118 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 118 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_9 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
#line 118 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_10 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

#line 118 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_9 == transform_hlds__pd_term__CastY_10);
#line 118 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 2207 "transform_hlds.pd_term.c"
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "pd_term.m"
    else
#line 118 "pd_term.m"
      {
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_8_8;

#line 118 "pd_term.m"
        {
#line 118 "pd_term.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], &transform_hlds__pd_term__V_8_8, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
        }
#line 2229 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == (MR_Integer) 0);
#line 118 "pd_term.m"
        transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 118 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 118 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_8_8;
#line 118 "pd_term.m"
        else
#line 118 "pd_term.m"
          {
#line 118 "pd_term.m"
            {
#line 118 "pd_term.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[4], transform_hlds__pd_term__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_term__V_5_5)), ((MR_Box) (transform_hlds__pd_term__V_7_7)));
            }
#line 118 "pd_term.m"
          }
#line 118 "pd_term.m"
      }
#line 118 "pd_term.m"
  }
#line 118 "pd_term.m"
}

#line 118 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_term_info_0_0(
#line 118 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 118 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 118 "pd_term.m"
{
#line 118 "pd_term.m"
  {
#line 118 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 118 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_7 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 118 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_8 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 118 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_7 == transform_hlds__pd_term__CastY_8);
#line 118 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 118 "pd_term.m"
      transform_hlds__pd_term__succeeded = MR_TRUE;
#line 118 "pd_term.m"
    else
#line 118 "pd_term.m"
      {
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__TypeInfo_10_10;
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));

#line 2294 "transform_hlds.pd_term.c"
        {
#line 2296 "transform_hlds.pd_term.c"
          transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[3], ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
        }
#line 118 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 118 "pd_term.m"
          {
#line 2303 "transform_hlds.pd_term.c"
            transform_hlds__pd_term__TypeInfo_10_10 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[4];
#line 2305 "transform_hlds.pd_term.c"
            {
#line 2307 "transform_hlds.pd_term.c"
              transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_10_10, ((MR_Box) (transform_hlds__pd_term__V_4_4)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
            }
#line 118 "pd_term.m"
          }
#line 118 "pd_term.m"
      }
#line 118 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 118 "pd_term.m"
  }
#line 118 "pd_term.m"
}

#line 73 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term____Compare____global_check_result_0_0(
#line 73 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__1_1,
#line 73 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 73 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3)
#line 73 "pd_term.m"
{
#line 73 "pd_term.m"
  {
#line 73 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 73 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_37 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;
#line 73 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_38 = (MR_Integer) transform_hlds__pd_term__HeadVar__3_3;

#line 73 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_37 == transform_hlds__pd_term__CastY_38);
#line 73 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 2345 "transform_hlds.pd_term.c"
      *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "pd_term.m"
    else
#line 73 "pd_term.m"
#line 73 "pd_term.m"
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) {
#line 73 "pd_term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 73 "pd_term.m"
        case (MR_Integer) 0:
#line 73 "pd_term.m"
#line 73 "pd_term.m"
          switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 73 "pd_term.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 73 "pd_term.m"
            case (MR_Integer) 0:
#line 73 "pd_term.m"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "pd_term.m"
              break;
#line 73 "pd_term.m"
            case (MR_Integer) 1:
#line 2369 "transform_hlds.pd_term.c"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "pd_term.m"
              break;
#line 73 "pd_term.m"
            case (MR_Integer) 2:
#line 2375 "transform_hlds.pd_term.c"
              *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "pd_term.m"
              break;
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
        case (MR_Integer) 1:
#line 73 "pd_term.m"
          {
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "pd_term.m"
#line 73 "pd_term.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 73 "pd_term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 73 "pd_term.m"
              case (MR_Integer) 0:
#line 2399 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
              case (MR_Integer) 1:
#line 73 "pd_term.m"
                {
#line 73 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "pd_term.m"
                  MR_Integer transform_hlds__pd_term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_8_8;

#line 73 "pd_term.m"
                  {
#line 73 "pd_term.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__V_8_8, ((MR_Box) (transform_hlds__pd_term__V_45_45)), ((MR_Box) (transform_hlds__pd_term__V_6_6)));
                  }
#line 2419 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == (MR_Integer) 0);
#line 73 "pd_term.m"
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 73 "pd_term.m"
                  if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_8_8;
#line 73 "pd_term.m"
                  else
#line 73 "pd_term.m"
                    {
#line 73 "pd_term.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__V_44_44, transform_hlds__pd_term__V_7_7);
                    }
#line 73 "pd_term.m"
                }
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
              case (MR_Integer) 2:
#line 2440 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
            }
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
        case (MR_Integer) 2:
#line 73 "pd_term.m"
          {
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "pd_term.m"
#line 73 "pd_term.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__3_3)) {
#line 73 "pd_term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 73 "pd_term.m"
              case (MR_Integer) 0:
#line 2468 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
              case (MR_Integer) 1:
#line 2474 "transform_hlds.pd_term.c"
                *transform_hlds__pd_term__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
              case (MR_Integer) 2:
#line 73 "pd_term.m"
                {
#line 73 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "pd_term.m"
                  MR_Integer transform_hlds__pd_term__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "pd_term.m"
                  MR_Word transform_hlds__pd_term__V_27_27;

#line 73 "pd_term.m"
                  {
#line 73 "pd_term.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], &transform_hlds__pd_term__V_27_27, ((MR_Box) (transform_hlds__pd_term__V_48_48)), ((MR_Box) (transform_hlds__pd_term__V_24_24)));
                  }
#line 2496 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_27_27 == (MR_Integer) 0);
#line 73 "pd_term.m"
                  transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 73 "pd_term.m"
                  if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_27_27;
#line 73 "pd_term.m"
                  else
#line 73 "pd_term.m"
                    {
#line 73 "pd_term.m"
                      MR_Word transform_hlds__pd_term__V_28_28;

#line 73 "pd_term.m"
                      {
#line 73 "pd_term.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_term__V_28_28, transform_hlds__pd_term__V_47_47, transform_hlds__pd_term__V_25_25);
                      }
#line 2516 "transform_hlds.pd_term.c"
                      transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_28_28 == (MR_Integer) 0);
#line 73 "pd_term.m"
                      transform_hlds__pd_term__succeeded = !(transform_hlds__pd_term__succeeded);
#line 73 "pd_term.m"
                      if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
                        *transform_hlds__pd_term__HeadVar__1_1 = transform_hlds__pd_term__V_28_28;
#line 73 "pd_term.m"
                      else
#line 73 "pd_term.m"
                        {
#line 73 "pd_term.m"
                          hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__pd_term__HeadVar__1_1, transform_hlds__pd_term__V_46_46, transform_hlds__pd_term__V_26_26);
                        }
#line 73 "pd_term.m"
                    }
#line 73 "pd_term.m"
                }
#line 73 "pd_term.m"
                break;
#line 73 "pd_term.m"
            }
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
      }
#line 73 "pd_term.m"
  }
#line 73 "pd_term.m"
}

#line 73 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term____Unify____global_check_result_0_0(
#line 73 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 73 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2)
#line 73 "pd_term.m"
{
#line 73 "pd_term.m"
  {
#line 73 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 73 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastX_15 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 73 "pd_term.m"
    MR_Integer transform_hlds__pd_term__CastY_16 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 73 "pd_term.m"
    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastX_15 == transform_hlds__pd_term__CastY_16);
#line 73 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
      transform_hlds__pd_term__succeeded = MR_TRUE;
#line 73 "pd_term.m"
    else
#line 73 "pd_term.m"
#line 73 "pd_term.m"
      switch (MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__1_1)) {
#line 73 "pd_term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 73 "pd_term.m"
        case (MR_Integer) 0:
#line 73 "pd_term.m"
          {
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__CastX_13 = (MR_Integer) transform_hlds__pd_term__HeadVar__1_1;
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__CastY_14 = (MR_Integer) transform_hlds__pd_term__HeadVar__2_2;

#line 73 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__CastY_14 == transform_hlds__pd_term__CastX_13);
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
        case (MR_Integer) 1:
#line 73 "pd_term.m"
          {
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_17_17;
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_5_5;
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_6_6;

#line 73 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 73 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
              {
#line 73 "pd_term.m"
                transform_hlds__pd_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "pd_term.m"
                transform_hlds__pd_term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 2621 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2623 "transform_hlds.pd_term.c"
                {
#line 2625 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_17_17, ((MR_Box) (transform_hlds__pd_term__V_3_3)), ((MR_Box) (transform_hlds__pd_term__V_5_5)));
                }
#line 73 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 2630 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_4_4 == transform_hlds__pd_term__V_6_6);
#line 73 "pd_term.m"
              }
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
        case (MR_Integer) 2:
#line 73 "pd_term.m"
          {
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_18_18;
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_10_10;
#line 73 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_11_11;
#line 73 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_12_12;

#line 73 "pd_term.m"
            transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 73 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
              {
#line 73 "pd_term.m"
                transform_hlds__pd_term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "pd_term.m"
                transform_hlds__pd_term__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "pd_term.m"
                transform_hlds__pd_term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 2)));
#line 2669 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_term_scalar_common_2[0];
#line 2671 "transform_hlds.pd_term.c"
                {
#line 2673 "transform_hlds.pd_term.c"
                  transform_hlds__pd_term__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_term__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_term__V_7_7)), ((MR_Box) (transform_hlds__pd_term__V_10_10)));
                }
#line 73 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 73 "pd_term.m"
                  {
#line 2680 "transform_hlds.pd_term.c"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__V_8_8 == transform_hlds__pd_term__V_11_11);
#line 73 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 2684 "transform_hlds.pd_term.c"
                      {
#line 2686 "transform_hlds.pd_term.c"
                        transform_hlds__pd_term__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_term__V_9_9, transform_hlds__pd_term__V_12_12);
                      }
#line 73 "pd_term.m"
                  }
#line 73 "pd_term.m"
              }
#line 73 "pd_term.m"
          }
#line 73 "pd_term.m"
          break;
#line 73 "pd_term.m"
      }
#line 73 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 73 "pd_term.m"
  }
#line 73 "pd_term.m"
}

#line 302 "pd_term.m"
static MR_bool MR_CALL 
transform_hlds__pd_term__split_out_non_increasing_4_p_0(
#line 302 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__1_1,
#line 302 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__2_2,
#line 302 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__3_3,
#line 302 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__4_4)
#line 302 "pd_term.m"
{
#line 305 "pd_term.m"
  {
#line 305 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 305 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pd_term.m"
      {
#line 305 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pd_term.m"
          {
#line 305 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 305 "pd_term.m"
            *transform_hlds__pd_term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "pd_term.m"
          }
#line 305 "pd_term.m"
        else
#line 308 "pd_term.m"
          {
#line 309 "pd_term.m"
            {
#line 309 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 308 "pd_term.m"
          }
#line 305 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 305 "pd_term.m"
      }
#line 305 "pd_term.m"
    else
#line 305 "pd_term.m"
      {
#line 305 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 1)));
#line 305 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__1_1, (MR_Integer) 0)));

#line 305 "pd_term.m"
        if ((transform_hlds__pd_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "pd_term.m"
          {
#line 307 "pd_term.m"
            {
#line 307 "pd_term.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_term", (MR_String) "predicate \140transform_hlds.pd_term.split_out_non_increasing\'/4", (MR_String) "list length mismatch");
            }
#line 306 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 306 "pd_term.m"
          }
#line 305 "pd_term.m"
        else
#line 311 "pd_term.m"
          {
#line 311 "pd_term.m"
            MR_Integer transform_hlds__pd_term__Arg_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 0)));
#line 311 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldSize_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_33_33, (MR_Integer) 1)));
#line 311 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewSize_23;
#line 311 "pd_term.m"
            MR_Word transform_hlds__pd_term__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 1)));
#line 311 "pd_term.m"
            MR_Word transform_hlds__pd_term__FoundDecreasing1_27;
#line 311 "pd_term.m"
            MR_Word transform_hlds__pd_term__NonIncreasing1_28;
#line 311 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__2_2, (MR_Integer) 0)));
#line 311 "pd_term.m"
            MR_Integer transform_hlds__pd_term__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 0)));

#line 311 "pd_term.m"
            transform_hlds__pd_term__NewSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_30_30, (MR_Integer) 1)));
#line 312 "pd_term.m"
            {
#line 312 "pd_term.m"
              transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__V_32_32, transform_hlds__pd_term__Args_24, &transform_hlds__pd_term__FoundDecreasing1_27, &transform_hlds__pd_term__NonIncreasing1_28);
            }
#line 311 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 311 "pd_term.m"
              {
#line 313 "pd_term.m"
                transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 <= transform_hlds__pd_term__OldSize_20);
#line 320 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 314 "pd_term.m"
                  {
#line 314 "pd_term.m"
                    MR_Word transform_hlds__pd_term__V_31_31;

#line 314 "pd_term.m"
                    {
#line 314 "pd_term.m"
                      transform_hlds__pd_term__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 0) = ((MR_Box) (transform_hlds__pd_term__Arg_19));
#line 314 "pd_term.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_23));
#line 314 "pd_term.m"
                    }
#line 314 "pd_term.m"
                    {
#line 314 "pd_term.m"
                      MR_Word base;
#line 314 "pd_term.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__4_4 = base;
#line 314 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_31_31));
#line 314 "pd_term.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NonIncreasing1_28));
#line 314 "pd_term.m"
                    }
#line 315 "pd_term.m"
                    transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewSize_23 == transform_hlds__pd_term__OldSize_20);
#line 317 "pd_term.m"
                    if (transform_hlds__pd_term__succeeded)
#line 316 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 0;
#line 317 "pd_term.m"
                    else
#line 318 "pd_term.m"
                      *transform_hlds__pd_term__HeadVar__3_3 = (MR_Integer) 1;
#line 314 "pd_term.m"
                  }
#line 320 "pd_term.m"
                else
#line 321 "pd_term.m"
                  {
#line 321 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__4_4 = transform_hlds__pd_term__NonIncreasing1_28;
#line 322 "pd_term.m"
                    *transform_hlds__pd_term__HeadVar__3_3 = transform_hlds__pd_term__FoundDecreasing1_27;
#line 321 "pd_term.m"
                  }
#line 320 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 311 "pd_term.m"
              }
#line 311 "pd_term.m"
          }
#line 305 "pd_term.m"
      }
#line 305 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 305 "pd_term.m"
  }
#line 302 "pd_term.m"
}

#line 284 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__get_matching_sizes_7_p_0(
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__Args_3,
#line 284 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__4_4,
#line 284 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5,
#line 284 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__6_6,
#line 284 "pd_term.m"
  MR_Integer * transform_hlds__pd_term__HeadVar__7_7)
#line 284 "pd_term.m"
{
#line 288 "pd_term.m"
  {
#line 288 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 288 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "pd_term.m"
      {
#line 288 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (MR_Integer) 0;
#line 288 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (MR_Integer) 0;
#line 288 "pd_term.m"
      }
#line 288 "pd_term.m"
    else
#line 291 "pd_term.m"
      {
#line 291 "pd_term.m"
        MR_Integer transform_hlds__pd_term__ArgNo_14;
#line 291 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldSize_15;
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__OldSizes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 1)));
#line 291 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewSize_17;
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__NewSizes_18;
#line 291 "pd_term.m"
        MR_Integer transform_hlds__pd_term__OldTotal1_21;
#line 291 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NewTotal1_22;
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_23;
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_24;
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__4_4, (MR_Integer) 0)));
#line 291 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_26_26;
#line 294 "pd_term.m"
        MR_Box transform_hlds__pd_term__conv0_Arg_23;

#line 290 "pd_term.m"
        transform_hlds__pd_term__ArgNo_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 0)));
#line 290 "pd_term.m"
        transform_hlds__pd_term__OldSize_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_25_25, (MR_Integer) 1)));
#line 292 "pd_term.m"
        {
#line 292 "pd_term.m"
          transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_3, transform_hlds__pd_term__OldSizes_16, &transform_hlds__pd_term__NewSizes_18, &transform_hlds__pd_term__OldTotal1_21, &transform_hlds__pd_term__NewTotal1_22);
        }
#line 294 "pd_term.m"
        {
#line 294 "pd_term.m"
          mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_1[2], transform_hlds__pd_term__Args_3, transform_hlds__pd_term__ArgNo_14, &transform_hlds__pd_term__conv0_Arg_23);
        }
#line 294 "pd_term.m"
        transform_hlds__pd_term__Arg_23 = ((MR_Word) transform_hlds__pd_term__conv0_Arg_23);
#line 295 "pd_term.m"
        {
#line 295 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_23, &transform_hlds__pd_term__ArgInst_24);
        }
#line 296 "pd_term.m"
        {
#line 296 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_24, &transform_hlds__pd_term__NewSize_17);
        }
#line 290 "pd_term.m"
        {
#line 290 "pd_term.m"
          transform_hlds__pd_term__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_14));
#line 290 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_26_26, 1) = ((MR_Box) (transform_hlds__pd_term__NewSize_17));
#line 290 "pd_term.m"
        }
#line 290 "pd_term.m"
        {
#line 290 "pd_term.m"
          MR_Word base;
#line 290 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 290 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_26_26));
#line 290 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__NewSizes_18));
#line 290 "pd_term.m"
        }
#line 297 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__6_6 = (transform_hlds__pd_term__OldTotal1_21 + transform_hlds__pd_term__OldSize_15);
#line 298 "pd_term.m"
        *transform_hlds__pd_term__HeadVar__7_7 = (transform_hlds__pd_term__NewTotal1_22 + transform_hlds__pd_term__NewSize_17);
#line 291 "pd_term.m"
      }
#line 288 "pd_term.m"
  }
#line 284 "pd_term.m"
}

#line 271 "pd_term.m"
static void MR_CALL 
transform_hlds__pd_term__initial_sizes_5_p_0(
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_1,
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_2,
#line 271 "pd_term.m"
  MR_Word transform_hlds__pd_term__HeadVar__3_3,
#line 271 "pd_term.m"
  MR_Integer transform_hlds__pd_term__ArgNo_4,
#line 271 "pd_term.m"
  MR_Word * transform_hlds__pd_term__HeadVar__5_5)
#line 271 "pd_term.m"
{
#line 274 "pd_term.m"
  {
#line 274 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 274 "pd_term.m"
    if ((transform_hlds__pd_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "pd_term.m"
      *transform_hlds__pd_term__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "pd_term.m"
    else
#line 276 "pd_term.m"
      {
#line 276 "pd_term.m"
        MR_Word transform_hlds__pd_term__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "pd_term.m"
        MR_Word transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_term__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "pd_term.m"
        MR_Integer transform_hlds__pd_term__Size_14;
#line 276 "pd_term.m"
        MR_Word transform_hlds__pd_term__Sizes_15;
#line 276 "pd_term.m"
        MR_Integer transform_hlds__pd_term__NextArgNo_16 = (transform_hlds__pd_term__ArgNo_4 + (MR_Integer) 1);
#line 276 "pd_term.m"
        MR_Word transform_hlds__pd_term__ArgInst_17;
#line 276 "pd_term.m"
        MR_Word transform_hlds__pd_term__V_18_18;

#line 278 "pd_term.m"
        {
#line 278 "pd_term.m"
          transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__NextArgNo_16, &transform_hlds__pd_term__Sizes_15);
        }
#line 279 "pd_term.m"
        {
#line 279 "pd_term.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_term__InstMap_2, transform_hlds__pd_term__Arg_11, &transform_hlds__pd_term__ArgInst_17);
        }
#line 280 "pd_term.m"
        {
#line 280 "pd_term.m"
          transform_hlds__pd_util__inst_size_3_p_0(transform_hlds__pd_term__ModuleInfo_1, transform_hlds__pd_term__ArgInst_17, &transform_hlds__pd_term__Size_14);
        }
#line 276 "pd_term.m"
        {
#line 276 "pd_term.m"
          transform_hlds__pd_term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 0) = ((MR_Box) (transform_hlds__pd_term__ArgNo_4));
#line 276 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_18_18, 1) = ((MR_Box) (transform_hlds__pd_term__Size_14));
#line 276 "pd_term.m"
        }
#line 276 "pd_term.m"
        {
#line 276 "pd_term.m"
          MR_Word base;
#line 276 "pd_term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "pd_term.m"
          *transform_hlds__pd_term__HeadVar__5_5 = base;
#line 276 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_term__V_18_18));
#line 276 "pd_term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_term__Sizes_15));
#line 276 "pd_term.m"
        }
#line 276 "pd_term.m"
      }
#line 274 "pd_term.m"
  }
#line 271 "pd_term.m"
}

#line 94 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__update_global_term_info_5_p_0(
#line 94 "pd_term.m"
  MR_Word transform_hlds__pd_term__ProcPair_6,
#line 94 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId_7,
#line 94 "pd_term.m"
  MR_Integer transform_hlds__pd_term__Size_8,
#line 94 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13,
#line 94 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14)
#line 94 "pd_term.m"
{
#line 264 "pd_term.m"
  {
#line 264 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 264 "pd_term.m"
    MR_Word transform_hlds__pd_term__Single_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 0)));
#line 264 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__STATE_VARIABLE_TermInfo_0_13, (MR_Integer) 1)));
#line 264 "pd_term.m"
    MR_Word transform_hlds__pd_term__Multiple_12;
#line 264 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 264 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16;

#line 266 "pd_term.m"
    {
#line 266 "pd_term.m"
      transform_hlds__pd_term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "pd_term.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_term__V_16_16, 0) = ((MR_Box) (transform_hlds__pd_term__PredProcId_7));
#line 266 "pd_term.m"
    }
#line 266 "pd_term.m"
    {
#line 266 "pd_term.m"
      transform_hlds__pd_term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 0) = ((MR_Box) (transform_hlds__pd_term__Size_8));
#line 266 "pd_term.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_15_15, 1) = ((MR_Box) (transform_hlds__pd_term__V_16_16));
#line 266 "pd_term.m"
    }
#line 266 "pd_term.m"
    {
#line 266 "pd_term.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_term__ProcPair_6)), ((MR_Box) (transform_hlds__pd_term__V_15_15)), transform_hlds__pd_term__Multiple0_11, &transform_hlds__pd_term__Multiple_12);
    }
#line 267 "pd_term.m"
    {
#line 267 "pd_term.m"
      MR_Word base;
#line 267 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "pd_term.m"
      *transform_hlds__pd_term__STATE_VARIABLE_TermInfo_14 = base;
#line 267 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__Single_10));
#line 267 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__Multiple_12));
#line 267 "pd_term.m"
    }
#line 264 "pd_term.m"
  }
#line 94 "pd_term.m"
}

#line 88 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term__get_proc_term_info_3_p_0(
#line 88 "pd_term.m"
  MR_Word transform_hlds__pd_term__TermInfo_4,
#line 88 "pd_term.m"
  MR_Word transform_hlds__pd_term__PredProcId_5,
#line 88 "pd_term.m"
  MR_Word * transform_hlds__pd_term__ProcTermInfo_6)
#line 88 "pd_term.m"
{
#line 150 "pd_term.m"
  {
#line 150 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 150 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_ProcTermInfo_6;

#line 150 "pd_term.m"
    {
#line 150 "pd_term.m"
      transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_4, ((MR_Box) (transform_hlds__pd_term__PredProcId_5)), &transform_hlds__pd_term__conv0_ProcTermInfo_6);
    }
#line 150 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 150 "pd_term.m"
      {
#line 150 "pd_term.m"
        *transform_hlds__pd_term__ProcTermInfo_6 = ((MR_Word) transform_hlds__pd_term__conv0_ProcTermInfo_6);
#line 150 "pd_term.m"
        transform_hlds__pd_term__succeeded = MR_TRUE;
#line 150 "pd_term.m"
      }
#line 150 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 150 "pd_term.m"
  }
#line 88 "pd_term.m"
}

#line 86 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__local_term_info_init_1_p_0(
#line 86 "pd_term.m"
  MR_Word * transform_hlds__pd_term__TermInfo_2)
#line 86 "pd_term.m"
{
#line 147 "pd_term.m"
  {
#line 147 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 147 "pd_term.m"
    {
#line 147 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], transform_hlds__pd_term__TermInfo_2);
    }
#line 147 "pd_term.m"
  }
#line 86 "pd_term.m"
}

#line 84 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__global_term_info_init_1_p_0(
#line 84 "pd_term.m"
  MR_Word * transform_hlds__pd_term__TermInfo_2)
#line 84 "pd_term.m"
{
#line 141 "pd_term.m"
  {
#line 141 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 141 "pd_term.m"
    MR_Word transform_hlds__pd_term__SingleGoals_3;
#line 141 "pd_term.m"
    MR_Word transform_hlds__pd_term__MultipleGoals_4;

#line 142 "pd_term.m"
    {
#line 142 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], &transform_hlds__pd_term__SingleGoals_3);
    }
#line 143 "pd_term.m"
    {
#line 143 "pd_term.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_term_scalar_common_2[0], (MR_Word) &transform_hlds__pd_term_scalar_common_2[1], &transform_hlds__pd_term__MultipleGoals_4);
    }
#line 144 "pd_term.m"
    {
#line 144 "pd_term.m"
      MR_Word base;
#line 144 "pd_term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "pd_term.m"
      *transform_hlds__pd_term__TermInfo_2 = base;
#line 144 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_term__SingleGoals_3));
#line 144 "pd_term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_term__MultipleGoals_4));
#line 144 "pd_term.m"
    }
#line 141 "pd_term.m"
  }
#line 84 "pd_term.m"
}

#line 81 "pd_term.m"
MR_bool MR_CALL 
transform_hlds__pd_term__local_check_5_p_0(
#line 81 "pd_term.m"
  MR_Word transform_hlds__pd_term__ModuleInfo_6,
#line 81 "pd_term.m"
  MR_Word transform_hlds__pd_term__Goal1_7,
#line 81 "pd_term.m"
  MR_Word transform_hlds__pd_term__InstMap_8,
#line 81 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20,
#line 81 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Cover_21)
#line 81 "pd_term.m"
{
#line 239 "pd_term.m"
  {
#line 239 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__PredId_10;
#line 239 "pd_term.m"
    MR_Integer transform_hlds__pd_term__ProcId_11;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__Args_12;
#line 239 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 0)));
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_term__Goal1_7, (MR_Integer) 1)));
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_13_13;
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_14_14;
#line 240 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_15_15;
#line 245 "pd_term.m"
    MR_Word transform_hlds__pd_term__CoveringInstSizes0_17;
#line 245 "pd_term.m"
    MR_Word transform_hlds__pd_term__V_23_23;
#line 241 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeCtorInfo_29_29;
#line 241 "pd_term.m"
    MR_Word transform_hlds__pd_term__TypeInfo_30_30;
#line 241 "pd_term.m"
    MR_Box transform_hlds__pd_term__conv0_CoveringInstSizes0_17;

#line 240 "pd_term.m"
    transform_hlds__pd_term__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_term__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 240 "pd_term.m"
    if (transform_hlds__pd_term__succeeded)
#line 240 "pd_term.m"
      {
#line 240 "pd_term.m"
        transform_hlds__pd_term__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 0)));
#line 240 "pd_term.m"
        transform_hlds__pd_term__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 1)));
#line 240 "pd_term.m"
        transform_hlds__pd_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 2)));
#line 240 "pd_term.m"
        transform_hlds__pd_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 3)));
#line 240 "pd_term.m"
        transform_hlds__pd_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 4)));
#line 240 "pd_term.m"
        transform_hlds__pd_term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_term__V_22_22, (MR_Integer) 5)));
#line 3335 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3337 "transform_hlds.pd_term.c"
        transform_hlds__pd_term__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 241 "pd_term.m"
        {
#line 241 "pd_term.m"
          transform_hlds__pd_term__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 241 "pd_term.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_23_23, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 241 "pd_term.m"
        }
#line 241 "pd_term.m"
        {
#line 241 "pd_term.m"
          transform_hlds__pd_term__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_term__TypeCtorInfo_29_29, transform_hlds__pd_term__TypeInfo_30_30, transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, ((MR_Box) (transform_hlds__pd_term__V_23_23)), &transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
        }
#line 241 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 241 "pd_term.m"
          {
#line 241 "pd_term.m"
            transform_hlds__pd_term__CoveringInstSizes0_17 = ((MR_Word) transform_hlds__pd_term__conv0_CoveringInstSizes0_17);
#line 241 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 241 "pd_term.m"
          }
#line 245 "pd_term.m"
        if (transform_hlds__pd_term__succeeded)
#line 243 "pd_term.m"
          {
#line 243 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeCtorInfo_31_31;
#line 243 "pd_term.m"
            MR_Word transform_hlds__pd_term__TypeInfo_32_32;
#line 243 "pd_term.m"
            MR_Word transform_hlds__pd_term__CoveringInstSizes_18;
#line 243 "pd_term.m"
            MR_Word transform_hlds__pd_term__NewSizes1_40;
#line 243 "pd_term.m"
            MR_Integer transform_hlds__pd_term__OldTotal_41;
#line 243 "pd_term.m"
            MR_Integer transform_hlds__pd_term__NewTotal_42;

#line 254 "pd_term.m"
            {
#line 254 "pd_term.m"
              transform_hlds__pd_term__get_matching_sizes_7_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, transform_hlds__pd_term__CoveringInstSizes0_17, &transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__OldTotal_41, &transform_hlds__pd_term__NewTotal_42);
            }
#line 256 "pd_term.m"
            transform_hlds__pd_term__succeeded = (transform_hlds__pd_term__NewTotal_42 < transform_hlds__pd_term__OldTotal_41);
#line 258 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 257 "pd_term.m"
              {
#line 257 "pd_term.m"
                transform_hlds__pd_term__CoveringInstSizes_18 = transform_hlds__pd_term__NewSizes1_40;
#line 257 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 257 "pd_term.m"
              }
#line 258 "pd_term.m"
            else
#line 259 "pd_term.m"
              {
#line 259 "pd_term.m"
                MR_Word transform_hlds__pd_term__V_44_44;

#line 259 "pd_term.m"
                {
#line 259 "pd_term.m"
                  transform_hlds__pd_term__succeeded = transform_hlds__pd_term__split_out_non_increasing_4_p_0(transform_hlds__pd_term__CoveringInstSizes0_17, transform_hlds__pd_term__NewSizes1_40, &transform_hlds__pd_term__V_44_44, &transform_hlds__pd_term__CoveringInstSizes_18);
                }
#line 259 "pd_term.m"
                if (transform_hlds__pd_term__succeeded)
#line 259 "pd_term.m"
                  transform_hlds__pd_term__succeeded = ((MR_Integer) 1 == transform_hlds__pd_term__V_44_44);
#line 259 "pd_term.m"
              }
#line 243 "pd_term.m"
            if (transform_hlds__pd_term__succeeded)
#line 243 "pd_term.m"
              {
#line 3420 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3422 "transform_hlds.pd_term.c"
                transform_hlds__pd_term__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_term_scalar_common_1[1];
#line 244 "pd_term.m"
                {
#line 244 "pd_term.m"
                  mercury__map__set_4_p_0(transform_hlds__pd_term__TypeCtorInfo_31_31, transform_hlds__pd_term__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_term__V_23_23)), ((MR_Box) (transform_hlds__pd_term__CoveringInstSizes_18)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
                }
#line 244 "pd_term.m"
                transform_hlds__pd_term__succeeded = MR_TRUE;
#line 243 "pd_term.m"
              }
#line 243 "pd_term.m"
          }
#line 245 "pd_term.m"
        else
#line 246 "pd_term.m"
          {
#line 246 "pd_term.m"
            MR_Word transform_hlds__pd_term__ArgInstSizes_19;
#line 246 "pd_term.m"
            MR_Word transform_hlds__pd_term__V_27_27;

#line 246 "pd_term.m"
            {
#line 246 "pd_term.m"
              transform_hlds__pd_term__initial_sizes_5_p_0(transform_hlds__pd_term__ModuleInfo_6, transform_hlds__pd_term__InstMap_8, transform_hlds__pd_term__Args_12, (MR_Integer) 1, &transform_hlds__pd_term__ArgInstSizes_19);
            }
#line 247 "pd_term.m"
            {
#line 247 "pd_term.m"
              transform_hlds__pd_term__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 0) = ((MR_Box) (transform_hlds__pd_term__PredId_10));
#line 247 "pd_term.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_term__V_27_27, 1) = ((MR_Box) (transform_hlds__pd_term__ProcId_11));
#line 247 "pd_term.m"
            }
#line 247 "pd_term.m"
            {
#line 247 "pd_term.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_term_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_term__V_27_27)), ((MR_Box) (transform_hlds__pd_term__ArgInstSizes_19)), transform_hlds__pd_term__STATE_VARIABLE_Cover_0_20, transform_hlds__pd_term__STATE_VARIABLE_Cover_21);
            }
#line 246 "pd_term.m"
            transform_hlds__pd_term__succeeded = MR_TRUE;
#line 246 "pd_term.m"
          }
#line 240 "pd_term.m"
      }
#line 239 "pd_term.m"
    return transform_hlds__pd_term__succeeded;
#line 239 "pd_term.m"
  }
#line 81 "pd_term.m"
}

#line 63 "pd_term.m"
void MR_CALL 
transform_hlds__pd_term__global_check_9_p_0(
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term___ModuleInfo_10,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__EarlierGoal_11,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__BetweenGoals_12,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__MaybeLaterGoal_13,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term___InstMap_14,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__Versions_15,
#line 63 "pd_term.m"
  MR_Word transform_hlds__pd_term__STATE_VARIABLE_Info_0_48,
#line 63 "pd_term.m"
  MR_Word * transform_hlds__pd_term__STATE_VARIABLE_Info_49,
#line 63 "pd_term.m"
  MR_Word * transform_hlds__pd_term__Result_17)
#line 63 "pd_term.m"
{
#line 155 "pd_term.m"
  {
#line 155 "pd_term.m"
    MR_bool transform_hlds__pd_term__succeeded;

#line 155 "pd_term.m"
    {
#line 155 "pd_term.m"
      transform_hlds__pd_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_108_111_98_97_108_95_99_104_101_99_107_95_95_91_49_44_32_53_93_95_48_9_p_0(transform_hlds__pd_term__EarlierGoal_11, transform_hlds__pd_term__BetweenGoals_12, transform_hlds__pd_term__MaybeLaterGoal_13, transform_hlds__pd_term__Versions_15, transform_hlds__pd_term__STATE_VARIABLE_Info_0_48, transform_hlds__pd_term__STATE_VARIABLE_Info_49, transform_hlds__pd_term__Result_17);
    }
#line 155 "pd_term.m"
  }
#line 63 "pd_term.m"
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
