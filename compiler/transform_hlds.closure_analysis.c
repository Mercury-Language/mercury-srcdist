/*
** Automatically generated from `closure_analysis.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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


/* :- module transform_hlds.closure_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__closure_analysis__init
ENDINIT
*/

#include "transform_hlds.closure_analysis.mih"


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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 144 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 150 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

#line 156 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 159 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 162 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

#line 165 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

#line 168 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

#line 171 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

#line 174 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 180 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0;

#line 183 "transform_hlds.closure_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1];

#line 186 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1;

#line 189 "transform_hlds.closure_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1];

#line 192 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2;

#line 195 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1];

#line 198 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1];

#line 201 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1];

#line 204 "transform_hlds.closure_analysis.c"
static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3];

#line 207 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3];

#line 210 "transform_hlds.closure_analysis.c"
static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3];

#line 213 "transform_hlds.closure_analysis.c"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
#line 216 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 218 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2);

#line 221 "transform_hlds.closure_analysis.c"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
#line 224 "transform_hlds.closure_analysis.c"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
#line 226 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 228 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3);

#line 231 "transform_hlds.closure_analysis.c"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
#line 234 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 236 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2);

#line 239 "transform_hlds.closure_analysis.c"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
#line 242 "transform_hlds.closure_analysis.c"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
#line 244 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 246 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3);

#line 495 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__495__1_3_p_0(
#line 495 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_22);

#line 462 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__462__1_1_f_0(
#line 462 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_59);

#line 270 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__270__1_4_f_0(
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_158);

#line 217 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__217__1_4_p_0(
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_178,
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_179,
#line 217 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__4_180);

#line 257 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__257__1_4_p_0(
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_167,
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_168,
#line 257 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__4_169);

#line 327 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__327__1_4_f_0(
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_144);

#line 375 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__375__1_3_p_0(
#line 375 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 375 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_136,
#line 375 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_137);

#line 89 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
#line 89 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3);

#line 89 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2);

#line 109 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
#line 109 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3);

#line 109 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2);

#line 495 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 495 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 489 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_6,
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ProgVar_7,
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Values_8);

#line 486 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
#line 486 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4);

#line 476 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
#line 476 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__GoalInfo_5,
#line 476 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_6);

#line 464 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 464 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 462 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
#line 462 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 462 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

#line 466 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 466 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 472 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 472 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 454 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 454 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 450 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_1,
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__GoalInfo_3);

#line 443 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
#line 443 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_5,
#line 443 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Goal_6);

#line 425 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
#line 425 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 425 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 425 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_3);

#line 423 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 423 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 419 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
#line 419 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__A_4,
#line 419 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__B_5,
#line 419 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__C_6);

#line 394 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_1,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_2,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_4,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5,
#line 394 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7,
#line 394 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8);

#line 278 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 278 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 270 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
#line 270 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 270 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

#line 367 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 367 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 266 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 266 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 244 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 244 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 334 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 334 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 327 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
#line 327 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 327 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

#line 182 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 182 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2,
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
#line 182 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4);

#line 375 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
#line 375 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 375 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 375 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2);

#line 302 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 302 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 301 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
#line 301 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 301 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

#line 226 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 226 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 204 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 204 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 175 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Goal0_9,
#line 175 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__Goal_10,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 175 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);

#line 120 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 120 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

#line 119 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
#line 119 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 119 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

#line 144 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Debug_7,
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__PPId_8,
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22,
#line 144 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23);

#line 133 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
#line 133 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Var_4,
#line 133 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6,
#line 133 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7);

#line 124 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
#line 124 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_3,
#line 124 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Var_4);

#line 82 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 82 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
#line 82 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5);

#line 78 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Debug_7,
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__SCC_8,
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 78 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 71 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 71 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
#line 71 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[5][6];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[3][8];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_8[1][1];




static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_ho_value_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 1099 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1107 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1115 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1124 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1132 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

#line 1141 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1149 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1158 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

#line 1167 "transform_hlds.closure_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

#line 1176 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

#line 1185 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

#line 1194 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1202 "transform_hlds.closure_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1210 "transform_hlds.closure_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_info_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_info_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1231 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 = {
  (MR_String) "unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1246 "transform_hlds.closure_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1251 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 = {
  (MR_String) "partial",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1,
  NULL,
  NULL,
  NULL
};

#line 1266 "transform_hlds.closure_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1271 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 = {
  (MR_String) "exclusive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2,
  NULL,
  NULL,
  NULL
};

#line 1286 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

#line 1291 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1
};

#line 1296 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2
};

#line 1301 "transform_hlds.closure_analysis.c"
static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2
  }
};

#line 1320 "transform_hlds.closure_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

#line 1327 "transform_hlds.closure_analysis.c"
static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1334 "transform_hlds.closure_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_values_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_values_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_values",
  {
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0
  },
  {
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0
};

#line 1355 "transform_hlds.closure_analysis.c"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
#line 1358 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 1360 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2)
#line 1362 "transform_hlds.closure_analysis.c"
{
#line 1364 "transform_hlds.closure_analysis.c"
  {
#line 1366 "transform_hlds.closure_analysis.c"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 1369 "transform_hlds.closure_analysis.c"
    {
#line 1371 "transform_hlds.closure_analysis.c"
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis____Unify____closure_info_0_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
    }
#line 1374 "transform_hlds.closure_analysis.c"
    return transform_hlds__closure_analysis__succeeded;
#line 1376 "transform_hlds.closure_analysis.c"
  }
#line 1378 "transform_hlds.closure_analysis.c"
}

#line 1381 "transform_hlds.closure_analysis.c"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
#line 1384 "transform_hlds.closure_analysis.c"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
#line 1386 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 1388 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3)
#line 1390 "transform_hlds.closure_analysis.c"
{
#line 1392 "transform_hlds.closure_analysis.c"
  {
#line 1394 "transform_hlds.closure_analysis.c"
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__1_1;

#line 1397 "transform_hlds.closure_analysis.c"
    {
#line 1399 "transform_hlds.closure_analysis.c"
      transform_hlds__closure_analysis____Compare____closure_info_0_0(&transform_hlds__closure_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3));
    }
#line 1402 "transform_hlds.closure_analysis.c"
    *transform_hlds__closure_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__1_1));
#line 1404 "transform_hlds.closure_analysis.c"
  }
#line 1406 "transform_hlds.closure_analysis.c"
}

#line 1409 "transform_hlds.closure_analysis.c"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
#line 1412 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 1414 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2)
#line 1416 "transform_hlds.closure_analysis.c"
{
#line 1418 "transform_hlds.closure_analysis.c"
  {
#line 1420 "transform_hlds.closure_analysis.c"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 1423 "transform_hlds.closure_analysis.c"
    {
#line 1425 "transform_hlds.closure_analysis.c"
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis____Unify____closure_values_0_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
    }
#line 1428 "transform_hlds.closure_analysis.c"
    return transform_hlds__closure_analysis__succeeded;
#line 1430 "transform_hlds.closure_analysis.c"
  }
#line 1432 "transform_hlds.closure_analysis.c"
}

#line 1435 "transform_hlds.closure_analysis.c"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
#line 1438 "transform_hlds.closure_analysis.c"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
#line 1440 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 1442 "transform_hlds.closure_analysis.c"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3)
#line 1444 "transform_hlds.closure_analysis.c"
{
#line 1446 "transform_hlds.closure_analysis.c"
  {
#line 1448 "transform_hlds.closure_analysis.c"
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__1_1;

#line 1451 "transform_hlds.closure_analysis.c"
    {
#line 1453 "transform_hlds.closure_analysis.c"
      transform_hlds__closure_analysis____Compare____closure_values_0_0(&transform_hlds__closure_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3));
    }
#line 1456 "transform_hlds.closure_analysis.c"
    *transform_hlds__closure_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__1_1));
#line 1458 "transform_hlds.closure_analysis.c"
  }
#line 1460 "transform_hlds.closure_analysis.c"
}

#line 495 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__495__1_3_p_0(
#line 495 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_22)
#line 495 "closure_analysis.m"
{
#line 495 "closure_analysis.m"
  {
#line 495 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 496 "closure_analysis.m"
    {
#line 496 "closure_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 497 "closure_analysis.m"
    {
#line 497 "closure_analysis.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__closure_analysis__HeadVar__1_22)));
    }
#line 498 "closure_analysis.m"
    {
#line 498 "closure_analysis.m"
      mercury__io__nl_2_p_0();
#line 498 "closure_analysis.m"
      return;
    }
#line 495 "closure_analysis.m"
  }
#line 495 "closure_analysis.m"
}

#line 462 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__462__1_1_f_0(
#line 462 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_59)
#line 462 "closure_analysis.m"
{
#line 462 "closure_analysis.m"
  {
#line 462 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 462 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__HeadVar__2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__1_59, (MR_Integer) 2)));
#line 462 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__1_59, (MR_Integer) 0)));
#line 462 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__1_59, (MR_Integer) 1)));

#line 462 "closure_analysis.m"
    return transform_hlds__closure_analysis__HeadVar__2_60;
#line 462 "closure_analysis.m"
  }
#line 462 "closure_analysis.m"
}

#line 270 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__270__1_4_f_0(
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 270 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_158)
#line 270 "closure_analysis.m"
{
#line 270 "closure_analysis.m"
  {
#line 270 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__HeadVar__5_159;
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Case_53;
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__CaseInfo_54;
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__MainConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__4_158, (MR_Integer) 0)));
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__OtherConsIds_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__4_158, (MR_Integer) 1)));
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__CaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__4_158, (MR_Integer) 2)));
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__CaseGoal_58;

#line 272 "closure_analysis.m"
    {
#line 272 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__CaseGoal0_57, &transform_hlds__closure_analysis__CaseGoal_58, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__CaseInfo_54);
    }
#line 274 "closure_analysis.m"
    {
#line 274 "closure_analysis.m"
      transform_hlds__closure_analysis__Case_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 0) = ((MR_Box) (transform_hlds__closure_analysis__MainConsId_55));
#line 274 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 1) = ((MR_Box) (transform_hlds__closure_analysis__OtherConsIds_56));
#line 274 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 2) = ((MR_Box) (transform_hlds__closure_analysis__CaseGoal_58));
#line 274 "closure_analysis.m"
    }
#line 270 "closure_analysis.m"
    {
#line 270 "closure_analysis.m"
      transform_hlds__closure_analysis__HeadVar__5_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__5_159, 0) = ((MR_Box) (transform_hlds__closure_analysis__Case_53));
#line 270 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__5_159, 1) = ((MR_Box) (transform_hlds__closure_analysis__CaseInfo_54));
#line 270 "closure_analysis.m"
    }
#line 270 "closure_analysis.m"
    return transform_hlds__closure_analysis__HeadVar__5_159;
#line 270 "closure_analysis.m"
  }
#line 270 "closure_analysis.m"
}

#line 217 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__217__1_4_p_0(
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_178,
#line 217 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_179,
#line 217 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__4_180)
#line 217 "closure_analysis.m"
{
#line 217 "closure_analysis.m"
  {
#line 217 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 217 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__PossibleValues_32;
#line 208 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv0_PossibleValues_32;

#line 208 "closure_analysis.m"
    {
#line 208 "closure_analysis.m"
      transform_hlds__closure_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__HeadVar__2_178)), &transform_hlds__closure_analysis__conv0_PossibleValues_32);
    }
#line 208 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 208 "closure_analysis.m"
      {
#line 208 "closure_analysis.m"
        transform_hlds__closure_analysis__PossibleValues_32 = ((MR_Word) transform_hlds__closure_analysis__conv0_PossibleValues_32);
#line 208 "closure_analysis.m"
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 208 "closure_analysis.m"
      }
#line 217 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 211 "closure_analysis.m"
      if ((transform_hlds__closure_analysis__PossibleValues_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "closure_analysis.m"
        *transform_hlds__closure_analysis__HeadVar__4_180 = transform_hlds__closure_analysis__HeadVar__3_179;
#line 211 "closure_analysis.m"
      else
#line 211 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__PossibleValues_32)) == (MR_mktag((MR_Integer) 2))))
#line 214 "closure_analysis.m"
          {
#line 214 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__KnownValues_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__PossibleValues_32, (MR_Integer) 0)));

#line 215 "closure_analysis.m"
            {
#line 215 "closure_analysis.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__closure_analysis__HeadVar__2_178)), ((MR_Box) (transform_hlds__closure_analysis__KnownValues_34)), transform_hlds__closure_analysis__HeadVar__3_179, transform_hlds__closure_analysis__HeadVar__4_180);
#line 215 "closure_analysis.m"
              return;
            }
#line 214 "closure_analysis.m"
          }
#line 211 "closure_analysis.m"
        else
#line 212 "closure_analysis.m"
          *transform_hlds__closure_analysis__HeadVar__4_180 = transform_hlds__closure_analysis__HeadVar__3_179;
#line 217 "closure_analysis.m"
    else
#line 217 "closure_analysis.m"
      *transform_hlds__closure_analysis__HeadVar__4_180 = transform_hlds__closure_analysis__HeadVar__3_179;
#line 217 "closure_analysis.m"
  }
#line 217 "closure_analysis.m"
}

#line 257 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__257__1_4_p_0(
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_167,
#line 257 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_168,
#line 257 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__4_169)
#line 257 "closure_analysis.m"
{
#line 257 "closure_analysis.m"
  {
#line 257 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 257 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__PossibleValues_192;
#line 248 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv0_PossibleValues_192;

#line 248 "closure_analysis.m"
    {
#line 248 "closure_analysis.m"
      transform_hlds__closure_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__HeadVar__2_167)), &transform_hlds__closure_analysis__conv0_PossibleValues_192);
    }
#line 248 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 248 "closure_analysis.m"
      {
#line 248 "closure_analysis.m"
        transform_hlds__closure_analysis__PossibleValues_192 = ((MR_Word) transform_hlds__closure_analysis__conv0_PossibleValues_192);
#line 248 "closure_analysis.m"
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 248 "closure_analysis.m"
      }
#line 257 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 251 "closure_analysis.m"
      if ((transform_hlds__closure_analysis__PossibleValues_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "closure_analysis.m"
        *transform_hlds__closure_analysis__HeadVar__4_169 = transform_hlds__closure_analysis__HeadVar__3_168;
#line 251 "closure_analysis.m"
      else
#line 251 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__PossibleValues_192)) == (MR_mktag((MR_Integer) 2))))
#line 254 "closure_analysis.m"
          {
#line 254 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__KnownValues_190 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__PossibleValues_192, (MR_Integer) 0)));

#line 255 "closure_analysis.m"
            {
#line 255 "closure_analysis.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__closure_analysis__HeadVar__2_167)), ((MR_Box) (transform_hlds__closure_analysis__KnownValues_190)), transform_hlds__closure_analysis__HeadVar__3_168, transform_hlds__closure_analysis__HeadVar__4_169);
#line 255 "closure_analysis.m"
              return;
            }
#line 254 "closure_analysis.m"
          }
#line 251 "closure_analysis.m"
        else
#line 252 "closure_analysis.m"
          *transform_hlds__closure_analysis__HeadVar__4_169 = transform_hlds__closure_analysis__HeadVar__3_168;
#line 257 "closure_analysis.m"
    else
#line 257 "closure_analysis.m"
      *transform_hlds__closure_analysis__HeadVar__4_169 = transform_hlds__closure_analysis__HeadVar__3_168;
#line 257 "closure_analysis.m"
  }
#line 257 "closure_analysis.m"
}

#line 327 "closure_analysis.m"
static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__327__1_4_f_0(
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 327 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_144)
#line 327 "closure_analysis.m"
{
#line 327 "closure_analysis.m"
  {
#line 327 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 327 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__HeadVar__5_145;
#line 327 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Disjunct_93;
#line 327 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__ClosureInfoForDisjunct_94;

#line 328 "closure_analysis.m"
    {
#line 328 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__HeadVar__4_144, &transform_hlds__closure_analysis__Disjunct_93, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__ClosureInfoForDisjunct_94);
    }
#line 330 "closure_analysis.m"
    {
#line 330 "closure_analysis.m"
      transform_hlds__closure_analysis__HeadVar__5_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__5_145, 0) = ((MR_Box) (transform_hlds__closure_analysis__Disjunct_93));
#line 330 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__5_145, 1) = ((MR_Box) (transform_hlds__closure_analysis__ClosureInfoForDisjunct_94));
#line 330 "closure_analysis.m"
    }
#line 327 "closure_analysis.m"
    return transform_hlds__closure_analysis__HeadVar__5_145;
#line 327 "closure_analysis.m"
  }
#line 327 "closure_analysis.m"
}

#line 375 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__375__1_3_p_0(
#line 375 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 375 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_136,
#line 375 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_137)
#line 375 "closure_analysis.m"
{
#line 375 "closure_analysis.m"
  {
#line 375 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__NameMode_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__2_136, (MR_Integer) 1)));
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Type_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__2_136, (MR_Integer) 2)));
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Mode_128;
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_138_138;
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_139_139;
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__2_136, (MR_Integer) 0)));
#line 376 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis___BoxPolicy_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__HeadVar__2_136, (MR_Integer) 3)));
#line 379 "closure_analysis.m"
    MR_String transform_hlds__closure_analysis__V_127_127;

#line 379 "closure_analysis.m"
    transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__NameMode_124)) == (MR_mktag((MR_Integer) 1)));
#line 379 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 379 "closure_analysis.m"
      {
#line 379 "closure_analysis.m"
        transform_hlds__closure_analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__NameMode_124, (MR_Integer) 0)));
#line 379 "closure_analysis.m"
        transform_hlds__closure_analysis__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_138_138, (MR_Integer) 0)));
#line 379 "closure_analysis.m"
        transform_hlds__closure_analysis__Mode_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_138_138, (MR_Integer) 1)));
#line 380 "closure_analysis.m"
        {
#line 380 "closure_analysis.m"
          transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Mode_128);
        }
#line 375 "closure_analysis.m"
        if (transform_hlds__closure_analysis__succeeded)
#line 375 "closure_analysis.m"
          {
#line 381 "closure_analysis.m"
            {
#line 381 "closure_analysis.m"
              transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_125);
            }
#line 375 "closure_analysis.m"
            if (transform_hlds__closure_analysis__succeeded)
#line 375 "closure_analysis.m"
              {
#line 382 "closure_analysis.m"
                transform_hlds__closure_analysis__V_139_139 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "closure_analysis.m"
                {
#line 382 "closure_analysis.m"
                  MR_Word base;
#line 382 "closure_analysis.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "closure_analysis.m"
                  *transform_hlds__closure_analysis__HeadVar__3_137 = base;
#line 382 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__Var_226));
#line 382 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_139_139));
#line 382 "closure_analysis.m"
                }
#line 382 "closure_analysis.m"
                transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 375 "closure_analysis.m"
              }
#line 375 "closure_analysis.m"
          }
#line 379 "closure_analysis.m"
      }
#line 375 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 375 "closure_analysis.m"
  }
#line 375 "closure_analysis.m"
}

#line 89 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
#line 89 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3)
#line 89 "closure_analysis.m"
{
#line 89 "closure_analysis.m"
  {
#line 89 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 89 "closure_analysis.m"
    MR_Integer transform_hlds__closure_analysis__CastX_16 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;
#line 89 "closure_analysis.m"
    MR_Integer transform_hlds__closure_analysis__CastY_17 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__3_3;

#line 89 "closure_analysis.m"
    transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastX_16 == transform_hlds__closure_analysis__CastY_17);
#line 89 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 1899 "transform_hlds.closure_analysis.c"
      *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "closure_analysis.m"
    else
#line 89 "closure_analysis.m"
      if ((transform_hlds__closure_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "closure_analysis.m"
        if ((transform_hlds__closure_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "closure_analysis.m"
          *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "closure_analysis.m"
        else
#line 89 "closure_analysis.m"
          if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1913 "transform_hlds.closure_analysis.c"
            *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "closure_analysis.m"
          else
#line 1917 "transform_hlds.closure_analysis.c"
            *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "closure_analysis.m"
      else
#line 89 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 89 "closure_analysis.m"
          {
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "closure_analysis.m"
            if ((transform_hlds__closure_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1930 "transform_hlds.closure_analysis.c"
              *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "closure_analysis.m"
            else
#line 89 "closure_analysis.m"
              if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 89 "closure_analysis.m"
                {
#line 89 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 89 "closure_analysis.m"
                  {
#line 89 "closure_analysis.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__V_20_20)), ((MR_Box) (transform_hlds__closure_analysis__V_15_15)));
#line 89 "closure_analysis.m"
                    return;
                  }
#line 89 "closure_analysis.m"
                }
#line 89 "closure_analysis.m"
              else
#line 1952 "transform_hlds.closure_analysis.c"
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "closure_analysis.m"
          }
#line 89 "closure_analysis.m"
        else
#line 89 "closure_analysis.m"
          {
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "closure_analysis.m"
            if ((transform_hlds__closure_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1965 "transform_hlds.closure_analysis.c"
              *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "closure_analysis.m"
            else
#line 89 "closure_analysis.m"
              if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1971 "transform_hlds.closure_analysis.c"
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "closure_analysis.m"
              else
#line 89 "closure_analysis.m"
                {
#line 89 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 89 "closure_analysis.m"
                  {
#line 89 "closure_analysis.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__V_21_21)), ((MR_Box) (transform_hlds__closure_analysis__V_8_8)));
#line 89 "closure_analysis.m"
                    return;
                  }
#line 89 "closure_analysis.m"
                }
#line 89 "closure_analysis.m"
          }
#line 89 "closure_analysis.m"
  }
#line 89 "closure_analysis.m"
}

#line 89 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 89 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2)
#line 89 "closure_analysis.m"
{
#line 89 "closure_analysis.m"
  {
#line 89 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 89 "closure_analysis.m"
    MR_Integer transform_hlds__closure_analysis__CastX_9 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__1_1;
#line 89 "closure_analysis.m"
    MR_Integer transform_hlds__closure_analysis__CastY_10 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;

#line 89 "closure_analysis.m"
    transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastX_9 == transform_hlds__closure_analysis__CastY_10);
#line 89 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 89 "closure_analysis.m"
      transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 89 "closure_analysis.m"
    else
#line 89 "closure_analysis.m"
      if ((transform_hlds__closure_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "closure_analysis.m"
        {
#line 89 "closure_analysis.m"
          MR_Integer transform_hlds__closure_analysis__CastX_3 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__1_1;
#line 89 "closure_analysis.m"
          MR_Integer transform_hlds__closure_analysis__CastY_4 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;

#line 89 "closure_analysis.m"
          transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastY_4 == transform_hlds__closure_analysis__CastX_3);
#line 89 "closure_analysis.m"
        }
#line 89 "closure_analysis.m"
      else
#line 89 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 89 "closure_analysis.m"
          {
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__TypeInfo_11_11;
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_8_8;

#line 89 "closure_analysis.m"
            transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 89 "closure_analysis.m"
            if (transform_hlds__closure_analysis__succeeded)
#line 89 "closure_analysis.m"
              {
#line 89 "closure_analysis.m"
                transform_hlds__closure_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 2056 "transform_hlds.closure_analysis.c"
                transform_hlds__closure_analysis__TypeInfo_11_11 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2];
#line 2058 "transform_hlds.closure_analysis.c"
                {
#line 2060 "transform_hlds.closure_analysis.c"
                  return transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__closure_analysis__TypeInfo_11_11, ((MR_Box) (transform_hlds__closure_analysis__V_7_7)), ((MR_Box) (transform_hlds__closure_analysis__V_8_8)));
                }
#line 89 "closure_analysis.m"
              }
#line 89 "closure_analysis.m"
          }
#line 89 "closure_analysis.m"
        else
#line 89 "closure_analysis.m"
          {
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__TypeInfo_12_12;
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_6_6;

#line 89 "closure_analysis.m"
            transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 89 "closure_analysis.m"
            if (transform_hlds__closure_analysis__succeeded)
#line 89 "closure_analysis.m"
              {
#line 89 "closure_analysis.m"
                transform_hlds__closure_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 2086 "transform_hlds.closure_analysis.c"
                transform_hlds__closure_analysis__TypeInfo_12_12 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2];
#line 2088 "transform_hlds.closure_analysis.c"
                {
#line 2090 "transform_hlds.closure_analysis.c"
                  return transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__closure_analysis__TypeInfo_12_12, ((MR_Box) (transform_hlds__closure_analysis__V_5_5)), ((MR_Box) (transform_hlds__closure_analysis__V_6_6)));
                }
#line 89 "closure_analysis.m"
              }
#line 89 "closure_analysis.m"
          }
#line 89 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 89 "closure_analysis.m"
  }
#line 89 "closure_analysis.m"
}

#line 109 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
#line 109 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3)
#line 109 "closure_analysis.m"
{
#line 109 "closure_analysis.m"
  {
#line 109 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 109 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar1_4 = transform_hlds__closure_analysis__HeadVar__2_2;
#line 109 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar2_5 = transform_hlds__closure_analysis__HeadVar__3_3;

#line 109 "closure_analysis.m"
    {
#line 109 "closure_analysis.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar2_5)));
#line 109 "closure_analysis.m"
      return;
    }
#line 109 "closure_analysis.m"
  }
#line 109 "closure_analysis.m"
}

#line 109 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 109 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2)
#line 109 "closure_analysis.m"
{
#line 109 "closure_analysis.m"
  {
#line 109 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 109 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar1_3 = transform_hlds__closure_analysis__HeadVar__1_1;
#line 109 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar2_4 = transform_hlds__closure_analysis__HeadVar__2_2;

#line 109 "closure_analysis.m"
    {
#line 109 "closure_analysis.m"
      return transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar2_4)));
    }
#line 109 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 109 "closure_analysis.m"
  }
#line 109 "closure_analysis.m"
}

#line 495 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 495 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 495 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 495 "closure_analysis.m"
{
#line 495 "closure_analysis.m"
  {
#line 495 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 495 "closure_analysis.m"
    {
#line 495 "closure_analysis.m"
      transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__495__1_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
#line 495 "closure_analysis.m"
      return;
    }
#line 495 "closure_analysis.m"
  }
#line 495 "closure_analysis.m"
}

#line 489 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_6,
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ProgVar_7,
#line 489 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Values_8)
#line 489 "closure_analysis.m"
{
#line 492 "closure_analysis.m"
  {
#line 492 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 492 "closure_analysis.m"
    MR_String transform_hlds__closure_analysis__VarName_10;
#line 492 "closure_analysis.m"
    MR_String transform_hlds__closure_analysis__V_38_38;
#line 500 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_14;

#line 493 "closure_analysis.m"
    {
#line 493 "closure_analysis.m"
      transform_hlds__closure_analysis__VarName_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__Varset_6, transform_hlds__closure_analysis__ProgVar_7);
    }
#line 494 "closure_analysis.m"
    {
#line 494 "closure_analysis.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_8[0], transform_hlds__closure_analysis__VarName_10, &transform_hlds__closure_analysis__V_38_38);
    }
#line 494 "closure_analysis.m"
    {
#line 494 "closure_analysis.m"
      mercury__io__write_string_3_p_0(transform_hlds__closure_analysis__V_38_38);
    }
#line 494 "closure_analysis.m"
    {
#line 494 "closure_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " =\n");
    }
#line 500 "closure_analysis.m"
    {
#line 500 "closure_analysis.m"
      mercury__set__fold_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[14], transform_hlds__closure_analysis__Values_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_14);
    }
#line 492 "closure_analysis.m"
  }
#line 489 "closure_analysis.m"
}

#line 486 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 486 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
#line 486 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4)
#line 486 "closure_analysis.m"
{
#line 486 "closure_analysis.m"
  {
#line 486 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 486 "closure_analysis.m"
    {
#line 486 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_ho_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
#line 486 "closure_analysis.m"
      return;
    }
#line 486 "closure_analysis.m"
  }
#line 486 "closure_analysis.m"
}

#line 476 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
#line 476 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__GoalInfo_5,
#line 476 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_6)
#line 476 "closure_analysis.m"
{
#line 479 "closure_analysis.m"
  {
#line 479 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 479 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__HO_Values_8;

#line 480 "closure_analysis.m"
    {
#line 480 "closure_analysis.m"
      transform_hlds__closure_analysis__HO_Values_8 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__closure_analysis__GoalInfo_5);
    }
#line 481 "closure_analysis.m"
    {
#line 481 "closure_analysis.m"
      transform_hlds__closure_analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HO_Values_8);
    }
#line 483 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 483 "closure_analysis.m"
      {
#line 483 "closure_analysis.m"
      }
#line 483 "closure_analysis.m"
    else
#line 484 "closure_analysis.m"
      {
#line 484 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__V_11_11;
#line 484 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__V_14_14;
#line 486 "closure_analysis.m"
        MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_10;

#line 484 "closure_analysis.m"
        {
#line 484 "closure_analysis.m"
          transform_hlds__closure_analysis__V_11_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__closure_analysis__GoalInfo_5);
        }
#line 484 "closure_analysis.m"
        {
#line 484 "closure_analysis.m"
          parse_tree__prog_out__write_context_3_p_0(transform_hlds__closure_analysis__V_11_11);
        }
#line 485 "closure_analysis.m"
        {
#line 485 "closure_analysis.m"
          mercury__io__nl_2_p_0();
        }
#line 486 "closure_analysis.m"
        {
#line 486 "closure_analysis.m"
          transform_hlds__closure_analysis__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 486 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[2]));
#line 486 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_ho_values_4_p_0_1));
#line 486 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 486 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_6));
#line 486 "closure_analysis.m"
        }
#line 486 "closure_analysis.m"
        {
#line 486 "closure_analysis.m"
          mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_14_14, transform_hlds__closure_analysis__HO_Values_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_10);
        }
#line 484 "closure_analysis.m"
      }
#line 479 "closure_analysis.m"
  }
#line 476 "closure_analysis.m"
}

#line 464 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 464 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 464 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 464 "closure_analysis.m"
{
#line 464 "closure_analysis.m"
  {
#line 464 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 464 "closure_analysis.m"
    {
#line 464 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
#line 464 "closure_analysis.m"
      return;
    }
#line 464 "closure_analysis.m"
  }
#line 464 "closure_analysis.m"
}

#line 462 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
#line 462 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 462 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
#line 462 "closure_analysis.m"
{
#line 462 "closure_analysis.m"
  {
#line 462 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
#line 462 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 462 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv3_HeadVar__2_60;

#line 462 "closure_analysis.m"
    {
#line 462 "closure_analysis.m"
      transform_hlds__closure_analysis__conv3_HeadVar__2_60 = transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__462__1_1_f_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
#line 462 "closure_analysis.m"
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv3_HeadVar__2_60));
#line 462 "closure_analysis.m"
    return transform_hlds__closure_analysis__wrapper_arg_2;
#line 462 "closure_analysis.m"
  }
#line 462 "closure_analysis.m"
}

#line 466 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 466 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 466 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 466 "closure_analysis.m"
{
#line 466 "closure_analysis.m"
  {
#line 466 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 466 "closure_analysis.m"
    {
#line 466 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
#line 466 "closure_analysis.m"
      return;
    }
#line 466 "closure_analysis.m"
  }
#line 466 "closure_analysis.m"
}

#line 472 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 472 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 472 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 472 "closure_analysis.m"
{
#line 472 "closure_analysis.m"
  {
#line 472 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 472 "closure_analysis.m"
    {
#line 472 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
#line 472 "closure_analysis.m"
      return;
    }
#line 472 "closure_analysis.m"
  }
#line 472 "closure_analysis.m"
}

#line 454 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 454 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 454 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 454 "closure_analysis.m"
{
#line 454 "closure_analysis.m"
  {
#line 454 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 454 "closure_analysis.m"
    {
#line 454 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
#line 454 "closure_analysis.m"
      return;
    }
#line 454 "closure_analysis.m"
  }
#line 454 "closure_analysis.m"
}

#line 450 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_1,
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 450 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__GoalInfo_3)
#line 450 "closure_analysis.m"
{
#line 453 "closure_analysis.m"
  {
#line 453 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 453 "closure_analysis.m"
    if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 468 "closure_analysis.m"
      {
#line 468 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__Goal_94 = (MR_Word) MR_body(((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2), (MR_Integer) 0);

#line 469 "closure_analysis.m"
        {
#line 469 "closure_analysis.m"
          transform_hlds__closure_analysis__dump_closure_info_4_p_0(transform_hlds__closure_analysis__Varset_1, transform_hlds__closure_analysis__Goal_94);
#line 469 "closure_analysis.m"
          return;
        }
#line 468 "closure_analysis.m"
      }
#line 453 "closure_analysis.m"
    else
#line 453 "closure_analysis.m"
      if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 456 "closure_analysis.m"
        {
#line 456 "closure_analysis.m"
          transform_hlds__closure_analysis__dump_ho_values_4_p_0(transform_hlds__closure_analysis__GoalInfo_3, transform_hlds__closure_analysis__Varset_1);
#line 456 "closure_analysis.m"
          return;
        }
#line 453 "closure_analysis.m"
      else
#line 453 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 467 "closure_analysis.m"
          {
#line 467 "closure_analysis.m"
          }
#line 453 "closure_analysis.m"
        else
#line 453 "closure_analysis.m"
          if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 470 "closure_analysis.m"
            {
#line 470 "closure_analysis.m"
            }
#line 453 "closure_analysis.m"
          else
#line 453 "closure_analysis.m"
            if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 453 "closure_analysis.m"
              {
#line 453 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 453 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_13_13;
#line 453 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 454 "closure_analysis.m"
                MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_5;

#line 454 "closure_analysis.m"
                {
#line 454 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
#line 454 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1));
#line 454 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
#line 454 "closure_analysis.m"
                }
#line 454 "closure_analysis.m"
                {
#line 454 "closure_analysis.m"
                  mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_13_13, transform_hlds__closure_analysis__Goals_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_5);
                }
#line 453 "closure_analysis.m"
              }
#line 453 "closure_analysis.m"
            else
#line 453 "closure_analysis.m"
              if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 471 "closure_analysis.m"
                {
#line 471 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__Goals_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 471 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_118_118;
#line 472 "closure_analysis.m"
                  MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_5;

#line 472 "closure_analysis.m"
                  {
#line 472 "closure_analysis.m"
                    transform_hlds__closure_analysis__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 472 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
#line 472 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2));
#line 472 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 472 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
#line 472 "closure_analysis.m"
                  }
#line 472 "closure_analysis.m"
                  {
#line 472 "closure_analysis.m"
                    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_118_118, transform_hlds__closure_analysis__Goals_113, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_5);
                  }
#line 471 "closure_analysis.m"
                }
#line 453 "closure_analysis.m"
              else
#line 453 "closure_analysis.m"
                if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 458 "closure_analysis.m"
                  {
#line 458 "closure_analysis.m"
                    transform_hlds__closure_analysis__dump_ho_values_4_p_0(transform_hlds__closure_analysis__GoalInfo_3, transform_hlds__closure_analysis__Varset_1);
#line 458 "closure_analysis.m"
                    return;
                  }
#line 453 "closure_analysis.m"
                else
#line 453 "closure_analysis.m"
                  if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 465 "closure_analysis.m"
                    {
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Cond_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Then_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Else_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__V_77_77;
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__V_78_78;
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__V_80_80;
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__V_81_81;
#line 465 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 466 "closure_analysis.m"
                      MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_IO_5;

#line 466 "closure_analysis.m"
                      {
#line 466 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
#line 466 "closure_analysis.m"
                      }
#line 466 "closure_analysis.m"
                      {
#line 466 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_81_81, 0) = ((MR_Box) (transform_hlds__closure_analysis__Else_72));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "closure_analysis.m"
                      }
#line 466 "closure_analysis.m"
                      {
#line 466 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_80_80, 0) = ((MR_Box) (transform_hlds__closure_analysis__Then_71));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_80_80, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_81_81));
#line 466 "closure_analysis.m"
                      }
#line 466 "closure_analysis.m"
                      {
#line 466 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_78_78, 0) = ((MR_Box) (transform_hlds__closure_analysis__Cond_70));
#line 466 "closure_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_78_78, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_80_80));
#line 466 "closure_analysis.m"
                      }
#line 466 "closure_analysis.m"
                      {
#line 466 "closure_analysis.m"
                        mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_77_77, transform_hlds__closure_analysis__V_78_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_IO_5);
                      }
#line 465 "closure_analysis.m"
                    }
#line 453 "closure_analysis.m"
                  else
#line 453 "closure_analysis.m"
                    if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 459 "closure_analysis.m"
                      {
#line 459 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 459 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));

#line 460 "closure_analysis.m"
                        {
#line 460 "closure_analysis.m"
                          transform_hlds__closure_analysis__dump_closure_info_4_p_0(transform_hlds__closure_analysis__Varset_1, transform_hlds__closure_analysis__Goal_40);
#line 460 "closure_analysis.m"
                          return;
                        }
#line 459 "closure_analysis.m"
                      }
#line 453 "closure_analysis.m"
                    else
#line 453 "closure_analysis.m"
                      if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 473 "closure_analysis.m"
                        {
#line 474 "closure_analysis.m"
                          {
#line 474 "closure_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.dump_closure_info_expr\'/5", (MR_String) "shorthand");
#line 474 "closure_analysis.m"
                            return;
                          }
#line 473 "closure_analysis.m"
                        }
#line 453 "closure_analysis.m"
                      else
#line 461 "closure_analysis.m"
                        {
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__Goals_56;
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__V_61_61;
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 461 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 464 "closure_analysis.m"
                          MR_Box transform_hlds__closure_analysis__conv4_STATE_VARIABLE_IO_5;

#line 463 "closure_analysis.m"
                          {
#line 463 "closure_analysis.m"
                            transform_hlds__closure_analysis__Goals_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__closure_analysis__TypeCtorInfo_134_134, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[13], transform_hlds__closure_analysis__Cases_49);
                          }
#line 464 "closure_analysis.m"
                          {
#line 464 "closure_analysis.m"
                            transform_hlds__closure_analysis__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
#line 464 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5));
#line 464 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
#line 464 "closure_analysis.m"
                          }
#line 464 "closure_analysis.m"
                          {
#line 464 "closure_analysis.m"
                            mercury__list__foldl_4_p_2(transform_hlds__closure_analysis__TypeCtorInfo_134_134, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_61_61, transform_hlds__closure_analysis__Goals_56, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv4_STATE_VARIABLE_IO_5);
                          }
#line 461 "closure_analysis.m"
                        }
#line 453 "closure_analysis.m"
  }
#line 450 "closure_analysis.m"
}

#line 443 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
#line 443 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Varset_5,
#line 443 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Goal_6)
#line 443 "closure_analysis.m"
{
#line 446 "closure_analysis.m"
  {
#line 446 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 446 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal_6, (MR_Integer) 0)));
#line 446 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal_6, (MR_Integer) 1)));

#line 448 "closure_analysis.m"
    {
#line 448 "closure_analysis.m"
      transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(transform_hlds__closure_analysis__Varset_5, transform_hlds__closure_analysis__GoalExpr_8, transform_hlds__closure_analysis__GoalInfo_9);
#line 448 "closure_analysis.m"
      return;
    }
#line 446 "closure_analysis.m"
  }
#line 443 "closure_analysis.m"
}

#line 425 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
#line 425 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
#line 425 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
#line 425 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_3)
#line 425 "closure_analysis.m"
{
#line 428 "closure_analysis.m"
  {
#line 428 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 428 "closure_analysis.m"
    if ((transform_hlds__closure_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "closure_analysis.m"
      if ((transform_hlds__closure_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "closure_analysis.m"
        *transform_hlds__closure_analysis__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "closure_analysis.m"
      else
#line 428 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 430 "closure_analysis.m"
          {
#line 430 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 430 "closure_analysis.m"
            {
#line 430 "closure_analysis.m"
              MR_Word base;
#line 430 "closure_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "closure_analysis.m"
              *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 430 "closure_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__A_5));
#line 430 "closure_analysis.m"
            }
#line 430 "closure_analysis.m"
          }
#line 428 "closure_analysis.m"
        else
#line 429 "closure_analysis.m"
          *transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__2_2;
#line 428 "closure_analysis.m"
    else
#line 428 "closure_analysis.m"
      if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 428 "closure_analysis.m"
        {
#line 428 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));

#line 428 "closure_analysis.m"
          if ((transform_hlds__closure_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "closure_analysis.m"
            {
#line 434 "closure_analysis.m"
              MR_Word base;
#line 434 "closure_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "closure_analysis.m"
              *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 434 "closure_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_24_24));
#line 434 "closure_analysis.m"
            }
#line 428 "closure_analysis.m"
          else
#line 428 "closure_analysis.m"
            if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 436 "closure_analysis.m"
              {
#line 436 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__B_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_19_19;

#line 436 "closure_analysis.m"
                {
#line 436 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_19_19 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_24_24, transform_hlds__closure_analysis__B_18);
                }
#line 436 "closure_analysis.m"
                {
#line 436 "closure_analysis.m"
                  MR_Word base;
#line 436 "closure_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "closure_analysis.m"
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 436 "closure_analysis.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_19_19));
#line 436 "closure_analysis.m"
                }
#line 436 "closure_analysis.m"
              }
#line 428 "closure_analysis.m"
            else
#line 435 "closure_analysis.m"
              {
#line 435 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 435 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_16_16;

#line 435 "closure_analysis.m"
                {
#line 435 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_16_16 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_24_24, transform_hlds__closure_analysis__B_15);
                }
#line 435 "closure_analysis.m"
                {
#line 435 "closure_analysis.m"
                  MR_Word base;
#line 435 "closure_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "closure_analysis.m"
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 435 "closure_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_16_16));
#line 435 "closure_analysis.m"
                }
#line 435 "closure_analysis.m"
              }
#line 428 "closure_analysis.m"
        }
#line 428 "closure_analysis.m"
      else
#line 428 "closure_analysis.m"
        {
#line 428 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));

#line 428 "closure_analysis.m"
          if ((transform_hlds__closure_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "closure_analysis.m"
            *transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__1_1;
#line 428 "closure_analysis.m"
          else
#line 428 "closure_analysis.m"
            if (((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 433 "closure_analysis.m"
              {
#line 433 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 433 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_12_12;

#line 433 "closure_analysis.m"
                {
#line 433 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_12_12 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_25_25, transform_hlds__closure_analysis__B_11);
                }
#line 433 "closure_analysis.m"
                {
#line 433 "closure_analysis.m"
                  MR_Word base;
#line 433 "closure_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "closure_analysis.m"
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 433 "closure_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_12_12));
#line 433 "closure_analysis.m"
                }
#line 433 "closure_analysis.m"
              }
#line 428 "closure_analysis.m"
            else
#line 432 "closure_analysis.m"
              {
#line 432 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 432 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_9_9;

#line 432 "closure_analysis.m"
                {
#line 432 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_9_9 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_25_25, transform_hlds__closure_analysis__B_8);
                }
#line 432 "closure_analysis.m"
                {
#line 432 "closure_analysis.m"
                  MR_Word base;
#line 432 "closure_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "closure_analysis.m"
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
#line 432 "closure_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_9_9));
#line 432 "closure_analysis.m"
                }
#line 432 "closure_analysis.m"
              }
#line 428 "closure_analysis.m"
        }
#line 428 "closure_analysis.m"
  }
#line 425 "closure_analysis.m"
}

#line 423 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 423 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 423 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 423 "closure_analysis.m"
{
#line 423 "closure_analysis.m"
  {
#line 423 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 423 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__3_3;

#line 423 "closure_analysis.m"
    {
#line 423 "closure_analysis.m"
      transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_HeadVar__3_3);
    }
#line 423 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__3_3));
#line 423 "closure_analysis.m"
  }
#line 423 "closure_analysis.m"
}

#line 419 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
#line 419 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__A_4,
#line 419 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__B_5,
#line 419 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__C_6)
#line 419 "closure_analysis.m"
{
#line 422 "closure_analysis.m"
  {
#line 422 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 423 "closure_analysis.m"
    {
#line 423 "closure_analysis.m"
      mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[12], transform_hlds__closure_analysis__A_4, transform_hlds__closure_analysis__B_5, transform_hlds__closure_analysis__C_6);
#line 423 "closure_analysis.m"
      return;
    }
#line 422 "closure_analysis.m"
  }
#line 419 "closure_analysis.m"
}

#line 394 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_1,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_2,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__HeadVar__4_4,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5,
#line 394 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6,
#line 394 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7,
#line 394 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8)
#line 394 "closure_analysis.m"
{
#line 399 "closure_analysis.m"
  while (MR_TRUE)
#line 399 "closure_analysis.m"
    {
#line 399 "closure_analysis.m"
      /* tailcall optimized into a loop */
#line 399 "closure_analysis.m"
      {
#line 399 "closure_analysis.m"
        MR_bool transform_hlds__closure_analysis__succeeded;

#line 399 "closure_analysis.m"
        if ((transform_hlds__closure_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "closure_analysis.m"
          if ((transform_hlds__closure_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "closure_analysis.m"
            {
#line 399 "closure_analysis.m"
              *transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
#line 399 "closure_analysis.m"
              *transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
#line 399 "closure_analysis.m"
            }
#line 399 "closure_analysis.m"
          else
#line 402 "closure_analysis.m"
            {
#line 403 "closure_analysis.m"
              {
#line 403 "closure_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
#line 403 "closure_analysis.m"
                return;
              }
#line 402 "closure_analysis.m"
            }
#line 399 "closure_analysis.m"
        else
#line 399 "closure_analysis.m"
          {
#line 399 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 399 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 399 "closure_analysis.m"
            if ((transform_hlds__closure_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "closure_analysis.m"
              {
#line 401 "closure_analysis.m"
                {
#line 401 "closure_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
#line 401 "closure_analysis.m"
                  return;
                }
#line 400 "closure_analysis.m"
              }
#line 399 "closure_analysis.m"
            else
#line 405 "closure_analysis.m"
              {
#line 405 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Mode_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__4_4, (MR_Integer) 0)));
#line 405 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Modes_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__4_4, (MR_Integer) 1)));
#line 405 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51;
#line 405 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52;
#line 126 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Type_61;

#line 127 "closure_analysis.m"
                {
#line 127 "closure_analysis.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__closure_analysis__VarTypes_2, transform_hlds__closure_analysis__V_58_58, &transform_hlds__closure_analysis__Type_61);
                }
#line 128 "closure_analysis.m"
                {
#line 128 "closure_analysis.m"
                  transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_61);
                }
#line 414 "closure_analysis.m"
                if (transform_hlds__closure_analysis__succeeded)
#line 409 "closure_analysis.m"
                  {
#line 407 "closure_analysis.m"
                    {
#line 407 "closure_analysis.m"
                      transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__closure_analysis__ModuleInfo_1, transform_hlds__closure_analysis__Mode_43);
                    }
#line 409 "closure_analysis.m"
                    if (transform_hlds__closure_analysis__succeeded)
#line 408 "closure_analysis.m"
                      {
#line 408 "closure_analysis.m"
                        {
#line 408 "closure_analysis.m"
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__V_58_58, transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5, &transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51);
                        }
#line 408 "closure_analysis.m"
                        transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
#line 408 "closure_analysis.m"
                      }
#line 409 "closure_analysis.m"
                    else
#line 411 "closure_analysis.m"
                      {
#line 409 "closure_analysis.m"
                        {
#line 409 "closure_analysis.m"
                          transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__closure_analysis__ModuleInfo_1, transform_hlds__closure_analysis__Mode_43);
                        }
#line 411 "closure_analysis.m"
                        if (transform_hlds__closure_analysis__succeeded)
#line 410 "closure_analysis.m"
                          {
#line 410 "closure_analysis.m"
                            {
#line 410 "closure_analysis.m"
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__V_58_58, transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7, &transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52);
                            }
#line 410 "closure_analysis.m"
                          }
#line 411 "closure_analysis.m"
                        else
#line 411 "closure_analysis.m"
                          transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
#line 411 "closure_analysis.m"
                        transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
#line 411 "closure_analysis.m"
                      }
#line 409 "closure_analysis.m"
                  }
#line 414 "closure_analysis.m"
                else
#line 415 "closure_analysis.m"
                  {
#line 415 "closure_analysis.m"
                    transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
#line 415 "closure_analysis.m"
                    transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
#line 415 "closure_analysis.m"
                  }
#line 417 "closure_analysis.m"
                /* direct tailcall eliminated */
#line 417 "closure_analysis.m"
                {
#line 417 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__HeadVar__3__tmp_copy_3 = transform_hlds__closure_analysis__V_57_57;
#line 417 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__HeadVar__4__tmp_copy_4 = transform_hlds__closure_analysis__Modes_44;
#line 417 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0__tmp_copy_5 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51;
#line 417 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0__tmp_copy_7 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52;

#line 417 "closure_analysis.m"
                  transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0__tmp_copy_7;
#line 417 "closure_analysis.m"
                  transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0__tmp_copy_5;
#line 417 "closure_analysis.m"
                  transform_hlds__closure_analysis__HeadVar__4_4 = transform_hlds__closure_analysis__HeadVar__4__tmp_copy_4;
#line 417 "closure_analysis.m"
                  transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__3__tmp_copy_3;
#line 417 "closure_analysis.m"
                }
#line 417 "closure_analysis.m"
                continue;
#line 405 "closure_analysis.m"
              }
#line 399 "closure_analysis.m"
          }
#line 399 "closure_analysis.m"
      }
#line 399 "closure_analysis.m"
      break;
#line 399 "closure_analysis.m"
    }
#line 394 "closure_analysis.m"
}

#line 278 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 278 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 278 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 278 "closure_analysis.m"
{
#line 278 "closure_analysis.m"
  {
#line 278 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 278 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv20_C_6;

#line 278 "closure_analysis.m"
    {
#line 278 "closure_analysis.m"
      transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv20_C_6);
    }
#line 278 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv20_C_6));
#line 278 "closure_analysis.m"
  }
#line 278 "closure_analysis.m"
}

#line 270 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
#line 270 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 270 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
#line 270 "closure_analysis.m"
{
#line 270 "closure_analysis.m"
  {
#line 270 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
#line 270 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 270 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv19_HeadVar__5_159;

#line 270 "closure_analysis.m"
    {
#line 270 "closure_analysis.m"
      transform_hlds__closure_analysis__conv19_HeadVar__5_159 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__270__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
#line 270 "closure_analysis.m"
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv19_HeadVar__5_159));
#line 270 "closure_analysis.m"
    return transform_hlds__closure_analysis__wrapper_arg_2;
#line 270 "closure_analysis.m"
  }
#line 270 "closure_analysis.m"
}

#line 367 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 367 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 367 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 367 "closure_analysis.m"
{
#line 367 "closure_analysis.m"
  {
#line 367 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 367 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv18_HeadVar__3_3;

#line 367 "closure_analysis.m"
    {
#line 367 "closure_analysis.m"
      transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv18_HeadVar__3_3);
    }
#line 367 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv18_HeadVar__3_3));
#line 367 "closure_analysis.m"
  }
#line 367 "closure_analysis.m"
}

#line 266 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 266 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 266 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 266 "closure_analysis.m"
{
#line 266 "closure_analysis.m"
  {
#line 266 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 266 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv16_STATE_VARIABLE_ClosureInfo_7;

#line 266 "closure_analysis.m"
    {
#line 266 "closure_analysis.m"
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv16_STATE_VARIABLE_ClosureInfo_7);
    }
#line 266 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv16_STATE_VARIABLE_ClosureInfo_7));
#line 266 "closure_analysis.m"
  }
#line 266 "closure_analysis.m"
}

#line 244 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 244 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 244 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 244 "closure_analysis.m"
{
#line 244 "closure_analysis.m"
  {
#line 244 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 244 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv14_HeadVar__4_169;

#line 244 "closure_analysis.m"
    {
#line 244 "closure_analysis.m"
      transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__257__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv14_HeadVar__4_169);
    }
#line 244 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv14_HeadVar__4_169));
#line 244 "closure_analysis.m"
  }
#line 244 "closure_analysis.m"
}

#line 334 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 334 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 334 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 334 "closure_analysis.m"
{
#line 334 "closure_analysis.m"
  {
#line 334 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 334 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv12_C_6;

#line 334 "closure_analysis.m"
    {
#line 334 "closure_analysis.m"
      transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv12_C_6);
    }
#line 334 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv12_C_6));
#line 334 "closure_analysis.m"
  }
#line 334 "closure_analysis.m"
}

#line 327 "closure_analysis.m"
static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
#line 327 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 327 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
#line 327 "closure_analysis.m"
{
#line 327 "closure_analysis.m"
  {
#line 327 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
#line 327 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 327 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv11_HeadVar__5_145;

#line 327 "closure_analysis.m"
    {
#line 327 "closure_analysis.m"
      transform_hlds__closure_analysis__conv11_HeadVar__5_145 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__327__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
#line 327 "closure_analysis.m"
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv11_HeadVar__5_145));
#line 327 "closure_analysis.m"
    return transform_hlds__closure_analysis__wrapper_arg_2;
#line 327 "closure_analysis.m"
  }
#line 327 "closure_analysis.m"
}

#line 182 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 182 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2,
#line 182 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
#line 182 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4)
#line 182 "closure_analysis.m"
{
#line 182 "closure_analysis.m"
  {
#line 182 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 182 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv9_Goal_10;
#line 182 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv8_STATE_VARIABLE_ClosureInfo_132;

#line 182 "closure_analysis.m"
    {
#line 182 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), &transform_hlds__closure_analysis__conv9_Goal_10, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3), &transform_hlds__closure_analysis__conv8_STATE_VARIABLE_ClosureInfo_132);
    }
#line 182 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv9_Goal_10));
#line 182 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__closure_analysis__conv8_STATE_VARIABLE_ClosureInfo_132));
#line 182 "closure_analysis.m"
  }
#line 182 "closure_analysis.m"
}

#line 375 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
#line 375 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 375 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 375 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2)
#line 375 "closure_analysis.m"
{
#line 375 "closure_analysis.m"
  {
#line 375 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 375 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 375 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv7_HeadVar__3_137;

#line 375 "closure_analysis.m"
    {
#line 375 "closure_analysis.m"
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__375__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), &transform_hlds__closure_analysis__conv7_HeadVar__3_137);
    }
#line 375 "closure_analysis.m"
    if (transform_hlds__closure_analysis__succeeded)
#line 375 "closure_analysis.m"
      {
#line 375 "closure_analysis.m"
        *transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv7_HeadVar__3_137));
#line 375 "closure_analysis.m"
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 375 "closure_analysis.m"
      }
#line 375 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 375 "closure_analysis.m"
  }
#line 375 "closure_analysis.m"
}

#line 302 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 302 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 302 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 302 "closure_analysis.m"
{
#line 302 "closure_analysis.m"
  {
#line 302 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 302 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv5_STATE_VARIABLE_ClosureInfo_7;

#line 302 "closure_analysis.m"
    {
#line 302 "closure_analysis.m"
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv5_STATE_VARIABLE_ClosureInfo_7);
    }
#line 302 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv5_STATE_VARIABLE_ClosureInfo_7));
#line 302 "closure_analysis.m"
  }
#line 302 "closure_analysis.m"
}

#line 301 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
#line 301 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 301 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
#line 301 "closure_analysis.m"
{
#line 301 "closure_analysis.m"
  {
#line 301 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 301 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 301 "closure_analysis.m"
    {
#line 301 "closure_analysis.m"
      return transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
#line 301 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 301 "closure_analysis.m"
  }
#line 301 "closure_analysis.m"
}

#line 226 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 226 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 226 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 226 "closure_analysis.m"
{
#line 226 "closure_analysis.m"
  {
#line 226 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 226 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ClosureInfo_7;

#line 226 "closure_analysis.m"
    {
#line 226 "closure_analysis.m"
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ClosureInfo_7);
    }
#line 226 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ClosureInfo_7));
#line 226 "closure_analysis.m"
  }
#line 226 "closure_analysis.m"
}

#line 204 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 204 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 204 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 204 "closure_analysis.m"
{
#line 204 "closure_analysis.m"
  {
#line 204 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 204 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__4_180;

#line 204 "closure_analysis.m"
    {
#line 204 "closure_analysis.m"
      transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__217__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_HeadVar__4_180);
    }
#line 204 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__4_180));
#line 204 "closure_analysis.m"
  }
#line 204 "closure_analysis.m"
}

#line 175 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Goal0_9,
#line 175 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__Goal_10,
#line 175 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
#line 175 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132)
#line 175 "closure_analysis.m"
{
#line 178 "closure_analysis.m"
  {
#line 178 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 178 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal0_9, (MR_Integer) 0)));
#line 178 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal0_9, (MR_Integer) 1)));

#line 186 "closure_analysis.m"
    if (((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 339 "closure_analysis.m"
      {
#line 339 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__NegatedGoal0_97 = (MR_Word) MR_body(((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12), (MR_Integer) 0);
#line 339 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__NegatedGoal_98;
#line 339 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__GoalExpr_223;
#line 340 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__V_99_99;

#line 340 "closure_analysis.m"
        {
#line 340 "closure_analysis.m"
          transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__NegatedGoal0_97, &transform_hlds__closure_analysis__NegatedGoal_98, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__V_99_99);
        }
#line 342 "closure_analysis.m"
        transform_hlds__closure_analysis__GoalExpr_223 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__closure_analysis__NegatedGoal_98);
#line 343 "closure_analysis.m"
        {
#line 343 "closure_analysis.m"
          MR_Word base;
#line 343 "closure_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "closure_analysis.m"
          *transform_hlds__closure_analysis__Goal_10 = base;
#line 343 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_223));
#line 343 "closure_analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 343 "closure_analysis.m"
        }
#line 339 "closure_analysis.m"
        *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 339 "closure_analysis.m"
      }
#line 186 "closure_analysis.m"
    else
#line 186 "closure_analysis.m"
      if (((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 187 "closure_analysis.m"
        {
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__TypeCtorInfo_239_239;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__CallPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 187 "closure_analysis.m"
          MR_Integer transform_hlds__closure_analysis__CallProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__CallArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__CallProcInfo_25;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__CallArgModes_26;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__InputArgs_27;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__OutputArgs_28;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__AddValues_29;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__Values_35;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__GoalInfo_36;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_174_174;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_175_175;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_182_182;
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 187 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 191 "closure_analysis.m"
          MR_Word transform_hlds__closure_analysis___CallPredInfo_24;
#line 221 "closure_analysis.m"
          MR_Box transform_hlds__closure_analysis__conv1_Values_35;
#line 226 "closure_analysis.m"
          MR_Box transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132;

#line 191 "closure_analysis.m"
          {
#line 191 "closure_analysis.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__CallPredId_18, transform_hlds__closure_analysis__CallProcId_19, &transform_hlds__closure_analysis___CallPredInfo_24, &transform_hlds__closure_analysis__CallProcInfo_25);
          }
#line 193 "closure_analysis.m"
          {
#line 193 "closure_analysis.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__closure_analysis__CallProcInfo_25, &transform_hlds__closure_analysis__CallArgModes_26);
          }
#line 3868 "transform_hlds.closure_analysis.c"
          transform_hlds__closure_analysis__TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 199 "closure_analysis.m"
          {
#line 199 "closure_analysis.m"
            transform_hlds__closure_analysis__V_174_174 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239);
          }
#line 199 "closure_analysis.m"
          {
#line 199 "closure_analysis.m"
            transform_hlds__closure_analysis__V_175_175 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239);
          }
#line 198 "closure_analysis.m"
          {
#line 198 "closure_analysis.m"
            transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__CallArgs_20, transform_hlds__closure_analysis__CallArgModes_26, transform_hlds__closure_analysis__V_174_174, &transform_hlds__closure_analysis__InputArgs_27, transform_hlds__closure_analysis__V_175_175, &transform_hlds__closure_analysis__OutputArgs_28);
          }
#line 204 "closure_analysis.m"
          {
#line 204 "closure_analysis.m"
            transform_hlds__closure_analysis__AddValues_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 204 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
#line 204 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1));
#line 204 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 204 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 3) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
#line 204 "closure_analysis.m"
          }
#line 221 "closure_analysis.m"
          {
#line 221 "closure_analysis.m"
            transform_hlds__closure_analysis__V_182_182 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2]);
          }
#line 221 "closure_analysis.m"
          {
#line 221 "closure_analysis.m"
            parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], transform_hlds__closure_analysis__AddValues_29, transform_hlds__closure_analysis__InputArgs_27, ((MR_Box) (transform_hlds__closure_analysis__V_182_182)), &transform_hlds__closure_analysis__conv1_Values_35);
          }
#line 221 "closure_analysis.m"
          transform_hlds__closure_analysis__Values_35 = ((MR_Word) transform_hlds__closure_analysis__conv1_Values_35);
#line 222 "closure_analysis.m"
          {
#line 222 "closure_analysis.m"
            hlds__hlds_goal__goal_info_set_ho_values_3_p_0(transform_hlds__closure_analysis__Values_35, transform_hlds__closure_analysis__GoalInfo0_13, &transform_hlds__closure_analysis__GoalInfo_36);
          }
#line 226 "closure_analysis.m"
          {
#line 226 "closure_analysis.m"
            parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[6], transform_hlds__closure_analysis__OutputArgs_28, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132);
          }
#line 226 "closure_analysis.m"
          *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132);
#line 227 "closure_analysis.m"
          {
#line 227 "closure_analysis.m"
            MR_Word base;
#line 227 "closure_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "closure_analysis.m"
            *transform_hlds__closure_analysis__Goal_10 = base;
#line 227 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr0_12));
#line 227 "closure_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo_36));
#line 227 "closure_analysis.m"
          }
#line 187 "closure_analysis.m"
        }
#line 186 "closure_analysis.m"
      else
#line 186 "closure_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 282 "closure_analysis.m"
          {
#line 282 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__Unification_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 282 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 282 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 282 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 282 "closure_analysis.m"
            MR_Word transform_hlds__closure_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 295 "closure_analysis.m"
            if (((MR_tag((MR_Word) transform_hlds__closure_analysis__Unification_65)) == (MR_mktag((MR_Integer) 2))))
#line 304 "closure_analysis.m"
              {
#line 304 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__LHS_215 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
#line 304 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__RHS_216 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));

#line 305 "closure_analysis.m"
                {
#line 305 "closure_analysis.m"
                  transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__LHS_215);
                }
#line 316 "closure_analysis.m"
                if (transform_hlds__closure_analysis__succeeded)
#line 313 "closure_analysis.m"
                  {
#line 313 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__TypeInfo_280_280;
#line 313 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__TypeCtorInfo_281_281;
#line 313 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__Values_212;
#line 314 "closure_analysis.m"
                    MR_Box transform_hlds__closure_analysis__conv4_Values_212;

#line 309 "closure_analysis.m"
                    {
#line 309 "closure_analysis.m"
                      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__RHS_216);
                    }
#line 311 "closure_analysis.m"
                    if (transform_hlds__closure_analysis__succeeded)
#line 310 "closure_analysis.m"
                      {
#line 310 "closure_analysis.m"
                      }
#line 311 "closure_analysis.m"
                    else
#line 312 "closure_analysis.m"
                      {
#line 312 "closure_analysis.m"
                        {
#line 312 "closure_analysis.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "not a higher-order var");
#line 312 "closure_analysis.m"
                          return;
                        }
#line 312 "closure_analysis.m"
                      }
#line 4007 "transform_hlds.closure_analysis.c"
                    transform_hlds__closure_analysis__TypeInfo_280_280 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
#line 4009 "transform_hlds.closure_analysis.c"
                    transform_hlds__closure_analysis__TypeCtorInfo_281_281 = (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
#line 314 "closure_analysis.m"
                    {
#line 314 "closure_analysis.m"
                      transform_hlds__closure_analysis__conv4_Values_212 = mercury__map__lookup_2_f_0(transform_hlds__closure_analysis__TypeInfo_280_280, transform_hlds__closure_analysis__TypeCtorInfo_281_281, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__RHS_216)));
                    }
#line 314 "closure_analysis.m"
                    transform_hlds__closure_analysis__Values_212 = ((MR_Word) transform_hlds__closure_analysis__conv4_Values_212);
#line 315 "closure_analysis.m"
                    {
#line 315 "closure_analysis.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__closure_analysis__TypeInfo_280_280, transform_hlds__closure_analysis__TypeCtorInfo_281_281, ((MR_Box) (transform_hlds__closure_analysis__LHS_215)), ((MR_Box) (transform_hlds__closure_analysis__Values_212)), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                    }
#line 313 "closure_analysis.m"
                  }
#line 316 "closure_analysis.m"
                else
#line 316 "closure_analysis.m"
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 304 "closure_analysis.m"
              }
#line 295 "closure_analysis.m"
            else
#line 295 "closure_analysis.m"
              if (((MR_tag((MR_Word) transform_hlds__closure_analysis__Unification_65)) == (MR_mktag((MR_Integer) 0))))
#line 284 "closure_analysis.m"
                {
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__LHS_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__RHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 2)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 3)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 4)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 5)));
#line 284 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 6)));
#line 292 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__ShroudedPPId_74;

#line 286 "closure_analysis.m"
                  transform_hlds__closure_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__closure_analysis__RHS_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__RHS_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 286 "closure_analysis.m"
                  if (transform_hlds__closure_analysis__succeeded)
#line 286 "closure_analysis.m"
                    {
#line 286 "closure_analysis.m"
                      transform_hlds__closure_analysis__ShroudedPPId_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__RHS_68, (MR_Integer) 1)));
#line 289 "closure_analysis.m"
                      {
#line 289 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__PPId_76;
#line 289 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__HO_Value_77;
#line 289 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__V_156_156;

#line 289 "closure_analysis.m"
                        {
#line 289 "closure_analysis.m"
                          transform_hlds__closure_analysis__PPId_76 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__closure_analysis__ShroudedPPId_74);
                        }
#line 290 "closure_analysis.m"
                        {
#line 290 "closure_analysis.m"
                          transform_hlds__closure_analysis__HO_Value_77 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__closure_analysis__PPId_76)));
                        }
#line 291 "closure_analysis.m"
                        {
#line 291 "closure_analysis.m"
                          transform_hlds__closure_analysis__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "closure_analysis.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__V_156_156, 0) = ((MR_Box) (transform_hlds__closure_analysis__HO_Value_77));
#line 291 "closure_analysis.m"
                        }
#line 291 "closure_analysis.m"
                        {
#line 291 "closure_analysis.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (transform_hlds__closure_analysis__LHS_67)), ((MR_Box) (transform_hlds__closure_analysis__V_156_156)), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                        }
#line 289 "closure_analysis.m"
                      }
#line 286 "closure_analysis.m"
                    }
#line 286 "closure_analysis.m"
                  else
#line 292 "closure_analysis.m"
                    *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 284 "closure_analysis.m"
                }
#line 295 "closure_analysis.m"
              else
#line 295 "closure_analysis.m"
                if (((MR_tag((MR_Word) transform_hlds__closure_analysis__Unification_65)) == (MR_mktag((MR_Integer) 1))))
#line 296 "closure_analysis.m"
                  {
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__TypeInfo_274_274 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__Args_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 2)));
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__HO_Args_84;
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_153_153;
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 3)));
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 4)));
#line 296 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 5)));
#line 302 "closure_analysis.m"
                    MR_Box transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132;

#line 301 "closure_analysis.m"
                    {
#line 301 "closure_analysis.m"
                      transform_hlds__closure_analysis__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
#line 301 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3));
#line 301 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
#line 301 "closure_analysis.m"
                    }
#line 301 "closure_analysis.m"
                    {
#line 301 "closure_analysis.m"
                      transform_hlds__closure_analysis__HO_Args_84 = mercury__list__filter_2_f_0(transform_hlds__closure_analysis__TypeInfo_274_274, transform_hlds__closure_analysis__V_153_153, transform_hlds__closure_analysis__Args_80);
                    }
#line 302 "closure_analysis.m"
                    {
#line 302 "closure_analysis.m"
                      mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_274_274, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[7], transform_hlds__closure_analysis__HO_Args_84, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132);
                    }
#line 302 "closure_analysis.m"
                    *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132);
#line 296 "closure_analysis.m"
                  }
#line 295 "closure_analysis.m"
                else
#line 295 "closure_analysis.m"
                  if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__Unification_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 322 "closure_analysis.m"
                    *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 295 "closure_analysis.m"
                  else
#line 320 "closure_analysis.m"
                    *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 324 "closure_analysis.m"
            *transform_hlds__closure_analysis__Goal_10 = transform_hlds__closure_analysis__Goal0_9;
#line 282 "closure_analysis.m"
          }
#line 186 "closure_analysis.m"
        else
#line 186 "closure_analysis.m"
          if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 371 "closure_analysis.m"
            {
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__ForeignHOArgs_121;
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__OutputForeignHOArgs_129;
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__Args_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 371 "closure_analysis.m"
              MR_Integer transform_hlds__closure_analysis__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis___ExtraArgs_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 6)));
#line 371 "closure_analysis.m"
              MR_Word transform_hlds__closure_analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 7)));

#line 375 "closure_analysis.m"
              {
#line 375 "closure_analysis.m"
                transform_hlds__closure_analysis__ForeignHOArgs_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 375 "closure_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[1]));
#line 375 "closure_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5));
#line 375 "closure_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 375 "closure_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 3) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
#line 375 "closure_analysis.m"
              }
#line 384 "closure_analysis.m"
              {
#line 384 "closure_analysis.m"
                mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[4], transform_hlds__closure_analysis__ForeignHOArgs_121, transform_hlds__closure_analysis__Args_232, &transform_hlds__closure_analysis__OutputForeignHOArgs_129);
              }
#line 385 "closure_analysis.m"
              {
#line 385 "closure_analysis.m"
                mercury__map__det_insert_from_assoc_list_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__OutputForeignHOArgs_129, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
              }
#line 386 "closure_analysis.m"
              *transform_hlds__closure_analysis__Goal_10 = transform_hlds__closure_analysis__Goal0_9;
#line 371 "closure_analysis.m"
            }
#line 186 "closure_analysis.m"
          else
#line 186 "closure_analysis.m"
            if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 181 "closure_analysis.m"
              {
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__TypeCtorInfo_237_237;
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__Goals_16;
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__GoalExpr_17;
#line 181 "closure_analysis.m"
                MR_Word transform_hlds__closure_analysis__V_185_185;
#line 182 "closure_analysis.m"
                MR_Box transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132;

#line 182 "closure_analysis.m"
                {
#line 182 "closure_analysis.m"
                  transform_hlds__closure_analysis__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 182 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
#line 182 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6));
#line 182 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 182 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
#line 182 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
#line 182 "closure_analysis.m"
                }
#line 4263 "transform_hlds.closure_analysis.c"
                transform_hlds__closure_analysis__TypeCtorInfo_237_237 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 182 "closure_analysis.m"
                {
#line 182 "closure_analysis.m"
                  mercury__list__map_foldl_5_p_0(transform_hlds__closure_analysis__TypeCtorInfo_237_237, transform_hlds__closure_analysis__TypeCtorInfo_237_237, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], transform_hlds__closure_analysis__V_185_185, transform_hlds__closure_analysis__Goals0_15, &transform_hlds__closure_analysis__Goals_16, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132);
                }
#line 182 "closure_analysis.m"
                *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132);
#line 184 "closure_analysis.m"
                {
#line 184 "closure_analysis.m"
                  transform_hlds__closure_analysis__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 184 "closure_analysis.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 184 "closure_analysis.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__closure_analysis__ConjType_14));
#line 184 "closure_analysis.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__closure_analysis__Goals_16));
#line 184 "closure_analysis.m"
                }
#line 185 "closure_analysis.m"
                {
#line 185 "closure_analysis.m"
                  MR_Word base;
#line 185 "closure_analysis.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "closure_analysis.m"
                  *transform_hlds__closure_analysis__Goal_10 = base;
#line 185 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_17));
#line 185 "closure_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 185 "closure_analysis.m"
                }
#line 181 "closure_analysis.m"
              }
#line 186 "closure_analysis.m"
            else
#line 186 "closure_analysis.m"
              if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 326 "closure_analysis.m"
                {
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__TypeCtorInfo_282_282;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__TypeInfo_284_284;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__ProcessDisjunct_90;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__DisjunctsAndInfos_95;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__DisjunctsInfo_96;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__V_147_147;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__Goals0_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__Goals_221;
#line 326 "closure_analysis.m"
                  MR_Word transform_hlds__closure_analysis__GoalExpr_222;
#line 334 "closure_analysis.m"
                  MR_Box transform_hlds__closure_analysis__conv13_STATE_VARIABLE_ClosureInfo_132;

#line 327 "closure_analysis.m"
                  {
#line 327 "closure_analysis.m"
                    transform_hlds__closure_analysis__ProcessDisjunct_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7));
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
#line 327 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 5) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
#line 327 "closure_analysis.m"
                  }
#line 4345 "transform_hlds.closure_analysis.c"
                  transform_hlds__closure_analysis__TypeCtorInfo_282_282 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 332 "closure_analysis.m"
                  {
#line 332 "closure_analysis.m"
                    transform_hlds__closure_analysis__DisjunctsAndInfos_95 = mercury__list__map_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_282_282, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[3], transform_hlds__closure_analysis__ProcessDisjunct_90, transform_hlds__closure_analysis__Goals0_220);
                  }
#line 4352 "transform_hlds.closure_analysis.c"
                  transform_hlds__closure_analysis__TypeInfo_284_284 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
#line 333 "closure_analysis.m"
                  {
#line 333 "closure_analysis.m"
                    mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_282_282, transform_hlds__closure_analysis__TypeInfo_284_284, transform_hlds__closure_analysis__DisjunctsAndInfos_95, &transform_hlds__closure_analysis__Goals_221, &transform_hlds__closure_analysis__DisjunctsInfo_96);
                  }
#line 335 "closure_analysis.m"
                  {
#line 335 "closure_analysis.m"
                    transform_hlds__closure_analysis__V_147_147 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
                  }
#line 334 "closure_analysis.m"
                  {
#line 334 "closure_analysis.m"
                    mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_284_284, transform_hlds__closure_analysis__TypeInfo_284_284, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[8], transform_hlds__closure_analysis__DisjunctsInfo_96, ((MR_Box) (transform_hlds__closure_analysis__V_147_147)), &transform_hlds__closure_analysis__conv13_STATE_VARIABLE_ClosureInfo_132);
                  }
#line 334 "closure_analysis.m"
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv13_STATE_VARIABLE_ClosureInfo_132);
#line 336 "closure_analysis.m"
                  {
#line 336 "closure_analysis.m"
                    transform_hlds__closure_analysis__GoalExpr_222 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "closure_analysis.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_222, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 336 "closure_analysis.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_222, 1) = ((MR_Box) (transform_hlds__closure_analysis__Goals_221));
#line 336 "closure_analysis.m"
                  }
#line 337 "closure_analysis.m"
                  {
#line 337 "closure_analysis.m"
                    MR_Word base;
#line 337 "closure_analysis.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "closure_analysis.m"
                    *transform_hlds__closure_analysis__Goal_10 = base;
#line 337 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_222));
#line 337 "closure_analysis.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 337 "closure_analysis.m"
                  }
#line 326 "closure_analysis.m"
                }
#line 186 "closure_analysis.m"
              else
#line 186 "closure_analysis.m"
                if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 229 "closure_analysis.m"
                  {
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__TypeCtorInfo_251_251 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__Details_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__GCallArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__GCallModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__InputArgs0_42;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_163_163;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_164_164;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_171_171;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__InputArgs_203;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__OutputArgs_204;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__AddValues_205;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__Values_208;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__GoalInfo_209;
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 229 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 241 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__CalledClosure0_43;
#line 239 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_44_44;
#line 239 "closure_analysis.m"
                    MR_Word transform_hlds__closure_analysis__V_45_45;
#line 239 "closure_analysis.m"
                    MR_Integer transform_hlds__closure_analysis__V_46_46;
#line 261 "closure_analysis.m"
                    MR_Box transform_hlds__closure_analysis__conv15_Values_208;
#line 266 "closure_analysis.m"
                    MR_Box transform_hlds__closure_analysis__conv17_STATE_VARIABLE_ClosureInfo_132;

#line 231 "closure_analysis.m"
                    {
#line 231 "closure_analysis.m"
                      transform_hlds__closure_analysis__V_163_163 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251);
                    }
#line 231 "closure_analysis.m"
                    {
#line 231 "closure_analysis.m"
                      transform_hlds__closure_analysis__V_164_164 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251);
                    }
#line 230 "closure_analysis.m"
                    {
#line 230 "closure_analysis.m"
                      transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__GCallArgs_38, transform_hlds__closure_analysis__GCallModes_39, transform_hlds__closure_analysis__V_163_163, &transform_hlds__closure_analysis__InputArgs0_42, transform_hlds__closure_analysis__V_164_164, &transform_hlds__closure_analysis__OutputArgs_204);
                    }
#line 239 "closure_analysis.m"
                    transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__Details_37)) == (MR_mktag((MR_Integer) 0)));
#line 239 "closure_analysis.m"
                    if (transform_hlds__closure_analysis__succeeded)
#line 239 "closure_analysis.m"
                      {
#line 239 "closure_analysis.m"
                        transform_hlds__closure_analysis__CalledClosure0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 0)));
#line 239 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 1)));
#line 239 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 2)));
#line 239 "closure_analysis.m"
                        transform_hlds__closure_analysis__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 3)));
#line 240 "closure_analysis.m"
                        {
#line 240 "closure_analysis.m"
                          parse_tree__set_of_var__insert_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, transform_hlds__closure_analysis__CalledClosure0_43, transform_hlds__closure_analysis__InputArgs0_42, &transform_hlds__closure_analysis__InputArgs_203);
                        }
#line 239 "closure_analysis.m"
                      }
#line 239 "closure_analysis.m"
                    else
#line 242 "closure_analysis.m"
                      transform_hlds__closure_analysis__InputArgs_203 = transform_hlds__closure_analysis__InputArgs0_42;
#line 244 "closure_analysis.m"
                    {
#line 244 "closure_analysis.m"
                      transform_hlds__closure_analysis__AddValues_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 244 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
#line 244 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9));
#line 244 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 244 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 3) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
#line 244 "closure_analysis.m"
                    }
#line 261 "closure_analysis.m"
                    {
#line 261 "closure_analysis.m"
                      transform_hlds__closure_analysis__V_171_171 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2]);
                    }
#line 261 "closure_analysis.m"
                    {
#line 261 "closure_analysis.m"
                      parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], transform_hlds__closure_analysis__AddValues_205, transform_hlds__closure_analysis__InputArgs_203, ((MR_Box) (transform_hlds__closure_analysis__V_171_171)), &transform_hlds__closure_analysis__conv15_Values_208);
                    }
#line 261 "closure_analysis.m"
                    transform_hlds__closure_analysis__Values_208 = ((MR_Word) transform_hlds__closure_analysis__conv15_Values_208);
#line 262 "closure_analysis.m"
                    {
#line 262 "closure_analysis.m"
                      hlds__hlds_goal__goal_info_set_ho_values_3_p_0(transform_hlds__closure_analysis__Values_208, transform_hlds__closure_analysis__GoalInfo0_13, &transform_hlds__closure_analysis__GoalInfo_209);
                    }
#line 266 "closure_analysis.m"
                    {
#line 266 "closure_analysis.m"
                      parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[9], transform_hlds__closure_analysis__OutputArgs_204, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv17_STATE_VARIABLE_ClosureInfo_132);
                    }
#line 266 "closure_analysis.m"
                    *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv17_STATE_VARIABLE_ClosureInfo_132);
#line 267 "closure_analysis.m"
                    {
#line 267 "closure_analysis.m"
                      MR_Word base;
#line 267 "closure_analysis.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "closure_analysis.m"
                      *transform_hlds__closure_analysis__Goal_10 = base;
#line 267 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr0_12));
#line 267 "closure_analysis.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo_209));
#line 267 "closure_analysis.m"
                    }
#line 229 "closure_analysis.m"
                  }
#line 186 "closure_analysis.m"
                else
#line 186 "closure_analysis.m"
                  if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 360 "closure_analysis.m"
                    {
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__ExistQVars_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Cond0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Then0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Else0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Cond_109;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__CondInfo_110;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Then_111;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__CondThenInfo_112;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__Else_113;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__ElseInfo_114;
#line 360 "closure_analysis.m"
                      MR_Word transform_hlds__closure_analysis__GoalExpr_225;

#line 361 "closure_analysis.m"
                      {
#line 361 "closure_analysis.m"
                        transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Cond0_106, &transform_hlds__closure_analysis__Cond_109, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__CondInfo_110);
                      }
#line 363 "closure_analysis.m"
                      {
#line 363 "closure_analysis.m"
                        transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Then0_107, &transform_hlds__closure_analysis__Then_111, transform_hlds__closure_analysis__CondInfo_110, &transform_hlds__closure_analysis__CondThenInfo_112);
                      }
#line 365 "closure_analysis.m"
                      {
#line 365 "closure_analysis.m"
                        transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Else0_108, &transform_hlds__closure_analysis__Else_113, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__ElseInfo_114);
                      }
#line 367 "closure_analysis.m"
                      {
#line 367 "closure_analysis.m"
                        mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[10], transform_hlds__closure_analysis__CondThenInfo_112, transform_hlds__closure_analysis__ElseInfo_114, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                      }
#line 368 "closure_analysis.m"
                      {
#line 368 "closure_analysis.m"
                        transform_hlds__closure_analysis__GoalExpr_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 368 "closure_analysis.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 368 "closure_analysis.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 1) = ((MR_Box) (transform_hlds__closure_analysis__ExistQVars_105));
#line 368 "closure_analysis.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 2) = ((MR_Box) (transform_hlds__closure_analysis__Cond_109));
#line 368 "closure_analysis.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 3) = ((MR_Box) (transform_hlds__closure_analysis__Then_111));
#line 368 "closure_analysis.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 4) = ((MR_Box) (transform_hlds__closure_analysis__Else_113));
#line 368 "closure_analysis.m"
                      }
#line 369 "closure_analysis.m"
                      {
#line 369 "closure_analysis.m"
                        MR_Word base;
#line 369 "closure_analysis.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "closure_analysis.m"
                        *transform_hlds__closure_analysis__Goal_10 = base;
#line 369 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_225));
#line 369 "closure_analysis.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 369 "closure_analysis.m"
                      }
#line 360 "closure_analysis.m"
                    }
#line 186 "closure_analysis.m"
                  else
#line 186 "closure_analysis.m"
                    if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 345 "closure_analysis.m"
                      {
#line 345 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 345 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 345 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__SubGoal_104;
#line 345 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__GoalExpr_224;
#line 347 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__FGT_103;
#line 347 "closure_analysis.m"
                        MR_Word transform_hlds__closure_analysis__V_102_102;

#line 347 "closure_analysis.m"
                        transform_hlds__closure_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__closure_analysis__Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 347 "closure_analysis.m"
                        if (transform_hlds__closure_analysis__succeeded)
#line 347 "closure_analysis.m"
                          {
#line 347 "closure_analysis.m"
                            transform_hlds__closure_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 1)));
#line 347 "closure_analysis.m"
                            transform_hlds__closure_analysis__FGT_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 2)));
#line 349 "closure_analysis.m"
                            if ((transform_hlds__closure_analysis__FGT_103 == (MR_Integer) 1))
#line 348 "closure_analysis.m"
                              transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 349 "closure_analysis.m"
                            else
#line 349 "closure_analysis.m"
                              if ((transform_hlds__closure_analysis__FGT_103 == (MR_Integer) 2))
#line 349 "closure_analysis.m"
                                transform_hlds__closure_analysis__succeeded = MR_TRUE;
#line 349 "closure_analysis.m"
                              else
#line 349 "closure_analysis.m"
                                transform_hlds__closure_analysis__succeeded = MR_FALSE;
#line 347 "closure_analysis.m"
                          }
#line 353 "closure_analysis.m"
                        if (transform_hlds__closure_analysis__succeeded)
#line 352 "closure_analysis.m"
                          {
#line 352 "closure_analysis.m"
                            transform_hlds__closure_analysis__SubGoal_104 = transform_hlds__closure_analysis__SubGoal0_101;
#line 352 "closure_analysis.m"
                            *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
#line 352 "closure_analysis.m"
                          }
#line 353 "closure_analysis.m"
                        else
#line 354 "closure_analysis.m"
                          {
#line 354 "closure_analysis.m"
                            transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__SubGoal0_101, &transform_hlds__closure_analysis__SubGoal_104, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                          }
#line 357 "closure_analysis.m"
                        {
#line 357 "closure_analysis.m"
                          transform_hlds__closure_analysis__GoalExpr_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "closure_analysis.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 357 "closure_analysis.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 1) = ((MR_Box) (transform_hlds__closure_analysis__Reason_100));
#line 357 "closure_analysis.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 2) = ((MR_Box) (transform_hlds__closure_analysis__SubGoal_104));
#line 357 "closure_analysis.m"
                        }
#line 358 "closure_analysis.m"
                        {
#line 358 "closure_analysis.m"
                          MR_Word base;
#line 358 "closure_analysis.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "closure_analysis.m"
                          *transform_hlds__closure_analysis__Goal_10 = base;
#line 358 "closure_analysis.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_224));
#line 358 "closure_analysis.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 358 "closure_analysis.m"
                        }
#line 345 "closure_analysis.m"
                      }
#line 186 "closure_analysis.m"
                    else
#line 186 "closure_analysis.m"
                      if (((((MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 388 "closure_analysis.m"
                        {
#line 389 "closure_analysis.m"
                          {
#line 389 "closure_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "shorthand");
#line 389 "closure_analysis.m"
                            return;
                          }
#line 388 "closure_analysis.m"
                        }
#line 186 "closure_analysis.m"
                      else
#line 269 "closure_analysis.m"
                        {
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__TypeCtorInfo_263_263;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__TypeInfo_265_265;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__SwitchVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__SwitchCanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__ProcessCase_51;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__CasesAndInfos_59;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__Cases_60;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__CasesInfo_61;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__V_161_161;
#line 269 "closure_analysis.m"
                          MR_Word transform_hlds__closure_analysis__GoalExpr_211;
#line 278 "closure_analysis.m"
                          MR_Box transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132;

#line 270 "closure_analysis.m"
                          {
#line 270 "closure_analysis.m"
                            transform_hlds__closure_analysis__ProcessCase_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1]));
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12));
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
#line 270 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 5) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
#line 270 "closure_analysis.m"
                          }
#line 4773 "transform_hlds.closure_analysis.c"
                          transform_hlds__closure_analysis__TypeCtorInfo_263_263 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 276 "closure_analysis.m"
                          {
#line 276 "closure_analysis.m"
                            transform_hlds__closure_analysis__CasesAndInfos_59 = mercury__list__map_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_263_263, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[2], transform_hlds__closure_analysis__ProcessCase_51, transform_hlds__closure_analysis__Cases0_50);
                          }
#line 4780 "transform_hlds.closure_analysis.c"
                          transform_hlds__closure_analysis__TypeInfo_265_265 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
#line 277 "closure_analysis.m"
                          {
#line 277 "closure_analysis.m"
                            mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_263_263, transform_hlds__closure_analysis__TypeInfo_265_265, transform_hlds__closure_analysis__CasesAndInfos_59, &transform_hlds__closure_analysis__Cases_60, &transform_hlds__closure_analysis__CasesInfo_61);
                          }
#line 278 "closure_analysis.m"
                          {
#line 278 "closure_analysis.m"
                            transform_hlds__closure_analysis__V_161_161 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
                          }
#line 278 "closure_analysis.m"
                          {
#line 278 "closure_analysis.m"
                            mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_265_265, transform_hlds__closure_analysis__TypeInfo_265_265, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[11], transform_hlds__closure_analysis__CasesInfo_61, ((MR_Box) (transform_hlds__closure_analysis__V_161_161)), &transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132);
                          }
#line 278 "closure_analysis.m"
                          *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132);
#line 279 "closure_analysis.m"
                          {
#line 279 "closure_analysis.m"
                            transform_hlds__closure_analysis__GoalExpr_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 279 "closure_analysis.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 279 "closure_analysis.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 1) = ((MR_Box) (transform_hlds__closure_analysis__SwitchVar_48));
#line 279 "closure_analysis.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 2) = ((MR_Box) (transform_hlds__closure_analysis__SwitchCanFail_49));
#line 279 "closure_analysis.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 3) = ((MR_Box) (transform_hlds__closure_analysis__Cases_60));
#line 279 "closure_analysis.m"
                          }
#line 280 "closure_analysis.m"
                          {
#line 280 "closure_analysis.m"
                            MR_Word base;
#line 280 "closure_analysis.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "closure_analysis.m"
                            *transform_hlds__closure_analysis__Goal_10 = base;
#line 280 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_211));
#line 280 "closure_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
#line 280 "closure_analysis.m"
                          }
#line 269 "closure_analysis.m"
                        }
#line 178 "closure_analysis.m"
  }
#line 175 "closure_analysis.m"
}

#line 120 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 120 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 120 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
#line 120 "closure_analysis.m"
{
#line 120 "closure_analysis.m"
  {
#line 120 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 120 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7;

#line 120 "closure_analysis.m"
    {
#line 120 "closure_analysis.m"
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7);
    }
#line 120 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7));
#line 120 "closure_analysis.m"
  }
#line 120 "closure_analysis.m"
}

#line 119 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
#line 119 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 119 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
#line 119 "closure_analysis.m"
{
#line 119 "closure_analysis.m"
  {
#line 119 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 119 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

#line 119 "closure_analysis.m"
    {
#line 119 "closure_analysis.m"
      return transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
#line 119 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 119 "closure_analysis.m"
  }
#line 119 "closure_analysis.m"
}

#line 144 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Debug_7,
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__PPId_8,
#line 144 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22,
#line 144 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23)
#line 144 "closure_analysis.m"
{
#line 147 "closure_analysis.m"
  {
#line 147 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__TypeCtorInfo_19_44;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__PredInfo_11;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__ProcInfo0_12;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__HeadVars_13;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__VarTypes_14;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__ArgModes_15;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__ClosureInfo0_16;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Body0_17;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Body_18;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__ProcInfo_20;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Inputs0_36;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Inputs_38;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_39_39;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_40_40;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_41_41;
#line 147 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_43_43;
#line 117 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis___Outputs_37;
#line 120 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv1_ClosureInfo0_16;
#line 157 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis___ClosureInfo_19;

#line 148 "closure_analysis.m"
    {
#line 148 "closure_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__PPId_8, &transform_hlds__closure_analysis__PredInfo_11, &transform_hlds__closure_analysis__ProcInfo0_12);
    }
#line 149 "closure_analysis.m"
    {
#line 149 "closure_analysis.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__HeadVars_13);
    }
#line 150 "closure_analysis.m"
    {
#line 150 "closure_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__VarTypes_14);
    }
#line 151 "closure_analysis.m"
    {
#line 151 "closure_analysis.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__ArgModes_15);
    }
#line 4970 "transform_hlds.closure_analysis.c"
    transform_hlds__closure_analysis__TypeCtorInfo_19_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 118 "closure_analysis.m"
    {
#line 118 "closure_analysis.m"
      transform_hlds__closure_analysis__V_39_39 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44);
    }
#line 118 "closure_analysis.m"
    {
#line 118 "closure_analysis.m"
      transform_hlds__closure_analysis__V_40_40 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44);
    }
#line 117 "closure_analysis.m"
    {
#line 117 "closure_analysis.m"
      transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__VarTypes_14, transform_hlds__closure_analysis__HeadVars_13, transform_hlds__closure_analysis__ArgModes_15, transform_hlds__closure_analysis__V_39_39, &transform_hlds__closure_analysis__Inputs0_36, transform_hlds__closure_analysis__V_40_40, &transform_hlds__closure_analysis___Outputs_37);
    }
#line 119 "closure_analysis.m"
    {
#line 119 "closure_analysis.m"
      transform_hlds__closure_analysis__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 119 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
#line 119 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1));
#line 119 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 119 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_14));
#line 119 "closure_analysis.m"
    }
#line 119 "closure_analysis.m"
    {
#line 119 "closure_analysis.m"
      transform_hlds__closure_analysis__Inputs_38 = parse_tree__set_of_var__filter_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44, transform_hlds__closure_analysis__V_41_41, transform_hlds__closure_analysis__Inputs0_36);
    }
#line 120 "closure_analysis.m"
    {
#line 120 "closure_analysis.m"
      transform_hlds__closure_analysis__V_43_43 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
    }
#line 120 "closure_analysis.m"
    {
#line 120 "closure_analysis.m"
      parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[5], transform_hlds__closure_analysis__Inputs_38, ((MR_Box) (transform_hlds__closure_analysis__V_43_43)), &transform_hlds__closure_analysis__conv1_ClosureInfo0_16);
    }
#line 120 "closure_analysis.m"
    transform_hlds__closure_analysis__ClosureInfo0_16 = ((MR_Word) transform_hlds__closure_analysis__conv1_ClosureInfo0_16);
#line 154 "closure_analysis.m"
    {
#line 154 "closure_analysis.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Analysing closures in ", transform_hlds__closure_analysis__PPId_8, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22);
    }
#line 156 "closure_analysis.m"
    {
#line 156 "closure_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__Body0_17);
    }
#line 157 "closure_analysis.m"
    {
#line 157 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_14, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__Body0_17, &transform_hlds__closure_analysis__Body_18, transform_hlds__closure_analysis__ClosureInfo0_16, &transform_hlds__closure_analysis___ClosureInfo_19);
    }
#line 167 "closure_analysis.m"
    {
#line 167 "closure_analysis.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__closure_analysis__Body_18, transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__ProcInfo_20);
    }
#line 164 "closure_analysis.m"
    if ((transform_hlds__closure_analysis__Debug_7 == (MR_Integer) 0))
#line 165 "closure_analysis.m"
      {
#line 165 "closure_analysis.m"
      }
#line 164 "closure_analysis.m"
    else
#line 160 "closure_analysis.m"
      {
#line 160 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__Varset_21;
#line 160 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__GoalExpr_57;
#line 160 "closure_analysis.m"
        MR_Word transform_hlds__closure_analysis__GoalInfo_58;

#line 161 "closure_analysis.m"
        {
#line 161 "closure_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__closure_analysis__ProcInfo_20, &transform_hlds__closure_analysis__Varset_21);
        }
#line 447 "closure_analysis.m"
        transform_hlds__closure_analysis__GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Body_18, (MR_Integer) 0)));
#line 447 "closure_analysis.m"
        transform_hlds__closure_analysis__GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Body_18, (MR_Integer) 1)));
#line 448 "closure_analysis.m"
        {
#line 448 "closure_analysis.m"
          transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(transform_hlds__closure_analysis__Varset_21, transform_hlds__closure_analysis__GoalExpr_57, transform_hlds__closure_analysis__GoalInfo_58);
        }
#line 163 "closure_analysis.m"
        {
#line 163 "closure_analysis.m"
          mercury__io__flush_output_2_p_0();
        }
#line 160 "closure_analysis.m"
      }
#line 168 "closure_analysis.m"
    {
#line 168 "closure_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__closure_analysis__PPId_8, transform_hlds__closure_analysis__PredInfo_11, transform_hlds__closure_analysis__ProcInfo_20, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23);
#line 168 "closure_analysis.m"
      return;
    }
#line 147 "closure_analysis.m"
  }
#line 144 "closure_analysis.m"
}

#line 133 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
#line 133 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Var_4,
#line 133 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6,
#line 133 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7)
#line 133 "closure_analysis.m"
{
#line 136 "closure_analysis.m"
  {
#line 136 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;

#line 137 "closure_analysis.m"
    {
#line 137 "closure_analysis.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (transform_hlds__closure_analysis__Var_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7);
#line 137 "closure_analysis.m"
      return;
    }
#line 136 "closure_analysis.m"
  }
#line 133 "closure_analysis.m"
}

#line 124 "closure_analysis.m"
static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
#line 124 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__VarTypes_3,
#line 124 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Var_4)
#line 124 "closure_analysis.m"
{
#line 126 "closure_analysis.m"
  {
#line 126 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 126 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Type_5;

#line 127 "closure_analysis.m"
    {
#line 127 "closure_analysis.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__closure_analysis__VarTypes_3, transform_hlds__closure_analysis__Var_4, &transform_hlds__closure_analysis__Type_5);
    }
#line 128 "closure_analysis.m"
    {
#line 128 "closure_analysis.m"
      return transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_5);
    }
#line 126 "closure_analysis.m"
    return transform_hlds__closure_analysis__succeeded;
#line 126 "closure_analysis.m"
  }
#line 124 "closure_analysis.m"
}

#line 82 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 82 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
#line 82 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
#line 82 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5)
#line 82 "closure_analysis.m"
{
#line 82 "closure_analysis.m"
  {
#line 82 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 82 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23;

#line 82 "closure_analysis.m"
    {
#line 82 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23);
    }
#line 82 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23));
#line 82 "closure_analysis.m"
  }
#line 82 "closure_analysis.m"
}

#line 78 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__Debug_7,
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__SCC_8,
#line 78 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 78 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 78 "closure_analysis.m"
{
#line 81 "closure_analysis.m"
  {
#line 81 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 81 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_15_15;
#line 82 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12;
#line 82 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14;

#line 82 "closure_analysis.m"
    {
#line 82 "closure_analysis.m"
      transform_hlds__closure_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 82 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[1]));
#line 82 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1));
#line 82 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 82 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__closure_analysis__Debug_7));
#line 82 "closure_analysis.m"
    }
#line 82 "closure_analysis.m"
    {
#line 82 "closure_analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_15_15, transform_hlds__closure_analysis__SCC_8, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14);
    }
#line 82 "closure_analysis.m"
    *transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12);
#line 81 "closure_analysis.m"
  }
#line 78 "closure_analysis.m"
}

#line 71 "closure_analysis.m"
static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__closure_arg,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
#line 71 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
#line 71 "closure_analysis.m"
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
#line 71 "closure_analysis.m"
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5)
#line 71 "closure_analysis.m"
{
#line 71 "closure_analysis.m"
  {
#line 71 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
#line 71 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 71 "closure_analysis.m"
    {
#line 71 "closure_analysis.m"
      transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 71 "closure_analysis.m"
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 71 "closure_analysis.m"
  }
#line 71 "closure_analysis.m"
}

#line 28 "closure_analysis.m"
void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0(
#line 28 "closure_analysis.m"
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 28 "closure_analysis.m"
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 28 "closure_analysis.m"
{
#line 61 "closure_analysis.m"
  {
#line 61 "closure_analysis.m"
    MR_bool transform_hlds__closure_analysis__succeeded;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Globals_7;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__Debug_8;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__DepInfo_9;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__SCCs_10;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16;
#line 61 "closure_analysis.m"
    MR_Word transform_hlds__closure_analysis__V_17_17;
#line 71 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12;
#line 71 "closure_analysis.m"
    MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14;

#line 66 "closure_analysis.m"
    {
#line 66 "closure_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__closure_analysis__Globals_7);
    }
#line 67 "closure_analysis.m"
    {
#line 67 "closure_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__closure_analysis__Globals_7, (MR_Integer) 76, &transform_hlds__closure_analysis__Debug_8);
    }
#line 68 "closure_analysis.m"
    {
#line 68 "closure_analysis.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16);
    }
#line 69 "closure_analysis.m"
    {
#line 69 "closure_analysis.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16, &transform_hlds__closure_analysis__DepInfo_9);
    }
#line 70 "closure_analysis.m"
    {
#line 70 "closure_analysis.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__DepInfo_9, &transform_hlds__closure_analysis__SCCs_10);
    }
#line 71 "closure_analysis.m"
    {
#line 71 "closure_analysis.m"
      transform_hlds__closure_analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 71 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[0]));
#line 71 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1));
#line 71 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 71 "closure_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 3) = ((MR_Box) (transform_hlds__closure_analysis__Debug_8));
#line 71 "closure_analysis.m"
    }
#line 71 "closure_analysis.m"
    {
#line 71 "closure_analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_17_17, transform_hlds__closure_analysis__SCCs_10, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14);
    }
#line 71 "closure_analysis.m"
    *transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12);
#line 61 "closure_analysis.m"
  }
#line 28 "closure_analysis.m"
}

void mercury__transform_hlds__closure_analysis__init(void)
{
}

void mercury__transform_hlds__closure_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0);
	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
}

void mercury__transform_hlds__closure_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.closure_analysis. */
