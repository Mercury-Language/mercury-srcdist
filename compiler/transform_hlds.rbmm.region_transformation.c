/*
** Automatically generated from `rbmm.region_transformation.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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




#line 155 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 158 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 161 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 164 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 167 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 170 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0;

#line 173 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 176 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 179 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 182 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 185 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 188 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 191 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 194 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 197 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 206 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 215 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 218 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 221 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 224 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 227 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 230 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 233 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 236 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 239 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 242 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 245 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 247 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 250 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 253 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 255 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 257 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 260 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 263 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 265 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 268 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 271 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 273 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 275 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 648 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__648__1_2_p_0(
#line 648 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 648 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71);

#line 1044 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1044 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1044 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1044 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1044 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);

#line 1037 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1037 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1031 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1031 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1031 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1031 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 1016 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1016 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1016 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);

#line 1014 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1014 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1008 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1008 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1008 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1008 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 958 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15);

#line 930 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17);

#line 891 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 858 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 821 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 821 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 801 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 801 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 784 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 768 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 768 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);

#line 757 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);

#line 745 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 737 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27);

#line 731 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 722 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25);

#line 706 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 706 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 706 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10);

#line 681 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 674 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 648 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 648 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg);

#line 635 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);

#line 591 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12);

#line 521 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 513 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 504 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 490 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);

#line 432 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 409 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);

#line 383 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 375 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 339 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);

#line 297 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 260 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);

#line 203 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 203 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 203 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 203 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);

#line 183 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 183 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 183 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 169 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 169 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 169 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 130 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 130 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 130 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 120 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 120 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 119 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 119 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 110 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 110 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 110 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 109 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 109 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 109 "rbmm.region_transformation.m"
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



#line 1705 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1713 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1722 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1731 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1740 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1749 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1757 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1766 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1775 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1784 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1793 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1802 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1810 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1819 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1828 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1836 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1845 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1854 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1862 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1871 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1879 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1888 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1897 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1905 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1914 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1923 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1932 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1941 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1949 "transform_hlds.rbmm.region_transformation.c"
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

#line 1970 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1979 "transform_hlds.rbmm.region_transformation.c"
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

#line 2000 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 2003 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2005 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2007 "transform_hlds.rbmm.region_transformation.c"
{
#line 2009 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2011 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2014 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2016 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2019 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2021 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2023 "transform_hlds.rbmm.region_transformation.c"
}

#line 2026 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 2029 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2031 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2033 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2035 "transform_hlds.rbmm.region_transformation.c"
{
#line 2037 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2039 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2042 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2044 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2047 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2049 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2051 "transform_hlds.rbmm.region_transformation.c"
}

#line 2054 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 2057 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2059 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2061 "transform_hlds.rbmm.region_transformation.c"
{
#line 2063 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2065 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2068 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2070 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2073 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2075 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2077 "transform_hlds.rbmm.region_transformation.c"
}

#line 2080 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 2083 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2085 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2087 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2089 "transform_hlds.rbmm.region_transformation.c"
{
#line 2091 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2093 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2096 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2098 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2101 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2103 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2105 "transform_hlds.rbmm.region_transformation.c"
}

#line 648 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__648__1_2_p_0(
#line 648 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 648 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71)
#line 648 "rbmm.region_transformation.m"
{
#line 648 "rbmm.region_transformation.m"
  {
#line 648 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 648 "rbmm.region_transformation.m"
    {
#line 648 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[6], ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28)), ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__2_71)));
    }
#line 648 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 648 "rbmm.region_transformation.m"
  }
#line 648 "rbmm.region_transformation.m"
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

#line 1044 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1044 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1044 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1044 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1044 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12)
#line 1044 "rbmm.region_transformation.m"
{
#line 1047 "rbmm.region_transformation.m"
  {
#line 1047 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1047 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_8;
#line 1047 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_9;
#line 1047 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_10;

#line 1048 "rbmm.region_transformation.m"
    {
#line 1048 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PredId_5, &transform_hlds__rbmm__region_transformation__PredInfo0_8);
    }
#line 1050 "rbmm.region_transformation.m"
    {
#line 1050 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1050 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1050 "rbmm.region_transformation.m"
    }
#line 1051 "rbmm.region_transformation.m"
    {
#line 1051 "rbmm.region_transformation.m"
      check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PPId_9, transform_hlds__rbmm__region_transformation__PredInfo0_8, &transform_hlds__rbmm__region_transformation__PredInfo_10);
    }
#line 1052 "rbmm.region_transformation.m"
    {
#line 1052 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_5, transform_hlds__rbmm__region_transformation__PredInfo_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);
#line 1052 "rbmm.region_transformation.m"
      return;
    }
#line 1047 "rbmm.region_transformation.m"
  }
#line 1044 "rbmm.region_transformation.m"
}

#line 1037 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1037 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1037 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1037 "rbmm.region_transformation.m"
{
#line 1037 "rbmm.region_transformation.m"
  {
#line 1037 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1037 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 1037 "rbmm.region_transformation.m"
    {
#line 1037 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 1037 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 1037 "rbmm.region_transformation.m"
  }
#line 1037 "rbmm.region_transformation.m"
}

#line 1031 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1031 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1031 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1031 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1031 "rbmm.region_transformation.m"
{
#line 1034 "rbmm.region_transformation.m"
  {
#line 1034 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1034 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1034 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1034 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1037 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1035 "rbmm.region_transformation.m"
    {
#line 1035 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1036 "rbmm.region_transformation.m"
    {
#line 1036 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1037 "rbmm.region_transformation.m"
    {
#line 1037 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1037 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1));
#line 1037 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1037 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1037 "rbmm.region_transformation.m"
    }
#line 1037 "rbmm.region_transformation.m"
    {
#line 1037 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1037 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1034 "rbmm.region_transformation.m"
  }
#line 1031 "rbmm.region_transformation.m"
}

#line 1016 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1016 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1016 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1016 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13)
#line 1016 "rbmm.region_transformation.m"
{
#line 1019 "rbmm.region_transformation.m"
  {
#line 1019 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_8;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_9;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_10;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_11;
#line 1019 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15;

#line 1020 "rbmm.region_transformation.m"
    {
#line 1020 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1020 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1020 "rbmm.region_transformation.m"
    }
#line 1021 "rbmm.region_transformation.m"
    {
#line 1021 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__rbmm__region_transformation__PPId_8, &transform_hlds__rbmm__region_transformation__PredInfo_9, &transform_hlds__rbmm__region_transformation__ProcInfo0_10);
    }
#line 1022 "rbmm.region_transformation.m"
    {
#line 1022 "rbmm.region_transformation.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__rbmm__region_transformation__ProcInfo0_10, &transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15);
    }
#line 1024 "rbmm.region_transformation.m"
    {
#line 1024 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_8, transform_hlds__rbmm__region_transformation__PredInfo_9, transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);
#line 1024 "rbmm.region_transformation.m"
      return;
    }
#line 1019 "rbmm.region_transformation.m"
  }
#line 1016 "rbmm.region_transformation.m"
}

#line 1014 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1014 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1014 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1014 "rbmm.region_transformation.m"
{
#line 1014 "rbmm.region_transformation.m"
  {
#line 1014 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1014 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13;

#line 1014 "rbmm.region_transformation.m"
    {
#line 1014 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1014 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13));
#line 1014 "rbmm.region_transformation.m"
  }
#line 1014 "rbmm.region_transformation.m"
}

#line 1008 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1008 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1008 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1008 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1008 "rbmm.region_transformation.m"
{
#line 1011 "rbmm.region_transformation.m"
  {
#line 1011 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1011 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1011 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1011 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1014 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1012 "rbmm.region_transformation.m"
    {
#line 1012 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1013 "rbmm.region_transformation.m"
    {
#line 1013 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1014 "rbmm.region_transformation.m"
    {
#line 1014 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1014 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1));
#line 1014 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1014 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1014 "rbmm.region_transformation.m"
    }
#line 1014 "rbmm.region_transformation.m"
    {
#line 1014 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1014 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1011 "rbmm.region_transformation.m"
  }
#line 1008 "rbmm.region_transformation.m"
}

#line 958 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 958 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 958 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15)
#line 958 "rbmm.region_transformation.m"
{
#line 968 "rbmm.region_transformation.m"
  {
#line 968 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 968 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_10)) == (MR_mktag((MR_Integer) 2))))
#line 971 "rbmm.region_transformation.m"
      {
#line 971 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Right_18 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 0)));
#line 971 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Left_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 1)));
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_20;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_21;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_22;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_36_36;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_46;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__NonLocals_47;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_48;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_49;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_52_52;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_53_53;
#line 971 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;

#line 972 "rbmm.region_transformation.m"
        {
#line 972 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Left_19, &transform_hlds__rbmm__region_transformation__LeftRegVar_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31);
        }
#line 973 "rbmm.region_transformation.m"
        {
#line 973 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_18, &transform_hlds__rbmm__region_transformation__RightRegVar_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28);
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_50_50, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 983 "rbmm.region_transformation.m"
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_52_52));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_53_53));
#line 983 "rbmm.region_transformation.m"
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 983 "rbmm.region_transformation.m"
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_50_50));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_51_51));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_54_54));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[8]));
#line 983 "rbmm.region_transformation.m"
        }
#line 997 "rbmm.region_transformation.m"
        {
#line 997 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__NonLocals_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 998 "rbmm.region_transformation.m"
        {
#line 998 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__InstmapDelta_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_20);
        }
#line 999 "rbmm.region_transformation.m"
        {
#line 999 "rbmm.region_transformation.m"
          hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_47, transform_hlds__rbmm__region_transformation__InstmapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_49);
        }
#line 1001 "rbmm.region_transformation.m"
        {
#line 1001 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentGoal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_46));
#line 1001 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_49));
#line 1001 "rbmm.region_transformation.m"
        }
#line 976 "rbmm.region_transformation.m"
        {
#line 976 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_22));
#line 976 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "rbmm.region_transformation.m"
        }
#line 976 "rbmm.region_transformation.m"
        {
#line 976 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_14, transform_hlds__rbmm__region_transformation__V_36_36);
        }
#line 971 "rbmm.region_transformation.m"
      }
#line 968 "rbmm.region_transformation.m"
    else
#line 968 "rbmm.region_transformation.m"
      {
#line 969 "rbmm.region_transformation.m"
        {
#line 969 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.ite_renaming_annotation_to_assignment\'/9", (MR_String) "annotation is not assignment");
#line 969 "rbmm.region_transformation.m"
          return;
        }
#line 968 "rbmm.region_transformation.m"
      }
#line 968 "rbmm.region_transformation.m"
  }
#line 958 "rbmm.region_transformation.m"
}

#line 930 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 930 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 930 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17)
#line 930 "rbmm.region_transformation.m"
{
#line 940 "rbmm.region_transformation.m"
  {
#line 940 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 940 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_12)) == (MR_mktag((MR_Integer) 2))))
#line 943 "rbmm.region_transformation.m"
      {
#line 943 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Right_20 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 0)));
#line 943 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Left_21 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 1)));
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_22;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_23;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_24;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 943 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__Name_57;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_68;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__NonLocals_69;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_70;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_71;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_72_72;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 943 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 847 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_56;
#line 845 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56;

#line 845 "rbmm.region_transformation.m"
        {
#line 845 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__Left_21)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
        }
#line 845 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 845 "rbmm.region_transformation.m"
          {
#line 845 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ResurNameList_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
#line 845 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 845 "rbmm.region_transformation.m"
          }
#line 847 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 846 "rbmm.region_transformation.m"
          {
#line 846 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_57;

#line 846 "rbmm.region_transformation.m"
            {
#line 846 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__conv1_Name_57 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_56);
            }
#line 846 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_57 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_57);
#line 846 "rbmm.region_transformation.m"
          }
#line 847 "rbmm.region_transformation.m"
        else
#line 848 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_57 = transform_hlds__rbmm__region_transformation__Left_21;
#line 850 "rbmm.region_transformation.m"
        {
#line 850 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_57, &transform_hlds__rbmm__region_transformation__LeftRegVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33);
        }
#line 948 "rbmm.region_transformation.m"
        {
#line 948 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_20, &transform_hlds__rbmm__region_transformation__RightRegVar_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30);
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_72_72, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 983 "rbmm.region_transformation.m"
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_74_74 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 984 "rbmm.region_transformation.m"
        {
#line 984 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_75_75 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_75_75));
#line 983 "rbmm.region_transformation.m"
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 983 "rbmm.region_transformation.m"
        }
#line 983 "rbmm.region_transformation.m"
        {
#line 983 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentExpr_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_72_72));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_73_73));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_76_76));
#line 983 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[7]));
#line 983 "rbmm.region_transformation.m"
        }
#line 997 "rbmm.region_transformation.m"
        {
#line 997 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__NonLocals_69 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 998 "rbmm.region_transformation.m"
        {
#line 998 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__InstmapDelta_70 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_22);
        }
#line 999 "rbmm.region_transformation.m"
        {
#line 999 "rbmm.region_transformation.m"
          hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_69, transform_hlds__rbmm__region_transformation__InstmapDelta_70, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_71);
        }
#line 1001 "rbmm.region_transformation.m"
        {
#line 1001 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__AssignmentGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_68));
#line 1001 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_71));
#line 1001 "rbmm.region_transformation.m"
        }
#line 951 "rbmm.region_transformation.m"
        {
#line 951 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_24));
#line 951 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "rbmm.region_transformation.m"
        }
#line 951 "rbmm.region_transformation.m"
        {
#line 951 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__Conjs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_16, transform_hlds__rbmm__region_transformation__V_38_38);
        }
#line 943 "rbmm.region_transformation.m"
      }
#line 940 "rbmm.region_transformation.m"
    else
#line 940 "rbmm.region_transformation.m"
      {
#line 941 "rbmm.region_transformation.m"
        {
#line 941 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.resur_renaming_annotation_to_assignment\'/10", (MR_String) "annotation is not assigment");
#line 941 "rbmm.region_transformation.m"
          return;
        }
#line 940 "rbmm.region_transformation.m"
      }
#line 940 "rbmm.region_transformation.m"
  }
#line 930 "rbmm.region_transformation.m"
}

#line 891 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 891 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 891 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 891 "rbmm.region_transformation.m"
{
#line 899 "rbmm.region_transformation.m"
  {
#line 899 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 899 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 899 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 908 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 0))))
#line 901 "rbmm.region_transformation.m"
      {
#line 901 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 901 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 901 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 901 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 901 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 902 "rbmm.region_transformation.m"
        {
#line 902 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
        }
#line 904 "rbmm.region_transformation.m"
        {
#line 904 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__prim_data__mercury_region_builtin_module_0_f_0();
        }
#line 904 "rbmm.region_transformation.m"
        {
#line 904 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 904 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "rbmm.region_transformation.m"
        }
#line 904 "rbmm.region_transformation.m"
        {
#line 904 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 904 "rbmm.region_transformation.m"
        {
#line 904 "rbmm.region_transformation.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
        }
#line 901 "rbmm.region_transformation.m"
      }
#line 908 "rbmm.region_transformation.m"
    else
#line 908 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 1))))
#line 909 "rbmm.region_transformation.m"
        {
#line 909 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 909 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 909 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 909 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 909 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 910 "rbmm.region_transformation.m"
          {
#line 910 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__prim_data__mercury_region_builtin_module_0_f_0();
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 913 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "rbmm.region_transformation.m"
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 909 "rbmm.region_transformation.m"
        }
#line 908 "rbmm.region_transformation.m"
      else
#line 918 "rbmm.region_transformation.m"
        {
#line 919 "rbmm.region_transformation.m"
          {
#line 919 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj_before\'/13", (MR_String) "neither create nor remove instruction");
#line 919 "rbmm.region_transformation.m"
            return;
          }
#line 918 "rbmm.region_transformation.m"
        }
#line 921 "rbmm.region_transformation.m"
    {
#line 921 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 921 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "rbmm.region_transformation.m"
    }
#line 921 "rbmm.region_transformation.m"
    {
#line 921 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 899 "rbmm.region_transformation.m"
  }
#line 891 "rbmm.region_transformation.m"
}

#line 858 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 858 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 858 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 858 "rbmm.region_transformation.m"
{
#line 865 "rbmm.region_transformation.m"
  {
#line 865 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 865 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 865 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 874 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 0))))
#line 867 "rbmm.region_transformation.m"
      {
#line 867 "rbmm.region_transformation.m"
        MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 867 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 867 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 867 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 867 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 868 "rbmm.region_transformation.m"
        {
#line 868 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
        }
#line 870 "rbmm.region_transformation.m"
        {
#line 870 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__prim_data__mercury_region_builtin_module_0_f_0();
        }
#line 870 "rbmm.region_transformation.m"
        {
#line 870 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 870 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "rbmm.region_transformation.m"
        }
#line 870 "rbmm.region_transformation.m"
        {
#line 870 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 870 "rbmm.region_transformation.m"
        {
#line 870 "rbmm.region_transformation.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
        }
#line 867 "rbmm.region_transformation.m"
      }
#line 874 "rbmm.region_transformation.m"
    else
#line 874 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) == (MR_mktag((MR_Integer) 1))))
#line 875 "rbmm.region_transformation.m"
        {
#line 875 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 875 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 875 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 875 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 875 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 876 "rbmm.region_transformation.m"
          {
#line 876 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 878 "rbmm.region_transformation.m"
          {
#line 878 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__prim_data__mercury_region_builtin_module_0_f_0();
          }
#line 878 "rbmm.region_transformation.m"
          {
#line 878 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 878 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "rbmm.region_transformation.m"
          }
#line 878 "rbmm.region_transformation.m"
          {
#line 878 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 878 "rbmm.region_transformation.m"
          {
#line 878 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 875 "rbmm.region_transformation.m"
        }
#line 874 "rbmm.region_transformation.m"
      else
#line 883 "rbmm.region_transformation.m"
        {
#line 884 "rbmm.region_transformation.m"
          {
#line 884 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj\'/13", (MR_String) "neither create nor remove instruction");
#line 884 "rbmm.region_transformation.m"
            return;
          }
#line 883 "rbmm.region_transformation.m"
        }
#line 886 "rbmm.region_transformation.m"
    {
#line 886 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 886 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "rbmm.region_transformation.m"
    }
#line 886 "rbmm.region_transformation.m"
    {
#line 886 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 865 "rbmm.region_transformation.m"
  }
#line 858 "rbmm.region_transformation.m"
}

#line 821 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 821 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 821 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 821 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 821 "rbmm.region_transformation.m"
{
#line 826 "rbmm.region_transformation.m"
  {
#line 826 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 826 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 829 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 827 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 827 "rbmm.region_transformation.m"
    {
#line 827 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 827 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 827 "rbmm.region_transformation.m"
      {
#line 827 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 827 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 827 "rbmm.region_transformation.m"
      }
#line 829 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 828 "rbmm.region_transformation.m"
      {
#line 828 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 828 "rbmm.region_transformation.m"
        {
#line 828 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__conv1_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, (MR_Integer) 0);
        }
#line 828 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 828 "rbmm.region_transformation.m"
      }
#line 829 "rbmm.region_transformation.m"
    else
#line 831 "rbmm.region_transformation.m"
      {
#line 831 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 829 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 829 "rbmm.region_transformation.m"
        {
#line 829 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 829 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 829 "rbmm.region_transformation.m"
          {
#line 829 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 829 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 829 "rbmm.region_transformation.m"
          }
#line 831 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 830 "rbmm.region_transformation.m"
          {
#line 830 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 830 "rbmm.region_transformation.m"
            {
#line 830 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__conv3_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, (MR_Integer) 0);
            }
#line 830 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 830 "rbmm.region_transformation.m"
          }
#line 831 "rbmm.region_transformation.m"
        else
#line 832 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 831 "rbmm.region_transformation.m"
      }
#line 834 "rbmm.region_transformation.m"
    {
#line 834 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 834 "rbmm.region_transformation.m"
      return;
    }
#line 826 "rbmm.region_transformation.m"
  }
#line 821 "rbmm.region_transformation.m"
}

#line 801 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 801 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 801 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 801 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 801 "rbmm.region_transformation.m"
{
#line 806 "rbmm.region_transformation.m"
  {
#line 806 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 806 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 809 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 807 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 807 "rbmm.region_transformation.m"
    {
#line 807 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 807 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 807 "rbmm.region_transformation.m"
      {
#line 807 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 807 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 807 "rbmm.region_transformation.m"
      }
#line 809 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 808 "rbmm.region_transformation.m"
      {
#line 808 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 808 "rbmm.region_transformation.m"
        {
#line 808 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, &transform_hlds__rbmm__region_transformation__conv1_Name_19);
        }
#line 808 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 808 "rbmm.region_transformation.m"
      }
#line 809 "rbmm.region_transformation.m"
    else
#line 811 "rbmm.region_transformation.m"
      {
#line 811 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 809 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 809 "rbmm.region_transformation.m"
        {
#line 809 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 809 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 809 "rbmm.region_transformation.m"
          {
#line 809 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 809 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 809 "rbmm.region_transformation.m"
          }
#line 811 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 810 "rbmm.region_transformation.m"
          {
#line 810 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 810 "rbmm.region_transformation.m"
            {
#line 810 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, &transform_hlds__rbmm__region_transformation__conv3_Name_19);
            }
#line 810 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 810 "rbmm.region_transformation.m"
          }
#line 811 "rbmm.region_transformation.m"
        else
#line 812 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 811 "rbmm.region_transformation.m"
      }
#line 814 "rbmm.region_transformation.m"
    {
#line 814 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 814 "rbmm.region_transformation.m"
      return;
    }
#line 806 "rbmm.region_transformation.m"
  }
#line 801 "rbmm.region_transformation.m"
}

#line 784 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 784 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 784 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 784 "rbmm.region_transformation.m"
{
#line 790 "rbmm.region_transformation.m"
  {
#line 790 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 790 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_20;
#line 790 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_44;
#line 809 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_43;
#line 807 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43;

#line 791 "rbmm.region_transformation.m"
    {
#line 791 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_20 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_12, transform_hlds__rbmm__region_transformation__Node_15);
    }
#line 807 "rbmm.region_transformation.m"
    {
#line 807 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
    }
#line 807 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 807 "rbmm.region_transformation.m"
      {
#line 807 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
#line 807 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 807 "rbmm.region_transformation.m"
      }
#line 809 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 808 "rbmm.region_transformation.m"
      {
#line 808 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_44;

#line 808 "rbmm.region_transformation.m"
        {
#line 808 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_43, &transform_hlds__rbmm__region_transformation__conv1_Name_44);
        }
#line 808 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_44);
#line 808 "rbmm.region_transformation.m"
      }
#line 809 "rbmm.region_transformation.m"
    else
#line 811 "rbmm.region_transformation.m"
      {
#line 811 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_45;
#line 809 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_45;

#line 809 "rbmm.region_transformation.m"
        {
#line 809 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
        }
#line 809 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 809 "rbmm.region_transformation.m"
          {
#line 809 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
#line 809 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 809 "rbmm.region_transformation.m"
          }
#line 811 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 810 "rbmm.region_transformation.m"
          {
#line 810 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_44;

#line 810 "rbmm.region_transformation.m"
            {
#line 810 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_45, &transform_hlds__rbmm__region_transformation__conv3_Name_44);
            }
#line 810 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_44);
#line 810 "rbmm.region_transformation.m"
          }
#line 811 "rbmm.region_transformation.m"
        else
#line 812 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_44 = transform_hlds__rbmm__region_transformation__RegName_20;
#line 811 "rbmm.region_transformation.m"
      }
#line 814 "rbmm.region_transformation.m"
    {
#line 814 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_44, transform_hlds__rbmm__region_transformation__RegVar_16, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
#line 814 "rbmm.region_transformation.m"
      return;
    }
#line 790 "rbmm.region_transformation.m"
  }
#line 784 "rbmm.region_transformation.m"
}

#line 768 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 768 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 768 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 768 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20)
#line 768 "rbmm.region_transformation.m"
{
#line 775 "rbmm.region_transformation.m"
  {
#line 775 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 775 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 773 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_RegVar0_14;

#line 773 "rbmm.region_transformation.m"
    {
#line 773 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), &transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
    }
#line 773 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 773 "rbmm.region_transformation.m"
      {
#line 773 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__RegVar0_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
#line 773 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 773 "rbmm.region_transformation.m"
      }
#line 775 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 774 "rbmm.region_transformation.m"
      {
#line 774 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__RegVar_10 = transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 774 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19;
#line 774 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17;
#line 774 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15;
#line 774 "rbmm.region_transformation.m"
      }
#line 775 "rbmm.region_transformation.m"
    else
#line 776 "rbmm.region_transformation.m"
      {
#line 776 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_22_22;

#line 776 "rbmm.region_transformation.m"
        {
#line 776 "rbmm.region_transformation.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__rbmm__region_transformation__Name_9, transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18);
        }
#line 777 "rbmm.region_transformation.m"
        {
#line 777 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_22_22 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 777 "rbmm.region_transformation.m"
        {
#line 777 "rbmm.region_transformation.m"
          parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__V_22_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);
        }
#line 778 "rbmm.region_transformation.m"
        {
#line 778 "rbmm.region_transformation.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), ((MR_Box) (*transform_hlds__rbmm__region_transformation__RegVar_10)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16);
#line 778 "rbmm.region_transformation.m"
          return;
        }
#line 776 "rbmm.region_transformation.m"
      }
#line 775 "rbmm.region_transformation.m"
  }
#line 768 "rbmm.region_transformation.m"
}

#line 757 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 757 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 757 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22)
#line 757 "rbmm.region_transformation.m"
{
#line 761 "rbmm.region_transformation.m"
  {
#line 761 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 761 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_16;

#line 762 "rbmm.region_transformation.m"
    {
#line 762 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_16 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_10, transform_hlds__rbmm__region_transformation__Node_11);
    }
#line 763 "rbmm.region_transformation.m"
    {
#line 763 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__RegName_16, transform_hlds__rbmm__region_transformation__RegVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);
#line 763 "rbmm.region_transformation.m"
      return;
    }
#line 761 "rbmm.region_transformation.m"
  }
#line 757 "rbmm.region_transformation.m"
}

#line 745 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 745 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 745 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 745 "rbmm.region_transformation.m"
{
#line 745 "rbmm.region_transformation.m"
  {
#line 745 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 745 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26;
#line 745 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28;
#line 745 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30;
#line 745 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_17;

#line 745 "rbmm.region_transformation.m"
    {
#line 745 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_17);
    }
#line 745 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26));
#line 745 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28));
#line 745 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30));
#line 745 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_17));
#line 745 "rbmm.region_transformation.m"
  }
#line 745 "rbmm.region_transformation.m"
}

#line 737 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 737 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 737 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27)
#line 737 "rbmm.region_transformation.m"
{
#line 747 "rbmm.region_transformation.m"
  {
#line 747 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 747 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19;
#line 744 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19;

#line 744 "rbmm.region_transformation.m"
    {
#line 744 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_13)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
    }
#line 744 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 744 "rbmm.region_transformation.m"
      {
#line 744 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
#line 744 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 744 "rbmm.region_transformation.m"
      }
#line 747 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 745 "rbmm.region_transformation.m"
      {
#line 745 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_28_28;
#line 745 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21;
#line 745 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23;
#line 745 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25;
#line 745 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27;

#line 745 "rbmm.region_transformation.m"
        {
#line 745 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 745 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_12[0]));
#line 745 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1));
#line 745 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 745 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_14));
#line 745 "rbmm.region_transformation.m"
        }
#line 745 "rbmm.region_transformation.m"
        {
#line 745 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], transform_hlds__rbmm__region_transformation__V_28_28, transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
        }
#line 745 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21);
#line 745 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23);
#line 745 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25);
#line 745 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
#line 745 "rbmm.region_transformation.m"
      }
#line 747 "rbmm.region_transformation.m"
    else
#line 748 "rbmm.region_transformation.m"
      {
#line 748 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26;
#line 748 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24;
#line 748 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22;
#line 748 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20;
#line 748 "rbmm.region_transformation.m"
      }
#line 747 "rbmm.region_transformation.m"
  }
#line 737 "rbmm.region_transformation.m"
}

#line 731 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 731 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 731 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 731 "rbmm.region_transformation.m"
{
#line 731 "rbmm.region_transformation.m"
  {
#line 731 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 731 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24;
#line 731 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26;
#line 731 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28;
#line 731 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_15;

#line 731 "rbmm.region_transformation.m"
    {
#line 731 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_15);
    }
#line 731 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24));
#line 731 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26));
#line 731 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28));
#line 731 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_15));
#line 731 "rbmm.region_transformation.m"
  }
#line 731 "rbmm.region_transformation.m"
}

#line 722 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 722 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 722 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25)
#line 722 "rbmm.region_transformation.m"
{
#line 733 "rbmm.region_transformation.m"
  {
#line 733 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 733 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17;
#line 730 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17;

#line 730 "rbmm.region_transformation.m"
    {
#line 730 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_12)), &transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
    }
#line 730 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 730 "rbmm.region_transformation.m"
      {
#line 730 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
#line 730 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 730 "rbmm.region_transformation.m"
      }
#line 733 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 731 "rbmm.region_transformation.m"
      {
#line 731 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19;
#line 731 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21;
#line 731 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23;
#line 731 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25;

#line 731 "rbmm.region_transformation.m"
        {
#line 731 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[12], transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
        }
#line 731 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19);
#line 731 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21);
#line 731 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23);
#line 731 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
#line 731 "rbmm.region_transformation.m"
      }
#line 733 "rbmm.region_transformation.m"
    else
#line 734 "rbmm.region_transformation.m"
      {
#line 734 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24;
#line 734 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22;
#line 734 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20;
#line 734 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18;
#line 734 "rbmm.region_transformation.m"
      }
#line 733 "rbmm.region_transformation.m"
  }
#line 722 "rbmm.region_transformation.m"
}

#line 706 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 706 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 706 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 706 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10)
#line 706 "rbmm.region_transformation.m"
{
#line 710 "rbmm.region_transformation.m"
  {
#line 710 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 713 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 711 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11;
#line 718 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 716 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12;

#line 711 "rbmm.region_transformation.m"
    {
#line 711 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__ResurRenamingProc_6, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
    }
#line 711 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 711 "rbmm.region_transformation.m"
      {
#line 711 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenaming0_11 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
#line 711 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 711 "rbmm.region_transformation.m"
      }
#line 713 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 712 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 713 "rbmm.region_transformation.m"
    else
#line 714 "rbmm.region_transformation.m"
      {
#line 714 "rbmm.region_transformation.m"
        {
#line 714 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 714 "rbmm.region_transformation.m"
      }
#line 716 "rbmm.region_transformation.m"
    {
#line 716 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__IteRenamingProc_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
    }
#line 716 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 716 "rbmm.region_transformation.m"
      {
#line 716 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenaming0_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
#line 716 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 716 "rbmm.region_transformation.m"
      }
#line 718 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 717 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__IteRenaming_10 = transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 718 "rbmm.region_transformation.m"
    else
#line 719 "rbmm.region_transformation.m"
      {
#line 719 "rbmm.region_transformation.m"
        {
#line 719 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__IteRenaming_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 719 "rbmm.region_transformation.m"
      }
#line 710 "rbmm.region_transformation.m"
  }
#line 706 "rbmm.region_transformation.m"
}

#line 681 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 681 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 681 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 681 "rbmm.region_transformation.m"
{
#line 681 "rbmm.region_transformation.m"
  {
#line 681 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 681 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 681 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 681 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 681 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 681 "rbmm.region_transformation.m"
    {
#line 681 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 681 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 681 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 681 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 681 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 681 "rbmm.region_transformation.m"
  }
#line 681 "rbmm.region_transformation.m"
}

#line 674 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 674 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 674 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 674 "rbmm.region_transformation.m"
{
#line 674 "rbmm.region_transformation.m"
  {
#line 674 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 674 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 674 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 674 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 674 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 674 "rbmm.region_transformation.m"
    {
#line 674 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 674 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 674 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 674 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 674 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 674 "rbmm.region_transformation.m"
  }
#line 674 "rbmm.region_transformation.m"
}

#line 648 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 648 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg)
#line 648 "rbmm.region_transformation.m"
{
#line 648 "rbmm.region_transformation.m"
  {
#line 648 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 648 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;

#line 648 "rbmm.region_transformation.m"
    {
#line 648 "rbmm.region_transformation.m"
      return transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__648__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))));
    }
#line 648 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 648 "rbmm.region_transformation.m"
  }
#line 648 "rbmm.region_transformation.m"
}

#line 635 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 635 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 635 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66)
#line 635 "rbmm.region_transformation.m"
{
#line 647 "rbmm.region_transformation.m"
  {
#line 647 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 0)));
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 1)));
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RemovedGoal_54;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FlatConjs_56;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ConjsInfo_58;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 2)));
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_67_67;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_99_99;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_100_100;
#line 647 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_103_103;
#line 694 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Info_42;
#line 656 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 657 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 657 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 657 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 703 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_57_57;

#line 648 "rbmm.region_transformation.m"
    {
#line 648 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 648 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
#line 648 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1));
#line 648 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 648 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 648 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "rbmm.region_transformation.m"
    }
#line 648 "rbmm.region_transformation.m"
    {
#line 648 "rbmm.region_transformation.m"
      mercury__require__expect_4_p_0(transform_hlds__rbmm__region_transformation__V_67_67, (MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_case\'/17", (MR_String) "NYI: multi-cons-id cases");
    }
#line 652 "rbmm.region_transformation.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 654 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 652 "rbmm.region_transformation.m"
    else
#line 652 "rbmm.region_transformation.m"
      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 651 "rbmm.region_transformation.m"
        {
#line 651 "rbmm.region_transformation.m"
          MR_Integer transform_hlds__rbmm__region_transformation__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 2)));
#line 651 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 1)));
#line 651 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 3)));

#line 651 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = (transform_hlds__rbmm__region_transformation__V_72_72 == (MR_Integer) 0);
#line 651 "rbmm.region_transformation.m"
        }
#line 652 "rbmm.region_transformation.m"
      else
#line 652 "rbmm.region_transformation.m"
        if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 653 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 652 "rbmm.region_transformation.m"
        else
#line 652 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 652 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 652 "rbmm.region_transformation.m"
          else
#line 652 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 655 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 652 "rbmm.region_transformation.m"
            else
#line 652 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_FALSE;
#line 656 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 656 "rbmm.region_transformation.m"
      {
#line 657 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 657 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Info_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 657 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 657 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 657 "rbmm.region_transformation.m"
          {
#line 657 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 1)));
#line 657 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 2)));
#line 657 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 3)));
#line 657 "rbmm.region_transformation.m"
          }
#line 656 "rbmm.region_transformation.m"
      }
#line 694 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 659 "rbmm.region_transformation.m"
      {
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_43;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Context_44;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_46;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_47;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs2_52;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs_53;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86;
#line 659 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_90_90;
#line 660 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_45_45;
#line 685 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Before_49;
#line 685 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__After_50;
#line 670 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_78_78;
#line 670 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_V_78_78;

#line 659 "rbmm.region_transformation.m"
        {
#line 659 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ProgPoint_43 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__Info_42);
        }
#line 660 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Context_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 0)));
#line 660 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 1)));
#line 661 "rbmm.region_transformation.m"
        {
#line 661 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_43, &transform_hlds__rbmm__region_transformation__ResurRenaming_46, &transform_hlds__rbmm__region_transformation__IteRenaming_47);
        }
#line 665 "rbmm.region_transformation.m"
        {
#line 665 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48);
        }
#line 670 "rbmm.region_transformation.m"
        {
#line 670 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_43)), &transform_hlds__rbmm__region_transformation__conv0_V_78_78);
        }
#line 670 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 670 "rbmm.region_transformation.m"
          {
#line 670 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_78_78);
#line 670 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 670 "rbmm.region_transformation.m"
          }
#line 670 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 670 "rbmm.region_transformation.m"
          {
#line 670 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Before_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 0)));
#line 670 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__After_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 1)));
#line 670 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 670 "rbmm.region_transformation.m"
          }
#line 685 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 678 "rbmm.region_transformation.m"
          {
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_119_119;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_120_120;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_122_122;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs1_51;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_79_79;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82;
#line 678 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 674 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80;
#line 674 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81;
#line 674 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82;
#line 674 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_51;
#line 681 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84;
#line 681 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85;
#line 681 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86;
#line 681 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs2_52;

#line 674 "rbmm.region_transformation.m"
            {
#line 674 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 674 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 674 "rbmm.region_transformation.m"
            }
#line 4730 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 4732 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_119_119 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 4734 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_120_120 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 4736 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4738 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_122_122 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 674 "rbmm.region_transformation.m"
            {
#line 674 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_79_79, transform_hlds__rbmm__region_transformation__Before_49, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
            }
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80);
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81);
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82);
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs1_51 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
#line 681 "rbmm.region_transformation.m"
            {
#line 681 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 681 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 681 "rbmm.region_transformation.m"
            }
#line 681 "rbmm.region_transformation.m"
            {
#line 681 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeCtorInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_83_83, transform_hlds__rbmm__region_transformation__After_50, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs1_51)), &transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
            }
#line 681 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84);
#line 681 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85);
#line 681 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86);
#line 681 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
#line 678 "rbmm.region_transformation.m"
          }
#line 685 "rbmm.region_transformation.m"
        else
#line 686 "rbmm.region_transformation.m"
          {
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 686 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 686 "rbmm.region_transformation.m"
          }
#line 690 "rbmm.region_transformation.m"
        {
#line 690 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__IteRenaming_47, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__Conjs2_52, &transform_hlds__rbmm__region_transformation__Conjs_53);
        }
#line 693 "rbmm.region_transformation.m"
        {
#line 693 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 693 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 693 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 1) = ((MR_Box) ((MR_Integer) 0));
#line 693 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_53));
#line 693 "rbmm.region_transformation.m"
        }
#line 693 "rbmm.region_transformation.m"
        {
#line 693 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_90_90));
#line 693 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_42));
#line 693 "rbmm.region_transformation.m"
        }
#line 659 "rbmm.region_transformation.m"
      }
#line 694 "rbmm.region_transformation.m"
    else
#line 695 "rbmm.region_transformation.m"
      {
#line 695 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Info_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 695 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));

#line 696 "rbmm.region_transformation.m"
        {
#line 696 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_2[11])));
#line 696 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_105));
#line 696 "rbmm.region_transformation.m"
        }
#line 696 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65;
#line 696 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63;
#line 696 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61;
#line 695 "rbmm.region_transformation.m"
      }
#line 698 "rbmm.region_transformation.m"
    {
#line 698 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_18, transform_hlds__rbmm__region_transformation__Graph_19, transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);
    }
#line 702 "rbmm.region_transformation.m"
    {
#line 702 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95));
#line 702 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "rbmm.region_transformation.m"
    }
#line 702 "rbmm.region_transformation.m"
    {
#line 702 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RemovedGoal_54));
#line 702 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_100_100));
#line 702 "rbmm.region_transformation.m"
    }
#line 702 "rbmm.region_transformation.m"
    {
#line 702 "rbmm.region_transformation.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__V_99_99, &transform_hlds__rbmm__region_transformation__FlatConjs_56);
    }
#line 703 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 703 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ConjsInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 704 "rbmm.region_transformation.m"
    {
#line 704 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 704 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 704 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 1) = ((MR_Box) ((MR_Integer) 0));
#line 704 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FlatConjs_56));
#line 704 "rbmm.region_transformation.m"
    }
#line 704 "rbmm.region_transformation.m"
    {
#line 704 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_103_103));
#line 704 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConjsInfo_58));
#line 704 "rbmm.region_transformation.m"
    }
#line 647 "rbmm.region_transformation.m"
    {
#line 647 "rbmm.region_transformation.m"
      MR_Word base;
#line 647 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__11_11 = base;
#line 647 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__MainConsId_27));
#line 647 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 647 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60));
#line 647 "rbmm.region_transformation.m"
    }
#line 647 "rbmm.region_transformation.m"
  }
#line 635 "rbmm.region_transformation.m"
}

#line 591 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 591 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 591 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12)
#line 591 "rbmm.region_transformation.m"
{
#line 597 "rbmm.region_transformation.m"
  {
#line 597 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 597 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 2))))
#line 614 "rbmm.region_transformation.m"
      {
#line 614 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 614 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 614 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 614 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 614 "rbmm.region_transformation.m"
      }
#line 597 "rbmm.region_transformation.m"
    else
#line 597 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 0))))
#line 597 "rbmm.region_transformation.m"
        {
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 1)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 2)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ArgModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 3)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__IsUnique_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 5)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__SubInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 6)));
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Node_28;
#line 597 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__NodeType_29;
#line 598 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation___HowToConstruct0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 4)));

#line 600 "rbmm.region_transformation.m"
          {
#line 600 "rbmm.region_transformation.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Var_21, &transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 601 "rbmm.region_transformation.m"
          {
#line 601 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__NodeType_29 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 602 "rbmm.region_transformation.m"
          {
#line 602 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__region_transformation__NodeType_29, transform_hlds__rbmm__region_transformation__ModuleInfo_1);
          }
#line 604 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 603 "rbmm.region_transformation.m"
            {
#line 603 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 603 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 603 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 603 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 603 "rbmm.region_transformation.m"
            }
#line 604 "rbmm.region_transformation.m"
          else
#line 605 "rbmm.region_transformation.m"
            {
#line 605 "rbmm.region_transformation.m"
              MR_String transform_hlds__rbmm__region_transformation__Name_30;
#line 605 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__RegVar_31;
#line 605 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__HowToConstruct_32;

#line 605 "rbmm.region_transformation.m"
              {
#line 605 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Name_30 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
              }
#line 606 "rbmm.region_transformation.m"
              {
#line 606 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__Name_30, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, &transform_hlds__rbmm__region_transformation__RegVar_31, transform_hlds__rbmm__region_transformation__HeadVar__7_7, transform_hlds__rbmm__region_transformation__HeadVar__8_8, transform_hlds__rbmm__region_transformation__HeadVar__9_9, transform_hlds__rbmm__region_transformation__HeadVar__10_10, transform_hlds__rbmm__region_transformation__HeadVar__11_11, transform_hlds__rbmm__region_transformation__HeadVar__12_12);
              }
#line 608 "rbmm.region_transformation.m"
              {
#line 608 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__HowToConstruct_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__HowToConstruct_32, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegVar_31));
#line 608 "rbmm.region_transformation.m"
              }
#line 609 "rbmm.region_transformation.m"
              {
#line 609 "rbmm.region_transformation.m"
                MR_Word base;
#line 609 "rbmm.region_transformation.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 609 "rbmm.region_transformation.m"
                *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = base;
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_21));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConsId_22));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_23));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ArgModes_24));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HowToConstruct_32));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IsUnique_26));
#line 609 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__SubInfo_27));
#line 609 "rbmm.region_transformation.m"
              }
#line 605 "rbmm.region_transformation.m"
            }
#line 597 "rbmm.region_transformation.m"
        }
#line 597 "rbmm.region_transformation.m"
      else
#line 597 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 1))))
#line 614 "rbmm.region_transformation.m"
          {
#line 614 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 614 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 614 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 614 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 614 "rbmm.region_transformation.m"
          }
#line 597 "rbmm.region_transformation.m"
        else
#line 597 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 614 "rbmm.region_transformation.m"
            {
#line 622 "rbmm.region_transformation.m"
              {
#line 622 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.annotate_constructions_unification\'/12", (MR_String) "complicated unify");
#line 622 "rbmm.region_transformation.m"
                return;
              }
#line 614 "rbmm.region_transformation.m"
            }
#line 597 "rbmm.region_transformation.m"
          else
#line 614 "rbmm.region_transformation.m"
            {
#line 614 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 614 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 614 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 614 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 614 "rbmm.region_transformation.m"
            }
#line 597 "rbmm.region_transformation.m"
  }
#line 591 "rbmm.region_transformation.m"
}

#line 521 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 521 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 521 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 521 "rbmm.region_transformation.m"
{
#line 521 "rbmm.region_transformation.m"
  {
#line 521 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 521 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11;
#line 521 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62;
#line 521 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64;
#line 521 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66;

#line 521 "rbmm.region_transformation.m"
    {
#line 521 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66);
    }
#line 521 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11));
#line 521 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62));
#line 521 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64));
#line 521 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66));
#line 521 "rbmm.region_transformation.m"
  }
#line 521 "rbmm.region_transformation.m"
}

#line 513 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 513 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 513 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 513 "rbmm.region_transformation.m"
{
#line 513 "rbmm.region_transformation.m"
  {
#line 513 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 513 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50;
#line 513 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52;
#line 513 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54;
#line 513 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56;

#line 513 "rbmm.region_transformation.m"
    {
#line 513 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56);
    }
#line 513 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50));
#line 513 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52));
#line 513 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54));
#line 513 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56));
#line 513 "rbmm.region_transformation.m"
  }
#line 513 "rbmm.region_transformation.m"
}

#line 504 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 504 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 504 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 504 "rbmm.region_transformation.m"
{
#line 504 "rbmm.region_transformation.m"
  {
#line 504 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56;

#line 504 "rbmm.region_transformation.m"
    {
#line 504 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56);
    }
#line 504 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50));
#line 504 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52));
#line 504 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54));
#line 504 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56));
#line 504 "rbmm.region_transformation.m"
  }
#line 504 "rbmm.region_transformation.m"
}

#line 490 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 490 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 490 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88)
#line 490 "rbmm.region_transformation.m"
{
#line 501 "rbmm.region_transformation.m"
  {
#line 501 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 501 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 0)));
#line 501 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81;
#line 501 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 1)));

#line 511 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 0))))
#line 529 "rbmm.region_transformation.m"
      {
#line 529 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Goal0_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79), (MR_Integer) 0);
#line 529 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Goal_43;

#line 530 "rbmm.region_transformation.m"
        {
#line 530 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_42, &transform_hlds__rbmm__region_transformation__Goal_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
        }
#line 534 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__rbmm__region_transformation__Goal_43);
#line 529 "rbmm.region_transformation.m"
      }
#line 511 "rbmm.region_transformation.m"
    else
#line 511 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 2))))
#line 581 "rbmm.region_transformation.m"
        {
#line 582 "rbmm.region_transformation.m"
          {
#line 582 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
            return;
          }
#line 581 "rbmm.region_transformation.m"
        }
#line 511 "rbmm.region_transformation.m"
      else
#line 511 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 1))))
#line 581 "rbmm.region_transformation.m"
          {
#line 582 "rbmm.region_transformation.m"
            {
#line 582 "rbmm.region_transformation.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
              return;
            }
#line 581 "rbmm.region_transformation.m"
          }
#line 511 "rbmm.region_transformation.m"
        else
#line 511 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 581 "rbmm.region_transformation.m"
            {
#line 582 "rbmm.region_transformation.m"
              {
#line 582 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
                return;
              }
#line 581 "rbmm.region_transformation.m"
            }
#line 511 "rbmm.region_transformation.m"
          else
#line 511 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 511 "rbmm.region_transformation.m"
              {
#line 511 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 511 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 511 "rbmm.region_transformation.m"
                if ((transform_hlds__rbmm__region_transformation__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "rbmm.region_transformation.m"
                  {
#line 582 "rbmm.region_transformation.m"
                    {
#line 582 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
                      return;
                    }
#line 581 "rbmm.region_transformation.m"
                  }
#line 511 "rbmm.region_transformation.m"
                else
#line 503 "rbmm.region_transformation.m"
                  {
#line 503 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145;
#line 503 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__Conjs1_33;
#line 503 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__Conjs_34;
#line 503 "rbmm.region_transformation.m"
                    MR_Word transform_hlds__rbmm__region_transformation__V_127_127;
#line 504 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84;
#line 504 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86;
#line 504 "rbmm.region_transformation.m"
                    MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88;

#line 504 "rbmm.region_transformation.m"
                    {
#line 504 "rbmm.region_transformation.m"
                      transform_hlds__rbmm__region_transformation__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 504 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 504 "rbmm.region_transformation.m"
                    }
#line 5488 "transform_hlds.rbmm.region_transformation.c"
                    transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 504 "rbmm.region_transformation.m"
                    {
#line 504 "rbmm.region_transformation.m"
                      mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_127_127, transform_hlds__rbmm__region_transformation__V_197_197, &transform_hlds__rbmm__region_transformation__Conjs1_33, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
                    }
#line 504 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84);
#line 504 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86);
#line 504 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
#line 509 "rbmm.region_transformation.m"
                    {
#line 509 "rbmm.region_transformation.m"
                      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__Conjs1_33, &transform_hlds__rbmm__region_transformation__Conjs_34);
                    }
#line 510 "rbmm.region_transformation.m"
                    {
#line 510 "rbmm.region_transformation.m"
                      transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 510 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_198_198));
#line 510 "rbmm.region_transformation.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_34));
#line 510 "rbmm.region_transformation.m"
                    }
#line 503 "rbmm.region_transformation.m"
                  }
#line 511 "rbmm.region_transformation.m"
              }
#line 511 "rbmm.region_transformation.m"
            else
#line 511 "rbmm.region_transformation.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 511 "rbmm.region_transformation.m"
                {
#line 511 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 511 "rbmm.region_transformation.m"
                  if ((transform_hlds__rbmm__region_transformation__V_199_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "rbmm.region_transformation.m"
                    {
#line 582 "rbmm.region_transformation.m"
                      {
#line 582 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
                        return;
                      }
#line 581 "rbmm.region_transformation.m"
                    }
#line 511 "rbmm.region_transformation.m"
                  else
#line 512 "rbmm.region_transformation.m"
                    {
#line 512 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157;
#line 512 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Disjs_37;
#line 512 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__V_120_120;
#line 513 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84;
#line 513 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86;
#line 513 "rbmm.region_transformation.m"
                      MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88;

#line 513 "rbmm.region_transformation.m"
                      {
#line 513 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 513 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 513 "rbmm.region_transformation.m"
                      }
#line 5589 "transform_hlds.rbmm.region_transformation.c"
                      transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 513 "rbmm.region_transformation.m"
                      {
#line 513 "rbmm.region_transformation.m"
                        mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_120_120, transform_hlds__rbmm__region_transformation__V_199_199, &transform_hlds__rbmm__region_transformation__Disjs_37, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
                      }
#line 513 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84);
#line 513 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86);
#line 513 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
#line 518 "rbmm.region_transformation.m"
                      {
#line 518 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 518 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Disjs_37));
#line 518 "rbmm.region_transformation.m"
                      }
#line 512 "rbmm.region_transformation.m"
                    }
#line 511 "rbmm.region_transformation.m"
                }
#line 511 "rbmm.region_transformation.m"
              else
#line 511 "rbmm.region_transformation.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 581 "rbmm.region_transformation.m"
                  {
#line 582 "rbmm.region_transformation.m"
                    {
#line 582 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
                      return;
                    }
#line 581 "rbmm.region_transformation.m"
                  }
#line 511 "rbmm.region_transformation.m"
                else
#line 511 "rbmm.region_transformation.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 559 "rbmm.region_transformation.m"
                    {
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 4)));
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Cond_51;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Then_52;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__Else_53;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98;
#line 559 "rbmm.region_transformation.m"
                      MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99;

#line 560 "rbmm.region_transformation.m"
                      {
#line 560 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Cond0_48, &transform_hlds__rbmm__region_transformation__Cond_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96);
                      }
#line 564 "rbmm.region_transformation.m"
                      {
#line 564 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Then0_49, &transform_hlds__rbmm__region_transformation__Then_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99);
                      }
#line 568 "rbmm.region_transformation.m"
                      {
#line 568 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Else0_50, &transform_hlds__rbmm__region_transformation__Else_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
                      }
#line 572 "rbmm.region_transformation.m"
                      {
#line 572 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 572 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 572 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Vars_47));
#line 572 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cond_51));
#line 572 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Then_52));
#line 572 "rbmm.region_transformation.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Else_53));
#line 572 "rbmm.region_transformation.m"
                      }
#line 559 "rbmm.region_transformation.m"
                    }
#line 511 "rbmm.region_transformation.m"
                  else
#line 511 "rbmm.region_transformation.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 536 "rbmm.region_transformation.m"
                      {
#line 536 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Reason0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 536 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Reason_46;
#line 536 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 536 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Goal_136;
#line 550 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation__Var_133;
#line 548 "rbmm.region_transformation.m"
                        MR_Word transform_hlds__rbmm__region_transformation___Kind_45;

#line 548 "rbmm.region_transformation.m"
                        transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Reason0_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 548 "rbmm.region_transformation.m"
                        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 548 "rbmm.region_transformation.m"
                          {
#line 548 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 1)));
#line 548 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation___Kind_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 2)));
#line 549 "rbmm.region_transformation.m"
                            {
#line 549 "rbmm.region_transformation.m"
                              transform_hlds__rbmm__region_transformation__Reason_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 549 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 549 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_133));
#line 549 "rbmm.region_transformation.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 2) = ((MR_Box) ((MR_Integer) 3));
#line 549 "rbmm.region_transformation.m"
                            }
#line 548 "rbmm.region_transformation.m"
                          }
#line 548 "rbmm.region_transformation.m"
                        else
#line 551 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__Reason_46 = transform_hlds__rbmm__region_transformation__Reason0_44;
#line 553 "rbmm.region_transformation.m"
                        {
#line 553 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_135, &transform_hlds__rbmm__region_transformation__Goal_136, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
                        }
#line 557 "rbmm.region_transformation.m"
                        {
#line 557 "rbmm.region_transformation.m"
                          transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 557 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Reason_46));
#line 557 "rbmm.region_transformation.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Goal_136));
#line 557 "rbmm.region_transformation.m"
                        }
#line 536 "rbmm.region_transformation.m"
                      }
#line 511 "rbmm.region_transformation.m"
                    else
#line 511 "rbmm.region_transformation.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 581 "rbmm.region_transformation.m"
                        {
#line 582 "rbmm.region_transformation.m"
                          {
#line 582 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 582 "rbmm.region_transformation.m"
                            return;
                          }
#line 581 "rbmm.region_transformation.m"
                        }
#line 511 "rbmm.region_transformation.m"
                      else
#line 520 "rbmm.region_transformation.m"
                        {
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169;
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__Cases_41;
#line 520 "rbmm.region_transformation.m"
                          MR_Word transform_hlds__rbmm__region_transformation__V_113_113;
#line 521 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84;
#line 521 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86;
#line 521 "rbmm.region_transformation.m"
                          MR_Box transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88;

#line 521 "rbmm.region_transformation.m"
                          {
#line 521 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 521 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__9_9));
#line 521 "rbmm.region_transformation.m"
                          }
#line 5831 "transform_hlds.rbmm.region_transformation.c"
                          transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 521 "rbmm.region_transformation.m"
                          {
#line 521 "rbmm.region_transformation.m"
                            mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_113_113, transform_hlds__rbmm__region_transformation__Cases0_40, &transform_hlds__rbmm__region_transformation__Cases_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
                          }
#line 521 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84);
#line 521 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86);
#line 521 "rbmm.region_transformation.m"
                          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
#line 527 "rbmm.region_transformation.m"
                          {
#line 527 "rbmm.region_transformation.m"
                            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 527 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 527 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_38));
#line 527 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CanFail_39));
#line 527 "rbmm.region_transformation.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cases_41));
#line 527 "rbmm.region_transformation.m"
                          }
#line 520 "rbmm.region_transformation.m"
                        }
#line 501 "rbmm.region_transformation.m"
    {
#line 501 "rbmm.region_transformation.m"
      MR_Word base;
#line 501 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = base;
#line 501 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81));
#line 501 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82));
#line 501 "rbmm.region_transformation.m"
    }
#line 501 "rbmm.region_transformation.m"
  }
#line 490 "rbmm.region_transformation.m"
}

#line 432 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 432 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 432 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 432 "rbmm.region_transformation.m"
{
#line 432 "rbmm.region_transformation.m"
  {
#line 432 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 432 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_RegVar_16;
#line 432 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22;
#line 432 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24;
#line 432 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26;

#line 432 "rbmm.region_transformation.m"
    {
#line 432 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv4_RegVar_16, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26);
    }
#line 432 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_RegVar_16));
#line 432 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22));
#line 432 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24));
#line 432 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26));
#line 432 "rbmm.region_transformation.m"
  }
#line 432 "rbmm.region_transformation.m"
}

#line 409 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 409 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 409 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16)
#line 409 "rbmm.region_transformation.m"
{
#line 420 "rbmm.region_transformation.m"
  {
#line 420 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 420 "rbmm.region_transformation.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 0))))
#line 477 "rbmm.region_transformation.m"
      {
#line 486 "rbmm.region_transformation.m"
        {
#line 486 "rbmm.region_transformation.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
          return;
        }
#line 477 "rbmm.region_transformation.m"
      }
#line 420 "rbmm.region_transformation.m"
    else
#line 420 "rbmm.region_transformation.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 2))))
#line 420 "rbmm.region_transformation.m"
        {
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_236_236;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 420 "rbmm.region_transformation.m"
          MR_Integer transform_hlds__rbmm__region_transformation__CalleeProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 5)));
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes_35;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Constants_36;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Ins_37;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Outs_38;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AllNodes_39;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgs_40;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredInfo_41;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_43;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_59_59;
#line 420 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 427 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 425 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34;
#line 432 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12;
#line 432 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14;
#line 432 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16;

#line 425 "rbmm.region_transformation.m"
          {
#line 425 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_6)), &transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
          }
#line 425 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 425 "rbmm.region_transformation.m"
            {
#line 425 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes0_34 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
#line 425 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 425 "rbmm.region_transformation.m"
            }
#line 427 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 426 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ActualNodes_35 = transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 427 "rbmm.region_transformation.m"
          else
#line 428 "rbmm.region_transformation.m"
            {
#line 428 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes_35 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[10];
#line 428 "rbmm.region_transformation.m"
            }
#line 430 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Constants_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 0)));
#line 430 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Ins_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 1)));
#line 430 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Outs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 2)));
#line 6076 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 431 "rbmm.region_transformation.m"
          {
#line 431 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_59_59 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Ins_37, transform_hlds__rbmm__region_transformation__Outs_38);
          }
#line 431 "rbmm.region_transformation.m"
          {
#line 431 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AllNodes_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Constants_36, transform_hlds__rbmm__region_transformation__V_59_59);
          }
#line 432 "rbmm.region_transformation.m"
          {
#line 432 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[0]));
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1));
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_2));
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_3));
#line 432 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_4));
#line 432 "rbmm.region_transformation.m"
          }
#line 6106 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeInfo_236_236 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 432 "rbmm.region_transformation.m"
          {
#line 432 "rbmm.region_transformation.m"
            mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__TypeInfo_236_236, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_60_60, transform_hlds__rbmm__region_transformation__AllNodes_39, &transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
          }
#line 432 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12);
#line 432 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14);
#line 432 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
#line 435 "rbmm.region_transformation.m"
          {
#line 435 "rbmm.region_transformation.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__CalleePredId_28, &transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 436 "rbmm.region_transformation.m"
          {
#line 436 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 440 "rbmm.region_transformation.m"
          if ((transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42 == (MR_Integer) 1))
#line 441 "rbmm.region_transformation.m"
            {
#line 441 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_44;
#line 441 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Last_45;
#line 441 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_64_64;
#line 441 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_65_65;
#line 443 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv8_Last_45;

#line 443 "rbmm.region_transformation.m"
              {
#line 443 "rbmm.region_transformation.m"
                mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, &transform_hlds__rbmm__region_transformation__BeforeLast_44, &transform_hlds__rbmm__region_transformation__conv8_Last_45);
              }
#line 443 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Last_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_Last_45);
#line 444 "rbmm.region_transformation.m"
              {
#line 444 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_45));
#line 444 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "rbmm.region_transformation.m"
              }
#line 444 "rbmm.region_transformation.m"
              {
#line 444 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, transform_hlds__rbmm__region_transformation__V_65_65);
              }
#line 444 "rbmm.region_transformation.m"
              {
#line 444 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__BeforeLast_44, transform_hlds__rbmm__region_transformation__V_64_64);
              }
#line 441 "rbmm.region_transformation.m"
            }
#line 440 "rbmm.region_transformation.m"
          else
#line 438 "rbmm.region_transformation.m"
            {
#line 438 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40);
            }
#line 447 "rbmm.region_transformation.m"
          {
#line 447 "rbmm.region_transformation.m"
            MR_Word base;
#line 447 "rbmm.region_transformation.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 447 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleePredId_28));
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleeProcId_29));
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_43));
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Builtin_31));
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_32));
#line 447 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_33));
#line 447 "rbmm.region_transformation.m"
          }
#line 420 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 420 "rbmm.region_transformation.m"
        }
#line 420 "rbmm.region_transformation.m"
      else
#line 420 "rbmm.region_transformation.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 1))))
#line 453 "rbmm.region_transformation.m"
          {
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__LHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__RHS_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Mode_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Unification0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 453 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Unification_84;

#line 455 "rbmm.region_transformation.m"
            {
#line 455 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, transform_hlds__rbmm__region_transformation__Unification0_82, &transform_hlds__rbmm__region_transformation__Unification_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);
            }
#line 458 "rbmm.region_transformation.m"
            {
#line 458 "rbmm.region_transformation.m"
              MR_Word base;
#line 458 "rbmm.region_transformation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 458 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 458 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LHS_79));
#line 458 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RHS_80));
#line 458 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Mode_81));
#line 458 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Unification_84));
#line 458 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_83));
#line 458 "rbmm.region_transformation.m"
            }
#line 453 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 453 "rbmm.region_transformation.m"
          }
#line 420 "rbmm.region_transformation.m"
        else
#line 420 "rbmm.region_transformation.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 466 "rbmm.region_transformation.m"
            {
#line 468 "rbmm.region_transformation.m"
              {
#line 468 "rbmm.region_transformation.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "call_foreign_proc");
#line 468 "rbmm.region_transformation.m"
                return;
              }
#line 466 "rbmm.region_transformation.m"
            }
#line 420 "rbmm.region_transformation.m"
          else
#line 420 "rbmm.region_transformation.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 420 "rbmm.region_transformation.m"
              {
#line 420 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 478 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 420 "rbmm.region_transformation.m"
                if ((transform_hlds__rbmm__region_transformation__V_340_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "rbmm.region_transformation.m"
                  {
#line 471 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 471 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 471 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 471 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 471 "rbmm.region_transformation.m"
                    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 471 "rbmm.region_transformation.m"
                  }
#line 420 "rbmm.region_transformation.m"
                else
#line 477 "rbmm.region_transformation.m"
                  {
#line 486 "rbmm.region_transformation.m"
                    {
#line 486 "rbmm.region_transformation.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                      return;
                    }
#line 477 "rbmm.region_transformation.m"
                  }
#line 420 "rbmm.region_transformation.m"
              }
#line 420 "rbmm.region_transformation.m"
            else
#line 420 "rbmm.region_transformation.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 420 "rbmm.region_transformation.m"
                {
#line 420 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 420 "rbmm.region_transformation.m"
                  if ((transform_hlds__rbmm__region_transformation__V_342_342 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "rbmm.region_transformation.m"
                    {
#line 471 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 471 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 471 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 471 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 471 "rbmm.region_transformation.m"
                      *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 471 "rbmm.region_transformation.m"
                    }
#line 420 "rbmm.region_transformation.m"
                  else
#line 477 "rbmm.region_transformation.m"
                    {
#line 486 "rbmm.region_transformation.m"
                      {
#line 486 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                        return;
                      }
#line 477 "rbmm.region_transformation.m"
                    }
#line 420 "rbmm.region_transformation.m"
                }
#line 420 "rbmm.region_transformation.m"
              else
#line 420 "rbmm.region_transformation.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 461 "rbmm.region_transformation.m"
                  {
#line 463 "rbmm.region_transformation.m"
                    {
#line 463 "rbmm.region_transformation.m"
                      mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "generic call");
#line 463 "rbmm.region_transformation.m"
                      return;
                    }
#line 461 "rbmm.region_transformation.m"
                  }
#line 420 "rbmm.region_transformation.m"
                else
#line 420 "rbmm.region_transformation.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 477 "rbmm.region_transformation.m"
                    {
#line 486 "rbmm.region_transformation.m"
                      {
#line 486 "rbmm.region_transformation.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                        return;
                      }
#line 477 "rbmm.region_transformation.m"
                    }
#line 420 "rbmm.region_transformation.m"
                  else
#line 420 "rbmm.region_transformation.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 477 "rbmm.region_transformation.m"
                      {
#line 486 "rbmm.region_transformation.m"
                        {
#line 486 "rbmm.region_transformation.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                          return;
                        }
#line 477 "rbmm.region_transformation.m"
                      }
#line 420 "rbmm.region_transformation.m"
                    else
#line 420 "rbmm.region_transformation.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 477 "rbmm.region_transformation.m"
                        {
#line 486 "rbmm.region_transformation.m"
                          {
#line 486 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                            return;
                          }
#line 477 "rbmm.region_transformation.m"
                        }
#line 420 "rbmm.region_transformation.m"
                      else
#line 477 "rbmm.region_transformation.m"
                        {
#line 486 "rbmm.region_transformation.m"
                          {
#line 486 "rbmm.region_transformation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 486 "rbmm.region_transformation.m"
                            return;
                          }
#line 477 "rbmm.region_transformation.m"
                        }
#line 420 "rbmm.region_transformation.m"
  }
#line 409 "rbmm.region_transformation.m"
}

#line 383 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 383 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 383 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 383 "rbmm.region_transformation.m"
{
#line 383 "rbmm.region_transformation.m"
  {
#line 383 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 383 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 383 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 383 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 383 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 383 "rbmm.region_transformation.m"
    {
#line 383 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 383 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 383 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 383 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 383 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 383 "rbmm.region_transformation.m"
  }
#line 383 "rbmm.region_transformation.m"
}

#line 375 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 375 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 375 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 375 "rbmm.region_transformation.m"
{
#line 375 "rbmm.region_transformation.m"
  {
#line 375 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 375 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 375 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 375 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 375 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 375 "rbmm.region_transformation.m"
    {
#line 375 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 375 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 375 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 375 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 375 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 375 "rbmm.region_transformation.m"
  }
#line 375 "rbmm.region_transformation.m"
}

#line 339 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 339 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 339 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56)
#line 339 "rbmm.region_transformation.m"
{
#line 348 "rbmm.region_transformation.m"
  {
#line 348 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 348 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 0)));
#line 348 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 1)));
#line 348 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HasSubGoals_31;

#line 350 "rbmm.region_transformation.m"
    {
#line 350 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__HasSubGoals_31 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__region_transformation__GoalExpr0_29);
    }
#line 401 "rbmm.region_transformation.m"
    if ((transform_hlds__rbmm__region_transformation__HasSubGoals_31 == (MR_Integer) 1))
#line 352 "rbmm.region_transformation.m"
      {
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_32;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Context_33;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_35;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_36;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__GoalExpr_37;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__GoalInfo_38;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs3_44;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs_45;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78;
#line 352 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79;
#line 354 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_34_34;
#line 386 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Before_40;
#line 386 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__After_41;
#line 371 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_68_68;
#line 371 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_V_68_68;
#line 396 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 396 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_46_46;
#line 396 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 396 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_48_48;

#line 353 "rbmm.region_transformation.m"
        {
#line 353 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ProgPoint_32 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__GoalInfo0_30);
        }
#line 354 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 0)));
#line 354 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 1)));
#line 355 "rbmm.region_transformation.m"
        {
#line 355 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ProgPoint_32, &transform_hlds__rbmm__region_transformation__ResurRenaming_35, &transform_hlds__rbmm__region_transformation__IteRenaming_36);
        }
#line 361 "rbmm.region_transformation.m"
        {
#line 361 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenaming_35, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__GoalExpr0_29, &transform_hlds__rbmm__region_transformation__GoalExpr_37, transform_hlds__rbmm__region_transformation__GoalInfo0_30, &transform_hlds__rbmm__region_transformation__GoalInfo_38, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63);
        }
#line 366 "rbmm.region_transformation.m"
        {
#line 366 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39);
        }
#line 371 "rbmm.region_transformation.m"
        {
#line 371 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_32)), &transform_hlds__rbmm__region_transformation__conv0_V_68_68);
        }
#line 371 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 371 "rbmm.region_transformation.m"
          {
#line 371 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_68_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_68_68);
#line 371 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 371 "rbmm.region_transformation.m"
          }
#line 371 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 371 "rbmm.region_transformation.m"
          {
#line 371 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Before_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 0)));
#line 371 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__After_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 1)));
#line 371 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 371 "rbmm.region_transformation.m"
          }
#line 386 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 377 "rbmm.region_transformation.m"
          {
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_103_103;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_104_104;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_106_106;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs1_42;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs2_43;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_69_69;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 377 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 375 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70;
#line 375 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71;
#line 375 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72;
#line 375 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_42;
#line 383 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77;
#line 383 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78;
#line 383 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79;
#line 383 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs3_44;

#line 375 "rbmm.region_transformation.m"
            {
#line 375 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 375 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 375 "rbmm.region_transformation.m"
            }
#line 6773 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 6775 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_103_103 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 6777 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_104_104 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 6779 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6781 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_106_106 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 375 "rbmm.region_transformation.m"
            {
#line 375 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_69_69, transform_hlds__rbmm__region_transformation__Before_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
            }
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70);
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71);
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72);
#line 375 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs1_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
#line 380 "rbmm.region_transformation.m"
            {
#line 380 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 380 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 380 "rbmm.region_transformation.m"
            }
#line 380 "rbmm.region_transformation.m"
            {
#line 380 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 380 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "rbmm.region_transformation.m"
            }
#line 380 "rbmm.region_transformation.m"
            {
#line 380 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs2_43 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs1_42, transform_hlds__rbmm__region_transformation__V_73_73);
            }
#line 383 "rbmm.region_transformation.m"
            {
#line 383 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 383 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 383 "rbmm.region_transformation.m"
            }
#line 383 "rbmm.region_transformation.m"
            {
#line 383 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeCtorInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_76_76, transform_hlds__rbmm__region_transformation__After_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs2_43)), &transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
            }
#line 383 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77);
#line 383 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78);
#line 383 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79);
#line 383 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs3_44 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
#line 377 "rbmm.region_transformation.m"
          }
#line 386 "rbmm.region_transformation.m"
        else
#line 388 "rbmm.region_transformation.m"
          {
#line 388 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_80_80;
#line 388 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_81_81;

#line 388 "rbmm.region_transformation.m"
            {
#line 388 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 388 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 388 "rbmm.region_transformation.m"
            }
#line 388 "rbmm.region_transformation.m"
            {
#line 388 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_81_81));
#line 388 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "rbmm.region_transformation.m"
            }
#line 388 "rbmm.region_transformation.m"
            {
#line 388 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs3_44 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39, transform_hlds__rbmm__region_transformation__V_80_80);
            }
#line 388 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 388 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 388 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 388 "rbmm.region_transformation.m"
          }
#line 392 "rbmm.region_transformation.m"
        {
#line 392 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56, transform_hlds__rbmm__region_transformation__Conjs3_44, &transform_hlds__rbmm__region_transformation__Conjs_45);
        }
#line 396 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Conjs_45)) == (MR_mktag((MR_Integer) 1)));
#line 396 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 396 "rbmm.region_transformation.m"
          {
#line 396 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 0)));
#line 396 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 1)));
#line 396 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 396 "rbmm.region_transformation.m"
            if (transform_hlds__rbmm__region_transformation__succeeded)
#line 396 "rbmm.region_transformation.m"
              {
#line 396 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 0)));
#line 396 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 1)));
#line 396 "rbmm.region_transformation.m"
              }
#line 396 "rbmm.region_transformation.m"
          }
#line 398 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 397 "rbmm.region_transformation.m"
          {
#line 397 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_88_88;

#line 397 "rbmm.region_transformation.m"
            {
#line 397 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 397 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) ((MR_Integer) 0));
#line 397 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_45));
#line 397 "rbmm.region_transformation.m"
            }
#line 397 "rbmm.region_transformation.m"
            {
#line 397 "rbmm.region_transformation.m"
              MR_Word base;
#line 397 "rbmm.region_transformation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 397 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_88_88));
#line 397 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 397 "rbmm.region_transformation.m"
            }
#line 397 "rbmm.region_transformation.m"
          }
#line 398 "rbmm.region_transformation.m"
        else
#line 399 "rbmm.region_transformation.m"
          {
#line 399 "rbmm.region_transformation.m"
            MR_Word base;
#line 399 "rbmm.region_transformation.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 399 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 399 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 399 "rbmm.region_transformation.m"
          }
#line 352 "rbmm.region_transformation.m"
      }
#line 401 "rbmm.region_transformation.m"
    else
#line 403 "rbmm.region_transformation.m"
      {
#line 403 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);
#line 403 "rbmm.region_transformation.m"
        return;
      }
#line 348 "rbmm.region_transformation.m"
  }
#line 339 "rbmm.region_transformation.m"
}

#line 297 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 297 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 297 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 297 "rbmm.region_transformation.m"
{
#line 297 "rbmm.region_transformation.m"
  {
#line 297 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 297 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_RegVar_12;
#line 297 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18;
#line 297 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20;
#line 297 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22;

#line 297 "rbmm.region_transformation.m"
    {
#line 297 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_RegVar_12, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22);
    }
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_RegVar_12));
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18));
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20));
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22));
#line 297 "rbmm.region_transformation.m"
  }
#line 297 "rbmm.region_transformation.m"
}

#line 260 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 260 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 260 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70)
#line 260 "rbmm.region_transformation.m"
{
#line 273 "rbmm.region_transformation.m"
  {
#line 273 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_107_107;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Constants_42;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Deads_43;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Borns_44;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalInputNodes_45;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalNodes_46;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_47;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InMode_48;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutMode_49;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InModes_50;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutModes_51;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_52;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 273 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_79_79;
#line 273 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_80_80;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95;
#line 273 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96;
#line 297 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68;
#line 297 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58;
#line 297 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60;

#line 274 "rbmm.region_transformation.m"
    {
#line 274 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_25, transform_hlds__rbmm__region_transformation__Graph_27, transform_hlds__rbmm__region_transformation__ResurRenamingProc_30, transform_hlds__rbmm__region_transformation__IteRenamingProc_31, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29, transform_hlds__rbmm__region_transformation__RegionInstructionProc_32, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74);
    }
#line 294 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Constants_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 0)));
#line 294 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Deads_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 1)));
#line 294 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Borns_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 2)));
#line 7171 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 295 "rbmm.region_transformation.m"
    {
#line 295 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalInputNodes_45 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Constants_42, transform_hlds__rbmm__region_transformation__Deads_43);
    }
#line 296 "rbmm.region_transformation.m"
    {
#line 296 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalNodes_46 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 297 "rbmm.region_transformation.m"
    {
#line 297 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 297 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[0]));
#line 297 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1));
#line 297 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 297 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_27));
#line 297 "rbmm.region_transformation.m"
    }
#line 7197 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeInfo_107_107 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 297 "rbmm.region_transformation.m"
    {
#line 297 "rbmm.region_transformation.m"
      mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__TypeInfo_107_107, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__rbmm__region_transformation__V_75_75, transform_hlds__rbmm__region_transformation__FormalNodes_46, &transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
    }
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68);
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58);
#line 297 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
#line 300 "rbmm.region_transformation.m"
    {
#line 300 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__InMode_48 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 301 "rbmm.region_transformation.m"
    {
#line 301 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__OutMode_49 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 302 "rbmm.region_transformation.m"
    {
#line 302 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_79_79 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45);
    }
#line 7225 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 302 "rbmm.region_transformation.m"
    {
#line 302 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__InMode_48)), &transform_hlds__rbmm__region_transformation__InModes_50);
    }
#line 303 "rbmm.region_transformation.m"
    {
#line 303 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_80_80 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 303 "rbmm.region_transformation.m"
    {
#line 303 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__OutMode_49)), &transform_hlds__rbmm__region_transformation__OutModes_51);
    }
#line 306 "rbmm.region_transformation.m"
    {
#line 306 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_26);
    }
#line 311 "rbmm.region_transformation.m"
    if ((transform_hlds__rbmm__region_transformation__PredOrFunc_52 == (MR_Integer) 1))
#line 312 "rbmm.region_transformation.m"
      {
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LastHeadVar_54;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__LastHeadMode_56;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_82_82;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_87_87;
#line 312 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_88_88;
#line 313 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54;
#line 315 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56;

#line 313 "rbmm.region_transformation.m"
        {
#line 313 "rbmm.region_transformation.m"
          mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, &transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, &transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
        }
#line 313 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__LastHeadVar_54 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
#line 314 "rbmm.region_transformation.m"
        {
#line 314 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadVar_54));
#line 314 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "rbmm.region_transformation.m"
        }
#line 314 "rbmm.region_transformation.m"
        {
#line 314 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_82_82 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, transform_hlds__rbmm__region_transformation__V_83_83);
        }
#line 314 "rbmm.region_transformation.m"
        {
#line 314 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, transform_hlds__rbmm__region_transformation__V_82_82);
        }
#line 315 "rbmm.region_transformation.m"
        {
#line 315 "rbmm.region_transformation.m"
          mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, &transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, &transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
        }
#line 315 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__LastHeadMode_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
#line 318 "rbmm.region_transformation.m"
        {
#line 318 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadMode_56));
#line 318 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "rbmm.region_transformation.m"
        }
#line 318 "rbmm.region_transformation.m"
        {
#line 318 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_87_87 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__OutModes_51, transform_hlds__rbmm__region_transformation__V_88_88);
        }
#line 317 "rbmm.region_transformation.m"
        {
#line 317 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_86_86 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__V_87_87);
        }
#line 317 "rbmm.region_transformation.m"
        {
#line 317 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, transform_hlds__rbmm__region_transformation__V_86_86);
        }
#line 312 "rbmm.region_transformation.m"
      }
#line 311 "rbmm.region_transformation.m"
    else
#line 308 "rbmm.region_transformation.m"
      {
#line 308 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_92_92;

#line 309 "rbmm.region_transformation.m"
        {
#line 309 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47);
        }
#line 310 "rbmm.region_transformation.m"
        {
#line 310 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_92_92 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__OutModes_51);
        }
#line 310 "rbmm.region_transformation.m"
        {
#line 310 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, transform_hlds__rbmm__region_transformation__V_92_92);
        }
#line 308 "rbmm.region_transformation.m"
      }
#line 321 "rbmm.region_transformation.m"
    {
#line 321 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93);
    }
#line 322 "rbmm.region_transformation.m"
    {
#line 322 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 323 "rbmm.region_transformation.m"
    {
#line 323 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 324 "rbmm.region_transformation.m"
    {
#line 324 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 325 "rbmm.region_transformation.m"
    {
#line 325 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);
#line 325 "rbmm.region_transformation.m"
      return;
    }
#line 273 "rbmm.region_transformation.m"
  }
#line 260 "rbmm.region_transformation.m"
}

#line 203 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 203 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 203 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 203 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 203 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59)
#line 203 "rbmm.region_transformation.m"
{
#line 213 "rbmm.region_transformation.m"
  {
#line 213 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_27;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_28;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_29;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo1_30;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarSet0_31;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarTypes0_32;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HeadVars0_33;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualArgModes0_34;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Goal0_35;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Graph_36;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_41;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_44;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_46;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar0_47;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar_53;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo2_54;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_55;
#line 213 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 222 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_V_60_60;
#line 222 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_37_37;
#line 223 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38;
#line 224 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39;
#line 228 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 225 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40;
#line 235 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 232 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43;
#line 239 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46;
#line 241 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_48_48;
#line 241 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 241 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 241 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 241 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_52_52;

#line 214 "rbmm.region_transformation.m"
    {
#line 214 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_23));
#line 214 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_24));
#line 214 "rbmm.region_transformation.m"
    }
#line 215 "rbmm.region_transformation.m"
    {
#line 215 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PPId_27, &transform_hlds__rbmm__region_transformation__PredInfo0_28, &transform_hlds__rbmm__region_transformation__ProcInfo0_29);
    }
#line 216 "rbmm.region_transformation.m"
    {
#line 216 "rbmm.region_transformation.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__ProcInfo0_29, &transform_hlds__rbmm__region_transformation__ProcInfo1_30);
    }
#line 217 "rbmm.region_transformation.m"
    {
#line 217 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarSet0_31);
    }
#line 218 "rbmm.region_transformation.m"
    {
#line 218 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarTypes0_32);
    }
#line 219 "rbmm.region_transformation.m"
    {
#line 219 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__HeadVars0_33);
    }
#line 220 "rbmm.region_transformation.m"
    {
#line 220 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ActualArgModes0_34);
    }
#line 221 "rbmm.region_transformation.m"
    {
#line 221 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__Goal0_35);
    }
#line 7548 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 222 "rbmm.region_transformation.m"
    {
#line 222 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_transformation__RptaInfoTable_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv0_V_60_60);
    }
#line 222 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_60_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_60_60);
#line 222 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Graph_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 0)));
#line 222 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 1)));
#line 223 "rbmm.region_transformation.m"
    {
#line 223 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
    }
#line 223 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
#line 224 "rbmm.region_transformation.m"
    {
#line 224 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[2], transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
    }
#line 224 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
#line 225 "rbmm.region_transformation.m"
    {
#line 225 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__ResurRenamingTable_18, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
    }
#line 225 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 225 "rbmm.region_transformation.m"
      {
#line 225 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
#line 225 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 225 "rbmm.region_transformation.m"
      }
#line 228 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 226 "rbmm.region_transformation.m"
      {
#line 227 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42;

#line 226 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 227 "rbmm.region_transformation.m"
        {
#line 227 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
        }
#line 227 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
#line 226 "rbmm.region_transformation.m"
      }
#line 228 "rbmm.region_transformation.m"
    else
#line 229 "rbmm.region_transformation.m"
      {
#line 229 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 229 "rbmm.region_transformation.m"
        {
#line 229 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 230 "rbmm.region_transformation.m"
        {
#line 230 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 229 "rbmm.region_transformation.m"
      }
#line 232 "rbmm.region_transformation.m"
    {
#line 232 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__IteRenamingTable_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
    }
#line 232 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 232 "rbmm.region_transformation.m"
      {
#line 232 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc0_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
#line 232 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 232 "rbmm.region_transformation.m"
      }
#line 235 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 233 "rbmm.region_transformation.m"
      {
#line 234 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45;

#line 233 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 234 "rbmm.region_transformation.m"
        {
#line 234 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
        }
#line 234 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
#line 233 "rbmm.region_transformation.m"
      }
#line 235 "rbmm.region_transformation.m"
    else
#line 236 "rbmm.region_transformation.m"
      {
#line 236 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 236 "rbmm.region_transformation.m"
        {
#line 236 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 237 "rbmm.region_transformation.m"
        {
#line 237 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 236 "rbmm.region_transformation.m"
      }
#line 239 "rbmm.region_transformation.m"
    {
#line 239 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[6], transform_hlds__rbmm__region_transformation__RegionInstructionTable_20, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
    }
#line 239 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__RegionInstructionProc_46 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
#line 240 "rbmm.region_transformation.m"
    {
#line 240 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__NameToVar0_47 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1]);
    }
#line 241 "rbmm.region_transformation.m"
    {
#line 241 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__Graph_36, transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39, transform_hlds__rbmm__region_transformation__ResurRenamingProc_41, transform_hlds__rbmm__region_transformation__IteRenamingProc_44, transform_hlds__rbmm__region_transformation__RegionInstructionProc_46, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45, transform_hlds__rbmm__region_transformation__VarSet0_31, &transform_hlds__rbmm__region_transformation__V_48_48, transform_hlds__rbmm__region_transformation__VarTypes0_32, &transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__HeadVars0_33, &transform_hlds__rbmm__region_transformation__V_50_50, transform_hlds__rbmm__region_transformation__ActualArgModes0_34, &transform_hlds__rbmm__region_transformation__V_51_51, transform_hlds__rbmm__region_transformation__Goal0_35, &transform_hlds__rbmm__region_transformation__V_52_52, transform_hlds__rbmm__region_transformation__NameToVar0_47, &transform_hlds__rbmm__region_transformation__NameToVar_53, transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ProcInfo2_54);
    }
#line 246 "rbmm.region_transformation.m"
    {
#line 246 "rbmm.region_transformation.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__rbmm__region_transformation__ProcInfo2_54, &transform_hlds__rbmm__region_transformation__ProcInfo_55);
    }
#line 247 "rbmm.region_transformation.m"
    {
#line 247 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_27, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__ProcInfo_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);
    }
#line 248 "rbmm.region_transformation.m"
    {
#line 248 "rbmm.region_transformation.m"
      mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), ((MR_Box) (transform_hlds__rbmm__region_transformation__NameToVar_53)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57);
#line 248 "rbmm.region_transformation.m"
      return;
    }
#line 213 "rbmm.region_transformation.m"
  }
#line 203 "rbmm.region_transformation.m"
}

#line 183 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 183 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 183 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 183 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 183 "rbmm.region_transformation.m"
{
#line 183 "rbmm.region_transformation.m"
  {
#line 183 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 183 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57;
#line 183 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59;

#line 183 "rbmm.region_transformation.m"
    {
#line 183 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59);
    }
#line 183 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57));
#line 183 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59));
#line 183 "rbmm.region_transformation.m"
  }
#line 183 "rbmm.region_transformation.m"
}

#line 169 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 169 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 169 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 169 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 169 "rbmm.region_transformation.m"
{
#line 180 "rbmm.region_transformation.m"
  {
#line 180 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 180 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_25;
#line 180 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_26;
#line 180 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 183 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28;
#line 183 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30;

#line 181 "rbmm.region_transformation.m"
    {
#line 181 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_22, &transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 182 "rbmm.region_transformation.m"
    {
#line 182 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 183 "rbmm.region_transformation.m"
    {
#line 183 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[0]));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_14));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_17));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_18));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_19));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21));
#line 183 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_22));
#line 183 "rbmm.region_transformation.m"
    }
#line 183 "rbmm.region_transformation.m"
    {
#line 183 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__ProcIds_26, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27)), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
    }
#line 183 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28);
#line 183 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
#line 180 "rbmm.region_transformation.m"
  }
#line 169 "rbmm.region_transformation.m"
}

#line 130 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 130 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 130 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 130 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 130 "rbmm.region_transformation.m"
{
#line 134 "rbmm.region_transformation.m"
  {
#line 134 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 134 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 0)));
#line 135 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 1)));

#line 136 "rbmm.region_transformation.m"
    {
#line 136 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27);
    }
#line 138 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 137 "rbmm.region_transformation.m"
      {
#line 137 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29;
#line 137 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27;
#line 137 "rbmm.region_transformation.m"
      }
#line 138 "rbmm.region_transformation.m"
    else
#line 163 "rbmm.region_transformation.m"
      {
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Constants_14;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Deads_15;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Borns_16;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__Arity_18;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionTypes_19;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeVarSet_20;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ExistQuantTVars_21;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes0_22;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_23;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes_24;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_32_32;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_33_33;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_34_34;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_35_35;
#line 163 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_36_36;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 163 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42;

#line 140 "rbmm.region_transformation.m"
        {
#line 140 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_11, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 141 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Constants_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 0)));
#line 141 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Deads_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 1)));
#line 141 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Borns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 2)));
#line 7959 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 142 "rbmm.region_transformation.m"
        {
#line 142 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_33_33 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Constants_14);
        }
#line 142 "rbmm.region_transformation.m"
        {
#line 142 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_34_34 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Deads_15);
        }
#line 142 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_32_32 = (transform_hlds__rbmm__region_transformation__V_33_33 + transform_hlds__rbmm__region_transformation__V_34_34);
#line 142 "rbmm.region_transformation.m"
        {
#line 142 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_35_35 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Borns_16);
        }
#line 142 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17 = (transform_hlds__rbmm__region_transformation__V_32_32 + transform_hlds__rbmm__region_transformation__V_35_35);
#line 144 "rbmm.region_transformation.m"
        {
#line 144 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Arity_18 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 145 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_36_36 = (transform_hlds__rbmm__region_transformation__Arity_18 + transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17);
#line 145 "rbmm.region_transformation.m"
        {
#line 145 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__rbmm__region_transformation__V_36_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 147 "rbmm.region_transformation.m"
        {
#line 147 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_38_38 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 7997 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 147 "rbmm.region_transformation.m"
        {
#line 147 "rbmm.region_transformation.m"
          mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__V_38_38)), &transform_hlds__rbmm__region_transformation__RegionTypes_19);
        }
#line 148 "rbmm.region_transformation.m"
        {
#line 148 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__TypeVarSet_20, &transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, &transform_hlds__rbmm__region_transformation__ArgTypes0_22);
        }
#line 150 "rbmm.region_transformation.m"
        {
#line 150 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 154 "rbmm.region_transformation.m"
        if ((transform_hlds__rbmm__region_transformation__PredOrFunc_23 == (MR_Integer) 1))
#line 155 "rbmm.region_transformation.m"
          {
#line 155 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_25;
#line 155 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Last_26;
#line 155 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 155 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 157 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv0_Last_26;

#line 157 "rbmm.region_transformation.m"
            {
#line 157 "rbmm.region_transformation.m"
              mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, &transform_hlds__rbmm__region_transformation__BeforeLast_25, &transform_hlds__rbmm__region_transformation__conv0_Last_26);
            }
#line 157 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Last_26 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_Last_26);
#line 158 "rbmm.region_transformation.m"
            {
#line 158 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_26));
#line 158 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "rbmm.region_transformation.m"
            }
#line 158 "rbmm.region_transformation.m"
            {
#line 158 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__RegionTypes_19, transform_hlds__rbmm__region_transformation__V_40_40);
            }
#line 158 "rbmm.region_transformation.m"
            {
#line 158 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__BeforeLast_25, transform_hlds__rbmm__region_transformation__V_39_39);
            }
#line 155 "rbmm.region_transformation.m"
          }
#line 154 "rbmm.region_transformation.m"
        else
#line 153 "rbmm.region_transformation.m"
          {
#line 153 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, transform_hlds__rbmm__region_transformation__RegionTypes_19);
          }
#line 160 "rbmm.region_transformation.m"
        {
#line 160 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__rbmm__region_transformation__TypeVarSet_20, transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, transform_hlds__rbmm__region_transformation__ArgTypes_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42);
        }
#line 162 "rbmm.region_transformation.m"
        {
#line 162 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);
        }
#line 164 "rbmm.region_transformation.m"
        {
#line 164 "rbmm.region_transformation.m"
          MR_Word base;
#line 164 "rbmm.region_transformation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = base;
#line 164 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11));
#line 164 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27));
#line 164 "rbmm.region_transformation.m"
        }
#line 163 "rbmm.region_transformation.m"
      }
#line 134 "rbmm.region_transformation.m"
  }
#line 130 "rbmm.region_transformation.m"
}

#line 120 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 120 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 120 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 120 "rbmm.region_transformation.m"
{
#line 120 "rbmm.region_transformation.m"
  {
#line 120 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 120 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9;

#line 120 "rbmm.region_transformation.m"
    {
#line 120 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9);
    }
#line 120 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9));
#line 120 "rbmm.region_transformation.m"
  }
#line 120 "rbmm.region_transformation.m"
}

#line 119 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 119 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 119 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 119 "rbmm.region_transformation.m"
{
#line 119 "rbmm.region_transformation.m"
  {
#line 119 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 119 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9;

#line 119 "rbmm.region_transformation.m"
    {
#line 119 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9);
    }
#line 119 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9));
#line 119 "rbmm.region_transformation.m"
  }
#line 119 "rbmm.region_transformation.m"
}

#line 110 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 110 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 110 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 110 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 110 "rbmm.region_transformation.m"
{
#line 110 "rbmm.region_transformation.m"
  {
#line 110 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30;

#line 110 "rbmm.region_transformation.m"
    {
#line 110 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30);
    }
#line 110 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28));
#line 110 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30));
#line 110 "rbmm.region_transformation.m"
  }
#line 110 "rbmm.region_transformation.m"
}

#line 109 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 109 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 109 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 109 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6)
#line 109 "rbmm.region_transformation.m"
{
#line 109 "rbmm.region_transformation.m"
  {
#line 109 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 109 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28;
#line 109 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30;

#line 109 "rbmm.region_transformation.m"
    {
#line 109 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30);
    }
#line 109 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28));
#line 109 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30));
#line 109 "rbmm.region_transformation.m"
  }
#line 109 "rbmm.region_transformation.m"
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
#line 108 "rbmm.region_transformation.m"
  {
#line 108 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredIds_23;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33;
#line 108 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35;
#line 109 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_PredIds_23;
#line 109 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30;
#line 110 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25;
#line 110 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33;
#line 119 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35;
#line 120 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27;

#line 109 "rbmm.region_transformation.m"
    {
#line 109 "rbmm.region_transformation.m"
      mercury__map__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[0], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_transformation__conv3_PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_26)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 109 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__PredIds_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_PredIds_23);
#line 109 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
#line 110 "rbmm.region_transformation.m"
    {
#line 110 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[0]));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_13));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_15));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_16));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_17));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_18));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_19));
#line 110 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_20));
#line 110 "rbmm.region_transformation.m"
    }
#line 8339 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 110 "rbmm.region_transformation.m"
    {
#line 110 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_24)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 110 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25);
#line 110 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
#line 119 "rbmm.region_transformation.m"
    {
#line 119 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[8], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 119 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
#line 120 "rbmm.region_transformation.m"
    {
#line 120 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[9], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
    }
#line 120 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
#line 108 "rbmm.region_transformation.m"
  }
#line 62 "rbmm.region_transformation.m"
}

#line 49 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0(void)
#line 49 "rbmm.region_transformation.m"
{
#line 103 "rbmm.region_transformation.m"
  {
#line 103 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 103 "rbmm.region_transformation.m"
    return (MR_String) "remove_region";
#line 103 "rbmm.region_transformation.m"
  }
#line 49 "rbmm.region_transformation.m"
}

#line 48 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0(void)
#line 48 "rbmm.region_transformation.m"
{
#line 102 "rbmm.region_transformation.m"
  {
#line 102 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 102 "rbmm.region_transformation.m"
    return (MR_String) "create_region";
#line 102 "rbmm.region_transformation.m"
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
