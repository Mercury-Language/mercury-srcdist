/*
** Automatically generated from `rbmm.region_liveness_info.m'
** by the Mercury compiler,
** version DEV
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




#line 155 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 158 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 161 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 164 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 167 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 170 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 173 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 185 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 191 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 194 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 196 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 199 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 202 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 204 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 206 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 209 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 212 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 214 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 217 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 220 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 222 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 224 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 227 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 230 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 232 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 235 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 238 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 240 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 242 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 245 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 248 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 250 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 253 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 256 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 258 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 260 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 263 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 266 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 268 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 271 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 274 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 276 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 278 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 281 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 284 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 286 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 289 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 292 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 294 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 296 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 299 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 302 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 304 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 307 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 310 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 312 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 314 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 317 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 320 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 322 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 325 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 328 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 330 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 332 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3);

#line 335 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 338 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 340 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2);

#line 343 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 346 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 348 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 350 "transform_hlds.rbmm.region_liveness_info.c"
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
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 487 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 495 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 504 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 521 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 529 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 538 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 555 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 563 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 571 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 580 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 597 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 606 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 623 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 632 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 649 "transform_hlds.rbmm.region_liveness_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_liveness_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_liveness_info__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 658 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 675 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 692 "transform_hlds.rbmm.region_liveness_info.c"
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

#line 709 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0_10001(
#line 712 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 714 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 716 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 718 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 720 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 723 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 725 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 728 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 730 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 732 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 735 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0_10001(
#line 738 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 740 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 742 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 744 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 746 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 748 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 751 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 753 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 756 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 758 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 760 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 763 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0_10001(
#line 766 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 768 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 770 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 772 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 774 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 777 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 779 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____execution_path_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 782 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 784 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 786 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 789 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0_10001(
#line 792 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 794 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 796 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 798 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 800 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 802 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 805 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 807 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____execution_path_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 810 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 812 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 814 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 817 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0_10001(
#line 820 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 822 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 824 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 826 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 828 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 831 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 833 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 836 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 838 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 840 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 843 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0_10001(
#line 846 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 848 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 850 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 852 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 854 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 856 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 859 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 861 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 864 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 866 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 868 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 871 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0_10001(
#line 874 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 876 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 878 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 880 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 882 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 885 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 887 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 890 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 892 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 894 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 897 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0_10001(
#line 900 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 902 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 904 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 906 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 908 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 910 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 913 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 915 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 918 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 920 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 922 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 925 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0_10001(
#line 928 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 930 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 932 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 934 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 936 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 939 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 941 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 944 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 946 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 948 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 951 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0_10001(
#line 954 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 956 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 958 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 960 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 962 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 964 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 967 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 969 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 972 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 974 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 976 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 979 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0_10001(
#line 982 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 984 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 986 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 988 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 990 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 993 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 995 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_pp_varset_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 998 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1000 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1002 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1005 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0_10001(
#line 1008 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1010 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1012 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1014 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1016 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1018 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1021 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1023 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_pp_varset_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1026 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1028 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1030 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1033 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0_10001(
#line 1036 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1038 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1040 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1042 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1044 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1047 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1049 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____proc_region_set_table_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1052 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1054 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1056 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1059 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0_10001(
#line 1062 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1064 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1066 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1068 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1070 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1072 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1075 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1077 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____proc_region_set_table_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1080 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1082 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1084 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1087 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0_10001(
#line 1090 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1092 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1094 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1096 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1098 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1101 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1103 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____region_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1106 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1108 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1110 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1113 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0_10001(
#line 1116 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1118 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1120 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1122 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1124 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1126 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1129 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1131 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____region_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1134 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1136 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1138 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1141 "transform_hlds.rbmm.region_liveness_info.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0_10001(
#line 1144 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1146 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2)
#line 1148 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1150 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1152 "transform_hlds.rbmm.region_liveness_info.c"
    MR_bool transform_hlds__rbmm__region_liveness_info__succeeded;

#line 1155 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1157 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info____Unify____variable_set_0_0(((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2));
    }
#line 1160 "transform_hlds.rbmm.region_liveness_info.c"
    return transform_hlds__rbmm__region_liveness_info__succeeded;
#line 1162 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1164 "transform_hlds.rbmm.region_liveness_info.c"
}

#line 1167 "transform_hlds.rbmm.region_liveness_info.c"
static void MR_CALL 
transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0_10001(
#line 1170 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box * transform_hlds__rbmm__region_liveness_info__wrapper_arg_1,
#line 1172 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_2,
#line 1174 "transform_hlds.rbmm.region_liveness_info.c"
  MR_Box transform_hlds__rbmm__region_liveness_info__wrapper_arg_3)
#line 1176 "transform_hlds.rbmm.region_liveness_info.c"
{
#line 1178 "transform_hlds.rbmm.region_liveness_info.c"
  {
#line 1180 "transform_hlds.rbmm.region_liveness_info.c"
    MR_Word transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1;

#line 1183 "transform_hlds.rbmm.region_liveness_info.c"
    {
#line 1185 "transform_hlds.rbmm.region_liveness_info.c"
      transform_hlds__rbmm__region_liveness_info____Compare____variable_set_0_0(&transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_liveness_info__wrapper_arg_3));
    }
#line 1188 "transform_hlds.rbmm.region_liveness_info.c"
    *transform_hlds__rbmm__region_liveness_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_liveness_info__conv0_HeadVar__1_1));
#line 1190 "transform_hlds.rbmm.region_liveness_info.c"
  }
#line 1192 "transform_hlds.rbmm.region_liveness_info.c"
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[4], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[6], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[5], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[4], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_liveness_info_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_liveness_info__Cast_HeadVar2_4)));
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
#line 1810 "transform_hlds.rbmm.region_liveness_info.c"
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
          transform_hlds__rbmm__region_liveness_info__succeeded = transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_p_0(transform_hlds__rbmm__region_liveness_info__PredProcIds1_7, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable1_3, transform_hlds__rbmm__region_liveness_info__ProcRegionSetTable2_4);
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
      transform_hlds__rbmm__region_liveness_info__succeeded = mercury__set__equal_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__region_liveness_info__RegionSet1_3, transform_hlds__rbmm__region_liveness_info__RegionSet2_4);
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
