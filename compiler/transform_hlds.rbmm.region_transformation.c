/*
** Automatically generated from `rbmm.region_transformation.m'
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


/* :- module transform_hlds.rbmm.region_transformation. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_transformation__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_transformation.mih"


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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"




#line 166 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 169 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 172 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 175 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 178 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 181 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0;

#line 184 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 187 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 190 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 193 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 196 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 199 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 202 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 205 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 208 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 211 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 217 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 220 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 229 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 232 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 235 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 238 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 241 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

#line 244 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 247 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 250 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 253 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 256 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 258 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 261 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 264 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 266 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 268 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 271 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 274 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 276 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2);

#line 279 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 282 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 284 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 286 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 652 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__652__1_2_p_0(
#line 652 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 652 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71);

#line 1051 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1051 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1051 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1051 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1051 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);

#line 1044 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1044 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1038 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1038 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1038 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1038 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 1023 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1023 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1023 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1023 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1023 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);

#line 1021 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1021 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 1015 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1015 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1015 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1015 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9);

#line 965 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15);

#line 937 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17);

#line 898 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 865 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23);

#line 827 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 827 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 806 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 806 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 789 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);

#line 773 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 773 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);

#line 762 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);

#line 750 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 742 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27);

#line 736 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 727 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25);

#line 710 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 710 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 710 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10);

#line 686 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 679 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 652 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 652 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg);

#line 638 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);

#line 594 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12);

#line 524 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 516 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 507 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 493 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);

#line 436 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 412 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);

#line 386 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 378 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9);

#line 342 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);

#line 300 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8);

#line 262 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);

#line 205 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 205 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 205 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 205 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);

#line 185 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 185 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 185 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 171 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 171 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 171 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 132 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 132 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 132 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);

#line 122 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 122 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 122 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 121 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 121 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3);

#line 112 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5);

#line 111 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 111 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 111 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[9][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[14][3];

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

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[14][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1714 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1722 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1731 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1740 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1749 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1758 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1766 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1775 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1784 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1793 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1802 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1811 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1819 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1828 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1837 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1845 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1854 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1863 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1871 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1880 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1888 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1897 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1906 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1914 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1923 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 1932 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
  }
};

#line 1941 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1950 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1958 "transform_hlds.rbmm.region_transformation.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1975 "transform_hlds.rbmm.region_transformation.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1984 "transform_hlds.rbmm.region_transformation.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2001 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
#line 2004 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2006 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2008 "transform_hlds.rbmm.region_transformation.c"
{
#line 2010 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2012 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2015 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2017 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2020 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2022 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2024 "transform_hlds.rbmm.region_transformation.c"
}

#line 2027 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
#line 2030 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2032 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2034 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2036 "transform_hlds.rbmm.region_transformation.c"
{
#line 2038 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2040 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2043 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2045 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2048 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2050 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2052 "transform_hlds.rbmm.region_transformation.c"
}

#line 2055 "transform_hlds.rbmm.region_transformation.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
#line 2058 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2060 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2)
#line 2062 "transform_hlds.rbmm.region_transformation.c"
{
#line 2064 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2066 "transform_hlds.rbmm.region_transformation.c"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 2069 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2071 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2));
    }
#line 2074 "transform_hlds.rbmm.region_transformation.c"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 2076 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2078 "transform_hlds.rbmm.region_transformation.c"
}

#line 2081 "transform_hlds.rbmm.region_transformation.c"
static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
#line 2084 "transform_hlds.rbmm.region_transformation.c"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 2086 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 2088 "transform_hlds.rbmm.region_transformation.c"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 2090 "transform_hlds.rbmm.region_transformation.c"
{
#line 2092 "transform_hlds.rbmm.region_transformation.c"
  {
#line 2094 "transform_hlds.rbmm.region_transformation.c"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1;

#line 2097 "transform_hlds.rbmm.region_transformation.c"
    {
#line 2099 "transform_hlds.rbmm.region_transformation.c"
      transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(&transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3));
    }
#line 2102 "transform_hlds.rbmm.region_transformation.c"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_HeadVar__1_1));
#line 2104 "transform_hlds.rbmm.region_transformation.c"
  }
#line 2106 "transform_hlds.rbmm.region_transformation.c"
}

#line 652 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__652__1_2_p_0(
#line 652 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28,
#line 652 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__2_71)
#line 652 "rbmm.region_transformation.m"
{
#line 652 "rbmm.region_transformation.m"
  {
#line 652 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 652 "rbmm.region_transformation.m"
    {
#line 652 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[6], ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28)), ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__2_71)));
    }
#line 652 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 652 "rbmm.region_transformation.m"
  }
#line 652 "rbmm.region_transformation.m"
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
      transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4)));
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
      transform_hlds__rbmm__region_transformation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_transformation__Cast_HeadVar2_4)));
    }
#line 43 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 43 "rbmm.region_transformation.m"
  }
#line 43 "rbmm.region_transformation.m"
}

#line 1051 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
#line 1051 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1051 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1051 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11,
#line 1051 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12)
#line 1051 "rbmm.region_transformation.m"
{
#line 1054 "rbmm.region_transformation.m"
  {
#line 1054 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1054 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_8;
#line 1054 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_9;
#line 1054 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_10;

#line 1055 "rbmm.region_transformation.m"
    {
#line 1055 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PredId_5, &transform_hlds__rbmm__region_transformation__PredInfo0_8);
    }
#line 1057 "rbmm.region_transformation.m"
    {
#line 1057 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1057 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_9, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1057 "rbmm.region_transformation.m"
    }
#line 1058 "rbmm.region_transformation.m"
    {
#line 1058 "rbmm.region_transformation.m"
      check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__PPId_9, transform_hlds__rbmm__region_transformation__PredInfo0_8, &transform_hlds__rbmm__region_transformation__PredInfo_10);
    }
#line 1059 "rbmm.region_transformation.m"
    {
#line 1059 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_5, transform_hlds__rbmm__region_transformation__PredInfo_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_12);
    }
#line 1054 "rbmm.region_transformation.m"
  }
#line 1051 "rbmm.region_transformation.m"
}

#line 1044 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1044 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1044 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1044 "rbmm.region_transformation.m"
{
#line 1044 "rbmm.region_transformation.m"
  {
#line 1044 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1044 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 1044 "rbmm.region_transformation.m"
    {
#line 1044 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 1044 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 1044 "rbmm.region_transformation.m"
  }
#line 1044 "rbmm.region_transformation.m"
}

#line 1038 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
#line 1038 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1038 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1038 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1038 "rbmm.region_transformation.m"
{
#line 1041 "rbmm.region_transformation.m"
  {
#line 1041 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1041 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1041 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1041 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1044 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1042 "rbmm.region_transformation.m"
    {
#line 1042 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1043 "rbmm.region_transformation.m"
    {
#line 1043 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1044 "rbmm.region_transformation.m"
    {
#line 1044 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1044 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1));
#line 1044 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1044 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1044 "rbmm.region_transformation.m"
    }
#line 1044 "rbmm.region_transformation.m"
    {
#line 1044 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1044 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1041 "rbmm.region_transformation.m"
  }
#line 1038 "rbmm.region_transformation.m"
}

#line 1023 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
#line 1023 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_5,
#line 1023 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_6,
#line 1023 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12,
#line 1023 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13)
#line 1023 "rbmm.region_transformation.m"
{
#line 1026 "rbmm.region_transformation.m"
  {
#line 1026 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1026 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_8;
#line 1026 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_9;
#line 1026 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_10;
#line 1026 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_11;
#line 1026 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15;

#line 1027 "rbmm.region_transformation.m"
    {
#line 1027 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_5));
#line 1027 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_8, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_6));
#line 1027 "rbmm.region_transformation.m"
    }
#line 1028 "rbmm.region_transformation.m"
    {
#line 1028 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__rbmm__region_transformation__PPId_8, &transform_hlds__rbmm__region_transformation__PredInfo_9, &transform_hlds__rbmm__region_transformation__ProcInfo0_10);
    }
#line 1029 "rbmm.region_transformation.m"
    {
#line 1029 "rbmm.region_transformation.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__rbmm__region_transformation__ProcInfo0_10, &transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15);
    }
#line 1031 "rbmm.region_transformation.m"
    {
#line 1031 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_8, transform_hlds__rbmm__region_transformation__PredInfo_9, transform_hlds__rbmm__region_transformation__ProcInfo_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_15_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_13);
    }
#line 1026 "rbmm.region_transformation.m"
  }
#line 1023 "rbmm.region_transformation.m"
}

#line 1021 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 1021 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 1021 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 1021 "rbmm.region_transformation.m"
{
#line 1021 "rbmm.region_transformation.m"
  {
#line 1021 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 1021 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13;

#line 1021 "rbmm.region_transformation.m"
    {
#line 1021 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1021 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_13));
#line 1021 "rbmm.region_transformation.m"
  }
#line 1021 "rbmm.region_transformation.m"
}

#line 1015 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
#line 1015 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_4,
#line 1015 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8,
#line 1015 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9)
#line 1015 "rbmm.region_transformation.m"
{
#line 1018 "rbmm.region_transformation.m"
  {
#line 1018 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 1018 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_6;
#line 1018 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_7;
#line 1018 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_10_10;
#line 1021 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1019 "rbmm.region_transformation.m"
    {
#line 1019 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__rbmm__region_transformation__PredId_4, &transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1020 "rbmm.region_transformation.m"
    {
#line 1020 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_6);
    }
#line 1021 "rbmm.region_transformation.m"
    {
#line 1021 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
#line 1021 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1));
#line 1021 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1021 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_10_10, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_4));
#line 1021 "rbmm.region_transformation.m"
    }
#line 1021 "rbmm.region_transformation.m"
    {
#line 1021 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_10_10, transform_hlds__rbmm__region_transformation__ProcIds_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1021 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1018 "rbmm.region_transformation.m"
  }
#line 1015 "rbmm.region_transformation.m"
}

#line 965 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_10,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28,
#line 965 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_14,
#line 965 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_15)
#line 965 "rbmm.region_transformation.m"
{
#line 975 "rbmm.region_transformation.m"
  {
#line 975 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 975 "rbmm.region_transformation.m"
#line 975 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_10)) {
#line 975 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 975 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 975 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 975 "rbmm.region_transformation.m"
        {
#line 976 "rbmm.region_transformation.m"
          {
#line 976 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.ite_renaming_annotation_to_assignment\'/9", (MR_String) "annotation is not assignment");
#line 976 "rbmm.region_transformation.m"
            return;
          }
#line 975 "rbmm.region_transformation.m"
        }
#line 975 "rbmm.region_transformation.m"
        break;
#line 975 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 978 "rbmm.region_transformation.m"
        {
#line 978 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__Right_18 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 0)));
#line 978 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__Left_19 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_10, (MR_Integer) 1)));
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_20;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_21;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_22;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_36_36;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_46;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__NonLocals_47;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_48;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_49;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_52_52;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_53_53;
#line 978 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_54_54;

#line 979 "rbmm.region_transformation.m"
          {
#line 979 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Left_19, &transform_hlds__rbmm__region_transformation__LeftRegVar_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_23, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31);
          }
#line 980 "rbmm.region_transformation.m"
          {
#line 980 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_18, &transform_hlds__rbmm__region_transformation__RightRegVar_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_29_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_30_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_28);
          }
#line 990 "rbmm.region_transformation.m"
          {
#line 990 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_50_50, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 990 "rbmm.region_transformation.m"
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_52_52));
#line 991 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_53_53));
#line 991 "rbmm.region_transformation.m"
          }
#line 992 "rbmm.region_transformation.m"
          {
#line 992 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 992 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_54_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_21));
#line 992 "rbmm.region_transformation.m"
          }
#line 990 "rbmm.region_transformation.m"
          {
#line 990 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AssignmentExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_20));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_50_50));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_51_51));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_54_54));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_46, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[8]));
#line 990 "rbmm.region_transformation.m"
          }
#line 1004 "rbmm.region_transformation.m"
          {
#line 1004 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__NonLocals_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1005 "rbmm.region_transformation.m"
          {
#line 1005 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__InstmapDelta_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_20);
          }
#line 1006 "rbmm.region_transformation.m"
          {
#line 1006 "rbmm.region_transformation.m"
            hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_47, transform_hlds__rbmm__region_transformation__InstmapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_49);
          }
#line 1008 "rbmm.region_transformation.m"
          {
#line 1008 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AssignmentGoal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_46));
#line 1008 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_22, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_49));
#line 1008 "rbmm.region_transformation.m"
          }
#line 983 "rbmm.region_transformation.m"
          {
#line 983 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_22));
#line 983 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "rbmm.region_transformation.m"
          }
#line 983 "rbmm.region_transformation.m"
          {
#line 983 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_14, transform_hlds__rbmm__region_transformation__V_36_36);
          }
#line 978 "rbmm.region_transformation.m"
        }
#line 975 "rbmm.region_transformation.m"
        break;
#line 975 "rbmm.region_transformation.m"
    }
#line 975 "rbmm.region_transformation.m"
  }
#line 965 "rbmm.region_transformation.m"
}

#line 937 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_11,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Annotation_12,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30,
#line 937 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_16,
#line 937 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_17)
#line 937 "rbmm.region_transformation.m"
{
#line 947 "rbmm.region_transformation.m"
  {
#line 947 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 947 "rbmm.region_transformation.m"
#line 947 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Annotation_12)) {
#line 947 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 947 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 947 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 947 "rbmm.region_transformation.m"
        {
#line 948 "rbmm.region_transformation.m"
          {
#line 948 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.resur_renaming_annotation_to_assignment\'/10", (MR_String) "annotation is not assigment");
#line 948 "rbmm.region_transformation.m"
            return;
          }
#line 947 "rbmm.region_transformation.m"
        }
#line 947 "rbmm.region_transformation.m"
        break;
#line 947 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 950 "rbmm.region_transformation.m"
        {
#line 950 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__Right_20 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 0)));
#line 950 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__Left_21 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__Annotation_12, (MR_Integer) 1)));
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__LeftRegVar_22;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RightRegVar_23;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentGoal_24;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 950 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__Name_57;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentExpr_68;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__NonLocals_69;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__InstmapDelta_70;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AssignmentInfo_71;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_72_72;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 950 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 854 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_56;
#line 852 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56;

#line 852 "rbmm.region_transformation.m"
          {
#line 852 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__Left_21)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
          }
#line 852 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 852 "rbmm.region_transformation.m"
            {
#line 852 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ResurNameList_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_56);
#line 852 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 852 "rbmm.region_transformation.m"
            }
#line 854 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 853 "rbmm.region_transformation.m"
            {
#line 853 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_57;

#line 853 "rbmm.region_transformation.m"
              {
#line 853 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__conv1_Name_57 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_56);
              }
#line 853 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Name_57 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_57);
#line 853 "rbmm.region_transformation.m"
            }
#line 854 "rbmm.region_transformation.m"
          else
#line 855 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_57 = transform_hlds__rbmm__region_transformation__Left_21;
#line 857 "rbmm.region_transformation.m"
          {
#line 857 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_57, &transform_hlds__rbmm__region_transformation__LeftRegVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_25, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_27, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_29, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33);
          }
#line 955 "rbmm.region_transformation.m"
          {
#line 955 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Right_20, &transform_hlds__rbmm__region_transformation__RightRegVar_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_31_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_26, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_28, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_33_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_30);
          }
#line 990 "rbmm.region_transformation.m"
          {
#line 990 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_72_72, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 990 "rbmm.region_transformation.m"
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_74_74 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_75_75 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 991 "rbmm.region_transformation.m"
          {
#line 991 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 991 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_75_75));
#line 991 "rbmm.region_transformation.m"
          }
#line 992 "rbmm.region_transformation.m"
          {
#line 992 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 992 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RightRegVar_23));
#line 992 "rbmm.region_transformation.m"
          }
#line 990 "rbmm.region_transformation.m"
          {
#line 990 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AssignmentExpr_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LeftRegVar_22));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_72_72));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_73_73));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_76_76));
#line 990 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__AssignmentExpr_68, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[7]));
#line 990 "rbmm.region_transformation.m"
          }
#line 1004 "rbmm.region_transformation.m"
          {
#line 1004 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__NonLocals_69 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1005 "rbmm.region_transformation.m"
          {
#line 1005 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__InstmapDelta_70 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__rbmm__region_transformation__LeftRegVar_22);
          }
#line 1006 "rbmm.region_transformation.m"
          {
#line 1006 "rbmm.region_transformation.m"
            hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__rbmm__region_transformation__NonLocals_69, transform_hlds__rbmm__region_transformation__InstmapDelta_70, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__rbmm__region_transformation__AssignmentInfo_71);
          }
#line 1008 "rbmm.region_transformation.m"
          {
#line 1008 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AssignmentGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentExpr_68));
#line 1008 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__AssignmentGoal_24, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentInfo_71));
#line 1008 "rbmm.region_transformation.m"
          }
#line 958 "rbmm.region_transformation.m"
          {
#line 958 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__AssignmentGoal_24));
#line 958 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "rbmm.region_transformation.m"
          }
#line 958 "rbmm.region_transformation.m"
          {
#line 958 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__Conjs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_16, transform_hlds__rbmm__region_transformation__V_38_38);
          }
#line 950 "rbmm.region_transformation.m"
        }
#line 947 "rbmm.region_transformation.m"
        break;
#line 947 "rbmm.region_transformation.m"
    }
#line 947 "rbmm.region_transformation.m"
  }
#line 937 "rbmm.region_transformation.m"
}

#line 898 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 898 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 898 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 898 "rbmm.region_transformation.m"
{
#line 906 "rbmm.region_transformation.m"
  {
#line 906 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 906 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 906 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 915 "rbmm.region_transformation.m"
#line 915 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) {
#line 915 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 915 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 908 "rbmm.region_transformation.m"
        {
#line 908 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 908 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 908 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 908 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 908 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 909 "rbmm.region_transformation.m"
          {
#line 909 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 911 "rbmm.region_transformation.m"
          {
#line 911 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 913 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "rbmm.region_transformation.m"
          }
#line 913 "rbmm.region_transformation.m"
          {
#line 913 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 911 "rbmm.region_transformation.m"
          {
#line 911 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 908 "rbmm.region_transformation.m"
        }
#line 915 "rbmm.region_transformation.m"
        break;
#line 915 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 916 "rbmm.region_transformation.m"
        {
#line 916 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 916 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 916 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 916 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 916 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 917 "rbmm.region_transformation.m"
          {
#line 917 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 920 "rbmm.region_transformation.m"
          {
#line 920 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 922 "rbmm.region_transformation.m"
          {
#line 922 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 922 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "rbmm.region_transformation.m"
          }
#line 922 "rbmm.region_transformation.m"
          {
#line 922 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 920 "rbmm.region_transformation.m"
          {
#line 920 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 916 "rbmm.region_transformation.m"
        }
#line 915 "rbmm.region_transformation.m"
        break;
#line 915 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 925 "rbmm.region_transformation.m"
        {
#line 926 "rbmm.region_transformation.m"
          {
#line 926 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj_before\'/13", (MR_String) "neither create nor remove instruction");
#line 926 "rbmm.region_transformation.m"
            return;
          }
#line 925 "rbmm.region_transformation.m"
        }
#line 915 "rbmm.region_transformation.m"
        break;
#line 915 "rbmm.region_transformation.m"
    }
#line 928 "rbmm.region_transformation.m"
    {
#line 928 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 928 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "rbmm.region_transformation.m"
    }
#line 928 "rbmm.region_transformation.m"
    {
#line 928 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 906 "rbmm.region_transformation.m"
  }
#line 898 "rbmm.region_transformation.m"
}

#line 865 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_14,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Context_15,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_16,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_17,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstruction_18,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34,
#line 865 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Conjs0_22,
#line 865 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__Conjs_23)
#line 865 "rbmm.region_transformation.m"
{
#line 872 "rbmm.region_transformation.m"
  {
#line 872 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 872 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__CallGoal_26;
#line 872 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_64_64;

#line 881 "rbmm.region_transformation.m"
#line 881 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__RegionInstruction_18)) {
#line 881 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 881 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 874 "rbmm.region_transformation.m"
        {
#line 874 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 874 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_25;
#line 874 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_54_54;
#line 874 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 874 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_62_62;

#line 875 "rbmm.region_transformation.m"
          {
#line 875 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_24, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 877 "rbmm.region_transformation.m"
          {
#line 877 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_54_54 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 879 "rbmm.region_transformation.m"
          {
#line 879 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_25));
#line 879 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "rbmm.region_transformation.m"
          }
#line 879 "rbmm.region_transformation.m"
          {
#line 879 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_62_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 877 "rbmm.region_transformation.m"
          {
#line 877 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_54_54, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_62_62, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 874 "rbmm.region_transformation.m"
        }
#line 881 "rbmm.region_transformation.m"
        break;
#line 881 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 882 "rbmm.region_transformation.m"
        {
#line 882 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 882 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 882 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 882 "rbmm.region_transformation.m"
          MR_String transform_hlds__rbmm__region_transformation__RegionName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__RegionInstruction_18, (MR_Integer) 0)));
#line 882 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RegionVar_67;

#line 883 "rbmm.region_transformation.m"
          {
#line 883 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__RegionName_66, transform_hlds__rbmm__region_transformation__ResurRenaming_16, transform_hlds__rbmm__region_transformation__IteRenaming_17, &transform_hlds__rbmm__region_transformation__RegionVar_67, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_30, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_31, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_33, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_34);
          }
#line 885 "rbmm.region_transformation.m"
          {
#line 885 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 887 "rbmm.region_transformation.m"
          {
#line 887 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionVar_67));
#line 887 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "rbmm.region_transformation.m"
          }
#line 887 "rbmm.region_transformation.m"
          {
#line 887 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 885 "rbmm.region_transformation.m"
          {
#line 885 "rbmm.region_transformation.m"
            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__rbmm__region_transformation__V_41_41, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__rbmm__region_transformation__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__ModuleInfo_14, transform_hlds__rbmm__region_transformation__Context_15, &transform_hlds__rbmm__region_transformation__CallGoal_26);
          }
#line 882 "rbmm.region_transformation.m"
        }
#line 881 "rbmm.region_transformation.m"
        break;
#line 881 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 890 "rbmm.region_transformation.m"
        {
#line 891 "rbmm.region_transformation.m"
          {
#line 891 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj\'/13", (MR_String) "neither create nor remove instruction");
#line 891 "rbmm.region_transformation.m"
            return;
          }
#line 890 "rbmm.region_transformation.m"
        }
#line 881 "rbmm.region_transformation.m"
        break;
#line 881 "rbmm.region_transformation.m"
    }
#line 893 "rbmm.region_transformation.m"
    {
#line 893 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CallGoal_26));
#line 893 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "rbmm.region_transformation.m"
    }
#line 893 "rbmm.region_transformation.m"
    {
#line 893 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs0_22, transform_hlds__rbmm__region_transformation__V_64_64);
    }
#line 872 "rbmm.region_transformation.m"
  }
#line 865 "rbmm.region_transformation.m"
}

#line 827 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
#line 827 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 827 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 827 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 827 "rbmm.region_transformation.m"
{
#line 833 "rbmm.region_transformation.m"
  {
#line 833 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 833 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 836 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 834 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 834 "rbmm.region_transformation.m"
    {
#line 834 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 834 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 834 "rbmm.region_transformation.m"
      {
#line 834 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 834 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 834 "rbmm.region_transformation.m"
      }
#line 836 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 835 "rbmm.region_transformation.m"
      {
#line 835 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 835 "rbmm.region_transformation.m"
        {
#line 835 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__conv1_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, (MR_Integer) 0);
        }
#line 835 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 835 "rbmm.region_transformation.m"
      }
#line 836 "rbmm.region_transformation.m"
    else
#line 838 "rbmm.region_transformation.m"
      {
#line 838 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 836 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 836 "rbmm.region_transformation.m"
        {
#line 836 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 836 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 836 "rbmm.region_transformation.m"
          {
#line 836 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 836 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 836 "rbmm.region_transformation.m"
          }
#line 838 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 837 "rbmm.region_transformation.m"
          {
#line 837 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 837 "rbmm.region_transformation.m"
            {
#line 837 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__conv3_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, (MR_Integer) 0);
            }
#line 837 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 837 "rbmm.region_transformation.m"
          }
#line 838 "rbmm.region_transformation.m"
        else
#line 839 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 838 "rbmm.region_transformation.m"
      }
#line 841 "rbmm.region_transformation.m"
    {
#line 841 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
    }
#line 833 "rbmm.region_transformation.m"
  }
#line 827 "rbmm.region_transformation.m"
}

#line 806 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
#line 806 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name0_11,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_12,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_13,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_14,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 806 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 806 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 806 "rbmm.region_transformation.m"
{
#line 812 "rbmm.region_transformation.m"
  {
#line 812 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 812 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_19;
#line 815 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_18;
#line 813 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18;

#line 813 "rbmm.region_transformation.m"
    {
#line 813 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
    }
#line 813 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 813 "rbmm.region_transformation.m"
      {
#line 813 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_18 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_18);
#line 813 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 813 "rbmm.region_transformation.m"
      }
#line 815 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 814 "rbmm.region_transformation.m"
      {
#line 814 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_19;

#line 814 "rbmm.region_transformation.m"
        {
#line 814 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_18, &transform_hlds__rbmm__region_transformation__conv1_Name_19);
        }
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_19);
#line 814 "rbmm.region_transformation.m"
      }
#line 815 "rbmm.region_transformation.m"
    else
#line 817 "rbmm.region_transformation.m"
      {
#line 817 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_20;
#line 815 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_20;

#line 815 "rbmm.region_transformation.m"
        {
#line 815 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name0_11)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
        }
#line 815 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 815 "rbmm.region_transformation.m"
          {
#line 815 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_20 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_20);
#line 815 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 815 "rbmm.region_transformation.m"
          }
#line 817 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 816 "rbmm.region_transformation.m"
          {
#line 816 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_19;

#line 816 "rbmm.region_transformation.m"
            {
#line 816 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_20, &transform_hlds__rbmm__region_transformation__conv3_Name_19);
            }
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_19 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_19);
#line 816 "rbmm.region_transformation.m"
          }
#line 817 "rbmm.region_transformation.m"
        else
#line 818 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_19 = transform_hlds__rbmm__region_transformation__Name0_11;
#line 817 "rbmm.region_transformation.m"
      }
#line 820 "rbmm.region_transformation.m"
    {
#line 820 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_19, transform_hlds__rbmm__region_transformation__RegVar_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
    }
#line 812 "rbmm.region_transformation.m"
  }
#line 806 "rbmm.region_transformation.m"
}

#line 789 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_12,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_13,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_15,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_16,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24,
#line 789 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25,
#line 789 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26)
#line 789 "rbmm.region_transformation.m"
{
#line 795 "rbmm.region_transformation.m"
  {
#line 795 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 795 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_20;
#line 795 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__Name_44;
#line 815 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurNameList_43;
#line 813 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43;

#line 796 "rbmm.region_transformation.m"
    {
#line 796 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_20 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_12, transform_hlds__rbmm__region_transformation__Node_15);
    }
#line 813 "rbmm.region_transformation.m"
    {
#line 813 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__ResurRenaming_13, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
    }
#line 813 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 813 "rbmm.region_transformation.m"
      {
#line 813 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurNameList_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurNameList_43);
#line 813 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 813 "rbmm.region_transformation.m"
      }
#line 815 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 814 "rbmm.region_transformation.m"
      {
#line 814 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv1_Name_44;

#line 814 "rbmm.region_transformation.m"
        {
#line 814 "rbmm.region_transformation.m"
          mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__ResurNameList_43, &transform_hlds__rbmm__region_transformation__conv1_Name_44);
        }
#line 814 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv1_Name_44);
#line 814 "rbmm.region_transformation.m"
      }
#line 815 "rbmm.region_transformation.m"
    else
#line 817 "rbmm.region_transformation.m"
      {
#line 817 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteNameList_45;
#line 815 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv2_IteNameList_45;

#line 815 "rbmm.region_transformation.m"
        {
#line 815 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2], transform_hlds__rbmm__region_transformation__IteRenaming_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__RegName_20)), &transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
        }
#line 815 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 815 "rbmm.region_transformation.m"
          {
#line 815 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__IteNameList_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_IteNameList_45);
#line 815 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 815 "rbmm.region_transformation.m"
          }
#line 817 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 816 "rbmm.region_transformation.m"
          {
#line 816 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv3_Name_44;

#line 816 "rbmm.region_transformation.m"
            {
#line 816 "rbmm.region_transformation.m"
              mercury__list__det_last_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__region_transformation__IteNameList_45, &transform_hlds__rbmm__region_transformation__conv3_Name_44);
            }
#line 816 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Name_44 = ((MR_String) transform_hlds__rbmm__region_transformation__conv3_Name_44);
#line 816 "rbmm.region_transformation.m"
          }
#line 817 "rbmm.region_transformation.m"
        else
#line 818 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Name_44 = transform_hlds__rbmm__region_transformation__RegName_20;
#line 817 "rbmm.region_transformation.m"
      }
#line 820 "rbmm.region_transformation.m"
    {
#line 820 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__Name_44, transform_hlds__rbmm__region_transformation__RegVar_16, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_23, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_26);
    }
#line 795 "rbmm.region_transformation.m"
  }
#line 789 "rbmm.region_transformation.m"
}

#line 773 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
#line 773 "rbmm.region_transformation.m"
  MR_String transform_hlds__rbmm__region_transformation__Name_9,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_10,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18,
#line 773 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19,
#line 773 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20)
#line 773 "rbmm.region_transformation.m"
{
#line 780 "rbmm.region_transformation.m"
  {
#line 780 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 780 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 778 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_RegVar0_14;

#line 778 "rbmm.region_transformation.m"
    {
#line 778 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), &transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
    }
#line 778 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 778 "rbmm.region_transformation.m"
      {
#line 778 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__RegVar0_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_RegVar0_14);
#line 778 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 778 "rbmm.region_transformation.m"
      }
#line 780 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 779 "rbmm.region_transformation.m"
      {
#line 779 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__RegVar_10 = transform_hlds__rbmm__region_transformation__RegVar0_14;
#line 779 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19;
#line 779 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17;
#line 779 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15;
#line 779 "rbmm.region_transformation.m"
      }
#line 780 "rbmm.region_transformation.m"
    else
#line 781 "rbmm.region_transformation.m"
      {
#line 781 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_22_22;

#line 781 "rbmm.region_transformation.m"
        {
#line 781 "rbmm.region_transformation.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__rbmm__region_transformation__Name_9, transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_18);
        }
#line 782 "rbmm.region_transformation.m"
        {
#line 782 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_22_22 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 782 "rbmm.region_transformation.m"
        {
#line 782 "rbmm.region_transformation.m"
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__rbmm__region_transformation__RegVar_10, transform_hlds__rbmm__region_transformation__V_22_22, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_20);
        }
#line 783 "rbmm.region_transformation.m"
        {
#line 783 "rbmm.region_transformation.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_9)), ((MR_Box) (*transform_hlds__rbmm__region_transformation__RegVar_10)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_16);
        }
#line 781 "rbmm.region_transformation.m"
      }
#line 780 "rbmm.region_transformation.m"
  }
#line 773 "rbmm.region_transformation.m"
}

#line 762 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_10,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Node_11,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__RegVar_12,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20,
#line 762 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21,
#line 762 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22)
#line 762 "rbmm.region_transformation.m"
{
#line 766 "rbmm.region_transformation.m"
  {
#line 766 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 766 "rbmm.region_transformation.m"
    MR_String transform_hlds__rbmm__region_transformation__RegName_16;

#line 767 "rbmm.region_transformation.m"
    {
#line 767 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__RegName_16 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_10, transform_hlds__rbmm__region_transformation__Node_11);
    }
#line 768 "rbmm.region_transformation.m"
    {
#line 768 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(transform_hlds__rbmm__region_transformation__RegName_16, transform_hlds__rbmm__region_transformation__RegVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_17, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_18, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_19, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_20, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_21, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_22);
    }
#line 766 "rbmm.region_transformation.m"
  }
#line 762 "rbmm.region_transformation.m"
}

#line 750 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 750 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 750 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 750 "rbmm.region_transformation.m"
{
#line 750 "rbmm.region_transformation.m"
  {
#line 750 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 750 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26;
#line 750 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28;
#line 750 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30;
#line 750 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_17;

#line 750 "rbmm.region_transformation.m"
    {
#line 750 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_17);
    }
#line 750 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_26));
#line 750 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_28));
#line 750 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_30));
#line 750 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_17));
#line 750 "rbmm.region_transformation.m"
  }
#line 750 "rbmm.region_transformation.m"
}

#line 742 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_13,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_14,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25,
#line 742 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26,
#line 742 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27)
#line 742 "rbmm.region_transformation.m"
{
#line 752 "rbmm.region_transformation.m"
  {
#line 752 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 752 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19;
#line 749 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19;

#line 749 "rbmm.region_transformation.m"
    {
#line 749 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_13)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
    }
#line 749 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 749 "rbmm.region_transformation.m"
      {
#line 749 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenamingAnnos_19);
#line 749 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 749 "rbmm.region_transformation.m"
      }
#line 752 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 750 "rbmm.region_transformation.m"
      {
#line 750 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_28_28;
#line 750 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21;
#line 750 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23;
#line 750 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25;
#line 750 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27;

#line 750 "rbmm.region_transformation.m"
        {
#line 750 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 750 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_12[0]));
#line 750 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1));
#line 750 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 750 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_28_28, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_14));
#line 750 "rbmm.region_transformation.m"
        }
#line 750 "rbmm.region_transformation.m"
        {
#line 750 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], transform_hlds__rbmm__region_transformation__V_28_28, transform_hlds__rbmm__region_transformation__ResurRenamingAnnos_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
        }
#line 750 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_21);
#line 750 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_23);
#line 750 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_25);
#line 750 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_Conjs_27);
#line 750 "rbmm.region_transformation.m"
      }
#line 752 "rbmm.region_transformation.m"
    else
#line 753 "rbmm.region_transformation.m"
      {
#line 753 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_27 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Conjs_0_26;
#line 753 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_24;
#line 753 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_22;
#line 753 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_20;
#line 753 "rbmm.region_transformation.m"
      }
#line 752 "rbmm.region_transformation.m"
  }
#line 742 "rbmm.region_transformation.m"
}

#line 736 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 736 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 736 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 736 "rbmm.region_transformation.m"
{
#line 736 "rbmm.region_transformation.m"
  {
#line 736 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 736 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24;
#line 736 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26;
#line 736 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28;
#line 736 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_15;

#line 736 "rbmm.region_transformation.m"
    {
#line 736 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_15);
    }
#line 736 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_24));
#line 736 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_26));
#line 736 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_28));
#line 736 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_15));
#line 736 "rbmm.region_transformation.m"
  }
#line 736 "rbmm.region_transformation.m"
}

#line 727 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_12,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23,
#line 727 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24,
#line 727 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25)
#line 727 "rbmm.region_transformation.m"
{
#line 738 "rbmm.region_transformation.m"
  {
#line 738 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 738 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17;
#line 735 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17;

#line 735 "rbmm.region_transformation.m"
    {
#line 735 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3], transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_11, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_12)), &transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
    }
#line 735 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 735 "rbmm.region_transformation.m"
      {
#line 735 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_IteRenamingAnnos_17);
#line 735 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 735 "rbmm.region_transformation.m"
      }
#line 738 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 736 "rbmm.region_transformation.m"
      {
#line 736 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19;
#line 736 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21;
#line 736 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23;
#line 736 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25;

#line 736 "rbmm.region_transformation.m"
        {
#line 736 "rbmm.region_transformation.m"
          mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[13], transform_hlds__rbmm__region_transformation__IteRenamingAnnos_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
        }
#line 736 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_19);
#line 736 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_21);
#line 736 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_23);
#line 736 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_IteRenamingAssignments_25);
#line 736 "rbmm.region_transformation.m"
      }
#line 738 "rbmm.region_transformation.m"
    else
#line 739 "rbmm.region_transformation.m"
      {
#line 739 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_25 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_IteRenamingAssignments_0_24;
#line 739 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_23 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_22;
#line 739 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_21 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_20;
#line 739 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_19 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_18;
#line 739 "rbmm.region_transformation.m"
      }
#line 738 "rbmm.region_transformation.m"
  }
#line 727 "rbmm.region_transformation.m"
}

#line 710 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_6,
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_7,
#line 710 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_8,
#line 710 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__ResurRenaming_9,
#line 710 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__IteRenaming_10)
#line 710 "rbmm.region_transformation.m"
{
#line 715 "rbmm.region_transformation.m"
  {
#line 715 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 718 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 716 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11;
#line 723 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 721 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12;

#line 716 "rbmm.region_transformation.m"
    {
#line 716 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__ResurRenamingProc_6, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
    }
#line 716 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 716 "rbmm.region_transformation.m"
      {
#line 716 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenaming0_11 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ResurRenaming0_11);
#line 716 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 716 "rbmm.region_transformation.m"
      }
#line 718 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 717 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = transform_hlds__rbmm__region_transformation__ResurRenaming0_11;
#line 718 "rbmm.region_transformation.m"
    else
#line 719 "rbmm.region_transformation.m"
      {
#line 719 "rbmm.region_transformation.m"
        {
#line 719 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__ResurRenaming_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 719 "rbmm.region_transformation.m"
      }
#line 721 "rbmm.region_transformation.m"
    {
#line 721 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3], transform_hlds__rbmm__region_transformation__IteRenamingProc_7, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_8)), &transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
    }
#line 721 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 721 "rbmm.region_transformation.m"
      {
#line 721 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenaming0_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_IteRenaming0_12);
#line 721 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 721 "rbmm.region_transformation.m"
      }
#line 723 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 722 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__IteRenaming_10 = transform_hlds__rbmm__region_transformation__IteRenaming0_12;
#line 723 "rbmm.region_transformation.m"
    else
#line 724 "rbmm.region_transformation.m"
      {
#line 724 "rbmm.region_transformation.m"
        {
#line 724 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__IteRenaming_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[2]);
        }
#line 724 "rbmm.region_transformation.m"
      }
#line 715 "rbmm.region_transformation.m"
  }
#line 710 "rbmm.region_transformation.m"
}

#line 686 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 686 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 686 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 686 "rbmm.region_transformation.m"
{
#line 686 "rbmm.region_transformation.m"
  {
#line 686 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 686 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 686 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 686 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 686 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 686 "rbmm.region_transformation.m"
    {
#line 686 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 686 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 686 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 686 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 686 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 686 "rbmm.region_transformation.m"
  }
#line 686 "rbmm.region_transformation.m"
}

#line 679 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 679 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 679 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 679 "rbmm.region_transformation.m"
{
#line 679 "rbmm.region_transformation.m"
  {
#line 679 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 679 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 679 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 679 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 679 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 679 "rbmm.region_transformation.m"
    {
#line 679 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 679 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 679 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 679 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 679 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 679 "rbmm.region_transformation.m"
  }
#line 679 "rbmm.region_transformation.m"
}

#line 652 "rbmm.region_transformation.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
#line 652 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg)
#line 652 "rbmm.region_transformation.m"
{
#line 652 "rbmm.region_transformation.m"
  {
#line 652 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 652 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;

#line 652 "rbmm.region_transformation.m"
    {
#line 652 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__652__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))));
    }
#line 652 "rbmm.region_transformation.m"
    return transform_hlds__rbmm__region_transformation__succeeded;
#line 652 "rbmm.region_transformation.m"
  }
#line 652 "rbmm.region_transformation.m"
}

#line 638 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_18,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_19,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_20,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_21,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_23,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Switch_26,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64,
#line 638 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65,
#line 638 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66)
#line 638 "rbmm.region_transformation.m"
{
#line 651 "rbmm.region_transformation.m"
  {
#line 651 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 0)));
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 1)));
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RemovedGoal_54;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FlatConjs_56;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ConjsInfo_58;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__10_10, (MR_Integer) 2)));
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_67_67;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_99_99;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_100_100;
#line 651 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_103_103;
#line 698 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Info_42;
#line 660 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 661 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 661 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 661 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_41_41;
#line 707 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_57_57;

#line 652 "rbmm.region_transformation.m"
    {
#line 652 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 652 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
#line 652 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1));
#line 652 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 652 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 652 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "rbmm.region_transformation.m"
    }
#line 652 "rbmm.region_transformation.m"
    {
#line 652 "rbmm.region_transformation.m"
      mercury__require__expect_4_p_0(transform_hlds__rbmm__region_transformation__V_67_67, (MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_case\'/17", (MR_String) "NYI: multi-cons-id cases");
    }
#line 656 "rbmm.region_transformation.m"
#line 656 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__MainConsId_27)) {
#line 656 "rbmm.region_transformation.m"
      default:
#line 656 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_FALSE;
#line 656 "rbmm.region_transformation.m"
        break;
#line 656 "rbmm.region_transformation.m"
      case (MR_Integer) 3:
#line 656 "rbmm.region_transformation.m"
#line 656 "rbmm.region_transformation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 0)))) {
#line 656 "rbmm.region_transformation.m"
          default:
#line 656 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_FALSE;
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
          case (MR_Integer) 2:
#line 655 "rbmm.region_transformation.m"
            {
#line 655 "rbmm.region_transformation.m"
              MR_Integer transform_hlds__rbmm__region_transformation__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 2)));
#line 655 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 1)));
#line 655 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__MainConsId_27, (MR_Integer) 3)));

#line 655 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = (transform_hlds__rbmm__region_transformation__V_72_72 == (MR_Integer) 0);
#line 655 "rbmm.region_transformation.m"
            }
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
          case (MR_Integer) 5:
#line 656 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
          case (MR_Integer) 6:
#line 657 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
          case (MR_Integer) 7:
#line 658 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
          case (MR_Integer) 8:
#line 659 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 656 "rbmm.region_transformation.m"
            break;
#line 656 "rbmm.region_transformation.m"
        }
#line 656 "rbmm.region_transformation.m"
        break;
#line 656 "rbmm.region_transformation.m"
    }
#line 660 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 660 "rbmm.region_transformation.m"
      {
#line 661 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 661 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Info_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 661 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 661 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 661 "rbmm.region_transformation.m"
          {
#line 661 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 1)));
#line 661 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 2)));
#line 661 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_73_73, (MR_Integer) 3)));
#line 661 "rbmm.region_transformation.m"
          }
#line 660 "rbmm.region_transformation.m"
      }
#line 698 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 663 "rbmm.region_transformation.m"
      {
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_43;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Context_44;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_46;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_47;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs2_52;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Conjs_53;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86;
#line 663 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_90_90;
#line 664 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_45_45;
#line 689 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Before_49;
#line 689 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__After_50;
#line 674 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_78_78;
#line 674 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv0_V_78_78;

#line 663 "rbmm.region_transformation.m"
        {
#line 663 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ProgPoint_43 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__Info_42);
        }
#line 664 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Context_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 0)));
#line 664 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_43, (MR_Integer) 1)));
#line 665 "rbmm.region_transformation.m"
        {
#line 665 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_43, &transform_hlds__rbmm__region_transformation__ResurRenaming_46, &transform_hlds__rbmm__region_transformation__IteRenaming_47);
        }
#line 669 "rbmm.region_transformation.m"
        {
#line 669 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48);
        }
#line 674 "rbmm.region_transformation.m"
        {
#line 674 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_43)), &transform_hlds__rbmm__region_transformation__conv0_V_78_78);
        }
#line 674 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 674 "rbmm.region_transformation.m"
          {
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_78_78);
#line 674 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 674 "rbmm.region_transformation.m"
          }
#line 674 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 674 "rbmm.region_transformation.m"
          {
#line 675 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Before_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 0)));
#line 675 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__After_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_78_78, (MR_Integer) 1)));
#line 675 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 674 "rbmm.region_transformation.m"
          }
#line 689 "rbmm.region_transformation.m"
        if (transform_hlds__rbmm__region_transformation__succeeded)
#line 682 "rbmm.region_transformation.m"
          {
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_119_119;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_120_120;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_121_121;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_122_122;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__Conjs1_51;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_79_79;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82;
#line 682 "rbmm.region_transformation.m"
            MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 678 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80;
#line 678 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81;
#line 678 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82;
#line 678 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_51;
#line 685 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84;
#line 685 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85;
#line 685 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86;
#line 685 "rbmm.region_transformation.m"
            MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs2_52;

#line 679 "rbmm.region_transformation.m"
            {
#line 679 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 679 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_79_79, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 679 "rbmm.region_transformation.m"
            }
#line 4785 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 4787 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_119_119 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 4789 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_120_120 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 4791 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_121_121 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7];
#line 4793 "transform_hlds.rbmm.region_transformation.c"
            transform_hlds__rbmm__region_transformation__TypeInfo_122_122 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 678 "rbmm.region_transformation.m"
            {
#line 678 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_79_79, transform_hlds__rbmm__region_transformation__Before_49, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
            }
#line 678 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_80_80);
#line 678 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_81_81);
#line 678 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_82_82);
#line 678 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs1_51 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_51);
#line 686 "rbmm.region_transformation.m"
            {
#line 686 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_18));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_44));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_46));
#line 686 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_83_83, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_47));
#line 686 "rbmm.region_transformation.m"
            }
#line 685 "rbmm.region_transformation.m"
            {
#line 685 "rbmm.region_transformation.m"
              mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_118_118, transform_hlds__rbmm__region_transformation__TypeInfo_119_119, transform_hlds__rbmm__region_transformation__TypeInfo_120_120, transform_hlds__rbmm__region_transformation__TypeInfo_121_121, transform_hlds__rbmm__region_transformation__TypeInfo_122_122, transform_hlds__rbmm__region_transformation__V_83_83, transform_hlds__rbmm__region_transformation__After_50, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_80_80)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_81_81)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_82_82)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs1_51)), &transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
            }
#line 685 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_84_84);
#line 685 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_85_85);
#line 685 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_86_86);
#line 685 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs2_52);
#line 682 "rbmm.region_transformation.m"
          }
#line 689 "rbmm.region_transformation.m"
        else
#line 690 "rbmm.region_transformation.m"
          {
#line 690 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__Conjs2_52 = transform_hlds__rbmm__region_transformation__IteRenamingAssignments_48;
#line 690 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_76_76;
#line 690 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_75_75;
#line 690 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_74_74;
#line 690 "rbmm.region_transformation.m"
          }
#line 694 "rbmm.region_transformation.m"
        {
#line 694 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_43, transform_hlds__rbmm__region_transformation__IteRenaming_47, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84_84, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_85_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_86_86, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__Conjs2_52, &transform_hlds__rbmm__region_transformation__Conjs_53);
        }
#line 697 "rbmm.region_transformation.m"
        {
#line 697 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 697 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 1) = ((MR_Box) ((MR_Integer) 0));
#line 697 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_90_90, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_53));
#line 697 "rbmm.region_transformation.m"
        }
#line 697 "rbmm.region_transformation.m"
        {
#line 697 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_90_90));
#line 697 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_42));
#line 697 "rbmm.region_transformation.m"
        }
#line 663 "rbmm.region_transformation.m"
      }
#line 698 "rbmm.region_transformation.m"
    else
#line 699 "rbmm.region_transformation.m"
      {
#line 699 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Info_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 699 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));

#line 700 "rbmm.region_transformation.m"
        {
#line 700 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_2[12])));
#line 700 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__RemovedGoal_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Info_105));
#line 700 "rbmm.region_transformation.m"
        }
#line 699 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_65;
#line 699 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_63;
#line 699 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_61;
#line 699 "rbmm.region_transformation.m"
      }
#line 702 "rbmm.region_transformation.m"
    {
#line 702 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_18, transform_hlds__rbmm__region_transformation__Graph_19, transform_hlds__rbmm__region_transformation__ResurRenamingProc_20, transform_hlds__rbmm__region_transformation__IteRenamingProc_21, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_22, transform_hlds__rbmm__region_transformation__RegionInstructionProc_23, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_25, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_87_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_88_88, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_89_89, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66);
    }
#line 706 "rbmm.region_transformation.m"
    {
#line 706 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_95_95));
#line 706 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "rbmm.region_transformation.m"
    }
#line 706 "rbmm.region_transformation.m"
    {
#line 706 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RemovedGoal_54));
#line 706 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_99_99, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_100_100));
#line 706 "rbmm.region_transformation.m"
    }
#line 706 "rbmm.region_transformation.m"
    {
#line 706 "rbmm.region_transformation.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__V_99_99, &transform_hlds__rbmm__region_transformation__FlatConjs_56);
    }
#line 707 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 0)));
#line 707 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ConjsInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__Switch_26, (MR_Integer) 1)));
#line 708 "rbmm.region_transformation.m"
    {
#line 708 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 708 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 1) = ((MR_Box) ((MR_Integer) 0));
#line 708 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_103_103, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FlatConjs_56));
#line 708 "rbmm.region_transformation.m"
    }
#line 708 "rbmm.region_transformation.m"
    {
#line 708 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_103_103));
#line 708 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConjsInfo_58));
#line 708 "rbmm.region_transformation.m"
    }
#line 650 "rbmm.region_transformation.m"
    {
#line 650 "rbmm.region_transformation.m"
      MR_Word base;
#line 650 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__11_11 = base;
#line 650 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__MainConsId_27));
#line 650 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__OtherConsIds_28));
#line 650 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_60));
#line 650 "rbmm.region_transformation.m"
    }
#line 651 "rbmm.region_transformation.m"
  }
#line 638 "rbmm.region_transformation.m"
}

#line 594 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__7_7,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__8_8,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 594 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__11_11,
#line 594 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__12_12)
#line 594 "rbmm.region_transformation.m"
{
#line 600 "rbmm.region_transformation.m"
  {
#line 600 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 600 "rbmm.region_transformation.m"
#line 600 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5)) {
#line 600 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 600 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 600 "rbmm.region_transformation.m"
        {
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 1)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 2)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ArgModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 3)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__IsUnique_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 5)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__SubInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 6)));
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Node_28;
#line 600 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__NodeType_29;
#line 601 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation___HowToConstruct0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 4)));

#line 603 "rbmm.region_transformation.m"
          {
#line 603 "rbmm.region_transformation.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Var_21, &transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 604 "rbmm.region_transformation.m"
          {
#line 604 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__NodeType_29 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
          }
#line 605 "rbmm.region_transformation.m"
          {
#line 605 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__region_transformation__NodeType_29, transform_hlds__rbmm__region_transformation__ModuleInfo_1);
          }
#line 607 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 606 "rbmm.region_transformation.m"
            {
#line 606 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 606 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 606 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 606 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 606 "rbmm.region_transformation.m"
            }
#line 607 "rbmm.region_transformation.m"
          else
#line 608 "rbmm.region_transformation.m"
            {
#line 608 "rbmm.region_transformation.m"
              MR_String transform_hlds__rbmm__region_transformation__Name_30;
#line 608 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__RegVar_31;
#line 608 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__HowToConstruct_32;

#line 608 "rbmm.region_transformation.m"
              {
#line 608 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Name_30 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__Node_28);
              }
#line 609 "rbmm.region_transformation.m"
              {
#line 609 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(transform_hlds__rbmm__region_transformation__Name_30, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, &transform_hlds__rbmm__region_transformation__RegVar_31, transform_hlds__rbmm__region_transformation__HeadVar__7_7, transform_hlds__rbmm__region_transformation__HeadVar__8_8, transform_hlds__rbmm__region_transformation__HeadVar__9_9, transform_hlds__rbmm__region_transformation__HeadVar__10_10, transform_hlds__rbmm__region_transformation__HeadVar__11_11, transform_hlds__rbmm__region_transformation__HeadVar__12_12);
              }
#line 611 "rbmm.region_transformation.m"
              {
#line 611 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__HowToConstruct_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__HowToConstruct_32, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegVar_31));
#line 611 "rbmm.region_transformation.m"
              }
#line 612 "rbmm.region_transformation.m"
              {
#line 612 "rbmm.region_transformation.m"
                MR_Word base;
#line 612 "rbmm.region_transformation.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 612 "rbmm.region_transformation.m"
                *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = base;
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_21));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ConsId_22));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_23));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ArgModes_24));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HowToConstruct_32));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IsUnique_26));
#line 612 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__SubInfo_27));
#line 612 "rbmm.region_transformation.m"
              }
#line 608 "rbmm.region_transformation.m"
            }
#line 600 "rbmm.region_transformation.m"
        }
#line 600 "rbmm.region_transformation.m"
        break;
#line 600 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 617 "rbmm.region_transformation.m"
        {
#line 617 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 617 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 616 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 616 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 617 "rbmm.region_transformation.m"
        }
#line 600 "rbmm.region_transformation.m"
        break;
#line 600 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 617 "rbmm.region_transformation.m"
        {
#line 617 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 617 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 616 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 616 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 617 "rbmm.region_transformation.m"
        }
#line 600 "rbmm.region_transformation.m"
        break;
#line 600 "rbmm.region_transformation.m"
      case (MR_Integer) 3:
#line 600 "rbmm.region_transformation.m"
#line 600 "rbmm.region_transformation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5, (MR_Integer) 0)))) {
#line 600 "rbmm.region_transformation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 600 "rbmm.region_transformation.m"
          case (MR_Integer) 0:
#line 617 "rbmm.region_transformation.m"
            {
#line 617 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__12_12 = transform_hlds__rbmm__region_transformation__HeadVar__11_11;
#line 617 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = transform_hlds__rbmm__region_transformation__HeadVar__9_9;
#line 616 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__HeadVar__8_8 = transform_hlds__rbmm__region_transformation__HeadVar__7_7;
#line 616 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_6 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Unification_0_5;
#line 617 "rbmm.region_transformation.m"
            }
#line 600 "rbmm.region_transformation.m"
            break;
#line 600 "rbmm.region_transformation.m"
          case (MR_Integer) 1:
#line 617 "rbmm.region_transformation.m"
            {
#line 625 "rbmm.region_transformation.m"
              {
#line 625 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.annotate_constructions_unification\'/12", (MR_String) "complicated unify");
#line 625 "rbmm.region_transformation.m"
                return;
              }
#line 617 "rbmm.region_transformation.m"
            }
#line 600 "rbmm.region_transformation.m"
            break;
#line 600 "rbmm.region_transformation.m"
        }
#line 600 "rbmm.region_transformation.m"
        break;
#line 600 "rbmm.region_transformation.m"
    }
#line 600 "rbmm.region_transformation.m"
  }
#line 594 "rbmm.region_transformation.m"
}

#line 524 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 524 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 524 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 524 "rbmm.region_transformation.m"
{
#line 524 "rbmm.region_transformation.m"
  {
#line 524 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 524 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11;
#line 524 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62;
#line 524 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64;
#line 524 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66;

#line 524 "rbmm.region_transformation.m"
    {
#line 524 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66);
    }
#line 524 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv17_HeadVar__11_11));
#line 524 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_62));
#line 524 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_64));
#line 524 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_66));
#line 524 "rbmm.region_transformation.m"
  }
#line 524 "rbmm.region_transformation.m"
}

#line 516 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 516 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 516 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 516 "rbmm.region_transformation.m"
{
#line 516 "rbmm.region_transformation.m"
  {
#line 516 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 516 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50;
#line 516 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52;
#line 516 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54;
#line 516 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56;

#line 516 "rbmm.region_transformation.m"
    {
#line 516 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56);
    }
#line 516 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_Goal_50));
#line 516 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_NameToVar_52));
#line 516 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_VarSet_54));
#line 516 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarTypes_56));
#line 516 "rbmm.region_transformation.m"
  }
#line 516 "rbmm.region_transformation.m"
}

#line 507 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 507 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 507 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 507 "rbmm.region_transformation.m"
{
#line 507 "rbmm.region_transformation.m"
  {
#line 507 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 507 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50;
#line 507 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52;
#line 507 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54;
#line 507 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56;

#line 507 "rbmm.region_transformation.m"
    {
#line 507 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56);
    }
#line 507 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_Goal_50));
#line 507 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_52));
#line 507 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_54));
#line 507 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_56));
#line 507 "rbmm.region_transformation.m"
  }
#line 507 "rbmm.region_transformation.m"
}

#line 493 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__HeadVar__9_9,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__HeadVar__10_10,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86,
#line 493 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87,
#line 493 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88)
#line 493 "rbmm.region_transformation.m"
{
#line 504 "rbmm.region_transformation.m"
  {
#line 504 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 0)));
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81;
#line 504 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__HeadVar__9_9, (MR_Integer) 1)));

#line 514 "rbmm.region_transformation.m"
#line 514 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79)) {
#line 514 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 532 "rbmm.region_transformation.m"
        {
#line 532 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Goal0_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79), (MR_Integer) 0);
#line 532 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Goal_43;

#line 533 "rbmm.region_transformation.m"
          {
#line 533 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_42, &transform_hlds__rbmm__region_transformation__Goal_43, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
          }
#line 537 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__rbmm__region_transformation__Goal_43);
#line 532 "rbmm.region_transformation.m"
        }
#line 514 "rbmm.region_transformation.m"
        break;
#line 514 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 584 "rbmm.region_transformation.m"
        {
#line 585 "rbmm.region_transformation.m"
          {
#line 585 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
            return;
          }
#line 584 "rbmm.region_transformation.m"
        }
#line 514 "rbmm.region_transformation.m"
        break;
#line 514 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 584 "rbmm.region_transformation.m"
        {
#line 585 "rbmm.region_transformation.m"
          {
#line 585 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
            return;
          }
#line 584 "rbmm.region_transformation.m"
        }
#line 514 "rbmm.region_transformation.m"
        break;
#line 514 "rbmm.region_transformation.m"
      case (MR_Integer) 3:
#line 514 "rbmm.region_transformation.m"
#line 514 "rbmm.region_transformation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0)))) {
#line 514 "rbmm.region_transformation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 0:
#line 584 "rbmm.region_transformation.m"
            {
#line 585 "rbmm.region_transformation.m"
              {
#line 585 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
                return;
              }
#line 584 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 1:
#line 584 "rbmm.region_transformation.m"
            {
#line 585 "rbmm.region_transformation.m"
              {
#line 585 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
                return;
              }
#line 584 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 2:
#line 514 "rbmm.region_transformation.m"
            {
#line 514 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 514 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 514 "rbmm.region_transformation.m"
              if ((transform_hlds__rbmm__region_transformation__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "rbmm.region_transformation.m"
                {
#line 585 "rbmm.region_transformation.m"
                  {
#line 585 "rbmm.region_transformation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
                    return;
                  }
#line 584 "rbmm.region_transformation.m"
                }
#line 514 "rbmm.region_transformation.m"
              else
#line 506 "rbmm.region_transformation.m"
                {
#line 506 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145;
#line 506 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__Conjs1_33;
#line 506 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__Conjs_34;
#line 506 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_127_127;
#line 507 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84;
#line 507 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86;
#line 507 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88;

#line 507 "rbmm.region_transformation.m"
                  {
#line 507 "rbmm.region_transformation.m"
                    transform_hlds__rbmm__region_transformation__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 507 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_127_127, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 507 "rbmm.region_transformation.m"
                  }
#line 5592 "transform_hlds.rbmm.region_transformation.c"
                  transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 507 "rbmm.region_transformation.m"
                  {
#line 507 "rbmm.region_transformation.m"
                    mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, transform_hlds__rbmm__region_transformation__TypeCtorInfo_145_145, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__V_127_127, transform_hlds__rbmm__region_transformation__V_197_197, &transform_hlds__rbmm__region_transformation__Conjs1_33, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
                  }
#line 507 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_84);
#line 507 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_86);
#line 507 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_88);
#line 512 "rbmm.region_transformation.m"
                  {
#line 512 "rbmm.region_transformation.m"
                    hlds__goal_util__flatten_conj_2_p_0(transform_hlds__rbmm__region_transformation__Conjs1_33, &transform_hlds__rbmm__region_transformation__Conjs_34);
                  }
#line 513 "rbmm.region_transformation.m"
                  {
#line 513 "rbmm.region_transformation.m"
                    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 513 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_198_198));
#line 513 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_34));
#line 513 "rbmm.region_transformation.m"
                  }
#line 506 "rbmm.region_transformation.m"
                }
#line 514 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 3:
#line 514 "rbmm.region_transformation.m"
            {
#line 514 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));

#line 514 "rbmm.region_transformation.m"
              if ((transform_hlds__rbmm__region_transformation__V_199_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "rbmm.region_transformation.m"
                {
#line 585 "rbmm.region_transformation.m"
                  {
#line 585 "rbmm.region_transformation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
                    return;
                  }
#line 584 "rbmm.region_transformation.m"
                }
#line 514 "rbmm.region_transformation.m"
              else
#line 515 "rbmm.region_transformation.m"
                {
#line 515 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157;
#line 515 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__Disjs_37;
#line 515 "rbmm.region_transformation.m"
                  MR_Word transform_hlds__rbmm__region_transformation__V_120_120;
#line 516 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84;
#line 516 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86;
#line 516 "rbmm.region_transformation.m"
                  MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88;

#line 516 "rbmm.region_transformation.m"
                  {
#line 516 "rbmm.region_transformation.m"
                    transform_hlds__rbmm__region_transformation__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 516 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_120_120, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 516 "rbmm.region_transformation.m"
                  }
#line 5693 "transform_hlds.rbmm.region_transformation.c"
                  transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 516 "rbmm.region_transformation.m"
                  {
#line 516 "rbmm.region_transformation.m"
                    mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, transform_hlds__rbmm__region_transformation__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__V_120_120, transform_hlds__rbmm__region_transformation__V_199_199, &transform_hlds__rbmm__region_transformation__Disjs_37, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
                  }
#line 516 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_STATE_VARIABLE_NameToVar_84);
#line 516 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_VarSet_86);
#line 516 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarTypes_88);
#line 521 "rbmm.region_transformation.m"
                  {
#line 521 "rbmm.region_transformation.m"
                    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 521 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Disjs_37));
#line 521 "rbmm.region_transformation.m"
                  }
#line 515 "rbmm.region_transformation.m"
                }
#line 514 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 4:
#line 523 "rbmm.region_transformation.m"
            {
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169;
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Cases_41;
#line 523 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_113_113;
#line 524 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84;
#line 524 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86;
#line 524 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88;

#line 524 "rbmm.region_transformation.m"
              {
#line 524 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_18));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingProc_19));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingProc_20));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionProc_22));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24));
#line 524 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_113_113, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__HeadVar__9_9));
#line 524 "rbmm.region_transformation.m"
              }
#line 5775 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 524 "rbmm.region_transformation.m"
              {
#line 524 "rbmm.region_transformation.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, transform_hlds__rbmm__region_transformation__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__V_113_113, transform_hlds__rbmm__region_transformation__Cases0_40, &transform_hlds__rbmm__region_transformation__Cases_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83)), &transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85)), &transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87)), &transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
              }
#line 524 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv20_STATE_VARIABLE_NameToVar_84);
#line 524 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv19_STATE_VARIABLE_VarSet_86);
#line 524 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv18_STATE_VARIABLE_VarTypes_88);
#line 530 "rbmm.region_transformation.m"
              {
#line 530 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 530 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 530 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_38));
#line 530 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CanFail_39));
#line 530 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cases_41));
#line 530 "rbmm.region_transformation.m"
              }
#line 523 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 5:
#line 539 "rbmm.region_transformation.m"
            {
#line 539 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Reason0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 539 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Reason_46;
#line 539 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 539 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Goal_136;
#line 553 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Var_133;
#line 551 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation___Kind_45;

#line 551 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Reason0_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 551 "rbmm.region_transformation.m"
              if (transform_hlds__rbmm__region_transformation__succeeded)
#line 551 "rbmm.region_transformation.m"
                {
#line 551 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 1)));
#line 551 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation___Kind_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason0_44, (MR_Integer) 2)));
#line 552 "rbmm.region_transformation.m"
                  {
#line 552 "rbmm.region_transformation.m"
                    transform_hlds__rbmm__region_transformation__Reason_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 552 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 552 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Var_133));
#line 552 "rbmm.region_transformation.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__Reason_46, 2) = ((MR_Box) ((MR_Integer) 3));
#line 552 "rbmm.region_transformation.m"
                  }
#line 551 "rbmm.region_transformation.m"
                }
#line 551 "rbmm.region_transformation.m"
              else
#line 554 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Reason_46 = transform_hlds__rbmm__region_transformation__Reason0_44;
#line 556 "rbmm.region_transformation.m"
              {
#line 556 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Goal0_135, &transform_hlds__rbmm__region_transformation__Goal_136, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
              }
#line 560 "rbmm.region_transformation.m"
              {
#line 560 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 560 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 560 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Reason_46));
#line 560 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Goal_136));
#line 560 "rbmm.region_transformation.m"
              }
#line 539 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 6:
#line 562 "rbmm.region_transformation.m"
            {
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1)));
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2)));
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3)));
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 4)));
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Cond_51;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Then_52;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Else_53;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98;
#line 562 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99;

#line 563 "rbmm.region_transformation.m"
              {
#line 563 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Cond0_48, &transform_hlds__rbmm__region_transformation__Cond_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_83, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_85, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_87, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96);
              }
#line 567 "rbmm.region_transformation.m"
              {
#line 567 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Then0_49, &transform_hlds__rbmm__region_transformation__Then_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_96_96, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99);
              }
#line 571 "rbmm.region_transformation.m"
              {
#line 571 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__Else0_50, &transform_hlds__rbmm__region_transformation__Else_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_97_97, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_98_98, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_86, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_99_99, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_88);
              }
#line 575 "rbmm.region_transformation.m"
              {
#line 575 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 575 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 575 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Vars_47));
#line 575 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Cond_51));
#line 575 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Then_52));
#line 575 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Else_53));
#line 575 "rbmm.region_transformation.m"
              }
#line 562 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
          case (MR_Integer) 7:
#line 584 "rbmm.region_transformation.m"
            {
#line 585 "rbmm.region_transformation.m"
              {
#line 585 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
#line 585 "rbmm.region_transformation.m"
                return;
              }
#line 584 "rbmm.region_transformation.m"
            }
#line 514 "rbmm.region_transformation.m"
            break;
#line 514 "rbmm.region_transformation.m"
        }
#line 514 "rbmm.region_transformation.m"
        break;
#line 514 "rbmm.region_transformation.m"
    }
#line 503 "rbmm.region_transformation.m"
    {
#line 503 "rbmm.region_transformation.m"
      MR_Word base;
#line 503 "rbmm.region_transformation.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "rbmm.region_transformation.m"
      *transform_hlds__rbmm__region_transformation__HeadVar__10_10 = base;
#line 503 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_81));
#line 503 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_82));
#line 503 "rbmm.region_transformation.m"
    }
#line 504 "rbmm.region_transformation.m"
  }
#line 493 "rbmm.region_transformation.m"
}

#line 436 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 436 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 436 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 436 "rbmm.region_transformation.m"
{
#line 436 "rbmm.region_transformation.m"
  {
#line 436 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 436 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_RegVar_16;
#line 436 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22;
#line 436 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24;
#line 436 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26;

#line 436 "rbmm.region_transformation.m"
    {
#line 436 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv4_RegVar_16, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26);
    }
#line 436 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_RegVar_16));
#line 436 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVar_22));
#line 436 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarSet_24));
#line 436 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarTypes_26));
#line 436 "rbmm.region_transformation.m"
  }
#line 436 "rbmm.region_transformation.m"
}

#line 412 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_1,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_2,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_3,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_4,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_6,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14,
#line 412 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15,
#line 412 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16)
#line 412 "rbmm.region_transformation.m"
{
#line 423 "rbmm.region_transformation.m"
  {
#line 423 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 423 "rbmm.region_transformation.m"
#line 423 "rbmm.region_transformation.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7)) {
#line 423 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 423 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 480 "rbmm.region_transformation.m"
        {
#line 489 "rbmm.region_transformation.m"
          {
#line 489 "rbmm.region_transformation.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
            return;
          }
#line 480 "rbmm.region_transformation.m"
        }
#line 423 "rbmm.region_transformation.m"
        break;
#line 423 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 456 "rbmm.region_transformation.m"
        {
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__LHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__RHS_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Mode_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Unification0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 456 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Unification_84;

#line 458 "rbmm.region_transformation.m"
          {
#line 458 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__Graph_2, transform_hlds__rbmm__region_transformation__ResurRenaming_3, transform_hlds__rbmm__region_transformation__IteRenaming_4, transform_hlds__rbmm__region_transformation__Unification0_82, &transform_hlds__rbmm__region_transformation__Unification_84, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16);
          }
#line 461 "rbmm.region_transformation.m"
          {
#line 461 "rbmm.region_transformation.m"
            MR_Word base;
#line 461 "rbmm.region_transformation.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 461 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 461 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LHS_79));
#line 461 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RHS_80));
#line 461 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Mode_81));
#line 461 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Unification_84));
#line 461 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_83));
#line 461 "rbmm.region_transformation.m"
          }
#line 456 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 456 "rbmm.region_transformation.m"
        }
#line 423 "rbmm.region_transformation.m"
        break;
#line 423 "rbmm.region_transformation.m"
      case (MR_Integer) 2:
#line 423 "rbmm.region_transformation.m"
        {
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_236_236;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)));
#line 423 "rbmm.region_transformation.m"
          MR_Integer transform_hlds__rbmm__region_transformation__CalleeProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3)));
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4)));
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 5)));
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes_35;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Constants_36;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Ins_37;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Outs_38;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__AllNodes_39;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgs_40;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredInfo_41;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Args_43;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_59_59;
#line 423 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 430 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 428 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34;
#line 435 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12;
#line 435 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14;
#line 435 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16;

#line 428 "rbmm.region_transformation.m"
          {
#line 428 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_5, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_6)), &transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
          }
#line 428 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 428 "rbmm.region_transformation.m"
            {
#line 428 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes0_34 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_ActualNodes0_34);
#line 428 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 428 "rbmm.region_transformation.m"
            }
#line 430 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 429 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ActualNodes_35 = transform_hlds__rbmm__region_transformation__ActualNodes0_34;
#line 430 "rbmm.region_transformation.m"
          else
#line 431 "rbmm.region_transformation.m"
            {
#line 431 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ActualNodes_35 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[11];
#line 431 "rbmm.region_transformation.m"
            }
#line 433 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Constants_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 0)));
#line 433 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Ins_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 1)));
#line 433 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Outs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ActualNodes_35, (MR_Integer) 2)));
#line 6228 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 434 "rbmm.region_transformation.m"
          {
#line 434 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_59_59 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Ins_37, transform_hlds__rbmm__region_transformation__Outs_38);
          }
#line 434 "rbmm.region_transformation.m"
          {
#line 434 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__AllNodes_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__Constants_36, transform_hlds__rbmm__region_transformation__V_59_59);
          }
#line 436 "rbmm.region_transformation.m"
          {
#line 436 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[0]));
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1));
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_2));
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_3));
#line 436 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_4));
#line 436 "rbmm.region_transformation.m"
          }
#line 6258 "transform_hlds.rbmm.region_transformation.c"
          transform_hlds__rbmm__region_transformation__TypeInfo_236_236 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 435 "rbmm.region_transformation.m"
          {
#line 435 "rbmm.region_transformation.m"
            mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_227_227, transform_hlds__rbmm__region_transformation__TypeInfo_236_236, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__V_60_60, transform_hlds__rbmm__region_transformation__AllNodes_39, &transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
          }
#line 435 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVar_12);
#line 435 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarSet_14);
#line 435 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarTypes_16);
#line 438 "rbmm.region_transformation.m"
          {
#line 438 "rbmm.region_transformation.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_1, transform_hlds__rbmm__region_transformation__CalleePredId_28, &transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 439 "rbmm.region_transformation.m"
          {
#line 439 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__CalleePredInfo_41);
          }
#line 443 "rbmm.region_transformation.m"
#line 443 "rbmm.region_transformation.m"
          switch (transform_hlds__rbmm__region_transformation__CalleePredOrFunc_42) {
#line 443 "rbmm.region_transformation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 443 "rbmm.region_transformation.m"
            case (MR_Integer) 1:
#line 444 "rbmm.region_transformation.m"
              {
#line 444 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_44;
#line 444 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__Last_45;
#line 444 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_64_64;
#line 444 "rbmm.region_transformation.m"
                MR_Word transform_hlds__rbmm__region_transformation__V_65_65;
#line 446 "rbmm.region_transformation.m"
                MR_Box transform_hlds__rbmm__region_transformation__conv8_Last_45;

#line 446 "rbmm.region_transformation.m"
                {
#line 446 "rbmm.region_transformation.m"
                  mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, &transform_hlds__rbmm__region_transformation__BeforeLast_44, &transform_hlds__rbmm__region_transformation__conv8_Last_45);
                }
#line 446 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Last_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_Last_45);
#line 447 "rbmm.region_transformation.m"
                {
#line 447 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "rbmm.region_transformation.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_45));
#line 447 "rbmm.region_transformation.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "rbmm.region_transformation.m"
                }
#line 447 "rbmm.region_transformation.m"
                {
#line 447 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40, transform_hlds__rbmm__region_transformation__V_65_65);
                }
#line 447 "rbmm.region_transformation.m"
                {
#line 447 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__BeforeLast_44, transform_hlds__rbmm__region_transformation__V_64_64);
                }
#line 444 "rbmm.region_transformation.m"
              }
#line 443 "rbmm.region_transformation.m"
              break;
#line 443 "rbmm.region_transformation.m"
            case (MR_Integer) 0:
#line 441 "rbmm.region_transformation.m"
              {
#line 441 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Args_43 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_236_236, transform_hlds__rbmm__region_transformation__Args0_30, transform_hlds__rbmm__region_transformation__ActualRegionArgs_40);
              }
#line 443 "rbmm.region_transformation.m"
              break;
#line 443 "rbmm.region_transformation.m"
          }
#line 450 "rbmm.region_transformation.m"
          {
#line 450 "rbmm.region_transformation.m"
            MR_Word base;
#line 450 "rbmm.region_transformation.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 450 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = base;
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleePredId_28));
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__CalleeProcId_29));
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Args_43));
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Builtin_31));
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_32));
#line 450 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Name_33));
#line 450 "rbmm.region_transformation.m"
          }
#line 422 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 423 "rbmm.region_transformation.m"
        }
#line 423 "rbmm.region_transformation.m"
        break;
#line 423 "rbmm.region_transformation.m"
      case (MR_Integer) 3:
#line 423 "rbmm.region_transformation.m"
#line 423 "rbmm.region_transformation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0)))) {
#line 423 "rbmm.region_transformation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 0:
#line 464 "rbmm.region_transformation.m"
            {
#line 466 "rbmm.region_transformation.m"
              {
#line 466 "rbmm.region_transformation.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "generic call");
#line 466 "rbmm.region_transformation.m"
                return;
              }
#line 464 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 1:
#line 469 "rbmm.region_transformation.m"
            {
#line 471 "rbmm.region_transformation.m"
              {
#line 471 "rbmm.region_transformation.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "call_foreign_proc");
#line 471 "rbmm.region_transformation.m"
                return;
              }
#line 469 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 2:
#line 423 "rbmm.region_transformation.m"
            {
#line 423 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2)));
#line 481 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 423 "rbmm.region_transformation.m"
              if ((transform_hlds__rbmm__region_transformation__V_340_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "rbmm.region_transformation.m"
                {
#line 474 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 474 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 474 "rbmm.region_transformation.m"
                }
#line 423 "rbmm.region_transformation.m"
              else
#line 480 "rbmm.region_transformation.m"
                {
#line 489 "rbmm.region_transformation.m"
                  {
#line 489 "rbmm.region_transformation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                    return;
                  }
#line 480 "rbmm.region_transformation.m"
                }
#line 423 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 3:
#line 423 "rbmm.region_transformation.m"
            {
#line 423 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1)));

#line 423 "rbmm.region_transformation.m"
              if ((transform_hlds__rbmm__region_transformation__V_342_342 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "rbmm.region_transformation.m"
                {
#line 474 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_16 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_15;
#line 474 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_14 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_13;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_12 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_11;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_10 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalInfo_0_9;
#line 473 "rbmm.region_transformation.m"
                  *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_8 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_GoalExpr_0_7;
#line 474 "rbmm.region_transformation.m"
                }
#line 423 "rbmm.region_transformation.m"
              else
#line 480 "rbmm.region_transformation.m"
                {
#line 489 "rbmm.region_transformation.m"
                  {
#line 489 "rbmm.region_transformation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                    return;
                  }
#line 480 "rbmm.region_transformation.m"
                }
#line 423 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 4:
#line 480 "rbmm.region_transformation.m"
            {
#line 489 "rbmm.region_transformation.m"
              {
#line 489 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                return;
              }
#line 480 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 5:
#line 480 "rbmm.region_transformation.m"
            {
#line 489 "rbmm.region_transformation.m"
              {
#line 489 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                return;
              }
#line 480 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 6:
#line 480 "rbmm.region_transformation.m"
            {
#line 489 "rbmm.region_transformation.m"
              {
#line 489 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                return;
              }
#line 480 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
          case (MR_Integer) 7:
#line 480 "rbmm.region_transformation.m"
            {
#line 489 "rbmm.region_transformation.m"
              {
#line 489 "rbmm.region_transformation.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_transformation", (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
#line 489 "rbmm.region_transformation.m"
                return;
              }
#line 480 "rbmm.region_transformation.m"
            }
#line 423 "rbmm.region_transformation.m"
            break;
#line 423 "rbmm.region_transformation.m"
        }
#line 423 "rbmm.region_transformation.m"
        break;
#line 423 "rbmm.region_transformation.m"
    }
#line 423 "rbmm.region_transformation.m"
  }
#line 412 "rbmm.region_transformation.m"
}

#line 386 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 386 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 386 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 386 "rbmm.region_transformation.m"
{
#line 386 "rbmm.region_transformation.m"
  {
#line 386 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 386 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30;
#line 386 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32;
#line 386 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34;
#line 386 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv9_Conjs_23;

#line 386 "rbmm.region_transformation.m"
    {
#line 386 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv9_Conjs_23);
    }
#line 386 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv12_STATE_VARIABLE_NameToVar_30));
#line 386 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_VarSet_32));
#line 386 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_VarTypes_34));
#line 386 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv9_Conjs_23));
#line 386 "rbmm.region_transformation.m"
  }
#line 386 "rbmm.region_transformation.m"
}

#line 378 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 378 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_8,
#line 378 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_9)
#line 378 "rbmm.region_transformation.m"
{
#line 378 "rbmm.region_transformation.m"
  {
#line 378 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 378 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30;
#line 378 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32;
#line 378 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34;
#line 378 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_Conjs_23;

#line 378 "rbmm.region_transformation.m"
    {
#line 378 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_6), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_8), &transform_hlds__rbmm__region_transformation__conv1_Conjs_23);
    }
#line 378 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_NameToVar_30));
#line 378 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_VarSet_32));
#line 378 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_VarTypes_34));
#line 378 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_9 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_Conjs_23));
#line 378 "rbmm.region_transformation.m"
  }
#line 378 "rbmm.region_transformation.m"
}

#line 342 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_17,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_18,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_19,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_20,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_22,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54,
#line 342 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55,
#line 342 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56)
#line 342 "rbmm.region_transformation.m"
{
#line 351 "rbmm.region_transformation.m"
  {
#line 351 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 351 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 0)));
#line 351 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, (MR_Integer) 1)));
#line 351 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HasSubGoals_31;

#line 353 "rbmm.region_transformation.m"
    {
#line 353 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__HasSubGoals_31 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__region_transformation__GoalExpr0_29);
    }
#line 404 "rbmm.region_transformation.m"
#line 404 "rbmm.region_transformation.m"
    switch (transform_hlds__rbmm__region_transformation__HasSubGoals_31) {
#line 404 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 355 "rbmm.region_transformation.m"
        {
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ProgPoint_32;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Context_33;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__ResurRenaming_35;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__IteRenaming_36;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__GoalExpr_37;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__GoalInfo_38;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Conjs3_44;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Conjs_45;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78;
#line 355 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79;
#line 357 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_34_34;
#line 389 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__Before_40;
#line 389 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__After_41;
#line 374 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_68_68;
#line 374 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv0_V_68_68;
#line 399 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 399 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_46_46;
#line 399 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_47_47;
#line 399 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_48_48;

#line 356 "rbmm.region_transformation.m"
          {
#line 356 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__ProgPoint_32 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_transformation__GoalInfo0_30);
          }
#line 357 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 0)));
#line 357 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__ProgPoint_32, (MR_Integer) 1)));
#line 358 "rbmm.region_transformation.m"
          {
#line 358 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ProgPoint_32, &transform_hlds__rbmm__region_transformation__ResurRenaming_35, &transform_hlds__rbmm__region_transformation__IteRenaming_36);
          }
#line 364 "rbmm.region_transformation.m"
          {
#line 364 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenaming_35, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__GoalExpr0_29, &transform_hlds__rbmm__region_transformation__GoalExpr_37, transform_hlds__rbmm__region_transformation__GoalInfo0_30, &transform_hlds__rbmm__region_transformation__GoalInfo_38, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63);
          }
#line 369 "rbmm.region_transformation.m"
          {
#line 369 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_61_61, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_62_62, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39);
          }
#line 374 "rbmm.region_transformation.m"
          {
#line 374 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__ProgPoint_32)), &transform_hlds__rbmm__region_transformation__conv0_V_68_68);
          }
#line 374 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 374 "rbmm.region_transformation.m"
            {
#line 374 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_68_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_68_68);
#line 374 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 374 "rbmm.region_transformation.m"
            }
#line 374 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 374 "rbmm.region_transformation.m"
            {
#line 375 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Before_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 0)));
#line 375 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__After_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_68_68, (MR_Integer) 1)));
#line 375 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 374 "rbmm.region_transformation.m"
            }
#line 389 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 380 "rbmm.region_transformation.m"
            {
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_103_103;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_104_104;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_105_105;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_106_106;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Conjs1_42;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Conjs2_43;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_69_69;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_73_73;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_74_74;
#line 380 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_76_76;
#line 378 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70;
#line 378 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71;
#line 378 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72;
#line 378 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv5_Conjs1_42;
#line 386 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77;
#line 386 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78;
#line 386 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79;
#line 386 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv13_Conjs3_44;

#line 378 "rbmm.region_transformation.m"
              {
#line 378 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 378 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 378 "rbmm.region_transformation.m"
              }
#line 6910 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102 = (MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;
#line 6912 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeInfo_103_103 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0];
#line 6914 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeInfo_104_104 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4];
#line 6916 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeInfo_105_105 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7];
#line 6918 "transform_hlds.rbmm.region_transformation.c"
              transform_hlds__rbmm__region_transformation__TypeInfo_106_106 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[5];
#line 378 "rbmm.region_transformation.m"
              {
#line 378 "rbmm.region_transformation.m"
                mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_69_69, transform_hlds__rbmm__region_transformation__Before_40, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64)), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72, ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39)), &transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
              }
#line 378 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_NameToVar_70_70);
#line 378 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_VarSet_71_71);
#line 378 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_VarTypes_72_72);
#line 378 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs1_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_Conjs1_42);
#line 383 "rbmm.region_transformation.m"
              {
#line 383 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 383 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_74_74, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 383 "rbmm.region_transformation.m"
              }
#line 383 "rbmm.region_transformation.m"
              {
#line 383 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_74_74));
#line 383 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "rbmm.region_transformation.m"
              }
#line 383 "rbmm.region_transformation.m"
              {
#line 383 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Conjs2_43 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__Conjs1_42, transform_hlds__rbmm__region_transformation__V_73_73);
              }
#line 386 "rbmm.region_transformation.m"
              {
#line 386 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ModuleInfo_17));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Context_33));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenaming_35));
#line 386 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenaming_36));
#line 386 "rbmm.region_transformation.m"
              }
#line 386 "rbmm.region_transformation.m"
              {
#line 386 "rbmm.region_transformation.m"
                mercury__list__foldl4_10_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_102_102, transform_hlds__rbmm__region_transformation__TypeInfo_103_103, transform_hlds__rbmm__region_transformation__TypeInfo_104_104, transform_hlds__rbmm__region_transformation__TypeInfo_105_105, transform_hlds__rbmm__region_transformation__TypeInfo_106_106, transform_hlds__rbmm__region_transformation__V_76_76, transform_hlds__rbmm__region_transformation__After_41, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_70_70)), &transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_71_71)), &transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_72_72)), &transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs2_43)), &transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
              }
#line 386 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv16_STATE_VARIABLE_NameToVar_77_77);
#line 386 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv15_STATE_VARIABLE_VarSet_78_78);
#line 386 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv14_STATE_VARIABLE_VarTypes_79_79);
#line 386 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Conjs3_44 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv13_Conjs3_44);
#line 380 "rbmm.region_transformation.m"
            }
#line 389 "rbmm.region_transformation.m"
          else
#line 391 "rbmm.region_transformation.m"
            {
#line 391 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_80_80;
#line 391 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_81_81;

#line 391 "rbmm.region_transformation.m"
              {
#line 391 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 391 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_81_81, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 391 "rbmm.region_transformation.m"
              }
#line 391 "rbmm.region_transformation.m"
              {
#line 391 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_81_81));
#line 391 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "rbmm.region_transformation.m"
              }
#line 391 "rbmm.region_transformation.m"
              {
#line 391 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__Conjs3_44 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__region_transformation__IteRenamingAssignments_39, transform_hlds__rbmm__region_transformation__V_80_80);
              }
#line 391 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_66_66;
#line 391 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_65_65;
#line 391 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_64_64;
#line 391 "rbmm.region_transformation.m"
            }
#line 395 "rbmm.region_transformation.m"
          {
#line 395 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__ProgPoint_32, transform_hlds__rbmm__region_transformation__IteRenaming_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_77_77, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_78_78, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_79_79, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56, transform_hlds__rbmm__region_transformation__Conjs3_44, &transform_hlds__rbmm__region_transformation__Conjs_45);
          }
#line 399 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__Conjs_45)) == (MR_mktag((MR_Integer) 1)));
#line 399 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 399 "rbmm.region_transformation.m"
            {
#line 399 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 0)));
#line 399 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__Conjs_45, (MR_Integer) 1)));
#line 399 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__region_transformation__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 399 "rbmm.region_transformation.m"
              if (transform_hlds__rbmm__region_transformation__succeeded)
#line 399 "rbmm.region_transformation.m"
                {
#line 399 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 0)));
#line 399 "rbmm.region_transformation.m"
                  transform_hlds__rbmm__region_transformation__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_86_86, (MR_Integer) 1)));
#line 399 "rbmm.region_transformation.m"
                }
#line 399 "rbmm.region_transformation.m"
            }
#line 401 "rbmm.region_transformation.m"
          if (transform_hlds__rbmm__region_transformation__succeeded)
#line 400 "rbmm.region_transformation.m"
            {
#line 400 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_88_88;

#line 400 "rbmm.region_transformation.m"
              {
#line 400 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 400 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) ((MR_Integer) 0));
#line 400 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_transformation__V_88_88, 2) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Conjs_45));
#line 400 "rbmm.region_transformation.m"
              }
#line 400 "rbmm.region_transformation.m"
              {
#line 400 "rbmm.region_transformation.m"
                MR_Word base;
#line 400 "rbmm.region_transformation.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "rbmm.region_transformation.m"
                *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 400 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__V_88_88));
#line 400 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 400 "rbmm.region_transformation.m"
              }
#line 400 "rbmm.region_transformation.m"
            }
#line 401 "rbmm.region_transformation.m"
          else
#line 402 "rbmm.region_transformation.m"
            {
#line 402 "rbmm.region_transformation.m"
              MR_Word base;
#line 402 "rbmm.region_transformation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "rbmm.region_transformation.m"
              *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50 = base;
#line 402 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalExpr_37));
#line 402 "rbmm.region_transformation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__GoalInfo_38));
#line 402 "rbmm.region_transformation.m"
            }
#line 355 "rbmm.region_transformation.m"
        }
#line 404 "rbmm.region_transformation.m"
        break;
#line 404 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 406 "rbmm.region_transformation.m"
        {
#line 406 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_17, transform_hlds__rbmm__region_transformation__Graph_18, transform_hlds__rbmm__region_transformation__ResurRenamingProc_19, transform_hlds__rbmm__region_transformation__IteRenamingProc_20, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_21, transform_hlds__rbmm__region_transformation__RegionInstructionProc_22, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_23, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_49, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_50, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_51, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_52, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_53, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_54, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_56);
        }
#line 404 "rbmm.region_transformation.m"
        break;
#line 404 "rbmm.region_transformation.m"
    }
#line 351 "rbmm.region_transformation.m"
  }
#line 342 "rbmm.region_transformation.m"
}

#line 300 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6,
#line 300 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_7,
#line 300 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_8)
#line 300 "rbmm.region_transformation.m"
{
#line 300 "rbmm.region_transformation.m"
  {
#line 300 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 300 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv3_RegVar_12;
#line 300 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18;
#line 300 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20;
#line 300 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22;

#line 300 "rbmm.region_transformation.m"
    {
#line 300 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), &transform_hlds__rbmm__region_transformation__conv3_RegVar_12, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_7), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22);
    }
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv3_RegVar_12));
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_NameToVar_18));
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_VarSet_20));
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_8 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_VarTypes_22));
#line 300 "rbmm.region_transformation.m"
  }
#line 300 "rbmm.region_transformation.m"
}

#line 262 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ModuleInfo_25,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredInfo_26,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__Graph_27,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_30,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_31,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_32,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68,
#line 262 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69,
#line 262 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70)
#line 262 "rbmm.region_transformation.m"
{
#line 276 "rbmm.region_transformation.m"
  {
#line 276 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeInfo_107_107;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Constants_42;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Deads_43;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Borns_44;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalInputNodes_45;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalNodes_46;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_47;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InMode_48;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutMode_49;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__InModes_50;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__OutModes_51;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_52;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_75_75;
#line 276 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_79_79;
#line 276 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_80_80;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95;
#line 276 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96;
#line 300 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68;
#line 300 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58;
#line 300 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60;

#line 277 "rbmm.region_transformation.m"
    {
#line 277 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(transform_hlds__rbmm__region_transformation__ModuleInfo_25, transform_hlds__rbmm__region_transformation__Graph_27, transform_hlds__rbmm__region_transformation__ResurRenamingProc_30, transform_hlds__rbmm__region_transformation__IteRenamingProc_31, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_29, transform_hlds__rbmm__region_transformation__RegionInstructionProc_32, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_33, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_34, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_0_65, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_0_67, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_0_57, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_0_59, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74);
    }
#line 297 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Constants_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 0)));
#line 297 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Deads_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 1)));
#line 297 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Borns_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgProc_28, (MR_Integer) 2)));
#line 7312 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 298 "rbmm.region_transformation.m"
    {
#line 298 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalInputNodes_45 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Constants_42, transform_hlds__rbmm__region_transformation__Deads_43);
    }
#line 299 "rbmm.region_transformation.m"
    {
#line 299 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__FormalNodes_46 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 300 "rbmm.region_transformation.m"
    {
#line 300 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 300 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[0]));
#line 300 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1));
#line 300 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_75_75, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Graph_27));
#line 300 "rbmm.region_transformation.m"
    }
#line 7338 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeInfo_107_107 = (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1];
#line 300 "rbmm.region_transformation.m"
    {
#line 300 "rbmm.region_transformation.m"
      mercury__list__map_foldl3_9_p_1(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__TypeInfo_107_107, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[7], transform_hlds__rbmm__region_transformation__V_75_75, transform_hlds__rbmm__region_transformation__FormalNodes_46, &transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_72_72)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_73_73)), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_74_74)), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
    }
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVar_68 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_NameToVar_68);
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_VarSet_58);
#line 300 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_VarTypes_60);
#line 303 "rbmm.region_transformation.m"
    {
#line 303 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__InMode_48 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 304 "rbmm.region_transformation.m"
    {
#line 304 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__OutMode_49 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 305 "rbmm.region_transformation.m"
    {
#line 305 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_79_79 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__FormalInputNodes_45);
    }
#line 7366 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 305 "rbmm.region_transformation.m"
    {
#line 305 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_79_79, ((MR_Box) (transform_hlds__rbmm__region_transformation__InMode_48)), &transform_hlds__rbmm__region_transformation__InModes_50);
    }
#line 306 "rbmm.region_transformation.m"
    {
#line 306 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_80_80 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_98_98, transform_hlds__rbmm__region_transformation__Borns_44);
    }
#line 306 "rbmm.region_transformation.m"
    {
#line 306 "rbmm.region_transformation.m"
      mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__V_80_80, ((MR_Box) (transform_hlds__rbmm__region_transformation__OutMode_49)), &transform_hlds__rbmm__region_transformation__OutModes_51);
    }
#line 309 "rbmm.region_transformation.m"
    {
#line 309 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_26);
    }
#line 314 "rbmm.region_transformation.m"
#line 314 "rbmm.region_transformation.m"
    switch (transform_hlds__rbmm__region_transformation__PredOrFunc_52) {
#line 314 "rbmm.region_transformation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 314 "rbmm.region_transformation.m"
      case (MR_Integer) 1:
#line 315 "rbmm.region_transformation.m"
        {
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__LastHeadVar_54;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__LastHeadMode_56;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_82_82;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_83_83;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_86_86;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_87_87;
#line 315 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_88_88;
#line 316 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54;
#line 318 "rbmm.region_transformation.m"
          MR_Box transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56;

#line 316 "rbmm.region_transformation.m"
          {
#line 316 "rbmm.region_transformation.m"
            mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, &transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, &transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
          }
#line 316 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__LastHeadVar_54 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_LastHeadVar_54);
#line 317 "rbmm.region_transformation.m"
          {
#line 317 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadVar_54));
#line 317 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "rbmm.region_transformation.m"
          }
#line 317 "rbmm.region_transformation.m"
          {
#line 317 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_82_82 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47, transform_hlds__rbmm__region_transformation__V_83_83);
          }
#line 317 "rbmm.region_transformation.m"
          {
#line 317 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__BeforeLastHeadVar_53, transform_hlds__rbmm__region_transformation__V_82_82);
          }
#line 318 "rbmm.region_transformation.m"
          {
#line 318 "rbmm.region_transformation.m"
            mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, &transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, &transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
          }
#line 318 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__LastHeadMode_56 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv8_LastHeadMode_56);
#line 321 "rbmm.region_transformation.m"
          {
#line 321 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__LastHeadMode_56));
#line 321 "rbmm.region_transformation.m"
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "rbmm.region_transformation.m"
          }
#line 321 "rbmm.region_transformation.m"
          {
#line 321 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_87_87 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__OutModes_51, transform_hlds__rbmm__region_transformation__V_88_88);
          }
#line 321 "rbmm.region_transformation.m"
          {
#line 321 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_86_86 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__V_87_87);
          }
#line 320 "rbmm.region_transformation.m"
          {
#line 320 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__BeforeLastHeadMode_55, transform_hlds__rbmm__region_transformation__V_86_86);
          }
#line 315 "rbmm.region_transformation.m"
        }
#line 314 "rbmm.region_transformation.m"
        break;
#line 314 "rbmm.region_transformation.m"
      case (MR_Integer) 0:
#line 311 "rbmm.region_transformation.m"
        {
#line 311 "rbmm.region_transformation.m"
          MR_Word transform_hlds__rbmm__region_transformation__V_92_92;

#line 312 "rbmm.region_transformation.m"
          {
#line 312 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeInfo_107_107, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_0_61, transform_hlds__rbmm__region_transformation__FormalRegionArgs_47);
          }
#line 313 "rbmm.region_transformation.m"
          {
#line 313 "rbmm.region_transformation.m"
            transform_hlds__rbmm__region_transformation__V_92_92 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__InModes_50, transform_hlds__rbmm__region_transformation__OutModes_51);
          }
#line 313 "rbmm.region_transformation.m"
          {
#line 313 "rbmm.region_transformation.m"
            *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_111_111, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_0_63, transform_hlds__rbmm__region_transformation__V_92_92);
          }
#line 311 "rbmm.region_transformation.m"
        }
#line 314 "rbmm.region_transformation.m"
        break;
#line 314 "rbmm.region_transformation.m"
    }
#line 324 "rbmm.region_transformation.m"
    {
#line 324 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarSet_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_0_69, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93);
    }
#line 325 "rbmm.region_transformation.m"
    {
#line 325 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Goal_66, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_93_93, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 326 "rbmm.region_transformation.m"
    {
#line 326 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_VarTypes_60, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_94_94, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95);
    }
#line 327 "rbmm.region_transformation.m"
    {
#line 327 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_HeadVars_62, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_95_95, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96);
    }
#line 328 "rbmm.region_transformation.m"
    {
#line 328 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(*transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ActualArgModes_64, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ProcInfo_70);
    }
#line 276 "rbmm.region_transformation.m"
  }
#line 262 "rbmm.region_transformation.m"
}

#line 205 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_15,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_18,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_19,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_20,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_23,
#line 205 "rbmm.region_transformation.m"
  MR_Integer transform_hlds__rbmm__region_transformation__ProcId_24,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56,
#line 205 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57,
#line 205 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58,
#line 205 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59)
#line 205 "rbmm.region_transformation.m"
{
#line 215 "rbmm.region_transformation.m"
  {
#line 215 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PPId_27;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo0_28;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo0_29;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo1_30;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarSet0_31;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__VarTypes0_32;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__HeadVars0_33;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualArgModes0_34;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Goal0_35;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__Graph_36;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc_41;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc_44;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionProc_46;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar0_47;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__NameToVar_53;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo2_54;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcInfo_55;
#line 215 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_60_60;
#line 224 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv0_V_60_60;
#line 224 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_37_37;
#line 225 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38;
#line 226 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39;
#line 230 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 227 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40;
#line 237 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 234 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43;
#line 241 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46;
#line 243 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_48_48;
#line 243 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_49_49;
#line 243 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_50_50;
#line 243 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_51_51;
#line 243 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_52_52;

#line 216 "rbmm.region_transformation.m"
    {
#line 216 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__PPId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_23));
#line 216 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_27, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ProcId_24));
#line 216 "rbmm.region_transformation.m"
    }
#line 217 "rbmm.region_transformation.m"
    {
#line 217 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PPId_27, &transform_hlds__rbmm__region_transformation__PredInfo0_28, &transform_hlds__rbmm__region_transformation__ProcInfo0_29);
    }
#line 218 "rbmm.region_transformation.m"
    {
#line 218 "rbmm.region_transformation.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__ProcInfo0_29, &transform_hlds__rbmm__region_transformation__ProcInfo1_30);
    }
#line 219 "rbmm.region_transformation.m"
    {
#line 219 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarSet0_31);
    }
#line 220 "rbmm.region_transformation.m"
    {
#line 220 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__VarTypes0_32);
    }
#line 221 "rbmm.region_transformation.m"
    {
#line 221 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__HeadVars0_33);
    }
#line 222 "rbmm.region_transformation.m"
    {
#line 222 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ActualArgModes0_34);
    }
#line 223 "rbmm.region_transformation.m"
    {
#line 223 "rbmm.region_transformation.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__Goal0_35);
    }
#line 7698 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 224 "rbmm.region_transformation.m"
    {
#line 224 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_transformation__RptaInfoTable_15, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv0_V_60_60);
    }
#line 224 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_60_60 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_V_60_60);
#line 224 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__Graph_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 0)));
#line 224 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_60_60, (MR_Integer) 1)));
#line 225 "rbmm.region_transformation.m"
    {
#line 225 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_transformation__FormalRegionArgTable_16, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
    }
#line 225 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv1_FormalRegionArgProc_38);
#line 226 "rbmm.region_transformation.m"
    {
#line 226 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[2], transform_hlds__rbmm__region_transformation__ActualRegionArgTable_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
    }
#line 226 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_ActualRegionArgProc_39);
#line 227 "rbmm.region_transformation.m"
    {
#line 227 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__ResurRenamingTable_18, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
    }
#line 227 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 227 "rbmm.region_transformation.m"
      {
#line 227 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_ResurRenamingProc0_40);
#line 227 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 227 "rbmm.region_transformation.m"
      }
#line 230 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 228 "rbmm.region_transformation.m"
      {
#line 229 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42;

#line 228 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = transform_hlds__rbmm__region_transformation__ResurRenamingProc0_40;
#line 229 "rbmm.region_transformation.m"
        {
#line 229 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_21, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
        }
#line 229 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv4_ResurRenamingAnnoProc_42);
#line 228 "rbmm.region_transformation.m"
      }
#line 230 "rbmm.region_transformation.m"
    else
#line 231 "rbmm.region_transformation.m"
      {
#line 231 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 231 "rbmm.region_transformation.m"
        {
#line 231 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingProc_41 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 232 "rbmm.region_transformation.m"
        {
#line 232 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_70_70, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 231 "rbmm.region_transformation.m"
      }
#line 234 "rbmm.region_transformation.m"
    {
#line 234 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[4], transform_hlds__rbmm__region_transformation__IteRenamingTable_19, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
    }
#line 234 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 234 "rbmm.region_transformation.m"
      {
#line 234 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc0_43 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv5_IteRenamingProc0_43);
#line 234 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__succeeded = MR_TRUE;
#line 234 "rbmm.region_transformation.m"
      }
#line 237 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 235 "rbmm.region_transformation.m"
      {
#line 236 "rbmm.region_transformation.m"
        MR_Box transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45;

#line 235 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = transform_hlds__rbmm__region_transformation__IteRenamingProc0_43;
#line 236 "rbmm.region_transformation.m"
        {
#line 236 "rbmm.region_transformation.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[5], transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_22, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
        }
#line 236 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_IteRenamingAnnoProc_45);
#line 235 "rbmm.region_transformation.m"
      }
#line 237 "rbmm.region_transformation.m"
    else
#line 238 "rbmm.region_transformation.m"
      {
#line 238 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;

#line 238 "rbmm.region_transformation.m"
        {
#line 238 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingProc_44 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[3]);
        }
#line 239 "rbmm.region_transformation.m"
        {
#line 239 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_75_75, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[3]);
        }
#line 238 "rbmm.region_transformation.m"
      }
#line 241 "rbmm.region_transformation.m"
    {
#line 241 "rbmm.region_transformation.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[6], transform_hlds__rbmm__region_transformation__RegionInstructionTable_20, ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), &transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
    }
#line 241 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__RegionInstructionProc_46 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_RegionInstructionProc_46);
#line 242 "rbmm.region_transformation.m"
    {
#line 242 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__NameToVar0_47 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[1]);
    }
#line 243 "rbmm.region_transformation.m"
    {
#line 243 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__Graph_36, transform_hlds__rbmm__region_transformation__FormalRegionArgProc_38, transform_hlds__rbmm__region_transformation__ActualRegionArgProc_39, transform_hlds__rbmm__region_transformation__ResurRenamingProc_41, transform_hlds__rbmm__region_transformation__IteRenamingProc_44, transform_hlds__rbmm__region_transformation__RegionInstructionProc_46, transform_hlds__rbmm__region_transformation__ResurRenamingAnnoProc_42, transform_hlds__rbmm__region_transformation__IteRenamingAnnoProc_45, transform_hlds__rbmm__region_transformation__VarSet0_31, &transform_hlds__rbmm__region_transformation__V_48_48, transform_hlds__rbmm__region_transformation__VarTypes0_32, &transform_hlds__rbmm__region_transformation__V_49_49, transform_hlds__rbmm__region_transformation__HeadVars0_33, &transform_hlds__rbmm__region_transformation__V_50_50, transform_hlds__rbmm__region_transformation__ActualArgModes0_34, &transform_hlds__rbmm__region_transformation__V_51_51, transform_hlds__rbmm__region_transformation__Goal0_35, &transform_hlds__rbmm__region_transformation__V_52_52, transform_hlds__rbmm__region_transformation__NameToVar0_47, &transform_hlds__rbmm__region_transformation__NameToVar_53, transform_hlds__rbmm__region_transformation__ProcInfo1_30, &transform_hlds__rbmm__region_transformation__ProcInfo2_54);
    }
#line 248 "rbmm.region_transformation.m"
    {
#line 248 "rbmm.region_transformation.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__rbmm__region_transformation__ProcInfo2_54, &transform_hlds__rbmm__region_transformation__ProcInfo_55);
    }
#line 249 "rbmm.region_transformation.m"
    {
#line 249 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__region_transformation__PPId_27, transform_hlds__rbmm__region_transformation__PredInfo0_28, transform_hlds__rbmm__region_transformation__ProcInfo_55, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_58, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_59);
    }
#line 250 "rbmm.region_transformation.m"
    {
#line 250 "rbmm.region_transformation.m"
      mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_64_64, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__region_transformation__PPId_27)), ((MR_Box) (transform_hlds__rbmm__region_transformation__NameToVar_53)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_56, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_57);
    }
#line 215 "rbmm.region_transformation.m"
  }
#line 205 "rbmm.region_transformation.m"
}

#line 185 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 185 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 185 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 185 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 185 "rbmm.region_transformation.m"
{
#line 185 "rbmm.region_transformation.m"
  {
#line 185 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 185 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57;
#line 185 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59;

#line 185 "rbmm.region_transformation.m"
    {
#line 185 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 11))), ((MR_Integer) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59);
    }
#line 185 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_NameToVarTable_57));
#line 185 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_59));
#line 185 "rbmm.region_transformation.m"
  }
#line 185 "rbmm.region_transformation.m"
}

#line 171 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RptaInfoTable_14,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingTable_17,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingTable_18,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__RegionInstructionTable_19,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PredId_22,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27,
#line 171 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28,
#line 171 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 171 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 171 "rbmm.region_transformation.m"
{
#line 182 "rbmm.region_transformation.m"
  {
#line 182 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 182 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredInfo_25;
#line 182 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__ProcIds_26;
#line 182 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 185 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28;
#line 185 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30;

#line 183 "rbmm.region_transformation.m"
    {
#line 183 "rbmm.region_transformation.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_22, &transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 184 "rbmm.region_transformation.m"
    {
#line 184 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__ProcIds_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_transformation__PredInfo_25);
    }
#line 185 "rbmm.region_transformation.m"
    {
#line 185 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[0]));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_14));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_15));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_16));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_17));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_18));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_19));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_20));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_21));
#line 185 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 11) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_22));
#line 185 "rbmm.region_transformation.m"
    }
#line 185 "rbmm.region_transformation.m"
    {
#line 185 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__ProcIds_26, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_27)), &transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
    }
#line 185 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_28 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_STATE_VARIABLE_NameToVarTable_28);
#line 185 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30);
#line 182 "rbmm.region_transformation.m"
  }
#line 171 "rbmm.region_transformation.m"
}

#line 132 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__PPId_7,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__FormalRegionArgs_8,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27,
#line 132 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28,
#line 132 "rbmm.region_transformation.m"
  MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29,
#line 132 "rbmm.region_transformation.m"
  MR_Word * transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30)
#line 132 "rbmm.region_transformation.m"
{
#line 136 "rbmm.region_transformation.m"
  {
#line 136 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 136 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 0)));
#line 137 "rbmm.region_transformation.m"
    MR_Integer transform_hlds__rbmm__region_transformation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__PPId_7, (MR_Integer) 1)));

#line 138 "rbmm.region_transformation.m"
    {
#line 138 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11)), transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27);
    }
#line 140 "rbmm.region_transformation.m"
    if (transform_hlds__rbmm__region_transformation__succeeded)
#line 139 "rbmm.region_transformation.m"
      {
#line 139 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29;
#line 139 "rbmm.region_transformation.m"
        *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27;
#line 139 "rbmm.region_transformation.m"
      }
#line 140 "rbmm.region_transformation.m"
    else
#line 165 "rbmm.region_transformation.m"
      {
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Constants_14;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Deads_15;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__Borns_16;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__Arity_18;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__RegionTypes_19;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__TypeVarSet_20;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ExistQuantTVars_21;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes0_22;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__PredOrFunc_23;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__ArgTypes_24;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_32_32;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_33_33;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_34_34;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_35_35;
#line 165 "rbmm.region_transformation.m"
        MR_Integer transform_hlds__rbmm__region_transformation__V_36_36;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__V_38_38;
#line 165 "rbmm.region_transformation.m"
        MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42;

#line 142 "rbmm.region_transformation.m"
        {
#line 142 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__PredId_11, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 143 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Constants_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 0)));
#line 143 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Deads_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 1)));
#line 143 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__Borns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__FormalRegionArgs_8, (MR_Integer) 2)));
#line 8107 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 144 "rbmm.region_transformation.m"
        {
#line 144 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_33_33 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Constants_14);
        }
#line 144 "rbmm.region_transformation.m"
        {
#line 144 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_34_34 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Deads_15);
        }
#line 144 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_32_32 = (transform_hlds__rbmm__region_transformation__V_33_33 + transform_hlds__rbmm__region_transformation__V_34_34);
#line 145 "rbmm.region_transformation.m"
        {
#line 145 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_35_35 = mercury__list__length_1_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_46_46, transform_hlds__rbmm__region_transformation__Borns_16);
        }
#line 144 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17 = (transform_hlds__rbmm__region_transformation__V_32_32 + transform_hlds__rbmm__region_transformation__V_35_35);
#line 146 "rbmm.region_transformation.m"
        {
#line 146 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__Arity_18 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31);
        }
#line 147 "rbmm.region_transformation.m"
        transform_hlds__rbmm__region_transformation__V_36_36 = (transform_hlds__rbmm__region_transformation__Arity_18 + transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17);
#line 147 "rbmm.region_transformation.m"
        {
#line 147 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__rbmm__region_transformation__V_36_36, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_31_31, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 149 "rbmm.region_transformation.m"
        {
#line 149 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__V_38_38 = parse_tree__builtin_lib_types__region_type_0_f_0();
        }
#line 8145 "transform_hlds.rbmm.region_transformation.c"
        transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 149 "rbmm.region_transformation.m"
        {
#line 149 "rbmm.region_transformation.m"
          mercury__list__duplicate_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__NumberOfRegArgs_17, ((MR_Box) (transform_hlds__rbmm__region_transformation__V_38_38)), &transform_hlds__rbmm__region_transformation__RegionTypes_19);
        }
#line 150 "rbmm.region_transformation.m"
        {
#line 150 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__TypeVarSet_20, &transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, &transform_hlds__rbmm__region_transformation__ArgTypes0_22);
        }
#line 152 "rbmm.region_transformation.m"
        {
#line 152 "rbmm.region_transformation.m"
          transform_hlds__rbmm__region_transformation__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37);
        }
#line 156 "rbmm.region_transformation.m"
#line 156 "rbmm.region_transformation.m"
        switch (transform_hlds__rbmm__region_transformation__PredOrFunc_23) {
#line 156 "rbmm.region_transformation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 156 "rbmm.region_transformation.m"
          case (MR_Integer) 1:
#line 157 "rbmm.region_transformation.m"
            {
#line 157 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__BeforeLast_25;
#line 157 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__Last_26;
#line 157 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_39_39;
#line 157 "rbmm.region_transformation.m"
              MR_Word transform_hlds__rbmm__region_transformation__V_40_40;
#line 159 "rbmm.region_transformation.m"
              MR_Box transform_hlds__rbmm__region_transformation__conv0_Last_26;

#line 159 "rbmm.region_transformation.m"
              {
#line 159 "rbmm.region_transformation.m"
                mercury__list__det_split_last_3_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, &transform_hlds__rbmm__region_transformation__BeforeLast_25, &transform_hlds__rbmm__region_transformation__conv0_Last_26);
              }
#line 159 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__Last_26 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv0_Last_26);
#line 160 "rbmm.region_transformation.m"
              {
#line 160 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__Last_26));
#line 160 "rbmm.region_transformation.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_transformation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "rbmm.region_transformation.m"
              }
#line 160 "rbmm.region_transformation.m"
              {
#line 160 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__RegionTypes_19, transform_hlds__rbmm__region_transformation__V_40_40);
              }
#line 160 "rbmm.region_transformation.m"
              {
#line 160 "rbmm.region_transformation.m"
                transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__BeforeLast_25, transform_hlds__rbmm__region_transformation__V_39_39);
              }
#line 157 "rbmm.region_transformation.m"
            }
#line 156 "rbmm.region_transformation.m"
            break;
#line 156 "rbmm.region_transformation.m"
          case (MR_Integer) 0:
#line 155 "rbmm.region_transformation.m"
            {
#line 155 "rbmm.region_transformation.m"
              transform_hlds__rbmm__region_transformation__ArgTypes_24 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__ArgTypes0_22, transform_hlds__rbmm__region_transformation__RegionTypes_19);
            }
#line 156 "rbmm.region_transformation.m"
            break;
#line 156 "rbmm.region_transformation.m"
        }
#line 162 "rbmm.region_transformation.m"
        {
#line 162 "rbmm.region_transformation.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__rbmm__region_transformation__TypeVarSet_20, transform_hlds__rbmm__region_transformation__ExistQuantTVars_21, transform_hlds__rbmm__region_transformation__ArgTypes_24, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_37_37, &transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42);
        }
#line 164 "rbmm.region_transformation.m"
        {
#line 164 "rbmm.region_transformation.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__rbmm__region_transformation__PredId_11, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_PredInfo_42_42, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30);
        }
#line 166 "rbmm.region_transformation.m"
        {
#line 166 "rbmm.region_transformation.m"
          MR_Word base;
#line 166 "rbmm.region_transformation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "rbmm.region_transformation.m"
          *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_28 = base;
#line 166 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_transformation__PredId_11));
#line 166 "rbmm.region_transformation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_Processed_0_27));
#line 166 "rbmm.region_transformation.m"
        }
#line 165 "rbmm.region_transformation.m"
      }
#line 136 "rbmm.region_transformation.m"
  }
#line 132 "rbmm.region_transformation.m"
}

#line 122 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
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
    MR_Word transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9;

#line 122 "rbmm.region_transformation.m"
    {
#line 122 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9);
    }
#line 122 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv10_STATE_VARIABLE_ModuleInfo_9));
#line 122 "rbmm.region_transformation.m"
  }
#line 122 "rbmm.region_transformation.m"
}

#line 121 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 121 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 121 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3)
#line 121 "rbmm.region_transformation.m"
{
#line 121 "rbmm.region_transformation.m"
  {
#line 121 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 121 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9;

#line 121 "rbmm.region_transformation.m"
    {
#line 121 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9);
    }
#line 121 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv8_STATE_VARIABLE_ModuleInfo_9));
#line 121 "rbmm.region_transformation.m"
  }
#line 121 "rbmm.region_transformation.m"
}

#line 112 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 112 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 112 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_5)
#line 112 "rbmm.region_transformation.m"
{
#line 112 "rbmm.region_transformation.m"
  {
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 112 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28;
#line 112 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30;

#line 112 "rbmm.region_transformation.m"
    {
#line 112 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), &transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_4), &transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30);
    }
#line 112 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv5_STATE_VARIABLE_NameToVarTable_28));
#line 112 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv4_STATE_VARIABLE_ModuleInfo_30));
#line 112 "rbmm.region_transformation.m"
  }
#line 112 "rbmm.region_transformation.m"
}

#line 111 "rbmm.region_transformation.m"
static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__closure_arg,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_1,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_2,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_3,
#line 111 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_4,
#line 111 "rbmm.region_transformation.m"
  MR_Box transform_hlds__rbmm__region_transformation__wrapper_arg_5,
#line 111 "rbmm.region_transformation.m"
  MR_Box * transform_hlds__rbmm__region_transformation__wrapper_arg_6)
#line 111 "rbmm.region_transformation.m"
{
#line 111 "rbmm.region_transformation.m"
  {
#line 111 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__closure = transform_hlds__rbmm__region_transformation__closure_arg;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28;
#line 111 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30;

#line 111 "rbmm.region_transformation.m"
    {
#line 111 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_3), &transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28, ((MR_Word) transform_hlds__rbmm__region_transformation__wrapper_arg_5), &transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30);
    }
#line 111 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv1_STATE_VARIABLE_Processed_28));
#line 111 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__region_transformation__conv0_STATE_VARIABLE_ModuleInfo_30));
#line 111 "rbmm.region_transformation.m"
  }
#line 111 "rbmm.region_transformation.m"
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
#line 110 "rbmm.region_transformation.m"
  {
#line 110 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__PredIds_23;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__V_31_31;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33;
#line 110 "rbmm.region_transformation.m"
    MR_Word transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35;
#line 111 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv3_PredIds_23;
#line 111 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30;
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25;
#line 112 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33;
#line 121 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35;
#line 122 "rbmm.region_transformation.m"
    MR_Box transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27;

#line 111 "rbmm.region_transformation.m"
    {
#line 111 "rbmm.region_transformation.m"
      mercury__map__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_1[0], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[8], transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_transformation__conv3_PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_0_26)), &transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 111 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__PredIds_23 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv3_PredIds_23);
#line 111 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv2_STATE_VARIABLE_ModuleInfo_30_30);
#line 112 "rbmm.region_transformation.m"
    {
#line 112 "rbmm.region_transformation.m"
      transform_hlds__rbmm__region_transformation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[0]));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 3) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RptaInfoTable_13));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 4) = ((MR_Box) (transform_hlds__rbmm__region_transformation__FormalRegionArgTable_14));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 5) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ActualRegionArgTable_15));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 6) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingTable_16));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 7) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingTable_17));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 8) = ((MR_Box) (transform_hlds__rbmm__region_transformation__RegionInstructionTable_18));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 9) = ((MR_Box) (transform_hlds__rbmm__region_transformation__ResurRenamingAnnoTable_19));
#line 112 "rbmm.region_transformation.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_transformation__V_31_31, 10) = ((MR_Box) (transform_hlds__rbmm__region_transformation__IteRenamingAnnoTable_20));
#line 112 "rbmm.region_transformation.m"
    }
#line 8498 "transform_hlds.rbmm.region_transformation.c"
    transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 112 "rbmm.region_transformation.m"
    {
#line 112 "rbmm.region_transformation.m"
      mercury__list__foldl2_6_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[1], transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, transform_hlds__rbmm__region_transformation__V_31_31, transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_0_24)), &transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 112 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_NameToVarTable_25 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv7_STATE_VARIABLE_NameToVarTable_25);
#line 112 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv6_STATE_VARIABLE_ModuleInfo_33_33);
#line 121 "rbmm.region_transformation.m"
    {
#line 121 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[9], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 121 "rbmm.region_transformation.m"
    transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv9_STATE_VARIABLE_ModuleInfo_35_35);
#line 122 "rbmm.region_transformation.m"
    {
#line 122 "rbmm.region_transformation.m"
      mercury__list__foldl_4_p_0(transform_hlds__rbmm__region_transformation__TypeCtorInfo_53_53, transform_hlds__rbmm__region_transformation__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__region_transformation_scalar_common_2[10], transform_hlds__rbmm__region_transformation__PredIds_23, ((MR_Box) (transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_35_35)), &transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
    }
#line 122 "rbmm.region_transformation.m"
    *transform_hlds__rbmm__region_transformation__STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) transform_hlds__rbmm__region_transformation__conv11_STATE_VARIABLE_ModuleInfo_27);
#line 110 "rbmm.region_transformation.m"
  }
#line 62 "rbmm.region_transformation.m"
}

#line 49 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0(void)
#line 49 "rbmm.region_transformation.m"
{
#line 105 "rbmm.region_transformation.m"
  {
#line 105 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 105 "rbmm.region_transformation.m"
    return (MR_String) "remove_region";
#line 105 "rbmm.region_transformation.m"
  }
#line 49 "rbmm.region_transformation.m"
}

#line 48 "rbmm.region_transformation.m"
MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0(void)
#line 48 "rbmm.region_transformation.m"
{
#line 104 "rbmm.region_transformation.m"
  {
#line 104 "rbmm.region_transformation.m"
    MR_bool transform_hlds__rbmm__region_transformation__succeeded;

#line 104 "rbmm.region_transformation.m"
    return (MR_String) "create_region";
#line 104 "rbmm.region_transformation.m"
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
