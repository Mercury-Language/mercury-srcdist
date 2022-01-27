/*
** Automatically generated from `rbmm.add_rbmm_goal_infos.m'
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


/* :- module transform_hlds.rbmm.add_rbmm_goal_infos. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init
ENDINIT
*/

#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"


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
#include "check_hlds.type_util.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
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
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




#line 153 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 156 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0;

#line 159 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 162 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 165 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 168 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 180 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 183 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 189 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 336 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__336__1_3_p_0(
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_269,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_270,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__3_271);

#line 544 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23);

#line 534 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11);

#line 524 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11);

#line 457 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);

#line 440 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3);

#line 412 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3);

#line 235 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4);

#line 336 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3);

#line 320 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

#line 293 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

#line 283 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
#line 283 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 283 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1);

#line 269 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

#line 193 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
#line 193 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 193 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1);

#line 146 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);

#line 132 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23);

#line 102 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30);

#line 98 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[1][11];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[1][6];




static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
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



#line 596 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 605 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 613 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 622 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 631 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 640 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 648 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 657 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 666 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 675 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 684 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 692 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 701 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 710 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 336 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__336__1_3_p_0(
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_269,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_270,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__3_271)
#line 336 "rbmm.add_rbmm_goal_infos.m"
{
#line 336 "rbmm.add_rbmm_goal_infos.m"
  {
#line 336 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 336 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__G_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_269, (MR_Integer) 2)));
#line 338 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_269, (MR_Integer) 0)));
#line 338 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_269, (MR_Integer) 1)));

#line 339 "rbmm.add_rbmm_goal_infos.m"
    {
#line 339 "rbmm.add_rbmm_goal_infos.m"
      MR_Word base;
#line 339 "rbmm.add_rbmm_goal_infos.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "rbmm.add_rbmm_goal_infos.m"
      *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__3_271 = base;
#line 339 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__G_256));
#line 339 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_270));
#line 339 "rbmm.add_rbmm_goal_infos.m"
    }
#line 336 "rbmm.add_rbmm_goal_infos.m"
  }
#line 336 "rbmm.add_rbmm_goal_infos.m"
}

#line 544 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22,
#line 544 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23)
#line 544 "rbmm.add_rbmm_goal_infos.m"
{
#line 551 "rbmm.add_rbmm_goal_infos.m"
  {
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 0)));
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 1)));
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 2)));
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21;
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20, (MR_Integer) 0)));
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20, (MR_Integer) 1)));
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37;
#line 551 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_38;

#line 141 "rbmm.add_rbmm_goal_infos.m"
    {
#line 141 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_35, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_36, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_38);
    }
#line 144 "rbmm.add_rbmm_goal_infos.m"
    {
#line 144 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37));
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_38));
#line 144 "rbmm.add_rbmm_goal_infos.m"
    }
#line 556 "rbmm.add_rbmm_goal_infos.m"
    {
#line 556 "rbmm.add_rbmm_goal_infos.m"
      MR_Word base;
#line 556 "rbmm.add_rbmm_goal_infos.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 556 "rbmm.add_rbmm_goal_infos.m"
      *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23 = base;
#line 556 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__MainConsId_18));
#line 556 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OtherConsIds_19));
#line 556 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21));
#line 556 "rbmm.add_rbmm_goal_infos.m"
    }
#line 551 "rbmm.add_rbmm_goal_infos.m"
  }
#line 544 "rbmm.add_rbmm_goal_infos.m"
}

#line 534 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 534 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11)
#line 534 "rbmm.add_rbmm_goal_infos.m"
{
#line 538 "rbmm.add_rbmm_goal_infos.m"
  {
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_6;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16;
#line 538 "rbmm.add_rbmm_goal_infos.m"
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17;
#line 537 "rbmm.add_rbmm_goal_infos.m"
    MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5;
#line 537 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_7_7;
#line 537 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_8_8;
#line 537 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_9_9;

#line 537 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 537 "rbmm.add_rbmm_goal_infos.m"
      {
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 2)));
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 3)));
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 4)));
#line 537 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 5)));
#line 539 "rbmm.add_rbmm_goal_infos.m"
        {
#line 539 "rbmm.add_rbmm_goal_infos.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
#line 540 "rbmm.add_rbmm_goal_infos.m"
        {
#line 540 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
#line 540 "rbmm.add_rbmm_goal_infos.m"
        {
#line 540 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
#line 540 "rbmm.add_rbmm_goal_infos.m"
        {
#line 540 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13, transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16);
        }
#line 538 "rbmm.add_rbmm_goal_infos.m"
        if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 538 "rbmm.add_rbmm_goal_infos.m"
          {
#line 541 "rbmm.add_rbmm_goal_infos.m"
            {
#line 541 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
            }
#line 541 "rbmm.add_rbmm_goal_infos.m"
            {
#line 541 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17 = transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0();
            }
#line 541 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (strcmp(transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14, transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17) == 0);
#line 538 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 538 "rbmm.add_rbmm_goal_infos.m"
              {
#line 542 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 542 "rbmm.add_rbmm_goal_infos.m"
                if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 542 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 542 "rbmm.add_rbmm_goal_infos.m"
                    *transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 0)));
#line 542 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 1)));
#line 542 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 538 "rbmm.add_rbmm_goal_infos.m"
              }
#line 538 "rbmm.add_rbmm_goal_infos.m"
          }
#line 537 "rbmm.add_rbmm_goal_infos.m"
      }
#line 538 "rbmm.add_rbmm_goal_infos.m"
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 538 "rbmm.add_rbmm_goal_infos.m"
  }
#line 534 "rbmm.add_rbmm_goal_infos.m"
}

#line 524 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 524 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11)
#line 524 "rbmm.add_rbmm_goal_infos.m"
{
#line 528 "rbmm.add_rbmm_goal_infos.m"
  {
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_6;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16;
#line 528 "rbmm.add_rbmm_goal_infos.m"
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17;
#line 527 "rbmm.add_rbmm_goal_infos.m"
    MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5;
#line 527 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_7_7;
#line 527 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_8_8;
#line 527 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_9_9;

#line 527 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 527 "rbmm.add_rbmm_goal_infos.m"
      {
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 2)));
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 3)));
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 4)));
#line 527 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 5)));
#line 529 "rbmm.add_rbmm_goal_infos.m"
        {
#line 529 "rbmm.add_rbmm_goal_infos.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
#line 530 "rbmm.add_rbmm_goal_infos.m"
        {
#line 530 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
#line 530 "rbmm.add_rbmm_goal_infos.m"
        {
#line 530 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
#line 530 "rbmm.add_rbmm_goal_infos.m"
        {
#line 530 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13, transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16);
        }
#line 528 "rbmm.add_rbmm_goal_infos.m"
        if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 528 "rbmm.add_rbmm_goal_infos.m"
          {
#line 531 "rbmm.add_rbmm_goal_infos.m"
            {
#line 531 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
            }
#line 531 "rbmm.add_rbmm_goal_infos.m"
            {
#line 531 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
            }
#line 531 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (strcmp(transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14, transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17) == 0);
#line 528 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 528 "rbmm.add_rbmm_goal_infos.m"
              {
#line 532 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 532 "rbmm.add_rbmm_goal_infos.m"
                if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 532 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 532 "rbmm.add_rbmm_goal_infos.m"
                    *transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 0)));
#line 532 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 1)));
#line 532 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 528 "rbmm.add_rbmm_goal_infos.m"
              }
#line 528 "rbmm.add_rbmm_goal_infos.m"
          }
#line 527 "rbmm.add_rbmm_goal_infos.m"
      }
#line 528 "rbmm.add_rbmm_goal_infos.m"
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 528 "rbmm.add_rbmm_goal_infos.m"
  }
#line 524 "rbmm.add_rbmm_goal_infos.m"
}

#line 457 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46,
#line 457 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47)
#line 457 "rbmm.add_rbmm_goal_infos.m"
{
#line 464 "rbmm.add_rbmm_goal_infos.m"
  {
#line 464 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

#line 464 "rbmm.add_rbmm_goal_infos.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9)) == (MR_mktag((MR_Integer) 0))))
#line 464 "rbmm.add_rbmm_goal_infos.m"
      {
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 4)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 1)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 2)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 3)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 5)));
#line 464 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 6)));

#line 471 "rbmm.add_rbmm_goal_infos.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20)) == (MR_mktag((MR_Integer) 2))))
#line 466 "rbmm.add_rbmm_goal_infos.m"
          {
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20, (MR_Integer) 0)));
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_67_67;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_68_68;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_69_69;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_70_70;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_71_71;
#line 466 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_72_72;

#line 467 "rbmm.add_rbmm_goal_infos.m"
            {
#line 467 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_67_67 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
            }
#line 467 "rbmm.add_rbmm_goal_infos.m"
            {
#line 467 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_68_68 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
            }
#line 468 "rbmm.add_rbmm_goal_infos.m"
            {
#line 468 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_69_69 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23)));
            }
#line 469 "rbmm.add_rbmm_goal_infos.m"
            {
#line 469 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_70_70 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23)));
            }
#line 469 "rbmm.add_rbmm_goal_infos.m"
            {
#line 469 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_71_71 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
            }
#line 467 "rbmm.add_rbmm_goal_infos.m"
            {
#line 467 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 467 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_67_67));
#line 467 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_68_68));
#line 467 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_69_69));
#line 467 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_70_70));
#line 467 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_71_71));
#line 467 "rbmm.add_rbmm_goal_infos.m"
            }
#line 470 "rbmm.add_rbmm_goal_infos.m"
            {
#line 470 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_72_72, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24));
#line 470 "rbmm.add_rbmm_goal_infos.m"
            }
#line 470 "rbmm.add_rbmm_goal_infos.m"
            {
#line 470 "rbmm.add_rbmm_goal_infos.m"
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_72_72, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
#line 470 "rbmm.add_rbmm_goal_infos.m"
              return;
            }
#line 466 "rbmm.add_rbmm_goal_infos.m"
          }
#line 471 "rbmm.add_rbmm_goal_infos.m"
        else
#line 475 "rbmm.add_rbmm_goal_infos.m"
          {
#line 475 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_64_64;
#line 475 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_66_66;

#line 476 "rbmm.add_rbmm_goal_infos.m"
            {
#line 476 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_66_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            }
#line 476 "rbmm.add_rbmm_goal_infos.m"
            {
#line 476 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_66_66));
#line 476 "rbmm.add_rbmm_goal_infos.m"
            }
#line 476 "rbmm.add_rbmm_goal_infos.m"
            {
#line 476 "rbmm.add_rbmm_goal_infos.m"
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_64_64, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
#line 476 "rbmm.add_rbmm_goal_infos.m"
              return;
            }
#line 475 "rbmm.add_rbmm_goal_infos.m"
          }
#line 464 "rbmm.add_rbmm_goal_infos.m"
      }
#line 464 "rbmm.add_rbmm_goal_infos.m"
    else
#line 464 "rbmm.add_rbmm_goal_infos.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9)) == (MR_mktag((MR_Integer) 1))))
#line 479 "rbmm.add_rbmm_goal_infos.m"
        {
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DeconsCellVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)));
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Node_32;
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33;
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 1)));
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 2)));
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 3)));
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 4)));
#line 479 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 5)));

#line 480 "rbmm.add_rbmm_goal_infos.m"
          {
#line 480 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__DeconsCellVar_26, &transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
          }
#line 481 "rbmm.add_rbmm_goal_infos.m"
          {
#line 481 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
          }
#line 482 "rbmm.add_rbmm_goal_infos.m"
          {
#line 482 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10);
          }
#line 485 "rbmm.add_rbmm_goal_infos.m"
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 484 "rbmm.add_rbmm_goal_infos.m"
            {
#line 484 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_54_54;
#line 484 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_56_56;

#line 484 "rbmm.add_rbmm_goal_infos.m"
              {
#line 484 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_56_56 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              }
#line 484 "rbmm.add_rbmm_goal_infos.m"
              {
#line 484 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_54_54, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_56_56));
#line 484 "rbmm.add_rbmm_goal_infos.m"
              }
#line 484 "rbmm.add_rbmm_goal_infos.m"
              {
#line 484 "rbmm.add_rbmm_goal_infos.m"
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_54_54, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
#line 484 "rbmm.add_rbmm_goal_infos.m"
                return;
              }
#line 484 "rbmm.add_rbmm_goal_infos.m"
            }
#line 485 "rbmm.add_rbmm_goal_infos.m"
          else
#line 488 "rbmm.add_rbmm_goal_infos.m"
            {
#line 488 "rbmm.add_rbmm_goal_infos.m"
              MR_String transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34;
#line 488 "rbmm.add_rbmm_goal_infos.m"
              MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Name_36;
#line 488 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_62_62;
#line 488 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74;
#line 491 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35;
#line 489 "rbmm.add_rbmm_goal_infos.m"
              MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35;
#line 504 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38;
#line 500 "rbmm.add_rbmm_goal_infos.m"
              MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38;

#line 488 "rbmm.add_rbmm_goal_infos.m"
              {
#line 488 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
              }
#line 489 "rbmm.add_rbmm_goal_infos.m"
              {
#line 489 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35);
              }
#line 489 "rbmm.add_rbmm_goal_infos.m"
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 489 "rbmm.add_rbmm_goal_infos.m"
                {
#line 489 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35);
#line 489 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 489 "rbmm.add_rbmm_goal_infos.m"
                }
#line 491 "rbmm.add_rbmm_goal_infos.m"
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 490 "rbmm.add_rbmm_goal_infos.m"
                {
#line 490 "rbmm.add_rbmm_goal_infos.m"
                  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36;

#line 490 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 490 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35);
                  }
#line 490 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = ((MR_String) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36);
#line 490 "rbmm.add_rbmm_goal_infos.m"
                }
#line 491 "rbmm.add_rbmm_goal_infos.m"
              else
#line 493 "rbmm.add_rbmm_goal_infos.m"
                {
#line 493 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37;
#line 491 "rbmm.add_rbmm_goal_infos.m"
                  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37;

#line 491 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 491 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37);
                  }
#line 491 "rbmm.add_rbmm_goal_infos.m"
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 491 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 491 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37);
#line 491 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 491 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 493 "rbmm.add_rbmm_goal_infos.m"
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 492 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 492 "rbmm.add_rbmm_goal_infos.m"
                      MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36;

#line 492 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 492 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37);
                      }
#line 492 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = ((MR_String) transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36);
#line 492 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 493 "rbmm.add_rbmm_goal_infos.m"
                  else
#line 494 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34;
#line 493 "rbmm.add_rbmm_goal_infos.m"
                }
#line 500 "rbmm.add_rbmm_goal_infos.m"
              {
#line 500 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1], transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Name_36)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38);
              }
#line 500 "rbmm.add_rbmm_goal_infos.m"
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 500 "rbmm.add_rbmm_goal_infos.m"
                {
#line 500 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38);
#line 500 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 500 "rbmm.add_rbmm_goal_infos.m"
                }
#line 504 "rbmm.add_rbmm_goal_infos.m"
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 501 "rbmm.add_rbmm_goal_infos.m"
                {
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_57_57;
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_58_58;
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_59_59;
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_60_60;
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_61_61;

#line 501 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_57_57 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_58_58 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
#line 502 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 502 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_59_59 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38)));
                  }
#line 503 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 503 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_60_60 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
#line 503 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 503 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_61_61 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38)));
                  }
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_57_57));
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_58_58));
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_59_59));
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_60_60));
#line 501 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_61_61));
#line 501 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 501 "rbmm.add_rbmm_goal_infos.m"
                }
#line 504 "rbmm.add_rbmm_goal_infos.m"
              else
#line 505 "rbmm.add_rbmm_goal_infos.m"
                {
#line 505 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                }
#line 507 "rbmm.add_rbmm_goal_infos.m"
              {
#line 507 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_62_62, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74));
#line 507 "rbmm.add_rbmm_goal_infos.m"
              }
#line 507 "rbmm.add_rbmm_goal_infos.m"
              {
#line 507 "rbmm.add_rbmm_goal_infos.m"
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_62_62, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
#line 507 "rbmm.add_rbmm_goal_infos.m"
                return;
              }
#line 488 "rbmm.add_rbmm_goal_infos.m"
            }
#line 479 "rbmm.add_rbmm_goal_infos.m"
        }
#line 464 "rbmm.add_rbmm_goal_infos.m"
      else
#line 464 "rbmm.add_rbmm_goal_infos.m"
        if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 520 "rbmm.add_rbmm_goal_infos.m"
          {
#line 521 "rbmm.add_rbmm_goal_infos.m"
            {
#line 521 "rbmm.add_rbmm_goal_infos.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_unification\'/8", (MR_String) "complicated unification");
#line 521 "rbmm.add_rbmm_goal_infos.m"
              return;
            }
#line 520 "rbmm.add_rbmm_goal_infos.m"
          }
#line 464 "rbmm.add_rbmm_goal_infos.m"
        else
#line 517 "rbmm.add_rbmm_goal_infos.m"
          {
#line 517 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_51_51;
#line 517 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_53_53;

#line 518 "rbmm.add_rbmm_goal_infos.m"
            {
#line 518 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_53_53 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            }
#line 518 "rbmm.add_rbmm_goal_infos.m"
            {
#line 518 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_51_51, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_53_53));
#line 518 "rbmm.add_rbmm_goal_infos.m"
            }
#line 518 "rbmm.add_rbmm_goal_infos.m"
            {
#line 518 "rbmm.add_rbmm_goal_infos.m"
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_51_51, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
#line 518 "rbmm.add_rbmm_goal_infos.m"
              return;
            }
#line 517 "rbmm.add_rbmm_goal_infos.m"
          }
#line 464 "rbmm.add_rbmm_goal_infos.m"
  }
#line 457 "rbmm.add_rbmm_goal_infos.m"
}

#line 440 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
#line 440 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3)
#line 440 "rbmm.add_rbmm_goal_infos.m"
{
#line 443 "rbmm.add_rbmm_goal_infos.m"
  while (MR_TRUE)
#line 443 "rbmm.add_rbmm_goal_infos.m"
    {
#line 443 "rbmm.add_rbmm_goal_infos.m"
      /* tailcall optimized into a loop */
#line 443 "rbmm.add_rbmm_goal_infos.m"
      {
#line 443 "rbmm.add_rbmm_goal_infos.m"
        MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

#line 443 "rbmm.add_rbmm_goal_infos.m"
        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "rbmm.add_rbmm_goal_infos.m"
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2;
#line 443 "rbmm.add_rbmm_goal_infos.m"
        else
#line 444 "rbmm.add_rbmm_goal_infos.m"
          {
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7, (MR_Integer) 1)));
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_18;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_24;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_27_27;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_28_28;
#line 444 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29;
#line 445 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7, (MR_Integer) 0)));
#line 447 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13;
#line 447 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14;
#line 447 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15;

#line 446 "rbmm.add_rbmm_goal_infos.m"
            {
#line 446 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_11);
            }
#line 447 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 0)));
#line 447 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 1)));
#line 447 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 2)));
#line 447 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 3)));
#line 447 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 4)));
#line 448 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Created_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0)));
#line 448 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1)));
#line 448 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2)));
#line 448 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3)));
#line 448 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4)));
#line 1666 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
            transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 450 "rbmm.add_rbmm_goal_infos.m"
            {
#line 450 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_27_27 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16, transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21);
            }
#line 450 "rbmm.add_rbmm_goal_infos.m"
            {
#line 450 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__V_27_27, transform_hlds__rbmm__add_rbmm_goal_infos__Created_18, &transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23);
            }
#line 452 "rbmm.add_rbmm_goal_infos.m"
            {
#line 452 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_28_28 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17, transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22);
            }
#line 452 "rbmm.add_rbmm_goal_infos.m"
            {
#line 452 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__V_28_28, transform_hlds__rbmm__add_rbmm_goal_infos__Created_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Used_24);
            }
#line 453 "rbmm.add_rbmm_goal_infos.m"
            {
#line 453 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 453 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_18));
#line 453 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19));
#line 453 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20));
#line 453 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23));
#line 453 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_24));
#line 453 "rbmm.add_rbmm_goal_infos.m"
            }
#line 455 "rbmm.add_rbmm_goal_infos.m"
            /* direct tailcall eliminated */
#line 455 "rbmm.add_rbmm_goal_infos.m"
            {
#line 455 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__add_rbmm_goal_infos__Goals_8;
#line 455 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0__tmp_copy_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29;

#line 455 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0__tmp_copy_2;
#line 455 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1__tmp_copy_1;
#line 455 "rbmm.add_rbmm_goal_infos.m"
            }
#line 455 "rbmm.add_rbmm_goal_infos.m"
            continue;
#line 444 "rbmm.add_rbmm_goal_infos.m"
          }
#line 443 "rbmm.add_rbmm_goal_infos.m"
      }
#line 443 "rbmm.add_rbmm_goal_infos.m"
      break;
#line 443 "rbmm.add_rbmm_goal_infos.m"
    }
#line 440 "rbmm.add_rbmm_goal_infos.m"
}

#line 412 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
#line 412 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3)
#line 412 "rbmm.add_rbmm_goal_infos.m"
{
#line 415 "rbmm.add_rbmm_goal_infos.m"
  while (MR_TRUE)
#line 415 "rbmm.add_rbmm_goal_infos.m"
    {
#line 415 "rbmm.add_rbmm_goal_infos.m"
      /* tailcall optimized into a loop */
#line 415 "rbmm.add_rbmm_goal_infos.m"
      {
#line 415 "rbmm.add_rbmm_goal_infos.m"
        MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

#line 415 "rbmm.add_rbmm_goal_infos.m"
        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "rbmm.add_rbmm_goal_infos.m"
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2;
#line 415 "rbmm.add_rbmm_goal_infos.m"
        else
#line 416 "rbmm.add_rbmm_goal_infos.m"
          {
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7, (MR_Integer) 1)));
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_23;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_26;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_29_29;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_30_30;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_31_31;
#line 416 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32;
#line 417 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7, (MR_Integer) 0)));
#line 419 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15;

#line 418 "rbmm.add_rbmm_goal_infos.m"
            {
#line 418 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__CInfo_11);
            }
#line 419 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 0)));
#line 419 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 1)));
#line 419 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 2)));
#line 419 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 3)));
#line 419 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 4)));
#line 420 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0)));
#line 420 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1)));
#line 420 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2)));
#line 420 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3)));
#line 420 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4)));
#line 1836 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
            transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 422 "rbmm.add_rbmm_goal_infos.m"
            {
#line 422 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__union_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13, transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Created_23);
            }
#line 423 "rbmm.add_rbmm_goal_infos.m"
            {
#line 423 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_29_29 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14, transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19);
            }
#line 423 "rbmm.add_rbmm_goal_infos.m"
            {
#line 423 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__V_29_29, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24);
            }
#line 424 "rbmm.add_rbmm_goal_infos.m"
            {
#line 424 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_30_30 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16, transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21);
            }
#line 424 "rbmm.add_rbmm_goal_infos.m"
            {
#line 424 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__V_30_30, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25);
            }
#line 426 "rbmm.add_rbmm_goal_infos.m"
            {
#line 426 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__V_31_31 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17, transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22);
            }
#line 426 "rbmm.add_rbmm_goal_infos.m"
            {
#line 426 "rbmm.add_rbmm_goal_infos.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__V_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__Used_26);
            }
#line 428 "rbmm.add_rbmm_goal_infos.m"
            {
#line 428 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_23));
#line 428 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24));
#line 428 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20));
#line 428 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25));
#line 428 "rbmm.add_rbmm_goal_infos.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_26));
#line 428 "rbmm.add_rbmm_goal_infos.m"
            }
#line 430 "rbmm.add_rbmm_goal_infos.m"
            /* direct tailcall eliminated */
#line 430 "rbmm.add_rbmm_goal_infos.m"
            {
#line 430 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_8;
#line 430 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0__tmp_copy_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32;

#line 430 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0__tmp_copy_2;
#line 430 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1__tmp_copy_1;
#line 430 "rbmm.add_rbmm_goal_infos.m"
            }
#line 430 "rbmm.add_rbmm_goal_infos.m"
            continue;
#line 416 "rbmm.add_rbmm_goal_infos.m"
          }
#line 415 "rbmm.add_rbmm_goal_infos.m"
      }
#line 415 "rbmm.add_rbmm_goal_infos.m"
      break;
#line 415 "rbmm.add_rbmm_goal_infos.m"
    }
#line 412 "rbmm.add_rbmm_goal_infos.m"
}

#line 235 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
#line 235 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4)
#line 235 "rbmm.add_rbmm_goal_infos.m"
{
#line 238 "rbmm.add_rbmm_goal_infos.m"
  {
#line 238 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

#line 238 "rbmm.add_rbmm_goal_infos.m"
    if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "rbmm.add_rbmm_goal_infos.m"
      if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "rbmm.add_rbmm_goal_infos.m"
        *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "rbmm.add_rbmm_goal_infos.m"
      else
#line 239 "rbmm.add_rbmm_goal_infos.m"
        {
#line 239 "rbmm.add_rbmm_goal_infos.m"
          *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "rbmm.add_rbmm_goal_infos.m"
          {
#line 240 "rbmm.add_rbmm_goal_infos.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
#line 240 "rbmm.add_rbmm_goal_infos.m"
            return;
          }
#line 239 "rbmm.add_rbmm_goal_infos.m"
        }
#line 238 "rbmm.add_rbmm_goal_infos.m"
    else
#line 238 "rbmm.add_rbmm_goal_infos.m"
      {
#line 238 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));

#line 238 "rbmm.add_rbmm_goal_infos.m"
        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "rbmm.add_rbmm_goal_infos.m"
          {
#line 241 "rbmm.add_rbmm_goal_infos.m"
            *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "rbmm.add_rbmm_goal_infos.m"
            {
#line 242 "rbmm.add_rbmm_goal_infos.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
#line 242 "rbmm.add_rbmm_goal_infos.m"
              return;
            }
#line 241 "rbmm.add_rbmm_goal_infos.m"
          }
#line 238 "rbmm.add_rbmm_goal_infos.m"
        else
#line 244 "rbmm.add_rbmm_goal_infos.m"
          {
#line 244 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24;

#line 245 "rbmm.add_rbmm_goal_infos.m"
            {
#line 245 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_25_25, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_21, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24);
            }
#line 247 "rbmm.add_rbmm_goal_infos.m"
            {
#line 247 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__V_26_26);
            }
#line 249 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 248 "rbmm.add_rbmm_goal_infos.m"
              {
#line 248 "rbmm.add_rbmm_goal_infos.m"
                MR_Word base;
#line 248 "rbmm.add_rbmm_goal_infos.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "rbmm.add_rbmm_goal_infos.m"
                *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = base;
#line 248 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_20));
#line 248 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24));
#line 248 "rbmm.add_rbmm_goal_infos.m"
              }
#line 249 "rbmm.add_rbmm_goal_infos.m"
            else
#line 250 "rbmm.add_rbmm_goal_infos.m"
              *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24;
#line 244 "rbmm.add_rbmm_goal_infos.m"
          }
#line 238 "rbmm.add_rbmm_goal_infos.m"
      }
#line 238 "rbmm.add_rbmm_goal_infos.m"
  }
#line 235 "rbmm.add_rbmm_goal_infos.m"
}

#line 336 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
#line 336 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3)
#line 336 "rbmm.add_rbmm_goal_infos.m"
{
#line 336 "rbmm.add_rbmm_goal_infos.m"
  {
#line 336 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
#line 336 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv6_HeadVar__3_271;

#line 336 "rbmm.add_rbmm_goal_infos.m"
    {
#line 336 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__336__1_3_p_0(((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2), &transform_hlds__rbmm__add_rbmm_goal_infos__conv6_HeadVar__3_271);
    }
#line 336 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv6_HeadVar__3_271));
#line 336 "rbmm.add_rbmm_goal_infos.m"
  }
#line 336 "rbmm.add_rbmm_goal_infos.m"
}

#line 320 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 320 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
#line 320 "rbmm.add_rbmm_goal_infos.m"
{
#line 320 "rbmm.add_rbmm_goal_infos.m"
  {
#line 320 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
#line 320 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv5_STATE_VARIABLE_Case_23;

#line 320 "rbmm.add_rbmm_goal_infos.m"
    {
#line 320 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv5_STATE_VARIABLE_Case_23);
    }
#line 320 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv5_STATE_VARIABLE_Case_23));
#line 320 "rbmm.add_rbmm_goal_infos.m"
  }
#line 320 "rbmm.add_rbmm_goal_infos.m"
}

#line 293 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 293 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
#line 293 "rbmm.add_rbmm_goal_infos.m"
{
#line 293 "rbmm.add_rbmm_goal_infos.m"
  {
#line 293 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
#line 293 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv4_STATE_VARIABLE_Goal_23;

#line 293 "rbmm.add_rbmm_goal_infos.m"
    {
#line 293 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv4_STATE_VARIABLE_Goal_23);
    }
#line 293 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv4_STATE_VARIABLE_Goal_23));
#line 293 "rbmm.add_rbmm_goal_infos.m"
  }
#line 293 "rbmm.add_rbmm_goal_infos.m"
}

#line 283 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
#line 283 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 283 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1)
#line 283 "rbmm.add_rbmm_goal_infos.m"
{
#line 283 "rbmm.add_rbmm_goal_infos.m"
  {
#line 283 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 283 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;

#line 283 "rbmm.add_rbmm_goal_infos.m"
    {
#line 283 "rbmm.add_rbmm_goal_infos.m"
      return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = parse_tree__builtin_lib_types__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1));
    }
#line 283 "rbmm.add_rbmm_goal_infos.m"
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 283 "rbmm.add_rbmm_goal_infos.m"
  }
#line 283 "rbmm.add_rbmm_goal_infos.m"
}

#line 269 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 269 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
#line 269 "rbmm.add_rbmm_goal_infos.m"
{
#line 269 "rbmm.add_rbmm_goal_infos.m"
  {
#line 269 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
#line 269 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Goal_23;

#line 269 "rbmm.add_rbmm_goal_infos.m"
    {
#line 269 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Goal_23);
    }
#line 269 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Goal_23));
#line 269 "rbmm.add_rbmm_goal_infos.m"
  }
#line 269 "rbmm.add_rbmm_goal_infos.m"
}

#line 193 "rbmm.add_rbmm_goal_infos.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
#line 193 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 193 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1)
#line 193 "rbmm.add_rbmm_goal_infos.m"
{
#line 193 "rbmm.add_rbmm_goal_infos.m"
  {
#line 193 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 193 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;

#line 193 "rbmm.add_rbmm_goal_infos.m"
    {
#line 193 "rbmm.add_rbmm_goal_infos.m"
      return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = parse_tree__builtin_lib_types__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1));
    }
#line 193 "rbmm.add_rbmm_goal_infos.m"
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 193 "rbmm.add_rbmm_goal_infos.m"
  }
#line 193 "rbmm.add_rbmm_goal_infos.m"
}

#line 146 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10,
#line 146 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11)
#line 146 "rbmm.add_rbmm_goal_infos.m"
{
#line 153 "rbmm.add_rbmm_goal_infos.m"
  {
#line 153 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

#line 153 "rbmm.add_rbmm_goal_infos.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 347 "rbmm.add_rbmm_goal_infos.m"
      {
#line 347 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_288;
#line 347 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_289 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8), (MR_Integer) 0);
#line 347 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_290;
#line 347 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_292;
#line 347 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_298_298;
#line 353 "rbmm.add_rbmm_goal_infos.m"
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_291_291;

#line 349 "rbmm.add_rbmm_goal_infos.m"
        {
#line 349 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_289, &transform_hlds__rbmm__add_rbmm_goal_infos__Goal_290);
        }
#line 352 "rbmm.add_rbmm_goal_infos.m"
        *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Goal_290);
#line 353 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_290, (MR_Integer) 0)));
#line 353 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__Info_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_290, (MR_Integer) 1)));
#line 354 "rbmm.add_rbmm_goal_infos.m"
        {
#line 354 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_292 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_288);
        }
#line 355 "rbmm.add_rbmm_goal_infos.m"
        {
#line 355 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "rbmm.add_rbmm_goal_infos.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_298_298, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_292));
#line 355 "rbmm.add_rbmm_goal_infos.m"
        }
#line 355 "rbmm.add_rbmm_goal_infos.m"
        {
#line 355 "rbmm.add_rbmm_goal_infos.m"
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_298_298, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 355 "rbmm.add_rbmm_goal_infos.m"
          return;
        }
#line 347 "rbmm.add_rbmm_goal_infos.m"
      }
#line 153 "rbmm.add_rbmm_goal_infos.m"
    else
#line 153 "rbmm.add_rbmm_goal_infos.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 2))))
#line 170 "rbmm.add_rbmm_goal_infos.m"
        {
#line 170 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)));
#line 170 "rbmm.add_rbmm_goal_infos.m"
          MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__ProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 170 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 170 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_51;
#line 171 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 3)));
#line 171 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 4)));
#line 171 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 5)));
#line 179 "rbmm.add_rbmm_goal_infos.m"
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_52;

#line 172 "rbmm.add_rbmm_goal_infos.m"
          {
#line 172 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "rbmm.add_rbmm_goal_infos.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_51, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PredId_45));
#line 172 "rbmm.add_rbmm_goal_infos.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_51, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcId_46));
#line 172 "rbmm.add_rbmm_goal_infos.m"
          }
#line 174 "rbmm.add_rbmm_goal_infos.m"
          {
#line 174 "rbmm.add_rbmm_goal_infos.m"
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, &transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_52);
          }
#line 179 "rbmm.add_rbmm_goal_infos.m"
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 177 "rbmm.add_rbmm_goal_infos.m"
            {
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_75_75;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_76_76;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_77_77;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_78_78;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_79_79;
#line 177 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_80_80;

#line 176 "rbmm.add_rbmm_goal_infos.m"
              {
#line 176 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_75_75 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_52)));
              }
#line 177 "rbmm.add_rbmm_goal_infos.m"
              {
#line 177 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_76_76 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385);
              }
#line 177 "rbmm.add_rbmm_goal_infos.m"
              {
#line 177 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_77_77 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385);
              }
#line 177 "rbmm.add_rbmm_goal_infos.m"
              {
#line 177 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_78_78 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385);
              }
#line 177 "rbmm.add_rbmm_goal_infos.m"
              {
#line 177 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_79_79 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_385_385);
              }
#line 176 "rbmm.add_rbmm_goal_infos.m"
              {
#line 176 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 176 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_75_75));
#line 176 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_76_76));
#line 176 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_77_77));
#line 176 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_78_78));
#line 176 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_79_79));
#line 176 "rbmm.add_rbmm_goal_infos.m"
              }
#line 178 "rbmm.add_rbmm_goal_infos.m"
              {
#line 178 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "rbmm.add_rbmm_goal_infos.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_80_80, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_53));
#line 178 "rbmm.add_rbmm_goal_infos.m"
              }
#line 178 "rbmm.add_rbmm_goal_infos.m"
              {
#line 178 "rbmm.add_rbmm_goal_infos.m"
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_80_80, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
              }
#line 177 "rbmm.add_rbmm_goal_infos.m"
            }
#line 179 "rbmm.add_rbmm_goal_infos.m"
          else
#line 186 "rbmm.add_rbmm_goal_infos.m"
            {
#line 186 "rbmm.add_rbmm_goal_infos.m"
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_54;

#line 180 "rbmm.add_rbmm_goal_infos.m"
              {
#line 180 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_54);
              }
#line 186 "rbmm.add_rbmm_goal_infos.m"
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 184 "rbmm.add_rbmm_goal_infos.m"
                {
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_82_82;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_83_83;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_84_84;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_85_85;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_86_86;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_87_87;
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105;

#line 182 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_82_82 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386);
                  }
#line 183 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 183 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_83_83 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_54)));
                  }
#line 183 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 183 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_84_84 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386);
                  }
#line 183 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 183 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_85_85 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386);
                  }
#line 184 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 184 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_86_86 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_386_386);
                  }
#line 182 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_82_82));
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_83_83));
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_84_84));
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_85_85));
#line 182 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_86_86));
#line 182 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 185 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 185 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_87_87, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_105));
#line 185 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 185 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 185 "rbmm.add_rbmm_goal_infos.m"
                    hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_87_87, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
                  }
#line 184 "rbmm.add_rbmm_goal_infos.m"
                }
#line 186 "rbmm.add_rbmm_goal_infos.m"
              else
#line 190 "rbmm.add_rbmm_goal_infos.m"
                {
#line 187 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_89_89;

#line 187 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 187 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_89_89, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_51));
#line 187 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 187 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 187 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_89_89, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1);
                  }
#line 190 "rbmm.add_rbmm_goal_infos.m"
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 189 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 189 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_91_91;
#line 189 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_93_93;

#line 189 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 189 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_93_93 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                      }
#line 189 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 189 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 189 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_91_91, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_93_93));
#line 189 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 189 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 189 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_91_91, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
                      }
#line 189 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 190 "rbmm.add_rbmm_goal_infos.m"
                  else
#line 191 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_391_391;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_55;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_56;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_57;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_58;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Constants_59;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_60;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_62;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_63;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_64;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_65;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_66;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Globals_67;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_68;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_70;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__V_95_95;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__V_96_96;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_97_97;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_100_100;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_101_101;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_102_102;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_103_103;
#line 191 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106;
#line 194 "rbmm.add_rbmm_goal_infos.m"
                      MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ActualRegionArgs_58;
#line 195 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos___Outputs_61;

#line 191 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 191 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_55 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10);
                      }
#line 192 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 192 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, &transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_56);
                      }
#line 2614 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 193 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1));
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_56));
#line 193 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 193 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 193 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_57 = mercury__list__filter_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__V_94_94, transform_hlds__rbmm__add_rbmm_goal_infos__Args_47);
                      }
#line 194 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 194 "rbmm.add_rbmm_goal_infos.m"
                        mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_55)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ActualRegionArgs_58);
                      }
#line 194 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_58 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ActualRegionArgs_58);
#line 195 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Constants_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_58, (MR_Integer) 0)));
#line 195 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_58, (MR_Integer) 1)));
#line 195 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos___Outputs_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_58, (MR_Integer) 2)));
#line 2648 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_391_391 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 196 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 196 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_95_95 = mercury__list__length_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_391_391, transform_hlds__rbmm__add_rbmm_goal_infos__Constants_59);
                      }
#line 196 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 196 "rbmm.add_rbmm_goal_infos.m"
                        mercury__list__det_split_list_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__V_95_95, transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_57, &transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_62, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_63);
                      }
#line 198 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 198 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_96_96 = mercury__list__length_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_391_391, transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_60);
                      }
#line 198 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 198 "rbmm.add_rbmm_goal_infos.m"
                        mercury__list__det_split_list_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__V_96_96, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_63, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_64, &transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_65);
                      }
#line 203 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 203 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_97_97 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_64, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_62);
                      }
#line 203 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 203 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_66 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__V_97_97);
                      }
#line 205 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 205 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, &transform_hlds__rbmm__add_rbmm_goal_infos__Globals_67);
                      }
#line 206 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 206 "rbmm.add_rbmm_goal_infos.m"
                        libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Globals_67, (MR_Integer) 228, &transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_68);
                      }
#line 217 "rbmm.add_rbmm_goal_infos.m"
                      if ((transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_68 == (MR_Integer) 0))
#line 219 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_70 = transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_66;
#line 217 "rbmm.add_rbmm_goal_infos.m"
                      else
#line 209 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 209 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_69;
#line 209 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_99_99;

#line 211 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 211 "rbmm.add_rbmm_goal_infos.m"
                            transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_60, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_64, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_69);
                          }
#line 216 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 216 "rbmm.add_rbmm_goal_infos.m"
                            transform_hlds__rbmm__add_rbmm_goal_infos__V_99_99 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_69, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_62);
                          }
#line 216 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 216 "rbmm.add_rbmm_goal_infos.m"
                            transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_70 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__V_99_99);
                          }
#line 209 "rbmm.add_rbmm_goal_infos.m"
                        }
#line 224 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_100_100 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_65);
                      }
#line 225 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 225 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_101_101 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_64);
                      }
#line 225 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 225 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_102_102 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_387_387, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_62);
                      }
#line 224 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_100_100));
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_101_101));
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_102_102));
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_70));
#line 224 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_66));
#line 224 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 227 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 227 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_103_103, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_106));
#line 227 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 227 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 227 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_103_103, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
                      }
#line 191 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 190 "rbmm.add_rbmm_goal_infos.m"
                }
#line 186 "rbmm.add_rbmm_goal_infos.m"
            }
#line 170 "rbmm.add_rbmm_goal_infos.m"
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8;
#line 170 "rbmm.add_rbmm_goal_infos.m"
        }
#line 153 "rbmm.add_rbmm_goal_infos.m"
      else
#line 153 "rbmm.add_rbmm_goal_infos.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 1))))
#line 153 "rbmm.add_rbmm_goal_infos.m"
          {
#line 153 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 3)));
#line 153 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26;
#line 153 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28;
#line 153 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30;
#line 154 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)));
#line 154 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 154 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 154 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 4)));
#line 158 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27;
#line 156 "rbmm.add_rbmm_goal_infos.m"
            MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenaming0_27;
#line 163 "rbmm.add_rbmm_goal_infos.m"
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29;
#line 161 "rbmm.add_rbmm_goal_infos.m"
            MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenaming0_29;

#line 155 "rbmm.add_rbmm_goal_infos.m"
            {
#line 155 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10);
            }
#line 156 "rbmm.add_rbmm_goal_infos.m"
            {
#line 156 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenaming0_27);
            }
#line 156 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 156 "rbmm.add_rbmm_goal_infos.m"
              {
#line 156 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenaming0_27);
#line 156 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 156 "rbmm.add_rbmm_goal_infos.m"
              }
#line 158 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 157 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28 = transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27;
#line 158 "rbmm.add_rbmm_goal_infos.m"
            else
#line 159 "rbmm.add_rbmm_goal_infos.m"
              {
#line 159 "rbmm.add_rbmm_goal_infos.m"
                {
#line 159 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]);
                }
#line 159 "rbmm.add_rbmm_goal_infos.m"
              }
#line 161 "rbmm.add_rbmm_goal_infos.m"
            {
#line 161 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenaming0_29);
            }
#line 161 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 161 "rbmm.add_rbmm_goal_infos.m"
              {
#line 161 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenaming0_29);
#line 161 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 161 "rbmm.add_rbmm_goal_infos.m"
              }
#line 163 "rbmm.add_rbmm_goal_infos.m"
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 162 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30 = transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29;
#line 163 "rbmm.add_rbmm_goal_infos.m"
            else
#line 164 "rbmm.add_rbmm_goal_infos.m"
              {
#line 164 "rbmm.add_rbmm_goal_infos.m"
                {
#line 164 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]);
                }
#line 164 "rbmm.add_rbmm_goal_infos.m"
              }
#line 166 "rbmm.add_rbmm_goal_infos.m"
            {
#line 166 "rbmm.add_rbmm_goal_infos.m"
              transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Unification_24, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
            }
#line 153 "rbmm.add_rbmm_goal_infos.m"
            *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8;
#line 153 "rbmm.add_rbmm_goal_infos.m"
          }
#line 153 "rbmm.add_rbmm_goal_infos.m"
        else
#line 153 "rbmm.add_rbmm_goal_infos.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 261 "rbmm.add_rbmm_goal_infos.m"
            {
#line 263 "rbmm.add_rbmm_goal_infos.m"
              {
#line 263 "rbmm.add_rbmm_goal_infos.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "call to foreign proc not handled");
#line 263 "rbmm.add_rbmm_goal_infos.m"
                return;
              }
#line 261 "rbmm.add_rbmm_goal_infos.m"
            }
#line 153 "rbmm.add_rbmm_goal_infos.m"
          else
#line 153 "rbmm.add_rbmm_goal_infos.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 267 "rbmm.add_rbmm_goal_infos.m"
              {
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_394_394;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_395_395;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_397_397;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ConjType_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_164;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_166;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_167;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_169;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_170;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_171;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_172;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_173;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_174;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_175;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_183_183;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_185_185;
#line 267 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_186_186;
#line 280 "rbmm.add_rbmm_goal_infos.m"
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_168_168;

#line 269 "rbmm.add_rbmm_goal_infos.m"
                {
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7));
#line 269 "rbmm.add_rbmm_goal_infos.m"
                }
#line 2973 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_394_394 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 269 "rbmm.add_rbmm_goal_infos.m"
                {
#line 269 "rbmm.add_rbmm_goal_infos.m"
                  mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_394_394, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_394_394, transform_hlds__rbmm__add_rbmm_goal_infos__V_181_181, transform_hlds__rbmm__add_rbmm_goal_infos__Conjs0_163, &transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_164);
                }
#line 272 "rbmm.add_rbmm_goal_infos.m"
                {
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word base;
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = base;
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ConjType_162));
#line 272 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_164));
#line 272 "rbmm.add_rbmm_goal_infos.m"
                }
#line 275 "rbmm.add_rbmm_goal_infos.m"
                {
#line 275 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__V_183_183 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                }
#line 275 "rbmm.add_rbmm_goal_infos.m"
                {
#line 275 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_164, transform_hlds__rbmm__add_rbmm_goal_infos__V_183_183, &transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165);
                }
#line 280 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__Created_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165, (MR_Integer) 0)));
#line 280 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__Removed_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165, (MR_Integer) 1)));
#line 280 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165, (MR_Integer) 2)));
#line 280 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165, (MR_Integer) 3)));
#line 280 "rbmm.add_rbmm_goal_infos.m"
                transform_hlds__rbmm__add_rbmm_goal_infos__Used_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_165, (MR_Integer) 4)));
#line 281 "rbmm.add_rbmm_goal_infos.m"
                {
#line 281 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_171 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10);
                }
#line 282 "rbmm.add_rbmm_goal_infos.m"
                {
#line 282 "rbmm.add_rbmm_goal_infos.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, &transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_172);
                }
#line 3026 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_395_395 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 283 "rbmm.add_rbmm_goal_infos.m"
                {
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3));
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_172));
#line 283 "rbmm.add_rbmm_goal_infos.m"
                }
#line 283 "rbmm.add_rbmm_goal_infos.m"
                {
#line 283 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_173 = parse_tree__set_of_var__filter_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_395_395, transform_hlds__rbmm__add_rbmm_goal_infos__V_184_184, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_171);
                }
#line 284 "rbmm.add_rbmm_goal_infos.m"
                {
#line 284 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_174 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_395_395, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_173);
                }
#line 3052 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_397_397 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 285 "rbmm.add_rbmm_goal_infos.m"
                {
#line 285 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__V_185_185 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_397_397, transform_hlds__rbmm__add_rbmm_goal_infos__Created_166, transform_hlds__rbmm__add_rbmm_goal_infos__Removed_167);
                }
#line 285 "rbmm.add_rbmm_goal_infos.m"
                {
#line 285 "rbmm.add_rbmm_goal_infos.m"
                  mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_397_397, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_174, transform_hlds__rbmm__add_rbmm_goal_infos__V_185_185, &transform_hlds__rbmm__add_rbmm_goal_infos__Carried_175);
                }
#line 286 "rbmm.add_rbmm_goal_infos.m"
                {
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_166));
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_167));
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_175));
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_169));
#line 286 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_170));
#line 286 "rbmm.add_rbmm_goal_infos.m"
                }
#line 287 "rbmm.add_rbmm_goal_infos.m"
                {
#line 287 "rbmm.add_rbmm_goal_infos.m"
                  transform_hlds__rbmm__add_rbmm_goal_infos__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "rbmm.add_rbmm_goal_infos.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_186_186, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_176));
#line 287 "rbmm.add_rbmm_goal_infos.m"
                }
#line 287 "rbmm.add_rbmm_goal_infos.m"
                {
#line 287 "rbmm.add_rbmm_goal_infos.m"
                  hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_186_186, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 287 "rbmm.add_rbmm_goal_infos.m"
                  return;
                }
#line 267 "rbmm.add_rbmm_goal_infos.m"
              }
#line 153 "rbmm.add_rbmm_goal_infos.m"
            else
#line 153 "rbmm.add_rbmm_goal_infos.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 291 "rbmm.add_rbmm_goal_infos.m"
                {
#line 291 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_400_400;
#line 291 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Disjs0_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 291 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198;
#line 291 "rbmm.add_rbmm_goal_infos.m"
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214;

#line 293 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7));
#line 293 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 3138 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                  transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_400_400 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 293 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 293 "rbmm.add_rbmm_goal_infos.m"
                    mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_400_400, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_400_400, transform_hlds__rbmm__add_rbmm_goal_infos__V_214_214, transform_hlds__rbmm__add_rbmm_goal_infos__Disjs0_197, &transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198);
                  }
#line 296 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 296 "rbmm.add_rbmm_goal_infos.m"
                    MR_Word base;
#line 296 "rbmm.add_rbmm_goal_infos.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "rbmm.add_rbmm_goal_infos.m"
                    *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = base;
#line 296 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 296 "rbmm.add_rbmm_goal_infos.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198));
#line 296 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 301 "rbmm.add_rbmm_goal_infos.m"
                  if ((transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 299 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_221_221;
#line 299 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_223_223;

#line 300 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 300 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_223_223 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                      }
#line 300 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 300 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_221_221, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_223_223));
#line 300 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 300 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 300 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_221_221, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 300 "rbmm.add_rbmm_goal_infos.m"
                        return;
                      }
#line 299 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 301 "rbmm.add_rbmm_goal_infos.m"
                  else
#line 305 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_401_401;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_200;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_203;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_204;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_205;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_209;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198, (MR_Integer) 0)));
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_217_217;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_218_218;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_219_219;
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198, (MR_Integer) 1)));
#line 305 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_216_216, (MR_Integer) 0)));
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_206_206;
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_207_207;

#line 305 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_216_216, (MR_Integer) 1)));
#line 306 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 306 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_200);
                      }
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Created_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202, (MR_Integer) 0)));
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Removed_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202, (MR_Integer) 1)));
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Carried_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202, (MR_Integer) 2)));
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202, (MR_Integer) 3)));
#line 307 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_202, (MR_Integer) 4)));
#line 3244 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_401_401 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 308 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_217_217 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_401_401);
                      }
#line 309 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 309 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_218_218 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_401_401);
                      }
#line 308 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_203));
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_204));
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_205));
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_217_217));
#line 308 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_218_218));
#line 308 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 312 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 312 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_198, transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_208, &transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_209);
                      }
#line 313 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 313 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_219_219, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_209));
#line 313 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 313 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 313 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_219_219, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 313 "rbmm.add_rbmm_goal_infos.m"
                        return;
                      }
#line 305 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 291 "rbmm.add_rbmm_goal_infos.m"
                }
#line 153 "rbmm.add_rbmm_goal_infos.m"
              else
#line 153 "rbmm.add_rbmm_goal_infos.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 258 "rbmm.add_rbmm_goal_infos.m"
                  {
#line 260 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 260 "rbmm.add_rbmm_goal_infos.m"
                      mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "generic call not handled");
#line 260 "rbmm.add_rbmm_goal_infos.m"
                      return;
                    }
#line 258 "rbmm.add_rbmm_goal_infos.m"
                  }
#line 153 "rbmm.add_rbmm_goal_infos.m"
                else
#line 153 "rbmm.add_rbmm_goal_infos.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 373 "rbmm.add_rbmm_goal_infos.m"
                    {
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_407_407;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__A_330 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cond0_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Then0_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 3)));
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Else0_333 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 4)));
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cond_334;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Then_335;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Else_336;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_338;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_340;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_341;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_342;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_346;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_352_352;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_353_353;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_354_354;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_355_355;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_356_356;
#line 373 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_358_358;
#line 389 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_337_337;
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_343_343;
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_344_344;

#line 375 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 375 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__Cond0_331, &transform_hlds__rbmm__add_rbmm_goal_infos__Cond_334);
                      }
#line 378 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 378 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__Then0_332, &transform_hlds__rbmm__add_rbmm_goal_infos__Then_335);
                      }
#line 381 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 381 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__Else0_333, &transform_hlds__rbmm__add_rbmm_goal_infos__Else_336);
                      }
#line 384 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word base;
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = base;
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__A_330));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cond_334));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Then_335));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Else_336));
#line 384 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 389 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Else_336, (MR_Integer) 0)));
#line 389 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Else_336, (MR_Integer) 1)));
#line 390 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 390 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_338);
                      }
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Created_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339, (MR_Integer) 0)));
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Removed_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339, (MR_Integer) 1)));
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__Carried_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339, (MR_Integer) 2)));
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339, (MR_Integer) 3)));
#line 391 "rbmm.add_rbmm_goal_infos.m"
                      transform_hlds__rbmm__add_rbmm_goal_infos__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_339, (MR_Integer) 4)));
#line 3420 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_407_407 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 392 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_352_352 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_407_407);
                      }
#line 393 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 393 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_353_353 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_407_407);
                      }
#line 392 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_340));
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_341));
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_342));
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_352_352));
#line 392 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_353_353));
#line 392 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_356_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_356_356, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Else_336));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_356_356, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_355_355, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Then_335));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_355_355, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_356_356));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_354_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_354_354, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cond_334));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_354_354, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_355_355));
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 394 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 394 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_354_354, transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_345, &transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_346);
                      }
#line 395 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 395 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "rbmm.add_rbmm_goal_infos.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_358_358, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_346));
#line 395 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 395 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 395 "rbmm.add_rbmm_goal_infos.m"
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_358_358, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 395 "rbmm.add_rbmm_goal_infos.m"
                        return;
                      }
#line 373 "rbmm.add_rbmm_goal_infos.m"
                    }
#line 153 "rbmm.add_rbmm_goal_infos.m"
                  else
#line 153 "rbmm.add_rbmm_goal_infos.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 359 "rbmm.add_rbmm_goal_infos.m"
                      {
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_308;
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Reason_309 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_310 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_311;
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_313;
#line 359 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_319_319;
#line 367 "rbmm.add_rbmm_goal_infos.m"
                        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_312_312;

#line 363 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 363 "rbmm.add_rbmm_goal_infos.m"
                          transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6, transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7, transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_310, &transform_hlds__rbmm__add_rbmm_goal_infos__Goal_311);
                        }
#line 366 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word base;
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = base;
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Reason_309));
#line 366 "rbmm.add_rbmm_goal_infos.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Goal_311));
#line 366 "rbmm.add_rbmm_goal_infos.m"
                        }
#line 367 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_311, (MR_Integer) 0)));
#line 367 "rbmm.add_rbmm_goal_infos.m"
                        transform_hlds__rbmm__add_rbmm_goal_infos__Info_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_311, (MR_Integer) 1)));
#line 368 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 368 "rbmm.add_rbmm_goal_infos.m"
                          transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_313 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_308);
                        }
#line 369 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 369 "rbmm.add_rbmm_goal_infos.m"
                          transform_hlds__rbmm__add_rbmm_goal_infos__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "rbmm.add_rbmm_goal_infos.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_319_319, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_313));
#line 369 "rbmm.add_rbmm_goal_infos.m"
                        }
#line 369 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 369 "rbmm.add_rbmm_goal_infos.m"
                          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_319_319, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 369 "rbmm.add_rbmm_goal_infos.m"
                          return;
                        }
#line 359 "rbmm.add_rbmm_goal_infos.m"
                      }
#line 153 "rbmm.add_rbmm_goal_infos.m"
                    else
#line 153 "rbmm.add_rbmm_goal_infos.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 397 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 400 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 400 "rbmm.add_rbmm_goal_infos.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "shorthand");
#line 400 "rbmm.add_rbmm_goal_infos.m"
                            return;
                          }
#line 397 "rbmm.add_rbmm_goal_infos.m"
                        }
#line 153 "rbmm.add_rbmm_goal_infos.m"
                      else
#line 318 "rbmm.add_rbmm_goal_infos.m"
                        {
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_404_404;
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__A_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 1)));
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__B_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 2)));
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cases0_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_8, (MR_Integer) 3)));
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236;
#line 318 "rbmm.add_rbmm_goal_infos.m"
                          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263;

#line 320 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[1]));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_1));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_2));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_5));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_6));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__7_7));
#line 320 "rbmm.add_rbmm_goal_infos.m"
                          }
#line 3626 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                          transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_404_404 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 320 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 320 "rbmm.add_rbmm_goal_infos.m"
                            mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_404_404, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_404_404, transform_hlds__rbmm__add_rbmm_goal_infos__V_263_263, transform_hlds__rbmm__add_rbmm_goal_infos__Cases0_235, &transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236);
                          }
#line 323 "rbmm.add_rbmm_goal_infos.m"
                          {
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            MR_Word base;
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_9 = base;
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__A_233));
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__B_234));
#line 323 "rbmm.add_rbmm_goal_infos.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236));
#line 323 "rbmm.add_rbmm_goal_infos.m"
                          }
#line 327 "rbmm.add_rbmm_goal_infos.m"
                          if ((transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "rbmm.add_rbmm_goal_infos.m"
                            {
#line 326 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 326 "rbmm.add_rbmm_goal_infos.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "empty switch");
#line 326 "rbmm.add_rbmm_goal_infos.m"
                                return;
                              }
#line 325 "rbmm.add_rbmm_goal_infos.m"
                            }
#line 327 "rbmm.add_rbmm_goal_infos.m"
                          else
#line 329 "rbmm.add_rbmm_goal_infos.m"
                            {
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_405_405;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Case_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236, (MR_Integer) 0)));
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_237, (MR_Integer) 2)));
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CaseInfo_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_241, (MR_Integer) 1)));
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_245;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_246;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_247;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goals_257;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_258;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_265_265;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_266_266;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_272_272;
#line 329 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236, (MR_Integer) 1)));
#line 330 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_237, (MR_Integer) 0)));
#line 330 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_237, (MR_Integer) 1)));
#line 331 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_241, (MR_Integer) 0)));
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_248_248;
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_249_249;
#line 336 "rbmm.add_rbmm_goal_infos.m"
                              MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv7_Goals_257;

#line 332 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 332 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__CaseInfo_243);
                              }
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__Created_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244, (MR_Integer) 0)));
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__Removed_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244, (MR_Integer) 1)));
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__Carried_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244, (MR_Integer) 2)));
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244, (MR_Integer) 3)));
#line 333 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_244, (MR_Integer) 4)));
#line 3726 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
                              transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_405_405 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
#line 334 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__V_265_265 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_405_405);
                              }
#line 335 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 335 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__V_266_266 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_405_405);
                              }
#line 334 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_245));
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_246));
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_247));
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_265_265));
#line 334 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__V_266_266));
#line 334 "rbmm.add_rbmm_goal_infos.m"
                              }
#line 336 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 336 "rbmm.add_rbmm_goal_infos.m"
                                mercury__list__foldl_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_404_404, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[2], (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[4], transform_hlds__rbmm__add_rbmm_goal_infos__Cases_236, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__add_rbmm_goal_infos__conv7_Goals_257);
                              }
#line 336 "rbmm.add_rbmm_goal_infos.m"
                              transform_hlds__rbmm__add_rbmm_goal_infos__Goals_257 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv7_Goals_257);
#line 341 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 341 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Goals_257, transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_250, &transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_258);
                              }
#line 342 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 342 "rbmm.add_rbmm_goal_infos.m"
                                transform_hlds__rbmm__add_rbmm_goal_infos__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "rbmm.add_rbmm_goal_infos.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__V_272_272, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_258));
#line 342 "rbmm.add_rbmm_goal_infos.m"
                              }
#line 342 "rbmm.add_rbmm_goal_infos.m"
                              {
#line 342 "rbmm.add_rbmm_goal_infos.m"
                                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__V_272_272, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_10, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_11);
#line 342 "rbmm.add_rbmm_goal_infos.m"
                                return;
                              }
#line 329 "rbmm.add_rbmm_goal_infos.m"
                            }
#line 318 "rbmm.add_rbmm_goal_infos.m"
                        }
#line 153 "rbmm.add_rbmm_goal_infos.m"
  }
#line 146 "rbmm.add_rbmm_goal_infos.m"
}

#line 132 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22,
#line 132 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23)
#line 132 "rbmm.add_rbmm_goal_infos.m"
{
#line 139 "rbmm.add_rbmm_goal_infos.m"
  {
#line 139 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 139 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22, (MR_Integer) 0)));
#line 139 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22, (MR_Integer) 1)));
#line 139 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20;
#line 139 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_21;

#line 141 "rbmm.add_rbmm_goal_infos.m"
    {
#line 141 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_19, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_21);
    }
#line 144 "rbmm.add_rbmm_goal_infos.m"
    {
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_Word base;
#line 144 "rbmm.add_rbmm_goal_infos.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "rbmm.add_rbmm_goal_infos.m"
      *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23 = base;
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20));
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_21));
#line 144 "rbmm.add_rbmm_goal_infos.m"
    }
#line 139 "rbmm.add_rbmm_goal_infos.m"
  }
#line 132 "rbmm.add_rbmm_goal_infos.m"
}

#line 102 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29,
#line 102 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30)
#line 102 "rbmm.add_rbmm_goal_infos.m"
{
#line 110 "rbmm.add_rbmm_goal_infos.m"
  {
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_26;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Body_27;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53;
#line 110 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_54;
#line 113 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19;
#line 114 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_21_21;
#line 117 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22;
#line 115 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22;
#line 122 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24;
#line 120 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24;
#line 125 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVarProc_26;

#line 111 "rbmm.add_rbmm_goal_infos.m"
    {
#line 111 "rbmm.add_rbmm_goal_infos.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16, &transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17);
    }
#line 112 "rbmm.add_rbmm_goal_infos.m"
    {
#line 112 "rbmm.add_rbmm_goal_infos.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, &transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18);
    }
#line 3930 "transform_hlds.rbmm.add_rbmm_goal_infos.c"
    transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 113 "rbmm.add_rbmm_goal_infos.m"
    {
#line 113 "rbmm.add_rbmm_goal_infos.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19);
    }
#line 113 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19);
#line 114 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19, (MR_Integer) 0)));
#line 114 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19, (MR_Integer) 1)));
#line 115 "rbmm.add_rbmm_goal_infos.m"
    {
#line 115 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22);
    }
#line 115 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 115 "rbmm.add_rbmm_goal_infos.m"
      {
#line 115 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22);
#line 115 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 115 "rbmm.add_rbmm_goal_infos.m"
      }
#line 117 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 116 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23 = transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22;
#line 117 "rbmm.add_rbmm_goal_infos.m"
    else
#line 118 "rbmm.add_rbmm_goal_infos.m"
      {
#line 118 "rbmm.add_rbmm_goal_infos.m"
        {
#line 118 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]);
        }
#line 118 "rbmm.add_rbmm_goal_infos.m"
      }
#line 120 "rbmm.add_rbmm_goal_infos.m"
    {
#line 120 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24);
    }
#line 120 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 120 "rbmm.add_rbmm_goal_infos.m"
      {
#line 120 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24);
#line 120 "rbmm.add_rbmm_goal_infos.m"
        transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
#line 120 "rbmm.add_rbmm_goal_infos.m"
      }
#line 122 "rbmm.add_rbmm_goal_infos.m"
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
#line 121 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25 = transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24;
#line 122 "rbmm.add_rbmm_goal_infos.m"
    else
#line 123 "rbmm.add_rbmm_goal_infos.m"
      {
#line 123 "rbmm.add_rbmm_goal_infos.m"
        {
#line 123 "rbmm.add_rbmm_goal_infos.m"
          transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]);
        }
#line 123 "rbmm.add_rbmm_goal_infos.m"
      }
#line 125 "rbmm.add_rbmm_goal_infos.m"
    {
#line 125 "rbmm.add_rbmm_goal_infos.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[3], transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVarProc_26);
    }
#line 125 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_26 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVarProc_26);
#line 140 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18, (MR_Integer) 0)));
#line 140 "rbmm.add_rbmm_goal_infos.m"
    transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18, (MR_Integer) 1)));
#line 141 "rbmm.add_rbmm_goal_infos.m"
    {
#line 141 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarProc_26, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_54);
    }
#line 144 "rbmm.add_rbmm_goal_infos.m"
    {
#line 144 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__Body_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53));
#line 144 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_54));
#line 144 "rbmm.add_rbmm_goal_infos.m"
    }
#line 129 "rbmm.add_rbmm_goal_infos.m"
    {
#line 129 "rbmm.add_rbmm_goal_infos.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, &transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28);
    }
#line 130 "rbmm.add_rbmm_goal_infos.m"
    {
#line 130 "rbmm.add_rbmm_goal_infos.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13, transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30);
#line 130 "rbmm.add_rbmm_goal_infos.m"
      return;
    }
#line 110 "rbmm.add_rbmm_goal_infos.m"
  }
#line 102 "rbmm.add_rbmm_goal_infos.m"
}

#line 98 "rbmm.add_rbmm_goal_infos.m"
static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3,
#line 98 "rbmm.add_rbmm_goal_infos.m"
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4)
#line 98 "rbmm.add_rbmm_goal_infos.m"
{
#line 98 "rbmm.add_rbmm_goal_infos.m"
  {
#line 98 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
#line 98 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30;

#line 98 "rbmm.add_rbmm_goal_infos.m"
    {
#line 98 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30);
    }
#line 98 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30));
#line 98 "rbmm.add_rbmm_goal_infos.m"
  }
#line 98 "rbmm.add_rbmm_goal_infos.m"
}

#line 49 "rbmm.add_rbmm_goal_infos.m"
void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_8,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgumentTable_9,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_14,
#line 49 "rbmm.add_rbmm_goal_infos.m"
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_15)
#line 49 "rbmm.add_rbmm_goal_infos.m"
{
#line 97 "rbmm.add_rbmm_goal_infos.m"
  {
#line 97 "rbmm.add_rbmm_goal_infos.m"
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
#line 97 "rbmm.add_rbmm_goal_infos.m"
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16;
#line 98 "rbmm.add_rbmm_goal_infos.m"
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15;

#line 98 "rbmm.add_rbmm_goal_infos.m"
    {
#line 98 "rbmm.add_rbmm_goal_infos.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[0]));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_8));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11));
#line 98 "rbmm.add_rbmm_goal_infos.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12));
#line 98 "rbmm.add_rbmm_goal_infos.m"
    }
#line 98 "rbmm.add_rbmm_goal_infos.m"
    {
#line 98 "rbmm.add_rbmm_goal_infos.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__add_rbmm_goal_infos__V_16_16, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgumentTable_9, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15);
    }
#line 98 "rbmm.add_rbmm_goal_infos.m"
    *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15);
#line 97 "rbmm.add_rbmm_goal_infos.m"
  }
#line 49 "rbmm.add_rbmm_goal_infos.m"
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init(void)
{
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.add_rbmm_goal_infos. */
