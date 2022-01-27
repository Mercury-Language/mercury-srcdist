/*
** Automatically generated from `rbmm.region_transformation.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module transform_hlds.rbmm.region_transformation. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_transformation__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_transformation.mih"


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
#include "int.mih"
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
#include "check_hlds.purity.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.quantification.mih"
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
#include "parse_tree.prog_mode.mih"
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
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"




#line 159 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 162 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 165 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 168 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 171 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 174 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0;

#line 177 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 180 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 183 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 186 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 189 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 192 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 195 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 198 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 201 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 222 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 225 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 228 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 231 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 234 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 237 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 240 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 243 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 246 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 249 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 251 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 254 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 257 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 259 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 261 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 264 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 267 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 269 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 272 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 275 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 277 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 279 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 653 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__653__1_2_p_0(
#line 653 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 653 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71);

#line 1052 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1052 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1052 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1052 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1052 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);

#line 1045 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1045 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1039 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1039 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1039 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1039 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 1024 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1024 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1024 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1024 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1024 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);

#line 1022 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1022 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1016 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1016 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 966 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15);

#line 938 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17);

#line 899 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 866 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 828 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 828 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 807 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 807 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 790 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 774 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 774 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);

#line 763 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);

#line 751 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 743 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27);

#line 737 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 728 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25);

#line 711 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 711 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 711 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10);

#line 687 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 680 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 653 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 653 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg);

#line 639 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);

#line 595 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12);

#line 525 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 517 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 508 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 494 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);

#line 437 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 413 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);

#line 387 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 379 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 343 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);

#line 301 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 263 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);

#line 206 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 206 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 206 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 206 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);

#line 186 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 186 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 186 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 172 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 172 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 172 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 133 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 133 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 133 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 123 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 123 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 122 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 122 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 113 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 113 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 113 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 112 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[9][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[2][16];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[1][17];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[1][14];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[1][19];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][20];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_13[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_13[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[2][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[1][19] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][20] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "resurrection renaming annotation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "ite renaming annotation"))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
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



#line 1709 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1717 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1726 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1735 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1744 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1753 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1761 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1770 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1779 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1788 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1797 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1806 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1814 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1823 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1832 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1840 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1849 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1858 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1866 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1875 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1883 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1892 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1901 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1909 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1918 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1927 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1936 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1945 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1953 "transform_hlds.rbmm.region_transformation.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1974 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1983 "transform_hlds.rbmm.region_transformation.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2004 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 2007 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2009 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2011 "transform_hlds.rbmm.region_transformation.c"
{
#line 2013 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2015 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2018 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2020 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2023 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2025 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2027 "transform_hlds.rbmm.region_transformation.c"
}

#line 2030 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 2033 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2035 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2037 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2039 "transform_hlds.rbmm.region_transformation.c"
{
#line 2041 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2043 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2046 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2048 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2051 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2053 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2055 "transform_hlds.rbmm.region_transformation.c"
}

#line 2058 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 2061 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2063 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2065 "transform_hlds.rbmm.region_transformation.c"
{
#line 2067 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2069 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2072 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2074 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2077 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2079 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2081 "transform_hlds.rbmm.region_transformation.c"
}

#line 2084 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 2087 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2089 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2091 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2093 "transform_hlds.rbmm.region_transformation.c"
{
#line 2095 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2097 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2100 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2102 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2105 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2107 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2109 "transform_hlds.rbmm.region_transformation.c"
}

#line 653 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__653__1_2_p_0(
#line 653 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 653 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71)
#line 653 "rbmm.region_transformation.m"
{
#line 653 "rbmm.region_transformation.m"
  {
#line 653 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 653 "rbmm.region_transformation.m"
    {
#line 653 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[6], ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28)), ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__2_71)));
    }
#line 653 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 653 "rbmm.region_transformation.m"
  }
#line 653 "rbmm.region_transformation.m"
}

#line 42 "rbmm.region_transformation.m"
void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(
#line 42 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__1_1,
#line 42 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_2,
#line 42 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__3_3)
#line 42 "rbmm.region_transformation.m"
{
#line 42 "rbmm.region_transformation.m"
  {
#line 42 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 42 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar1_4 = transform_hlds__rbmm__region_transformation__HeadVar__2_2;
#line 42 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar2_5 = transform_hlds__rbmm__region_transformation__HeadVar__3_3;

#line 42 "rbmm.region_transformation.m"
    {
#line 42 "rbmm.region_transformation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], transform_hlds__rbmm__region_transformation__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_5)));
#line 42 "rbmm.region_transformation.m"
      return;
    }
#line 42 "rbmm.region_transformation.m"
  }
#line 42 "rbmm.region_transformation.m"
}

#line 42 "rbmm.region_transformation.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(
#line 42 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__1_1,
#line 42 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_2)
#line 42 "rbmm.region_transformation.m"
{
#line 42 "rbmm.region_transformation.m"
  {
#line 42 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 42 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3 = transform_hlds__rbmm__region_transformation__HeadVar__1_1;
#line 42 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4 = transform_hlds__rbmm__region_transformation__HeadVar__2_2;

#line 42 "rbmm.region_transformation.m"
    {
#line 42 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4)));
    }
#line 42 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 42 "rbmm.region_transformation.m"
  }
#line 42 "rbmm.region_transformation.m"
}

#line 43 "rbmm.region_transformation.m"
void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(
#line 43 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__1_1,
#line 43 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_2,
#line 43 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__3_3)
#line 43 "rbmm.region_transformation.m"
{
#line 43 "rbmm.region_transformation.m"
  {
#line 43 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 43 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar1_4 = transform_hlds__rbmm__region_transformation__HeadVar__2_2;
#line 43 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar2_5 = transform_hlds__rbmm__region_transformation__HeadVar__3_3;

#line 43 "rbmm.region_transformation.m"
    {
#line 43 "rbmm.region_transformation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], transform_hlds__rbmm__region_transformation__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_5)));
#line 43 "rbmm.region_transformation.m"
      return;
    }
#line 43 "rbmm.region_transformation.m"
  }
#line 43 "rbmm.region_transformation.m"
}

#line 43 "rbmm.region_transformation.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(
#line 43 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__1_1,
#line 43 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_2)
#line 43 "rbmm.region_transformation.m"
{
#line 43 "rbmm.region_transformation.m"
  {
#line 43 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 43 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3 = transform_hlds__rbmm__region_transformation__HeadVar__1_1;
#line 43 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4 = transform_hlds__rbmm__region_transformation__HeadVar__2_2;

#line 43 "rbmm.region_transformation.m"
    {
#line 43 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4)));
    }
#line 43 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 43 "rbmm.region_transformation.m"
  }
#line 43 "rbmm.region_transformation.m"
}

#line 1052 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1052 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1052 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1052 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1052 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12)
#line 1052 "rbmm.region_transformation.m"
{
#line 1055 "rbmm.region_transformation.m"
  {
#line 1055 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1055 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_8;
#line 1055 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_9;
#line 1055 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_10;

#line 1056 "rbmm.region_transformation.m"
    {
#line 1056 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PredId_5, &transform_hlds__rbmm__region_transformation__PredInfo0_8);
    }
#line 1058 "rbmm.region_transformation.m"
    {
#line 1058 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1058 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1058 "rbmm.region_transformation.m"
    }
#line 1059 "rbmm.region_transformation.m"
    {
#line 1059 "rbmm.region_transformation.m"
      check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PPId_9, transform_hlds__rbmm__region_transformation__PredInfo0_8, &transform_hlds__rbmm__region_transformation__PredInfo_10);
    }
#line 1060 "rbmm.region_transformation.m"
    {
#line 1060 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_5, transform_hlds__rbmm__region_transformation__PredInfo_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);
#line 1060 "rbmm.region_transformation.m"
      return;
    }
#line 1055 "rbmm.region_transformation.m"
  }
#line 1052 "rbmm.region_transformation.m"
}

#line 1045 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1045 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1045 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1045 "rbmm.region_transformation.m"
{
#line 1045 "rbmm.region_transformation.m"
  {
#line 1045 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1045 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 1045 "rbmm.region_transformation.m"
    {
#line 1045 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 1045 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 1045 "rbmm.region_transformation.m"
  }
#line 1045 "rbmm.region_transformation.m"
}

#line 1039 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1039 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1039 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1039 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1039 "rbmm.region_transformation.m"
{
#line 1042 "rbmm.region_transformation.m"
  {
#line 1042 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1042 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1042 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1042 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1045 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1043 "rbmm.region_transformation.m"
    {
#line 1043 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1044 "rbmm.region_transformation.m"
    {
#line 1044 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1045 "rbmm.region_transformation.m"
    {
#line 1045 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1045 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1));
#line 1045 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1045 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1045 "rbmm.region_transformation.m"
    }
#line 1045 "rbmm.region_transformation.m"
    {
#line 1045 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1045 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1042 "rbmm.region_transformation.m"
  }
#line 1039 "rbmm.region_transformation.m"
}

#line 1024 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1024 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1024 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1024 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1024 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13)
#line 1024 "rbmm.region_transformation.m"
{
#line 1027 "rbmm.region_transformation.m"
  {
#line 1027 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1027 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_8;
#line 1027 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_9;
#line 1027 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_10;
#line 1027 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_11;
#line 1027 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15;

#line 1028 "rbmm.region_transformation.m"
    {
#line 1028 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1028 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1028 "rbmm.region_transformation.m"
    }
#line 1029 "rbmm.region_transformation.m"
    {
#line 1029 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__rbmm__region_transformation__PPId_8, &transform_hlds__rbmm__region_transformation__PredInfo_9, &transform_hlds__rbmm__region_transformation__ProcInfo0_10);
    }
#line 1030 "rbmm.region_transformation.m"
    {
#line 1030 "rbmm.region_transformation.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__rbmm__region_transformation__ProcInfo0_10, &transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15);
    }
#line 1032 "rbmm.region_transformation.m"
    {
#line 1032 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_8, transform_hlds__rbmm__region_transformation__PredInfo_9, transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);
#line 1032 "rbmm.region_transformation.m"
      return;
    }
#line 1027 "rbmm.region_transformation.m"
  }
#line 1024 "rbmm.region_transformation.m"
}

#line 1022 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1022 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1022 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1022 "rbmm.region_transformation.m"
{
#line 1022 "rbmm.region_transformation.m"
  {
#line 1022 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1022 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13;

#line 1022 "rbmm.region_transformation.m"
    {
#line 1022 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1022 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13));
#line 1022 "rbmm.region_transformation.m"
  }
#line 1022 "rbmm.region_transformation.m"
}

#line 1016 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1016 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1016 "rbmm.region_transformation.m"
{
#line 1019 "rbmm.region_transformation.m"
  {
#line 1019 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1022 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1020 "rbmm.region_transformation.m"
    {
#line 1020 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1021 "rbmm.region_transformation.m"
    {
#line 1021 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1022 "rbmm.region_transformation.m"
    {
#line 1022 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1022 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1));
#line 1022 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1022 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1022 "rbmm.region_transformation.m"
    }
#line 1022 "rbmm.region_transformation.m"
    {
#line 1022 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1022 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1019 "rbmm.region_transformation.m"
  }
#line 1016 "rbmm.region_transformation.m"
}

#line 966 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 966 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 966 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15)
#line 966 "rbmm.region_transformation.m"
{
#line 976 "rbmm.region_transformation.m"
  {
#line 976 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 976 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_10)) == (MR_mktag((MR_Integer) 2))))
#line 979 "rbmm.region_transformation.m"
      {
#line 979 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Right_18 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 0)));
#line 979 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Left_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 1)));
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_20;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_21;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_22;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_36_36;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_46;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__NonLocals_47;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_48;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_49;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_52_52;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_53_53;
#line 979 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;

#line 980 "rbmm.region_transformation.m"
        {
#line 980 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Left_19, &transform_hlds__rbmm__region_transformation__LeftRegVar_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31);
        }
#line 981 "rbmm.region_transformation.m"
        {
#line 981 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_18, &transform_hlds__rbmm__region_transformation__RightRegVar_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28);
        }
#line 991 "rbmm.region_transformation.m"
        {
#line 991 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_50_50, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 991 "rbmm.region_transformation.m"
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_52_52));
#line 992 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_53_53));
#line 992 "rbmm.region_transformation.m"
        }
#line 993 "rbmm.region_transformation.m"
        {
#line 993 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 993 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 993 "rbmm.region_transformation.m"
        }
#line 991 "rbmm.region_transformation.m"
        {
#line 991 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_50_50));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_51_51));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_54_54));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[8]));
#line 991 "rbmm.region_transformation.m"
        }
#line 1005 "rbmm.region_transformation.m"
        {
#line 1005 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__NonLocals_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1006 "rbmm.region_transformation.m"
        {
#line 1006 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__InstmapDelta_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_20);
        }
#line 1007 "rbmm.region_transformation.m"
        {
#line 1007 "rbmm.region_transformation.m"
          hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_47, transform_hlds__rbmm__region_transformation__InstmapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_49);
        }
#line 1009 "rbmm.region_transformation.m"
        {
#line 1009 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentGoal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_46));
#line 1009 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_49));
#line 1009 "rbmm.region_transformation.m"
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_22));
#line 984 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "rbmm.region_transformation.m"
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_14, transform_hlds__rbmm__region_transformation__V_36_36);
        }
#line 979 "rbmm.region_transformation.m"
      }
#line 976 "rbmm.region_transformation.m"
    else
#line 976 "rbmm.region_transformation.m"
      {
#line 977 "rbmm.region_transformation.m"
        {
#line 977 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.ite_renaming_annotation_to_assignment\'/9", (MR_String) "annotation is not assignment");
#line 977 "rbmm.region_transformation.m"
          return;
        }
#line 976 "rbmm.region_transformation.m"
      }
#line 976 "rbmm.region_transformation.m"
  }
#line 966 "rbmm.region_transformation.m"
}

#line 938 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 938 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 938 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17)
#line 938 "rbmm.region_transformation.m"
{
#line 948 "rbmm.region_transformation.m"
  {
#line 948 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 948 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_12)) == (MR_mktag((MR_Integer) 2))))
#line 951 "rbmm.region_transformation.m"
      {
#line 951 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Right_20 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 0)));
#line 951 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Left_21 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 1)));
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_22;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_23;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_24;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 951 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Name_57;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_68;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__NonLocals_69;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_70;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_71;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_72_72;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 951 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 855 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_56;
#line 853 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56;

#line 853 "rbmm.region_transformation.m"
        {
#line 853 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__Left_21)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
        }
#line 853 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 853 "rbmm.region_transformation.m"
          {
#line 853 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ResurNameList_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
#line 853 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 853 "rbmm.region_transformation.m"
          }
#line 855 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 854 "rbmm.region_transformation.m"
          {
#line 854 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_57;

#line 854 "rbmm.region_transformation.m"
            {
#line 854 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__conv1_Name_57 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_56);
            }
#line 854 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_57 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_57);
#line 854 "rbmm.region_transformation.m"
          }
#line 855 "rbmm.region_transformation.m"
        else
#line 856 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_57 = transform_hlds__rbmm__region_transformation__Left_21;
#line 858 "rbmm.region_transformation.m"
        {
#line 858 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_57, &transform_hlds__rbmm__region_transformation__LeftRegVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33);
        }
#line 956 "rbmm.region_transformation.m"
        {
#line 956 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_20, &transform_hlds__rbmm__region_transformation__RightRegVar_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30);
        }
#line 991 "rbmm.region_transformation.m"
        {
#line 991 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_72_72, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 991 "rbmm.region_transformation.m"
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_74_74 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_75_75 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 992 "rbmm.region_transformation.m"
        {
#line 992 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 992 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_75_75));
#line 992 "rbmm.region_transformation.m"
        }
#line 993 "rbmm.region_transformation.m"
        {
#line 993 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 993 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 993 "rbmm.region_transformation.m"
        }
#line 991 "rbmm.region_transformation.m"
        {
#line 991 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentExpr_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_72_72));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_73_73));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_76_76));
#line 991 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[7]));
#line 991 "rbmm.region_transformation.m"
        }
#line 1005 "rbmm.region_transformation.m"
        {
#line 1005 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__NonLocals_69 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1006 "rbmm.region_transformation.m"
        {
#line 1006 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__InstmapDelta_70 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_22);
        }
#line 1007 "rbmm.region_transformation.m"
        {
#line 1007 "rbmm.region_transformation.m"
          hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_69, transform_hlds__rbmm__region_transformation__InstmapDelta_70, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_71);
        }
#line 1009 "rbmm.region_transformation.m"
        {
#line 1009 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_68));
#line 1009 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_71));
#line 1009 "rbmm.region_transformation.m"
        }
#line 959 "rbmm.region_transformation.m"
        {
#line 959 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_24));
#line 959 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "rbmm.region_transformation.m"
        }
#line 959 "rbmm.region_transformation.m"
        {
#line 959 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__Conjs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_16, transform_hlds__rbmm__region_transformation__V_38_38);
        }
#line 951 "rbmm.region_transformation.m"
      }
#line 948 "rbmm.region_transformation.m"
    else
#line 948 "rbmm.region_transformation.m"
      {
#line 949 "rbmm.region_transformation.m"
        {
#line 949 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.resur_renaming_annotation_to_assignment\'/10", (MR_String) "annotation is not assigment");
#line 949 "rbmm.region_transformation.m"
          return;
        }
#line 948 "rbmm.region_transformation.m"
      }
#line 948 "rbmm.region_transformation.m"
  }
#line 938 "rbmm.region_transformation.m"
}

#line 899 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 899 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 899 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 899 "rbmm.region_transformation.m"
{
#line 907 "rbmm.region_transformation.m"
  {
#line 907 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 907 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 907 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 916 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 0))))
#line 909 "rbmm.region_transformation.m"
      {
#line 909 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 909 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 909 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 909 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 909 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 910 "rbmm.region_transformation.m"
        {
#line 910 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
        }
#line 912 "rbmm.region_transformation.m"
        {
#line 912 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
#line 914 "rbmm.region_transformation.m"
        {
#line 914 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 914 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "rbmm.region_transformation.m"
        }
#line 914 "rbmm.region_transformation.m"
        {
#line 914 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 912 "rbmm.region_transformation.m"
        {
#line 912 "rbmm.region_transformation.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
        }
#line 909 "rbmm.region_transformation.m"
      }
#line 916 "rbmm.region_transformation.m"
    else
#line 916 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 1))))
#line 917 "rbmm.region_transformation.m"
        {
#line 917 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 917 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 917 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 917 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 917 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 918 "rbmm.region_transformation.m"
          {
#line 918 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 921 "rbmm.region_transformation.m"
          {
#line 921 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 923 "rbmm.region_transformation.m"
          {
#line 923 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 923 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "rbmm.region_transformation.m"
          }
#line 923 "rbmm.region_transformation.m"
          {
#line 923 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 921 "rbmm.region_transformation.m"
          {
#line 921 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 917 "rbmm.region_transformation.m"
        }
#line 916 "rbmm.region_transformation.m"
      else
#line 926 "rbmm.region_transformation.m"
        {
#line 927 "rbmm.region_transformation.m"
          {
#line 927 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj_before\'/13", (MR_String) "neither create nor remove instruction");
#line 927 "rbmm.region_transformation.m"
            return;
          }
#line 926 "rbmm.region_transformation.m"
        }
#line 929 "rbmm.region_transformation.m"
    {
#line 929 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 929 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "rbmm.region_transformation.m"
    }
#line 929 "rbmm.region_transformation.m"
    {
#line 929 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 907 "rbmm.region_transformation.m"
  }
#line 899 "rbmm.region_transformation.m"
}

#line 866 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 866 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 866 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 866 "rbmm.region_transformation.m"
{
#line 873 "rbmm.region_transformation.m"
  {
#line 873 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 873 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 873 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 882 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 0))))
#line 875 "rbmm.region_transformation.m"
      {
#line 875 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 875 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 875 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 875 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 875 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 876 "rbmm.region_transformation.m"
        {
#line 876 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
        }
#line 878 "rbmm.region_transformation.m"
        {
#line 878 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
#line 880 "rbmm.region_transformation.m"
        {
#line 880 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 880 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "rbmm.region_transformation.m"
        }
#line 880 "rbmm.region_transformation.m"
        {
#line 880 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 878 "rbmm.region_transformation.m"
        {
#line 878 "rbmm.region_transformation.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
        }
#line 875 "rbmm.region_transformation.m"
      }
#line 882 "rbmm.region_transformation.m"
    else
#line 882 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 1))))
#line 883 "rbmm.region_transformation.m"
        {
#line 883 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 883 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 883 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 883 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 883 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 884 "rbmm.region_transformation.m"
          {
#line 884 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 886 "rbmm.region_transformation.m"
          {
#line 886 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 888 "rbmm.region_transformation.m"
          {
#line 888 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 888 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "rbmm.region_transformation.m"
          }
#line 888 "rbmm.region_transformation.m"
          {
#line 888 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 886 "rbmm.region_transformation.m"
          {
#line 886 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 883 "rbmm.region_transformation.m"
        }
#line 882 "rbmm.region_transformation.m"
      else
#line 891 "rbmm.region_transformation.m"
        {
#line 892 "rbmm.region_transformation.m"
          {
#line 892 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj\'/13", (MR_String) "neither create nor remove instruction");
#line 892 "rbmm.region_transformation.m"
            return;
          }
#line 891 "rbmm.region_transformation.m"
        }
#line 894 "rbmm.region_transformation.m"
    {
#line 894 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 894 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "rbmm.region_transformation.m"
    }
#line 894 "rbmm.region_transformation.m"
    {
#line 894 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 873 "rbmm.region_transformation.m"
  }
#line 866 "rbmm.region_transformation.m"
}

#line 828 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 828 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 828 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 828 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 828 "rbmm.region_transformation.m"
{
#line 834 "rbmm.region_transformation.m"
  {
#line 834 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 834 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 837 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 835 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 835 "rbmm.region_transformation.m"
    {
#line 835 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 835 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 835 "rbmm.region_transformation.m"
      {
#line 835 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 835 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 835 "rbmm.region_transformation.m"
      }
#line 837 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 836 "rbmm.region_transformation.m"
      {
#line 836 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 836 "rbmm.region_transformation.m"
        {
#line 836 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__conv1_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, (MR_Integer) 0);
        }
#line 836 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 836 "rbmm.region_transformation.m"
      }
#line 837 "rbmm.region_transformation.m"
    else
#line 839 "rbmm.region_transformation.m"
      {
#line 839 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 837 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 837 "rbmm.region_transformation.m"
        {
#line 837 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 837 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 837 "rbmm.region_transformation.m"
          {
#line 837 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 837 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 837 "rbmm.region_transformation.m"
          }
#line 839 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 838 "rbmm.region_transformation.m"
          {
#line 838 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 838 "rbmm.region_transformation.m"
            {
#line 838 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__conv3_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, (MR_Integer) 0);
            }
#line 838 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 838 "rbmm.region_transformation.m"
          }
#line 839 "rbmm.region_transformation.m"
        else
#line 840 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 839 "rbmm.region_transformation.m"
      }
#line 842 "rbmm.region_transformation.m"
    {
#line 842 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 842 "rbmm.region_transformation.m"
      return;
    }
#line 834 "rbmm.region_transformation.m"
  }
#line 828 "rbmm.region_transformation.m"
}

#line 807 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 807 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 807 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 807 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 807 "rbmm.region_transformation.m"
{
#line 813 "rbmm.region_transformation.m"
  {
#line 813 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 813 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 816 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 814 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 814 "rbmm.region_transformation.m"
    {
#line 814 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 814 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 814 "rbmm.region_transformation.m"
      {
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 814 "rbmm.region_transformation.m"
      }
#line 816 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 815 "rbmm.region_transformation.m"
      {
#line 815 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 815 "rbmm.region_transformation.m"
        {
#line 815 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, &transform_hlds__rbmm__region_transformation__conv1_Name_19);
        }
#line 815 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 815 "rbmm.region_transformation.m"
      }
#line 816 "rbmm.region_transformation.m"
    else
#line 818 "rbmm.region_transformation.m"
      {
#line 818 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 816 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 816 "rbmm.region_transformation.m"
        {
#line 816 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 816 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 816 "rbmm.region_transformation.m"
          {
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 816 "rbmm.region_transformation.m"
          }
#line 818 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 817 "rbmm.region_transformation.m"
          {
#line 817 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 817 "rbmm.region_transformation.m"
            {
#line 817 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, &transform_hlds__rbmm__region_transformation__conv3_Name_19);
            }
#line 817 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 817 "rbmm.region_transformation.m"
          }
#line 818 "rbmm.region_transformation.m"
        else
#line 819 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 818 "rbmm.region_transformation.m"
      }
#line 821 "rbmm.region_transformation.m"
    {
#line 821 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 821 "rbmm.region_transformation.m"
      return;
    }
#line 813 "rbmm.region_transformation.m"
  }
#line 807 "rbmm.region_transformation.m"
}

#line 790 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 790 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 790 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 790 "rbmm.region_transformation.m"
{
#line 796 "rbmm.region_transformation.m"
  {
#line 796 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 796 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_20;
#line 796 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_44;
#line 816 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_43;
#line 814 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43;

#line 797 "rbmm.region_transformation.m"
    {
#line 797 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_20 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_12, transform_hlds__rbmm__region_transformation__Node_15);
    }
#line 814 "rbmm.region_transformation.m"
    {
#line 814 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
    }
#line 814 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 814 "rbmm.region_transformation.m"
      {
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 814 "rbmm.region_transformation.m"
      }
#line 816 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 815 "rbmm.region_transformation.m"
      {
#line 815 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_44;

#line 815 "rbmm.region_transformation.m"
        {
#line 815 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_43, &transform_hlds__rbmm__region_transformation__conv1_Name_44);
        }
#line 815 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_44);
#line 815 "rbmm.region_transformation.m"
      }
#line 816 "rbmm.region_transformation.m"
    else
#line 818 "rbmm.region_transformation.m"
      {
#line 818 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_45;
#line 816 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_45;

#line 816 "rbmm.region_transformation.m"
        {
#line 816 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
        }
#line 816 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 816 "rbmm.region_transformation.m"
          {
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 816 "rbmm.region_transformation.m"
          }
#line 818 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 817 "rbmm.region_transformation.m"
          {
#line 817 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_44;

#line 817 "rbmm.region_transformation.m"
            {
#line 817 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_45, &transform_hlds__rbmm__region_transformation__conv3_Name_44);
            }
#line 817 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_44);
#line 817 "rbmm.region_transformation.m"
          }
#line 818 "rbmm.region_transformation.m"
        else
#line 819 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_44 = transform_hlds__rbmm__region_transformation__RegName_20;
#line 818 "rbmm.region_transformation.m"
      }
#line 821 "rbmm.region_transformation.m"
    {
#line 821 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_44, transform_hlds__rbmm__region_transformation__RegVar_16, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 821 "rbmm.region_transformation.m"
      return;
    }
#line 796 "rbmm.region_transformation.m"
  }
#line 790 "rbmm.region_transformation.m"
}

#line 774 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 774 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 774 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 774 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20)
#line 774 "rbmm.region_transformation.m"
{
#line 781 "rbmm.region_transformation.m"
  {
#line 781 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 781 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 779 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_RegVar0_14;

#line 779 "rbmm.region_transformation.m"
    {
#line 779 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), &transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
    }
#line 779 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 779 "rbmm.region_transformation.m"
      {
#line 779 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__RegVar0_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
#line 779 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 779 "rbmm.region_transformation.m"
      }
#line 781 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 780 "rbmm.region_transformation.m"
      {
#line 780 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__RegVar_10 = transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 780 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19;
#line 780 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17;
#line 780 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15;
#line 780 "rbmm.region_transformation.m"
      }
#line 781 "rbmm.region_transformation.m"
    else
#line 782 "rbmm.region_transformation.m"
      {
#line 782 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_22_22;

#line 782 "rbmm.region_transformation.m"
        {
#line 782 "rbmm.region_transformation.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__rbmm__region_transformation__Name_9, transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18);
        }
#line 783 "rbmm.region_transformation.m"
        {
#line 783 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_22_22 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 783 "rbmm.region_transformation.m"
        {
#line 783 "rbmm.region_transformation.m"
          parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__V_22_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);
        }
#line 784 "rbmm.region_transformation.m"
        {
#line 784 "rbmm.region_transformation.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), ((MR_Box) (*transform_hlds__rbmm__region_transformation__RegVar_10)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16);
#line 784 "rbmm.region_transformation.m"
          return;
        }
#line 782 "rbmm.region_transformation.m"
      }
#line 781 "rbmm.region_transformation.m"
  }
#line 774 "rbmm.region_transformation.m"
}

#line 763 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 763 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 763 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22)
#line 763 "rbmm.region_transformation.m"
{
#line 767 "rbmm.region_transformation.m"
  {
#line 767 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 767 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_16;

#line 768 "rbmm.region_transformation.m"
    {
#line 768 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_16 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_10, transform_hlds__rbmm__region_transformation__Node_11);
    }
#line 769 "rbmm.region_transformation.m"
    {
#line 769 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__RegName_16, transform_hlds__rbmm__region_transformation__RegVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);
#line 769 "rbmm.region_transformation.m"
      return;
    }
#line 767 "rbmm.region_transformation.m"
  }
#line 763 "rbmm.region_transformation.m"
}

#line 751 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 751 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 751 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 751 "rbmm.region_transformation.m"
{
#line 751 "rbmm.region_transformation.m"
  {
#line 751 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 751 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26;
#line 751 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28;
#line 751 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30;
#line 751 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_17;

#line 751 "rbmm.region_transformation.m"
    {
#line 751 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_17);
    }
#line 751 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26));
#line 751 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28));
#line 751 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30));
#line 751 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_17));
#line 751 "rbmm.region_transformation.m"
  }
#line 751 "rbmm.region_transformation.m"
}

#line 743 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 743 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 743 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27)
#line 743 "rbmm.region_transformation.m"
{
#line 753 "rbmm.region_transformation.m"
  {
#line 753 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 753 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19;
#line 750 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19;

#line 750 "rbmm.region_transformation.m"
    {
#line 750 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_13)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
    }
#line 750 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 750 "rbmm.region_transformation.m"
      {
#line 750 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
#line 750 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 750 "rbmm.region_transformation.m"
      }
#line 753 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 751 "rbmm.region_transformation.m"
      {
#line 751 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_28_28;
#line 751 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21;
#line 751 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23;
#line 751 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25;
#line 751 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27;

#line 751 "rbmm.region_transformation.m"
        {
#line 751 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 751 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_12[0]));
#line 751 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1));
#line 751 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 751 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_14));
#line 751 "rbmm.region_transformation.m"
        }
#line 751 "rbmm.region_transformation.m"
        {
#line 751 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], transform_hlds__rbmm__region_transformation__V_28_28, transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
        }
#line 751 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21);
#line 751 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23);
#line 751 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25);
#line 751 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
#line 751 "rbmm.region_transformation.m"
      }
#line 753 "rbmm.region_transformation.m"
    else
#line 754 "rbmm.region_transformation.m"
      {
#line 754 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26;
#line 754 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24;
#line 754 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22;
#line 754 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20;
#line 754 "rbmm.region_transformation.m"
      }
#line 753 "rbmm.region_transformation.m"
  }
#line 743 "rbmm.region_transformation.m"
}

#line 737 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 737 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 737 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 737 "rbmm.region_transformation.m"
{
#line 737 "rbmm.region_transformation.m"
  {
#line 737 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 737 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24;
#line 737 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26;
#line 737 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28;
#line 737 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_15;

#line 737 "rbmm.region_transformation.m"
    {
#line 737 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_15);
    }
#line 737 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24));
#line 737 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26));
#line 737 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28));
#line 737 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_15));
#line 737 "rbmm.region_transformation.m"
  }
#line 737 "rbmm.region_transformation.m"
}

#line 728 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 728 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 728 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25)
#line 728 "rbmm.region_transformation.m"
{
#line 739 "rbmm.region_transformation.m"
  {
#line 739 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 739 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17;
#line 736 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17;

#line 736 "rbmm.region_transformation.m"
    {
#line 736 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_12)), &transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
    }
#line 736 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 736 "rbmm.region_transformation.m"
      {
#line 736 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
#line 736 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 736 "rbmm.region_transformation.m"
      }
#line 739 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 737 "rbmm.region_transformation.m"
      {
#line 737 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19;
#line 737 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21;
#line 737 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23;
#line 737 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25;

#line 737 "rbmm.region_transformation.m"
        {
#line 737 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[12], transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
        }
#line 737 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19);
#line 737 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21);
#line 737 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23);
#line 737 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
#line 737 "rbmm.region_transformation.m"
      }
#line 739 "rbmm.region_transformation.m"
    else
#line 740 "rbmm.region_transformation.m"
      {
#line 740 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24;
#line 740 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22;
#line 740 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20;
#line 740 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18;
#line 740 "rbmm.region_transformation.m"
      }
#line 739 "rbmm.region_transformation.m"
  }
#line 728 "rbmm.region_transformation.m"
}

#line 711 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 711 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 711 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 711 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10)
#line 711 "rbmm.region_transformation.m"
{
#line 716 "rbmm.region_transformation.m"
  {
#line 716 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 719 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 717 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11;
#line 724 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 722 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12;

#line 717 "rbmm.region_transformation.m"
    {
#line 717 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__ResurRenamingProc_6, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
    }
#line 717 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 717 "rbmm.region_transformation.m"
      {
#line 717 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenaming0_11 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
#line 717 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 717 "rbmm.region_transformation.m"
      }
#line 719 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 718 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 719 "rbmm.region_transformation.m"
    else
#line 720 "rbmm.region_transformation.m"
      {
#line 720 "rbmm.region_transformation.m"
        {
#line 720 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 720 "rbmm.region_transformation.m"
      }
#line 722 "rbmm.region_transformation.m"
    {
#line 722 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__IteRenamingProc_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
    }
#line 722 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 722 "rbmm.region_transformation.m"
      {
#line 722 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenaming0_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
#line 722 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 722 "rbmm.region_transformation.m"
      }
#line 724 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 723 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__IteRenaming_10 = transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 724 "rbmm.region_transformation.m"
    else
#line 725 "rbmm.region_transformation.m"
      {
#line 725 "rbmm.region_transformation.m"
        {
#line 725 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__IteRenaming_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 725 "rbmm.region_transformation.m"
      }
#line 716 "rbmm.region_transformation.m"
  }
#line 711 "rbmm.region_transformation.m"
}

#line 687 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 687 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 687 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 687 "rbmm.region_transformation.m"
{
#line 687 "rbmm.region_transformation.m"
  {
#line 687 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 687 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 687 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 687 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 687 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 687 "rbmm.region_transformation.m"
    {
#line 687 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 687 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 687 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 687 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 687 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 687 "rbmm.region_transformation.m"
  }
#line 687 "rbmm.region_transformation.m"
}

#line 680 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 680 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 680 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 680 "rbmm.region_transformation.m"
{
#line 680 "rbmm.region_transformation.m"
  {
#line 680 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 680 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 680 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 680 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 680 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 680 "rbmm.region_transformation.m"
    {
#line 680 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 680 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 680 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 680 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 680 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 680 "rbmm.region_transformation.m"
  }
#line 680 "rbmm.region_transformation.m"
}

#line 653 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 653 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg)
#line 653 "rbmm.region_transformation.m"
{
#line 653 "rbmm.region_transformation.m"
  {
#line 653 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 653 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;

#line 653 "rbmm.region_transformation.m"
    {
#line 653 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__653__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))));
    }
#line 653 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 653 "rbmm.region_transformation.m"
  }
#line 653 "rbmm.region_transformation.m"
}

#line 639 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 639 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 639 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66)
#line 639 "rbmm.region_transformation.m"
{
#line 652 "rbmm.region_transformation.m"
  {
#line 652 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 0)));
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 1)));
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RemovedGoal_54;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FlatConjs_56;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ConjsInfo_58;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 2)));
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_67_67;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_99_99;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_100_100;
#line 652 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_103_103;
#line 699 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Info_42;
#line 661 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 662 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 662 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 662 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 708 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_57_57;

#line 653 "rbmm.region_transformation.m"
    {
#line 653 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 653 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
#line 653 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1));
#line 653 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 653 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "rbmm.region_transformation.m"
    }
#line 653 "rbmm.region_transformation.m"
    {
#line 653 "rbmm.region_transformation.m"
      mercury__require__expect_4_p_0(transform_hlds__rbmm__region_transformation__V_67_67, (MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_case\'/17", (MR_String) "NYI: multi-cons-id cases");
    }
#line 657 "rbmm.region_transformation.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 659 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 657 "rbmm.region_transformation.m"
    else
#line 657 "rbmm.region_transformation.m"
      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 656 "rbmm.region_transformation.m"
        {
#line 656 "rbmm.region_transformation.m"
          MR_Integer transform_hlds__rbmm__region_transformation__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 2)));
#line 656 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 1)));
#line 656 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 3)));

#line 656 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = (transform_hlds__rbmm__region_transformation__V_72_72 == (MR_Integer) 0);
#line 656 "rbmm.region_transformation.m"
        }
#line 657 "rbmm.region_transformation.m"
      else
#line 657 "rbmm.region_transformation.m"
        if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 658 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 657 "rbmm.region_transformation.m"
        else
#line 657 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 657 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 657 "rbmm.region_transformation.m"
          else
#line 657 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 660 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 657 "rbmm.region_transformation.m"
            else
#line 657 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_FALSE;
#line 661 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 661 "rbmm.region_transformation.m"
      {
#line 662 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 662 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Info_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 662 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 662 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 662 "rbmm.region_transformation.m"
          {
#line 662 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 1)));
#line 662 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 2)));
#line 662 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 3)));
#line 662 "rbmm.region_transformation.m"
          }
#line 661 "rbmm.region_transformation.m"
      }
#line 699 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 664 "rbmm.region_transformation.m"
      {
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_43;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Context_44;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_46;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_47;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs2_52;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs_53;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_90_90;
#line 665 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_45_45;
#line 690 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Before_49;
#line 690 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__After_50;
#line 675 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_78_78;
#line 675 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_V_78_78;

#line 664 "rbmm.region_transformation.m"
        {
#line 664 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ProgPoint_43 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__Info_42);
        }
#line 665 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Context_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 0)));
#line 665 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 1)));
#line 666 "rbmm.region_transformation.m"
        {
#line 666 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_43, &transform_hlds__rbmm__region_transformation__ResurRenaming_46, &transform_hlds__rbmm__region_transformation__IteRenaming_47);
        }
#line 670 "rbmm.region_transformation.m"
        {
#line 670 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48);
        }
#line 675 "rbmm.region_transformation.m"
        {
#line 675 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_43)), &transform_hlds__rbmm__region_transformation__conv0_V_78_78);
        }
#line 675 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 675 "rbmm.region_transformation.m"
          {
#line 675 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_78_78);
#line 675 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 675 "rbmm.region_transformation.m"
          }
#line 675 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 675 "rbmm.region_transformation.m"
          {
#line 676 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Before_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 0)));
#line 676 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__After_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 1)));
#line 676 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 675 "rbmm.region_transformation.m"
          }
#line 690 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 683 "rbmm.region_transformation.m"
          {
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_119_119;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_120_120;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_122_122;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs1_51;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_79_79;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82;
#line 683 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 679 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80;
#line 679 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81;
#line 679 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82;
#line 679 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_51;
#line 686 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84;
#line 686 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85;
#line 686 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86;
#line 686 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs2_52;

#line 680 "rbmm.region_transformation.m"
            {
#line 680 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 680 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 680 "rbmm.region_transformation.m"
            }
#line 4734 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 4736 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_119_119 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 4738 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_120_120 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 4740 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4742 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_122_122 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 679 "rbmm.region_transformation.m"
            {
#line 679 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_79_79, transform_hlds__rbmm__region_transformation__Before_49, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
            }
#line 679 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80);
#line 679 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81);
#line 679 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82);
#line 679 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs1_51 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
#line 687 "rbmm.region_transformation.m"
            {
#line 687 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 687 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 687 "rbmm.region_transformation.m"
            }
#line 686 "rbmm.region_transformation.m"
            {
#line 686 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_83_83, transform_hlds__rbmm__region_transformation__After_50, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs1_51)), &transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
            }
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84);
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85);
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86);
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
#line 683 "rbmm.region_transformation.m"
          }
#line 690 "rbmm.region_transformation.m"
        else
#line 691 "rbmm.region_transformation.m"
          {
#line 691 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 691 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 691 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 691 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 691 "rbmm.region_transformation.m"
          }
#line 695 "rbmm.region_transformation.m"
        {
#line 695 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__IteRenaming_47, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__Conjs2_52, &transform_hlds__rbmm__region_transformation__Conjs_53);
        }
#line 698 "rbmm.region_transformation.m"
        {
#line 698 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 698 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 1) = ((MR_Box) ((MR_Integer) 0));
#line 698 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_53));
#line 698 "rbmm.region_transformation.m"
        }
#line 698 "rbmm.region_transformation.m"
        {
#line 698 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_90_90));
#line 698 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_42));
#line 698 "rbmm.region_transformation.m"
        }
#line 664 "rbmm.region_transformation.m"
      }
#line 699 "rbmm.region_transformation.m"
    else
#line 700 "rbmm.region_transformation.m"
      {
#line 700 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Info_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 700 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));

#line 701 "rbmm.region_transformation.m"
        {
#line 701 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_2[11])));
#line 701 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_105));
#line 701 "rbmm.region_transformation.m"
        }
#line 701 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65;
#line 701 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63;
#line 701 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61;
#line 700 "rbmm.region_transformation.m"
      }
#line 703 "rbmm.region_transformation.m"
    {
#line 703 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_18, transform_hlds__rbmm__region_transformation__Graph_19, transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);
    }
#line 707 "rbmm.region_transformation.m"
    {
#line 707 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95));
#line 707 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "rbmm.region_transformation.m"
    }
#line 707 "rbmm.region_transformation.m"
    {
#line 707 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RemovedGoal_54));
#line 707 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_100_100));
#line 707 "rbmm.region_transformation.m"
    }
#line 707 "rbmm.region_transformation.m"
    {
#line 707 "rbmm.region_transformation.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__V_99_99, &transform_hlds__rbmm__region_transformation__FlatConjs_56);
    }
#line 708 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 708 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ConjsInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 709 "rbmm.region_transformation.m"
    {
#line 709 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 709 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 709 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 1) = ((MR_Box) ((MR_Integer) 0));
#line 709 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FlatConjs_56));
#line 709 "rbmm.region_transformation.m"
    }
#line 709 "rbmm.region_transformation.m"
    {
#line 709 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_103_103));
#line 709 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConjsInfo_58));
#line 709 "rbmm.region_transformation.m"
    }
#line 651 "rbmm.region_transformation.m"
    {
#line 651 "rbmm.region_transformation.m"
      MR_Word base;
#line 651 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 651 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__11_11 = base;
#line 651 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__MainConsId_27));
#line 651 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 651 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60));
#line 651 "rbmm.region_transformation.m"
    }
#line 652 "rbmm.region_transformation.m"
  }
#line 639 "rbmm.region_transformation.m"
}

#line 595 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 595 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 595 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12)
#line 595 "rbmm.region_transformation.m"
{
#line 601 "rbmm.region_transformation.m"
  {
#line 601 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 601 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 2))))
#line 618 "rbmm.region_transformation.m"
      {
#line 618 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 618 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 617 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 617 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 618 "rbmm.region_transformation.m"
      }
#line 601 "rbmm.region_transformation.m"
    else
#line 601 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 0))))
#line 601 "rbmm.region_transformation.m"
        {
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 1)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 2)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ArgModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 3)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__IsUnique_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 5)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__SubInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 6)));
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Node_28;
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__NodeType_29;
#line 602 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation___HowToConstruct0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 4)));

#line 604 "rbmm.region_transformation.m"
          {
#line 604 "rbmm.region_transformation.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Var_21, &transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 605 "rbmm.region_transformation.m"
          {
#line 605 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__NodeType_29 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 606 "rbmm.region_transformation.m"
          {
#line 606 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__region_transformation__NodeType_29, transform_hlds__rbmm__region_transformation__ModuleInfo_1);
          }
#line 608 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 607 "rbmm.region_transformation.m"
            {
#line 607 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 607 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 607 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 607 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 607 "rbmm.region_transformation.m"
            }
#line 608 "rbmm.region_transformation.m"
          else
#line 609 "rbmm.region_transformation.m"
            {
#line 609 "rbmm.region_transformation.m"
              MR_String transform_hlds__rbmm__region_transformation__Name_30;
#line 609 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__RegVar_31;
#line 609 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__HowToConstruct_32;

#line 609 "rbmm.region_transformation.m"
              {
#line 609 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Name_30 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
              }
#line 610 "rbmm.region_transformation.m"
              {
#line 610 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__Name_30, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, &transform_hlds__rbmm__region_transformation__RegVar_31, transform_hlds__rbmm__region_transformation__HeadVar__7_7, transform_hlds__rbmm__region_transformation__HeadVar__8_8, transform_hlds__rbmm__region_transformation__HeadVar__9_9, transform_hlds__rbmm__region_transformation__HeadVar__10_10, transform_hlds__rbmm__region_transformation__HeadVar__11_11, transform_hlds__rbmm__region_transformation__HeadVar__12_12);
              }
#line 612 "rbmm.region_transformation.m"
              {
#line 612 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__HowToConstruct_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__HowToConstruct_32, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegVar_31));
#line 612 "rbmm.region_transformation.m"
              }
#line 613 "rbmm.region_transformation.m"
              {
#line 613 "rbmm.region_transformation.m"
                MR_Word base;
#line 613 "rbmm.region_transformation.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 613 "rbmm.region_transformation.m"
                *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = base;
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_21));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConsId_22));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_23));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ArgModes_24));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HowToConstruct_32));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IsUnique_26));
#line 613 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__SubInfo_27));
#line 613 "rbmm.region_transformation.m"
              }
#line 609 "rbmm.region_transformation.m"
            }
#line 601 "rbmm.region_transformation.m"
        }
#line 601 "rbmm.region_transformation.m"
      else
#line 601 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 1))))
#line 618 "rbmm.region_transformation.m"
          {
#line 618 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 618 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 617 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 617 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 618 "rbmm.region_transformation.m"
          }
#line 601 "rbmm.region_transformation.m"
        else
#line 601 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 618 "rbmm.region_transformation.m"
            {
#line 626 "rbmm.region_transformation.m"
              {
#line 626 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.annotate_constructions_unification\'/12", (MR_String) "complicated unify");
#line 626 "rbmm.region_transformation.m"
                return;
              }
#line 618 "rbmm.region_transformation.m"
            }
#line 601 "rbmm.region_transformation.m"
          else
#line 618 "rbmm.region_transformation.m"
            {
#line 618 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 618 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 617 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 617 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 618 "rbmm.region_transformation.m"
            }
#line 601 "rbmm.region_transformation.m"
  }
#line 595 "rbmm.region_transformation.m"
}

#line 525 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 525 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 525 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 525 "rbmm.region_transformation.m"
{
#line 525 "rbmm.region_transformation.m"
  {
#line 525 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 525 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11;
#line 525 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62;
#line 525 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64;
#line 525 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66;

#line 525 "rbmm.region_transformation.m"
    {
#line 525 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66);
    }
#line 525 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11));
#line 525 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62));
#line 525 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64));
#line 525 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66));
#line 525 "rbmm.region_transformation.m"
  }
#line 525 "rbmm.region_transformation.m"
}

#line 517 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 517 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 517 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 517 "rbmm.region_transformation.m"
{
#line 517 "rbmm.region_transformation.m"
  {
#line 517 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 517 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50;
#line 517 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52;
#line 517 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54;
#line 517 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56;

#line 517 "rbmm.region_transformation.m"
    {
#line 517 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56);
    }
#line 517 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50));
#line 517 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52));
#line 517 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54));
#line 517 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56));
#line 517 "rbmm.region_transformation.m"
  }
#line 517 "rbmm.region_transformation.m"
}

#line 508 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 508 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 508 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 508 "rbmm.region_transformation.m"
{
#line 508 "rbmm.region_transformation.m"
  {
#line 508 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 508 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50;
#line 508 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52;
#line 508 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54;
#line 508 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56;

#line 508 "rbmm.region_transformation.m"
    {
#line 508 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56);
    }
#line 508 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50));
#line 508 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52));
#line 508 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54));
#line 508 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56));
#line 508 "rbmm.region_transformation.m"
  }
#line 508 "rbmm.region_transformation.m"
}

#line 494 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 494 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 494 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88)
#line 494 "rbmm.region_transformation.m"
{
#line 505 "rbmm.region_transformation.m"
  {
#line 505 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 505 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 0)));
#line 505 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81;
#line 505 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 1)));

#line 515 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 0))))
#line 533 "rbmm.region_transformation.m"
      {
#line 533 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Goal0_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79), (MR_Integer) 0);
#line 533 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Goal_43;

#line 534 "rbmm.region_transformation.m"
        {
#line 534 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_42, &transform_hlds__rbmm__region_transformation__Goal_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
        }
#line 538 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__rbmm__region_transformation__Goal_43);
#line 533 "rbmm.region_transformation.m"
      }
#line 515 "rbmm.region_transformation.m"
    else
#line 515 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 2))))
#line 585 "rbmm.region_transformation.m"
        {
#line 586 "rbmm.region_transformation.m"
          {
#line 586 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
            return;
          }
#line 585 "rbmm.region_transformation.m"
        }
#line 515 "rbmm.region_transformation.m"
      else
#line 515 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 1))))
#line 585 "rbmm.region_transformation.m"
          {
#line 586 "rbmm.region_transformation.m"
            {
#line 586 "rbmm.region_transformation.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
              return;
            }
#line 585 "rbmm.region_transformation.m"
          }
#line 515 "rbmm.region_transformation.m"
        else
#line 515 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 585 "rbmm.region_transformation.m"
            {
#line 586 "rbmm.region_transformation.m"
              {
#line 586 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
                return;
              }
#line 585 "rbmm.region_transformation.m"
            }
#line 515 "rbmm.region_transformation.m"
          else
#line 515 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 515 "rbmm.region_transformation.m"
              {
#line 515 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 515 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 515 "rbmm.region_transformation.m"
                if ((transform_hlds__rbmm__region_transformation__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "rbmm.region_transformation.m"
                  {
#line 586 "rbmm.region_transformation.m"
                    {
#line 586 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
                      return;
                    }
#line 585 "rbmm.region_transformation.m"
                  }
#line 515 "rbmm.region_transformation.m"
                else
#line 507 "rbmm.region_transformation.m"
                  {
#line 507 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145;
#line 507 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__Conjs1_33;
#line 507 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__Conjs_34;
#line 507 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__V_127_127;
#line 508 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84;
#line 508 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86;
#line 508 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88;

#line 508 "rbmm.region_transformation.m"
                    {
#line 508 "rbmm.region_transformation.m"
                      transform_hlds__rbmm__region_transformation__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 508 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 508 "rbmm.region_transformation.m"
                    }
#line 5492 "transform_hlds.rbmm.region_transformation.c"
                    transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 508 "rbmm.region_transformation.m"
                    {
#line 508 "rbmm.region_transformation.m"
                      mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_127_127, transform_hlds__rbmm__region_transformation__V_197_197, &transform_hlds__rbmm__region_transformation__Conjs1_33, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
                    }
#line 508 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84);
#line 508 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86);
#line 508 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
#line 513 "rbmm.region_transformation.m"
                    {
#line 513 "rbmm.region_transformation.m"
                      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__Conjs1_33, &transform_hlds__rbmm__region_transformation__Conjs_34);
                    }
#line 514 "rbmm.region_transformation.m"
                    {
#line 514 "rbmm.region_transformation.m"
                      transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 514 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_198_198));
#line 514 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_34));
#line 514 "rbmm.region_transformation.m"
                    }
#line 507 "rbmm.region_transformation.m"
                  }
#line 515 "rbmm.region_transformation.m"
              }
#line 515 "rbmm.region_transformation.m"
            else
#line 515 "rbmm.region_transformation.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 515 "rbmm.region_transformation.m"
                {
#line 515 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 515 "rbmm.region_transformation.m"
                  if ((transform_hlds__rbmm__region_transformation__V_199_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "rbmm.region_transformation.m"
                    {
#line 586 "rbmm.region_transformation.m"
                      {
#line 586 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
                        return;
                      }
#line 585 "rbmm.region_transformation.m"
                    }
#line 515 "rbmm.region_transformation.m"
                  else
#line 516 "rbmm.region_transformation.m"
                    {
#line 516 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157;
#line 516 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Disjs_37;
#line 516 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__V_120_120;
#line 517 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84;
#line 517 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86;
#line 517 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88;

#line 517 "rbmm.region_transformation.m"
                      {
#line 517 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 517 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 517 "rbmm.region_transformation.m"
                      }
#line 5593 "transform_hlds.rbmm.region_transformation.c"
                      transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 517 "rbmm.region_transformation.m"
                      {
#line 517 "rbmm.region_transformation.m"
                        mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_120_120, transform_hlds__rbmm__region_transformation__V_199_199, &transform_hlds__rbmm__region_transformation__Disjs_37, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
                      }
#line 517 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84);
#line 517 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86);
#line 517 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
#line 522 "rbmm.region_transformation.m"
                      {
#line 522 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 522 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Disjs_37));
#line 522 "rbmm.region_transformation.m"
                      }
#line 516 "rbmm.region_transformation.m"
                    }
#line 515 "rbmm.region_transformation.m"
                }
#line 515 "rbmm.region_transformation.m"
              else
#line 515 "rbmm.region_transformation.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 585 "rbmm.region_transformation.m"
                  {
#line 586 "rbmm.region_transformation.m"
                    {
#line 586 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
                      return;
                    }
#line 585 "rbmm.region_transformation.m"
                  }
#line 515 "rbmm.region_transformation.m"
                else
#line 515 "rbmm.region_transformation.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 563 "rbmm.region_transformation.m"
                    {
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 4)));
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Cond_51;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Then_52;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Else_53;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98;
#line 563 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99;

#line 564 "rbmm.region_transformation.m"
                      {
#line 564 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Cond0_48, &transform_hlds__rbmm__region_transformation__Cond_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96);
                      }
#line 568 "rbmm.region_transformation.m"
                      {
#line 568 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Then0_49, &transform_hlds__rbmm__region_transformation__Then_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99);
                      }
#line 572 "rbmm.region_transformation.m"
                      {
#line 572 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Else0_50, &transform_hlds__rbmm__region_transformation__Else_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
                      }
#line 576 "rbmm.region_transformation.m"
                      {
#line 576 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 576 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 576 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Vars_47));
#line 576 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cond_51));
#line 576 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Then_52));
#line 576 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Else_53));
#line 576 "rbmm.region_transformation.m"
                      }
#line 563 "rbmm.region_transformation.m"
                    }
#line 515 "rbmm.region_transformation.m"
                  else
#line 515 "rbmm.region_transformation.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 540 "rbmm.region_transformation.m"
                      {
#line 540 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Reason0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 540 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Reason_46;
#line 540 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 540 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Goal_136;
#line 554 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Var_133;
#line 552 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation___Kind_45;

#line 552 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Reason0_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 552 "rbmm.region_transformation.m"
                        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 552 "rbmm.region_transformation.m"
                          {
#line 552 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 1)));
#line 552 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation___Kind_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 2)));
#line 553 "rbmm.region_transformation.m"
                            {
#line 553 "rbmm.region_transformation.m"
                              transform_hlds__rbmm__region_transformation__Reason_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 553 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 553 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_133));
#line 553 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 2) = ((MR_Box) ((MR_Integer) 3));
#line 553 "rbmm.region_transformation.m"
                            }
#line 552 "rbmm.region_transformation.m"
                          }
#line 552 "rbmm.region_transformation.m"
                        else
#line 555 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__Reason_46 = transform_hlds__rbmm__region_transformation__Reason0_44;
#line 557 "rbmm.region_transformation.m"
                        {
#line 557 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_135, &transform_hlds__rbmm__region_transformation__Goal_136, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
                        }
#line 561 "rbmm.region_transformation.m"
                        {
#line 561 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 561 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 561 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Reason_46));
#line 561 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Goal_136));
#line 561 "rbmm.region_transformation.m"
                        }
#line 540 "rbmm.region_transformation.m"
                      }
#line 515 "rbmm.region_transformation.m"
                    else
#line 515 "rbmm.region_transformation.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 585 "rbmm.region_transformation.m"
                        {
#line 586 "rbmm.region_transformation.m"
                          {
#line 586 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 586 "rbmm.region_transformation.m"
                            return;
                          }
#line 585 "rbmm.region_transformation.m"
                        }
#line 515 "rbmm.region_transformation.m"
                      else
#line 524 "rbmm.region_transformation.m"
                        {
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169;
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Cases_41;
#line 524 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__V_113_113;
#line 525 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84;
#line 525 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86;
#line 525 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88;

#line 525 "rbmm.region_transformation.m"
                          {
#line 525 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 525 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__9_9));
#line 525 "rbmm.region_transformation.m"
                          }
#line 5835 "transform_hlds.rbmm.region_transformation.c"
                          transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 525 "rbmm.region_transformation.m"
                          {
#line 525 "rbmm.region_transformation.m"
                            mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_113_113, transform_hlds__rbmm__region_transformation__Cases0_40, &transform_hlds__rbmm__region_transformation__Cases_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
                          }
#line 525 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84);
#line 525 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86);
#line 525 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
#line 531 "rbmm.region_transformation.m"
                          {
#line 531 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 531 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 531 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_38));
#line 531 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CanFail_39));
#line 531 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cases_41));
#line 531 "rbmm.region_transformation.m"
                          }
#line 524 "rbmm.region_transformation.m"
                        }
#line 504 "rbmm.region_transformation.m"
    {
#line 504 "rbmm.region_transformation.m"
      MR_Word base;
#line 504 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = base;
#line 504 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81));
#line 504 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82));
#line 504 "rbmm.region_transformation.m"
    }
#line 505 "rbmm.region_transformation.m"
  }
#line 494 "rbmm.region_transformation.m"
}

#line 437 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 437 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 437 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 437 "rbmm.region_transformation.m"
{
#line 437 "rbmm.region_transformation.m"
  {
#line 437 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 437 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_RegVar_16;
#line 437 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22;
#line 437 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24;
#line 437 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26;

#line 437 "rbmm.region_transformation.m"
    {
#line 437 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv4_RegVar_16, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26);
    }
#line 437 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_RegVar_16));
#line 437 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22));
#line 437 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24));
#line 437 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26));
#line 437 "rbmm.region_transformation.m"
  }
#line 437 "rbmm.region_transformation.m"
}

#line 413 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 413 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 413 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16)
#line 413 "rbmm.region_transformation.m"
{
#line 424 "rbmm.region_transformation.m"
  {
#line 424 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 424 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 0))))
#line 481 "rbmm.region_transformation.m"
      {
#line 490 "rbmm.region_transformation.m"
        {
#line 490 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
          return;
        }
#line 481 "rbmm.region_transformation.m"
      }
#line 424 "rbmm.region_transformation.m"
    else
#line 424 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 2))))
#line 424 "rbmm.region_transformation.m"
        {
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_236_236;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 424 "rbmm.region_transformation.m"
          MR_Integer transform_hlds__rbmm__region_transformation__CalleeProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 5)));
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes_35;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Constants_36;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Ins_37;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Outs_38;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AllNodes_39;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgs_40;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredInfo_41;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_43;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_59_59;
#line 424 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 431 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 429 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34;
#line 436 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12;
#line 436 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14;
#line 436 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16;

#line 429 "rbmm.region_transformation.m"
          {
#line 429 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_6)), &transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
          }
#line 429 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 429 "rbmm.region_transformation.m"
            {
#line 429 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes0_34 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
#line 429 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 429 "rbmm.region_transformation.m"
            }
#line 431 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 430 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ActualNodes_35 = transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 431 "rbmm.region_transformation.m"
          else
#line 432 "rbmm.region_transformation.m"
            {
#line 432 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes_35 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[10];
#line 432 "rbmm.region_transformation.m"
            }
#line 434 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Constants_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 0)));
#line 434 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Ins_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 1)));
#line 434 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Outs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 2)));
#line 6080 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 435 "rbmm.region_transformation.m"
          {
#line 435 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_59_59 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Ins_37, transform_hlds__rbmm__region_transformation__Outs_38);
          }
#line 435 "rbmm.region_transformation.m"
          {
#line 435 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AllNodes_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Constants_36, transform_hlds__rbmm__region_transformation__V_59_59);
          }
#line 437 "rbmm.region_transformation.m"
          {
#line 437 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[0]));
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1));
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_2));
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_3));
#line 437 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_4));
#line 437 "rbmm.region_transformation.m"
          }
#line 6110 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeInfo_236_236 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 436 "rbmm.region_transformation.m"
          {
#line 436 "rbmm.region_transformation.m"
            mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__TypeInfo_236_236, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_60_60, transform_hlds__rbmm__region_transformation__AllNodes_39, &transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
          }
#line 436 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12);
#line 436 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14);
#line 436 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
#line 439 "rbmm.region_transformation.m"
          {
#line 439 "rbmm.region_transformation.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__CalleePredId_28, &transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 440 "rbmm.region_transformation.m"
          {
#line 440 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 444 "rbmm.region_transformation.m"
          if ((transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42 == (MR_Integer) 1))
#line 445 "rbmm.region_transformation.m"
            {
#line 445 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_44;
#line 445 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Last_45;
#line 445 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_64_64;
#line 445 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_65_65;
#line 447 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv8_Last_45;

#line 447 "rbmm.region_transformation.m"
              {
#line 447 "rbmm.region_transformation.m"
                mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, &transform_hlds__rbmm__region_transformation__BeforeLast_44, &transform_hlds__rbmm__region_transformation__conv8_Last_45);
              }
#line 447 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Last_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_Last_45);
#line 448 "rbmm.region_transformation.m"
              {
#line 448 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_45));
#line 448 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "rbmm.region_transformation.m"
              }
#line 448 "rbmm.region_transformation.m"
              {
#line 448 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, transform_hlds__rbmm__region_transformation__V_65_65);
              }
#line 448 "rbmm.region_transformation.m"
              {
#line 448 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__BeforeLast_44, transform_hlds__rbmm__region_transformation__V_64_64);
              }
#line 445 "rbmm.region_transformation.m"
            }
#line 444 "rbmm.region_transformation.m"
          else
#line 442 "rbmm.region_transformation.m"
            {
#line 442 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40);
            }
#line 451 "rbmm.region_transformation.m"
          {
#line 451 "rbmm.region_transformation.m"
            MR_Word base;
#line 451 "rbmm.region_transformation.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 451 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleePredId_28));
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleeProcId_29));
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_43));
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Builtin_31));
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_32));
#line 451 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_33));
#line 451 "rbmm.region_transformation.m"
          }
#line 423 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 424 "rbmm.region_transformation.m"
        }
#line 424 "rbmm.region_transformation.m"
      else
#line 424 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 1))))
#line 457 "rbmm.region_transformation.m"
          {
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__LHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__RHS_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Mode_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Unification0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 457 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Unification_84;

#line 459 "rbmm.region_transformation.m"
            {
#line 459 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, transform_hlds__rbmm__region_transformation__Unification0_82, &transform_hlds__rbmm__region_transformation__Unification_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);
            }
#line 462 "rbmm.region_transformation.m"
            {
#line 462 "rbmm.region_transformation.m"
              MR_Word base;
#line 462 "rbmm.region_transformation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 462 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 462 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LHS_79));
#line 462 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RHS_80));
#line 462 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Mode_81));
#line 462 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Unification_84));
#line 462 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_83));
#line 462 "rbmm.region_transformation.m"
            }
#line 457 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 457 "rbmm.region_transformation.m"
          }
#line 424 "rbmm.region_transformation.m"
        else
#line 424 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 470 "rbmm.region_transformation.m"
            {
#line 472 "rbmm.region_transformation.m"
              {
#line 472 "rbmm.region_transformation.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "call_foreign_proc");
#line 472 "rbmm.region_transformation.m"
                return;
              }
#line 470 "rbmm.region_transformation.m"
            }
#line 424 "rbmm.region_transformation.m"
          else
#line 424 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 424 "rbmm.region_transformation.m"
              {
#line 424 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 482 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 424 "rbmm.region_transformation.m"
                if ((transform_hlds__rbmm__region_transformation__V_340_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "rbmm.region_transformation.m"
                  {
#line 475 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 475 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 474 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 474 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 474 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 475 "rbmm.region_transformation.m"
                  }
#line 424 "rbmm.region_transformation.m"
                else
#line 481 "rbmm.region_transformation.m"
                  {
#line 490 "rbmm.region_transformation.m"
                    {
#line 490 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                      return;
                    }
#line 481 "rbmm.region_transformation.m"
                  }
#line 424 "rbmm.region_transformation.m"
              }
#line 424 "rbmm.region_transformation.m"
            else
#line 424 "rbmm.region_transformation.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 424 "rbmm.region_transformation.m"
                {
#line 424 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 424 "rbmm.region_transformation.m"
                  if ((transform_hlds__rbmm__region_transformation__V_342_342 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "rbmm.region_transformation.m"
                    {
#line 475 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 475 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 474 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 474 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 474 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 475 "rbmm.region_transformation.m"
                    }
#line 424 "rbmm.region_transformation.m"
                  else
#line 481 "rbmm.region_transformation.m"
                    {
#line 490 "rbmm.region_transformation.m"
                      {
#line 490 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                        return;
                      }
#line 481 "rbmm.region_transformation.m"
                    }
#line 424 "rbmm.region_transformation.m"
                }
#line 424 "rbmm.region_transformation.m"
              else
#line 424 "rbmm.region_transformation.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 465 "rbmm.region_transformation.m"
                  {
#line 467 "rbmm.region_transformation.m"
                    {
#line 467 "rbmm.region_transformation.m"
                      mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "generic call");
#line 467 "rbmm.region_transformation.m"
                      return;
                    }
#line 465 "rbmm.region_transformation.m"
                  }
#line 424 "rbmm.region_transformation.m"
                else
#line 424 "rbmm.region_transformation.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 481 "rbmm.region_transformation.m"
                    {
#line 490 "rbmm.region_transformation.m"
                      {
#line 490 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                        return;
                      }
#line 481 "rbmm.region_transformation.m"
                    }
#line 424 "rbmm.region_transformation.m"
                  else
#line 424 "rbmm.region_transformation.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 481 "rbmm.region_transformation.m"
                      {
#line 490 "rbmm.region_transformation.m"
                        {
#line 490 "rbmm.region_transformation.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                          return;
                        }
#line 481 "rbmm.region_transformation.m"
                      }
#line 424 "rbmm.region_transformation.m"
                    else
#line 424 "rbmm.region_transformation.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 481 "rbmm.region_transformation.m"
                        {
#line 490 "rbmm.region_transformation.m"
                          {
#line 490 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                            return;
                          }
#line 481 "rbmm.region_transformation.m"
                        }
#line 424 "rbmm.region_transformation.m"
                      else
#line 481 "rbmm.region_transformation.m"
                        {
#line 490 "rbmm.region_transformation.m"
                          {
#line 490 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 490 "rbmm.region_transformation.m"
                            return;
                          }
#line 481 "rbmm.region_transformation.m"
                        }
#line 424 "rbmm.region_transformation.m"
  }
#line 413 "rbmm.region_transformation.m"
}

#line 387 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 387 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 387 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 387 "rbmm.region_transformation.m"
{
#line 387 "rbmm.region_transformation.m"
  {
#line 387 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 387 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 387 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 387 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 387 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 387 "rbmm.region_transformation.m"
    {
#line 387 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 387 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 387 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 387 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 387 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 387 "rbmm.region_transformation.m"
  }
#line 387 "rbmm.region_transformation.m"
}

#line 379 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 379 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 379 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 379 "rbmm.region_transformation.m"
{
#line 379 "rbmm.region_transformation.m"
  {
#line 379 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 379 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 379 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 379 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 379 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 379 "rbmm.region_transformation.m"
    {
#line 379 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 379 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 379 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 379 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 379 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 379 "rbmm.region_transformation.m"
  }
#line 379 "rbmm.region_transformation.m"
}

#line 343 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 343 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 343 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56)
#line 343 "rbmm.region_transformation.m"
{
#line 352 "rbmm.region_transformation.m"
  {
#line 352 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 352 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 0)));
#line 352 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 1)));
#line 352 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HasSubGoals_31;

#line 354 "rbmm.region_transformation.m"
    {
#line 354 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__HasSubGoals_31 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__region_transformation__GoalExpr0_29);
    }
#line 405 "rbmm.region_transformation.m"
    if ((transform_hlds__rbmm__region_transformation__HasSubGoals_31 == (MR_Integer) 1))
#line 356 "rbmm.region_transformation.m"
      {
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_32;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Context_33;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_35;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_36;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__GoalExpr_37;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__GoalInfo_38;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs3_44;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs_45;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78;
#line 356 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79;
#line 358 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_34_34;
#line 390 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Before_40;
#line 390 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__After_41;
#line 375 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_68_68;
#line 375 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_V_68_68;
#line 400 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 400 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_46_46;
#line 400 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 400 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_48_48;

#line 357 "rbmm.region_transformation.m"
        {
#line 357 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ProgPoint_32 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__GoalInfo0_30);
        }
#line 358 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 0)));
#line 358 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 1)));
#line 359 "rbmm.region_transformation.m"
        {
#line 359 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ProgPoint_32, &transform_hlds__rbmm__region_transformation__ResurRenaming_35, &transform_hlds__rbmm__region_transformation__IteRenaming_36);
        }
#line 365 "rbmm.region_transformation.m"
        {
#line 365 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenaming_35, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__GoalExpr0_29, &transform_hlds__rbmm__region_transformation__GoalExpr_37, transform_hlds__rbmm__region_transformation__GoalInfo0_30, &transform_hlds__rbmm__region_transformation__GoalInfo_38, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63);
        }
#line 370 "rbmm.region_transformation.m"
        {
#line 370 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39);
        }
#line 375 "rbmm.region_transformation.m"
        {
#line 375 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_32)), &transform_hlds__rbmm__region_transformation__conv0_V_68_68);
        }
#line 375 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 375 "rbmm.region_transformation.m"
          {
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_68_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_68_68);
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 375 "rbmm.region_transformation.m"
          }
#line 375 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 375 "rbmm.region_transformation.m"
          {
#line 376 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Before_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 0)));
#line 376 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__After_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 1)));
#line 376 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 375 "rbmm.region_transformation.m"
          }
#line 390 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 381 "rbmm.region_transformation.m"
          {
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_103_103;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_104_104;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_106_106;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs1_42;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs2_43;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_69_69;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 381 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 379 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70;
#line 379 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71;
#line 379 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72;
#line 379 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_42;
#line 387 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77;
#line 387 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78;
#line 387 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79;
#line 387 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs3_44;

#line 379 "rbmm.region_transformation.m"
            {
#line 379 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 379 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 379 "rbmm.region_transformation.m"
            }
#line 6777 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 6779 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_103_103 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 6781 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_104_104 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 6783 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6785 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_106_106 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 379 "rbmm.region_transformation.m"
            {
#line 379 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_69_69, transform_hlds__rbmm__region_transformation__Before_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
            }
#line 379 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70);
#line 379 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71);
#line 379 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72);
#line 379 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs1_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
#line 384 "rbmm.region_transformation.m"
            {
#line 384 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 384 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 384 "rbmm.region_transformation.m"
            }
#line 384 "rbmm.region_transformation.m"
            {
#line 384 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 384 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "rbmm.region_transformation.m"
            }
#line 384 "rbmm.region_transformation.m"
            {
#line 384 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs2_43 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs1_42, transform_hlds__rbmm__region_transformation__V_73_73);
            }
#line 387 "rbmm.region_transformation.m"
            {
#line 387 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 387 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 387 "rbmm.region_transformation.m"
            }
#line 387 "rbmm.region_transformation.m"
            {
#line 387 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_76_76, transform_hlds__rbmm__region_transformation__After_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs2_43)), &transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
            }
#line 387 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77);
#line 387 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78);
#line 387 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79);
#line 387 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs3_44 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
#line 381 "rbmm.region_transformation.m"
          }
#line 390 "rbmm.region_transformation.m"
        else
#line 392 "rbmm.region_transformation.m"
          {
#line 392 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_80_80;
#line 392 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_81_81;

#line 392 "rbmm.region_transformation.m"
            {
#line 392 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 392 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 392 "rbmm.region_transformation.m"
            }
#line 392 "rbmm.region_transformation.m"
            {
#line 392 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_81_81));
#line 392 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "rbmm.region_transformation.m"
            }
#line 392 "rbmm.region_transformation.m"
            {
#line 392 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs3_44 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39, transform_hlds__rbmm__region_transformation__V_80_80);
            }
#line 392 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 392 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 392 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 392 "rbmm.region_transformation.m"
          }
#line 396 "rbmm.region_transformation.m"
        {
#line 396 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56, transform_hlds__rbmm__region_transformation__Conjs3_44, &transform_hlds__rbmm__region_transformation__Conjs_45);
        }
#line 400 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Conjs_45)) == (MR_mktag((MR_Integer) 1)));
#line 400 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 400 "rbmm.region_transformation.m"
          {
#line 400 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 0)));
#line 400 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 1)));
#line 400 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 400 "rbmm.region_transformation.m"
            if (transform_hlds__rbmm__region_transformation__succeeded)
#line 400 "rbmm.region_transformation.m"
              {
#line 400 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 0)));
#line 400 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 1)));
#line 400 "rbmm.region_transformation.m"
              }
#line 400 "rbmm.region_transformation.m"
          }
#line 402 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 401 "rbmm.region_transformation.m"
          {
#line 401 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_88_88;

#line 401 "rbmm.region_transformation.m"
            {
#line 401 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 401 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 401 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) ((MR_Integer) 0));
#line 401 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_45));
#line 401 "rbmm.region_transformation.m"
            }
#line 401 "rbmm.region_transformation.m"
            {
#line 401 "rbmm.region_transformation.m"
              MR_Word base;
#line 401 "rbmm.region_transformation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 401 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_88_88));
#line 401 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 401 "rbmm.region_transformation.m"
            }
#line 401 "rbmm.region_transformation.m"
          }
#line 402 "rbmm.region_transformation.m"
        else
#line 403 "rbmm.region_transformation.m"
          {
#line 403 "rbmm.region_transformation.m"
            MR_Word base;
#line 403 "rbmm.region_transformation.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 403 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 403 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 403 "rbmm.region_transformation.m"
          }
#line 356 "rbmm.region_transformation.m"
      }
#line 405 "rbmm.region_transformation.m"
    else
#line 407 "rbmm.region_transformation.m"
      {
#line 407 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);
#line 407 "rbmm.region_transformation.m"
        return;
      }
#line 352 "rbmm.region_transformation.m"
  }
#line 343 "rbmm.region_transformation.m"
}

#line 301 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 301 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 301 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 301 "rbmm.region_transformation.m"
{
#line 301 "rbmm.region_transformation.m"
  {
#line 301 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 301 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_RegVar_12;
#line 301 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18;
#line 301 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20;
#line 301 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22;

#line 301 "rbmm.region_transformation.m"
    {
#line 301 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_RegVar_12, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22);
    }
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_RegVar_12));
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18));
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20));
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22));
#line 301 "rbmm.region_transformation.m"
  }
#line 301 "rbmm.region_transformation.m"
}

#line 263 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 263 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 263 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70)
#line 263 "rbmm.region_transformation.m"
{
#line 277 "rbmm.region_transformation.m"
  {
#line 277 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_107_107;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Constants_42;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Deads_43;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Borns_44;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalInputNodes_45;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalNodes_46;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_47;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InMode_48;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutMode_49;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InModes_50;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutModes_51;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_52;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 277 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_79_79;
#line 277 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_80_80;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95;
#line 277 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96;
#line 301 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68;
#line 301 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58;
#line 301 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60;

#line 278 "rbmm.region_transformation.m"
    {
#line 278 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_25, transform_hlds__rbmm__region_transformation__Graph_27, transform_hlds__rbmm__region_transformation__ResurRenamingProc_30, transform_hlds__rbmm__region_transformation__IteRenamingProc_31, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29, transform_hlds__rbmm__region_transformation__RegionInstructionProc_32, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74);
    }
#line 298 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Constants_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 0)));
#line 298 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Deads_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 1)));
#line 298 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Borns_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 2)));
#line 7175 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 299 "rbmm.region_transformation.m"
    {
#line 299 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalInputNodes_45 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Constants_42, transform_hlds__rbmm__region_transformation__Deads_43);
    }
#line 300 "rbmm.region_transformation.m"
    {
#line 300 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalNodes_46 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 301 "rbmm.region_transformation.m"
    {
#line 301 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[0]));
#line 301 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1));
#line 301 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_27));
#line 301 "rbmm.region_transformation.m"
    }
#line 7201 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeInfo_107_107 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 301 "rbmm.region_transformation.m"
    {
#line 301 "rbmm.region_transformation.m"
      mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__TypeInfo_107_107, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_75_75, transform_hlds__rbmm__region_transformation__FormalNodes_46, &transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
    }
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68);
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58);
#line 301 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
#line 304 "rbmm.region_transformation.m"
    {
#line 304 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__InMode_48 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 305 "rbmm.region_transformation.m"
    {
#line 305 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__OutMode_49 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 306 "rbmm.region_transformation.m"
    {
#line 306 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_79_79 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45);
    }
#line 7229 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 306 "rbmm.region_transformation.m"
    {
#line 306 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__InMode_48)), &transform_hlds__rbmm__region_transformation__InModes_50);
    }
#line 307 "rbmm.region_transformation.m"
    {
#line 307 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_80_80 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 307 "rbmm.region_transformation.m"
    {
#line 307 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__OutMode_49)), &transform_hlds__rbmm__region_transformation__OutModes_51);
    }
#line 310 "rbmm.region_transformation.m"
    {
#line 310 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_26);
    }
#line 315 "rbmm.region_transformation.m"
    if ((transform_hlds__rbmm__region_transformation__PredOrFunc_52 == (MR_Integer) 1))
#line 316 "rbmm.region_transformation.m"
      {
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LastHeadVar_54;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LastHeadMode_56;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_82_82;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_87_87;
#line 316 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_88_88;
#line 317 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54;
#line 319 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56;

#line 317 "rbmm.region_transformation.m"
        {
#line 317 "rbmm.region_transformation.m"
          mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, &transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, &transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
        }
#line 317 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__LastHeadVar_54 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
#line 318 "rbmm.region_transformation.m"
        {
#line 318 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadVar_54));
#line 318 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "rbmm.region_transformation.m"
        }
#line 318 "rbmm.region_transformation.m"
        {
#line 318 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_82_82 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, transform_hlds__rbmm__region_transformation__V_83_83);
        }
#line 318 "rbmm.region_transformation.m"
        {
#line 318 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, transform_hlds__rbmm__region_transformation__V_82_82);
        }
#line 319 "rbmm.region_transformation.m"
        {
#line 319 "rbmm.region_transformation.m"
          mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, &transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, &transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
        }
#line 319 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__LastHeadMode_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
#line 322 "rbmm.region_transformation.m"
        {
#line 322 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadMode_56));
#line 322 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "rbmm.region_transformation.m"
        }
#line 322 "rbmm.region_transformation.m"
        {
#line 322 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_87_87 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__OutModes_51, transform_hlds__rbmm__region_transformation__V_88_88);
        }
#line 322 "rbmm.region_transformation.m"
        {
#line 322 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_86_86 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__V_87_87);
        }
#line 321 "rbmm.region_transformation.m"
        {
#line 321 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, transform_hlds__rbmm__region_transformation__V_86_86);
        }
#line 316 "rbmm.region_transformation.m"
      }
#line 315 "rbmm.region_transformation.m"
    else
#line 312 "rbmm.region_transformation.m"
      {
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_92_92;

#line 313 "rbmm.region_transformation.m"
        {
#line 313 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47);
        }
#line 314 "rbmm.region_transformation.m"
        {
#line 314 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_92_92 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__OutModes_51);
        }
#line 314 "rbmm.region_transformation.m"
        {
#line 314 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, transform_hlds__rbmm__region_transformation__V_92_92);
        }
#line 312 "rbmm.region_transformation.m"
      }
#line 325 "rbmm.region_transformation.m"
    {
#line 325 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93);
    }
#line 326 "rbmm.region_transformation.m"
    {
#line 326 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 327 "rbmm.region_transformation.m"
    {
#line 327 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 328 "rbmm.region_transformation.m"
    {
#line 328 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 329 "rbmm.region_transformation.m"
    {
#line 329 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);
#line 329 "rbmm.region_transformation.m"
      return;
    }
#line 277 "rbmm.region_transformation.m"
  }
#line 263 "rbmm.region_transformation.m"
}

#line 206 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 206 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 206 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 206 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 206 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59)
#line 206 "rbmm.region_transformation.m"
{
#line 216 "rbmm.region_transformation.m"
  {
#line 216 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_27;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_28;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_29;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo1_30;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarSet0_31;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarTypes0_32;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HeadVars0_33;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualArgModes0_34;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Goal0_35;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Graph_36;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_41;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_44;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_46;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar0_47;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar_53;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo2_54;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_55;
#line 216 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 225 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_V_60_60;
#line 225 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_37_37;
#line 226 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38;
#line 227 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39;
#line 231 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 228 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40;
#line 238 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 235 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43;
#line 242 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46;
#line 244 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_48_48;
#line 244 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 244 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 244 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 244 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_52_52;

#line 217 "rbmm.region_transformation.m"
    {
#line 217 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 217 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_23));
#line 217 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_24));
#line 217 "rbmm.region_transformation.m"
    }
#line 218 "rbmm.region_transformation.m"
    {
#line 218 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PPId_27, &transform_hlds__rbmm__region_transformation__PredInfo0_28, &transform_hlds__rbmm__region_transformation__ProcInfo0_29);
    }
#line 219 "rbmm.region_transformation.m"
    {
#line 219 "rbmm.region_transformation.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__ProcInfo0_29, &transform_hlds__rbmm__region_transformation__ProcInfo1_30);
    }
#line 220 "rbmm.region_transformation.m"
    {
#line 220 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarSet0_31);
    }
#line 221 "rbmm.region_transformation.m"
    {
#line 221 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarTypes0_32);
    }
#line 222 "rbmm.region_transformation.m"
    {
#line 222 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__HeadVars0_33);
    }
#line 223 "rbmm.region_transformation.m"
    {
#line 223 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ActualArgModes0_34);
    }
#line 224 "rbmm.region_transformation.m"
    {
#line 224 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__Goal0_35);
    }
#line 7552 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 225 "rbmm.region_transformation.m"
    {
#line 225 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_transformation__RptaInfoTable_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv0_V_60_60);
    }
#line 225 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_60_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_60_60);
#line 225 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Graph_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 0)));
#line 225 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 1)));
#line 226 "rbmm.region_transformation.m"
    {
#line 226 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
    }
#line 226 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
#line 227 "rbmm.region_transformation.m"
    {
#line 227 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[2], transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
    }
#line 227 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
#line 228 "rbmm.region_transformation.m"
    {
#line 228 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__ResurRenamingTable_18, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
    }
#line 228 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 228 "rbmm.region_transformation.m"
      {
#line 228 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
#line 228 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 228 "rbmm.region_transformation.m"
      }
#line 231 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 229 "rbmm.region_transformation.m"
      {
#line 230 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42;

#line 229 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 230 "rbmm.region_transformation.m"
        {
#line 230 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
        }
#line 230 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
#line 229 "rbmm.region_transformation.m"
      }
#line 231 "rbmm.region_transformation.m"
    else
#line 232 "rbmm.region_transformation.m"
      {
#line 232 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 232 "rbmm.region_transformation.m"
        {
#line 232 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 233 "rbmm.region_transformation.m"
        {
#line 233 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 232 "rbmm.region_transformation.m"
      }
#line 235 "rbmm.region_transformation.m"
    {
#line 235 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__IteRenamingTable_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
    }
#line 235 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 235 "rbmm.region_transformation.m"
      {
#line 235 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc0_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
#line 235 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 235 "rbmm.region_transformation.m"
      }
#line 238 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 236 "rbmm.region_transformation.m"
      {
#line 237 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45;

#line 236 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 237 "rbmm.region_transformation.m"
        {
#line 237 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
        }
#line 237 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
#line 236 "rbmm.region_transformation.m"
      }
#line 238 "rbmm.region_transformation.m"
    else
#line 239 "rbmm.region_transformation.m"
      {
#line 239 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 239 "rbmm.region_transformation.m"
        {
#line 239 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 240 "rbmm.region_transformation.m"
        {
#line 240 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 239 "rbmm.region_transformation.m"
      }
#line 242 "rbmm.region_transformation.m"
    {
#line 242 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[6], transform_hlds__rbmm__region_transformation__RegionInstructionTable_20, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
    }
#line 242 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__RegionInstructionProc_46 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
#line 243 "rbmm.region_transformation.m"
    {
#line 243 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__NameToVar0_47 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1]);
    }
#line 244 "rbmm.region_transformation.m"
    {
#line 244 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__Graph_36, transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39, transform_hlds__rbmm__region_transformation__ResurRenamingProc_41, transform_hlds__rbmm__region_transformation__IteRenamingProc_44, transform_hlds__rbmm__region_transformation__RegionInstructionProc_46, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45, transform_hlds__rbmm__region_transformation__VarSet0_31, &transform_hlds__rbmm__region_transformation__V_48_48, transform_hlds__rbmm__region_transformation__VarTypes0_32, &transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__HeadVars0_33, &transform_hlds__rbmm__region_transformation__V_50_50, transform_hlds__rbmm__region_transformation__ActualArgModes0_34, &transform_hlds__rbmm__region_transformation__V_51_51, transform_hlds__rbmm__region_transformation__Goal0_35, &transform_hlds__rbmm__region_transformation__V_52_52, transform_hlds__rbmm__region_transformation__NameToVar0_47, &transform_hlds__rbmm__region_transformation__NameToVar_53, transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ProcInfo2_54);
    }
#line 249 "rbmm.region_transformation.m"
    {
#line 249 "rbmm.region_transformation.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__rbmm__region_transformation__ProcInfo2_54, &transform_hlds__rbmm__region_transformation__ProcInfo_55);
    }
#line 250 "rbmm.region_transformation.m"
    {
#line 250 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_27, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__ProcInfo_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);
    }
#line 251 "rbmm.region_transformation.m"
    {
#line 251 "rbmm.region_transformation.m"
      mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), ((MR_Box) (transform_hlds__rbmm__region_transformation__NameToVar_53)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57);
#line 251 "rbmm.region_transformation.m"
      return;
    }
#line 216 "rbmm.region_transformation.m"
  }
#line 206 "rbmm.region_transformation.m"
}

#line 186 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 186 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 186 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 186 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 186 "rbmm.region_transformation.m"
{
#line 186 "rbmm.region_transformation.m"
  {
#line 186 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 186 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57;
#line 186 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59;

#line 186 "rbmm.region_transformation.m"
    {
#line 186 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59);
    }
#line 186 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57));
#line 186 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59));
#line 186 "rbmm.region_transformation.m"
  }
#line 186 "rbmm.region_transformation.m"
}

#line 172 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 172 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 172 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 172 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 172 "rbmm.region_transformation.m"
{
#line 183 "rbmm.region_transformation.m"
  {
#line 183 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 183 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_25;
#line 183 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_26;
#line 183 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 186 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28;
#line 186 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30;

#line 184 "rbmm.region_transformation.m"
    {
#line 184 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_22, &transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 185 "rbmm.region_transformation.m"
    {
#line 185 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 186 "rbmm.region_transformation.m"
    {
#line 186 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[0]));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_14));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_17));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_18));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_19));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21));
#line 186 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_22));
#line 186 "rbmm.region_transformation.m"
    }
#line 186 "rbmm.region_transformation.m"
    {
#line 186 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__ProcIds_26, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27)), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
    }
#line 186 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28);
#line 186 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
#line 183 "rbmm.region_transformation.m"
  }
#line 172 "rbmm.region_transformation.m"
}

#line 133 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 133 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 133 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 133 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 133 "rbmm.region_transformation.m"
{
#line 137 "rbmm.region_transformation.m"
  {
#line 137 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 137 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 0)));
#line 138 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 1)));

#line 139 "rbmm.region_transformation.m"
    {
#line 139 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27);
    }
#line 141 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 140 "rbmm.region_transformation.m"
      {
#line 140 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29;
#line 140 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27;
#line 140 "rbmm.region_transformation.m"
      }
#line 141 "rbmm.region_transformation.m"
    else
#line 166 "rbmm.region_transformation.m"
      {
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Constants_14;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Deads_15;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Borns_16;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__Arity_18;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionTypes_19;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeVarSet_20;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ExistQuantTVars_21;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes0_22;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_23;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes_24;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_32_32;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_33_33;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_34_34;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_35_35;
#line 166 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_36_36;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 166 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42;

#line 143 "rbmm.region_transformation.m"
        {
#line 143 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_11, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 144 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Constants_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 0)));
#line 144 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Deads_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 1)));
#line 144 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Borns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 2)));
#line 7963 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 145 "rbmm.region_transformation.m"
        {
#line 145 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_33_33 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Constants_14);
        }
#line 145 "rbmm.region_transformation.m"
        {
#line 145 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_34_34 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Deads_15);
        }
#line 145 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_32_32 = (transform_hlds__rbmm__region_transformation__V_33_33 + transform_hlds__rbmm__region_transformation__V_34_34);
#line 146 "rbmm.region_transformation.m"
        {
#line 146 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_35_35 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Borns_16);
        }
#line 145 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17 = (transform_hlds__rbmm__region_transformation__V_32_32 + transform_hlds__rbmm__region_transformation__V_35_35);
#line 147 "rbmm.region_transformation.m"
        {
#line 147 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Arity_18 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 148 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_36_36 = (transform_hlds__rbmm__region_transformation__Arity_18 + transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17);
#line 148 "rbmm.region_transformation.m"
        {
#line 148 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__rbmm__region_transformation__V_36_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 150 "rbmm.region_transformation.m"
        {
#line 150 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_38_38 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 8001 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 150 "rbmm.region_transformation.m"
        {
#line 150 "rbmm.region_transformation.m"
          mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__V_38_38)), &transform_hlds__rbmm__region_transformation__RegionTypes_19);
        }
#line 151 "rbmm.region_transformation.m"
        {
#line 151 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__TypeVarSet_20, &transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, &transform_hlds__rbmm__region_transformation__ArgTypes0_22);
        }
#line 153 "rbmm.region_transformation.m"
        {
#line 153 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 157 "rbmm.region_transformation.m"
        if ((transform_hlds__rbmm__region_transformation__PredOrFunc_23 == (MR_Integer) 1))
#line 158 "rbmm.region_transformation.m"
          {
#line 158 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_25;
#line 158 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Last_26;
#line 158 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 158 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 160 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv0_Last_26;

#line 160 "rbmm.region_transformation.m"
            {
#line 160 "rbmm.region_transformation.m"
              mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, &transform_hlds__rbmm__region_transformation__BeforeLast_25, &transform_hlds__rbmm__region_transformation__conv0_Last_26);
            }
#line 160 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Last_26 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_Last_26);
#line 161 "rbmm.region_transformation.m"
            {
#line 161 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_26));
#line 161 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "rbmm.region_transformation.m"
            }
#line 161 "rbmm.region_transformation.m"
            {
#line 161 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__RegionTypes_19, transform_hlds__rbmm__region_transformation__V_40_40);
            }
#line 161 "rbmm.region_transformation.m"
            {
#line 161 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__BeforeLast_25, transform_hlds__rbmm__region_transformation__V_39_39);
            }
#line 158 "rbmm.region_transformation.m"
          }
#line 157 "rbmm.region_transformation.m"
        else
#line 156 "rbmm.region_transformation.m"
          {
#line 156 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, transform_hlds__rbmm__region_transformation__RegionTypes_19);
          }
#line 163 "rbmm.region_transformation.m"
        {
#line 163 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__rbmm__region_transformation__TypeVarSet_20, transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, transform_hlds__rbmm__region_transformation__ArgTypes_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42);
        }
#line 165 "rbmm.region_transformation.m"
        {
#line 165 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);
        }
#line 167 "rbmm.region_transformation.m"
        {
#line 167 "rbmm.region_transformation.m"
          MR_Word base;
#line 167 "rbmm.region_transformation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = base;
#line 167 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11));
#line 167 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27));
#line 167 "rbmm.region_transformation.m"
        }
#line 166 "rbmm.region_transformation.m"
      }
#line 137 "rbmm.region_transformation.m"
  }
#line 133 "rbmm.region_transformation.m"
}

#line 123 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 123 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 123 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 123 "rbmm.region_transformation.m"
{
#line 123 "rbmm.region_transformation.m"
  {
#line 123 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 123 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9;

#line 123 "rbmm.region_transformation.m"
    {
#line 123 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9);
    }
#line 123 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9));
#line 123 "rbmm.region_transformation.m"
  }
#line 123 "rbmm.region_transformation.m"
}

#line 122 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 122 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 122 "rbmm.region_transformation.m"
{
#line 122 "rbmm.region_transformation.m"
  {
#line 122 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 122 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9;

#line 122 "rbmm.region_transformation.m"
    {
#line 122 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9);
    }
#line 122 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9));
#line 122 "rbmm.region_transformation.m"
  }
#line 122 "rbmm.region_transformation.m"
}

#line 113 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 113 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 113 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 113 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 113 "rbmm.region_transformation.m"
{
#line 113 "rbmm.region_transformation.m"
  {
#line 113 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 113 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28;
#line 113 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30;

#line 113 "rbmm.region_transformation.m"
    {
#line 113 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30);
    }
#line 113 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28));
#line 113 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30));
#line 113 "rbmm.region_transformation.m"
  }
#line 113 "rbmm.region_transformation.m"
}

#line 112 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6)
#line 112 "rbmm.region_transformation.m"
{
#line 112 "rbmm.region_transformation.m"
  {
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 112 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28;
#line 112 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30;

#line 112 "rbmm.region_transformation.m"
    {
#line 112 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30);
    }
#line 112 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28));
#line 112 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30));
#line 112 "rbmm.region_transformation.m"
  }
#line 112 "rbmm.region_transformation.m"
}

#line 62 "rbmm.region_transformation.m"
void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0(
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_13,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_15,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_16,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_17,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_18,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_19,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_20,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_24,
#line 62 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_25,
#line 62 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_26,
#line 62 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_27)
#line 62 "rbmm.region_transformation.m"
{
#line 111 "rbmm.region_transformation.m"
  {
#line 111 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredIds_23;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35;
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_PredIds_23;
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30;
#line 113 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25;
#line 113 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33;
#line 122 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35;
#line 123 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27;

#line 112 "rbmm.region_transformation.m"
    {
#line 112 "rbmm.region_transformation.m"
      mercury__map__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[0], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_transformation__conv3_PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_26)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 112 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__PredIds_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_PredIds_23);
#line 112 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
#line 113 "rbmm.region_transformation.m"
    {
#line 113 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[0]));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_13));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_15));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_16));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_17));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_18));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_19));
#line 113 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_20));
#line 113 "rbmm.region_transformation.m"
    }
#line 8343 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 113 "rbmm.region_transformation.m"
    {
#line 113 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_24)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 113 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25);
#line 113 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
#line 122 "rbmm.region_transformation.m"
    {
#line 122 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[8], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 122 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
#line 123 "rbmm.region_transformation.m"
    {
#line 123 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[9], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
    }
#line 123 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
#line 111 "rbmm.region_transformation.m"
  }
#line 62 "rbmm.region_transformation.m"
}

#line 49 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0(void)
#line 49 "rbmm.region_transformation.m"
{
#line 106 "rbmm.region_transformation.m"
  {
#line 106 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 106 "rbmm.region_transformation.m"
    return (MR_String) "remove_region";
#line 106 "rbmm.region_transformation.m"
  }
#line 49 "rbmm.region_transformation.m"
}

#line 48 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0(void)
#line 48 "rbmm.region_transformation.m"
{
#line 105 "rbmm.region_transformation.m"
  {
#line 105 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 105 "rbmm.region_transformation.m"
    return (MR_String) "create_region";
#line 105 "rbmm.region_transformation.m"
  }
#line 48 "rbmm.region_transformation.m"
}

void mercury__transform_hlds__rbmm__region_transformation__init(void)
{
}

void mercury__transform_hlds__rbmm__region_transformation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_table_0);
}

void mercury__transform_hlds__rbmm__region_transformation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.region_transformation. */
