/*
** Automatically generated from `rbmm.region_liveness_info.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module transform_hlds.rbmm.region_liveness_info. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_liveness_info__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_liveness_info.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




#line 147 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 150 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 153 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 156 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 159 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 162 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 165 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 177 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 183 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 186 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 188 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 191 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 194 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 196 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 198 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 201 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 204 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 206 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 209 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 212 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 214 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 216 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 219 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 222 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 224 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 227 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 230 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 232 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 234 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 237 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 240 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 242 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 245 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 248 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 250 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 252 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 255 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 258 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 260 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 263 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 266 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 268 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 270 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 273 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 276 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 278 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 281 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 284 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 286 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 288 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 291 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 294 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 296 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 299 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 302 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 304 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 306 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 309 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 312 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 314 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 317 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 320 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 322 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 324 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 327 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 330 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 332 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 335 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 338 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 340 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 342 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 108 "rbmm.region_liveness_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST1_2,
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST2_3);


static /* final */ const MR_Box transform_hlds__rbmm__region_liveness_info_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_liveness_info_scalar_common_2[7][3];




static /* final */ const MR_Box transform_hlds__rbmm__region_liveness_info_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_liveness_info_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_2[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_liveness_info_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 453 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 462 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 470 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "execution_path",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 491 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 499 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 508 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "execution_path_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 529 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 537 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 546 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "pp_region_set_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 567 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 575 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 583 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 592 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "pp_varset_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 613 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 622 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_pp_region_set_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 643 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 652 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_pp_varset_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 673 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 682 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_region_set_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 703 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "region_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 724 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "variable_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 745 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 748 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 750 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 752 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 754 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 756 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 759 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 761 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 764 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 766 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 768 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 771 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 774 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 776 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 778 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 780 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 782 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 784 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 787 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 789 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 792 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 794 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 796 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 799 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 802 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 804 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 806 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 808 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 810 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 813 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 815 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 818 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 820 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 822 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 825 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 828 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 830 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 832 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 834 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 836 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 838 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 841 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 843 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 846 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 848 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 850 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 853 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 856 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 858 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 860 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 862 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 864 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 867 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 869 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 872 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 874 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 876 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 879 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 882 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 884 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 886 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 888 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 890 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 892 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 895 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 897 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 900 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 902 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 904 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 907 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 910 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 912 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 914 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 916 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 918 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 921 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 923 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 926 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 928 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 930 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 933 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 936 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 938 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 940 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 942 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 944 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 946 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 949 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 951 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 954 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 956 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 958 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 961 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 964 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 966 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 968 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 970 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 972 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 975 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 977 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 980 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 982 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 984 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 987 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 990 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 992 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 994 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 996 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 998 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1000 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1003 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1005 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1008 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1010 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1012 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1015 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 1018 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1020 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1022 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1024 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1026 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1029 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1031 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1034 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1036 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1038 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1041 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 1044 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1046 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1048 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1050 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1052 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1054 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1057 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1059 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1062 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1064 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1066 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1069 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 1072 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1074 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1076 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1078 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1080 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1083 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1085 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1088 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1090 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1092 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1095 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 1098 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1100 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1102 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1104 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1106 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1108 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1111 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1113 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1116 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1118 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1120 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1123 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 1126 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1128 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1130 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1132 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1134 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1137 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1139 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1142 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1144 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1146 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1149 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 1152 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1154 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1156 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1158 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1160 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1162 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1165 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1167 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1170 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1172 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1174 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1177 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 1180 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1182 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1184 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1186 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1188 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1191 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1193 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1196 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1198 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1200 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1203 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 1206 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1208 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1210 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1212 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1214 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1216 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1219 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1221 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1224 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1226 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1228 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 45 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0(
#line 45 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 45 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 45 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 45 "rbmm.region_liveness_info.m"
{
#line 45 "rbmm.region_liveness_info.m"
  {
#line 45 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 45 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 45 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 45 "rbmm.region_liveness_info.m"
    {
#line 45 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[4], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 45 "rbmm.region_liveness_info.m"
      return;
    }
#line 45 "rbmm.region_liveness_info.m"
  }
#line 45 "rbmm.region_liveness_info.m"
}

#line 45 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0(
#line 45 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 45 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 45 "rbmm.region_liveness_info.m"
{
#line 45 "rbmm.region_liveness_info.m"
  {
#line 45 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 45 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 45 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 45 "rbmm.region_liveness_info.m"
    {
#line 45 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[4], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 45 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 45 "rbmm.region_liveness_info.m"
  }
#line 45 "rbmm.region_liveness_info.m"
}

#line 71 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0(
#line 71 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 71 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 71 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 71 "rbmm.region_liveness_info.m"
{
#line 71 "rbmm.region_liveness_info.m"
  {
#line 71 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 71 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 71 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 71 "rbmm.region_liveness_info.m"
    {
#line 71 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 71 "rbmm.region_liveness_info.m"
      return;
    }
#line 71 "rbmm.region_liveness_info.m"
  }
#line 71 "rbmm.region_liveness_info.m"
}

#line 71 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0(
#line 71 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 71 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 71 "rbmm.region_liveness_info.m"
{
#line 71 "rbmm.region_liveness_info.m"
  {
#line 71 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 71 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 71 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 71 "rbmm.region_liveness_info.m"
    {
#line 71 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 71 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 71 "rbmm.region_liveness_info.m"
  }
#line 71 "rbmm.region_liveness_info.m"
}

#line 78 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0(
#line 78 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 78 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 78 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 78 "rbmm.region_liveness_info.m"
{
#line 78 "rbmm.region_liveness_info.m"
  {
#line 78 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 78 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 78 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 78 "rbmm.region_liveness_info.m"
    {
#line 78 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[6], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 78 "rbmm.region_liveness_info.m"
      return;
    }
#line 78 "rbmm.region_liveness_info.m"
  }
#line 78 "rbmm.region_liveness_info.m"
}

#line 78 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0(
#line 78 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 78 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 78 "rbmm.region_liveness_info.m"
{
#line 78 "rbmm.region_liveness_info.m"
  {
#line 78 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 78 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 78 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 78 "rbmm.region_liveness_info.m"
    {
#line 78 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[6], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 78 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 78 "rbmm.region_liveness_info.m"
  }
#line 78 "rbmm.region_liveness_info.m"
}

#line 56 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0(
#line 56 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 56 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 56 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 56 "rbmm.region_liveness_info.m"
{
#line 56 "rbmm.region_liveness_info.m"
  {
#line 56 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 56 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 56 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 56 "rbmm.region_liveness_info.m"
    {
#line 56 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[5], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 56 "rbmm.region_liveness_info.m"
      return;
    }
#line 56 "rbmm.region_liveness_info.m"
  }
#line 56 "rbmm.region_liveness_info.m"
}

#line 56 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0(
#line 56 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 56 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 56 "rbmm.region_liveness_info.m"
{
#line 56 "rbmm.region_liveness_info.m"
  {
#line 56 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 56 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 56 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 56 "rbmm.region_liveness_info.m"
    {
#line 56 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[5], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 56 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 56 "rbmm.region_liveness_info.m"
  }
#line 56 "rbmm.region_liveness_info.m"
}

#line 91 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0(
#line 91 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 91 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 91 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 91 "rbmm.region_liveness_info.m"
{
#line 91 "rbmm.region_liveness_info.m"
  {
#line 91 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 91 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 91 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 91 "rbmm.region_liveness_info.m"
    {
#line 91 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[4], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 91 "rbmm.region_liveness_info.m"
      return;
    }
#line 91 "rbmm.region_liveness_info.m"
  }
#line 91 "rbmm.region_liveness_info.m"
}

#line 91 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0(
#line 91 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 91 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 91 "rbmm.region_liveness_info.m"
{
#line 91 "rbmm.region_liveness_info.m"
  {
#line 91 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 91 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 91 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 91 "rbmm.region_liveness_info.m"
    {
#line 91 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[4], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 91 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 91 "rbmm.region_liveness_info.m"
  }
#line 91 "rbmm.region_liveness_info.m"
}

#line 51 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0(
#line 51 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 51 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 51 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 51 "rbmm.region_liveness_info.m"
{
#line 51 "rbmm.region_liveness_info.m"
  {
#line 51 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 51 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 51 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 51 "rbmm.region_liveness_info.m"
    {
#line 51 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[3], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 51 "rbmm.region_liveness_info.m"
      return;
    }
#line 51 "rbmm.region_liveness_info.m"
  }
#line 51 "rbmm.region_liveness_info.m"
}

#line 51 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0(
#line 51 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 51 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 51 "rbmm.region_liveness_info.m"
{
#line 51 "rbmm.region_liveness_info.m"
  {
#line 51 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 51 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 51 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 51 "rbmm.region_liveness_info.m"
    {
#line 51 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 51 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 51 "rbmm.region_liveness_info.m"
  }
#line 51 "rbmm.region_liveness_info.m"
}

#line 86 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0(
#line 86 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 86 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 86 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 86 "rbmm.region_liveness_info.m"
{
#line 86 "rbmm.region_liveness_info.m"
  {
#line 86 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 86 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 86 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 86 "rbmm.region_liveness_info.m"
    {
#line 86 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[2], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 86 "rbmm.region_liveness_info.m"
      return;
    }
#line 86 "rbmm.region_liveness_info.m"
  }
#line 86 "rbmm.region_liveness_info.m"
}

#line 86 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0(
#line 86 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 86 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 86 "rbmm.region_liveness_info.m"
{
#line 86 "rbmm.region_liveness_info.m"
  {
#line 86 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 86 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 86 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 86 "rbmm.region_liveness_info.m"
    {
#line 86 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 86 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 86 "rbmm.region_liveness_info.m"
  }
#line 86 "rbmm.region_liveness_info.m"
}

#line 36 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0(
#line 36 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 36 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 36 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 36 "rbmm.region_liveness_info.m"
{
#line 36 "rbmm.region_liveness_info.m"
  {
#line 36 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 36 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 36 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 36 "rbmm.region_liveness_info.m"
    {
#line 36 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[1], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 36 "rbmm.region_liveness_info.m"
      return;
    }
#line 36 "rbmm.region_liveness_info.m"
  }
#line 36 "rbmm.region_liveness_info.m"
}

#line 36 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0(
#line 36 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 36 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 36 "rbmm.region_liveness_info.m"
{
#line 36 "rbmm.region_liveness_info.m"
  {
#line 36 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 36 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 36 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 36 "rbmm.region_liveness_info.m"
    {
#line 36 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 36 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 36 "rbmm.region_liveness_info.m"
  }
#line 36 "rbmm.region_liveness_info.m"
}

#line 35 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0(
#line 35 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 35 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2,
#line 35 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__3_3)
#line 35 "rbmm.region_liveness_info.m"
{
#line 35 "rbmm.region_liveness_info.m"
  {
#line 35 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 35 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;
#line 35 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5 = transform_hlds__rbmm__region_liveness_info__HeadVar__3_3;

#line 35 "rbmm.region_liveness_info.m"
    {
#line 35 "rbmm.region_liveness_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[1], transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_5)));
#line 35 "rbmm.region_liveness_info.m"
      return;
    }
#line 35 "rbmm.region_liveness_info.m"
  }
#line 35 "rbmm.region_liveness_info.m"
}

#line 35 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0(
#line 35 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 35 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__2_2)
#line 35 "rbmm.region_liveness_info.m"
{
#line 35 "rbmm.region_liveness_info.m"
  {
#line 35 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 35 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3 = transform_hlds__rbmm__region_liveness_info__HeadVar__1_1;
#line 35 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4 = transform_hlds__rbmm__region_liveness_info__HeadVar__2_2;

#line 35 "rbmm.region_liveness_info.m"
    {
#line 35 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
    }
#line 35 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 35 "rbmm.region_liveness_info.m"
  }
#line 35 "rbmm.region_liveness_info.m"
}

#line 108 "rbmm.region_liveness_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST1_2,
#line 108 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST2_3)
#line 108 "rbmm.region_liveness_info.m"
{
#line 111 "rbmm.region_liveness_info.m"
  while (MR_TRUE)
#line 111 "rbmm.region_liveness_info.m"
    {
#line 111 "rbmm.region_liveness_info.m"
      /* tailcall optimized into a loop */
#line 111 "rbmm.region_liveness_info.m"
      {
#line 111 "rbmm.region_liveness_info.m"
        MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 111 "rbmm.region_liveness_info.m"
        if ((transform_hlds__rbmm__region_liveness_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 111 "rbmm.region_liveness_info.m"
          transform_hlds__rbmm__region_liveness_info__succeeded = MR_TRUE;
#line 111 "rbmm.region_liveness_info.m"
        else
#line 112 "rbmm.region_liveness_info.m"
          {
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0];
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14;
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__RS2_10;
#line 112 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__RS1_11;
#line 113 "rbmm.region_liveness_info.m"
            MR_Box transform_hlds__rbmm__region_liveness_info__conv0_RS2_10;
#line 115 "rbmm.region_liveness_info.m"
            MR_Box transform_hlds__rbmm__region_liveness_info__conv1_RS1_11;

#line 113 "rbmm.region_liveness_info.m"
            {
#line 113 "rbmm.region_liveness_info.m"
              transform_hlds__rbmm__region_liveness_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12, transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13, transform_hlds__rbmm__region_liveness_info__PRST2_3, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__PPId_6)), &transform_hlds__rbmm__region_liveness_info__conv0_RS2_10);
            }
#line 113 "rbmm.region_liveness_info.m"
            if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 113 "rbmm.region_liveness_info.m"
              {
#line 113 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__RS2_10 = ((MR_Word) transform_hlds__rbmm__region_liveness_info__conv0_RS2_10);
#line 113 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__succeeded = MR_TRUE;
#line 113 "rbmm.region_liveness_info.m"
              }
#line 112 "rbmm.region_liveness_info.m"
            if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 112 "rbmm.region_liveness_info.m"
              {
#line 115 "rbmm.region_liveness_info.m"
                {
#line 115 "rbmm.region_liveness_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12, transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13, transform_hlds__rbmm__region_liveness_info__PRST1_2, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__PPId_6)), &transform_hlds__rbmm__region_liveness_info__conv1_RS1_11);
                }
#line 115 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__RS1_11 = ((MR_Word) transform_hlds__rbmm__region_liveness_info__conv1_RS1_11);
#line 1864 "transform_hlds.rbmm.region_liveness_info.c"
                transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 116 "rbmm.region_liveness_info.m"
                {
#line 116 "rbmm.region_liveness_info.m"
                  transform_hlds__rbmm__region_liveness_info__succeeded = mercury__set__equal_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14, transform_hlds__rbmm__region_liveness_info__RS1_11, transform_hlds__rbmm__region_liveness_info__RS2_10);
                }
#line 112 "rbmm.region_liveness_info.m"
                if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 117 "rbmm.region_liveness_info.m"
                  {
#line 117 "rbmm.region_liveness_info.m"
                    /* direct tailcall eliminated */
#line 117 "rbmm.region_liveness_info.m"
                    {
#line 117 "rbmm.region_liveness_info.m"
                      MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_liveness_info__PPIds_7;

#line 117 "rbmm.region_liveness_info.m"
                      transform_hlds__rbmm__region_liveness_info__HeadVar__1_1 = transform_hlds__rbmm__region_liveness_info__HeadVar__1__tmp_copy_1;
#line 117 "rbmm.region_liveness_info.m"
                    }
#line 117 "rbmm.region_liveness_info.m"
                    continue;
#line 117 "rbmm.region_liveness_info.m"
                  }
#line 112 "rbmm.region_liveness_info.m"
              }
#line 112 "rbmm.region_liveness_info.m"
          }
#line 111 "rbmm.region_liveness_info.m"
        return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 111 "rbmm.region_liveness_info.m"
      }
#line 111 "rbmm.region_liveness_info.m"
      break;
#line 111 "rbmm.region_liveness_info.m"
    }
#line 108 "rbmm.region_liveness_info.m"
}

#line 80 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_p_0(
#line 80 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3,
#line 80 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4)
#line 80 "rbmm.region_liveness_info.m"
{
#line 100 "rbmm.region_liveness_info.m"
  {
#line 100 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 100 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 100 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9 = (MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0];
#line 100 "rbmm.region_liveness_info.m"
    MR_Integer transform_hlds__rbmm__region_liveness_info__C1_5;
#line 100 "rbmm.region_liveness_info.m"
    MR_Integer transform_hlds__rbmm__region_liveness_info__C2_6;
#line 100 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__PredProcIds1_7;

#line 101 "rbmm.region_liveness_info.m"
    {
#line 101 "rbmm.region_liveness_info.m"
      mercury__map__count_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, &transform_hlds__rbmm__region_liveness_info__C1_5);
    }
#line 102 "rbmm.region_liveness_info.m"
    {
#line 102 "rbmm.region_liveness_info.m"
      mercury__map__count_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4, &transform_hlds__rbmm__region_liveness_info__C2_6);
    }
#line 103 "rbmm.region_liveness_info.m"
    transform_hlds__rbmm__region_liveness_info__succeeded = (transform_hlds__rbmm__region_liveness_info__C1_5 == transform_hlds__rbmm__region_liveness_info__C2_6);
#line 100 "rbmm.region_liveness_info.m"
    if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 100 "rbmm.region_liveness_info.m"
      {
#line 105 "rbmm.region_liveness_info.m"
        {
#line 105 "rbmm.region_liveness_info.m"
          mercury__map__keys_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, &transform_hlds__rbmm__region_liveness_info__PredProcIds1_7);
        }
#line 106 "rbmm.region_liveness_info.m"
        {
#line 106 "rbmm.region_liveness_info.m"
          return transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(transform_hlds__rbmm__region_liveness_info__PredProcIds1_7, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4);
        }
#line 100 "rbmm.region_liveness_info.m"
      }
#line 100 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 100 "rbmm.region_liveness_info.m"
  }
#line 80 "rbmm.region_liveness_info.m"
}

#line 73 "rbmm.region_liveness_info.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__region_set_equal_2_p_0(
#line 73 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__RegionSet1_3,
#line 73 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__RegionSet2_4)
#line 73 "rbmm.region_liveness_info.m"
{
#line 98 "rbmm.region_liveness_info.m"
  {
#line 98 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 98 "rbmm.region_liveness_info.m"
    {
#line 98 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__set__equal_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__region_liveness_info__RegionSet1_3, transform_hlds__rbmm__region_liveness_info__RegionSet2_4);
    }
#line 98 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 98 "rbmm.region_liveness_info.m"
  }
#line 73 "rbmm.region_liveness_info.m"
}

#line 60 "rbmm.region_liveness_info.m"
void MR_CALL 
transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(
#line 60 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__ModuleInfo_5,
#line 60 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6,
#line 60 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__Inputs_7,
#line 60 "rbmm.region_liveness_info.m"
  MR_Word * transform_hlds__rbmm__region_liveness_info__Outputs_8)
#line 60 "rbmm.region_liveness_info.m"
{
#line 119 "rbmm.region_liveness_info.m"
  {
#line 119 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 119 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgVars_9;
#line 119 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__VarTypes_10;
#line 119 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgTypes_11;
#line 119 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgModes_12;

#line 120 "rbmm.region_liveness_info.m"
    {
#line 120 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__ArgVars_9);
    }
#line 121 "rbmm.region_liveness_info.m"
    {
#line 121 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__VarTypes_10);
    }
#line 122 "rbmm.region_liveness_info.m"
    {
#line 122 "rbmm.region_liveness_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__rbmm__region_liveness_info__VarTypes_10, transform_hlds__rbmm__region_liveness_info__ArgVars_9, &transform_hlds__rbmm__region_liveness_info__ArgTypes_11);
    }
#line 123 "rbmm.region_liveness_info.m"
    {
#line 123 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__ArgModes_12);
    }
#line 124 "rbmm.region_liveness_info.m"
    {
#line 124 "rbmm.region_liveness_info.m"
      hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__rbmm__region_liveness_info__ModuleInfo_5, transform_hlds__rbmm__region_liveness_info__ArgVars_9, transform_hlds__rbmm__region_liveness_info__ArgModes_12, transform_hlds__rbmm__region_liveness_info__ArgTypes_11, transform_hlds__rbmm__region_liveness_info__Inputs_7, transform_hlds__rbmm__region_liveness_info__Outputs_8);
#line 124 "rbmm.region_liveness_info.m"
      return;
    }
#line 119 "rbmm.region_liveness_info.m"
  }
#line 60 "rbmm.region_liveness_info.m"
}

void mercury__transform_hlds__rbmm__region_liveness_info__init(void)
{
}

void mercury__transform_hlds__rbmm__region_liveness_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0);
}

void mercury__transform_hlds__rbmm__region_liveness_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.region_liveness_info. */
