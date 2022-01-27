/*
** Automatically generated from `rbmm.region_liveness_info.m'
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


/* :- module transform_hlds.rbmm.region_liveness_info. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_liveness_info__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_liveness_info.mih"


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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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




#line 154 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 157 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 160 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 163 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 166 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 169 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 172 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 184 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 190 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 193 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 195 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 198 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 201 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 203 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 205 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 208 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 211 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 213 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 216 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 219 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 221 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 223 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 226 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 229 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 231 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 234 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 237 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 239 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 241 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 244 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 247 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 249 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 252 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 255 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 257 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 259 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 262 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 265 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 267 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 270 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 273 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 275 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 277 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 280 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 283 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 285 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 288 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 291 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 293 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 295 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 298 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 301 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 303 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 306 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 309 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 311 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 313 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 316 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 319 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 321 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 324 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 327 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 329 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 331 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 334 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 337 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 339 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 342 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 345 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 347 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 349 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 111 "rbmm.region_liveness_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(
#line 111 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 111 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST1_2,
#line 111 "rbmm.region_liveness_info.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 452 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 461 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 469 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "execution_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 486 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 494 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 503 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "execution_path_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 520 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 528 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 537 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "pp_region_set_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 554 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 562 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 570 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 579 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "pp_varset_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 596 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 605 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_pp_region_set_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 622 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 631 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_pp_varset_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 648 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 657 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "proc_region_set_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 674 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "region_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 691 "transform_hlds.rbmm.region_liveness_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_liveness_info__transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_liveness_info",
  (MR_String) "variable_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 708 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 711 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 713 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 715 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 717 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 719 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 722 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 724 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 727 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 729 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 731 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 734 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 737 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 739 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 741 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 743 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 745 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 747 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 750 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 752 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 755 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 757 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 759 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 762 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 765 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 767 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 769 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 771 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 773 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 776 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 778 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 781 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 783 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 785 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 788 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 791 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 793 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 795 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 797 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 799 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 801 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 804 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 806 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 809 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 811 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 813 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 816 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 819 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 821 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 823 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 825 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 827 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 830 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 832 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 835 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 837 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 839 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 842 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 845 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 847 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 849 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 851 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 853 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 855 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 858 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 860 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 863 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 865 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 867 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 870 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 873 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 875 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 877 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 879 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 881 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 884 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 886 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 889 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 891 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 893 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 896 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 899 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 901 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 903 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 905 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 907 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 909 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 912 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 914 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 917 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 919 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 921 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 924 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 927 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 929 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 931 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 933 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 935 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 938 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 940 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 943 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 945 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 947 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 950 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 953 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 955 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 957 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 959 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 961 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 963 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 966 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 968 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 971 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 973 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 975 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 978 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 981 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 983 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 985 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 987 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 989 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 992 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 994 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 997 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 999 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1001 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1004 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 1007 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1009 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1011 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1013 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1015 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1017 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1020 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1022 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1025 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1027 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1029 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1032 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 1035 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1037 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1039 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1041 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1043 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1046 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1048 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1051 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1053 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1055 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1058 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 1061 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1063 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1065 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1067 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1069 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1071 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1074 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1076 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1079 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1081 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1083 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1086 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 1089 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1091 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1093 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1095 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1097 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1100 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1102 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1105 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1107 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1109 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1112 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 1115 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1117 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1119 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1121 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1123 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1125 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1128 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1130 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1133 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1135 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1137 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1140 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 1143 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1145 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1147 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1149 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1151 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1154 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1156 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1159 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1161 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1163 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1166 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 1169 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1171 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1173 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1175 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1177 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1179 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1182 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1184 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1187 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1189 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1191 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 111 "rbmm.region_liveness_info.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(
#line 111 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1_1,
#line 111 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST1_2,
#line 111 "rbmm.region_liveness_info.m"
  MR_Word transform_hlds__rbmm__region_liveness_info__PRST2_3)
#line 111 "rbmm.region_liveness_info.m"
{
#line 114 "rbmm.region_liveness_info.m"
  while (MR_TRUE)
#line 114 "rbmm.region_liveness_info.m"
    {
#line 114 "rbmm.region_liveness_info.m"
      /* tailcall optimized into a loop */
#line 114 "rbmm.region_liveness_info.m"
      {
#line 114 "rbmm.region_liveness_info.m"
        MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 114 "rbmm.region_liveness_info.m"
        if ((transform_hlds__rbmm__region_liveness_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "rbmm.region_liveness_info.m"
          transform_hlds__rbmm__region_liveness_info__succeeded = MR_TRUE;
#line 114 "rbmm.region_liveness_info.m"
        else
#line 115 "rbmm.region_liveness_info.m"
          {
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0];
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14;
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_liveness_info__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__RS2_10;
#line 115 "rbmm.region_liveness_info.m"
            MR_Word transform_hlds__rbmm__region_liveness_info__RS1_11;
#line 116 "rbmm.region_liveness_info.m"
            MR_Box transform_hlds__rbmm__region_liveness_info__conv0_RS2_10;
#line 118 "rbmm.region_liveness_info.m"
            MR_Box transform_hlds__rbmm__region_liveness_info__conv1_RS1_11;

#line 116 "rbmm.region_liveness_info.m"
            {
#line 116 "rbmm.region_liveness_info.m"
              transform_hlds__rbmm__region_liveness_info__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12, transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13, transform_hlds__rbmm__region_liveness_info__PRST2_3, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__PPId_6)), &transform_hlds__rbmm__region_liveness_info__conv0_RS2_10);
            }
#line 116 "rbmm.region_liveness_info.m"
            if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 116 "rbmm.region_liveness_info.m"
              {
#line 116 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__RS2_10 = ((MR_Word) transform_hlds__rbmm__region_liveness_info__conv0_RS2_10);
#line 116 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__succeeded = MR_TRUE;
#line 116 "rbmm.region_liveness_info.m"
              }
#line 115 "rbmm.region_liveness_info.m"
            if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 115 "rbmm.region_liveness_info.m"
              {
#line 118 "rbmm.region_liveness_info.m"
                {
#line 118 "rbmm.region_liveness_info.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_12_12, transform_hlds__rbmm__region_liveness_info__TypeInfo_13_13, transform_hlds__rbmm__region_liveness_info__PRST1_2, ((MR_Box) (transform_hlds__rbmm__region_liveness_info__PPId_6)), &transform_hlds__rbmm__region_liveness_info__conv1_RS1_11);
                }
#line 118 "rbmm.region_liveness_info.m"
                transform_hlds__rbmm__region_liveness_info__RS1_11 = ((MR_Word) transform_hlds__rbmm__region_liveness_info__conv1_RS1_11);
#line 1827 "transform_hlds.rbmm.region_liveness_info.c"
                transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 119 "rbmm.region_liveness_info.m"
                {
#line 119 "rbmm.region_liveness_info.m"
                  transform_hlds__rbmm__region_liveness_info__succeeded = mercury__set__equal_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_14_14, transform_hlds__rbmm__region_liveness_info__RS1_11, transform_hlds__rbmm__region_liveness_info__RS2_10);
                }
#line 115 "rbmm.region_liveness_info.m"
                if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 120 "rbmm.region_liveness_info.m"
                  {
#line 120 "rbmm.region_liveness_info.m"
                    /* direct tailcall eliminated */
#line 120 "rbmm.region_liveness_info.m"
                    {
#line 120 "rbmm.region_liveness_info.m"
                      MR_Word transform_hlds__rbmm__region_liveness_info__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__region_liveness_info__PPIds_7;

#line 120 "rbmm.region_liveness_info.m"
                      transform_hlds__rbmm__region_liveness_info__HeadVar__1_1 = transform_hlds__rbmm__region_liveness_info__HeadVar__1__tmp_copy_1;
#line 120 "rbmm.region_liveness_info.m"
                    }
#line 120 "rbmm.region_liveness_info.m"
                    continue;
#line 120 "rbmm.region_liveness_info.m"
                  }
#line 115 "rbmm.region_liveness_info.m"
              }
#line 115 "rbmm.region_liveness_info.m"
          }
#line 114 "rbmm.region_liveness_info.m"
        return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 114 "rbmm.region_liveness_info.m"
      }
#line 114 "rbmm.region_liveness_info.m"
      break;
#line 114 "rbmm.region_liveness_info.m"
    }
#line 111 "rbmm.region_liveness_info.m"
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
#line 103 "rbmm.region_liveness_info.m"
  {
#line 103 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 103 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 103 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9 = (MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0];
#line 103 "rbmm.region_liveness_info.m"
    MR_Integer transform_hlds__rbmm__region_liveness_info__C1_5;
#line 103 "rbmm.region_liveness_info.m"
    MR_Integer transform_hlds__rbmm__region_liveness_info__C2_6;
#line 103 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__PredProcIds1_7;

#line 104 "rbmm.region_liveness_info.m"
    {
#line 104 "rbmm.region_liveness_info.m"
      mercury__map__count_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, &transform_hlds__rbmm__region_liveness_info__C1_5);
    }
#line 105 "rbmm.region_liveness_info.m"
    {
#line 105 "rbmm.region_liveness_info.m"
      mercury__map__count_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4, &transform_hlds__rbmm__region_liveness_info__C2_6);
    }
#line 106 "rbmm.region_liveness_info.m"
    transform_hlds__rbmm__region_liveness_info__succeeded = (transform_hlds__rbmm__region_liveness_info__C1_5 == transform_hlds__rbmm__region_liveness_info__C2_6);
#line 103 "rbmm.region_liveness_info.m"
    if (transform_hlds__rbmm__region_liveness_info__succeeded)
#line 103 "rbmm.region_liveness_info.m"
      {
#line 108 "rbmm.region_liveness_info.m"
        {
#line 108 "rbmm.region_liveness_info.m"
          mercury__map__keys_2_p_0(transform_hlds__rbmm__region_liveness_info__TypeCtorInfo_8_8, transform_hlds__rbmm__region_liveness_info__TypeInfo_9_9, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, &transform_hlds__rbmm__region_liveness_info__PredProcIds1_7);
        }
#line 109 "rbmm.region_liveness_info.m"
        {
#line 109 "rbmm.region_liveness_info.m"
          return transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(transform_hlds__rbmm__region_liveness_info__PredProcIds1_7, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4);
        }
#line 103 "rbmm.region_liveness_info.m"
      }
#line 103 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 103 "rbmm.region_liveness_info.m"
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
#line 101 "rbmm.region_liveness_info.m"
  {
#line 101 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 101 "rbmm.region_liveness_info.m"
    {
#line 101 "rbmm.region_liveness_info.m"
      return transform_hlds__rbmm__region_liveness_info__succeeded = mercury__set__equal_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__region_liveness_info__RegionSet1_3, transform_hlds__rbmm__region_liveness_info__RegionSet2_4);
    }
#line 101 "rbmm.region_liveness_info.m"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 101 "rbmm.region_liveness_info.m"
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
#line 122 "rbmm.region_liveness_info.m"
  {
#line 122 "rbmm.region_liveness_info.m"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;
#line 122 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgVars_9;
#line 122 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__VarTypes_10;
#line 122 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgTypes_11;
#line 122 "rbmm.region_liveness_info.m"
    MR_Word transform_hlds__rbmm__region_liveness_info__ArgModes_12;

#line 123 "rbmm.region_liveness_info.m"
    {
#line 123 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__ArgVars_9);
    }
#line 124 "rbmm.region_liveness_info.m"
    {
#line 124 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__VarTypes_10);
    }
#line 125 "rbmm.region_liveness_info.m"
    {
#line 125 "rbmm.region_liveness_info.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__rbmm__region_liveness_info__VarTypes_10, transform_hlds__rbmm__region_liveness_info__ArgVars_9, &transform_hlds__rbmm__region_liveness_info__ArgTypes_11);
    }
#line 126 "rbmm.region_liveness_info.m"
    {
#line 126 "rbmm.region_liveness_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__rbmm__region_liveness_info__CalleeProcInfo_6, &transform_hlds__rbmm__region_liveness_info__ArgModes_12);
    }
#line 127 "rbmm.region_liveness_info.m"
    {
#line 127 "rbmm.region_liveness_info.m"
      hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__rbmm__region_liveness_info__ModuleInfo_5, transform_hlds__rbmm__region_liveness_info__ArgVars_9, transform_hlds__rbmm__region_liveness_info__ArgModes_12, transform_hlds__rbmm__region_liveness_info__ArgTypes_11, transform_hlds__rbmm__region_liveness_info__Inputs_7, transform_hlds__rbmm__region_liveness_info__Outputs_8);
#line 127 "rbmm.region_liveness_info.m"
      return;
    }
#line 122 "rbmm.region_liveness_info.m"
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
